package gl4java.swing;

import gl4java.*;

import java.awt.*;
import java.awt.image.*;
import java.awt.event.*;
import javax.swing.*;

/**
 * This is meant as an base class writing
 * easy render functions. A clean usage of multi-threading compatible
 * with JAVA2 is implemented in GLAnimJPanel !
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
 * You should overwrite the following methods for your needs:
 * <pre>
        <a href="GLJPanel.html#init()">preInit - initialisation before creating GLContext</a>
        <a href="GLJPanel.html#init()">init - 1st initialisation after creating GLContext</a>
        <a href="GLJPanel.html#doCleanup()">doCleanup - OGL cleanup prior to context deletion</a>
        <a href="GLJPanel.html#display()">display - render your frame</a>
	<a href="GLJPanel.html#reshape(int, int)">reshape - to reshape (window resize), gljResize() is allready invoked !</a>
 * </pre>
 *
 * To check if you can use the GLContext and GL and GLU methods,
 * use the function
 * <pre>
        <a href="GLJPanel.html#cvsIsInit()">cvsIsInit</a>
 * </pre>
 * <p>  
 * IF you remove/release a GLJPanel,
 * e.g. you want to close/dispose it´s Window (which contains this GLJPanel),
 * you HAVE TO call:
 *
 * <pre>
        <a href="GLJPanel.html#cvsDispose()">cvsDispose</a>
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
        <a href="GLJPanel.html#update(java.awt.Graphics)">update</a>
        <a href="GLJPanel.html#paint(java.awt.Graphics)">paint</a>
 * </pre>
 * <p>        
 *
 * @see gl4java.swing.GLAnimJPanel
 * @see gl4java.awt.GLCanvas
 *
 * @version 	2.0, 21. April 1999
 * @author      Sven Goethel
 * 
 */
public class GLJPanel extends JPanel
	implements GLEnum, GLUEnum,
		   ComponentListener, WindowListener, MouseListener
{
    protected GLContext glj = null;
    public GLFunc gl = null;
    public GLUFunc glu = null;

    protected boolean mustResize = false;

    protected boolean cvsInitialized=false;

    protected boolean needCvsDispose = false;

    /**
     * Visual pre-set for stencil-bit number, default: 0
     * This value is updated after a GLContext is created with the
     * original updated value of GLContext !
     *
     * @see gl4java.swing.GLJPanel#preInit
     * @see gl4java.swing.GLJPanel#paint
     */
    protected int stencilBits = 0;

    /**
     * Visual pre-set for accumulator buffer size, default: 0
     * This value is updated after a GLContext is created with the
     * original updated value of GLContext !
     *
     * @see gl4java.swing.GLJPanel#preInit
     * @see gl4java.swing.GLJPanel#paint
     */
    protected int accumSize = 0;

    /**
     * Visual pre-set for stereoView, default: false
     * This value is updated after a GLContext is created with the
     * original updated value of GLContext !
     *
     * @see gl4java.swing.GLJPanel#preInit
     * @see gl4java.swing.GLJPanel#paint
     */
    protected boolean stereoView = false;

   /**
    * Visual pre-set for RGBA usage, default: true - of course ;-)
    * This value is updated after a GLContext is created with the
    * original updated value of GLContext !
    *
    * @see gl4java.swing.GLJPanel#preInit
    * @see gl4java.swing.GLJPanel#paint
    */
    protected boolean rgba = true;    

   /**
    * The context with witch display lists and textures will be shared.
    *
    * @see gl4java.swing.GLJPanel#preInit
    * @see gl4java.swing.GLJPanel#paint
    */
    protected GLContext sharedGLContext;	

   /**
    * The data to hold the offscreen pixels on the java side !
    *
    * @see gl4java.swing.GLJPanel#offImagePixels
    * @see gl4java.swing.GLJPanel#paint
    */
    protected BufferedImage offImage = null;

   /**
    * The data to hold the offscreen pixels on the GL side !
    *
    * @see gl4java.swing.GLJPanel#offImage
    * @see gl4java.swing.GLJPanel#paint
    */
    protected byte[] offImagePixels = null;

   /**
    * The custom set offscreen Size
    *
    * If this is set to != null, 
    * the offscreen pixmap is used in this size,
    * not in the components-size (-> faster if smaller)
    *
    * @see gl4java.swing.GLJPanel#paint
    * @see gl4java.swing.GLJPanel#setOffScreenSize
    * @see gl4java.swing.GLJPanel#getOffScreenSize
    */
    protected Dimension offScrnSize = null;
    protected boolean customOffScrnSize=false;
    protected boolean offScrnSizeChanged=false;

    static {
	if(GLContext.loadNativeLibraries(null, null, null)==false)
	  System.out.println("GLJPanel could not load def. native libs.");
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
     * @param layout    	the layout manager
     * @param isDoubleBuffered  the flag indicates, 
     *                          if double buffer should be used
     *
     */
    public GLJPanel( String gl_Name, 
     	             String glu_Name,
                     LayoutManager layout, boolean isDoubleBuffered
		  )
    {
	super( layout, isDoubleBuffered );

	if( (gl=GLContext.createGLFunc(gl_Name)) ==null)
	{
	  System.out.println("GLFunc implementation "+gl_Name+" not created");
	}
	if( (glu=GLContext.createGLUFunc(glu_Name)) ==null)
	{
	  System.out.println("GLUFunc implementation "+glu_Name+" not created");
	}

	/* to be able for RESIZE event's */
	addComponentListener(this);

	setOpaque(false);
    }

    /**
     *
     * Constructor
     *
     * @param layout    	the layout manager
     * @param isDoubleBuffered  the flag indicates, 
     *                          if double buffer should be used
     *
     */
    public GLJPanel( LayoutManager layout, boolean isDoubleBuffered )
    {
	this(null, null, layout, isDoubleBuffered);
    }

    /**
     *
     * Constructor
     *
     * Uses the default GLFunc and GLUFunc implementation !
     *
     * @param isDoubleBuffered  the flag indicates, 
     *                          if double buffer should be used
     */
    public GLJPanel( boolean isDoubleBuffered )
    {
	this(null, null, new FlowLayout(), isDoubleBuffered);
    }

    /**
     *
     * Constructor
     *
     * Uses the default GLFunc and GLUFunc implementation !
     *
     * @param layout    	the layout manager
     */
    public GLJPanel(LayoutManager layout)
    {
	this(null, null, layout, true);
    }

    /**
     *
     * Constructor
     *
     * Uses the default GLFunc and GLUFunc implementation !
     *
     */
    public GLJPanel( )
    {
	this(null, null, new FlowLayout(), true);
    }

    /**
     * Used to return the created GLContext
     */
    public final GLContext getGLContext() { return glj; }

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
     * @see	gl4java.swing.GLJPanel#paint
     */ 
    public final Window getTopLevelWindow()
    { return topLevelWindow; }

   /**
    * The customers offscreen Size
    *
    * If this is set, 
    * the offscreen pixmap is used in this size,
    * not in the components-size (-> faster if smaller)
    *
    * @see gl4java.swing.GLJPanel#offScrnSize
    * @see gl4java.swing.GLJPanel#setOffScreenSize
    */
    public Dimension getOffScreenSize()
    { return offScrnSize; }

   /**
    * The customers offscreen Size
    *
    * If this is set, 
    * the offscreen pixmap is used in this size,
    * not in the components-size (-> faster if smaller)
    *
    * @see gl4java.swing.GLJPanel#offScrnSize
    * @see gl4java.swing.GLJPanel#getOffScreenSize
    */
    public void setOffScreenSize(Dimension size)
    {
    	if((size!=null && size.equals(offScrnSize)==false) ||
	   size!=offScrnSize
	  )
	{
    		offScrnSizeChanged=true;
                offScrnSize=size; 
                customOffScrnSize=offScrnSize!=null;
	}
    }

    /**
     * this function overrides the Canvas paint method !
     *
     * For the first paint, 
     * the user function preInit is called, a GLContext is created
     * and the user function init is called !
     *
     * Also, if a GL Context exist, GLJPanel's sDisplay-method will be called
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
     * @see gl4java.swing.GLJPanel#cvsIsInit
     * @see gl4java.swing.GLJPanel#sDisplay
     * @see gl4java.swing.GLJPanel#display
     * @see gl4java.swing.GLJPanel#preInit
     * @see gl4java.swing.GLJPanel#init
     */
    public synchronized final void paintComponent(Graphics g)
    {
	if(glj == null || 
	   (mustResize && !customOffScrnSize) || offScrnSizeChanged  )
	{
		if(mustResize)
		{
			cvsDispose();
			mustResize=false;
		}
		preInit();
		glj = GLContext.createOffScreenCtx ( this, gl, glu, 
		                      stereoView,
				      rgba, stencilBits, accumSize,
				      sharedGLContext,
				      offScrnSize
				      );

		if(glj!=null)
		{
			/*
			createOwnWindow = glj.isOwnWindowCreated();
			doubleBuffer = glj.isDoubleBuffer();
			*/
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
	                topLevelWindow.addMouseListener(this);
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
		if(glj!=null && glj.gljIsInit())
			cvsInitialized=true;
	} 
	/*
	if( mustResize ) size = getSize();
	g.setClip(0, 0, size.width, size.height );
	*/
	//super.paintComponent(g);

	gr = g;
	sDisplay();
    }

    Graphics gr = null;
    DataBufferInt dbInt = null;

    /**
     *
     * This is the thread save rendering-method called by paint.
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
     * @see gl4java.swing.GLJPanel#paint
     * @see gl4java.swing.GLJPanel#display
     */ 
    public synchronized final void sDisplay()
    {
        boolean ok = true;

	long _s = System.currentTimeMillis();

	if(!cvsIsInit())
		return;

	if( glj.gljMakeCurrent() == false ) {
		System.out.println("GLJPanel: problem in use() method");
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

	    int glFormat;
	    int glComps;
	    int awtFormat;

	    glFormat = (rgba == true)?GL_RGBA:GL_RGB;
	    glComps  = (rgba == true)?4:3;
	    awtFormat = (rgba == true)?BufferedImage.TYPE_INT_ARGB:
	                                   BufferedImage.TYPE_INT_RGB;

	    Dimension size = null;
	    if(customOffScrnSize)
	    	size=offScrnSize;
	    else 
	    	size=getSize();
	    int w=size.width;
	    int h=size.height;

	    long _s_tst = System.currentTimeMillis();

	    if(offImage==null || 
	       offImage.getHeight()!=h  || offImage.getWidth()!=w)
	    {
	    	if(offImage!=null)
			offImage.flush();
		offImage = new BufferedImage(w,h,awtFormat);
		offImagePixels=new byte[w*h*glComps];
		dbInt = (DataBufferInt)
		offImage.getRaster().getDataBuffer();

		if(GLContext.gljClassDebug)
		{
		   System.out.print("set offImage to size: "+size+
		                    "(hw size: "+w+"x"+h+"), type: ");
		   switch(glFormat) {
		   	case GL_RGB: System.out.println("RGB"); break;
		   	case GL_RGBA: System.out.println("RGBA"); break;
		   	case GL_BGR_EXT: System.out.println("BGR"); break;
		   	case GL_BGRA_EXT: System.out.println("BGRA"); break;
		   }
		}
	    }

	    glj.gljReadPixelGL2AWT(0,0,w,h,glFormat,GL_UNSIGNED_BYTE,
	    			   glj.isDoubleBuffer()?GL_BACK:GL_FRONT,
	                           offImagePixels,  dbInt.getData());

	    //glj.gljSwap(); // no true swapping with offscreen buffers ..

	    if(GLContext.gljClassDebug)
	    	_f_dur_tst_sum+=System.currentTimeMillis()-_s_tst;

	    if(GLContext.gljClassDebug)
		glj.gljCheckGL();
	    glj.gljFree(); // enable ctx for threads ...

	    if(!customOffScrnSize)
		    gr.drawImage(offImage, 0, 0, this);
	    else {
	    	    size=super.getSize();
		    gr.drawImage(offImage, 0, 0, size.width, size.height, this);
	    }
	     
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

    }

    /**
     *
     * This is the rendering-method called by sDisplay 
     * (and sDisplay is called by paint !).
     * The derived-class (Your Subclass) will redefine this, to draw it's own...
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
     * @see gl4java.swing.GLJPanel#sDisplay
     * @see gl4java.swing.GLJPanel#paint
     */ 
    public void display()
    {
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
     * @see	gl4java.swing.GLJPanel#paint
     * @see	gl4java.swing.GLJPanel#stereoView
     * @see	gl4java.swing.GLJPanel#rgba
     * @see	gl4java.swing.GLJPanel#stencilBits
     * @see	gl4java.swing.GLJPanel#accumSize
     */ 
    public void preInit()
    {
    }

    /**
     *
     * This is your init method.
     * init is called right after the GL-Context is initialized.
     * You should override init, to initialize your stuff needed
     * by OpenGL an Java !
     *
     * @return 		void
     *
     * @see	gl4java.swing.GLJPanel#paint
     */ 
    public void init()
    {
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
     * @see	gl4java.swing.GLJPanel#cvsDispose
     */
    public void doCleanup()
    {
    }

    /**
     * This function returns, if everything is init: the GLContext,
     * the and the users init function 
     * This value is set in the paint method!
     *
     * @return 	boolean
     *
     * @see	gl4java.swing.GLJPanel#paint
     * @see	gl4java.swing.GLJPanel#init
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
     * This is the reshape-method called by paint. 
     * The derived-class (Your Subclass) will redefine this, 
     * to manage your individual reshape ...
     *
     * This ´reshape´ method will be invoked after the first paint command
     * after GLJPanel.componentResize is called AND only if ´gljUse´ was
     * succesfull (so a call of gljUse is redundant).
     * ´reshape´ is not an overloading of java.awt.Component.reshape,
     * ´reshape´ is more like ´glut´-reshape.
     * 
     * GLJPanel.reshape allready has a simple default implementation,
     * which calls ´gljResize´ and ´glViewport´ - so you may be can
     * left this one as it is (no need to overload).
     * The needed call to ´gljResize´ is done by hte invoker paint !
     *
     * @param width		the new width
     * @param height	the new height
     * @return 		void
     *
     * @see gl4java.swing.GLJPanel#paint
     * @see gl4java.swing.GLJPanel#sDisplay
     */ 
    public void reshape( int width, int height )
    {
        if(GLContext.gljClassDebug)
          System.out.println("GLJPanel::reshape bounds("+getBounds()+")");
	gl.glViewport(0,0, width, height);
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
     * @see gl4java.swing.GLJPanel#paint
     * @see gl4java.swing.GLJPanel#reshape
     */ 
    public void componentResized(ComponentEvent e)
    {
        if(GLContext.gljClassDebug)
          System.out.println("GLJPanel::componentResized("+e.getComponent()+")");
	if(glj!=null && glj.gljIsInit() && e.getComponent()==this )
	{
		mustResize = true;
		//repaint();
	}
    }

    public void componentMoved(ComponentEvent e)
    {
	    /*
        if(GLContext.gljClassDebug)
            System.out.print("GLJPanel::componentMoved("+e.getComponent()+")");
	if(e.getComponent().equals(topLevelWindow))
	{
		repaint();
	}
	*/
    }

    public void componentShown(ComponentEvent e)
    {
    }

    public void componentHidden(ComponentEvent e)
    {
    }

    public void mouseClicked(MouseEvent e) 
    {
    }
    public void mouseEntered(MouseEvent e) 
    {
	   /*
        if(GLContext.gljClassDebug)
           System.out.print("GLJPanel::mouseEntered("+e.getComponent()+")");
	if(e.getComponent().equals(topLevelWindow))
	{
		repaint();
	}
	*/
    }
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
      *
      * @see gl4java.GLContext#gljDestroy
      * @see gl4java.swing.GLJPanel#doCleanup
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

    public Dimension getSize()
    {
	    if(customOffScrnSize)
	    	return offScrnSize;
	    return super.getSize();
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
}

