/*
 * Leo Chan -- 1995
 *
 * This file takes care of the C implementation of opening up an
 * X window, assigning an OpenGL graphics context to it, storing that
 * graphics context in the java class data structure.
 *
 * also contains the use() and swap() functions for double buffering
 *
 * Adam King -- 1997
 *
 * Modified Creation window code to use the currently showing Java Frame
 * window instead of creating a new window.
 * ---------------
 *
 * Many improvements and changes are made !
 *
 * Sven Goethel
 *
 * September 1997
 *
 * some X stuff is also modified/debugged to run on aix ...
 */

/**
 * Pointer Semantics of GLContext:
 * ==============================

   "displayHandle"	:= (Display *)
   	
   "windowHandle" 	:= (Window)
   	if("offScreenRenderer" == FALSE && "createOwnWindow" == TRUE )
		"windowHandle" contains the new created Window 
		               (by XCreateWindow)!
	else
		"windowHandle" contains the new Java-Native Window 

   "pixmapHandle"	:= (Pixmap)
   	if("offScreenRenderer" == TRUE)
		"pixmapHandle" contains the new Pixmap (by XCreatePixmap)!
		"windowHandle" contains the new created OffScreenWindow 
			       (by glXCreateGLXPixmap)!
        else
		"pixmapHandle" is unused !

   "sharedGLContextNative" := (GLXContext)
   	This is the optional shared GLContext !

   "glContext" := (GLXContext)
   	This is THE used GLContext !

   "pData    " := (jlong)
   	This is used as the "not initialized" flag !
	It is reset to zero while Destroy Method
 */

#include <stdio.h>
#include <stdlib.h>
#include <jni.h>

/*
 * the next thing to include are special headers that were created by
 * JAVAH.  They include the C structure definitions for the JAVA classes
 */
#include "gl4java_GLContext.h"

/*--------------------------------------------------------------------------
 * here on in is just regular apple pie C
 */

#include <X11/Xlib.h>
#include <X11/Xutil.h>

#include <GL/glx.h>
#include <X11/Xatom.h>

#include <stdlib.h>

#include "OpenGL_X11_common.h"

/*
 * STATIC FLAGS FOR gl4java behavior ...
 */
static jboolean verbose = JNI_FALSE;

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_useJAWT( JNIEnv *env, jobject obj )
{
    (void)env;
    (void)obj;
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_hasJAWTSurfaceChanged( JNIEnv *env, jobject obj,
					      jlong thisWin )
{
    (void)env;
    (void)obj;
    (void)thisWin;
    return JNI_FALSE;
}

/*
 * OpenGL_GLFrame_openOpenGL
 *
 * the function name is created by JAVAH to reflect the package and class
 * names of the JAVA object that called this native code.
 *
 * the parameter is a handle to the OpenGL_OpenGLFrame object -- 
 * the data portion
 * followed by the method table for the class.
 */
JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_openOpenGLNative( JNIEnv *env, jobject obj,
					 jobject canvas)
{
    int screen = 0;

    /* found matching visual and gc */
    VisualGC vgc = { NULL, 0, 0 };

    jboolean ret = JNI_TRUE;

    jclass cls = 0;
    jfieldID fdisplayHandle=0, fwindowHandle=0, fpixmapHandle=0;
    jfieldID fverbose=0;
    jfieldID fglContext=0;
    jfieldID fglCaps=0;
    jfieldID fownwind=0, foffScreenRenderer;

    jfieldID fcreatewinw = 0, fcreatewinh = 0;
    jfieldID fshareWith = 0;
    jboolean joffScreenRenderer=JNI_FALSE;

    jobject  jglCaps=0;
    GLCapabilities glCaps;

    jboolean jownwind = JNI_FALSE ;
    jint jcreatewinw = 0, jcreatewinh = 0;
    GLXContext jshareWith = 0;

    /* these variables will be mapped in the java-object ! */
    Window thisWin=0;
    Display * display = 0;
    Window rootwini  = 0;
    Pixmap pix;

    jthrowable exc;
    jclass _GLCapabilities= 0;

    (void)canvas;

    cls = (*env)->GetObjectClass(env, obj);
    if(cls==0) 
    {
        fprintf(stderr,"GL4Java ERROR: clazz not accessible\n");
	fflush(stderr);
	ret=JNI_FALSE;
    }

    if(ret==JNI_TRUE) {
	    fverbose =(*env)->GetStaticFieldID(env, cls, "gljNativeDebug", "Z");
	    if (fverbose == 0) 
	    {
                fprintf(stderr,"GL4Java: fverbose==0\n");
                fflush(stderr);
		ret=JNI_FALSE;
	    } else {
		verbose = (*env)->GetStaticBooleanField(env, cls, fverbose);
	    }
    }

    if(JNI_TRUE==verbose)
    {
	fprintf(stderr, "GL4Java: sizes:\n jint=%d\n (Display *)=%d\n GLXContext=%d\n",
	  sizeof(jint), sizeof(Display *), sizeof(GLXContext) );
	fflush(stderr);
    }

    /* FIRST OF ALL CHECK IF A NATIVE POINTER OR X11-TYPE FITS IN ´jlong´ */
    ret = testX11Java();
    ret = testJavaGLTypes(verbose);

    if(ret==JNI_TRUE) {
	    foffScreenRenderer = 
	    		(*env)->GetFieldID(env, cls, "offScreenRenderer", "Z");
            if (foffScreenRenderer == 0) ret= JNI_FALSE;
	    else joffScreenRenderer =(*env)->GetBooleanField(env, obj, foffScreenRenderer);
    }

    if(ret==JNI_TRUE) {
	    fglCaps = (*env)->GetFieldID(env, cls, "glCaps", "Lgl4java/GLCapabilities;");
	    if (fglCaps == 0) ret= JNI_FALSE;
	    else jglCaps =(*env)->GetObjectField(env, obj, fglCaps);
    }

    _GLCapabilities= (*env)->FindClass(env, "Lgl4java/GLCapabilities;");
    exc = (*env)->ExceptionOccurred(env);
    if(exc) {
          if(JNI_TRUE==verbose)
	  {
             fprintf(stderr, "GL4Java: openOpen FindClass gl4java/GLCapabilities failed, cannot check glCaps object\n");
	     (*env)->ExceptionDescribe(env);
             fflush(stderr);
	  }
	  (*env)->ExceptionClear(env);
	  _GLCapabilities=0;
    }
    exc=0;

    if( _GLCapabilities!=0 &&
        (*env)->IsInstanceOf(env, jglCaps, _GLCapabilities)==JNI_FALSE )
    {
      fprintf(stderr,"\nGL4Java openOpenGL ERROR: glCaps is not instanceof gl4java/GLCapabilities !\n");
      fflush(stderr);
      return JNI_FALSE;
    }

    if(JNI_TRUE != javaGLCapabilities2NativeGLCapabilities
                           ( env, jglCaps, &glCaps ) )
    {
      fprintf(stderr,"\nGL4Java ERROR: glCaps Object is not valid !\n");
      fflush(stderr);
      return JNI_FALSE;
    }

    if(ret==JNI_TRUE) {
	    fcreatewinw = (*env)->GetFieldID(env, cls, "createwinw", "I");
	    if (fcreatewinw == 0) ret= JNI_FALSE;
	    else jcreatewinw =(*env)->GetIntField(env, obj, fcreatewinw);
    }

    if(ret==JNI_TRUE) {
	    fcreatewinh = (*env)->GetFieldID(env, cls, "createwinh", "I");
	    if (fcreatewinh == 0) ret= JNI_FALSE;
	    else jcreatewinh =(*env)->GetIntField(env, obj, fcreatewinh);
    }

    if(ret==JNI_TRUE) {
	    fownwind = (*env)->GetFieldID(env, cls, "createOwnWindow", "Z");
	    if (fownwind == 0) ret= JNI_FALSE;
	    else jownwind =(*env)->GetBooleanField(env, obj, fownwind);
    }

    if(ret==JNI_TRUE) {
	    fshareWith = (*env)->GetFieldID(env, cls, "sharedGLContextNative", "J");
	    if (fshareWith == 0) ret= JNI_FALSE;
	    else jshareWith = (GLXContext)
		( (PointerHolder) (*env)->GetLongField(env, obj, fshareWith) );
    }


    if(ret==JNI_TRUE) {
	    fwindowHandle = (*env)->GetFieldID(env, cls, "windowHandle", "J");
	    if (fwindowHandle == 0) ret= JNI_FALSE;
	    else 
	      thisWin =(Window) 
	      ( (PointerHolder) (*env)->GetLongField(env, obj, fwindowHandle) );
    }

    if(ret==JNI_TRUE) {
	    fpixmapHandle = (*env)->GetFieldID(env, cls, "pixmapHandle", "J");
	    if (fpixmapHandle == 0) ret= JNI_FALSE;
    }

    if(joffScreenRenderer==JNI_TRUE)
    {
	    jownwind = JNI_FALSE;
	    thisWin=0;
    }

    if(thisWin==0 && joffScreenRenderer==JNI_FALSE)
    {
	  fprintf(stderr,"\nGL4Java ERROR: given native window == NULL !\n");
	  fflush(stderr);
	  ret=JNI_FALSE;
    }

    if(JNI_TRUE==verbose)
    {
	fprintf(stderr,"\nGL4Java:  (JAVA FOUND WINDOW HANDLE 0x%p)\n", 
	    (void *)((PointerHolder)thisWin));
	if(joffScreenRenderer==JNI_TRUE)
	{
	  fprintf(stderr,"\nGL4Java:  (USING OFFSCREEN GLPIXMAP BUFFER,\n\t forced: !ownWindow, window=NULL)\n");
	}
	fflush(stderr);
    }

    if(ret==JNI_TRUE) {
	    fdisplayHandle = (*env)->GetFieldID(env, cls, "displayHandle", "J");
	    if (fdisplayHandle == 0) ret= JNI_FALSE;
    }

    if(ret==JNI_TRUE) {
	    fglContext=(*env)->GetFieldID(env, cls, "glContext", "J");
	    if (fglContext == 0) ret= JNI_FALSE;
    }

	/*
	    if(ret==JNI_TRUE)
		XSetErrorHandler(x11gl_myErrorHandler);

	    if(ret==JNI_TRUE)
		XSetIOErrorHandler(x11gl_myIOErrorHandler);
	*/

    if(ret==JNI_TRUE)
	    display = XOpenDisplay( NULL );

    if(ret==JNI_TRUE && display == NULL ) {
        /* return FALSE to tell JAVA that we couldn't open.  could also use
         * SignalError() here if we would prefer to throw an exception
         */
	 fprintf(stderr, "GL4Java ERROR: Can not open Display\n");
	 fflush(stderr);
         ret = JNI_FALSE;
    }

    /* Check to see if the Xserver supports OpenGL */
    if(ret==JNI_TRUE) {
      if( !glXQueryExtension(display, (int *) 0, (int *) 0) ) {
	fprintf(stderr, "GL4Java ERROR: Can not query glx extension -> Server does not support OpenGL\n");
	fflush(stderr);
        ret = JNI_FALSE;
      } else if (JNI_TRUE==verbose) 
      {
		fprintf(stdout, "GLX by %s Version %s\n", 
			glXGetClientString(display, GLX_VENDOR),
			glXGetClientString(display, GLX_VERSION));
      }
    }

    /* initialize the x stuff */
    if(ret==JNI_TRUE)
    {
	    screen = DefaultScreen( display );
            rootwini  = RootWindow(display,screen) ;

	    glXMakeCurrent(display, None, NULL);

            vgc = findVisualGlX( display, rootwini, &thisWin,
	                         (int)jcreatewinw, (int)jcreatewinh, 
				 &glCaps,
				 &jownwind, jshareWith,
				 joffScreenRenderer, &pix, verbose);

	    if(vgc.success == 0 && glCaps.color==COLOR_RGBA)
	    {
		if (JNI_TRUE==verbose) {
			fprintf(stdout, "GL4Java switching color:=COLOR_INDEX\n");
			fflush(stdout);
		}
	        glCaps.color=COLOR_INDEX;

                vgc = findVisualGlX( display, rootwini, &thisWin,
	                             (int)jcreatewinw, (int)jcreatewinh, 
				     &glCaps,
				     &jownwind, jshareWith,
				     joffScreenRenderer, &pix, verbose);
	    }

	    if(vgc.success == 0)
	    {
	         fprintf(stderr,"GL4Java ERROR: GETTING GC FAILED\n");
	         fflush(stderr);

		 if(jownwind==JNI_TRUE && thisWin!=0)
			 XDestroyWindow( display, thisWin );
		 if(joffScreenRenderer==JNI_TRUE && pix!=0)
			 XFreePixmap(display, pix);
		 XCloseDisplay( display );
		 ret = JNI_FALSE;
	    } else {
		 (void) setGLCapabilities (display, vgc.visual, &glCaps);

		 if(JNI_TRUE==verbose)
		 {
			fprintf(stdout,"\nGL4Java: writing capabilities to GLContext's java object\n");
			fflush(stdout);
		 }

		 (void) nativeGLCapabilities2JavaGLCapabilities
		 		(env, jglCaps, &glCaps);

	         if(ret==JNI_TRUE && fglCaps) {
		    (*env)->SetObjectField(env, obj, fglCaps, jglCaps);
	         }
	    }
    }

    /* we are now done with the visual so we should free the storage */

    if(ret==JNI_TRUE)
    {
	    XClearWindow( display, thisWin );
	    XMapWindow( display, thisWin );
	    XFlush( display ); 
    }

    if(ret==JNI_TRUE && fwindowHandle!=0) {
	    (*env)->SetLongField(env, obj, fwindowHandle, (jlong)((PointerHolder)thisWin));
    }

    if(ret==JNI_TRUE && fpixmapHandle!=0) {
	    (*env)->SetLongField(env, obj, fpixmapHandle, (jlong)((PointerHolder)pix));
    }

    if(ret==JNI_TRUE && fdisplayHandle) {
	    (*env)->SetLongField(env, obj, fdisplayHandle, (jlong)((PointerHolder)display));
    }

    if(ret==JNI_TRUE && fglContext) {
	    (*env)->SetLongField(env, obj, fglContext, (jlong)((PointerHolder)vgc.gc));
    }

    if(ret==JNI_TRUE && fownwind) {
	    (*env)->SetBooleanField(env, obj, fownwind, jownwind);
    }

    return ret;
}

JNIEXPORT void JNICALL
Java_gl4java_GLContext_gljResizeNative( JNIEnv *env, jobject obj,
	                                jboolean isOwnWindow,
				        jlong disp, jlong thisWin,
				        jint width, jint height)
{
    /* perform a X11 synchronise, because rendering could be done
     * by a native Thread .... So we have to try avoid gl* reentrance
     * on the same GL-Context
     */
    glXWaitGL();

    if(isOwnWindow)
    {
	   XResizeWindow((Display *)((PointerHolder)disp), 
	                 (Window)((PointerHolder)thisWin), width, height);
	   /* if(JNI_TRUE==verbose)
	   {
		fprintf(stderr, "XResizeWindow -> %d x %d\n", 
			(int)width, (int)height);
		fflush(stderr);
	   } */
    }

    return;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljMakeCurrentNative( JNIEnv *env, jobject obj,
					     jobject canvas,
					     jlong disp,
					     jlong thisWin,
					     jlong glContext
                                           )
{
    jboolean ret = JNI_TRUE;
    GLXContext ctx = NULL;

    (void)canvas;

    if(glContext==0)
    {
	fprintf(stderr, "GL4Java ERROR: gljUse NO actual GC was created ...\n");
	fflush(stderr);
	return JNI_FALSE;
    }

    ctx = glXGetCurrentContext();

    if(ctx==(GLXContext)((PointerHolder)glContext))
    	return JNI_TRUE;

    if(ret==JNI_TRUE)
    {
	    if( !glXMakeCurrent( (Display *)((PointerHolder)disp), 
	                         (Window)((PointerHolder)thisWin), 
	                         (GLXContext)((PointerHolder)glContext) ) ) 
	    {
   extern GLenum glGetError ( void ) ;
		fprintf(stderr, "GL4Java: gljMakeCurrent failed with GC\n  Another thread may be use it now ...\n");
		fflush(stderr);
		ret = JNI_FALSE;
	    } 
    }
    
    return ret;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljFreeNative( JNIEnv *env, jobject obj,
			              jobject canvas,
				      jlong disp,
				      jlong thisWin,
				      jlong glContext
				    )
{
    jboolean ret = JNI_TRUE;

    (void)thisWin;
    (void)glContext;
    (void)canvas;

    if(ret==JNI_TRUE)
    {
	    if( !glXMakeCurrent( (Display *)((PointerHolder)disp), None, NULL)) 
	    {
		fprintf(stderr, "GL4Java: gljFree failed\n");
		fflush(stderr);
		ret = JNI_FALSE;
	    }  
    }
    return ret;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljIsContextCurrentNative( JNIEnv *env, jobject obj,
				      jlong glContext
				    )
{
    GLXContext ctx = glXGetCurrentContext();

    if(ctx==(GLXContext)((PointerHolder)glContext))
    	return JNI_TRUE;

    return JNI_FALSE;
}


JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljDestroyNative( JNIEnv *env, jobject obj,
					 jobject canvas )
{
    jclass cls = 0;
    jfieldID fdisplayHandle=0, fwindowHandle=0, fglContext=0;
    jfieldID fpixmapHandle=0;
    jfieldID fpData=0;
    jfieldID fownwind=0;

    jboolean jownwind = JNI_FALSE ;
    Display *disp=0;
    GLXContext gc=0;
    Window win=0;
    jlong pData=0;
    Pixmap pix=0;

    jboolean ret = JNI_TRUE;

    (void) canvas;

    cls = (*env)->GetObjectClass(env, obj);
    if(cls==0) ret=JNI_FALSE;

    if(ret==JNI_TRUE) {
	    fwindowHandle = (*env)->GetFieldID(env, cls, "windowHandle", "J");
	    if (fwindowHandle == 0) ret= JNI_FALSE;
	    else win = (Window) 
	      ( (PointerHolder) (*env)->GetLongField(env, obj, fwindowHandle) );
    }

    if(ret==JNI_TRUE) {
	    fdisplayHandle = (*env)->GetFieldID(env, cls, "displayHandle", "J");
	    if (fdisplayHandle == 0) ret= JNI_FALSE;
	    else disp=(Display *)
	      ( (PointerHolder) (*env)->GetLongField(env, obj, fdisplayHandle));
    }

    if(ret==JNI_TRUE) {
	    fglContext=(*env)->GetFieldID(env, cls, "glContext", "J");
	    if (fglContext == 0) ret= JNI_FALSE;
	    else gc =(GLXContext)
	      ( (PointerHolder) (*env)->GetLongField(env, obj, fglContext) );
    }

    if(ret==JNI_TRUE) {
	fpData = (*env)->GetFieldID(env, cls, "pData", "J");
	if (fpData == 0) ret= JNI_FALSE;
	else pData =(*env)->GetLongField(env, obj, fpData);
    }

    if(ret==JNI_TRUE) {
	    fpixmapHandle = (*env)->GetFieldID(env, cls, "pixmapHandle", "J");
	    if (fpixmapHandle == 0) ret= JNI_FALSE;
	    else pix = (Pixmap) 
	     ( (PointerHolder) (*env)->GetLongField(env, obj, fpixmapHandle));
    }

    if(ret==JNI_TRUE) {
	    fownwind = (*env)->GetFieldID(env, cls, "createOwnWindow", "Z");
	    if (fownwind == 0) ret= JNI_FALSE;
	    else jownwind =(*env)->GetBooleanField(env, obj, fownwind);
    }

    glXWaitGL();

    if(ret==JNI_TRUE)
    {
	    if ( gc == 0 )
	    {
	        if(JNI_TRUE==verbose)
		{
			fprintf(stderr, "GL4Java: gljDestroy failed, GL context is 0\n");
			fflush(stderr);
		}
	    }
	    glXMakeCurrent( disp, None, NULL );

	    if(ret==JNI_TRUE) 
	    {
	    	if(gc!=0)
			glXDestroyContext(disp, gc);
	        if(pix!=0)
	        {
		    if(win!=0)
			    glXDestroyGLXPixmap(disp, win);
		    win=0;
		    XFreePixmap(disp, pix);
	        }
		if(jownwind && win!=0)
		{
		    XDestroyWindow(disp, win);
		    win=0;
		}
	    }
    }

    if(ret==JNI_TRUE) 
    {
	    gc = 0;
	    disp=0;
	    win = 0;
	    pix = 0;
	    pData=0; /* remark the class, we must reinit GL-Context ! */
    }

    if(ret==JNI_TRUE && fpixmapHandle!=0) {
	    (*env)->SetLongField(env, obj, fpixmapHandle, (jlong)((PointerHolder)pix));
    }

    if(ret==JNI_TRUE && fwindowHandle!=0) {
	    (*env)->SetLongField(env, obj, fwindowHandle, (jlong)((PointerHolder)win));
    }

    if(ret==JNI_TRUE && fdisplayHandle) {
	    (*env)->SetLongField(env, obj, fdisplayHandle, (jlong)((PointerHolder)disp));
    }

    if(ret==JNI_TRUE && fglContext) {
	    (*env)->SetLongField(env, obj, fglContext, (jlong)((PointerHolder)gc));
    }


    if(ret==JNI_TRUE && fpData) {
	    (*env)->SetLongField(env, obj, fpData, pData);
    }

    if(ret==JNI_TRUE && fownwind) {
	    (*env)->SetBooleanField(env, obj, fownwind, jownwind);
    }
    return ret;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljSwapNative( JNIEnv *env, jobject obj,
				      jlong disp,
				      jlong thisWin,
				      jlong glContext,
				      jboolean doubleBuffer
				    )
{
    (void)glContext;

    if( doubleBuffer == JNI_FALSE ) {
	/* don't double buffer */
	glXWaitGL();
    } else {
	glXSwapBuffers( (Display *)((PointerHolder)disp), 
	                (Window)((PointerHolder)thisWin) );
    }

    return JNI_TRUE;
}


