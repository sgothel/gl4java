import java.awt.*;
import java.awt.event.*;
import java.nio.*;
import java.util.*;
import gl4java.*;
import gl4java.awt.*;
import gl4java.drawable.*;

/** <P> A port of NVidia's [tm] Vertex Array Range demonstration to
    OpenGL[tm] for Java[tm] and the Java programming language. The
    current web site for the demo (which does not appear to contain
    the original C++ source code for this demo) is <a href =
    "http://developer.nvidia.com/view.asp?IO=Using_GL_NV_fence">here</a>. </P>

    <P> This demonstration requires the following:

    <ul>
    <li> A JDK 1.4 implementation (Beta 3 or later)
    <li> an NVidia GeForce-based card
    <li> a recent set of drivers
    </ul>

    </P>

    <P> This demonstration illustrates the effective use of the
    java.nio direct buffer classes in JDK 1.4 to access memory outside
    of the Java garbage-collected heap, in particular that returned
    from the NVidia-specific routine wglAllocateMemoryNV. This memory
    region is used in conjunction with glVertexArrayRangeNV. </P>

    <P> In contrast to the C++ version of this demo, the Java
    programming language version compares the following two
    configurations:

    <ul>
    <li> JDK 1.4 NIO buffers + VAR extension
    <li> pre-JDK 1.4-style OpenGL for Java glVertexPointer calls
    taking float[]
    </ul>

    The glVertexPointer calls contain a long-standing bug wherein if a
    garbage collection occurs at the wrong time, the arrays containing
    the data passed down to glVertexPointer may move, leading to
    either incorrect data being drawn or a program crash. This is
    obviously not suitable for production systems. The solution is to
    upgrade to JDK 1.4 and use java.nio direct buffers for the storage
    passed down to glVertexPointer and similar routines which take
    pointers to persistent regions of memory, regardless of whether an
    extension like NVidia's vertex array range is used. More
    information on this topic is available <a href =
    "http://java.sun.com/products/jfc/tsc/articles/jcanyon/">here</a>. </P>

    <P> On a 750 MHz PIII with an SDRAM memory bus and a GeForce 256
    running the Java HotSpot[tm] Client VM and OpenGL for Java 2.8,
    this demonstration attains 90% of the speed of the compiled C++
    code, with a frame rate of 27 FPS, compared to 30 FPS for the C++
    version. On higher-end hardware (a dual 667 MHz PIII with RDRAM
    and a GeForce 2) the demo currently attains between 65% and 75% of
    C++ speed with the HotSpot Client and Server compilers,
    respectively. </P> */

public class VertexArrayRange {
  private boolean[] b = new boolean[256];
  private GLFunc14 gl;
  private GLUFunc14 glu;
  private static final int SIZEOF_FLOAT = 4;
  private static final int STRIP_SIZE  = 48;
  private int tileSize   = 9 * STRIP_SIZE;
  private int numBuffers = 4;
  private int bufferLength = 1000000;
  private int bufferSize   = bufferLength * SIZEOF_FLOAT;
  private static final int SIN_ARRAY_SIZE = 1024;
  

  private FloatBuffer bigArrayVar;
  private int[][]    elements;
  private float[]    xyArray;

  // NOTE: we could as well use direct buffers for the "slow" vertices
  // and normals. However, we do not use FloatBuffers to wrap these
  // float[] arrays to prevent breaking the Class Hierarchy Analysis
  // which (currently) allows inlining of all accessors in the
  // innermost loop. Avoiding mixing direct and non-direct java.nio
  // buffers in the same application is currently recommended
  // practice.
  static class VarBuffer {
    public FloatBuffer fastVertices;
    public FloatBuffer fastNormals;
    public int        fence;
    public float[]    slowVertices;
    public float[]    slowNormals;
  }
  private VarBuffer[] buffers;
  
  private float[] sinArray;
  private float[] cosArray;

  // Primitive: GL_QUAD_STRIP, GL_LINE_STRIP, or GL_POINTS
  private int primitive = GLEnum.GL_QUAD_STRIP;

  // Animation parameters
  private float hicoef = .06f;
  private float locoef = .10f;
  private float hifreq = 6.1f;
  private float lofreq = 2.5f;
  private float phaseRate = .02f;
  private float phase2Rate = -0.12f;
  private float phase  = 0;
  private float phase2 = 0;

  // Temporaries for computation
  float[] ysinlo = new float[STRIP_SIZE];
  float[] ycoslo = new float[STRIP_SIZE];
  float[] ysinhi = new float[STRIP_SIZE];
  float[] ycoshi = new float[STRIP_SIZE];

  // For thread-safety when dealing with keypresses
  private volatile boolean mustChangeState = false;

  // Frames-per-second computation
  private boolean firstProfiledFrame;
  private int     profiledFrameCount;
  private int     numDrawElementsCalls;
  private long startTimeMillis;

  static class PeriodicIterator {
    public PeriodicIterator(int arraySize,
                            float period,
                            float initialOffset,
                            float delta) {
      float arrayDelta =  arraySize * (delta / period); // floating-point steps-per-increment
      increment = (int)(arrayDelta * (1<<16));          // fixed-point steps-per-increment

      float offset = arraySize * (initialOffset / period); // floating-point initial index
      initOffset = (int)(offset * (1<<16));                // fixed-point initial index
        
        arraySizeMask = 0;
        int i = 20; // array should be reasonably sized...
        while((arraySize & (1<<i)) == 0) {
          i--;
        }
        arraySizeMask = (1<<i)-1;        
        index = initOffset;
    }

    public PeriodicIterator(PeriodicIterator arg) {
      this.arraySizeMask = arg.arraySizeMask;
      this.increment = arg.increment;
      this.initOffset = arg.initOffset;
      this.index = arg.index;
    }

    public int getIndex() {
      return (index >> 16) & arraySizeMask;
    }

    public void incr() {
      index += increment;
    }

    public void decr() {
      index -= increment;
    }

    public void reset() {
      index = initOffset;
    }

    //----------------------------------------------------------------------
    // Internals only below this point
    //

    private int arraySizeMask;
    // fraction bits == 16
    private int increment;
    private int initOffset;
    private int index;
  }

  public static void usage(String className) {
    System.out.println("usage: java " + className + " [-slow]");
    System.out.println("-slow flag starts up using data in the Java heap");
    System.exit(0);
  }

  public static void main(String[] args) {
    new VertexArrayRange().run(args);
  }

  public void run(String[] args) {
    boolean startSlow = false;

    if (args.length > 1) {
      usage(getClass().getName());
    }

    if (args.length == 1) {
      if (args[0].equals("-slow")) {
        startSlow = true;
      } else {
        usage(getClass().getName());
      }
    }

    if (!startSlow) {
      setFlag('v', true);   // VAR on
    }
    setFlag(' ', true);   // animation on
    setFlag('i', true);   // infinite viewer and light

    // FIXME: add glGetString
    Frame frame = new Frame("Very Simple NV_vertex_array_range demo");
    frame.setLayout(new BorderLayout());
    GLCapabilities caps = new GLCapabilities(true, false, true, 0, 0, 0, 0, 0);

    GLAnimCanvas canvas = GLDrawableFactory.getFactory().createGLAnimCanvas(caps, 800, 800);
    VARListener listener = new VARListener();
    canvas.addGLEventListener(listener);
    canvas.setUseRepaint(false);
    canvas.setUseFpsSleep(false);
    canvas.setUseYield(false);
    frame.add(canvas, BorderLayout.CENTER);
    frame.pack();
    frame.show();

    canvas.requestFocus();
    canvas.start();
  }

  //----------------------------------------------------------------------
  // Internals only below this point
  //

  private void setFlag(char key, boolean val) {
    b[((int) key) & 0xFF] = val;
  }

  private boolean getFlag(char key) {
    return b[((int) key) & 0xFF];
  }
  
  private static boolean testPresent(String function) {
    return GLContext.gljTestGLProc(function, false);
  }

  private static void ensurePresent(String function) {
    if (!testPresent(function)) {
      throw new RuntimeException("OpenGL routine \"" + function + "\" not present");
    }
  }

  class VARListener implements GLEventListener, GLEnum {
    public void init(GLDrawable drawable) {
      gl = (GLFunc14) drawable.getGL();
      glu = (GLUFunc14) drawable.getGLU();

      gl.glEnable(GL_DEPTH_TEST);

      ensurePresent("glVertexArrayRangeNV");
      ensurePresent("glGenFencesNV");
      ensurePresent("glSetFenceNV");
      ensurePresent("glTestFenceNV");
      ensurePresent("glFinishFenceNV");
      ensurePresent("glAllocateMemoryNV");
      
      gl.glClearColor(0, 0, 0, 0);

      gl.glEnable(GL_LIGHT0);
      gl.glEnable(GL_LIGHTING);
      gl.glEnable(GL_NORMALIZE);
      gl.glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, new float[]  {.1f, .1f,    0, 1});
      gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, new float[]  {.6f, .6f,  .1f, 1});
      gl.glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, new float[] { 1,    1, .75f, 1});
      gl.glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, 128.f);

      gl.glLightfv(GL_LIGHT0, GL_POSITION, new float[] { .5f, 0, .5f, 0});
      gl.glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, 0);

      // NOTE: it looks like GLUT (or something else) sets up the
      // projection matrix in the C version of this demo.
      gl.glMatrixMode(GL_PROJECTION);
      gl.glLoadIdentity();
      glu.gluPerspective(60, 1.0, 0.1, 100);
      gl.glMatrixMode(GL_MODELVIEW);

      allocateBigArray(true);
      allocateBuffers();

      sinArray = new float[SIN_ARRAY_SIZE];
      cosArray = new float[SIN_ARRAY_SIZE];
    
      for (int i = 0; i < SIN_ARRAY_SIZE; i++) {
        double step = i * 2 * Math.PI / SIN_ARRAY_SIZE;
        sinArray[i] = (float) Math.sin(step);
        cosArray[i] = (float) Math.cos(step);
      }

      if (getFlag('v')) {
        gl.glEnableClientState(GL_VERTEX_ARRAY_RANGE_NV);
        gl.glVertexArrayRangeNV(bufferSize, bigArrayVar);
      }
      gl.glEnableClientState(GL_VERTEX_ARRAY);
      gl.glEnableClientState(GL_NORMAL_ARRAY);

      computeElements();

      drawable.addKeyListener(new KeyAdapter() {
          public void keyTyped(KeyEvent e) {
            dispatchKey(e.getKeyChar());
          }
        });
    }

    private void allocateBuffers() {
      buffers = new VarBuffer[numBuffers];

      int sliceSize = bufferLength / numBuffers;
      int[] fences = new int[1];
      for (int i = 0; i < numBuffers; i++) {
        buffers[i] = new VarBuffer();
        int startIndex = i * sliceSize;
	buffers[i].fastVertices = sliceBuffer(bigArrayVar, startIndex, sliceSize);
	buffers[i].fastNormals  = sliceBuffer(buffers[i].fastVertices, 3,
					      buffers[i].fastVertices.limit() - 3);
        buffers[i].slowVertices = new float[sliceSize];
        buffers[i].slowNormals  = new float[sliceSize];
	gl.glGenFencesNV(1, fences);
	buffers[i].fence = fences[0];
      }
    }

    private void dispatchKey(char k) {
      setFlag(k, !getFlag(k));
      // Quit on escape or 'q'
      if ((k == (char) 27) || (k == 'q')) {
        System.exit(0);
      }
    
      if (k == 'r') {
        if (getFlag(k)) {
          profiledFrameCount = 0;
          numDrawElementsCalls = 0;
          firstProfiledFrame = true;
        }
      }

      if (k == 'w') {
        if (getFlag(k)) {
          primitive = GL_LINE_STRIP;
        } else {
          primitive = GL_QUAD_STRIP;
        }
      }

      if (k == 'p') {
        if (getFlag(k)) {
          primitive = GL_POINTS;
        } else {
          primitive = GL_QUAD_STRIP;
        }
      }

      if (k == 'v') {
        mustChangeState = true;
      }
    
      if (k == 'd') {
        if (getFlag(k)) {
          gl.glDisable(GL_LIGHTING);
        } else {
          gl.glEnable(GL_LIGHTING);
        }
      }
      
      if (k == 'i') {
        if(getFlag(k)) {
          // infinite light
          gl.glLightfv(GL_LIGHT0, GL_POSITION, new float[] { .5f, 0, .5f, 0 });
          gl.glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, 0);
        } else {
          gl.glLightfv(GL_LIGHT0, GL_POSITION, new float[] { .5f, 0, -.5f,1 });
          gl.glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, 1);
        }
      }

      if('h'==k)
        hicoef += .005;
      if('H'==k)
        hicoef -= .005;
      if('l'==k)
        locoef += .005;
      if('L'==k)
        locoef -= .005;
      if('1'==k)
        lofreq += .1f;
      if('2'==k)
        lofreq -= .1f;
      if('3'==k)
        hifreq += .1f;
      if('4'==k)
        hifreq -= .1f;
      if('5'==k)
        phaseRate += .01f;
      if('6'==k)
        phaseRate -= .01f;
      if('7'==k)
        phase2Rate += .01f;
      if('8'==k)
        phase2Rate -= .01f;

      if('t'==k) {
        if(tileSize < 864) {
          tileSize += STRIP_SIZE;
          computeElements();
          System.err.println("tileSize = " + tileSize);
        }
      }

      if('T'==k) {
        if(tileSize > STRIP_SIZE) { 
          tileSize -= STRIP_SIZE;
          computeElements();
          System.err.println("tileSize = " + tileSize);
        }
      }
    }

    public void display(GLDrawable drawable) {
      // Check to see whether to animate
      if (getFlag(' ')) {
        phase += phaseRate;
        phase2 += phase2Rate;
      
        if (phase > (float) (20 * Math.PI)) {
          phase = 0;
        }

        if (phase2 < (float) (-20 * Math.PI)) {
          phase2 = 0;
        }
      }

      PeriodicIterator loX =
        new PeriodicIterator(SIN_ARRAY_SIZE, (float) (2 * Math.PI), phase, (float) ((1.f/tileSize)*lofreq*Math.PI));
      PeriodicIterator loY = new PeriodicIterator(loX);
      PeriodicIterator hiX =
        new PeriodicIterator(SIN_ARRAY_SIZE, (float) (2 * Math.PI), phase2, (float) ((1.f/tileSize)*hifreq*Math.PI));
      PeriodicIterator hiY = new PeriodicIterator(hiX);
    
      if (mustChangeState) {
        if (getFlag('v')) {
          gl.glEnableClientState(GL_VERTEX_ARRAY_RANGE_NV);
          gl.glVertexArrayRangeNV(bufferSize, bigArrayVar);
        } else {
          gl.glDisableClientState(GL_VERTEX_ARRAY_RANGE_NV);
        }
        mustChangeState = false;
      }

      gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
      gl.glPushMatrix();

      gl.glLoadMatrixf(new float[] {
        1, 0, 0, 0,
        0, 1, 0, 0,
        0, 0, 1, 0,
        0, 0, -1, 1
      });

      // FIXME: add mouse interaction
      // camera.apply_inverse_transform();
      // object.apply_transform();

      int cur = 0;
      int numSlabs = tileSize / STRIP_SIZE;

      // Fast case/slow case split. The reason for this is to avoid
      // any potential problems with the compilers not being able to
      // inline the native array accesses if more than one subclass of
      // FloatArray is loaded.

      if (getFlag('v')) {
        // Fast case
        for(int slab = 0; slab < numSlabs; slab++) {
          cur = slab % numBuffers;
          if (slab >= numBuffers) {
            if (!gl.glTestFenceNV(buffers[cur].fence)) {
              gl.glFinishFenceNV(buffers[cur].fence);
            }
          }

          FloatBuffer v = buffers[cur].fastVertices;
          int vertexIndex = 0;

          gl.glVertexPointer(3, GL_FLOAT, 6 * SIZEOF_FLOAT, v);
          gl.glNormalPointer(GL_FLOAT, 6 * SIZEOF_FLOAT, buffers[cur].fastNormals);

          for(int jj=0; jj < STRIP_SIZE; jj++) {
            ysinlo[jj] = sinArray[loY.getIndex()];
            ycoslo[jj] = cosArray[loY.getIndex()]; loY.incr();
            ysinhi[jj] = sinArray[hiY.getIndex()];
            ycoshi[jj] = cosArray[hiY.getIndex()]; hiY.incr();
          }
          loY.decr();
          hiY.decr();
        
          for(int i = 0; i < tileSize; i++) {
            float x = xyArray[i];
            int loXIndex = loX.getIndex();
            int hiXIndex = hiX.getIndex();

            int jOffset = (STRIP_SIZE-1)*slab;
            float nx = locoef * -cosArray[loXIndex] + hicoef * -cosArray[hiXIndex];

            // Help the HotSpot Client Compiler by hoisting loop
            // invariant variables into locals. Note that this may be
            // good practice for innermost loops anyway since under
            // the new memory model operations like accidental
            // synchronization may force any compiler to reload these
            // fields from memory, destroying their ability to
            // optimize.
            float locoef_tmp = locoef;
            float hicoef_tmp = hicoef;
            float[] ysinlo_tmp = ysinlo;
            float[] ysinhi_tmp = ysinhi;
            float[] ycoslo_tmp = ycoslo;
            float[] ycoshi_tmp = ycoshi;
            float[] sinArray_tmp = sinArray;
            float[] xyArray_tmp = xyArray;

            for(int j = 0; j < STRIP_SIZE; j++) {
              float y;
              
              y = xyArray_tmp[j + jOffset];

              float ny;

              v.put(vertexIndex, x);
              v.put(vertexIndex + 1, y);
              v.put(vertexIndex + 2, (locoef_tmp * (sinArray_tmp[loXIndex] + ysinlo_tmp[j]) + 
                                      hicoef_tmp * (sinArray_tmp[hiXIndex] + ysinhi_tmp[j])));
              v.put(vertexIndex + 3, nx);
              ny = locoef_tmp * -ycoslo_tmp[j] + hicoef_tmp * -ycoshi_tmp[j];
              v.put(vertexIndex + 4, ny);
              v.put(vertexIndex + 5, .15f); //.15f * (1.f - sqrt(nx * nx + ny * ny));
              vertexIndex += 6;
            }
            loX.incr();
            hiX.incr();
          }
          loX.reset();
          hiX.reset();

          for (int i = 0; i < elements.length; i++) {
            ++numDrawElementsCalls;
            gl.glDrawElements(primitive, elements[i].length, GL_UNSIGNED_INT, elements[i]);
            if(getFlag('f')) {
              gl.glFlush();
            }
          }
        
          gl.glSetFenceNV(buffers[cur].fence, GL_ALL_COMPLETED_NV);
        }
      } else {
        // Slow case
        for(int slab = 0; slab < numSlabs; slab++) {
          cur = slab % numBuffers;
          if (slab >= numBuffers) {
	    if (!gl.glTestFenceNV(buffers[cur].fence)) {
	      gl.glFinishFenceNV(buffers[cur].fence);
	    }
          }

          float[] v = buffers[cur].slowVertices;
          float[] n = buffers[cur].slowNormals;
          int vertexIndex = 0;

          for(int jj=0; jj < STRIP_SIZE; jj++) {
            ysinlo[jj] = sinArray[loY.getIndex()];
            ycoslo[jj] = cosArray[loY.getIndex()]; loY.incr();
            ysinhi[jj] = sinArray[hiY.getIndex()];
            ycoshi[jj] = cosArray[hiY.getIndex()]; hiY.incr();
          }
          loY.decr();
          hiY.decr();
        
          for(int i = 0; i < tileSize; i++) {
            float x = xyArray[i];
            int loXIndex = loX.getIndex();
            int hiXIndex = hiX.getIndex();

            int jOffset = (STRIP_SIZE-1)*slab;
            float nx = locoef * -cosArray[loXIndex] + hicoef * -cosArray[hiXIndex];

            // Help the HotSpot Client Compiler by hoisting loop
            // invariant variables into locals. Note that this may be
            // good practice for innermost loops anyway since under
            // the new memory model operations like accidental
            // synchronization may force any compiler to reload these
            // fields from memory, destroying their ability to
            // optimize.
            float locoef_tmp = locoef;
            float hicoef_tmp = hicoef;
            float[] ysinlo_tmp = ysinlo;
            float[] ysinhi_tmp = ysinhi;
            float[] ycoslo_tmp = ycoslo;
            float[] ycoshi_tmp = ycoshi;
            float[] sinArray_tmp = sinArray;
            float[] xyArray_tmp = xyArray;

            for(int j = 0; j < STRIP_SIZE; j++) {
              float y;

              y = xyArray_tmp[j + jOffset];

              float ny;

              v[vertexIndex] = x;
              v[vertexIndex + 1] = y;
              v[vertexIndex + 2] = (locoef_tmp * (sinArray_tmp[loXIndex] + ysinlo_tmp[j]) + 
                                    hicoef_tmp * (sinArray_tmp[hiXIndex] + ysinhi_tmp[j]));
              n[vertexIndex] = nx;
              n[vertexIndex + 1] = ny = locoef_tmp * -ycoslo_tmp[j] + hicoef_tmp * -ycoshi_tmp[j];
              n[vertexIndex + 2] = .15f; //.15f * (1.f - sqrt(nx * nx + ny * ny));

              vertexIndex += 3;
            }
            loX.incr();
            hiX.incr();
          }
          loX.reset();
          hiX.reset();

          // NOTE: we don't make the glVertexPointer/glNormalPointer
          // call until this point because the semantics in the
          // "fixed" implementation are that they copy data.
          gl.glVertexPointer(3, GL_FLOAT, 3 * SIZEOF_FLOAT, v);
          gl.glNormalPointer(GL_FLOAT, 3 * SIZEOF_FLOAT, n);

          for (int i = 0; i < elements.length; i++) {
            ++numDrawElementsCalls;
            gl.glDrawElements(primitive, elements[i].length, GL_UNSIGNED_INT, elements[i]);
            if(getFlag('f')) {
              gl.glFlush();
            }
          }

	  gl.glSetFenceNV(buffers[cur].fence, GL_ALL_COMPLETED_NV);
        }
      }

      gl.glPopMatrix();

      gl.glFinishFenceNV(buffers[cur].fence);

      if (getFlag('r')) {
        if (!firstProfiledFrame) {
          if (++profiledFrameCount == 30) {
            long endTimeMillis = System.currentTimeMillis();
            double secs = (endTimeMillis - startTimeMillis) / 1000.0;
            double fps  = 30.0 / secs;
            double ppf  = tileSize * tileSize * 2;
            double mpps = ppf * fps / 1000000.0;
            System.err.println("fps: " + fps + " polys/frame: " + ppf + " million polys/sec: " + mpps +
                               " DrawElements calls/frame: " + (numDrawElementsCalls / 30));
            profiledFrameCount = 0;
            numDrawElementsCalls = 0;
            startTimeMillis = System.currentTimeMillis();
          }
        } else {
          startTimeMillis = System.currentTimeMillis();
          firstProfiledFrame = false;
        
        }
      }
    }

    // Unused routines
    public void cleanup(GLDrawable drawable) {}
    public void preDisplay(GLDrawable drawable) {}
    public void postDisplay(GLDrawable drawable) {}
    public void reshape(GLDrawable drawable, int width, int height) {}
  }

  private void allocateBigArray(boolean tryAgain) {
    float priority = .5f;

    float megabytes = (bufferSize / 1000000.f);
    try {
      bigArrayVar = setupBuffer(gl.glAllocateMemoryNV(bufferSize, 0, 0, priority));
    }
    catch (OutOfMemoryError e1) {
      // Try a higher priority
      try {
	bigArrayVar = setupBuffer(gl.glAllocateMemoryNV(bufferSize, 0, 0, 1.f));
      }
      catch (OutOfMemoryError e2) {
        if (!tryAgain) {
          throw new RuntimeException("Unable to allocate " + megabytes +
                                     " megabytes of fast memory. Giving up.");
        }

        System.err.println("Unable to allocate " + megabytes +
                           " megabytes of fast memory. Trying less.");
        bufferSize /= 2;
        numBuffers /= 2;
        allocateBigArray(false);
        return;
      }
    }

    System.err.println("Allocated " + megabytes + " megabytes of fast memory");
  }

  private FloatBuffer setupBuffer(ByteBuffer buf) {
    buf.order(ByteOrder.nativeOrder());
    return buf.asFloatBuffer();
  }

  private FloatBuffer sliceBuffer(FloatBuffer array,
                                  int sliceStartIndex, int sliceLength) {
    array.position(sliceStartIndex);
    FloatBuffer ret = array.slice();
    array.position(0);
    ret.limit(sliceLength);
    return ret;
  }

  private void computeElements() {
    xyArray = new float[tileSize];
    for (int i = 0; i < tileSize; i++) {
      xyArray[i] = i / (tileSize - 1.0f) - 0.5f;
    }

    elements = new int[tileSize - 1][];
    for (int i = 0; i < tileSize - 1; i++) {
      elements[i] = new int[2 * STRIP_SIZE];
      for (int j = 0; j < 2 * STRIP_SIZE; j += 2) {
        elements[i][j]   =  i      * STRIP_SIZE + (j / 2);
        elements[i][j+1] = (i + 1) * STRIP_SIZE + (j / 2);
      }
    }
  }
}
