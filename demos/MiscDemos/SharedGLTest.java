import java.awt.*;
import gl4java.*;
import gl4java.awt.*;

public class SharedGLTest extends Frame {
  public static void main(String[] args) {
    SharedGLTest t1 = new SharedGLTest();
    t1.setVisible(true);

    do { // Wait until t1 is fully created and displayed.
      if(t1.getGLContext() != null) break;
    }
    while(true);

    SharedGLTest t2 = new SharedGLTest(t1.getGLContext());
    t2.setVisible(true);
  }

  public SharedGLTest() { this(null); }
  public SharedGLTest(GLContext shareWith) {
    super();
    setBounds(50, 0, 200, 200);
    c = new MyCanvas(100, 100, shareWith);
    add(c);
  }

  private MyCanvas c;
  public GLContext getGLContext() { return c.getGLContext(); }

  private class MyCanvas extends GLCanvas {

    public MyCanvas(int w, int h) {
      super(w, h);
    }

    public MyCanvas(int w, int h, GLContext shareWith) {
      super(w, h);
      sharedGLContext = shareWith;
    }

    public void display() {
  	  if( glj.gljMakeCurrent() == false ) {
    		System.out.println("problem in use() method");
		    return;
  	  }

  	  GLFunc gl = glj.getGLFunc();
      buildCallList(gl); // Really build something only once.
      gl.glCallList(callList);


	    glj.gljSwap();
	    glj.gljCheckGL();
  	  glj.gljFree();
    }
  }
  private static int callList;
  private static boolean alreadyDone;
  private static void buildCallList(GLFunc gl) { // Build only one call list for both GLCanvas.
    if(alreadyDone) return;
    alreadyDone = true;

    callList = gl.glGenLists(1);

    gl.glNewList(callList, gl.GL_COMPILE);
  	gl.glClearColor(1f, 0f, 0f, 1f);
  	gl.glClear(gl.GL_COLOR_BUFFER_BIT); // Clear the GLCanvas with red.
  	gl.glEndList();
  }
}



