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
   	
   "pData" 		:= (JAWTDataHolder *)
   	"windowHandle" 	:= "pData"

        This holds the current state of the JAWT context !

   	This is used as the "not initialized" flag also !
	It is reset to zero while Destroy Method

   "pData"->dsi_win     := (HDC)
   	if("offScreenRenderer" == TRUE)
		"pData"->dsi_win contains the window handle,
		of the last lock !
		"pData"->dsi_win_created=0 !

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

#include "jawt_misc.h"

/*
 * Macros ..
 */

#define GET_W32_JAWT_DSI(a) \
	( (JAWT_Win32DrawingSurfaceInfo *) \
	  ( ( (JAWTDataHolder *)((PointerHolder)(a)) ) ->dsi_os ) \
        )

#define GET_USED_WINDOW(a) \
	( (HDC) \
	  ( ( (JAWTDataHolder *)((PointerHolder)(a)) ) ->dsi_win ) \
        )

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
	
	if(pData!=0)
		return (pData->lock & JAWT_LOCK_SURFACE_CHANGED) != 0 ;

	return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_lockJAWT( JNIEnv *env, jobject obj,
				     jobject canvas,
				     jlong thisWin, jboolean verbose
				    )
{
    jboolean ret = JNI_TRUE;
    JAWTDataHolder * pData = (JAWTDataHolder *) ( (PointerHolder) thisWin );

    if(pData==0)
    {
	fprintf(stderr, "GL4Java ERROR: LockAWT NO JAWT Holder exist ! (pData=%p, thisWin=%lX) ...\n", pData, (long)thisWin);
	fflush(stderr);
	return JNI_FALSE;
    }

    if(jawt_open(env, canvas, pData, verbose)==JNI_FALSE ||
       pData->result==JNI_FALSE
      )
    {
	  fprintf(stderr,"\nGL4Java ERROR: LockAWT could not open JAWT reference!\n");
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
	     fprintf(stderr,"\nGL4Java ERROR: LockAWT could not lock JAWT reference!\n");
	     fflush(stderr);
	  }
	  ret=JNI_FALSE;
	  jawt_close_unlock(env, pData, JNI_FALSE);
	  return ret;
    }
    return ret;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_unlockJAWT( JNIEnv *env, jobject obj,
				   jlong thisWin, jboolean verbose
				    )
{
    jboolean ret = JNI_TRUE;
    JAWTDataHolder * pData = (JAWTDataHolder *) ( (PointerHolder) thisWin );

    jawt_close_unlock(env, pData, verbose);

    return ret;
}


JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_openOpenGLNative( JNIEnv *env, jobject obj,
					jobject canvas)
{
    jboolean ret = JNI_TRUE;

    jclass cls = 0;
    jfieldID fpixmapHandle=0;
    jfieldID foffScreenRenderer=0;
    jfieldID fwindowHandle=0, fpData=0;
    jfieldID fverbose=0;
    jfieldID fglContext=0;
    jfieldID fshareWith=0;
    jfieldID fcreatewinw = 0, fcreatewinh = 0;
    jfieldID fglCaps=0;

    /* these variables will be mapped in the java-object ! */
    jboolean joffScreenRenderer=JNI_FALSE;
    HDC theWindow=0;
    PIXELFORMATDESCRIPTOR pfd;
    HGLRC gc=0;
    JAWTDataHolder * pData=0;
	HGLRC shareWith=NULL;
    jint jcreatewinw = 0, jcreatewinh = 0;
    HBITMAP pix=0;

    GLCapabilities glCaps;
    jobject  jglCaps=0;
    jthrowable exc;
    jclass _GLCapabilities= 0;
    jclass _AwtComponent=0;

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
	    if (fpData == 0) ret= JNI_FALSE;
	    else pData = (JAWTDataHolder *)
	      ( (PointerHolder)(*env)->GetLongField(env, obj, fpData));
    }
    if(JNI_TRUE==verbose)
    {
    	fprintf(stderr, "received pData : %d\n", (int)pData);
    }

    if(ret==JNI_TRUE) {
	    fwindowHandle = (*env)->GetFieldID(env, cls, "windowHandle", "J");
	    if (fwindowHandle == 0) ret= JNI_FALSE;
    }

    if(ret==JNI_TRUE) {
	    fglContext=(*env)->GetFieldID(env, cls, "glContext", "J");
	    if (fglContext == 0) ret= JNI_FALSE;
    }

    if(ret==JNI_TRUE) {
	    foffScreenRenderer = 
	    		(*env)->GetFieldID(env, cls, "offScreenRenderer", "Z");
	    if (foffScreenRenderer == 0) ret= JNI_FALSE;
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
	    if(joffScreenRenderer==JNI_FALSE)
	    {
	    	theWindow = GET_W32_JAWT_DSI(pData)->hdc;
	        jcreatewinw =  pData->dsi->bounds.width;
	        jcreatewinh =  pData->dsi->bounds.height;
	    }
    }

    disp__wglMakeCurrent(NULL, NULL);

    /**
     * with version jdk1.1.6 and later, we are able to use 
     * the java-function straight to achieve the native window
     * handle ....
     *
     * this handle is saved to pData for the windows version !
     */
    if( theWindow == 0 && !joffScreenRenderer)
    {
	    printf( "get_GC: Error, pData->hdc is zero\n");
	    jawt_free_close_unlock(env, &pData, JNI_FALSE);
	    return JNI_FALSE;
    }

    /* get the graphics context for this widget */
    if( (gc = get_GC( &theWindow, &glCaps,
                       shareWith, joffScreenRenderer, jcreatewinw, 
		       jcreatewinh, &pix, verbose)) == 0 )
    {
	    printf( "getGC error" );
	    return JNI_FALSE;
    }

	/* fetch the states of doubleBuffer and stereo */
    (void) PixelFormatDescriptorFromDc( theWindow, &pfd);

    if(JNI_TRUE==verbose) 
    { 
	fprintf(stdout,"\nGL4Java: writing capabilities to GLContext's java object\n");
        fflush(stdout);
    }

    (void) nativeGLCapabilities2JavaGLCapabilities (env, jglCaps, &glCaps);

    if(ret==JNI_TRUE && fglCaps) {
                    (*env)->SetObjectField(env, obj, fglCaps, jglCaps);
    }
  
    jawt_close_unlock(env, pData, verbose);    

    if(ret==JNI_TRUE && fwindowHandle!=0) {
	    (*env)->SetLongField(env, obj, fwindowHandle, 
	                        (jlong)((PointerHolder)pData));
    }
    if(ret==JNI_TRUE && fpData!=0) {
	    (*env)->SetLongField(env, obj, fpData, 
	                        (jlong)((PointerHolder)pData));
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
	JAWTDataHolder * pData = (JAWTDataHolder *) ( (PointerHolder) thisWin ); 

	if( !thisWin )
	{
	    return JNI_FALSE;
	}

	if( !glContext )
	{
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
    
        if ( ret==JNI_TRUE && !disp__wglMakeCurrent(GET_USED_WINDOW(thisWin),
	                                      (HGLRC)((PointerHolder)glContext)) )
        {
		jawt_close_unlock(env, pData, JNI_FALSE);
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
    JAWTDataHolder * pData = (JAWTDataHolder *) ( (PointerHolder) thisWin );
	jboolean ret = JNI_TRUE;

    (void)glContext;
    (void)disp;
    (void)canvas;

    if ( ! disp__wglMakeCurrent( NULL, NULL ) )
    {
			fprintf(stderr, "gljFree failed\n");
			fflush(stderr);
			ret = JNI_FALSE;
    }

	if(pData!=NULL)
    	        jawt_close_unlock(env, pData, JNI_FALSE);

    return ret;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljDestroyNative( JNIEnv *env, jobject obj,
					 jobject canvas)
{
	jboolean ret = JNI_TRUE;

	jclass cls = 0;
	jfieldID fpData=0;
	jfieldID fwindowHandle=0, fpixmapHandle=0;
	jfieldID fglContext=0;
    jfieldID foffScreenRenderer=0;
    jfieldID fownwind=0;

    jboolean jownwind = JNI_FALSE ;
    jboolean joffScreenRenderer=JNI_FALSE;
    HBITMAP pix=0;
	HDC thisWin=0;
	HGLRC gc=0;
	JAWTDataHolder * pData = NULL;

	(void)canvas;

	cls = (*env)->GetObjectClass(env, obj);
	if(cls==0)
	{
	    ret=JNI_FALSE;
	}

	if(ret==JNI_TRUE) {
	    fwindowHandle = (*env)->GetFieldID(env, cls, "windowHandle", "J");
	    if (fwindowHandle == 0) ret= JNI_FALSE;
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
    
        if(ret==JNI_TRUE) {
            fpData = (*env)->GetFieldID(env, cls, "pData", "J");
            if (fpData == 0) ret= JNI_FALSE;
            else pData =(JAWTDataHolder *)
                  ( (PointerHolder) (*env)->GetLongField(env, obj, fpData) );
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
    
        thisWin = GET_USED_WINDOW(pData);

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
			    pData->dsi_win = NULL;
			    pData->dsi_win_created = 0;
			    DeleteObject(pix);
			    pix=0;
			}
			if(jownwind && thisWin!=0)
			{
			    DeleteDC(thisWin);
			    thisWin=0;
			    pData->dsi_win = NULL;
			    pData->dsi_win_created = 0;
			    jownwind=JNI_FALSE;
			}
		}
	}

	gc = 0;
	thisWin = 0;

    jawt_free_close_unlock(env, &pData, JNI_FALSE); 

	pData=0;
	ret=JNI_TRUE; // force ..

    if(ret==JNI_TRUE && fpData!=0) {
	    (*env)->SetLongField(env, obj, fpData, (jlong)((PointerHolder)pData));
    }

    if(ret==JNI_TRUE && fwindowHandle!=0) {
	    (*env)->SetLongField(env, obj, fwindowHandle, (jlong)((PointerHolder)pData));
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

	if( !thisWin || GET_USED_WINDOW(thisWin)==0)
	{
            fprintf(stderr,"Swap does not got the window ...\n");
	    return JNI_FALSE;
	}

	if( doubleBuffer==JNI_TRUE )
	{
		if( SwapBuffers( GET_USED_WINDOW(thisWin) ) == FALSE )
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

