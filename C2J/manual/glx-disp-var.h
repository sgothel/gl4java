
LIBAPI void *(CALLBACK * disp__glXGetProcAddress) (const GLubyte *);
LIBAPI void (CALLBACK *  disp__glXWaitGL)( void );
LIBAPI void (CALLBACK *  disp__glXDestroyGLXPixmap)( Display *dpy, GLXPixmap pix );
LIBAPI Bool (CALLBACK *  disp__glXQueryExtension)( Display *dpy, int *errorBase, int *eventBase );
LIBAPI const char * (CALLBACK *  disp__glXGetClientString)( Display *dpy, int name );
LIBAPI GLXPixmap (CALLBACK * disp__glXCreateGLXPixmap)( Display *, XVisualInfo *, Pixmap);
LIBAPI XVisualInfo* (CALLBACK * disp__glXChooseVisual) (Display *, int , int *);
LIBAPI GLXContext (CALLBACK * disp__glXCreateContext) (Display *, XVisualInfo *, GLXContext, Bool);
LIBAPI GLXContext (CALLBACK * disp__glXGetCurrentContext) (void);
LIBAPI void (CALLBACK * disp__glXDestroyContext) (Display *, GLXContext);
LIBAPI int (CALLBACK * disp__glXGetConfig) (Display *, XVisualInfo *, int, int *);
LIBAPI Bool (CALLBACK * disp__glXMakeCurrent) (Display *, GLXDrawable, GLXContext);
LIBAPI void (CALLBACK * disp__glXSwapBuffers) (Display *, GLXDrawable);

/* NVidia support */
LIBAPI void* (CALLBACK * disp__glXAllocateMemoryNV)(int, float, float, float);
LIBAPI void  (CALLBACK * disp__glXFreeMemoryNV)    (void*);
