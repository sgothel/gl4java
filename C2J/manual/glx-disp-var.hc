
void *(CALLBACK * disp__glXGetProcAddress) (const GLubyte *) = NULL;
void (CALLBACK *  disp__glXWaitGL)( ) = NULL;
void (CALLBACK *  disp__glXDestroyGLXPixmap)( Display *dpy, GLXPixmap pix ) = NULL;
Bool (CALLBACK *  disp__glXQueryExtension)( Display *dpy, int *errorBase, int *eventBase ) = NULL;
const char * (CALLBACK *  disp__glXGetClientString)( Display *dpy, int name ) = NULL;
GLXPixmap (CALLBACK * disp__glXCreateGLXPixmap)( Display *, XVisualInfo *, Pixmap) = NULL;
XVisualInfo* (CALLBACK * disp__glXChooseVisual) (Display *, int , int *) = NULL;
GLXContext (CALLBACK * disp__glXCreateContext) (Display *, XVisualInfo *, GLXContext, Bool) = NULL;
GLXContext (CALLBACK * disp__glXGetCurrentContext) () = NULL;
void (CALLBACK * disp__glXDestroyContext) (Display *, GLXContext) = NULL;
int (CALLBACK * disp__glXGetConfig) (Display *, XVisualInfo *, int, int *) = NULL;
Bool (CALLBACK * disp__glXMakeCurrent) (Display *, GLXDrawable, GLXContext) = NULL;
void (CALLBACK * disp__glXSwapBuffers) (Display *, GLXDrawable) = NULL;

/* NVidia support */
void* (CALLBACK * disp__glXAllocateMemoryNV)(int, float, float, float) = NULL;
void  (CALLBACK * disp__glXFreeMemoryNV)    (void*)                    = NULL;
