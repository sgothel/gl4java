#ifndef _OPENGL_WIN32_COMMON_H
#define _OPENGL_WIN32_COMMON_H

#include "OpenGL_misc.h"

#include "wgltool.h"

/* testX11Java does important implementation plattformspecific checks:
 *
 * o do fit X11-Vars in jint (because GLContext stores 'em like that)
 */
LIBAPI jboolean LIBAPIENTRY testWin32Java(void);

#endif
