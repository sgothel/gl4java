package gl4java.drawable;

import java.awt.event.*;
import java.util.EventListener;

import gl4java.*;

/** Abstracts common functionality among the OpenGL components such as
    GLCanvas and GLJPanel. The GLDrawable/GLEventListener interfaces
    allow client code to draw using OpenGL without subclassing. */

public interface GLDrawable 
{
    /** Add a GLEventListener to this drawable. If multiple listeners
        are added to a given drawable, they are notified of events in an
        arbitrary order. */
    public void addGLEventListener(GLEventListener listener);

    /** Remove a GLEventListener from this drawable. */
    public void removeGLEventListener(GLEventListener listener);

    /** Gets the GL functions used by this drawable. When running on
        JDK 1.4 this will return a {@link gl4java.GLFunc14}. */
    public GLFunc getGL();

    /** Gets the GLU functions used by this drawable. When running on
        JDK 1.4 this will return a {@link gl4java.GLUFunc14}. */
    public GLUFunc getGLU();

    /**
     * Used to return the created GLContext
     */
    public GLContext getGLContext();

    /**
     *
     * This is the rendering-method called by 
     * e.g.: {@link gl4java.awt.GLCanvas#display} or by 
     * {@link gl4java.GLRunnable#run}.
     * 
     * <p>
     * The default implementation of display() sends 
     * preDisplay, display and postDisplay events to
     * all {@link gl4java.drawable.GLEventListener}s associated with this
     * GLDrawable in the above order.
     *
     * <p>
     * <pre>
        reset timer for frame duration

     	for_all(gl4java.drawable.GLEventListener)
		SEND preDisplay

	if( gljMakeCurrent() )
	{
		for_all(gl4java.drawable.GLEventListener)
			SEND display
		gljSwap()
		gljFree()

		for_all(gl4java.drawable.GLEventListener)
			SEND postDisplay
	}

        stop timer for frame duration
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
     * @return 		void
     *
     * @see gl4java.GLContext#gljMakeCurrent
     * @see gl4java.GLContext#gljFree 
     * @see gl4java.GLContext#gljSwap 
     * @see gl4java.drawable.GLEventListener#preDisplay
     * @see gl4java.drawable.GLEventListener#display
     * @see gl4java.drawable.GLEventListener#postDisplay
     */
    public void display();

    /**
     * this function can be called to force a repaint
     *
     * Repaints this component. 
     *
     * This method causes a call to this component's update method 
     * as soon as possible.
     */
    public void repaint();

    /**
     * the components listener's should be implemented also !
     * since JDK 1.1
     */
    public void addComponentListener(ComponentListener l);
    public void removeComponentListener(ComponentListener l);
    public void addFocusListener(FocusListener l);
    public void addKeyListener(KeyListener l);
    public void removeFocusListener(FocusListener l);
    public void addMouseListener(MouseListener l);
    public void removeMouseListener(MouseListener l);
    public void addMouseMotionListener(MouseMotionListener l);
    public void removeMouseMotionListener(MouseMotionListener l);
    
    /**
     * JDK 1.2 the components listener's are left, 
     * because of JDK 1.1 compatibility
     *
    public void addInputMethodListener(InputMethodListener l);
    public void removeInputMethodListener(InputMethodListener l);
    */

    /**
     * JDK 1.3 the components listener's are left, 
     * because of JDK 1.1 compatibility
     * 
    public void addHierarchyListener(HierarchyListener l);
    public void removeHierarchyListener(HierarchyListener l);
    public void addHierarchyBoundsListener(HierarchyBoundsListener l);
    public void removeHierarchyBoundsListener(HierarchyBoundsListener l);
    */


    /**
     * JDK 1.3 the listener's methods are left, 
     * because of JDK 1.1 compatibility
     * since JDK 1.3, e.g. implemented within GLCanvas
     *
    public EventListener[] getListeners(Class listenerType);
    */
}
