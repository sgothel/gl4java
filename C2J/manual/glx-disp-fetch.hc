
    disp__glXWaitGL = (void (CALLBACK *)( void ))
        GET_GL_PROCADDRESS("glXWaitGL");

    disp__glXDestroyGLXPixmap = (void (CALLBACK *)( Display *, GLXPixmap))
       GET_GL_PROCADDRESS("glXDestroyGLXPixmap");

    disp__glXQueryExtension = (Bool (CALLBACK *)( Display *, int *, int *))
        GET_GL_PROCADDRESS("glXQueryExtension");

    disp__glXGetClientString = (const char * (CALLBACK *)( Display *, int ))
        GET_GL_PROCADDRESS("glXGetClientString");

    disp__glXCreateGLXPixmap = (GLXPixmap (CALLBACK *)( Display *, XVisualInfo *, Pixmap))
        GET_GL_PROCADDRESS("glXCreateGLXPixmap");

    disp__glXChooseVisual = (XVisualInfo* (CALLBACK *) (Display *, int , int *)) 
    	GET_GL_PROCADDRESS("glXChooseVisual");

    disp__glXCreateContext = (GLXContext (CALLBACK *) (Display *, XVisualInfo *, GLXContext, Bool))
    	GET_GL_PROCADDRESS("glXCreateContext");

    disp__glXGetCurrentContext = (GLXContext (CALLBACK *) ())
    	GET_GL_PROCADDRESS("glXGetCurrentContext");

    disp__glXDestroyContext = (void (CALLBACK *) (Display *, GLXContext))
    	GET_GL_PROCADDRESS("glXDestroyContext");

    disp__glXGetConfig = (int (CALLBACK *) (Display *, XVisualInfo *, int, int *)) 
    	GET_GL_PROCADDRESS("glXGetConfig");

    disp__glXMakeCurrent = (Bool (CALLBACK *) (Display *, GLXDrawable, GLXContext)) 
    	GET_GL_PROCADDRESS("glXMakeCurrent");

    disp__glXSwapBuffers = (void (CALLBACK *) (Display *, GLXDrawable)) 
    	GET_GL_PROCADDRESS("glXSwapBuffers");

