#include "agl.h"
#include "aglRenderers.h"

#include <stdlib.h>
#include <stdio.h>

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
 * Sven Goethel
 *
 * September 1997
 *
 * some X stuff is also modified/debugged to run on aix ...
 * ---------------
 *
 * gerard ziemski
 *
 * April 1999
 *
 * OpenGL port for Mac
 *
 *
 * July 1999
 *
 * removed unused code
 *
 *
 * August 1999
 *
 * added Java_gl4java_GLContext_createChildWindow
 *
 *
 * September 1999
 *
 * removed Java_gl4java_GLContext_createChildWindow
 * updated to 2.1.0.0
 *
 *
 * November 1999
 *
 * (2.1.2.0)
 * simplified (?) get_GC
 * rewrote gljFreeNative, gljSwapNative, gljDestroyNative
 * wrote gljResizeNative
 * replaced printMessage and printError with println
 *
 * (2.1.2.1)
 * using the main graphics device when choosing renderer
 * added more queries to renderer which will be printed out if in verbal mode
 * if possible choosing hardware accelerated renderer
 *
 *
 * (2.1.2.2)
 * January 2000
 *
 * rewrote get_GC to choose the best renderer available
 * 	will now work on iMac
 * 	given enough memory to an application (3500KB) a hardware accelerated renderer will be chosen
 *
 * why does a call to "ReleaseStringUTFChars" in "println" crashes ?!
 *
 *
 * (2.3.0.0)
 * March 2000
 *
 * fixed a bug in get_GC
 *	aglQueryRendererInfo returns the head info, i use aglNextRendererInfo to properly traverse
 *	the rest of renderers info
 *
 * all this betas, when are we going to get a final version of ATI and VooDoo OpenGL drivers ?
 * and lets not forget about the MRJ itself
 *
 *
 * (2.3.1.0)
 * March 2000
 *
 * fixed (a workaround) the "obscured window" bug, see "gljMakeCurrentNative"
 * implemented Java console for fprintf's, see mac_console.c
 *
 *
 * (2.4.1.0)
 * Sept 2000, Sven Goethel (jausoft)
 *
 * Added 2.4.1.0 GL/AGL Features
 */


// use
//
// tvb GetSharedLibrary ';dm r3'
//
// in MacsBug to see what libraries are loaded


//
// Includes
//

#include <jni.h>

#include <agl.h>
#include <gl.h>
#include <glu.h>

#include <QuickDraw.h>
#include <MacWindows.h>

#include <stdio.h>
#include <stdlib.h>


//
// Private Includes
//

#include "gl4java_GLContext.h"
#include "mac_console.h"

// from here on, it's just a regular apple pie C

// implemented in OpenGL_misc.c
extern jboolean testJavaGLTypes(jboolean verbose);


// for debugging
//#define _DEBUG_OPENGL_MAC_
//#define _DEBUG_DETAIL_OPENGL_MAC_


//
// Definitions
//

#define PIXEL_FROMAT_LIST_SIZE	40

typedef struct
{
	GLboolean	valid;
	
	GLint		id;
	
	GLboolean	accelerated;
	
	GLint		depthModes;
	
	GLint		colorModes;
	
	GLint		stencilModes;
	GLint		stencilSize;
	GLint		accumModes;
	GLint		accumSize;
	
	GLboolean	singleBuffer;
	GLboolean	doubleBuffer;
	GLboolean	mono;
	GLboolean	stereo;
}
RendererRect, *RendererRectPtr, **RendererRectHnd;

typedef struct
{
	UInt32			count;
	
	RendererRectPtr	info;
	
	GLint			attributeList[PIXEL_FROMAT_LIST_SIZE];
}
RenderersInfoRect, *RenderersInfoRectPtr, **RenderersInfoRectHnd;

/*
 * STATIC FLAGS FOR gl4java behavior ...
 */
static jboolean verbose = JNI_FALSE;


//
// Private Function Prottypes
//

static jboolean		testMacJava(JNIEnv *env);

static AGLContext	get_GC(JNIEnv *env, AGLDrawable glDrawable, 
			       jboolean verbose, jboolean *doubleBuffer, 
			       jboolean *stereo, jboolean *isRGBA,
			       int *stencilBits, int *accumSize, AGLContext sharedGLC,
			       jboolean isOffScr, GWorldPtr *g_world, int width, int height);

static GLint		setDefaultPixelFormat(JNIEnv *env, 
                               GLint (*pixelFormatList)[PIXEL_FROMAT_LIST_SIZE],
			       jboolean verbose, jboolean doubleBuffer, 
			       jboolean stereo, jboolean isRGBA,
			       int stencilBits, int accumSize,
			       jboolean isOffScr, int pixelsize);
						
static void	        printPixelFormat(JNIEnv *env, 
                               GLint pixelFormatList[PIXEL_FROMAT_LIST_SIZE]);
static GLboolean	isColorARGB(JNIEnv *env, GLint colorModes);
static GLboolean	isColorRGB(JNIEnv *env, GLint colorModes);
static GLint		chooseBestColor(JNIEnv *env, GLint colorModes);
static GLint		chooseBestDepth(JNIEnv *env, GLint depthModes);
static GLint		mapAGLDepth2DecDepth(JNIEnv *env, GLint depthModes);
static void		getRenderersInfo(JNIEnv *env, RenderersInfoRectPtr info);
static void 		printRendererInfo(JNIEnv *env, AGLRendererInfo info);
static void		printRawRendererInfo(JNIEnv *env, RendererRect info);
static void		chooseBestRenderer(JNIEnv *env, 
                                           RenderersInfoRectPtr info, 
			       jboolean verbose, jboolean *doubleBuffer, 
			       jboolean *stereo, jboolean *isRGBA,
			       int *stencilBits, int *accumSize,
			       jboolean isOffScr, jboolean forceSWRenderer);

static void		printAllRenderer(JNIEnv *env);

static void printPixelFormatInfo(JNIEnv *env, AGLPixelFormat info);

static void checkPixelFormatInfo(JNIEnv *env, AGLPixelFormat info,
			       jboolean *doubleBuffer, 
			       jboolean *stereo, jboolean *isRGBA,
			       int *stencilBits, int *accumSize);

//
// Java_gl4java_GLContext_openOpenGLNative
//
JNIEXPORT jboolean JNICALL 
Java_gl4java_GLContext_openOpenGLNative(JNIEnv *env, jobject obj)
{
    jclass		javaClass		= 0;

    jfieldID	        fwindowHandle	        = 0,
    			fpData			= 0;

    jint		pData			= 0;
    UInt32		*data			= nil;

    AGLDrawable	        glDrawable		= nil;
    AGLContext	        glContext		= nil;

    jfieldID fverbose=0, fglContext=0;
    jfieldID fstereoView=0, frgba=0, fstencilBits=0, faccumSize=0, fownwind=0;
    jfieldID fdoubleBuffer=0, foffScreenRenderer, fpixmapHandle=0;
    jfieldID fcreatewinw = 0, fcreatewinh = 0;
    jfieldID fshareWith = 0;

    jboolean joffScreenRenderer=JNI_FALSE;
    jboolean jdoubleBuffer=JNI_TRUE;
    jboolean jstereoView=JNI_FALSE;
    jboolean jrgba=JNI_TRUE;
    jint jstencilBits=0;
    jint jaccumSize=0;
    jboolean jownwind = JNI_FALSE, ret=JNI_TRUE;
    jint jcreatewinw = 0, jcreatewinh = 0;
    jint jshareWith = 0;

    // offscreen stuff ...
    GWorldPtr g_world;

	InstallJavaConsole(env);
		
#ifdef _DEBUG_OPENGL_MAC_	
		fprintf(stderr, "in openOpenGLNative \n");
#endif
	
    javaClass = (*env)->GetObjectClass(env, obj);
    if (javaClass == 0)
	{
		fprintf(stderr, "Error! openOpenGL:javaClass == 0 \n");
		
		return JNI_FALSE;
    }

    fverbose = (*env)->GetStaticFieldID(env, javaClass, "gljNativeDebug", "Z");
    if (fverbose == 0)
    {
		fprintf(stderr, "Error! openOpenGL:fverbose == 0 \n");
		
		return JNI_FALSE;
    }
    else
    {
		verbose = (*env)->GetStaticBooleanField(env, javaClass, fverbose);
    }

#ifdef _DEBUG_OPENGL_MAC_	
		verbose = JNI_TRUE;
#endif

    if (verbose == JNI_TRUE)
    {
		fprintf(stderr, "sizes: jint=%d AGLDrawable=%d AGLContext= %d \n", sizeof(jint), sizeof(AGLDrawable), sizeof(AGLContext));
    }
	
    if ((testMacJava(env) && testJavaGLTypes(verbose)) != JNI_TRUE)
    {
		fprintf(stderr, "Error! openOpenGL: JNI & OpenGL-Native data does not fit !\n");
		return JNI_FALSE;
    }
    
    fglContext=(*env)->GetFieldID(env, javaClass, "glContext", "I");
    if (fglContext == 0)
    {
		fprintf(stderr, "Error! openOpenGL:fglContext == 0 \n");
		return JNI_FALSE;
    } else {
    	if (verbose == JNI_TRUE)
    		fprintf(stderr, "openOpenGL: fglContext ok \n");
    }

    if(ret==JNI_TRUE) {                                                               
    		foffScreenRenderer = (*env)->GetFieldID(env, javaClass, "offScreenRenderer", "Z");
      if (foffScreenRenderer == 0) ret= JNI_FALSE;
            else joffScreenRenderer =(*env)->GetBooleanField(env, obj, foffScreenRenderer);
    }                                                                     
    
    if(ret==JNI_TRUE) {
            fdoubleBuffer = (*env)->GetFieldID(env, javaClass, "doubleBuffer", "Z");
            if (fdoubleBuffer == 0) ret= JNI_FALSE;
            else jdoubleBuffer =(*env)->GetBooleanField(env, obj, fdoubleBuffer);
    }

    if(ret==JNI_TRUE) {                                                               
    	    fstereoView = (*env)->GetFieldID(env, javaClass, "stereoView", "Z");
            if (fstereoView == 0) ret= JNI_FALSE;
            else jstereoView =(*env)->GetBooleanField(env, obj, fstereoView);
    }

    if(ret==JNI_TRUE) {
            frgba = (*env)->GetFieldID(env, javaClass, "rgba", "Z");
            if (frgba == 0) ret= JNI_FALSE;
            else jrgba =(*env)->GetBooleanField(env, obj, frgba);
    }

    if(ret==JNI_TRUE) {
            fstencilBits = (*env)->GetFieldID(env, javaClass, "stencilBits", "I");
            if (fstencilBits == 0) ret= JNI_FALSE;
            else jstencilBits =(*env)->GetIntField(env, obj, fstencilBits);
    }

    if(ret==JNI_TRUE) {
            faccumSize = (*env)->GetFieldID(env, javaClass, "accumSize", "I");
            if (faccumSize == 0) ret= JNI_FALSE;
            else jaccumSize =(*env)->GetIntField(env, obj, faccumSize);
    }

    if(ret==JNI_TRUE) {
            fcreatewinw = (*env)->GetFieldID(env, javaClass, "createwinw", "I");
            if (fcreatewinw == 0) ret= JNI_FALSE;
            else jcreatewinw =(*env)->GetIntField(env, obj, fcreatewinw);
    }

    if(ret==JNI_TRUE) {
            fcreatewinh = (*env)->GetFieldID(env, javaClass, "createwinh", "I");
            if (fcreatewinh == 0) ret= JNI_FALSE;
            else jcreatewinh =(*env)->GetIntField(env, obj, fcreatewinh);
    }

    if(ret==JNI_TRUE) {
            fownwind = (*env)->GetFieldID(env, javaClass, "createOwnWindow", "Z");
            if (fownwind == 0) ret= JNI_FALSE;
            else jownwind =(*env)->GetBooleanField(env, obj, fownwind);
    }

    if(ret==JNI_TRUE) {
            fshareWith = (*env)->GetFieldID(env, javaClass, "sharedGLContextNative", "I");
            if (fshareWith == 0) ret= JNI_FALSE;
            else jshareWith =(*env)->GetIntField(env, obj, fshareWith);
    }

    if(ret==JNI_TRUE) {
            fwindowHandle = (*env)->GetFieldID(env, javaClass, "windowHandle", "I");
            if(fwindowHandle == 0) ret= JNI_FALSE;
    }
   

    if(ret==JNI_TRUE) {
	    fpData = (*env)->GetFieldID(env, javaClass, "pData", "I");
	    if (fpData == 0)
	    {
			fprintf(stderr, "Error! openOpenGL:fpData == 0 \n");
			return JNI_FALSE;
	    }
	    else
	    {
		    pData =(*env)->GetIntField(env, obj, fpData);
		    if (verbose == JNI_TRUE)
		    	fprintf(stderr, "openOpenGL: received pData  %d \n", (UInt32)pData);
	    }
    }

    if(ret==JNI_TRUE) {
            fpixmapHandle = (*env)->GetFieldID(env, javaClass, "pixmapHandle", "I");
            if (fpixmapHandle == 0) ret= JNI_FALSE;
    }

    if(joffScreenRenderer==JNI_TRUE)
    {
            jownwind = JNI_FALSE;
            pData=0;
    }

    if(pData==0 && joffScreenRenderer==JNI_FALSE)
    {
          fprintf(stderr,"\nGL4Java ERROR: given native window == NULL !\n");
          fflush(stderr);
          return JNI_FALSE;
    }

    if(joffScreenRenderer==JNI_FALSE)
    {
      data = (UInt32 *)pData;
      if (data == 0)
      {
	fprintf(stderr, "Error! openOpenGL:data == 0 \n");
	return JNI_FALSE;
      } else {
    	glDrawable = (AGLDrawable)pData;
    	if (glDrawable == nil)
    	{
		fprintf(stderr, "Error! openOpenGL:glDrawable == nil \n");
		return JNI_FALSE;
	} else if (verbose == JNI_TRUE) {
	    	fprintf(stderr, "openOpenGL: glDrawable ok \n");
        }
      }
    }
    	
    glContext = get_GC(env, glDrawable, 
                       verbose, &jdoubleBuffer, 
                       &jstereoView, &jrgba,
		       &jstencilBits, &jaccumSize, (AGLContext)jshareWith,
		       joffScreenRenderer, &g_world, jcreatewinw, jcreatewinh);

    if (glContext == nil)
    {
		fprintf(stderr, "Error! openOpenGL:glContext == nil \n");
		
		return JNI_FALSE;
	}
	
    (*env)->SetIntField(env, obj, fdoubleBuffer, jdoubleBuffer);
	if (verbose == JNI_TRUE)
	{
		fprintf(stderr, "openOpenGL: set jdoubleBuffer  %d \n", (UInt32)jdoubleBuffer);
	}
	
    (*env)->SetIntField(env, obj, fstereoView, jstereoView);
	if (verbose == JNI_TRUE)
	{
		fprintf(stderr, "openOpenGL: set jstereoView  %d \n", (UInt32)jstereoView);
	}
	
    (*env)->SetBooleanField(env, obj, frgba, jrgba);
	if (verbose == JNI_TRUE)
	{
		fprintf(stderr, "openOpenGL: set jrgba  %d \n", (UInt32)jrgba);
	}
	
    (*env)->SetIntField(env, obj, fstencilBits, jstencilBits);
	if (verbose == JNI_TRUE)
	{
		fprintf(stderr, "openOpenGL: set jstencilBits  %d \n", (UInt32)jstencilBits);
	}
	
    (*env)->SetIntField(env, obj, faccumSize, jaccumSize);
	if (verbose == JNI_TRUE)
	{
		fprintf(stderr, "openOpenGL: set jaccumSize  %d \n", (UInt32)jaccumSize);
	}
	
    (*env)->SetIntField(env, obj, fwindowHandle, (jint)glDrawable);
	
    (*env)->SetIntField(env, obj, fpixmapHandle, (jint)g_world);
	
    (*env)->SetIntField(env, obj, fglContext, (jint)glContext);
				
    return JNI_TRUE;
}

//
// Java_gl4java_GLContext_gljMakeCurrentNative
//
JNIEXPORT jboolean JNICALL 
Java_gl4java_GLContext_gljMakeCurrentNative(JNIEnv *env, jobject obj, 
					    jint disp,
					    jint thisWin,
					    jint glContext
					   )
{
#ifdef _DEBUG_DETAIL_OPENGL_MAC_	
	fprintf(stderr, "in gljMakeCurrentNative, disp=%d, thisWin=%d, glContext=%d\n", disp, thisWin, glContext);
#endif
	GrafPtr	port,
			savedPort;	


	InstallJavaConsole(env);
	
	// a workaround for the "obscured window" bug
	if (thisWin != nil)
	{
		port = (GrafPtr)thisWin;
		GetPort(&savedPort);
		SetPort(port);
		ClipRect(&((*(port->visRgn))->rgnBBox));
		SetPort(savedPort);
	}
	
	/*
	if (freeContextFirst == JNI_TRUE)
	{
		aglSetDrawable((AGLContext)glContext, nil);
		aglSetCurrentContext(nil);
	}*/
	
    if (aglSetDrawable((AGLContext)glContext, (AGLDrawable)thisWin) == GL_FALSE)
    {
		fprintf(stderr, "Warning! aglSetDrawable failed \n");
    }
    else
    {
	    if (aglSetCurrentContext((AGLContext)glContext) == GL_FALSE)
	    {
			fprintf(stderr, "Warning! gljMakeCurrentNative: could not set context \n");
	    }
	}
		
    return JNI_TRUE;
}

//
// Java_gl4java_GLContext_gljFreeNative
//
JNIEXPORT jboolean JNICALL 
Java_gl4java_GLContext_gljFreeNative(JNIEnv *env, jobject obj,
				     jint disp,
				     jint thisWin,
				     jint glContext)
{
	InstallJavaConsole(env);
	
#ifdef _DEBUG_DETAIL_OPENGL_MAC_	
	fprintf(stderr, "in gljFreeNative, disp=%d, thisWin=%d, glContext=%d \n", disp, thisWin, glContext);
#endif
	
    if (aglSetDrawable((AGLContext)glContext, nil) == GL_FALSE)
    {
		fprintf(stderr, "gljFreeNative: aglSetDrawable failed \n");
		
		return JNI_FALSE;
    }
    else
    {
	    if (aglSetCurrentContext(nil) == GL_FALSE)
	    {
			fprintf(stderr, "gljFreeNative: aglSetCurrentContext failed \n");
			
			return JNI_FALSE;
	    }
	}
		
    return JNI_TRUE;
}

//
// Java_gl4java_GLContext_gljDestroyNative
//
JNIEXPORT jboolean JNICALL 
Java_gl4java_GLContext_gljDestroyNative(JNIEnv *env, jobject obj)
{
	jclass		javaClass		= 0;
	jfieldID	fwindowHandle	= 0,
				fpData			= 0,
				fglContext		= 0,
				 foffScreenRenderer=0,
				fpixmapHandle=0;
	AGLContext	glContext		= nil;
	jboolean joffScreenRenderer=JNI_FALSE;
	
	// offscreen stuff ...
    	GWorldPtr g_world;
   	PixMapHandle pixMap;
	
	InstallJavaConsole(env);

#ifdef _DEBUG_OPENGL_MAC_	
	fprintf(stderr, "in gljDestroyNative \n");
#endif
	
	javaClass = (*env)->GetObjectClass(env, obj);
	if (javaClass == 0)
	{
		fprintf(stderr, "Error! gljDestroy:javaClass == 0 \n");
		
	    return JNI_FALSE;
	}
	
	fwindowHandle = (*env)->GetFieldID(env, javaClass, "windowHandle", "I");
	if (fwindowHandle == 0)
	{
		fprintf(stderr, "Error! openOpenGL:fwindowHandle == 0 \n");
		
		return JNI_FALSE;
	}
	
    fglContext = (*env)->GetFieldID(env, javaClass, "glContext", "I");
    if (fglContext == 0)
    {
		fprintf(stderr, "Error! gljDestroy:fglContext == 0 \n");
		
	    return JNI_FALSE;
	}
    else
    {
    	glContext = (AGLContext)(*env)->GetIntField(env, obj, fglContext);
    	if (glContext == nil)
    	{
			fprintf(stderr, "Error! gljDestroy:glContext == nil \n");
			
		    return JNI_FALSE;
    	}
    }
                                                           
    foffScreenRenderer = (*env)->GetFieldID(env, javaClass, "offScreenRenderer", "Z");
    if (foffScreenRenderer == 0) return JNI_FALSE;
    joffScreenRenderer =(*env)->GetBooleanField(env, obj, foffScreenRenderer);
                                                  
    fpixmapHandle = (*env)->GetFieldID(env, javaClass, "pixmapHandle", "I");
    if (fpixmapHandle == 0) return JNI_FALSE;
    g_world = (GWorldPtr)(*env)->GetIntField(env, obj, fpixmapHandle);
    	
	aglSetCurrentContext(nil);
	
	if(joffScreenRenderer==JNI_FALSE)
	{
	   if ((aglSetDrawable(glContext, nil) == GL_FALSE))
	   {
		fprintf(stderr, "Warning! gljDestroy:aglSetDrawable failed (free) \n");
		
		return JNI_FALSE;
	   }
	   else
	   {
		aglDestroyContext(glContext);
	   }
	} else {
		/* Destroy the window and GWorld */
		pixMap = GetGWorldPixMap(g_world);
		UnlockPixels(pixMap);
		DisposeGWorld(g_world);
	}
    (*env)->SetIntField(env, obj, fwindowHandle, (jint)nil);
    (*env)->SetIntField(env, obj, fglContext, (jint)nil);
    (*env)->SetIntField(env, obj, fpData, (jint)nil);
    (*env)->SetIntField(env, obj, fpixmapHandle, (jint)nil);
    
    UninstallJavaConsole();
    
    return JNI_TRUE;
}

//
// Java_gl4java_GLContext_gljSwap
//
JNIEXPORT jboolean JNICALL 
Java_gl4java_GLContext_gljSwapNative(JNIEnv *env, jobject obj,
				     jint disp,
				     jint thisWin,
				     jint glContext,
				     jboolean doubleBuffer)
{
	InstallJavaConsole(env);
	
#ifdef _DEBUG_DETAIL_OPENGL_MAC_	
	fprintf(stderr, "in gljSwap, disp=%d, thisWin=%d, glContext=%d, doubleBuffer= %d \n", disp, thisWin, glContext, doubleBuffer);
#endif
	
	if (glContext == nil)
	{
		fprintf(stderr, "Error! gljSwapNative:glContext == nil \n");
		
		return JNI_FALSE;
	}
	
	if (doubleBuffer == JNI_TRUE)
	{
		aglSwapBuffers((AGLContext)glContext);
	}
	
	return JNI_TRUE;
}

//
// Java_gl4java_GLContext_gljResize
//
//
JNIEXPORT void JNICALL 
Java_gl4java_GLContext_gljResizeNative(JNIEnv *env, jobject obj,
										jboolean isOwnWindow,
										jint disp, jint thisWin,
										jint width, jint height)
{
	jclass		javaClass		= 0;
	jfieldID	fpData			= 0,
				fglContext		= 0;
	AGLContext	glContext		= nil;


	InstallJavaConsole(env);
	
#ifdef _DEBUG_OPENGL_MAC_	
	fprintf(stderr, "in gljResize, width=%d, height= %d \n", width, height);
#endif
	
/*
	javaClass = (*env)->GetObjectClass(env, obj);
	if (javaClass == 0)
	{
		fprintf(stderr, "Error! gljResizeNative:javaClass == 0 \n");
		
	    return;
	}
	
    fglContext = (*env)->GetFieldID(env, javaClass, "glContext", "I");
    if (fglContext == 0)
    {
		fprintf(stderr, "Error! gljResizeNative:fglContext == 0 \n");
		
	    return;
	}
    else
    {
    	glContext = (AGLContext)(*env)->GetIntField(env, obj, fglContext);
    	if (glContext == nil)
    	{
			fprintf(stderr, "Error! gljResizeNative:glContext == nil \n");
			
		    return;
    	}
    }
	
	aglUpdateContext(glContext);
*/
}

#pragma mark -

//
// testMacJava
//
static jboolean testMacJava(JNIEnv *env)
{
    jboolean ret = JNI_TRUE;
    
	
	if (sizeof(jint) < sizeof(UInt32 *))
	{
		fprintf(stderr, "UInt32 does NOT fit in jint \n");
		
		ret = JNI_FALSE;
	}
	
	if (sizeof(jint) < sizeof(AGLDrawable))
	{
		fprintf(stderr, "AGLDrawable does NOT fit in jint \n");
		
		ret = JNI_FALSE;
	}
	
	if (sizeof(jint) < sizeof(AGLContext))
	{
		fprintf(stderr, "AGLContext does NOT fit in jint \n");
		
		ret = JNI_FALSE;
	}
	
	return ret;
}

//
// AGLContext
//
static AGLContext	get_GC(JNIEnv *env, AGLDrawable glDrawable, 
			       jboolean verbose, jboolean *doubleBuffer, 
			       jboolean *stereo, jboolean *isRGBA,
			       int *stencilBits, int *accumSize, AGLContext sharedGLC,
			       jboolean isOffScr, GWorldPtr *g_world, int width, int height)

{
	GDHandle			device		= GetMainDevice();
	AGLContext			context		= nil;
	AGLPixelFormat		pixelformat	= nil;
	RenderersInfoRect	info;
	GLenum				err;
	
    // offscreen stuff ...
    Rect rect;
    PixMapHandle pixMap;
    void *baseaddr;
    long pixelsize=0;
    int rowbytes;
    QDErr qdErr;

	
#ifdef _DEBUG_OPENGL_MAC_	
	verbose = JNI_TRUE;
    fprintf(stderr, "in get_GC, glDrawable=0x%X, verbose=%d, doubleBuffer=%d, stereo= %d \n", glDrawable, verbose, *doubleBuffer, *stereo);
#endif
	
	if (glDrawable == nil && isOffScr==JNI_FALSE)
	{
		fprintf(stderr, "get_GC: Error, glDrawable is nil \n");
		return nil;
	}
	
	if (verbose == JNI_TRUE)
	{
		printAllRenderer(env);
	}

	if(isOffScr==JNI_TRUE)
	{
		/* Find the depth of the main screen */
		pixelsize = (*(*GetMainDevice())->gdPMap)->pixelSize;

		/* Create the offscreen gworld */
		SetRect(&rect, 0, 0, width, height);
		qdErr = NewGWorld(g_world, (short) pixelsize, &rect, NULL, NULL, useTempMem);
		if(qdErr || !(*g_world)) {
			fprintf(stderr, "get_GC: Error, NewGWorld is nil \n");
			return nil;
		}
	
		/* Lock pixmap handle and get its specifications */
		pixMap = GetGWorldPixMap(*g_world);
		LockPixels(pixMap);
		baseaddr = GetPixBaseAddr(pixMap);
		rowbytes = (**pixMap).rowBytes & 0x7FFF;
	}
	
	setDefaultPixelFormat(env, &info.attributeList, 
		verbose, *doubleBuffer, *stereo, *isRGBA, *stencilBits,
		*accumSize, isOffScr, pixelsize);

	if(isOffScr==JNI_FALSE)
	{
		getRenderersInfo(env, &info);
		chooseBestRenderer(env, &info,
			       verbose, doubleBuffer, 
			       stereo, isRGBA,
			       stencilBits, accumSize,
			       isOffScr, false);
	}
	// create pixel format
    if (verbose == JNI_TRUE)
    {
		printPixelFormat(env, info.attributeList);
    }
    
    	if(isOffScr==JNI_FALSE)
		pixelformat = aglChoosePixelFormat(&device, 1, info.attributeList);
	else
		pixelformat = aglChoosePixelFormat(NULL, 0, info.attributeList);
			
	if (pixelformat == nil)
	{
		fprintf(stderr, "get_GC: Error, pixelformat is nil \n");
		
		return nil;
	}
	else if (verbose == JNI_TRUE)
	{
		fprintf(stderr, "pixelformat ok \n");
		printPixelFormatInfo(env, pixelformat);
	}
	
	DisposePtr((Ptr)info.info);
	
	// create AGL context
	context = aglCreateContext(pixelformat, sharedGLC);
	if (context == nil)
	{
		fprintf(stderr, "getGC context could NOT be created \n");
		
		return nil;
	}
	else if (verbose == JNI_TRUE)
	{
		fprintf(stderr, "context ok \n");
		
		/*
		parameter = 0;
		if (aglSetInteger(context, AGL_SWAP_INTERVAL, &parameter) == GL_FALSE)
		{
			fprintf(stderr, "setting AGL_SWAP_INTERVAL failed \n");
		}
		*/
	}
	
        checkPixelFormatInfo(env, pixelformat, doubleBuffer, 
			     stereo, isRGBA, stencilBits, accumSize);

 	if(isOffScr==JNI_FALSE)
 	{
	  // associate the context with the Mac drawable (window)
	  if (aglSetDrawable(context, glDrawable) == GL_FALSE)
	  {
		fprintf(stderr, "aglSetDrawable NOT successfull \n");
		
		aglDestroyPixelFormat(pixelformat);
		aglDestroyContext(context);
		
		return nil;
	  }
	  else if (verbose == JNI_TRUE)
	  {
		fprintf(stderr, "aglSetDrawable successfull \n");
	  }
	} else {
	  /* Attach the off screen area to the context */
	  if(!aglSetOffScreen(context, width, height, rowbytes, baseaddr)) return nil;
	}

	if (aglSetCurrentContext(context) == GL_FALSE)
	{
		fprintf(stderr, "aglSetCurrentContext NOT successfull \n");
		
		aglDestroyPixelFormat(pixelformat);
		aglDestroyContext(context);
		
		return nil;
	}
	else if (verbose == JNI_TRUE)
	{
		fprintf(stderr, "aglSetCurrentContext successfull \n");
	}
	
	if (verbose == JNI_TRUE)
	{
		fprintf(stderr, "AGLContext created:  %d \n", (UInt32)context);
	}
		
	aglDestroyPixelFormat(pixelformat);
	
	return context;
}

#pragma mark -

//
// setDefaultPixelFormat
//
static GLint setDefaultPixelFormat(JNIEnv *env, GLint (*pixelFormatList)[PIXEL_FROMAT_LIST_SIZE],
			       jboolean verbose, jboolean doubleBuffer, 
			       jboolean stereo, jboolean isRGBA,
			       int stencilBits, int accumSize,
			       jboolean isOffScr, int pixelsize)
{
	int i=0;
	int help;
	
	(*pixelFormatList)[i++] = AGL_RENDERER_ID;
	(*pixelFormatList)[i++] = AGL_RENDERER_GENERIC_ID;
	//(*pixelFormatList)[i++] = AGL_RENDERER_ATI_ID;
	//(*pixelFormatList)[i++] = AGL_RENDERER_GENERIC_ID|AGL_RENDERER_ATI_ID;	// VooDoo?
	
	(*pixelFormatList)[i++] = AGL_DEPTH_SIZE;
	(*pixelFormatList)[i++] = 16;
	
	if(isRGBA!=0)
		(*pixelFormatList)[i++] = AGL_RGBA;
	
	if(doubleBuffer!=0)
		(*pixelFormatList)[i++] = AGL_DOUBLEBUFFER;
	
	if(stereo!=0)
		(*pixelFormatList)[i++] = AGL_STEREO;
	
	if(stencilBits>0)
	{
		(*pixelFormatList)[i++] = AGL_STENCIL_SIZE;
		(*pixelFormatList)[i++] = stencilBits;
	}
	
	if(accumSize>0)
	{
		(*pixelFormatList)[i++] = AGL_ACCUM_RED_SIZE;
		(*pixelFormatList)[i++] = accumSize;
		(*pixelFormatList)[i++] = AGL_ACCUM_GREEN_SIZE;
		(*pixelFormatList)[i++] = accumSize;
		(*pixelFormatList)[i++] = AGL_ACCUM_BLUE_SIZE;
		(*pixelFormatList)[i++] = accumSize;
		if(isRGBA)
		{
			(*pixelFormatList)[i++] = AGL_ACCUM_ALPHA_SIZE;
			(*pixelFormatList)[i++] = accumSize;
		}
	}

	if(isOffScr!=0)
	{
		(*pixelFormatList)[i++] = AGL_OFFSCREEN;
		(*pixelFormatList)[i++] = AGL_PIXEL_SIZE;
		(*pixelFormatList)[i++] = pixelsize;
	}
	(*pixelFormatList)[i++] = AGL_NONE;
}

//
// printPixelFormat
//
static void printPixelFormat(JNIEnv *env, GLint pixelFormatList[PIXEL_FROMAT_LIST_SIZE])
{
	fprintf(stderr, "attributes of pixel format lists \n");
	fprintf(stderr, "	renderer ID:     0x%X \n", pixelFormatList[1]);
	fprintf(stderr, "	z buffer depth:   %d \n", pixelFormatList[3]);
	fprintf(stderr, "	double buffer:    %d \n", (pixelFormatList[5]==AGL_DOUBLEBUFFER));
	fprintf(stderr, "	stereo:           %d \n", (pixelFormatList[6]==AGL_STEREO));
	
	fprintf(stderr, "attributes of pixel format lists in raw format \n");
	fprintf(stderr, "	0:	 %d \n", pixelFormatList[0]);
	fprintf(stderr, "	1:	 %d \n", pixelFormatList[1]);
	fprintf(stderr, "	2:	 %d \n", pixelFormatList[2]);
	fprintf(stderr, "	3:	 %d \n", pixelFormatList[3]);
	fprintf(stderr, "	4:	 %d \n", pixelFormatList[4]);
	fprintf(stderr, "	5:	 %d \n", pixelFormatList[5]);
	fprintf(stderr, "	6:	 %d \n", pixelFormatList[6]);
	fprintf(stderr, "	7:	 %d \n", pixelFormatList[7]);
	fprintf(stderr, "	8:	 %d \n", pixelFormatList[8]);
	fprintf(stderr, "	9:	 %d \n", pixelFormatList[9]);
	fprintf(stderr, "	10:	 %d \n", pixelFormatList[10]);
}

//
// isColorARGB
//
static GLboolean isColorARGB(JNIEnv *env, GLint colorModes)
{
	GLboolean isARGB = GL_FALSE;
	
	
	if ((colorModes&AGL_ARGB16161616_BIT) != 0)
	{
		isARGB = GL_TRUE;
	}
	else if ((colorModes&AGL_ARGB12121212_BIT) != 0)
	{
		isARGB = GL_TRUE;
	}
	else if ((colorModes&AGL_RGB101010_A8_BIT) != 0)
	{
		isARGB = GL_TRUE;
	}
	else if ((colorModes&AGL_ARGB2101010_BIT) != 0)
	{
		isARGB = GL_TRUE;
	}
	else if ((colorModes&AGL_RGB888_A8_BIT) != 0)
	{
		isARGB = GL_TRUE;
	}
	else if ((colorModes&AGL_ARGB8888_BIT) != 0)
	{
		isARGB = GL_TRUE;
	}
	else if ((colorModes&AGL_RGB565_A8_BIT) != 0)
	{
		isARGB = GL_TRUE;
	}
	else if ((colorModes&AGL_RGB555_A8_BIT) != 0)
	{
		isARGB = GL_TRUE;
	}
	else if ((colorModes&AGL_ARGB1555_BIT) != 0)
	{
		isARGB = GL_TRUE;
	}
	else if ((colorModes&AGL_RGB444_A8_BIT) != 0)
	{
		isARGB = GL_TRUE;
	}
	else if ((colorModes&AGL_ARGB4444_BIT) != 0)
	{
		isARGB = GL_TRUE;
	}
	else if ((colorModes&AGL_RGB332_A8_BIT) != 0)
	{
		isARGB = GL_TRUE;
	}
	else if ((colorModes&AGL_BGR233_A8_BIT) != 0)
	{
		isARGB = GL_TRUE;
	}
	else if ((colorModes&AGL_RGB8_A8_BIT) != 0)
	{
		isARGB = GL_TRUE;
	}
	
	return isARGB;
}

//
// isColorRGB
//
static GLboolean isColorRGB(JNIEnv *env, GLint colorModes)
{
	GLboolean isRGB = GL_FALSE;
	
	
	if ((colorModes&AGL_RGB161616_BIT) != 0)
	{
		isRGB = GL_TRUE;
	}
	else if ((colorModes&AGL_RGB121212_BIT) != 0)
	{
		isRGB = GL_TRUE;
	}
	else if ((colorModes&AGL_RGB101010_BIT) != 0)
	{
		isRGB = GL_TRUE;
	}
	else if ((colorModes&AGL_RGB888_BIT) != 0)
	{
		isRGB = GL_TRUE;
	}
	else if ((colorModes&AGL_RGB565_BIT) != 0)
	{
		isRGB = GL_TRUE;
	}
	else if ((colorModes&AGL_RGB555_BIT) != 0)
	{
		isRGB = GL_TRUE;
	}
	else if ((colorModes&AGL_RGB444_BIT) != 0)
	{
		isRGB = GL_TRUE;
	}
	else if ((colorModes&AGL_RGB332_BIT) != 0)
	{
		isRGB = GL_TRUE;
	}
	else if ((colorModes&AGL_BGR233_BIT) != 0)
	{
		isRGB = GL_TRUE;
	}
	else if ((colorModes&AGL_RGB8_BIT) != 0)
	{
		isRGB = GL_TRUE;
	}
	
	return isRGB;
}
	
//
// chooseBestColor
//
static GLint chooseBestColor(JNIEnv *env, GLint colorModes)
{
	GLint best = 0;
	
	
	if ((colorModes&AGL_ARGB16161616_BIT) != 0)
	{
		best = AGL_ARGB16161616_BIT;
	}
	else if ((colorModes&AGL_RGB161616_BIT) != 0)
	{
		best = AGL_RGB161616_BIT;
	}
	else if ((colorModes&AGL_ARGB12121212_BIT) != 0)
	{
		best = AGL_ARGB12121212_BIT;
	}
	else if ((colorModes&AGL_RGB121212_BIT) != 0)
	{
		best = AGL_RGB121212_BIT;
	}
	else if ((colorModes&AGL_RGB101010_A8_BIT) != 0)
	{
		best = AGL_RGB101010_A8_BIT;
	}
	else if ((colorModes&AGL_ARGB2101010_BIT) != 0)
	{
		best = AGL_ARGB2101010_BIT;
	}
	else if ((colorModes&AGL_RGB101010_BIT) != 0)
	{
		best = AGL_RGB101010_BIT;
	}
	else if ((colorModes&AGL_RGB888_A8_BIT) != 0)
	{
		best = AGL_RGB888_A8_BIT;
	}
	else if ((colorModes&AGL_ARGB8888_BIT) != 0)
	{
		best = AGL_ARGB8888_BIT;
	}
	else if ((colorModes&AGL_RGB888_BIT) != 0)
	{
		best = AGL_RGB888_BIT;
	}
	else if ((colorModes&AGL_RGB565_A8_BIT) != 0)
	{
		best = AGL_RGB565_A8_BIT;
	}
	else if ((colorModes&AGL_RGB565_BIT) != 0)
	{
		best = AGL_RGB565_BIT;
	}
	else if ((colorModes&AGL_RGB555_A8_BIT) != 0)
	{
		best = AGL_RGB555_A8_BIT;
	}
	else if ((colorModes&AGL_ARGB1555_BIT) != 0)
	{
		best = AGL_ARGB1555_BIT;
	}
	else if ((colorModes&AGL_RGB555_BIT) != 0)
	{
		best = AGL_RGB555_BIT;
	}
	else if ((colorModes&AGL_RGB444_A8_BIT) != 0)
	{
		best = AGL_RGB444_A8_BIT;
	}
	else if ((colorModes&AGL_ARGB4444_BIT) != 0)
	{
		best = AGL_ARGB4444_BIT;
	}
	else if ((colorModes&AGL_RGB444_BIT) != 0)
	{
		best = AGL_RGB444_BIT;
	}
	else if ((colorModes&AGL_RGB332_A8_BIT) != 0)
	{
		best = AGL_RGB332_A8_BIT;
	}
	else if ((colorModes&AGL_RGB332_BIT) != 0)
	{
		best = AGL_RGB332_BIT;
	}
	else if ((colorModes&AGL_BGR233_A8_BIT) != 0)
	{
		best = AGL_BGR233_A8_BIT;
	}
	else if ((colorModes&AGL_BGR233_BIT) != 0)
	{
		best = AGL_BGR233_BIT;
	}
	else if ((colorModes&AGL_RGB8_A8_BIT) != 0)
	{
		best = AGL_RGB8_A8_BIT;
	}
	else if ((colorModes&AGL_RGB8_BIT) != 0)
	{
		best = AGL_RGB8_BIT;
	}
/*
	else if ((colorModes&AGL_INDEX16_BIT) != 0)
	{
		best = AGL_INDEX16_BIT;
	}
	else if ((colorModes&AGL_INDEX8_BIT) != 0)
	{
		best = AGL_INDEX8_BIT;
	}
	
*/
	return best;
}

//
// chooseBestDepth
//
static GLint chooseBestDepth(JNIEnv *env, GLint depthModes)
{
	GLint best = 0;
	
	
	if ((depthModes&AGL_128_BIT) != 0)
	{
		best = AGL_128_BIT;
	}
	else if ((depthModes&AGL_96_BIT) != 0)
	{
		best = AGL_96_BIT;
	}
	else if ((depthModes&AGL_64_BIT) != 0)
	{
		best = AGL_64_BIT;
	}
	else if ((depthModes&AGL_48_BIT) != 0)
	{
		best = AGL_48_BIT;
	}
	else if ((depthModes&AGL_32_BIT) != 0)
	{
		best = AGL_32_BIT;
	}
	else if ((depthModes&AGL_24_BIT) != 0)
	{
		best = AGL_24_BIT;
	}
	else if ((depthModes&AGL_16_BIT) != 0)
	{
		best = AGL_16_BIT;
	}
	else if ((depthModes&AGL_12_BIT) != 0)
	{
		best = AGL_12_BIT;
	}
	else if ((depthModes&AGL_10_BIT) != 0)
	{
		best = AGL_10_BIT;
	}
	else if ((depthModes&AGL_8_BIT) != 0)
	{
		best = AGL_8_BIT;
	}
	else if ((depthModes&AGL_6_BIT) != 0)
	{
		best = AGL_6_BIT;
	}
	else if ((depthModes&AGL_5_BIT) != 0)
	{
		best = AGL_5_BIT;
	}
	else if ((depthModes&AGL_4_BIT) != 0)
	{
		best = AGL_4_BIT;
	}
	else if ((depthModes&AGL_3_BIT) != 0)
	{
		best = AGL_3_BIT;
	}
	else if ((depthModes&AGL_2_BIT) != 0)
	{
		best = AGL_2_BIT;
	}
	else if ((depthModes&AGL_1_BIT) != 0)
	{
		best = AGL_1_BIT;
	}
	else if ((depthModes&AGL_0_BIT) != 0)
	{
		best = AGL_0_BIT;
	}
		
	return best;
}

//
// mapAGLDepth2DecDepth
//
static GLint mapAGLDepth2DecDepth(JNIEnv *env, GLint depthMode)
{
	GLint depth = 0;
	
	
	if (depthMode == AGL_128_BIT)
	{
		depth = 128;
	}
	else if (depthMode == AGL_96_BIT)
	{
		depth = 96;
	}
	else if (depthMode == AGL_64_BIT)
	{
		depth = 64;
	}
	else if (depthMode == AGL_48_BIT)
	{
		depth = 48;
	}
	else if (depthMode == AGL_32_BIT)
	{
		depth = 32;
	}
	else if (depthMode == AGL_24_BIT)
	{
		depth = 24;
	}
	else if (depthMode == AGL_16_BIT)
	{
		depth = 16;
	}
	else if (depthMode == AGL_12_BIT)
	{
		depth = 12;
	}
	else if (depthMode == AGL_10_BIT)
	{
		depth = 10;
	}
	else if (depthMode == AGL_8_BIT)
	{
		depth = 8;
	}
	else if (depthMode == AGL_6_BIT)
	{
		depth = 6;
	}
	else if (depthMode == AGL_5_BIT)
	{
		depth = 5;
	}
	else if (depthMode == AGL_4_BIT)
	{
		depth = 4;
	}
	else if (depthMode == AGL_3_BIT)
	{
		depth = 3;
	}
	else if (depthMode == AGL_2_BIT)
	{
		depth = 2;
	}
	else if (depthMode == AGL_1_BIT)
	{
		depth = 1;
	}
	else if (depthMode == AGL_0_BIT)
	{
		depth = 0;
	}
	
	return depth;
}

//
// getRenderersInfo
//
static void getRenderersInfo(JNIEnv *env, RenderersInfoRectPtr info)
{
	UInt32			count			= 0;
	AGLRendererInfo renderInfo		= nil,
					renderInfoHead	= nil;
	GDHandle		device			= GetMainDevice();
	GLint			returnedInfo	= 0;
	//THz				saveZone		= GetZone();
	
	
	count = 0;
	renderInfoHead = aglQueryRendererInfo(&device, 1);
	renderInfo = renderInfoHead;
 	while (renderInfo != nil)
 	{
	    renderInfo = aglNextRendererInfo(renderInfo);	    
 		count++;
 	}
 	aglDestroyRendererInfo(renderInfoHead);
 	
 	info->count = count;
	//SetZone(SystemZone());
 	info->info = (RendererRectPtr)NewPtrClear(info->count * sizeof(RendererRect));
	//SetZone(saveZone);
 	
	count = 0;
	renderInfoHead = aglQueryRendererInfo(&device, 1);
	renderInfo = renderInfoHead;
 	while (renderInfo != nil)
 	{
 		info->info[count].valid = GL_TRUE;
 		
		aglDescribeRenderer(renderInfo, AGL_RENDERER_ID, &returnedInfo);
		info->info[count].id = returnedInfo;
				
		aglDescribeRenderer(renderInfo, AGL_ACCELERATED, &returnedInfo);
		info->info[count].accelerated = (GLboolean)returnedInfo;
		
		aglDescribeRenderer(renderInfo, AGL_BUFFER_MODES, &returnedInfo);
		info->info[count].singleBuffer	= (GLboolean)((returnedInfo&AGL_SINGLEBUFFER_BIT)!=0);
		info->info[count].doubleBuffer	= (GLboolean)((returnedInfo&AGL_DOUBLEBUFFER_BIT)!=0);
		info->info[count].mono			= (GLboolean)((returnedInfo&AGL_MONOSCOPIC_BIT)!=0);
		info->info[count].stereo		= (GLboolean)((returnedInfo&AGL_STEREOSCOPIC_BIT)!=0);
		
		aglDescribeRenderer(renderInfo, AGL_COLOR_MODES, &returnedInfo);
		info->info[count].colorModes = returnedInfo;
		
		aglDescribeRenderer(renderInfo, AGL_DEPTH_MODES, &returnedInfo);
		info->info[count].depthModes = returnedInfo;
		
		aglDescribeRenderer(renderInfo, AGL_STENCIL_MODES, &returnedInfo);
		info->info[count].stencilModes = returnedInfo;		

		aglDescribeRenderer(renderInfo, AGL_ACCUM_MODES, &returnedInfo);
		info->info[count].accumModes = returnedInfo;		
		
		renderInfo = aglNextRendererInfo(renderInfo);
		count++;
 	}
 	aglDestroyRendererInfo(renderInfoHead);
}

//
// printRendererInfo
//
static void printRawRendererInfo(JNIEnv *env, RendererRect info)
{
	fprintf(stderr, "renderer info \n");
	fprintf(stderr, "	valid:         %d \n", info.valid);
	fprintf(stderr, "	ID:           0x%X \n", info.id);
	fprintf(stderr, "	accelerated:   %d \n", info.accelerated);
	fprintf(stderr, "	depthModes:    %d \n", info.depthModes);
	fprintf(stderr, "	colorModes:    %d \n", info.colorModes);
	fprintf(stderr, "	stencilModes:  %d \n", info.stencilModes);
	fprintf(stderr, "	singleBuffer:  %d \n", info.singleBuffer);
	fprintf(stderr, "	doubleBuffer:  %d \n", info.doubleBuffer);
	fprintf(stderr, "	mono:          %d \n", info.mono);
	fprintf(stderr, "	stereo:        %d \n", info.stereo);
}

//
// chooseBestRenderer
//
static void chooseBestRenderer(JNIEnv *env, RenderersInfoRectPtr info, 
			       jboolean verbose, jboolean *doubleBuffer, 
			       jboolean *stereo, jboolean *isRGBA,
			       int *stencilBits, int *accumSize,
			       jboolean isOffScr, jboolean forceSWRenderer)
{
	int i=0, help=0;
	UInt32 		count, listIndex= 0; 
	GLboolean	haveAcceleratedRenderer		= GL_FALSE,
		        haveValidRenderer		= GL_FALSE,
			chooseNewPixelFormat		= GL_FALSE;
	
	
	for (count=0; count<(info->count); count++)
	{
		info->info[count].valid = 
		  info->info[count].valid && 
		  (isColorARGB(env, info->info[count].colorModes) == GL_TRUE);
		
		if (*doubleBuffer == JNI_TRUE)
		{
			info->info[count].valid = 
				info->info[count].valid && 
				(info->info[count].doubleBuffer == GL_TRUE);
		}
		
		if (*stereo == JNI_TRUE)
		{
			// there are no stereoscopic OpenGL renderers 
			// for mac avaialable yet
			// no reason to reject a 
			// (possibly hardware accelerated) 
			// renderer just because of that
			//info->info[count].valid = 
			//   info->info[count].valid && 
			//   (info->info[count].stereo == GL_TRUE);
		}
		
		haveAcceleratedRenderer = 
				 haveAcceleratedRenderer || 
				 (info->info[count].accelerated == GL_TRUE);

		haveValidRenderer = haveValidRenderer || 
				    (info->info[count].valid == GL_TRUE);
	}
	
	// first look for an accelerated renderer
	if (chooseNewPixelFormat == GL_FALSE)
	{
		count = 0;
		while (count < info->count)
		{
			if (  (info->info[count].valid == GL_TRUE) && 
			      (
			        (
			          (info->info[count].accelerated == GL_TRUE)  &&
				  forceSWRenderer==JNI_FALSE
			        ) || (
			          (info->info[count].accelerated == GL_FALSE) &&
				  forceSWRenderer==JNI_TRUE
			        ) 
			      ) 
			   )
			{
				chooseNewPixelFormat = GL_TRUE;

				// hardware accelerated (VooDoo, ATI?) 
				// renderer doesn't work without it ??
				if( info->info[count].accelerated == GL_TRUE )
					*doubleBuffer = JNI_TRUE;	
				
				break;
			}
			
			count++;
		}
	}
	
	// now look for any renderer
	if (chooseNewPixelFormat == GL_FALSE)
	{
		count = 0;
		while (count < info->count)
		{
			if (info->info[count].valid == GL_TRUE)
			{
				chooseNewPixelFormat = GL_TRUE;
				
				break;
			}
			
			count++;
		}
	}
	
	if (chooseNewPixelFormat == GL_TRUE)
	{
		info->attributeList[i++] = AGL_RENDERER_ID;
		info->attributeList[i++] = info->info[count].id;
		
		info->attributeList[i++] = AGL_DEPTH_SIZE;
		info->attributeList[i++] = 
		  mapAGLDepth2DecDepth(env, 
		         chooseBestDepth(env, info->info[count].depthModes));

		// if we want RGB mode, but none is avaiable,
		// we do choose RGBA !
		if(*isRGBA==JNI_FALSE && 
		   !isColorRGB(env, info->info[count].colorModes))
			*isRGBA=JNI_TRUE;
			
		if(*isRGBA==JNI_TRUE && 
		   isColorARGB(env, info->info[count].colorModes))
		{
			info->attributeList[i++] = AGL_RGBA;
		} else {
			*isRGBA=JNI_FALSE;
		}
		
		listIndex = i;
		
		if ( (*doubleBuffer == JNI_TRUE) && 
		     (info->info[count].doubleBuffer == GL_TRUE)
		   )
		{
			info->attributeList[listIndex++] = AGL_DOUBLEBUFFER;
		}
		else
		{
			*doubleBuffer = JNI_FALSE;
		}
		
		if ( (*stereo == JNI_TRUE) && 
		     (info->info[count].stereo == GL_TRUE)
		   )
		{
			info->attributeList[listIndex++] = AGL_STEREO;
		}
		else
		{
			*stereo = JNI_FALSE;
		}

		if ( (*stencilBits > 0) && 
		     (info->info[count].stencilModes != 0)
		   )
		{
			info->attributeList[listIndex++] = AGL_STENCIL_SIZE;
			info->attributeList[listIndex++] = *stencilBits;
		}
		else
		{
			*stencilBits = 0;
		}

		if ( (*accumSize > 0) && 
		     (info->info[count].accumModes != 0)
		   )
		{
			info->attributeList[listIndex++] = AGL_ACCUM_RED_SIZE;
			info->attributeList[listIndex++] = *accumSize;
			info->attributeList[listIndex++] = AGL_ACCUM_GREEN_SIZE;
			info->attributeList[listIndex++] = *accumSize;
			info->attributeList[listIndex++] = AGL_ACCUM_BLUE_SIZE;
			info->attributeList[listIndex++] = *accumSize;
			if(isRGBA)
			{
				info->attributeList[listIndex++] = 
					AGL_ACCUM_ALPHA_SIZE;
				info->attributeList[listIndex++] = 
					*accumSize;
			}
		} else {
			*accumSize=0;
		}
		
		if(isOffScr!=0)
			info->attributeList[listIndex++] = AGL_OFFSCREEN;
		
		info->attributeList[listIndex++] = AGL_NONE;
	}
	
	DisposePtr((Ptr)info->info);
	info->info = nil;
}

#pragma mark -

//
// printBufferModes
//
static void printBufferModes(JNIEnv *env, GLint v)
{
	if(v & AGL_MONOSCOPIC_BIT)   fprintf(stderr, "            AGL_MONOSCOPIC_BIT \n");
	if(v & AGL_STEREOSCOPIC_BIT) fprintf(stderr, "            AGL_STEREOSCOPIC_BIT \n");
	if(v & AGL_SINGLEBUFFER_BIT) fprintf(stderr, "            AGL_SINGLEBUFFER_BIT \n");
	if(v & AGL_DOUBLEBUFFER_BIT) fprintf(stderr, "            AGL_DOUBLEBUFFER_BIT \n");
}

//
// printColorModes
//
static void printColorModes(JNIEnv *env, GLint v)
{
	if(v & AGL_RGB8_BIT)         fprintf(stderr, "            AGL_RGB8_BIT \n");
	if(v & AGL_RGB8_A8_BIT)      fprintf(stderr, "            AGL_RGB8_A8_BIT \n");
	if(v & AGL_BGR233_BIT)       fprintf(stderr, "            AGL_BGR233_BIT \n");
	if(v & AGL_BGR233_A8_BIT)    fprintf(stderr, "            AGL_BGR233_A8_BIT \n");
	if(v & AGL_RGB332_BIT)       fprintf(stderr, "            AGL_RGB332_BIT \n");
	if(v & AGL_RGB332_A8_BIT)    fprintf(stderr, "            AGL_RGB332_A8_BIT \n");
	if(v & AGL_RGB444_BIT)       fprintf(stderr, "            AGL_RGB444_BIT \n");
	if(v & AGL_ARGB4444_BIT)     fprintf(stderr, "            AGL_ARGB4444_BIT \n");
	if(v & AGL_RGB444_A8_BIT)    fprintf(stderr, "            AGL_RGB444_A8_BIT \n");
	if(v & AGL_RGB555_BIT)       fprintf(stderr, "            AGL_RGB555_BIT \n");
	if(v & AGL_ARGB1555_BIT)     fprintf(stderr, "            AGL_ARGB1555_BIT \n");
	if(v & AGL_RGB555_A8_BIT)    fprintf(stderr, "            AGL_RGB555_A8_BIT \n");
	if(v & AGL_RGB565_BIT)       fprintf(stderr, "            AGL_RGB565_BIT \n");
	if(v & AGL_RGB565_A8_BIT)    fprintf(stderr, "            AGL_RGB565_A8_BIT \n");
	if(v & AGL_RGB888_BIT)       fprintf(stderr, "            AGL_RGB888_BIT \n");
	if(v & AGL_ARGB8888_BIT)     fprintf(stderr, "            AGL_ARGB8888_BIT \n");
	if(v & AGL_RGB888_A8_BIT)    fprintf(stderr, "            AGL_RGB888_A8_BIT \n");
	if(v & AGL_RGB101010_BIT)    fprintf(stderr, "            AGL_RGB101010_BIT \n");
	if(v & AGL_ARGB2101010_BIT)  fprintf(stderr, "            AGL_ARGB2101010_BIT \n");
	if(v & AGL_RGB101010_A8_BIT) fprintf(stderr, "            AGL_RGB101010_A8_BIT \n");
	if(v & AGL_RGB121212_BIT)    fprintf(stderr, "            AGL_RGB121212_BIT \n");
	if(v & AGL_ARGB12121212_BIT) fprintf(stderr, "            AGL_ARGB12121212_BIT \n");
	if(v & AGL_RGB161616_BIT)    fprintf(stderr, "            AGL_RGB161616_BIT \n");
	if(v & AGL_ARGB16161616_BIT) fprintf(stderr, "            AGL_ARGB16161616_BIT \n");
	if(v & AGL_INDEX8_BIT)       fprintf(stderr, "            AGL_INDEX8_BIT \n");
	if(v & AGL_INDEX16_BIT)      fprintf(stderr, "            AGL_INDEX16_BIT \n");
}

//
// printBitModes
//
static void printBitModes(JNIEnv *env, GLint v)
{
	if(v & AGL_0_BIT)            fprintf(stderr, "            AGL_0_BIT \n");
	if(v & AGL_1_BIT)            fprintf(stderr, "            AGL_1_BIT \n");
	if(v & AGL_2_BIT)            fprintf(stderr, "            AGL_2_BIT \n");
	if(v & AGL_3_BIT)            fprintf(stderr, "            AGL_3_BIT \n");
	if(v & AGL_4_BIT)            fprintf(stderr, "            AGL_4_BIT \n");
	if(v & AGL_5_BIT)            fprintf(stderr, "            AGL_5_BIT \n");
	if(v & AGL_6_BIT)            fprintf(stderr, "            AGL_6_BIT \n");
	if(v & AGL_8_BIT)            fprintf(stderr, "            AGL_8_BIT \n");
	if(v & AGL_10_BIT)           fprintf(stderr, "            AGL_10_BIT \n");
	if(v & AGL_12_BIT)           fprintf(stderr, "            AGL_12_BIT \n");
	if(v & AGL_16_BIT)           fprintf(stderr, "            AGL_16_BIT \n");
	if(v & AGL_24_BIT)           fprintf(stderr, "            AGL_24_BIT \n");
	if(v & AGL_32_BIT)           fprintf(stderr, "            AGL_32_BIT \n");
	if(v & AGL_48_BIT)           fprintf(stderr, "            AGL_48_BIT \n");
	if(v & AGL_64_BIT)           fprintf(stderr, "            AGL_64_BIT \n");
	if(v & AGL_96_BIT)           fprintf(stderr, "            AGL_96_BIT \n");
	if(v & AGL_128_BIT)          fprintf(stderr, "            AGL_128_BIT \n");
}

//
// printRendererInfo
//
static void printRendererInfo(JNIEnv *env, AGLRendererInfo info)
{
	GLint rv;
	
	
	aglDescribeRenderer(info, AGL_RENDERER_ID, &rv);
	fprintf(stderr, "        AGL_RENDERER_ID     : 0x%X \n", rv);
	
	aglDescribeRenderer(info, AGL_OFFSCREEN, &rv);
	fprintf(stderr, "        AGL_OFFSCREEN       : %s \n", (rv ? "GL_TRUE" : "GL_FALSE"));
	
	aglDescribeRenderer(info, AGL_FULLSCREEN, &rv);
	fprintf(stderr, "        AGL_FULLSCREEN      : %s \n", (rv ? "GL_TRUE" : "GL_FALSE"));
	
	aglDescribeRenderer(info, AGL_WINDOW, &rv);
	fprintf(stderr, "        AGL_WINDOW          : %s \n", (rv ? "GL_TRUE" : "GL_FALSE"));
	
	aglDescribeRenderer(info, AGL_ACCELERATED, &rv);
	fprintf(stderr, "        AGL_ACCELERATED     : %s \n", (rv ? "GL_TRUE" : "GL_FALSE"));
	
	aglDescribeRenderer(info, AGL_ROBUST, &rv);
	fprintf(stderr, "        AGL_ROBUST          : %s \n", (rv ? "GL_TRUE" : "GL_FALSE"));
	
	aglDescribeRenderer(info, AGL_BACKING_STORE, &rv);
	fprintf(stderr, "        AGL_BACKING_STORE   : %s \n", (rv ? "GL_TRUE" : "GL_FALSE"));
	
	aglDescribeRenderer(info, AGL_MP_SAFE, &rv);
	fprintf(stderr, "        AGL_MP_SAFE         : %s \n", (rv ? "GL_TRUE" : "GL_FALSE"));
	
	aglDescribeRenderer(info, AGL_COMPLIANT, &rv);
	fprintf(stderr, "        AGL_COMPLIANT       : %s \n", (rv ? "GL_TRUE" : "GL_FALSE"));
	
	aglDescribeRenderer(info, AGL_MULTISCREEN, &rv);
	fprintf(stderr, "        AGL_MULTISCREEN     : %s \n", (rv ? "GL_TRUE" : "GL_FALSE"));
	
	aglDescribeRenderer(info, AGL_BUFFER_MODES, &rv);
	fprintf(stderr, "        AGL_BUFFER_MODES    : 0x%X \n", rv);
	printBufferModes(env, rv);
	
	aglDescribeRenderer(info, AGL_MIN_LEVEL, &rv);
	fprintf(stderr, "        AGL_MIN_LEVEL       :  %d \n", rv);
	
	aglDescribeRenderer(info, AGL_MAX_LEVEL, &rv);
	fprintf(stderr, "        AGL_MAX_LEVEL       :  %d \n", rv);
	
	aglDescribeRenderer(info, AGL_COLOR_MODES, &rv);
	fprintf(stderr, "        AGL_COLOR_MODES     : 0x%X \n", rv);
	printColorModes(env, rv);
	
	aglDescribeRenderer(info, AGL_ACCUM_MODES, &rv);
	fprintf(stderr, "        AGL_ACCUM_MODES     : 0x%X \n", rv);
	printColorModes(env, rv);
	
	aglDescribeRenderer(info, AGL_DEPTH_MODES, &rv);
	fprintf(stderr, "        AGL_DEPTH_MODES     : 0x%X \n", rv);
	printBitModes(env, rv);
	
	aglDescribeRenderer(info, AGL_STENCIL_MODES, &rv);
	fprintf(stderr, "        AGL_STENCIL_MODES   : 0x%X \n", rv);
	printBitModes(env, rv);
	
	aglDescribeRenderer(info, AGL_MAX_AUX_BUFFERS, &rv);
	fprintf(stderr, "        AGL_MAX_AUX_BUFFERS :  %d \n", rv);
	
	aglDescribeRenderer(info, AGL_VIDEO_MEMORY, &rv);
	fprintf(stderr, "        AGL_VIDEO_MEMORY    :  %d \n", rv);
	
	aglDescribeRenderer(info, AGL_TEXTURE_MEMORY, &rv);
	fprintf(stderr, "        AGL_TEXTURE_MEMORY  :  %d \n", rv);
}

//
// checkGetRendererInfo
//
static void checkGetRendererInfo(JNIEnv *env, GDHandle device)
{
	AGLRendererInfo	info,
					infoSaved;
	GLint			inum;
	
	
	info =  aglQueryRendererInfo(&device, 1);
	if (info == nil)
	{
		fprintf(stderr, "aglQueryRendererInfo : Info Error \n");
		return;
	}
	
	inum = 0;
	while (info != nil)
	{
		fprintf(stderr, "    Renderer :  %d \n", inum);
		printRendererInfo(env, info);
		infoSaved = info;
		info = aglNextRendererInfo(infoSaved);
		aglDestroyRendererInfo(infoSaved);
		inum++;
	}
}

//
// printAllRenderer
//
static void printAllRenderer(JNIEnv *env)
{
	GLenum   err;
	GDHandle device;
	GLuint   dnum = 0;
	
	
	fprintf(stderr, "the renderers that are available on this system: \n");
	
	err = aglGetError();
	if (err != AGL_NO_ERROR)
	{
		fprintf(stderr, "aglGetError 1 - %s \n", aglErrorString(err));
	}
	
	device = GetDeviceList();
	while (device != nil)
	{
		fprintf(stderr, "Device :  %d \n", dnum);
		checkGetRendererInfo(env, device);
		device = GetNextDevice(device);
		dnum++;
	}
		
	err = aglGetError();
	if (err != AGL_NO_ERROR)
	{
		fprintf(stderr, "aglGetError 2 - %s \n", aglErrorString(err));
	}
}


//
// printPixelFormatInfo
//
static void printPixelFormatInfo(JNIEnv *env, AGLPixelFormat info)
{
	GLint rv, rv1, rv2, rv3, rv4;
	
	aglDescribePixelFormat(info, AGL_BUFFER_SIZE, &rv);
	fprintf(stderr, "        AGL_BUFFER_SIZE     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_LEVEL, &rv);
	fprintf(stderr, "        AGL_LEVEL     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_RGBA, &rv);
	fprintf(stderr, "        AGL_RGBA     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_DOUBLEBUFFER, &rv);
	fprintf(stderr, "        AGL_DOUBLEBUFFER     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_STEREO, &rv);
	fprintf(stderr, "        AGL_STEREO     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_AUX_BUFFERS, &rv);
	fprintf(stderr, "        AGL_AUX_BUFFERS     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_RED_SIZE, &rv);
	fprintf(stderr, "        AGL_RED_SIZE     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_GREEN_SIZE, &rv);
	fprintf(stderr, "        AGL_GREEN_SIZE     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_BLUE_SIZE, &rv);
	fprintf(stderr, "        AGL_BLUE_SIZE     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_ALPHA_SIZE, &rv);
	fprintf(stderr, "        AGL_ALPHA_SIZE     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_DEPTH_SIZE, &rv);
	fprintf(stderr, "        AGL_DEPTH_SIZE     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_STENCIL_SIZE, &rv);
	fprintf(stderr, "        AGL_STENCIL_SIZE     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_ACCUM_RED_SIZE, &rv1);
	aglDescribePixelFormat(info, AGL_ACCUM_GREEN_SIZE, &rv2);
	aglDescribePixelFormat(info, AGL_ACCUM_BLUE_SIZE, &rv3);
	aglDescribePixelFormat(info, AGL_ACCUM_ALPHA_SIZE, &rv4);
	fprintf(stderr, "        AGL_ACCUM_SIZE (rgba) : %d / %d / %d / %d \n",
				rv1, rv2, rv3, rv4 );
	
	aglDescribePixelFormat(info, AGL_PIXEL_SIZE, &rv);
	fprintf(stderr, "        AGL_PIXEL_SIZE     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_OFFSCREEN, &rv);
	fprintf(stderr, "        AGL_OFFSCREEN     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_FULLSCREEN, &rv);
	fprintf(stderr, "        AGL_FULLSCREEN     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_WINDOW, &rv);
	fprintf(stderr, "        AGL_WINDOW     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_RENDERER_ID, &rv);
	fprintf(stderr, "        AGL_RENDERER_ID     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_SINGLE_RENDERER, &rv);
	fprintf(stderr, "        AGL_SINGLE_RENDERER     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_ACCELERATED, &rv);
	fprintf(stderr, "        AGL_ACCELERATED     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_BACKING_STORE, &rv);
	fprintf(stderr, "        AGL_BACKING_STORE     : %d \n", rv);
	
	aglDescribePixelFormat(info, AGL_COMPLIANT, &rv);
	fprintf(stderr, "        AGL_COMPLIANT     : %d \n", rv);
}

static void checkPixelFormatInfo(JNIEnv *env, AGLPixelFormat info,
			       jboolean *doubleBuffer, 
			       jboolean *stereo, jboolean *isRGBA,
			       int *stencilBits, int *accumSize)
{
	GLint rv, rv1, rv2, rv3, rv4;
	
	aglDescribePixelFormat(info, AGL_RGBA, &rv);
	*isRGBA= (rv==GL_TRUE)?JNI_TRUE:JNI_FALSE;

	aglDescribePixelFormat(info, AGL_DOUBLEBUFFER, &rv);
	*doubleBuffer= (rv==GL_TRUE)?JNI_TRUE:JNI_FALSE;
	
	aglDescribePixelFormat(info, AGL_STEREO, &rv);
	*stereo = (rv==GL_TRUE)?JNI_TRUE:JNI_FALSE;
	
	aglDescribePixelFormat(info, AGL_STENCIL_SIZE, &rv);
	*stencilBits = (rv==GL_TRUE)?JNI_TRUE:JNI_FALSE;
	
	aglDescribePixelFormat(info, AGL_ACCUM_RED_SIZE, &rv1);
	aglDescribePixelFormat(info, AGL_ACCUM_GREEN_SIZE, &rv2);
	aglDescribePixelFormat(info, AGL_ACCUM_BLUE_SIZE, &rv3);
	aglDescribePixelFormat(info, AGL_ACCUM_ALPHA_SIZE, &rv4);
	*accumSize=rv1+rv2+rv3;
	if(*isRGBA==JNI_TRUE)
		*accumSize+=rv4;
}
