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

  #include "glxtool.h"

  /* testX11Java does important implementation plattformspecific checks:
   *
   * o do fit X11-Vars in jint (because GLFrame stores 'em like that)
   */
  LIBAPI jboolean LIBAPIENTRY testX11Java();
  
#endif
