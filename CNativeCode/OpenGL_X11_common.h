#ifndef _OPENGL_X11_COMMON_
#define _OPENGL_X11_COMMON_

  /* 
   * need to include the JAVA internal header files for macros and function
   * prototypes required to maipulated JAVA data structures and functions
   *
   * StubPreamble.h includes the structure and macro definitions neede to
   * convert JAVA data structures into C data structures.
   *
   */
  
  #include "OpenGL_misc.h"

  #include <X11/Xlib.h>
  #include <X11/Xutil.h>
  
  #include <GL/glx.h>
  #include <X11/Xatom.h>
  
  typedef struct {
  	XVisualInfo * visual;
        GLXContext    gc;
  	int           success;  /* 1: OK, 0: ERROR */
  } VisualGC;
  

  /*
   * prototypes for functions local to this file scope
   */
  LIBAPI int LIBAPIENTRY get_GC( Display *display, Window win, 
  			         XVisualInfo *visual,
                                 GLXContext *gc, GLXContext gc_share,
				 jboolean verbose );
  
  LIBAPI int LIBAPIENTRY setVisualAttribListByGLCapabilities( 
					int visualAttribList[/*>=32*/],
				        GLCapabilities *glCaps );

  LIBAPI VisualGC LIBAPIENTRY findVisualGlX( Display *display, 
			       Window rootWin,
			       Window * pWin, 
			       int width, int height,
    			       GLCapabilities *glCaps,
			       jboolean * pOwnWin,
			       GLXContext shareWith,
			       jboolean offscreen,
			       Pixmap *pix,
			       jboolean verbose
			     );
  
  LIBAPI void LIBAPIENTRY printVisualInfo ( Display *display, XVisualInfo * vi);
  LIBAPI void LIBAPIENTRY printAllVisualInfo ( Display *disp, Window win, 
  					       jboolean verbose);
  
  LIBAPI int LIBAPIENTRY testVisualInfo ( Display *display, XVisualInfo * vi, 
    			                  GLCapabilities *glCaps);
  
  LIBAPI XVisualInfo * LIBAPIENTRY findVisualIdByID( XVisualInfo ** visualList, 
					    int visualID, Display *disp,
					    Window win, jboolean verbose);

  LIBAPI XVisualInfo * LIBAPIENTRY findVisualIdByFeature( 
  				  XVisualInfo ** visualList, 
                                  Display *disp, Window win,
				  GLCapabilities *glCaps,
				  jboolean verbose);
  
  /* testX11Java does important implementation plattformspecific checks:
   *
   * o do fit X11-Vars in jint (because GLFrame stores 'em like that)
   */
  LIBAPI jboolean LIBAPIENTRY testX11Java();
  
  LIBAPI jboolean LIBAPIENTRY setGLCapabilities ( Display * disp, 
                                 XVisualInfo * visual, GLCapabilities *glCaps);

  LIBAPI int LIBAPIENTRY x11gl_myErrorHandler(
  				  Display *pDisp, XErrorEvent *p_error);
  
  LIBAPI int LIBAPIENTRY x11gl_myIOErrorHandler(Display *pDisp);
  
  LIBAPI Window LIBAPIENTRY createOwnOverlayWin(
  				  Display *display, 
  				  Window rootwini, Window parentWin,
                                  XVisualInfo *visual, int width, int height);
  
#endif
