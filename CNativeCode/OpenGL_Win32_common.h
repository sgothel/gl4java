#ifndef _OPENGL_WIN32_COMMON_H
#define _OPENGL_WIN32_COMMON_H

#include "OpenGL_misc.h"

#include <wingdi.h>


// Set Pixel Format function - forward declaration
LIBAPI void LIBAPIENTRY SetDCPixelFormat(HDC hDC, jboolean doubleBuffer, 
		jboolean stereo, jint stencilBits, jboolean offScreenRenderer, 
		jboolean verbose);

LIBAPI HPALETTE LIBAPIENTRY GetOpenGLPalette(HDC hDC);

LIBAPI HGLRC LIBAPIENTRY get_GC( HDC *hDC, jboolean doubleBuffer, 
		jboolean stereo, jint stencilBits, HGLRC shareWith, 
		jboolean offScreenRenderer,
		int width, int height, HBITMAP *pix,
		jboolean verbose);

LIBAPI int LIBAPIENTRY PixelFormatDescriptorFromDc( HDC Dc, 
		PIXELFORMATDESCRIPTOR *Pfd );

const char * LIBAPIENTRY GetTextualPixelFormatByHDC(HDC hdc);

const char * LIBAPIENTRY GetTextualPixelFormatByPFD(
		PIXELFORMATDESCRIPTOR *ppfd, int format);

/* testX11Java does important implementation plattformspecific checks:
 *
 * o do fit X11-Vars in jint (because GLContext stores 'em like that)
 */
LIBAPI jboolean LIBAPIENTRY testWin32Java(void);

LIBAPI void LIBAPIENTRY setupDIB(HDC hDCOrig, HDC hDC, HBITMAP * hBitmap, 
		int width, int height);

LIBAPI void LIBAPIENTRY resizeDIB(HDC hDC, HBITMAP *hOldBitmap, 
		HBITMAP *hBitmap);

LIBAPI void LIBAPIENTRY setupPalette(HDC hDC);

#endif
