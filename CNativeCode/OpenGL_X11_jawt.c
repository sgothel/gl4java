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
   	
   "pData" 		:= (JAWTDataHolder *)
   	"windowHandle" 	:= "pData"

        This holds the current state of the JAWT context !

   	This is used as the "not initialized" flag also !
	It is reset to zero while Destroy Method

   "pData"->dsi_win     := (Window)
   	if("offScreenRenderer" == FALSE && "createOwnWindow" == TRUE )
		"pData"->dsi_win contains the new created Window 
		               (by XCreateWindow), and
		"pData"->dsi_win_created=1 !

   	else if("offScreenRenderer" == TRUE && "createOwnWindow" == FALSE )
		"pData"->dsi_win contains the new created GLXPixmap 
		               (by glXCreateGLXPixmap), and
		"pData"->dsi_win_created=1 !
	else
		"pData"->dsi_win contains the window handle,
		of the last lock !
		"pData"->dsi_win_created=0 !

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

#include "jawt_misc.h"

/*
 * Macros ..
 */

#define GET_X11_JAWT_DSI(a) \
	( (JAWT_X11DrawingSurfaceInfo *) \
	  ( ( (JAWTDataHolder *)((PointerHolder)(a)) ) ->dsi_os ) \
        )

#define GET_USED_WINDOW(a) \
	( (Window) \
	  ( ( (JAWTDataHolder *)((PointerHolder)(a)) ) ->dsi_win ) \
        )

#define GET_USED_DISPLAY(a) \
	( (Display *) \
	  ( ( (JAWTDataHolder *)((PointerHolder)(a)) ) ->dsi_display ) \
        )

/*
 * STATIC FLAGS FOR gl4java behavior ...
 */
static jboolean verbose = JNI_FALSE;

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_useJAWT( JNIEnv *env, jobject obj )
{
    (void)env;
    (void)obj;
    return JNI_TRUE;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_hasJAWTSurfaceChanged( JNIEnv *env, jobject obj,
					      jlong thisWin )
{
    JAWTDataHolder * pData = (JAWTDataHolder *) ( (PointerHolder) thisWin );
    (void)env;
    (void)obj;

    return (pData->lock & JAWT_LOCK_SURFACE_CHANGED) != 0 ;
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
                                         jobject canvas )
{
    int screen = 0;

    /* found matching visual and gc */
    VisualGC vgc = { NULL, 0, 0 };

    jboolean ret = JNI_TRUE;

    jclass cls = 0;
    jfieldID fpData=0, fwindowHandle=0;
    jfieldID fdisplayHandle=0, fpixmapHandle=0;
    jfieldID fverbose=0;
    jfieldID fglContext=0;

    jfieldID fglCaps=0;
    jfieldID foffScreenRenderer=0, fownwind=0;

    jfieldID fcreatewinw = 0, fcreatewinh = 0;
    jfieldID fshareWith = 0;
    jboolean joffScreenRenderer=JNI_FALSE;
    jboolean jownwind = JNI_FALSE ;
    jint jcreatewinw = 0, jcreatewinh = 0;
    GLXContext jshareWith = 0;

    jobject  jglCaps=0;
    GLCapabilities glCaps;

    /* these variables will be mapped in the java-object ! */
    JAWTDataHolder * pData = NULL;
    Display * display = 0;
    Window rootwini  = 0;
    Window theWindow  = 0;
    Pixmap pix=0;
    jthrowable exc;
    jclass _GLCapabilities= 0;
    jclass _AwtComponent=0;

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
	fpData = (*env)->GetFieldID(env, cls, "pData", "J");
	if (fpData == 0) ret= JNI_FALSE;
	else pData =(JAWTDataHolder *)
	      ( (PointerHolder) (*env)->GetLongField(env, obj, fpData) );
    }

    if(ret==JNI_TRUE) {
	    fwindowHandle = (*env)->GetFieldID(env, cls, "windowHandle", "J");
    }

    if(ret==JNI_TRUE) {
	    fpixmapHandle = (*env)->GetFieldID(env, cls, "pixmapHandle", "J");
	    if (fpixmapHandle == 0) ret= JNI_FALSE;
    }

    if(joffScreenRenderer==JNI_TRUE)
    {
	    jownwind = JNI_FALSE;
    }

    if(ret==JNI_TRUE) {
	    fdisplayHandle = (*env)->GetFieldID(env, cls, "displayHandle", "J");
	    if (fdisplayHandle == 0) ret= JNI_FALSE;
    }

    if(ret==JNI_TRUE) {
	    fglContext=(*env)->GetFieldID(env, cls, "glContext", "J");
	    if (fglContext == 0) ret= JNI_FALSE;
    }

    _AwtComponent= (*env)->FindClass(env, "Ljava/awt/Component;");
    exc = (*env)->ExceptionOccurred(env);
    if(exc) {
          if(JNI_TRUE==verbose)
	  {
             fprintf(stderr, "GL4Java: openOpen FindClass java/awt/Component failed, cannot check canvas object\n");
	     (*env)->ExceptionDescribe(env);
             fflush(stderr);
	  }
	  (*env)->ExceptionClear(env);
	  _AwtComponent=0;
    }
    exc=0;

    if(ret==JNI_TRUE) {
	if (canvas == 0) 
	{
		ret= JNI_FALSE;
		fprintf(stderr,"\nGL4Java ERROR: canvas == NULL !\n");
		fflush(stderr);
	} else {
		if( _AwtComponent!=0 &&
		    (*env)->IsInstanceOf(env, canvas, _AwtComponent)==JNI_FALSE)
		{
		  fprintf(stderr,"\nGL4Java ERROR: canvas is not instanceof java/awt/Component !\n");
		  fflush(stderr);
		  ret= JNI_FALSE;
		}
	}
    }

    if(joffScreenRenderer==JNI_TRUE)
    {
        jawt_create_offscreen(env, &pData, verbose);
    } 
    else {
        if(jawt_create_open(env, canvas, &pData, verbose)==JNI_FALSE ||
           pData->result==JNI_FALSE
          )
        {
	  fprintf(stderr,"\nGL4Java ERROR: openOpen could not create&open JAWT reference!\n");
	  fflush(stderr);
	  jawt_free_close_unlock(env, &pData, JNI_FALSE);
	  ret=JNI_FALSE;
	  return ret;
        }

        if(jawt_lock(env, pData, JNI_TRUE, verbose)==JNI_FALSE ||
           pData->result==JNI_FALSE
          )
        {
	  fprintf(stderr,"\nGL4Java ERROR: openOpen could not lock JAWT reference!\n");
	  fflush(stderr);
	  jawt_free_close_unlock(env, &pData, JNI_FALSE);
	  ret=JNI_FALSE;
	  return ret;
        }
    }

    if(pData->result==JNI_TRUE)
    {
	    // display = GET_X11_JAWT_DSI(pData)->display;

	    /* JAU: Why ? the above jawt display does not work ... :-( */
	    display = XOpenDisplay( NULL );
	    pData->dsi_display_created = 1;
	    pData->dsi_display=display;

	    if(display==NULL)
	    {
		  fprintf(stderr,"\nGL4Java ERROR: display of JAWT reference is NULL !\n");
		  fflush(stderr);
    		  pData->result=JNI_FALSE;
		  ret=JNI_FALSE;
		  jawt_free_close_unlock(env, &pData, JNI_FALSE);
		  return ret;
	    }

	    if(joffScreenRenderer==JNI_FALSE)
	    {
	    	theWindow = GET_X11_JAWT_DSI(pData)->drawable;
	        jcreatewinw =  pData->dsi->bounds.width;
	        jcreatewinh =  pData->dsi->bounds.height;
	    }
    }

	/*
	    if(ret==JNI_TRUE)
		XSetErrorHandler(x11gl_myErrorHandler);

	    if(ret==JNI_TRUE)
		XSetIOErrorHandler(x11gl_myIOErrorHandler);
	*/

    if(JNI_TRUE==ret && JNI_TRUE==verbose)
    {
	if(joffScreenRenderer==JNI_TRUE)
	{
	  fprintf(stderr,"\nGL4Java:  (USING OFFSCREEN GLPIXMAP BUFFER,\n\t forced: !ownWindow, window=NULL)\n");
	} else {
	  fprintf(stderr,"\nGL4Java:  (JAVA FOUND WINDOW HANDLE 0x%p)\n\t(FOUND VISUALID %d)\n", 
	    (void *)((PointerHolder)GET_X11_JAWT_DSI(pData)->drawable),
	    (int)GET_X11_JAWT_DSI(pData)->visualID);
	}
	fflush(stderr);
    }

    /* Check to see if the Xserver supports OpenGL */
    if(ret==JNI_TRUE) {
      if( !glXQueryExtension(display, (int *) 0, (int *) 0) ) {
	fprintf(stderr, "GL4Java ERROR: Can not query glx extension -> Server does not support OpenGL\n");
	fflush(stderr);
	jawt_free_close_unlock(env, &pData, JNI_FALSE);
        ret = JNI_FALSE;
      } else {
	if (JNI_TRUE==verbose) {
		fprintf(stdout, "GLX by %s Version %s\n", 
			glXGetClientString(display, GLX_VENDOR),
			glXGetClientString(display, GLX_VERSION));
		fflush(stdout);
	}
      }
    }

    /* initialize the x stuff */
    if(ret==JNI_TRUE)
    {
	    screen = DefaultScreen( display );
            rootwini  = RootWindow(display,screen) ;

	    glXMakeCurrent(display, None, NULL);

            vgc = findVisualGlX( display, rootwini, &theWindow,
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

                vgc = findVisualGlX( display, rootwini, &theWindow,
	                             (int)jcreatewinw, (int)jcreatewinh, 
				     &glCaps,
				     &jownwind, jshareWith,
				     joffScreenRenderer, &pix, verbose);
	    }

	    if(vgc.success == 0)
	    {
	         fprintf(stderr,"GL4Java ERROR: GETTING GC FAILED\n");
	         fflush(stderr);

		 if(jownwind==JNI_TRUE && theWindow!=0)
			 XDestroyWindow( display, theWindow );
		 if(joffScreenRenderer==JNI_TRUE && pix!=0)
			 XFreePixmap(display, pix);
		 XCloseDisplay( display );
		 jawt_free_close_unlock(env, &pData, JNI_FALSE);
		 ret = JNI_FALSE;
	    } else {
		 if(jownwind==JNI_TRUE || joffScreenRenderer==JNI_TRUE)
		 {
	         	pData->dsi_win=(void *)(PointerHolder)theWindow;
	         	pData->dsi_win_created=1;
		 }

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
	    XClearWindow( display, theWindow );
	    XMapWindow( display, theWindow );
	    XFlush( display ); 
    }

    jawt_close_unlock(env, pData, verbose);


    if(ret==JNI_TRUE && fpData) {
	    (*env)->SetLongField(env, obj, fpData, (jlong)((PointerHolder)pData));
    }

    if(ret==JNI_TRUE && fwindowHandle!=0) {
	    (*env)->SetLongField(env, obj, fwindowHandle, (jlong)((PointerHolder)pData));
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
	   XResizeWindow(GET_USED_DISPLAY(thisWin),
	                 GET_USED_WINDOW(thisWin), width, height);
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
    JAWTDataHolder * pData = (JAWTDataHolder *) ( (PointerHolder) thisWin );

    if(pData==0)
    {
	fprintf(stderr, "GL4Java ERROR: gljUse NO JAWT Holder exist ! (pData=%p, thisWin=%lX) ...\n", pData, (long)thisWin);
	fflush(stderr);
	return JNI_FALSE;
    }

    if(glContext==0)
    {
	fprintf(stderr, "GL4Java ERROR: gljUse NO actual GC was created ...\n");
	fflush(stderr);
	return JNI_FALSE;
    }

    if(jawt_open(env, canvas, pData, verbose)==JNI_FALSE ||
       pData->result==JNI_FALSE
      )
    {
	  fprintf(stderr,"\nGL4Java ERROR: MakeCurrent could not open JAWT reference!\n");
	  fflush(stderr);
	  ret=JNI_FALSE;
	  jawt_close_unlock(env, pData, JNI_FALSE);
	  return ret;
    }

    if(jawt_lock(env, pData, JNI_FALSE, verbose)==JNI_FALSE ||
       pData->result==JNI_FALSE
      )
    {
         /* this can happen:
	   if ( (pJData->lock & JAWT_LOCK_SURFACE_CHANGED) != 0 ) 

	   In this case, we need a new GLXContext ...

	   This has to be queried by the java class,
	   while using the native method hasJAWTSurfaceChanged !
          */
	  if(verbose)
	  {
	     fprintf(stderr,"\nGL4Java ERROR: MakeCurrent could not lock JAWT reference!\n");
	     fflush(stderr);
	  }
	  ret=JNI_FALSE;
	  jawt_close_unlock(env, pData, JNI_FALSE);
	  return ret;
    }

    ctx = glXGetCurrentContext();

    if(ret==JNI_TRUE && ctx!=(GLXContext)((PointerHolder)glContext) )
    {
	    if( !glXMakeCurrent( GET_USED_DISPLAY(thisWin),
	                         GET_USED_WINDOW(thisWin),
	                         (GLXContext)((PointerHolder)glContext) ) ) 
	    {
		fprintf(stderr, "GL4Java: gljMakeCurrent failed with GC\n  Another thread may be use it now ...\n");
		fflush(stderr);
	        jawt_close_unlock(env, pData, JNI_FALSE);
		ret = JNI_FALSE;
	    } 
    }
    
    // keep jawt locked .. for this thread till FreeNative !

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
    JAWTDataHolder * pData = (JAWTDataHolder *) ( (PointerHolder) thisWin );

    (void)glContext;
    (void)canvas;

    if(ret==JNI_TRUE)
    {
	    if( !glXMakeCurrent( GET_USED_DISPLAY(thisWin),
	                         None, NULL)) 
	    {
		fprintf(stderr, "GL4Java: gljFree failed\n");
		fflush(stderr);
		ret = JNI_FALSE;
	    }  
    }

    jawt_close_unlock(env, pData, verbose);

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
    JAWTDataHolder * pData = NULL;
    Pixmap pix=0;

    jboolean ret = JNI_TRUE;

    cls = (*env)->GetObjectClass(env, obj);
    if(cls==0) ret=JNI_FALSE;

    if(ret==JNI_TRUE) {
	    fwindowHandle = (*env)->GetFieldID(env, cls, "windowHandle", "J");
    }

    if(ret==JNI_TRUE) {
	    fdisplayHandle = (*env)->GetFieldID(env, cls, "displayHandle", "J");
	    if (fdisplayHandle == 0) ret= JNI_FALSE;
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
	else pData =(JAWTDataHolder *)
	      ( (PointerHolder) (*env)->GetLongField(env, obj, fpData) );
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

    if(ret!=JNI_TRUE)
    {
	if(JNI_TRUE==verbose)
	{
	    fprintf(stderr, "GL4Java: gljDestroy failed, bad param's\n");
	    fflush(stderr);
	}
    	return ret;
    }

    if(jawt_open(env, canvas, pData, verbose)==JNI_FALSE ||
       pData->result==JNI_FALSE
      )
    {
	  fprintf(stderr,"\nGL4Java ERROR: gljDestroy could not open JAWT reference!\n");
	  fflush(stderr);
	  ret=JNI_FALSE;
	  jawt_close_unlock(env, pData, JNI_FALSE);
	  return ret;
    }

    if(jawt_lock(env, pData, JNI_TRUE, verbose)==JNI_FALSE ||
       pData->result==JNI_FALSE
      )
    {
	if(JNI_TRUE==verbose)
	{
	    fprintf(stderr, "GL4Java: gljDestroy lock failed\n");
	    fflush(stderr);
	}
	/**
	 * we have to continue destroying the context !
	 *
	 * therefore, the show ain't over yet !
	 *
	    jawt_close_unlock(env, pData, JNI_FALSE);
	    return JNI_FALSE;
	 */  
	pData->result=JNI_TRUE; // the force will be with us ;-) 
    }

    win = GET_USED_WINDOW(pData);
    disp = GET_USED_DISPLAY(pData);

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
		{
			if(JNI_TRUE==verbose)
				fprintf(stderr, "GL4Java: glXDestroyContext sure %p\n", gc);
			glXDestroyContext(disp, gc);
		}
	        if(pix!=0)
		{
		    if(win!=0)
			    glXDestroyGLXPixmap(disp, win);
		    win=0;
		    pData->dsi_win = NULL;
		    pData->dsi_win_created = 0;
		    XFreePixmap(disp, pix);
		    pix=0;
		}
		if(jownwind && win!=0)
		{
		    XDestroyWindow(disp, win);
		    win=0;
		    pData->dsi_win = NULL;
		    pData->dsi_win_created = 0;
		    jownwind=JNI_FALSE;
		}
	    }
    }

    jawt_free_close_unlock(env, &pData, verbose);

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
	    (*env)->SetLongField(env, obj, fwindowHandle, (jlong)((PointerHolder)pData));
    }

    if(ret==JNI_TRUE && fdisplayHandle) {
	    (*env)->SetLongField(env, obj, fdisplayHandle, (jlong)((PointerHolder)disp));
    }

    if(ret==JNI_TRUE && fglContext) {
	    (*env)->SetLongField(env, obj, fglContext, (jlong)((PointerHolder)gc));
    }


    if(ret==JNI_TRUE && fpData) {
	    (*env)->SetLongField(env, obj, fpData, (jlong)((PointerHolder)pData));
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
	glXSwapBuffers( GET_USED_DISPLAY(thisWin),
	                GET_USED_WINDOW(thisWin) );
    }

    return JNI_TRUE;
}


