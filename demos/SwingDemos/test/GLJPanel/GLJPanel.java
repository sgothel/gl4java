//package gl4java.swing;

import gl4java.*;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

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
     * Visual pre-set for doubleBuffer, default: true
     * This value is updated after a GLContext is created with the
     * original updated value of GLContext !
     *
     * @see GLJPanel#preInit
     * @see GLJPanel#paint
     */
    protected boolean doubleBuffer = true;

    /**
     * Visual pre-set for stencil-bit number, default: 0
     * This value is updated after a GLContext is created with the
     * original updated value of GLContext !
     *
     * @see GLJPanel#preInit
     * @see GLJPanel#paint
     */
    protected int stencilBits = 0;

    /**
     * Visual pre-set for stereoView, default: false
     * This value is updated after a GLContext is created with the
     * original updated value of GLContext !
     *
     * @see GLJPanel#preInit
     * @see GLJPanel#paint
     */
    protected boolean stereoView = false;

   /**
    * Visual pre-set for RGBA usage, default: true - of course ;-)
    * This value is updated after a GLContext is created with the
    * original updated value of GLContext !
    *
    * @see GLJPanel#preInit
    * @see GLJPanel#paint
    */
    protected boolean rgba = true;    

   /**
    * Visual pre-set for RGBA usage, default: true - of course ;-)
    * This value is updated after a GLContext is created with the
    * original updated value of GLContext !
    *
    * @see GLJPanel#preInit
    * @see GLJPanel#paint
    */
    protected boolean createOwnWindow = false;

   /**
    * The context with witch display lists and textures will be shared.
    *
    * @see GLJPanel#preInit
    * @see GLJPanel#paint
    */
    protected GLContext sharedGLContext;	

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
     * @see	GLJPanel#paint
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
     * @see GLJPanel#cvsIsInit
     * @see GLJPanel#sDisplay
     * @see GLJPanel#display
     * @see GLJPanel#preInit
     * @see GLJPanel#init
     */
    public synchronized final void paintComponent(Graphics g)
    {
    	//JAU
        if(GLContext.gljClassDebug)
          System.out.println("GPanel::paintComponent()");
	//super.paintComponent(g);
	setOpaque(false);
	if(glj == null )
	{
		preInit();
		glj = new GLContext ( this, gl, glu, 
                                      createOwnWindow,
		                      doubleBuffer, stereoView,
				      rgba, stencilBits,
				      sharedGLContext );

		if(glj!=null)
		{
			createOwnWindow = glj.isOwnWindowCreated();
			doubleBuffer = glj.isDoubleBuffer();
			stencilBits = glj.getStencilBitNumber();
			stereoView = glj.isStereoView();
			rgba = glj.isRGBA();
		}

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
	sPaint(g);
    }

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
     * @see GLJPanel#paint
     * @see GLJPanel#display
     */ 
    public synchronized final void sPaint( Graphics g )
    {
        boolean ok = true;

	long _s = System.currentTimeMillis();

	if(!cvsIsInit())
		return;

	/*
	if( glj.gljMakeCurrent() == false ) {
		System.out.println("GLJPanel: problem in use() method");
		return;
        }
	*/

	if( mustResize )
	{
	    if( (ok = glj.gljMakeCurrent()) == true )
	    {
		Dimension size = getSize();
		glj.gljResize( size.width, size.height ) ;
	        reshape(size.width, size.height);
		mustResize = false;
	    }
	}
	if(ok) 
	{
	        display();
		g.setClip(getBounds());
		if(GLContext.gljClassDebug)
			glj.gljCheckGL();
	        _f_dur_self = System.currentTimeMillis()-_s;

		/*
		GLGraphics glg1 = (GLGraphics)glg.create();
		try {
			super.paint(glg1);
		} finally {
			glg1.dispose();
		}
		*/
		//super.paint(g);
		if(GLContext.gljClassDebug)
			glj.gljCheckGL();
	        _f_dur_total = System.currentTimeMillis()-_s;
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
     * @see GLJPanel#sDisplay
     * @see GLJPanel#paint
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
     * @see	GLJPanel#paint
     * @see	GLJPanel#doubleBuffer
     * @see	GLJPanel#stereoView
     * @see	GLJPanel#rgba
     * @see	GLJPanel#stencilBits
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
     * @see	GLJPanel#paint
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
     * @see	GLJPanel#cvsDispose
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
     * @see	GLJPanel#paint
     * @see	GLJPanel#init
     */ 
    public boolean cvsIsInit()
    {
    	return cvsInitialized;
    }

    protected long _f_dur_self   = 0;
    protected long _f_dur_total  = 0;

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
     * @see GLJPanel#paint
     * @see GLJPanel#sDisplay
     */ 
    public void reshape( int width, int height )
    {
        if(GLContext.gljClassDebug)
          System.out.println("GLJPanel::reshape bounds("+getBounds()+")");
	gl.glViewport(0,0, width, height);
    }

        /* JAU */
	/*
	public final void setBounds(int x, int y, int width, int height) {
		reshape(x, y, width, height);
	}
	public final void setBounds(Rectangle r) {
		reshape(r.x, r.y, r.width, r.height);
	}

	public void reshape(int x, int y, int width, int height) {
		super.reshape(x, y, width, height);
	        if(glj==null || !glj.gljIsInit() || !glj.gljMakeCurrent()) 
		{
		    System.out.println("GLJPanel::setBounds(): problem in use() method");
		    return;
	        }
	        reshape(width-x, height-y);
	        glj.gljCheckGL();
	        glj.gljFree();
	        size = new Dimension(width-x, height-y);
	}
	*/


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
     * @see GLJPanel#paint
     * @see GLJPanel#reshape
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
        if(GLContext.gljClassDebug)
           System.out.print("GLJPanel::componentShown("+e.getComponent()+")");
    }

    public void componentHidden(ComponentEvent e)
    {
        if(GLContext.gljClassDebug)
           System.out.print("GLJPanel::componentHidden("+e.getComponent()+")");
    }

    public void mouseClicked(MouseEvent e) 
    {
        if(GLContext.gljClassDebug)
    	   System.out.print(".");
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
        if(GLContext.gljClassDebug)
    	   System.out.print("<");
    }
    public void mouseReleased(MouseEvent e) 
    {
        if(GLContext.gljClassDebug)
    	   System.out.print(">");
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
      * @see GLJPanel#doCleanup
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
     * get methods
     */
    public final int cvsGetWidth() {
        return getSize().width;
     }
    public final int cvsGetHeight() {
        return getSize().height;
     }
}

