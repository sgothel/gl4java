/**
 * @(#) GLCanvas.java
 */


package gl4java.awt;

import gl4java.*;
import gl4java.drawable.*;
import gl4java.drawable.utils.*;

import java.awt.*;
import java.awt.event.*;
import java.util.EventListener;

/**
 * This is meant as an base class writing
 * easy render functions. A clean usage of multi-threading compatible
 * with JAVA2 is implemented in GLAnimCanvas !
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
 * There are two ways of using a GLCanvas: the {@link
 * gl4java.drawable.GLEventListener} model or the subclassing model. Earlier
 * versions of OpenGL for Java only supported the subclassing model.
 * The default implementations of {@link #init}, {@link #display}, 
 * {@link #reshape} and {@link #doCleanup} 
 * now send events to GLEventListeners; they can
 * still be overridden as before to support the subclassing model.
 * 
 * <p>
 * If using the subclassing model, you should override the following
 * methods for your needs:
 * <pre>
        <a href="GLCanvas.html#init()">preInit - initialisation before creating GLContext</a>
        <a href="GLCanvas.html#init()">init - 1st initialisation after creating GLContext</a>
        <a href="GLCanvas.html#doCleanup()">doCleanup - OGL cleanup prior to context deletion</a>
        <a href="GLCanvas.html#display()">display - render your frame</a>
	<a href="GLCanvas.html#reshape(int, int)">reshape - to reshape (window resize), gljResize() is allready invoked !</a>
 * </pre>
 *
 * To check if you can use the GLContext and GL and GLU methods,
 * use the function
 * <pre>
        <a href="GLCanvas.html#cvsIsInit()">cvsIsInit</a>
 * </pre>
 * <p>  
 * IF you remove/release a GLCanvas,
 * e.g. you want to close/dispose it´s Window (which contains this GLCanvas),
 * you HAVE TO call:
 *
 * <pre>
        <a href="GLCanvas.html#cvsDispose()">cvsDispose</a>
 * </pre>
 * You should call this before releasing/dispose this Window ! 
 * Also you can overwrite this class,
 * to dispose your own elements, e.g. a Frame etc. - 
 * but be shure that you call
 * cvsDispose implementation call this one !
 * 
 * <p>  
 * We do override the following Canvas methods.
 *
 * <pre>
        <a href="GLCanvas.html#update(java.awt.Graphics)">update</a>
        <a href="GLCanvas.html#paint(java.awt.Graphics)">paint</a>
 * </pre>
 * <p>        
 *
 * @see gl4java.awt.GLAnimCanvas
 * @version 	2.0, 21. April 1999
 * @author      Sven Goethel
 *  */
public class GLCanvas extends Canvas
	implements GLEnum, GLUEnum,
		   ComponentListener, WindowListener, MouseListener,
                   GLDrawable
{
    protected GLContext glj = null;
    public GLFunc gl = null;
    public GLUFunc glu = null;

    protected Dimension size = null;
    protected boolean mustResize = false;
    protected boolean isInit = false;

    protected boolean needCvsDispose = false;

    /**
     * Visual pre-set for doubleBuffer, default: true
     * This value is updated after a GLContext is created with the
     * original updated value of GLContext !
     *
     * @see gl4java.awt.GLCanvas#preInit
     * @see gl4java.awt.GLCanvas#paint
     */
    protected boolean doubleBuffer = true;

    /**
     * Visual pre-set for stencil-bit number, default: 0
     * This value is updated after a GLContext is created with the
     * original updated value of GLContext !
     *
     * @see gl4java.awt.GLCanvas#preInit
     * @see gl4java.awt.GLCanvas#paint
     */
    protected int stencilBits = 0;

    /**
     * Visual pre-set for accumulator buffer size, default: 0
     * This value is updated after a GLContext is created with the
     * original updated value of GLContext !
     *
     * This value has a special behavior.
     * For input - within the contructor,
     * it is the value for each component !
     *
     * The output value, after the constructor returns,
     * it is the summary of all accumulation bits of all components !
     *
     * @see gl4java.awt.GLCanvas#preInit
     * @see gl4java.awt.GLCanvas#paint
     */
    protected int accumSize = 0;

    /**
     * Visual pre-set for stereoView, default: false
     * This value is updated after a GLContext is created with the
     * original updated value of GLContext !
     *
     * @see gl4java.awt.GLCanvas#preInit
     * @see gl4java.awt.GLCanvas#paint
     */
    protected boolean stereoView = false;

   /**
    * Visual pre-set for RGBA usage, default: true - of course ;-)
    * This value is updated after a GLContext is created with the
    * original updated value of GLContext !
    *
    * @see gl4java.awt.GLCanvas#preInit
    * @see gl4java.awt.GLCanvas#paint
    */
    protected boolean rgba = true;    

    protected GLCapabilities capabilities = null;

   /**
    * Visual pre-set for RGBA usage, default: true - of course ;-)
    * This value is updated after a GLContext is created with the
    * original updated value of GLContext !
    *
    * @see gl4java.awt.GLCanvas#preInit
    * @see gl4java.awt.GLCanvas#paint
    */
    protected boolean createOwnWindow = false;

   /**
    * The context with wich display lists and textures will be shared.
    *
    * @see gl4java.awt.GLCanvas#preInit
    * @see gl4java.awt.GLCanvas#paint
    */
    protected GLContext sharedGLContext;	

    // The list of GLEventListeners
    private GLEventListenerList listeners = new GLEventListenerList();

    // Indicates whether init() has been called yet.
    private volatile boolean initCalled = false;

    // Indicates whether the canvas will permit any calls to init() or
    // display() from within the paint() method.
    private boolean enableAWTThreadRendering;

    void recomputeAWTThreadRendering() {
      // Switches to false under the following circumstances:
      //  - this is (precisely a) GLAnimCanvas; subclassing may change
      //    the code flow significantly enough that this optimization
      //    breaks
      //  - useRepaint is false
      enableAWTThreadRendering = !((getClass() == GLAnimCanvas.class) && !getUseRepaint());
    }

    static {
	if(GLContext.doLoadNativeLibraries(null, null, null)==false)
	  System.out.println("GLCanvas could not load def. native libs.");
    }

    /**
     *
     * Constructor
     *
     * @param width    	the canvas initial-prefered width
     * @param height   	the canvas initial-prefered height
     *
     * @param gl_Name     The name of the GLFunc implementation
     *                    If gl_Name==null, the default class will be used !
     *
     * @param glu_Name    The name of the GLUFunc implementation
     *                    If gl_LibName==null, the default class will be used !
     *
     */
    public GLCanvas(   GLCapabilities capabilities,
                       int width, int height,
     	               String gl_Name, 
     	               String glu_Name
		     )
    {
	super( );

	this.capabilities=capabilities;

	if( (gl=GLContext.createGLFunc(gl_Name)) ==null)
	{
	  System.out.println("GLFunc implementation "+gl_Name+" not created");
	}
	if( (glu=GLContext.createGLUFunc(glu_Name)) ==null)
	{
	  System.out.println("GLUFunc implementation "+glu_Name+" not created");
	}

	size = new Dimension(width, height);

	setSize(size);

        recomputeAWTThreadRendering();
    }

    /**
     *
     * Constructor
     *
     * @param width    	the canvas initial-prefered width
     * @param height   	the canvas initial-prefered height
     *
     * @param gl_Name     The name of the GLFunc implementation
     *                    If gl_Name==null, the default class will be used !
     *
     * @param glu_Name    The name of the GLUFunc implementation
     *                    If gl_LibName==null, the default class will be used !
     *
     */
    public GLCanvas(   GLCapabilities capabilities,
                       int width, int height
		     )
    {
	this(capabilities, width, height, null, null);
    }

    /**
     *
     * Constructor
     *
     * @param width    	the canvas initial-prefered width
     * @param height   	the canvas initial-prefered height
     *
     * @param gl_Name     The name of the GLFunc implementation
     *                    If gl_Name==null, the default class will be used !
     *
     * @param glu_Name    The name of the GLUFunc implementation
     *                    If gl_LibName==null, the default class will be used !
     *
     */
    public GLCanvas( int width, int height,
     	               String gl_Name, 
     	               String glu_Name
		     )
    {
	this(null, width, height, gl_Name, glu_Name);
    }

    /**
     *
     * Constructor
     *
     * Uses the default GLFunc and GLUFunc implementation !
     *
     * @param width    	the canvas initial-prefered width
     * @param height   	the canvas initial-prefered height
     *
     */
    public GLCanvas( int width, int height )
    {
	this(width, height, null, null);
    }

    /**
     *
     * Constructor (JDK 1.2 or later)
     *
     * @param config    the GraphicsConfiguration for this canvas (>= JDK 1.2)
     *
     * @param width    	the canvas initial-prefered width
     * @param height   	the canvas initial-prefered height
     *
     * @param gl_Name     The name of the GLFunc implementation
     *                    If gl_Name==null, the default class will be used !
     *
     * @param glu_Name    The name of the GLUFunc implementation
     *                    If gl_LibName==null, the default class will be used !
     *
     */
    public GLCanvas( GraphicsConfiguration config,
                     GLCapabilities capabilities,
                     int width, int height,
     	             String gl_Name, 
     	             String glu_Name
		   )
    {
	super( config );

	this.capabilities=capabilities;

	if( (gl=GLContext.createGLFunc(gl_Name)) ==null)
	{
	  System.out.println("GLFunc implementation "+gl_Name+" not created");
	}
	if( (glu=GLContext.createGLUFunc(glu_Name)) ==null)
	{
	  System.out.println("GLUFunc implementation "+glu_Name+" not created");
	}

	size = new Dimension(width, height);

	setSize(size);

        recomputeAWTThreadRendering();
    }

    /**
     *
     * Constructor (JDK 1.2 or later)
     *
     * Uses the default GLFunc and GLUFunc implementation !
     *
     * @param config    the GraphicsConfiguration for this canvas (>= JDK 1.2)
     *
     * @param width    	the canvas initial-prefered width
     * @param height   	the canvas initial-prefered height
     *
     */
    public GLCanvas( GraphicsConfiguration config,
                     GLCapabilities capabilities,
                     int width, int height )
    {
	this(config, capabilities, width, height, null, null);
    }

    /* GLCanvas AWT classes */

    public Dimension getPreferredSize() {
        return getMinimumSize();
    }

    public Dimension getMinimumSize() {
        return size;
    }

    /**
     * Used to return the created GLContext
     */
    public final GLContext getGLContext() { return glj; }

    /**
     *
     * Overridden update
     * This one only call's the paint method, without clearing
     * the background - thats hopefully done by OpenGL ;-)
     *
     * @param g		the Graphics Context
     * @return 		void
     *
     * @see	gl4java.awt.GLCanvas#paint
     */ 
    public void update(Graphics g)
    {
        /* let's let OpenGL clear the background ... */
	paint(g);
    }

    /**
     * Safe the toplevel window
     */ 
    protected Window topLevelWindow = null;

    /**
     *
     * This function returns the found TopLevelWindow,
     * which contains this Canvas ..
     *
     * @return 		void
     *
     * @see	gl4java.awt.GLCanvas#paint
     */ 
    public final Window getTopLevelWindow()
    { return topLevelWindow; }

    /**
     * this function overrides the Canvas paint method !
     *
     * For the first paint, 
     * the user function preInit is called, a GLContext is created
     * and the user function init is called !
     *
     * Also, if a GL Context exist, GLCanvas's sDisplay-method will be called
     * to do OpenGL-rendering. 
     *
     * The sDisplay method itself calls the display-method !
     * sDisplay is needed to be thread-safe, to manage 
     * the resize functionality and to safe the time per frame.
     *
     * To define your rendering, you should overwrite the display-method
     * in your derivation.
     *
     * @see gl4java.GLContext#GLContext
     * @see gl4java.awt.GLCanvas#cvsIsInit
     * @see gl4java.awt.GLCanvas#sDisplay
     * @see gl4java.awt.GLCanvas#display
     * @see gl4java.awt.GLCanvas#preInit
     * @see gl4java.awt.GLCanvas#init
     */
    public final void paint( Graphics g )
    {
	if(glj == null || (  !glj.gljIsInit()  && isGLEnabled() ) )
	{
		if(GLContext.gljClassDebug)
			System.out.println("GLCanvas create GLContext (recreate="+
				(glj != null) +")");
		preInit();

		if(glj!=null) glj=null;

                if (capabilities != null )
		{
	            glj = new GLContext ( this, gl, glu, 
                                          capabilities,
				          sharedGLContext );
		} else {
	            glj = new GLContext ( this, gl, glu, 
                                          createOwnWindow,
		                          doubleBuffer, stereoView,
				          rgba, stencilBits, accumSize,
				          sharedGLContext );
		}

		if(glj==null) return;

		createOwnWindow = glj.isOwnWindowCreated();
		doubleBuffer = glj.isDoubleBuffer();
		stencilBits = glj.getStencilBitNumber();
		accumSize = glj.getAccumSize();
		stereoView = glj.isStereoView();
		rgba = glj.isRGBA();

		Color col = getBackground();
		gl.glClearColor((float)col.getRed()/255.0f, 
		                (float)col.getGreen()/255.0f, 
		                (float)col.getBlue()/255.0f, 0.0f);

                if (enableAWTThreadRendering) {
                    init();
                    initCalled = true;
                }

		// fetch the top-level window ,
		// to add us as the windowListener
		//
		Container _c = getParent();
		Container  c = null;

		while(_c!=null)
		{
			c = _c;
			_c = _c.getParent();
		}

		if(c instanceof Window) {
			topLevelWindow = (Window)c;
	                topLevelWindow.addComponentListener(this);
		} else {
			topLevelWindow = null;
		        System.out.println("toplevel is not a Window: "+c);
		}

		if(topLevelWindow!=null)
		{
		      topLevelWindow.addWindowListener(this);
		} else {
		      System.out.println("no parent found for "+getName());
		      System.out.flush();
		}

		/* to be able for RESIZE event's */
		addComponentListener(this);
		addMouseListener(this);

		/* force a reshape, to be sure .. */
	        mustResize = true;
    		isInit = true;

                /* if we are not allowed to render from the AWT
                   thread, release the OpenGL context for the
                   animation thread to use */
                if (!enableAWTThreadRendering) {
                    // makeCurrent() necessary to make GLContext
                    // realize that JAWT lock has to be released...
                    glj.gljMakeCurrent();
                    glj.gljFree();
                }
	} 

        if (enableAWTThreadRendering) {
            sDisplay();
        }
    }

    // Package-private hack to make this work similarly to old
    // releases. This avoids ever calling sDisplay() from the AWT
    // thread if the component is a GLAnimCanvas and if
    // setUseRepaint(false) has been called.
    boolean getUseRepaint() { return true; }

    /**
     *
     * This is your pre-init method.
     * preInit is called just BEFORE the GL-Context is created.
     * You should override preInit, to initialize your visual-stuff,
     * like the protected vars: doubleBuffer and stereoView
     *
     * @return 		void
     *
     * @see	gl4java.awt.GLCanvas#paint
     * @see	gl4java.awt.GLCanvas#doubleBuffer
     * @see	gl4java.awt.GLCanvas#stereoView
     * @see	gl4java.awt.GLCanvas#rgba
     * @see	gl4java.awt.GLCanvas#stencilBits
     * @see	gl4java.awt.GLCanvas#accumSize
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
     * @see gl4java.awt.GLCanvas#paint 
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
     * @see	gl4java.awt.GLCanvas#cvsDispose
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
     * @see	gl4java.awt.GLCanvas#paint
     * @see	gl4java.awt.GLCanvas#init
     */ 
    public boolean cvsIsInit()
    {
	return isInit && glj!=null && glj.gljIsInit();
    }

    /**
     * This function enables, disables the GL-Context !
     * If false is given, the openGL renderer/context is 
     * disabled and disconected (gljFree is called, if initialized) !
     *
     * If disabled, all GL Functions are disabled but the 
     * Destroy & Free are not !
     *
     * @return 	boolean
     *
     * @see     gl4java.awt.GLCanvas#cvsDispose
     * @see     gl4java.GLContext#setEnabled
     * @see     gl4java.GLContext#gljMakeCurrent
     * @see     gl4java.GLContext#gljDestroy
     * @see     gl4java.GLContext#gljFree
     */ 
    public void setGLEnabled(boolean b)
    {
	if(glj!=null)
		glj.setEnabled(b);
    }

    /**
     * This function enables, disables the GL-Context !
     * If false is given, the openGL renderer/context is 
     * disabled and disconected (gljFree is called, if initialized) !
     *
     * If disabled, all GL Functions are disabled but the 
     * Destroy & Free are not !
     *
     * The Visible-Flag of this AWT Component is also set to the given value !
     * The setVisible(boolean) method of Component is called !
     *
     * @return 	boolean
     *
     * @see     gl4java.awt.GLCanvas#cvsDispose
     * @see     gl4java.GLContext#setEnabled
     * @see     gl4java.GLContext#gljMakeCurrent
     * @see     gl4java.GLContext#gljDestroy
     * @see     gl4java.GLContext#gljFree
     */ 
    public void setVisible(boolean b)
    {
	if(glj!=null)
		glj.setEnabled(b);
        super.setVisible(b);
    }

    /**
     * This function queries, if the GL-Context is enabled !
     *
     * @return 	boolean
     *
     * @see	gl4java.GLContext#isEnabled
     * @see     gl4java.GLContext#gljMakeCurrent
     */ 
    public boolean isGLEnabled()
    {
	if(glj!=null)
		return glj.isEnabled();
	return false;
    }

    protected long _f_dur = 0;

    /**
     * Return the uses milli secounds of the last frame
     */
    public long getLastFrameMillis()
    { return _f_dur; }

    /**
     *
     * This is the thread save rendering-method called by paint.
     *
     * BE SURE, if you want to call 'display' by yourself
     * (e.g. in the run method for animation)
     * YOU HAVE TO CALL sDisplay  -- OR YOU MUST KNOW WHAT YOU ARE DOING THEN !
     *
     * @return 		void
     *
     * @see gl4java.awt.GLCanvas#paint
     * @see gl4java.awt.GLCanvas#display
     */ 
    public final void sDisplay()
    {
        boolean ok = true;

	if(!cvsIsInit()) return;

	if( mustResize && initCalled )
	{
	    if( glj.gljMakeCurrent() == true )
	    {
		size = getSize();
		glj.gljResize( size.width, size.height ) ;
	        reshape(size.width, size.height);
		mustResize = false;
                if (enableAWTThreadRendering) {
                    invalidate();
                    repaint(100);
                }
		glj.gljFree(true); /* force freeing the context here .. */
	    }
	}

	long _s = System.currentTimeMillis();

	if(ok) 
	{
	        display();
	}

	_f_dur = System.currentTimeMillis()-_s;
    }

    /**
     *
     * This is the rendering-method called by sDisplay 
     * (and sDisplay is called by paint !).
     *
     * <p>
     * The default implementation of display() sends 
     * preDisplay, display and postDisplay events to
     * all {@link gl4java.drawable.GLEventListener}s associated with this
     * GLCanvas in the above order.
     *
     * <p>
     * <pre>
        reset timer for frame duration (done by sDisplay)

     	for_all(gl4java.GLEventListener)
		SEND preDisplay

	if( gljMakeCurrent() )
	{
		for_all(gl4java.GLEventListener)
			SEND display
		gljSwap()
		gljFree()

		for_all(gl4java.GLEventListener)
			SEND postDisplay
	}

        stop timer for frame duration (done by sDisplay)
     * </pre>
     *
     * <p>
     * If you use the subclassing model (as opposed to the
     * GLEventListener model), your subclass will redefine this to
     * perform its OpenGL drawing. In this case you MUST encapsulate
     * your OpenGL calls within:
     * <pre>
    	- glj.gljMakeCurrent()
		YOUR OpenGL commands here !
    	- glj.gljFree()
     * </pre>
     *
     * BE SURE, if you want to call 'display' by yourself
     * (e.g. in the run method for animation)
     * YOU HAVE TO CALL sDisplay !
     *
     * 'sDisplay' manages a semaphore to avoid reentrance of
     * the display function !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
     *
     * @return 		void
     *
     * @see gl4java.awt.GLCanvas#sDisplay
     * @see gl4java.awt.GLCanvas#paint
     * @see gl4java.GLContext#gljMakeCurrent
     * @see gl4java.GLContext#gljSwap 
     * @see gl4java.drawable.GLEventListener#preDisplay
     * @see gl4java.drawable.GLEventListener#display
     * @see gl4java.drawable.GLEventListener#postDisplay
     */
    public void display()
    {
        listeners.sendPreDisplayEvent(this);

        if (glj.gljMakeCurrent()) {
            if (!enableAWTThreadRendering) {
                if (!initCalled) {
                    init();
                    initCalled = true;
                }
            }

            listeners.sendDisplayEvent(this);

	    glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();

            listeners.sendPostDisplayEvent(this);
        }
    }

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
     * @see gl4java.awt.GLCanvas#paint
     * @see gl4java.awt.GLCanvas#sDisplay 
     * @see gl4java.drawable.GLEventListener#reshape
     */
    public void reshape( int width, int height )
    {
	gl.glViewport(0,0, width, height);
        listeners.sendReshapeEvent(this, width, height);
    }

    /**
     *
     * ´componentResized´ is the componentListeners event handler.
     *
     * This method sets the variable ´mustResize´ to true,
     * so the upcoming ´paint´ method-call will invoke ´reshape´ !
     *
     * This little look-alike complicating thing is done,
     * to avoid an Exception by using the glContext from more than 
     * one concurrent thread´s !
     *
     * You cannot override this implementation, it is final
     * - override ´reshape' instead !
     *
     * @param e		the element, which is resized
     * @return 		void
     *
     * @see gl4java.awt.GLCanvas#paint
     * @see gl4java.awt.GLCanvas#reshape
     */ 
    public void componentResized(ComponentEvent e)
    {
	if(glj!=null && glj.gljIsInit() && e.getComponent()==this )
	{
		mustResize = true;
		repaint();
	}
    }

    public void componentMoved(ComponentEvent e)
    {
	if(glj!=null && glj.gljIsInit())
	{
		repaint(100);
	}
    }

    public void componentShown(ComponentEvent e)
    {
    }

    public void componentHidden(ComponentEvent e)
    { }

    public void mouseClicked(MouseEvent e) 
    {
	if(glj!=null && glj.gljIsInit())
	{
		repaint();
	}
    }

    public void mouseEntered(MouseEvent e) 
    { }
    public void mouseExited(MouseEvent e) 
    {}
    public void mousePressed(MouseEvent e) 
    {
    }
    public void mouseReleased(MouseEvent e) 
    {
    }

	public void windowOpened(WindowEvent e)
	{
	}

	/**
	  *
	  * ´windowClosing´ is the windowListeners event handler
	  *  for the topLevelWindow of this Canvas !
	  *
	  * This methods free´s AND destroy´s 
	  * the GL Context with ´glj.gljDestroy´ !
  	  *
	  * @return 		void
	  *
	  */ 
	public void windowClosing(WindowEvent e)
	{
		if(e.getComponent().equals(topLevelWindow))
		{
		    cvsDispose();
		}
	}

	/**
	*
	* ´windowClosed´ is the windowListeners event handler.
	*
	* @return 		void
	*
	*/ 
	public void windowClosed(WindowEvent e)
	{
        	if (needCvsDispose) cvsDispose();
	}

	public void windowIconified(WindowEvent e)
	{
	}

	public void windowDeiconified(WindowEvent e)
	{
	}

	public void windowActivated(WindowEvent e)
	{
		if(glj!=null && glj.gljIsInit())
		{
			repaint(100);
		}
	}

	public void windowDeactivated(WindowEvent e)
	{
	}

    /**
      * You should call this before releasing/dispose this Window ! 
      * Also you can overwrite this class,
      * to dispose your own elements, e.g. a Frame etc. - 
      * but be shure that you call
      * cvsDispose implementation call this one !
      * 
      * This function calls gljDestroy of GLContext !
      * The Visibility is set to false !
      * The Enabled is set to false either !
      *
      * To bring this component back to live,
      * you need call setVisible(true) !
      *
      * @see gl4java.GLContext#gljDestroy
      * @see gl4java.awt.GLCanvas#doCleanup
      */
    public void cvsDispose()
    {
	if(GLContext.gljClassDebug)
		System.out.println("GLCanvas cvsDispose (doit="+
			( (glj != null) && glj.gljIsInit() ) +")");
	  
	isInit = false;

	removeComponentListener(this);
	removeMouseListener(this);

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
			        setVisible(false);
				doCleanup();

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
     * does nothing than:
     * 
     * @see	gl4java.awt.GLCanvas#cvsDispose
     *
     * @deprecated Use cvsDispose instead, well finalize is also implemented
     */
    public void destroy()
    {
	if(GLContext.gljClassDebug)
		System.out.println("GLCanvas destroy ..");
	  
        cvsDispose();
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

    public void addGLEventListener(GLEventListener listener) {
        listeners.add(listener);
    }

    public void removeGLEventListener(GLEventListener listener) {
        listeners.remove(listener);
    }

    public EventListener[] getListeners(Class listenerType) 
    	throws ClassCastException
    {
	EventListener[] evtlst=null;
        Class _GLEventListener = null;

	try {
           _GLEventListener = Class.forName("gl4java.drawable.GLEventListener");
	} catch (Exception ex) {
	   System.out.println(ex);
	}

        if (_GLEventListener!=null &&
	    listenerType.isAssignableFrom(_GLEventListener) )
        	evtlst = listeners.getListeners();

	EventListener[] t_evtlst = super.getListeners(listenerType);

	if(t_evtlst==null || t_evtlst.length==0)
		return evtlst;

	if(evtlst==null || evtlst.length==0)
		return t_evtlst;

	EventListener[] n_evtlst = 
		new EventListener[t_evtlst.length+evtlst.length];

	try {
	  System.arraycopy(evtlst, 0, n_evtlst, 0, evtlst.length);
	  System.arraycopy(t_evtlst, 0, n_evtlst, evtlst.length, t_evtlst.length);
	} catch (Exception ex)
	{ System.out.println(ex); }

	evtlst = null;
	t_evtlst = null;

	return n_evtlst;
    }

    public GLFunc getGL() {
        return gl;
    }

    public GLUFunc getGLU() {
        return glu;
    }
}
