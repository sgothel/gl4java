
	disp__wglCopyContext = (BOOL  (CALLBACK *)(HGLRC, HGLRC, UINT))
        GET_GL_PROCADDRESS("wglCopyContext");

	disp__wglCreateContext = (HGLRC  (CALLBACK *)(HDC))
        GET_GL_PROCADDRESS("wglCreateContext");

	disp__wglCreateLayerContext = (HGLRC  (CALLBACK *)(HDC, int))
        GET_GL_PROCADDRESS("wglCreateLayerContext");

	disp__wglDeleteContext = (BOOL  (CALLBACK *)(HGLRC))
        GET_GL_PROCADDRESS("wglDeleteContext");

	disp__wglGetCurrentContext = (HGLRC  (CALLBACK *)(VOID))
        GET_GL_PROCADDRESS("wglGetCurrentContext");

	disp__wglGetCurrentDC = (HDC  (CALLBACK *)(VOID))
        GET_GL_PROCADDRESS("wglGetCurrentDC");

	disp__wglMakeCurrent = (BOOL  (CALLBACK *)(HDC, HGLRC))
        GET_GL_PROCADDRESS("wglMakeCurrent");

	disp__wglShareLists = (BOOL  (CALLBACK *)(HGLRC, HGLRC))
        GET_GL_PROCADDRESS("wglShareLists");

        /* NVidia support */
        disp__wglAllocateMemoryNV = (void* (CALLBACK * )(int, float, float, float))
        GET_GL_PROCADDRESS("wglAllocateMemoryNV");

        disp__wglFreeMemoryNV     = (void  (CALLBACK * )(void*))
        GET_GL_PROCADDRESS("wglFreeMemoryNV");
