/*
 * Original Author: Leo Chan -- 1995
 *
 * Adam King 1997
 *		Ported to Win32 from X
 *
 * This file takes care of the C implementation of finding the correct
 * Win32 window, assigning an OpenGL graphics context to it, storing that
 * graphics context in the java class data structure.
 *
 * also contains the use() and swap() functions for double buffering
 *
 * September 12, 1997	- Adam King
 *		- Added support for rendering directly into a Canvas ( BIG rewrite )
 */

/**
 * Pointer Semantics of GLContext:
 * ==============================

   "displayHandle"	:= not used
   	
   "pData"              := (HDC)
   	This is original Java-Native Window Handle !
	It is transfered -> "windowHandle" in the beginning,
	so if no own created window will be used, "pData" == "windowHandle" !

   "windowHandle" 	:= (HDC)
        note: createOwnWindow is not recognized while creation process ..

   "pixmapHandle"	:= (HBITMAP)
   	if("offScreenRenderer" == TRUE)
		"pixmapHandle" contains the new BITMAP (by CreateDIBSection)!
		"windowHandle" contains the new created OffScreenWindow 
			       (by CreateCompatibleDC)!
        else
		"pixmapHandle" is unused !

   "sharedGLContextNative" := (HGLRC)
   	This is the optional shared GLContext !

   "glContext" := (HGLRC)
   	This is THE used GLContext !
 */

#include "OpenGL_Win32_common.h"

static jboolean verbose = JNI_FALSE;

JNIEXPORT jboolean JNICALL Java_gl4java_GLContext_loadJAWT0
(JNIEnv *env, jclass unused, jstring str)
{
  (void)env;
  (void)unused;
  (void)str;
  return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_useJAWT( JNIEnv *env, jclass unused )
{
    (void)env;
    (void)unused;
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

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_lockJAWT( JNIEnv *env, jobject obj,
				 jobject canvas,
				 jlong thisWin, jboolean verbose
			       )
{
    (void) env;
    (void) obj;
    (void) canvas;
    (void) thisWin;
    (void) verbose;
    return JNI_TRUE;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_unlockJAWT( JNIEnv *env, jobject obj,
				   jlong thisWin, jboolean verbose
				 )
{
    (void) env;
    (void) obj;
    (void) thisWin;
    (void) verbose;
    return JNI_TRUE;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_openOpenGLNative( JNIEnv *env, jobject obj,
					jobject canvas)
{
    jboolean ret = JNI_TRUE;

    jclass cls = 0;
    jfieldID fpixmapHandle=0;
    jfieldID foffScreenRenderer=0;
    jfieldID faccumSize=0;
    jfieldID fwindowHandle=0, fpData=0;
    jfieldID fverbose=0;
    jfieldID fglContext=0;
    jfieldID fshareWith=0;
    jfieldID fcreatewinw = 0, fcreatewinh = 0;
    jfieldID fglCaps=0;

    /* these variables will be mapped in the java-object ! */
    jboolean joffScreenRenderer=JNI_FALSE;
    HDC thisWin=0;
    HGLRC gc=0;
    PIXELFORMATDESCRIPTOR pfd;
    HDC pData=0;
	HGLRC shareWith=NULL;
    jint jcreatewinw = 0, jcreatewinh = 0;
    HBITMAP pix=0;
    GLCapabilities glCaps;
    jobject  jglCaps=0;
    jthrowable exc;
    jclass _GLCapabilities= 0;

    (void) canvas;

    cls = (*env)->GetObjectClass(env, obj);
    if(cls==0)
    {
        fprintf(stderr,"oo0.0 cls==0\n");
		  fflush(stderr);
		  return JNI_FALSE;
    }

    if(ret==JNI_TRUE)
    {
	    fverbose =(*env)->GetStaticFieldID(env, cls, "gljNativeDebug", "Z");
	    if (fverbose == 0)
	    {
                fprintf(stderr,"oo0.2 fverbose==0\n");
                fflush(stderr);
		return JNI_FALSE;
	    } else {
		verbose = (*env)->GetStaticBooleanField(env, cls, fverbose);
	    }
    }

    if(JNI_TRUE==verbose)
    {
		fprintf(stderr, "sizes:\n jlong=%d\n HGLRC=%d\n HDC=%d\n",
	  		sizeof(jlong), sizeof(HGLRC), sizeof(HDC) );
		fflush(stderr);
    }

    /* FIRST OF ALL CHECK IF A NATIVE POINTER OR WIN-TYPE FITS IN ´jlong´ */
    ret = testWin32Java();

    ret = testJavaGLTypes(verbose);

    if(ret==JNI_TRUE) {
	    fpData = (*env)->GetFieldID(env, cls, "pData", "J");
		if (fpData == 0) {
			fprintf(stderr, "pData not accessible !\n");
			fflush(stderr);
			ret= JNI_FALSE;
		} else pData = (HDC)
	      ( (PointerHolder)(*env)->GetLongField(env, obj, fpData));
    }
    if(JNI_TRUE==verbose)
    {
    	fprintf(stderr, "received pData : %d\n", (int)pData);
    }

    if(ret==JNI_TRUE) {
	    fwindowHandle = (*env)->GetFieldID(env, cls, "windowHandle", "J");
	    if (fwindowHandle == 0) {
			fprintf(stderr, "windowHandle not accessible !\n");
			fflush(stderr);
			ret= JNI_FALSE;
		}
    }

    if(ret==JNI_TRUE) {
	    fglContext=(*env)->GetFieldID(env, cls, "glContext", "J");
	    if (fglContext == 0)
	    {
			fprintf(stderr, "fglContext not accessible !\n");
			fflush(stderr);
			ret= JNI_FALSE;
		}
    }

    if(ret==JNI_TRUE) {
	    foffScreenRenderer = 
	    		(*env)->GetFieldID(env, cls, "offScreenRenderer", "Z");
	    if (foffScreenRenderer == 0)
	    {
			fprintf(stderr, "foffScreenRenderer not accessible !\n");
			fflush(stderr);
			ret= JNI_FALSE;
		}
	    else joffScreenRenderer =(*env)->GetBooleanField(env, obj, foffScreenRenderer);
    }

    if(ret==JNI_TRUE) {
            fglCaps = (*env)->GetFieldID(env, cls, "glCaps", "Lgl4java/GLCapabilities;");
            if (fglCaps == 0)
			{
				fprintf(stderr, "fglCaps not accessible !\n");
				fflush(stderr);
				ret= JNI_FALSE;
			}
            else jglCaps =(*env)->GetObjectField(env, obj, fglCaps);
    }

    if( jglCaps==0 )
    {
      fprintf(stderr,"\nGL4Java openOpenGL ERROR: ZERO capsObj was fetched by GetObjectField !\n");
      fflush(stderr);
      return JNI_FALSE;
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

    if( JNI_TRUE != javaGLCapabilities2NativeGLCapabilities ( env, jglCaps, &glCaps ) )
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
	    fshareWith = (*env)->GetFieldID(env, cls, "sharedGLContextNative", "J");
	    if (fshareWith == 0) ret= JNI_FALSE;
	    else shareWith = (HGLRC) 
	      ( (PointerHolder)(*env)->GetLongField(env, obj, fshareWith));
    }

    if(ret==JNI_TRUE) {
	    fpixmapHandle = (*env)->GetFieldID(env, cls, "pixmapHandle", "J");
	    if (fpixmapHandle == 0) ret= JNI_FALSE;
    }

    if(joffScreenRenderer==JNI_TRUE)
    {
	glCaps.buffer=BUFFER_SINGLE;
    }

    if(JNI_TRUE==verbose && joffScreenRenderer==JNI_TRUE)
    {
		fprintf(stderr,"\nGL4Java:  (USING OFFSCREEN GLPIXMAP BUFFER,\n\t forced: !doubleBuffer)\n");
		fflush(stderr);
    }

    disp__wglMakeCurrent(NULL, NULL);

    /**
     * with version jdk1.1.6 and later, we are able to use 
     * the java-function straight to achieve the native window
     * handle ....
     *
     * this handle is saved to pData for the windows version !
     */
    if( pData == 0)
    {
	    printf( "get_GC: Error, pData is zero\n");
	    return JNI_FALSE;
    }
    if( pData != 0 )
	    thisWin = (HDC)pData;

    /* get the graphics context for this widget */
    if( (gc = get_GC( &thisWin, &glCaps, shareWith, 
	              joffScreenRenderer, jcreatewinw, jcreatewinh, 
		      &pix, verbose)) == 0 
      )
    {
	    printf( "getGC error" );
	    return JNI_FALSE;
    }

	/* fetch the states of doubleBuffer and stereo */
    (void) PixelFormatDescriptorFromDc( thisWin, &pfd);

    if(JNI_TRUE==verbose) 
    { 
	fprintf(stdout,"\nGL4Java: writing capabilities to GLContext's java object\n");
        fflush(stdout);
    }

    if(jglCaps!=0)
       (void) nativeGLCapabilities2JavaGLCapabilities (env, jglCaps, &glCaps);

    if(ret==JNI_TRUE && fglCaps && jglCaps) {
                    (*env)->SetObjectField(env, obj, fglCaps, jglCaps);
    }
  
    if(ret==JNI_TRUE && fwindowHandle!=0) {
	    (*env)->SetLongField(env, obj, fwindowHandle, 
	                        (jlong)((PointerHolder)thisWin));
    	 if(JNI_TRUE==verbose)
    		fprintf(stderr, "go and set windowHandle thisWin : %d; 0x%X\n",
         	(int)thisWin, (int)thisWin);
    }

    if(ret==JNI_TRUE && fpixmapHandle!=0) {
	    (*env)->SetLongField(env, obj, fpixmapHandle, (jlong)((PointerHolder)pix));
    	 if(JNI_TRUE==verbose)
    		fprintf(stderr, "go and set pixmapHandle pix: %d; 0x%X\n",
         	(int)pix, (int)pix);
    }

    if(ret==JNI_TRUE && fglContext !=0 ) {
	    (*env)->SetLongField(env, obj, fglContext, (jlong)((PointerHolder)gc));
    	 if(JNI_TRUE==verbose)
    		fprintf(stderr, "go and set gc  : %d, 0x%X\n",
         	(int)gc, (int)gc);
    }

	/*
	gl4java_bind_ext(JNI_TRUE==verbose);
	*/

    return ret;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljMakeCurrentNative( JNIEnv *env, jobject obj,
					     jobject canvas,
					     jlong disp,
					     jlong thisWin,
					     jlong glContext)
{
	jboolean ret = JNI_TRUE;

        (void)canvas;

	if( !thisWin )
	{
	    return JNI_FALSE;
	}

	if( !glContext )
	{
	    return JNI_FALSE;
	}

        if ( ret==JNI_TRUE && !disp__wglMakeCurrent((HDC)((PointerHolder)thisWin), 
	                                      (HGLRC)((PointerHolder)glContext)) )
        {
    		return JNI_FALSE;
        } 
        return JNI_TRUE;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljFreeNative( JNIEnv *env, jobject obj,
				      jobject canvas,
				      jlong disp,
				      jlong thisWin,
				      jlong glContext
				    )
{
    (void)thisWin;
    (void)glContext;
    (void)disp;
    (void)canvas;

    if ( ! disp__wglMakeCurrent( NULL, NULL ) )
    {
			fprintf(stderr, "gljFree failed\n");
			fflush(stderr);
			return JNI_FALSE;
    }
    return JNI_TRUE;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljDestroyNative( JNIEnv *env, jobject obj,
					 jobject canvas)
{
	jboolean ret = JNI_TRUE;

	jclass cls = 0;
	jfieldID fwindowHandle=0, fpixmapHandle=0;
	jfieldID fglContext=0;
    jfieldID foffScreenRenderer=0;
    jfieldID fownwind=0;

    jboolean jownwind = JNI_FALSE ;
    jboolean joffScreenRenderer=JNI_FALSE;
    HBITMAP pix=0;
	HDC thisWin=0;
	HGLRC gc=0;


	(void)canvas;

	cls = (*env)->GetObjectClass(env, obj);
	if(cls==0)
	{
	    ret=JNI_FALSE;
	}

	if(ret==JNI_TRUE) {
	    fwindowHandle = (*env)->GetFieldID(env, cls, "windowHandle", "J");
	    if (fwindowHandle == 0) ret= JNI_FALSE;
	    else thisWin =(HDC) 
	      ((PointerHolder)(*env)->GetLongField(env, obj, fwindowHandle));
	}

	if(ret==JNI_TRUE) {
	    fglContext=(*env)->GetFieldID(env, cls, "glContext", "J");
	    if (fglContext == 0) ret= JNI_FALSE;
	    else gc =(HGLRC)
	      ((PointerHolder)(*env)->GetLongField(env, obj, fglContext));
	}


    if(ret==JNI_TRUE) {
	    fpixmapHandle = (*env)->GetFieldID(env, cls, "pixmapHandle", "J");
	    if (fpixmapHandle == 0) ret= JNI_FALSE;
	    else pix =(HBITMAP)
	      ((PointerHolder)(*env)->GetLongField(env, obj, fpixmapHandle));
    }

    if(ret==JNI_TRUE) {
	    foffScreenRenderer = 
	    		(*env)->GetFieldID(env, cls, "offScreenRenderer", "Z");
	    if (foffScreenRenderer == 0) ret= JNI_FALSE;
	    else joffScreenRenderer =(*env)->GetBooleanField(env, obj, foffScreenRenderer);
    }

    if(ret==JNI_TRUE) {
	    fownwind = (*env)->GetFieldID(env, cls, "createOwnWindow", "Z");
	    if (fownwind == 0) ret= JNI_FALSE;
	    else jownwind =(*env)->GetBooleanField(env, obj, fownwind);
    }

    if(ret==JNI_TRUE)
    {
	    if ( gc == 0 )
	    {
	        if(JNI_TRUE==verbose)
			{
				fprintf(stderr, "gljDestroy error, GL context is 0\n");
				fflush(stderr);
			}
		}

		if ( ! disp__wglMakeCurrent( NULL, NULL ) )
		{
			fprintf(stderr, "gljDestroy failed (free)\n");
			fflush(stderr);
		} 

		if(ret==JNI_TRUE) 
		{
			if(gc!=0)
				disp__wglDeleteContext(gc);

			if(pix!=0)
			{
			    if(thisWin!=0)
				    DeleteDC(thisWin);
			    thisWin=0;
			    DeleteObject(pix);
			    pix=0;
			}
			if(jownwind && thisWin!=0)
			{
			    DeleteDC(thisWin);
			    thisWin=0;
			    jownwind=JNI_FALSE;
			}
		}
	}

	gc = 0;
	thisWin = 0;

	ret=JNI_TRUE;

    if(ret==JNI_TRUE && fwindowHandle!=0) {
	    (*env)->SetLongField(env, obj, fwindowHandle, (jlong)((PointerHolder)thisWin));
    }

    if(ret==JNI_TRUE && fglContext) {
	    (*env)->SetLongField(env, obj, fglContext, (jlong)((PointerHolder)gc));
    }


    if(ret==JNI_TRUE && fpixmapHandle!=0) {
	    (*env)->SetLongField(env, obj, fpixmapHandle, (jlong)((PointerHolder)pix));
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
	jboolean ret = JNI_TRUE;

        (void)glContext;
        (void)disp;

	if( !thisWin )
	{
            fprintf(stderr,"Swap does not got the window ...\n");
	    return JNI_FALSE;
	}

	if( doubleBuffer==JNI_TRUE )
	{
		if( SwapBuffers( (HDC)((PointerHolder)thisWin) ) == FALSE )
		{
			/* Error in Win2000 implementation :o)
			 * printf( "Error in swap buffer!\n" );
			 */
	                return JNI_FALSE;
		}
	} else {
		disp__glFlush();
	}
	return ret;
}

JNIEXPORT void JNICALL
Java_gl4java_GLContext_gljResizeNative( JNIEnv *env, jobject obj,
	                                jboolean isOwnWindow,
				        jlong disp, jlong thisWin,
				        jint width, jint height)
{
	(void)isOwnWindow;
	(void)disp;
	(void)thisWin;
	(void)width;
	(void)height;

	return;
}

