package gl4java.drawable;

import gl4java.GLEnum;
import gl4java.GLUEnum;

/** Declares events which client code can handle to perform OpenGL
    rendering into a GLDrawable without subclassing. */

public interface GLEventListener
	extends java.util.EventListener, GLEnum, GLUEnum
{
  /** Called by the drawable immediately after the OpenGL context is
      initialized; the GLContext has already been made current when
      this method is called. Can be used to perform one-time OpenGL
      initialization such as setup of lights and display lists.

      @see gl4java.awt.GLCanvas#init
      @see gl4java.swing.GLJPanel#init
  */
  public void init(GLDrawable drawable);

  /** Called by the drawable before initiate rendering by the client. At
      the time this method is called, the duration for this frames
      time consume is started.
      After all GLEventListeners have been notified of a preDisplay event, 
      the drawable will continues with the
      {@link gl4java.drawable.GLEventListener#display} event.

      @see gl4java.awt.GLAnimCanvas#display
      @see gl4java.awt.GLCanvas#display
      @see gl4java.swing.GLJPanel#display
      @see gl4java.drawable.GLEventListener#display
      @see gl4java.drawable.GLEventListener#postDisplay
  */
  public void preDisplay(GLDrawable drawable);

  /** Called by the drawable to initiate rendering by the client. At
      the time this method is called, the drawable has already called
      {@link gl4java.drawable.GLEventListener#preDisplay} and made
      its associated GLContext current by a call to {@link
      gl4java.GLContext#gljMakeCurrent}. After all GLEventListeners
      have been notified of a display event, the drawable will swap
      its buffers if necessary and then free its GLContext with a call
      to {@link gl4java.GLContext#gljFree} and
      and continues with the 
      {@link gl4java.drawable.GLEventListener#postDisplay} event.
      So the GLContext is locked while the GLEventListeners
      receives this display event.

      @see gl4java.awt.GLAnimCanvas#display
      @see gl4java.awt.GLCanvas#display
      @see gl4java.swing.GLJPanel#display
      @see gl4java.drawable.GLEventListener#preDisplay
      @see gl4java.drawable.GLEventListener#postDisplay
  */
  public void display(GLDrawable drawable);

  /** Called by the drawable after initiate rendering by the client. At
      the time this method is called, the drawable has already called
      {@link gl4java.drawable.GLEventListener#display}.
      After all GLEventListeners
      have been notified of a postDisplay event, the 
      duration for the consumed time is stopped.

      @see gl4java.awt.GLAnimCanvas#display
      @see gl4java.awt.GLCanvas#display
      @see gl4java.swing.GLJPanel#display
      @see gl4java.drawable.GLEventListener#preDisplay
      @see gl4java.drawable.GLEventListener#display
      @see gl4java.drawable.GLEventListener#postDisplay
  */
  public void postDisplay(GLDrawable drawable);

  /** Called by the drawable if it wants to destroy itself.
      Here you can clean up any OpenGL stuff (delete textures
      or whatever) prior to actually deleting the OpenGL context.

      @see gl4java.awt.GLCanvas#doCleanup
      @see gl4java.swing.GLJPanel#doCleanup
  */
  public void cleanup(GLDrawable drawable);

  /** Called by the drawable during the first repaint after the
      component has been resized. The client can update the viewport
      and view volume of the window appropriately, for example by a
      call to {@link gl4java.GLFunc#glViewport}; note that for
      convenience the component has already called {@link
      gl4java.GLContext#gljResize}(width, height) and {@link
      gl4java.GLFunc#glViewport}(0, 0, width, height) when this method
      is called, so the client may not have to do anything in this
      method. At the time this method is called, the drawable has
      already made its associated GLContext current by a call to
      {@link gl4java.GLContext#gljMakeCurrent}. After all
      GLEventListeners have been notified of a reshape event, the
      drawable will free its GLContext with a call to {@link
      gl4java.GLContext#gljFree}.

      @see gl4java.awt.GLCanvas#reshape
      @see gl4java.swing.GLJPanel#reshape
 */
  public void reshape(GLDrawable drawable, int width, int height);
}
