package gl4java.awt;

import gl4java.*;
import gl4java.drawable.*;
import gl4java.drawable.utils.*;

import java.awt.*;
import java.awt.geom.*;
import java.awt.image.*;
import java.awt.event.*;

/**
 * This is meant as an base class writing
 * easy offscreen render functions. 
 *
 * <p>
 *
 * If you are interessting in further Documentation and/or
 * the history of GL4Java follow the following link.
 * 
 * <pre>
	<a href="../../GL4Java.html">The GL4Java Documentation</a>
 * </pre>
 * <p>
 *
 * There are two ways of using a GLOffScreenDrawable: the {@link
 * gl4java.drawable.GLEventListener} model or the subclassing model. Earlier
 * versions of the system only supported the subclassing model. The
 * default implementations of {@link #init}, {@link #display},
 * {@link #reshape} and {@link #doCleanup}
 * now send events to GLEventListeners; they can
 * still be overridden as before to support the subclassing model.
 *
 * <p>
 * If using the subclassing model, you should override the following
 * methods for your needs:
 * <pre>
        <a href="GLOffScreenDrawable.html#init()">preInit - initialisation before creating GLContext</a>
        <a href="GLOffScreenDrawable.html#init()">init - 1st initialisation after creating GLContext</a>
        <a href="GLOffScreenDrawable.html#doCleanup()">doCleanup - OGL cleanup prior to context deletion</a>
        <a href="GLOffScreenDrawable.html#display()">display - render your frame</a>
	<a href="GLOffScreenDrawable.html#reshape(int, int)">reshape - to reshape (window resize), gljResize() is allready invoked !</a>
 * </pre>
 *
 * To check if you can use the GLContext and GL and GLU methods,
 * use the function
 * <pre>
        <a href="GLOffScreenDrawable.html#cvsIsInit()">cvsIsInit</a>
 * </pre>
 * <p>  
 * IF you remove/release a GLOffScreenDrawable,
 * e.g. you want to close/dispose it´s Window (which contains this GLOffScreenDrawable),
 * you HAVE TO call:
 *
 * <pre>
        <a href="GLOffScreenDrawable.html#cvsDispose()">cvsDispose</a>
 * </pre>
 * You should call this before releasing/dispose this Window ! 
 * Also you can overwrite this class,
 * to dispose your own elements, e.g. a Frame etc. - 
 * but be shure that you call
 * cvsDispose implementation call this one !
 * 
 * <p>  
 * We do offer the following Canvas methods.
 *
 * <pre>
        <a href="GLOffScreenDrawable.html#repaint(java.awt.Graphics)">repaint</a>
 * </pre>
 * <p>        
 *
 * @version 	2.0, 21. April 1999
 * @author      Sven Goethel
 *  */
public class GLOffScreenDrawable
	implements GLEnum, GLUEnum,
                   GLDrawable
{
    protected GLContext glj = null;
    public GLFunc gl = null;
    public GLUFunc glu = null;

    protected boolean cvsInitialized=false;

    protected boolean needCvsDispose = false;

    /**
     * Visual pre-set for stencil-bit number, default: 0
     * This value is updated after a GLContext is created with the
     * original updated value of GLContext !
     *
     * @see gl4java.awt.GLOffScreenDrawable#preInit
     * @see gl4java.awt.GLOffScreenDrawable#repaint
     */
    protected int stencilBits = 0;

    /**
     * Visual pre-set for accumulator buffer size, default: 0
     * This value is updated after a GLContext is created with the
     * original updated value of GLContext !
     *
     * @see gl4java.awt.GLOffScreenDrawable#preInit
     * @see gl4java.awt.GLOffScreenDrawable#repaint
     */
    protected int accumSize = 0;

    /**
     * Visual pre-set for stereoView, default: false
     * This value is updated after a GLContext is created with the
     * original updated value of GLContext !
     *
     * @see gl4java.awt.GLOffScreenDrawable#preInit
     * @see gl4java.awt.GLOffScreenDrawable#repaint
     */
    protected boolean stereoView = false;

   /**
    * Visual pre-set for RGBA usage, default: true - of course ;-)
    * This value is updated after a GLContext is created with the
    * original updated value of GLContext !
    *
    * @see gl4java.awt.GLOffScreenDrawable#preInit
    * @see gl4java.awt.GLOffScreenDrawable#repaint
    */
    protected boolean rgba = true;    

   /**
    * The context with witch display lists and textures will be shared.
    *
    * @see gl4java.awt.GLOffScreenDrawable#preInit
    * @see gl4java.awt.GLOffScreenDrawable#repaint
    */
    protected GLContext sharedGLContext;	

   /**
    * The data to hold the offscreen pixels on the java side !
    *
    * @see gl4java.awt.GLOffScreenDrawable#repaint
    */
    protected BufferedImage offImage = null;

    protected int glFormat=0;
    protected int glType=0;
    protected int glComps=0;
    protected int awtFormat=0;

   /**
    * The custom set offscreen Size
    *
    * If this is set to != null, 
    * the offscreen pixmap is used in this size,
    * not in the components-size (-> faster if smaller)
    *
    * @see gl4java.awt.GLOffScreenDrawable#setOffScreenSize
    * @see gl4java.awt.GLOffScreenDrawable#getOffScreenSize
    */
    protected Dimension offScrnSize = null;
    protected boolean offScrnSizeChanged=false;

    // The list of GLEventListeners
    private GLEventListenerList listeners = new GLEventListenerList();

    static {
	if(GLContext.doLoadNativeLibraries(null, null, null)==false)
	  System.out.println("GLOffScreenDrawable could not load def. native libs.");
    }

    /**
     *
     * Constructor
     *
     * @param gl_Name     The name of the GLFunc implementation
     *                    If gl_Name==null, the default class will be used !
     *
     * @param glu_Name    The name of the GLUFunc implementation
     *                    If gl_LibName==null, the default class will be used !
     *
     * @param size        The offscreen Size 
     */
    public GLOffScreenDrawable( String gl_Name, 
			     String glu_Name,
			     Dimension size
		           )
    {
	if( (gl=GLContext.createGLFunc(gl_Name)) ==null)
	{
	  System.out.println("GLFunc implementation "+gl_Name+" not created");
	}
	if( (glu=GLContext.createGLUFunc(glu_Name)) ==null)
	{
	  System.out.println("GLUFunc implementation "+glu_Name+" not created");
	}
	offScrnSizeChanged=true;
	offScrnSize=size; 
    }

    /**
     *
     * Constructor
     *
     * @param size        The offscreen Size 
     */
    public GLOffScreenDrawable(Dimension size )
    {
	this(null, null, size);
    }

    /**
     * Used to return the created GLContext
     */
    public final GLContext getGLContext() { return glj; }

   /**
    * Get the customers offscreen Size
    *
    * If this is set, 
    * the offscreen pixmap is used in this size,
    * not in the components-size (-> faster if smaller)
    *
    * @see gl4java.awt.GLOffScreenDrawable#offScrnSize
    * @see gl4java.awt.GLOffScreenDrawable#setSize
    */
    public Dimension getSize()
    { return offScrnSize; }

   /**
    * The customers offscreen Size
    *
    * If this is set, 
    * the offscreen pixmap is used in this size,
    * not in the components-size (-> faster if smaller)
    *
    * @see gl4java.awt.GLOffScreenDrawable#offScrnSize
    * @see gl4java.awt.GLOffScreenDrawable#getOffScreenSize
    */
    public void setSize(Dimension size)
    {
    	if((size!=null && size.equals(offScrnSize)==false) ||
	   size!=offScrnSize
	  )
	{
    		offScrnSizeChanged=true;
                offScrnSize=size; 
	        initDrawable();
	}
    }

    /**
     * The data to hold the offscreen pixels on the java side !
     *
     * @see gl4java.awt.GLOffScreenDrawable#repaint
     */
    public BufferedImage getImage()
    {
    	return offImage;
    }

    /**
     * The data to hold the offscreen pixels on the java side !
     *
     * @param gr	the Graphics which should draw
     * @param x         the destination x pos to draw
     * @param y         the destination y pos to draw
     * @param width     the destination width to draw
     * @param height    the destination height to draw
     * @param notifiedObject the notified Object for proceding
     */
    public void drawImage(Graphics gr, int x, int y, int width, int height,
                          ImageObserver notifiedObject)
    {
	    gr.drawImage(offImage, x, y, width, height, 
                         notifiedObject);
    }
	     
    /**
     * The format of GL pixel data
     *
     * @see gl4java.GLFunc#glReadPixels
     */
    public int getGLFormat()
    {
    	return glFormat;
    }

    /**
     * The type of GL pixel data
     *
     * @see gl4java.GLFunc#glReadPixels
     */
    public int getGLType()
    {
    	return glType;
    }

    /**
     * The number of byte components per pixel
     *
     * @see gl4java.GLFunc#glReadPixels
     */
    public int getGLComponents()
    {
    	return glComps;
    }

    /**
     * The AWT BufferedImage Type
     */
    public int getAwtFormat()
    {
    	return awtFormat;
    }

    /**
     * The initialisation procedure
     *
     * must be called by the user at least once,
     * best after adding the GLEventListener's !
     *
     * @see gl4java.awt.GLOffScreenDrawable#repaint
     */
    public synchronized final void initDrawable()
    {
	if(glj == null || offScrnSizeChanged  )
	{
		cvsDispose();
		preInit();
		glj = GLContext.createOffScreenCtx ( 
				      gl, glu, 
		                      stereoView,
				      rgba, stencilBits, accumSize,
				      sharedGLContext,
				      offScrnSize
				      );

		if(glj!=null)
		{
			stencilBits = glj.getStencilBitNumber();
			accumSize = glj.getAccumSize();
			stereoView = glj.isStereoView();
			rgba = glj.isRGBA();
		}
		if(offImage!=null)
			offImage.flush();
		offImage=null;
		offScrnSizeChanged=false;

		init();
	        Dimension size = getSize();
		reshape(size.width, size.height);

		if(glj!=null && glj.gljIsInit())
			cvsInitialized=true;
	} 
	repaint();
    }

    Graphics gr = null;
    DataBufferInt dbInt = null;
    DataBufferUShort dbUShort = null;
    DataBufferByte dbByte = null;

    /**
     * this function can be called to force a repaint
     *
     * Repaints this component. 
     *
     * This method causes a call to this component's update method 
     * as soon as possible.
     *
     * This is the thread save rendering-method called by yourself.
     * The actual thread will be set to highes priority befor calling
     * 'display'. After 'display' the priority will be reset !
     *
     * 'gljFree' will be NOT called after 'display'.
     * 
     * We tested the above to use multi-threading and
     * for the demonstration 'glDemos' it works ;-)) !
     *
     * BE SURE, if you want to call 'display' by yourself
     * (e.g. in the run method for animation)
     * YOU HAVE TO CALL sDisplay  -- OR YOU MUST KNOW WHAT YOU ARE DOING THEN !
     *
     * @return 		void
     *
     * @see gl4java.awt.GLOffScreenDrawable#display
     * @see gl4java.awt.GLEventListener#preDisplay
     * @see gl4java.awt.GLEventListener#display
     * @see gl4java.awt.GLEventListener#postDisplay
     */ 
    public synchronized final void repaint()
    {
        boolean ok = true;

	long _s = System.currentTimeMillis();

	if(!cvsIsInit())
		return;

        listeners.sendPreDisplayEvent(this);

	if( glj.gljMakeCurrent() == false ) {
		System.out.println("GLOffScreenDrawable: problem in use() method");
		return;
        }

	if(ok) 
	{
	    display();
	    _f_dur_self = System.currentTimeMillis()-_s;
	    if(GLContext.gljClassDebug)
	    {
	    	_f_dur_self_sum+=_f_dur_self;
		glj.gljCheckGL();
	    }

	    Dimension size = offScrnSize;
	    int w=size.width;
	    int h=size.height;

	    long _s_tst = System.currentTimeMillis();

	    if(offImage==null || 
	       offImage.getHeight()!=h  || offImage.getWidth()!=w)
	    {
	        GLCapabilities caps = glj.getGLCapabilities();

    		switch ( GLContext.getNativeOSType() )
		{
		    case GLContext.OsWindoof:
	        	if(caps.getAlphaBits()>0)
				awtFormat = BufferedImage.TYPE_INT_ARGB;
	        	else
				awtFormat = BufferedImage.TYPE_INT_RGB;
			break;
		    case GLContext.OsX11:
		    case GLContext.OsMac9:
		    case GLContext.OsMacX:
		    case GLContext.OsUnknown:
		    default:
	        	if(caps.getAlphaBits()>0)
		    		awtFormat = BufferedImage.TYPE_4BYTE_ABGR;
	        	else
		    		awtFormat = BufferedImage.TYPE_3BYTE_BGR;
			break;
		}

	    	if(offImage!=null)
			offImage.flush();

		offImage = new BufferedImage(w,h,awtFormat);

	        dbByte=null;
	        dbUShort=null;
	        dbInt=null;

		switch (awtFormat)
		{
			case BufferedImage.TYPE_3BYTE_BGR:
			        if(GLContext.gljClassDebug)
				System.out.println("awt=3BYTE_BGR, gl=BGR,UNSIGNED_BYTE");
				glFormat = GL_BGR;
				glType   = GL_UNSIGNED_BYTE;
				glComps  = 3;
			        dbByte   = (DataBufferByte)
				           offImage.getRaster().getDataBuffer();
				break;
			case BufferedImage.TYPE_4BYTE_ABGR:
			        if(GLContext.gljClassDebug)
				System.out.println("awt=4BYTE_ABGR, gl=BGRA,UNSIGNED_INT_8_8_8_8");
				glFormat = GL_BGRA;
				glType   = GL_UNSIGNED_INT_8_8_8_8;
				glComps  = 4;
			        dbByte   = (DataBufferByte)
				           offImage.getRaster().getDataBuffer();
				break;
			case BufferedImage.TYPE_INT_RGB:
			        if(GLContext.gljClassDebug)
				System.out.println("awt=INT_RGB, gl=BGRA,UNSIGNED_BYTE");
				glFormat = GL_BGRA;
				glType   = GL_UNSIGNED_BYTE;
				glComps  = 4;
			        dbInt    = (DataBufferInt)
				           offImage.getRaster().getDataBuffer();
				break;
			case BufferedImage.TYPE_INT_ARGB:
			        if(GLContext.gljClassDebug)
				System.out.println("awt=INT_ARGB, gl=BGRA,UNSIGNED_BYTE");
				glFormat = GL_BGRA;
				glType   = GL_UNSIGNED_BYTE;
				glComps  = 4;
			        dbInt    = (DataBufferInt)
				           offImage.getRaster().getDataBuffer();
				break;
			case BufferedImage.TYPE_INT_BGR:
			        if(GLContext.gljClassDebug)
				System.out.println("awt=INT_BGR, gl=BGRA,UNSIGNED_INT_8_8_8_8");
				glFormat = GL_BGRA;
				glType   = GL_UNSIGNED_INT_8_8_8_8;
				glComps  = 4;
			        dbInt    = (DataBufferInt)
				           offImage.getRaster().getDataBuffer();
				break;
			case BufferedImage.TYPE_USHORT_555_RGB:
			        if(GLContext.gljClassDebug)
				System.out.println("awt=USHORT_555_RGB, gl=RGBA,UNSIGNED_INT_5_5_5_1");
				glFormat = GL_RGBA;
				glType   = GL_UNSIGNED_SHORT_5_5_5_1;
				glComps  = 2;
			        dbUShort = (DataBufferUShort)
				           offImage.getRaster().getDataBuffer();
				break;
			case BufferedImage.TYPE_USHORT_565_RGB:
			        if(GLContext.gljClassDebug)
				System.out.println("awt=USHORT_565_RGB, gl=RGB,UNSIGNED_INT_5_6_5");
				glFormat = GL_RGB;
				glType   = GL_UNSIGNED_SHORT_5_6_5;
				glComps  = 2;
			        dbUShort = (DataBufferUShort)
				           offImage.getRaster().getDataBuffer();
				break;
		}
	    } 

	    if(dbByte!=null)
		    glj.gljReadPixelGL2AWT(w, 0,0, 0, 0, w, h, glFormat, glType,
				   glj.isDoubleBuffer()?GL_BACK:GL_FRONT,
				   dbByte.getData());
	    else if(dbUShort!=null)
		    glj.gljReadPixelGL2AWT(w, 0,0, 0, 0, w, h, glFormat, glType,
				   glj.isDoubleBuffer()?GL_BACK:GL_FRONT,
				   dbUShort.getData());
	    else if(dbInt!=null)
		    glj.gljReadPixelGL2AWT(w, 0,0, 0, 0, w, h, glFormat,glType,
				   glj.isDoubleBuffer()?GL_BACK:GL_FRONT,
				   dbInt.getData());

	    //glj.gljSwap(); // no true swapping with offscreen buffers ..

	    if(GLContext.gljClassDebug)
	    	_f_dur_tst_sum+=System.currentTimeMillis()-_s_tst;

	    if(GLContext.gljClassDebug)
		glj.gljCheckGL();
	    glj.gljFree(); // enable ctx for threads ...

	    _f_dur_total = System.currentTimeMillis()-_s;
	    if(GLContext.gljClassDebug)
	    {
	    	_f_dur_total_sum+=_f_dur_total;
		if(++_f_dur_times==100)
		{
			System.out.println("self p 100: "+
				(double)(_f_dur_self_sum/100)/1000.0+" s");

			System.out.println("tst p 100: "+
				(double)(_f_dur_tst_sum/100)/1000.0+" s");

			System.out.println("gl-bitblit p 100: "+
				(double)((_f_dur_total_sum-_f_dur_self_sum)/100)/1000.0+" s");
			System.out.println("total p 100: "+
				(double)(_f_dur_total_sum/100)/1000.0+" s");

			_f_dur_self_sum=0;
			_f_dur_tst_sum=0;
			_f_dur_total_sum=0;
			_f_dur_times=0;
		}
	    }
	}
        listeners.sendPostDisplayEvent(this);
    }

    /**
     *
     * This is the rendering-method called by repaint 
     *
     * <p>
     * The default implementation of display() sends display events to
     * all {@link gl4java.drawable.GLEventListener}s associated with this
     * GLOffScreenDrawable, and automatically calls {@link
     * gl4java.GLContext#gljMakeCurrent} and {@link
     * gl4java.GLContext#gljFree} as necessary.
     *
     * <p>}
     * If you use the subclassing model (as opposed to the
     * GLEventListener model), your subclass will redefine this to
     * perform its OpenGL drawing.
     *
     * <p>
     * BE SURE, if you want to call 'display' by yourself
     * (e.g. in the run method for animation)
     * YOU HAVE TO CALL sDisplay !
     *
     * 'sDisplay' manages a semaphore to avoid reentrance of
     * the display function !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
     *
     * @return 		void
     *
     * @see gl4java.awt.GLOffScreenDrawable#sDisplay
     * @see gl4java.awt.GLOffScreenDrawable#paint
     * @see gl4java.drawable.GLEventListener#display
     */ 
    public void display()
    {
        listeners.sendDisplayEvent(this);
    }

    /**
     *
     * This is your pre-init method.
     * preInit is called just BEFORE the GL-Context is created.
     * You should override preInit, to initialize your visual-stuff,
     * like the protected vars: doubleBuffer and stereoView
     *
     * @return 		void
     *
     * @see	gl4java.awt.GLOffScreenDrawable#paint
     * @see	gl4java.awt.GLOffScreenDrawable#stereoView
     * @see	gl4java.awt.GLOffScreenDrawable#rgba
     * @see	gl4java.awt.GLOffScreenDrawable#stencilBits
     * @see	gl4java.awt.GLOffScreenDrawable#accumSize
     */ 
    public void preInit()
    {
    }

    /**
     *
     * init is called right after the GL-Context is initialized.
     * The default implementation calls init() on all of this
     * component's GLEventListeners.
     *     
     * <p>
     * If using the subclassing model, you can override this to
     * perform one-time OpenGL initializations such as setting up
     * lights and display lists.
     *
     * @return 		void
     *
     * @see	gl4java.awt.GLOffScreenDrawable#paint
     * @see gl4java.drawable.GLEventListener#init
     */ 
    public void init()
    {
        listeners.sendInitEvent(this);
    }

    /**
     * This method is used to clean up any OpenGL stuff (delete textures
     * or whatever) prior to actually deleting the OpenGL context.
     * You should override this with your own version, if you need to do
     * any cleanup work at this phase.
     * This functions is called within cvsDispose
     *
     * @return 		void
     *
     * @see	gl4java.awt.GLOffScreenDrawable#cvsDispose
     * @see gl4java.drawable.GLEventListener#cleanup
     */
    public void doCleanup()
    {
        listeners.sendCleanupEvent(this);
    }

    /**
     * This function returns, if everything is init: the GLContext,
     * the and the users init function 
     * This value is set in the paint method!
     *
     * @return 	boolean
     *
     * @see	gl4java.awt.GLOffScreenDrawable#paint
     * @see	gl4java.awt.GLOffScreenDrawable#init
     */ 
    public boolean cvsIsInit()
    {
    	return cvsInitialized;
    }

    protected long _f_dur_self   = 0;
    protected long _f_dur_self_sum   = 0;
    protected long _f_dur_tst_sum   = 0;
    protected long _f_dur_total  = 0;
    protected long _f_dur_total_sum  = 0;
    protected int _f_dur_times  = 0;

    /**
     *
     * This ´reshape´ method will be invoked after the first paint command
     * after GLCanvas.componentResize is called AND only if ´gljMakeCurrent´ was
     * successful (so a call of gljMakeCurrent is redundant).
     * ´reshape´ is not an overloading of java.awt.Component.reshape,
     * ´reshape´ is more like ´glut´-reshape.
     * 
     * <p>
     * GLCanvas.reshape already has a simple default implementation,
     * which calls ´gljResize´ and ´glViewport´. It also sends the
     * reshape() event to all GLEventListeners. If using the
     * GLEventListener model, it may not be necessary to do anything
     * in your event listener's reshape() method; if using the
     * subclassing model, it may not be necessary to override this.
     *
     * <p>
     * The needed call to ´gljResize´ is done by the invoker paint !
     *
     * @param width		the new width
     * @param height	the new height
     * @return 		void
     *
     * @see gl4java.awt.GLOffScreenDrawable#paint
     * @see gl4java.awt.GLOffScreenDrawable#sDisplay
     * @see gl4java.drawable.GLEventListener#reshape
     */ 
    public void reshape( int width, int height )
    {
        if(GLContext.gljClassDebug)
          System.out.println("GLOffScreenDrawable::reshape size("+getSize()+")");
	gl.glViewport(0,0, width, height);
        listeners.sendReshapeEvent(this, width, height);
    }

    /**
      * You should call this before releasing/dispose this Window ! 
      * Also you can overwrite this class,
      * to dispose your own elements, e.g. a Frame etc. - 
      * but be shure that you call
      * cvsDispose implementation call this one !
      * 
      * This function calls gljDestroy of GLContext !
      *
      * @see gl4java.GLContext#gljDestroy
      * @see gl4java.awt.GLOffScreenDrawable#doCleanup
      * @see gl4java.drawable.GLEventListener#cleanup
      */
    public void cvsDispose()
    {
        cvsInitialized = false;
	if (glj != null)
	{
		if (glj.gljIsInit())
		{
			/* Sometimes the Microsoft VM calls the
			   Applet.stop() method but doesn't have
			   permissions to do J/Direct calls, so
			   this whole block of code will throw a
			   security exception.  If this happens,
			   however, windowClosing() will still
			   call us again later and we will have
			   another opportunity to shut down the
			   context, so it all works out fine. */
			try
			{
				glj.gljFree();
				doCleanup();
				//locks and free's GLContext	
				glj.setEnabled(false); 
				glj.gljDestroy();
        			needCvsDispose = false;
			}
			catch (Exception ex)
                	{
        			needCvsDispose = true;
                	}
		}
	}

	// Setting glj to null will simply cause paint() to re-initialize.
	// We don't want that to happen, so we will leave glj non-null.
    }

    /**
     * does nothing than:
     * 
     * @see	gl4java.awt.GLCanvas#cvsDispose
     */
    protected void finalize()
    	throws Throwable
    {
	if(GLContext.gljClassDebug)
		System.out.println("GLCanvas finalize ..");
	  
        cvsDispose();
	super.finalize();
    }

    /**
     * get methods
     */
    public final int cvsGetWidth() {
        return getSize().width;
     }
    public final int cvsGetHeight() {
        return getSize().height;
     }

    //----------------------------------------------------------------------
    // Implementation of GLDrawable
    //
    /**
     * the components listener's should be implemented also !
     * since JDK 1.1
     */
    public void addComponentListener(ComponentListener l)
    { }
    public void removeComponentListener(ComponentListener l)
    { }
    public void addFocusListener(FocusListener l)
    { }
    public void addKeyListener(KeyListener l)
    { }
    public void removeFocusListener(FocusListener l)
    { }
    public void addMouseListener(MouseListener l)
    { }
    public void removeMouseListener(MouseListener l)
    { }
    public void addMouseMotionListener(MouseMotionListener l)
    { }
    public void removeMouseMotionListener(MouseMotionListener l)
    { }

    public void addGLEventListener(GLEventListener listener) {
        listeners.add(listener);
    }

    public void removeGLEventListener(GLEventListener listener) {
        listeners.remove(listener);
    }

    public GLFunc getGL() {
        return gl;
    }

    public GLUFunc getGLU() {
        return glu;
    }
}
