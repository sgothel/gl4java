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

    return (pData->lock & JAWT_LOCK_SURFACE_CHANGED) != 0 ;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_openOpenGLNative( JNIEnv *env, jobject obj,
					jobject canvas)
{
    jboolean ret = JNI_TRUE;

    jclass cls = 0;
    jfieldID fpixmapHandle=0;
    jfieldID foffScreenRenderer;
    jfieldID faccumSize=0;
    jfieldID fwindowHandle=0, fpData=0, fdoubleBuffer, fstereoView, fstencilBits;
    jfieldID fverbose=0;
    jfieldID fglContext=0;
    jfieldID fshareWith=0;
    jfieldID fcreatewinw = 0, fcreatewinh = 0;

    /* these variables will be mapped in the java-object ! */
    jboolean joffScreenRenderer=JNI_FALSE;
	jboolean jdoubleBuffer=JNI_TRUE;
	jboolean jstereoView=JNI_FALSE;
	jint jstencilBits=0;
    jint jaccumSize=0;
    HDC theWindow;
    HGLRC gc;
    JAWTDataHolder * pData=0;
	HGLRC shareWith=NULL;
    jint jcreatewinw = 0, jcreatewinh = 0;
    HBITMAP pix;

    PIXELFORMATDESCRIPTOR pfd;

    cls = (*env)->GetObjectClass(env, obj);
    if(cls==0)
    {
        fprintf(stderr,"oo0.0 cls==0\n");
		  fflush(stderr);
		  ret=JNI_FALSE;
    }

    if(ret==JNI_TRUE)
    {
	    fverbose =(*env)->GetStaticFieldID(env, cls, "gljNativeDebug", "Z");
	    if (fverbose == 0)
	    {
                fprintf(stderr,"oo0.2 fverbose==0\n");
                fflush(stderr);
					 ret=JNI_FALSE;
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
	    fdoubleBuffer = (*env)->GetFieldID(env, cls, "doubleBuffer", "Z");
	    if (fdoubleBuffer == 0) ret= JNI_FALSE;
	    else jdoubleBuffer =(*env)->GetBooleanField(env, obj, fdoubleBuffer);
    }

    if(ret==JNI_TRUE) {
	    fstereoView = (*env)->GetFieldID(env, cls, "stereoView", "Z");
	    if (fstereoView == 0) ret= JNI_FALSE;
	    else jstereoView =(*env)->GetBooleanField(env, obj, fstereoView);
    }

    if(ret==JNI_TRUE) {
	    fstencilBits = (*env)->GetFieldID(env, cls, "stencilBits", "I");
	    if (fstencilBits == 0) ret= JNI_FALSE;
	    else jstencilBits =(*env)->GetIntField(env, obj, fstencilBits);
    }

    if(ret==JNI_TRUE) {
	    faccumSize = (*env)->GetFieldID(env, cls, "accumSize", "I");
	    if (faccumSize == 0) ret= JNI_FALSE;
	    else jaccumSize =(*env)->GetIntField(env, obj, faccumSize);
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
	    jdoubleBuffer = JNI_FALSE;
    }

    if(JNI_TRUE==verbose && joffScreenRenderer==JNI_TRUE)
    {
		fprintf(stderr,"\nGL4Java:  (USING OFFSCREEN GLPIXMAP BUFFER,\n\t forced: !doubleBuffer)\n");
		fflush(stderr);
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

    wglMakeCurrent(NULL, NULL);

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
    if( (gc = get_GC( &theWindow, jdoubleBuffer, jstereoView, jstencilBits, 
                       shareWith, joffScreenRenderer, jcreatewinw, 
		       jcreatewinh, &pix, verbose)) == 0 )
    {
	    printf( "getGC error" );
	    return JNI_FALSE;
    }

	/* fetch the states of doubleBuffer and stereo */
    (void) PixelFormatDescriptorFromDc( theWindow, &pfd);

	jdoubleBuffer = (pfd.dwFlags & PFD_DOUBLEBUFFER)?JNI_TRUE:JNI_FALSE;
    if(ret==JNI_TRUE && fdoubleBuffer!=0) {
	    (*env)->SetBooleanField(env, obj, fdoubleBuffer, 
	                            jdoubleBuffer);
    }

	jstencilBits = (jint)(pfd.cStencilBits);
	if(ret==JNI_TRUE && fstencilBits!=0) {
	    (*env)->SetIntField(env, obj, 
				fstencilBits, (jint)jstencilBits);
	}

	jaccumSize=(jint)(pfd.cAccumRedBits+pfd.cAccumGreenBits+pfd.cAccumBlueBits+pfd.cAccumAlphaBits);
	if(ret==JNI_TRUE && faccumSize!=0) {
	    (*env)->SetIntField(env, obj, 
				faccumSize, (jint)jaccumSize);
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
    
        if ( ret==JNI_TRUE && !wglMakeCurrent(GET_USED_WINDOW(thisWin),
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
    (void)glContext;
    (void)disp;
    (void)canvas;

    if ( ! wglMakeCurrent( NULL, NULL ) )
    {
			fprintf(stderr, "gljFree failed\n");
			fflush(stderr);
			return JNI_FALSE;
    }

    jawt_close_unlock(env, pData, verbose);

    return JNI_TRUE;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljDestroyNative( JNIEnv *env, jobject obj,
					 jobject canvas)
{
	jboolean ret = JNI_TRUE;

	jclass cls = 0;
	jfieldID fpData=0;
	jfieldID fwindowHandle=0, fpixmapHandle;
	jfieldID fglContext=0;
    jfieldID foffScreenRenderer;
    jfieldID fownwind=0;

    jboolean jownwind = JNI_FALSE ;
    jboolean joffScreenRenderer=JNI_FALSE;
    HBITMAP pix;
	HDC thisWin;
	HGLRC gc;
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
            jawt_close_unlock(env, pData, JNI_FALSE);
            return JNI_FALSE;
        }
    
        thisWin = GET_USED_WINDOW(pData);

    if(ret==JNI_TRUE)
    {
	    if ( gc == 0 )
	    {
	        if(JNI_TRUE==verbose)
			{
				fprintf(stderr, "gljDestroy failed, GL context is 0\n");
				fflush(stderr);
			}
			ret = JNI_FALSE;
		}

		if ( ret==JNI_TRUE &&  ! wglMakeCurrent( NULL, NULL ) )
		{
			fprintf(stderr, "gljDestroy failed (free)\n");
			fflush(stderr);
			ret=JNI_FALSE;
		} else if( ret == JNI_TRUE) {
			wglDeleteContext(gc);
		}

		if(joffScreenRenderer==JNI_TRUE)
		{
			if(pix!=0 && joffScreenRenderer==JNI_TRUE)
			{
				DeleteObject(pix);
				pix=0;
			}
			if(thisWin!=0 && 
			   (joffScreenRenderer || jownwind) )
			{
				DeleteDC(thisWin);
				thisWin=0;
			}
		}
	}

    if(ret==JNI_TRUE)
    {
	    gc = 0;
	    thisWin = 0;
    }

    jawt_free_close_unlock(env, &pData, verbose); 

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
		glFlush();
	}
	return ret;
}

JNIEXPORT void JNICALL
Java_gl4java_GLContext_gljResizeNative( JNIEnv *env, jobject obj,
	                                jboolean isOwnWindow,
				        jlong disp, jlong thisWin,
				        jlong width, jlong height)
{
}

