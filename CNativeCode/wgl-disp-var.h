/* WARNING ! WARNING *** THIS FILE IS GENERATED BY C2J !!!

   DO NOT MAKE ANY CHANGES *** MAKE CHANGES IN THE SKELETON FILES !!!
*/



LIBAPI PROC  (CALLBACK * disp__wglGetProcAddress)(LPCSTR);
LIBAPI BOOL  (CALLBACK * disp__wglCopyContext)(HGLRC, HGLRC, UINT);
LIBAPI HGLRC (CALLBACK * disp__wglCreateContext)(HDC);
LIBAPI HGLRC (CALLBACK * disp__wglCreateLayerContext)(HDC, int);
LIBAPI BOOL  (CALLBACK * disp__wglDeleteContext)(HGLRC);
LIBAPI HGLRC (CALLBACK * disp__wglGetCurrentContext)(VOID);
LIBAPI HDC   (CALLBACK * disp__wglGetCurrentDC)(VOID);
LIBAPI BOOL  (CALLBACK * disp__wglMakeCurrent)(HDC, HGLRC);
LIBAPI BOOL  (CALLBACK * disp__wglShareLists)(HGLRC, HGLRC);

/* NVidia support */
LIBAPI void* (CALLBACK * disp__wglAllocateMemoryNV)(int, float, float, float);
LIBAPI void  (CALLBACK * disp__wglFreeMemoryNV)    (void*);


