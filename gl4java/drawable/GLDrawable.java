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

    /** Gets the GL functions used by this drawable. */
    public GLFunc getGL();

    /** Gets the GLU functions used by this drawable. */
    public GLUFunc getGLU();

    /**
     * Used to return the created GLContext
     */
    public GLContext getGLContext();

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
