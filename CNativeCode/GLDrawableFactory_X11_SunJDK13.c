#include "gl4java_drawable_X11SunJDK13GLDrawableFactory.h"
#include "OpenGL_X11_common.h"

JNIEXPORT jlong JNICALL
Java_gl4java_drawable_X11SunJDK13GLDrawableFactory_glXChooseVisualID
	(JNIEnv *env,
         jclass unused,
	 jint screen,
	 jlong display,
	 jobject capsObj, jboolean verbose)
{
    Display *disp = (Display *) ( (PointerHolder)display );

    XVisualInfo * visual=NULL;
    int visualAttribList[32];
    int done=0;

    GLCapabilities glCaps;

    jboolean ok = javaGLCapabilities2NativeGLCapabilities ( env, 
			  capsObj, &glCaps );

    if(JNI_TRUE!=ok)
    {
        fprintf(stderr,"GL4Java X11SunJDK13GLDrawableFactory ERROR: gl4java/GLCapabilities fields not accessible\n");
	fflush(stderr);
        return JNI_FALSE;
    }

    /* JAU: What the hell .. 
       The java given display is not alway functional .. ?

       If running without this ugly thing,
       the derived SimpleGLAnimApplet1 get's an X11 async reply
       if the thing is initialized by the applet's init method !
     */
    disp = XOpenDisplay( NULL );
    screen = DefaultScreen( disp );

    if(JNI_TRUE==verbose)
	    fprintf(stdout," display=%p, screen=%d\n", disp, (int)screen);

    while(!done && visual==NULL)
    {
        (void) setVisualAttribListByGLCapabilities( visualAttribList, &glCaps);
    
        if(JNI_TRUE==verbose)
        {
    	    fprintf(stdout, "X11DrawableFactory.glXChooseVisual: try capabilities:\n");
    	    printGLCapabilities ( &glCaps );
        }

        visual = glXChooseVisual( disp, screen, visualAttribList );
    
        if(JNI_TRUE==verbose)
        {
        	if(visual!=NULL)
        	{
        	    fprintf(stdout, "X11DrawableFactory.glXChooseVisual: found visual(ID:%d(0x%X)):\n", 
        		(int) visual->visualid,
        		(int) visual->visualid);
        		printVisualInfo ( disp, visual);
        	}
        	fflush(stdout);
        }
	/**
	 * Falling-Back the exact (min. requirement) parameters ..
	 */
        if(visual==NULL && glCaps.stereo==STEREO_ON) {
		glCaps.stereo=STEREO_OFF;
        } else if(visual==NULL && glCaps.stencilBits>32) {
		glCaps.stencilBits=32;
        } else if(visual==NULL && glCaps.stencilBits>16) {
		glCaps.stencilBits=16;
        } else if(visual==NULL && glCaps.stencilBits>8) {
		glCaps.stencilBits=8;
        } else if(visual==NULL && glCaps.stencilBits>0) {
		glCaps.stencilBits=0;
        } else if(visual==NULL && glCaps.buffer==BUFFER_DOUBLE) {
	        glCaps.buffer=BUFFER_SINGLE;
        } else done=1; /* forget it .. */
    }

    if(visual==NULL)
    {
        fprintf(stdout, "X11DrawableFactory.glXChooseVisual: no visual\n");
    	return 0;
    }

    (void ) setGLCapabilities ( disp, visual, &glCaps );

    if(JNI_TRUE==verbose)
    {
	fprintf(stdout,"X11DrawableFactory.glXChooseVisual: writing capabilities to GLContext's java object\n");
	fflush(stdout);
    }

    (void) nativeGLCapabilities2JavaGLCapabilities
		(env, capsObj, &glCaps);

    /* JAU: see above .. */
    XCloseDisplay( disp );

    return (jlong) (visual->visualid);
}

