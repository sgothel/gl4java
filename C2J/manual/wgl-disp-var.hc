PROC  (CALLBACK * disp__wglGetProcAddress)(LPCSTR) = NULL;
BOOL  (CALLBACK * disp__wglCopyContext)(HGLRC, HGLRC, UINT) = NULL;
HGLRC (CALLBACK * disp__wglCreateContext)(HDC) = NULL;
HGLRC (CALLBACK * disp__wglCreateLayerContext)(HDC, int) = NULL;
BOOL  (CALLBACK * disp__wglDeleteContext)(HGLRC) = NULL;
HGLRC (CALLBACK * disp__wglGetCurrentContext)(VOID) = NULL;
HDC   (CALLBACK * disp__wglGetCurrentDC)(VOID) = NULL;
BOOL  (CALLBACK * disp__wglMakeCurrent)(HDC, HGLRC) = NULL;
BOOL  (CALLBACK * disp__wglShareLists)(HGLRC, HGLRC) = NULL;


