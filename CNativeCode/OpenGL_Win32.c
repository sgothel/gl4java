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
#ifdef _WIN32_
	#include "winstuff.h"
#endif

#include <stdio.h>
#include <jni.h>

/*
void gl4java_bind_ext(int verbose);
*/

/*--------------------------------------------------------------------------
 * here on in is just regular apple pie C
 */

#include <GL\gl.h>
#include <gl\glu.h>
#include <wingdi.h>

static jboolean verbose = JNI_FALSE;

// Color Palette handle
static HPALETTE hPalette = NULL;
static HGLRC tempRC;

// Set Pixel Format function - forward declaration
static void SetDCPixelFormat(HDC hDC, jboolean doubleBuffer, jboolean stereo, jint stencilBits, jboolean offScreenRenderer);
static HPALETTE GetOpenGLPalette(HDC hDC);
static HGLRC get_GC( HDC *hDC, jboolean doubleBuffer, jboolean stereo, jint stencilBits, HGLRC shareWith, jboolean offScreenRenderer,
					 int width, int height, HBITMAP *pix);

static int PixelFormatDescriptorFromDc( HDC Dc, PIXELFORMATDESCRIPTOR *Pfd );
static const char * GetTextualPixelFormatByHDC(HDC hdc);
static const char * GetTextualPixelFormatByPFD(PIXELFORMATDESCRIPTOR *ppfd, int format);

/* testJavaGLTypes does important implementation plattformspecific checks:
 *
 * o do fit X11-Vars in jint (because GLContext stores 'em like that)
 * o do fit the JNI <-> GL Variables-Type Mapping
 * o IF ERROR OR VERBOSE -> DUMP JNI,GL Type-Length
 */
jboolean testJavaGLTypes(jboolean verbose);

/* testX11Java does important implementation plattformspecific checks:
 *
 * o do fit X11-Vars in jint (because GLContext stores 'em like that)
 */
jboolean testWin32Java(void);

static void setupDIB(HDC hDCOrig, HDC hDC, HBITMAP * hBitmap, int width, int height);
static void resizeDIB(HDC hDC, HBITMAP *hOldBitmap, HBITMAP *hBitmap);
static void setupPalette(HDC hDC);


JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_openOpenGLNative( JNIEnv *env, jobject obj )
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
    HDC thisWin;
    HGLRC gc;
    jint pData=0;
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
		fprintf(stderr, "sizes:\n jint=%d\n HGLRC=%d\n HDC=%d\n",
	  		sizeof(jint), sizeof(HGLRC), sizeof(HDC) );
		fflush(stderr);
    }

    /* FIRST OF ALL CHECK IF A NATIVE POINTER OR WIN-TYPE FITS IN ´jint´ */
    ret = testWin32Java();

    ret = testJavaGLTypes(verbose);

    if(ret==JNI_TRUE) {
	    fpData = (*env)->GetFieldID(env, cls, "pData", "I");
	    if (fpData == 0) ret= JNI_FALSE;
	    else pData =(*env)->GetIntField(env, obj, fpData);
    }
    if(JNI_TRUE==verbose)
    {
    	fprintf(stderr, "received pData : %d\n", (int)pData);
    }

    if(ret==JNI_TRUE) {
	    fwindowHandle = (*env)->GetFieldID(env, cls, "windowHandle", "I");
	    if (fwindowHandle == 0) ret= JNI_FALSE;
    }

    if(ret==JNI_TRUE) {
	    fglContext=(*env)->GetFieldID(env, cls, "glContext", "I");
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
	    fshareWith = (*env)->GetFieldID(env, cls, "sharedGLContextNative", "I");
	    if (fshareWith == 0) ret= JNI_FALSE;
	    else shareWith = (HGLRC) (*env)->GetIntField(env, obj, fshareWith);
    }

    if(ret==JNI_TRUE) {
	    fpixmapHandle = (*env)->GetFieldID(env, cls, "pixmapHandle", "I");
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

    wglMakeCurrent(NULL, NULL);

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
    if( (gc = get_GC( &thisWin, jdoubleBuffer, jstereoView, jstencilBits, shareWith, 
				      joffScreenRenderer, jcreatewinw, jcreatewinh, &pix)) == 0 )
    {
	    printf( "getGC error" );
	    return JNI_FALSE;
    }

	/* fetch the states of doubleBuffer and stereo */
    (void) PixelFormatDescriptorFromDc( thisWin, &pfd);

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

    if(ret==JNI_TRUE && fwindowHandle!=0) {
	    (*env)->SetIntField(env, obj, fwindowHandle, (jint)thisWin);
    	 if(JNI_TRUE==verbose)
    		fprintf(stderr, "go and set windowHandle thisWin : %d; 0x%X\n",
         	(int)thisWin, (int)thisWin);
    }

    if(ret==JNI_TRUE && fpixmapHandle!=0) {
	    (*env)->SetIntField(env, obj, fpixmapHandle, (jint)pix);
    	 if(JNI_TRUE==verbose)
    		fprintf(stderr, "go and set pixmapHandle pix: %d; 0x%X\n",
         	(int)pix, (int)pix);
    }

    if(ret==JNI_TRUE && fglContext !=0 ) {
	    (*env)->SetIntField(env, obj, fglContext, (jint)gc);
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
					     jint disp,
					     jint thisWin,
					     jint glContext)
{
	jboolean ret = JNI_TRUE;

	if( !thisWin )
	{
	    return JNI_FALSE;
	}

	if( !glContext )
	{
	    return JNI_FALSE;
	}

        if ( ret==JNI_TRUE && !wglMakeCurrent((HDC)thisWin, (HGLRC)glContext) )
        {
    		return JNI_FALSE;
        } 
        return JNI_TRUE;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljFreeNative( JNIEnv *env, jobject obj,
				      jint disp,
				      jint thisWin,
				      jint glContext
				    )
{
    (void)thisWin;
    (void)glContext;
    (void)disp;

    if ( ! wglMakeCurrent( NULL, NULL ) )
    {
			fprintf(stderr, "gljFree failed\n");
			fflush(stderr);
			return JNI_FALSE;
    }
    return JNI_TRUE;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljDestroyNative( JNIEnv *env, jobject obj )
{
	jboolean ret = JNI_TRUE;

	jclass cls = 0;
	jfieldID fwindowHandle=0, fpixmapHandle;
	jfieldID fglContext=0;
    jfieldID foffScreenRenderer;

    jboolean joffScreenRenderer=JNI_FALSE;
    HBITMAP pix;
	HDC thisWin;
	HGLRC gc;

	cls = (*env)->GetObjectClass(env, obj);
	if(cls==0)
	{
	    ret=JNI_FALSE;
	}

	if(ret==JNI_TRUE) {
	    fwindowHandle = (*env)->GetFieldID(env, cls, "windowHandle", "I");
	    if (fwindowHandle == 0) ret= JNI_FALSE;
	    else thisWin =(HDC) (*env)->GetIntField(env, obj, fwindowHandle);
	}

	if(ret==JNI_TRUE) {
	    fglContext=(*env)->GetFieldID(env, cls, "glContext", "I");
	    if (fglContext == 0) ret= JNI_FALSE;
	    else gc =(HGLRC)(*env)->GetIntField(env, obj, fglContext);
	}


    if(ret==JNI_TRUE) {
	    fpixmapHandle = (*env)->GetFieldID(env, cls, "pixmapHandle", "I");
	    if (fpixmapHandle == 0) ret= JNI_FALSE;
	    else pix =(HBITMAP)(*env)->GetIntField(env, obj, fpixmapHandle);
    }

    if(ret==JNI_TRUE) {
	    foffScreenRenderer = 
	    		(*env)->GetFieldID(env, cls, "offScreenRenderer", "Z");
	    if (foffScreenRenderer == 0) ret= JNI_FALSE;
	    else joffScreenRenderer =(*env)->GetBooleanField(env, obj, foffScreenRenderer);
    }


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
			if(pix!=0)
			{
				DeleteObject(pix);
				pix=0;
			}
			if(thisWin!=0)
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

    if(ret==JNI_TRUE && fwindowHandle!=0) {
	    (*env)->SetIntField(env, obj, fwindowHandle, (jint)thisWin);
    }

    if(ret==JNI_TRUE && fglContext) {
	    (*env)->SetIntField(env, obj, fglContext, (jint)gc);
    }


    if(ret==JNI_TRUE && fpixmapHandle!=0) {
	    (*env)->SetIntField(env, obj, fpixmapHandle, (jint)pix);
    }

    return ret;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljSwapNative( JNIEnv *env, jobject obj,
				      jint disp,
				      jint thisWin,
				      jint glContext,
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
		if( SwapBuffers( (HDC)thisWin ) == FALSE )
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

static HGLRC get_GC( HDC * hDC, jboolean doubleBuffer, jboolean stereo, jint stencilBits, HGLRC shareWith, jboolean offScreenRenderer,
					 int width, int height, HBITMAP *pix)

{
	const char * text=0;
	HDC hDCOrig = 0;


    if( *hDC == 0 )
	printf( "get_GC: Error, HDC is zero\n");

	// Select the pixel format
	if(offScreenRenderer)
	{
		hDCOrig = *hDC;
		*hDC = CreateCompatibleDC(hDCOrig);
		// setupDIB(*hDC, pix, width, height);
		setupDIB(hDCOrig, *hDC, pix, width, height);
		/* SetDCPixelFormat(hDCOffScr, doubleBuffer, stereo, stencilBits, offScreenRenderer); */
		/* setupPalette(hDC); USE MY PROC */
	}

	SetDCPixelFormat(*hDC, doubleBuffer, stereo, stencilBits, offScreenRenderer);

	// Create palette if needed
	hPalette = GetOpenGLPalette(*hDC);

    tempRC = wglCreateContext( *hDC );

	if(verbose==JNI_TRUE)
	{
		fprintf(stderr,"\n\nPIXELFORMAT OF GL-Context SETTINGS:\n");
		text=GetTextualPixelFormatByHDC(*hDC);
		fprintf(stderr,text);
	}

    /* check if the context could be created */
    if( tempRC == NULL ) {
        fprintf(stderr, "getGC context could NOT be created \n");
        return( 0 );
    }

    /* associated the context with the X window */
    if( wglMakeCurrent( *hDC, tempRC ) == FALSE) {
		fprintf(stderr,"wglMakeCurrent(%d,%d) failed on new context!!!\n",(int)*hDC,(int)tempRC);
		fprintf(stderr,"Error code = %d\n",(int)GetLastError());
		wglMakeCurrent(NULL, NULL);
		wglDeleteContext( tempRC );
        return( 0 );
    }

	if(shareWith!=NULL && wglShareLists(shareWith, tempRC)==FALSE)
	{
		fprintf(stderr,"\nERROR: Could not share lists between the new and the given GLContext (Win32Native)!\n");
		fprintf(stderr,"Error code = %d\n",(int)GetLastError());
		wglMakeCurrent(NULL, NULL);
		wglDeleteContext( tempRC );
        return( 0 );
	}

    if(JNI_TRUE==verbose)
			printf( "HGLRC (glContext) created: %d\n", tempRC );

    return tempRC;
}

// Select the pixel format for a given device context
static void SetDCPixelFormat(HDC hDC, jboolean doubleBuffer, jboolean stereo, jint stencilBits, jboolean offScreenRenderer)
{
    int nPixelFormat=0;
	const char * text=0;

    static PIXELFORMATDESCRIPTOR pfd = {
			sizeof(PIXELFORMATDESCRIPTOR),  // Size of this structure
			1,                              // Version of this structure
			0,								// will be defined later !!!!
			PFD_TYPE_RGBA,                  // RGBA Color mode
			24,                             // Want 24bit color
			0,0,0,0,0,0,                    // Not used to select mode
			0,0,                            // Not used to select mode
			0,0,0,0,0,                      // Not used to select mode
			32,                             // Size of depth buffer
			0,                              // Not used to select mode
			0,                              // Not used to select mode
			PFD_MAIN_PLANE,                 // Draw in main plane
			0,                              // Not used to select mode
			0,0,0 };                        // Not used to select mode


	// customize dw_flags
	DWORD dw_flags = PFD_SUPPORT_OPENGL | PFD_GENERIC_ACCELERATED;	// Support accelerated OpenGL calls in window

	if(offScreenRenderer)
		dw_flags |= PFD_DRAW_TO_BITMAP;           // Draw to Bitmap
	else
		dw_flags |= PFD_DRAW_TO_WINDOW;           // Draw to Window (not to bitmap)


	if(doubleBuffer==JNI_TRUE)
		dw_flags |= PFD_DOUBLEBUFFER ;  // Double buffered is optional

	if(stereo==JNI_TRUE)
		dw_flags |= PFD_STEREO ;        // Stereo is optional

	pfd.dwFlags = dw_flags;

    pfd.cColorBits = GetDeviceCaps(hDC, BITSPIXEL);

	if(stencilBits>0)
		pfd.cStencilBits = (BYTE) stencilBits;

	if(verbose==JNI_TRUE)
	{
		fprintf(stderr,"\n\nUSER CHOOSED PIXELFORMAT (TRYING):\n");
		text=GetTextualPixelFormatByPFD(&pfd, 0);			
		fprintf(stderr,text);
	}

    // Choose a pixel format that best matches that described in pfd
    if( hDC == 0 )
	    printf( "SetDCPixelFormat: Error, no HDC-Contex is given\n");
    else
	    nPixelFormat = ChoosePixelFormat(hDC, &pfd);

    if( nPixelFormat == 0 )
	    printf( "SetDCPixelFormat: Error with PixelFormat\n" );

    // Set the pixel format for the device context
    if( SetPixelFormat(hDC, nPixelFormat, &pfd) == FALSE)
	    printf( "setpixel failed\n" );
}


// If necessary, creates a 3-3-2 palette for the device context listed.
static HPALETTE GetOpenGLPalette(HDC hDC)
{
    HPALETTE hRetPal = NULL;	// Handle to palette to be created
    PIXELFORMATDESCRIPTOR pfd;	// Pixel Format Descriptor
    LOGPALETTE *pPal;			// Pointer to memory for logical palette
    int nPixelFormat;			// Pixel format index
    int nColors;				// Number of entries in palette
    int i;						// Counting variable
    BYTE RedRange,GreenRange,BlueRange;
							    // Range for each color entry (7,7,and 3)


    // Get the pixel format index and retrieve the pixel format description
    nPixelFormat = GetPixelFormat(hDC);
    DescribePixelFormat(hDC, nPixelFormat, sizeof(PIXELFORMATDESCRIPTOR), &pfd);

    // Does this pixel format require a palette?  If not, do not create a
    // palette and just return NULL
    if(!(pfd.dwFlags & PFD_NEED_PALETTE))
	    return NULL;

    // Number of entries in palette.  8 bits yeilds 256 entries
    nColors = 1 << pfd.cColorBits;	

    // Allocate space for a logical palette structure plus all the palette entries
    pPal = (LOGPALETTE*)malloc(sizeof(LOGPALETTE) + nColors*sizeof(PALETTEENTRY));

    // Fill in palette header
    pPal->palVersion = 0x300;		// Windows 3.0
    pPal->palNumEntries = nColors; // table size

    // Build mask of all 1's.  This creates a number represented by having
    // the low order x bits set, where x = pfd.cRedBits, pfd.cGreenBits, and
    // pfd.cBlueBits.  
    RedRange = (1 << pfd.cRedBits) -1;
    GreenRange = (1 << pfd.cGreenBits) - 1;
    BlueRange = (1 << pfd.cBlueBits) -1;

    // Loop through all the palette entries
    for(i = 0; i < nColors; i++)
	    {
	    // Fill in the 8-bit equivalents for each component
	    pPal->palPalEntry[i].peRed = (i >> pfd.cRedShift) & RedRange;
	    pPal->palPalEntry[i].peRed = (unsigned char)(
		    (double) pPal->palPalEntry[i].peRed * 255.0 / RedRange);

	    pPal->palPalEntry[i].peGreen = (i >> pfd.cGreenShift) & GreenRange;
	    pPal->palPalEntry[i].peGreen = (unsigned char)(
		    (double)pPal->palPalEntry[i].peGreen * 255.0 / GreenRange);

	    pPal->palPalEntry[i].peBlue = (i >> pfd.cBlueShift) & BlueRange;
	    pPal->palPalEntry[i].peBlue = (unsigned char)(
		    (double)pPal->palPalEntry[i].peBlue * 255.0 / BlueRange);

	    pPal->palPalEntry[i].peFlags = (unsigned char) NULL;
	    }
	    

    // Create the palette
    hRetPal = CreatePalette(pPal);

    // Go ahead and select and realize the palette for this device context
    SelectPalette(hDC,hRetPal,FALSE);
    RealizePalette(hDC);

    // Free the memory used for the logical palette structure
    free(pPal);

    // Return the handle to the new palette
    return hRetPal;
}


JNIEXPORT void JNICALL
Java_gl4java_GLContext_gljResizeNative( JNIEnv *env, jobject obj,
	                                jboolean isOwnWindow,
				        jint disp, jint thisWin,
				        jint width, jint height)
{
}

static jboolean testWin32Java()
{
    jboolean ret=JNI_TRUE;

    /* NON DEPENDENCE CHECKS */

    /* FIRST OF ALL CHECK IF A NATIVE POINTER OR WIN32-TYPE FITS IN ´jint´ */

    if( sizeof(jint) < sizeof(int *) )
    {
        fprintf(stderr,"(int *) fits not in jint\n");
		  ret = JNI_FALSE;
    }

    if( sizeof(jint) < sizeof(HDC) )
    {
        fprintf(stderr,"HDC fits not in jint\n");
        ret = JNI_FALSE;
    }

    if( sizeof(jint) < sizeof(HGLRC) )
    {
        fprintf(stderr,"HGLRC fits not in jint\n");
        ret = JNI_FALSE;
    }

    if(ret==JNI_FALSE)
    {
			fflush(stderr);
    }

    return ret;
}


static void
PrintMessage( const char *Format, ... )
{
    va_list ArgList;
    char Buffer[256];

    va_start(ArgList, Format);
    vsprintf(Buffer, Format, ArgList);
    va_end(ArgList);

	fprintf(stderr, Buffer);
}


static int
PixelFormatDescriptorFromDc( HDC Dc, PIXELFORMATDESCRIPTOR *Pfd )
{
    int PfdIndex;

    if ( 0 < (PfdIndex = GetPixelFormat( Dc )) )
    {
        if ( 0 < DescribePixelFormat( Dc, PfdIndex, sizeof(*Pfd), Pfd ) )
        {
            return(PfdIndex);
        }
        else
        {
            PrintMessage("Could not get a description of pixel format %d\n",
                PfdIndex );
        }
    }
    else
    {
        PrintMessage("Could not get pixel format for Dc 0x%08lX\n", Dc );
    }
    return( 0 );
}


static const char * GetTextualPixelFormatByPFD(PIXELFORMATDESCRIPTOR *ppfd, int format)
{
	static char buffer[2000];
	char line[200];

    sprintf(buffer,"Pixel format %d\n", format);
    sprintf(line,"  dwFlags - 0x%x\n", ppfd->dwFlags); 
	if (ppfd->dwFlags & PFD_DOUBLEBUFFER) { strcat(buffer, line); sprintf(line,"\tPFD_DOUBLEBUFFER\n "); }
	if (ppfd->dwFlags & PFD_STEREO) { strcat(buffer, line); sprintf(line,"\tPFD_STEREO\n "); }
	if (ppfd->dwFlags & PFD_DRAW_TO_WINDOW) { strcat(buffer, line); sprintf(line,"\tPFD_DRAW_TO_WINDOW\n "); }
    if (ppfd->dwFlags & PFD_DRAW_TO_BITMAP) { strcat(buffer, line); sprintf(line,"\tPFD_DRAW_TO_BITMAP\n "); }
    if (ppfd->dwFlags & PFD_SUPPORT_GDI) { strcat(buffer, line); sprintf(line,"\tPFD_SUPPORT_GDI\n "); }
    if (ppfd->dwFlags & PFD_SUPPORT_OPENGL) { strcat(buffer, line); sprintf(line,"\tPFD_SUPPORT_OPENGL\n "); }
    if (ppfd->dwFlags & PFD_GENERIC_ACCELERATED) { strcat(buffer, line); sprintf(line,"\tPFD_GENERIC_ACCELERATED\n "); }
    if (ppfd->dwFlags & PFD_GENERIC_FORMAT) { strcat(buffer, line); sprintf(line,"\tPFD_GENERIC_FORMAT\n "); }
    if (ppfd->dwFlags & PFD_NEED_PALETTE) { strcat(buffer, line); sprintf(line,"\tPFD_NEED_PALETTE\n "); }
    if (ppfd->dwFlags & PFD_NEED_SYSTEM_PALETTE) { strcat(buffer, line); sprintf(line,"\tPFD_NEED_SYSTEM_PALETTE\n "); }
    strcat(buffer, line); sprintf(line,"\n");
    strcat(buffer, line); sprintf(line,"  iPixelType - %d\n", ppfd->iPixelType); 
    if (ppfd->iPixelType == PFD_TYPE_RGBA) { strcat(buffer, line); sprintf(line,"\tPGD_TYPE_RGBA\n"); }
    if (ppfd->iPixelType == PFD_TYPE_COLORINDEX) { strcat(buffer, line); sprintf(line,"\tPGD_TYPE_COLORINDEX\n"); }
    strcat(buffer, line); sprintf(line,"  cColorBits - %d\n", ppfd->cColorBits);
    strcat(buffer, line); sprintf(line,"  cRedBits - %d\n", ppfd->cRedBits);
    strcat(buffer, line); sprintf(line,"  cRedShift - %d\n", ppfd->cRedShift);
    strcat(buffer, line); sprintf(line,"  cGreenBits - %d\n", ppfd->cGreenBits);
    strcat(buffer, line); sprintf(line,"  cGreenShift - %d\n", ppfd->cGreenShift);
    strcat(buffer, line); sprintf(line,"  cBlueBits - %d\n", ppfd->cBlueBits);
    strcat(buffer, line); sprintf(line,"  cBlueShift - %d\n", ppfd->cBlueShift);
    strcat(buffer, line); sprintf(line,"  cAlphaBits - %d\n", ppfd->cAlphaBits);
    strcat(buffer, line); sprintf(line,"  cAlphaShift - 0x%x\n", ppfd->cAlphaShift);
    strcat(buffer, line); sprintf(line,"  cAccumBits - %d\n", ppfd->cAccumBits);
    strcat(buffer, line); sprintf(line,"  cAccumRedBits - %d\n", ppfd->cAccumRedBits);
    strcat(buffer, line); sprintf(line,"  cAccumGreenBits - %d\n", ppfd->cAccumGreenBits);
    strcat(buffer, line); sprintf(line,"  cAccumBlueBits - %d\n", ppfd->cAccumBlueBits);
    strcat(buffer, line); sprintf(line,"  cAccumAlphaBits - %d\n", ppfd->cAccumAlphaBits);
    strcat(buffer, line); sprintf(line,"  cDepthBits - %d\n", ppfd->cDepthBits);
    strcat(buffer, line); sprintf(line,"  cStencilBits - %d\n", ppfd->cStencilBits);
    strcat(buffer, line); sprintf(line,"  cAuxBuffers - %d\n", ppfd->cAuxBuffers);
    strcat(buffer, line); sprintf(line,"  iLayerType - %d\n", ppfd->iLayerType);
    strcat(buffer, line); sprintf(line,"  bReserved - %d\n", ppfd->bReserved);
    strcat(buffer, line); sprintf(line,"  dwLayerMask - 0x%x\n", ppfd->dwLayerMask);
    strcat(buffer, line); sprintf(line,"  dwVisibleMask - 0x%x\n", ppfd->dwVisibleMask);
    strcat(buffer, line); sprintf(line,"  dwDamageMask - 0x%x\n", ppfd->dwDamageMask);
	strcat(buffer, line); 
	return buffer;
}

static const char * GetTextualPixelFormatByHDC(HDC hdc)
{
    PIXELFORMATDESCRIPTOR pfd, *ppfd;
    int format;

    ppfd   = &pfd;
    format = PixelFormatDescriptorFromDc( hdc, ppfd );

	return GetTextualPixelFormatByPFD(ppfd, format);
}

/*****************************************************************/

/* Struct used to manage color ramps */
struct colorIndexState {
    GLfloat amb[3];	/* ambient color / bottom of ramp */
    GLfloat diff[3];	/* diffuse color / middle of ramp */
    GLfloat spec[3];	/* specular color / top of ramp */
    GLfloat ratio;	/* ratio of diffuse to specular in ramp */
    GLint indexes[3];	/* where ramp was placed in palette */
};
#define NUM_COLORS (sizeof(colors) / sizeof(colors[0]))
struct colorIndexState colors[] = {
    {
        { 0.0F, 0.0F, 0.0F },
        { 0.1F, 0.6F, 0.3F },
        { 1.0F, 1.0F, 1.0F },
        0.75F, { 0, 0, 0 },
    },
    {
        { 0.0F, 0.0F, 0.0F },
        { 0.0F, 0.2F, 0.5F },
        { 1.0F, 1.0F, 1.0F },
        0.75F, { 0, 0, 0 },
    },
    {
        { 0.0F, 0.05F, 0.05F },
        { 0.6F, 0.0F, 0.8F },
        { 1.0F, 1.0F, 1.0F },
        0.75F, { 0, 0, 0 },
    },
};


static void
setupDIB(HDC hDCOrig, HDC hDC, HBITMAP * hBitmap, int width, int height)
{
    BITMAPINFO *bmInfo;
    BITMAPINFOHEADER *bmHeader;
    UINT usage;
    VOID *base;
    int bmiSize;
    int bitsPerPixel;
	HBITMAP hOldBitmap=0;

    bmiSize = sizeof(*bmInfo);
    bitsPerPixel = GetDeviceCaps(hDC, BITSPIXEL);

    switch (bitsPerPixel) {
    case 8:
	// bmiColors is 256 WORD palette indices 
	bmiSize += (256 * sizeof(WORD)) - sizeof(RGBQUAD);
	break;
    case 16:
	// bmiColors is 3 WORD component masks 
	bmiSize += (3 * sizeof(DWORD)) - sizeof(RGBQUAD);
	break;
    case 24:
    case 32:
    default:
	// bmiColors not used 
	break;
    }

    bmInfo = (BITMAPINFO *) calloc(1, bmiSize);
    bmHeader = &bmInfo->bmiHeader;

    bmHeader->biSize = sizeof(*bmHeader);
    bmHeader->biWidth = width;
    bmHeader->biHeight = height;
    bmHeader->biPlanes = 1;			// must be 1 
    bmHeader->biBitCount = bitsPerPixel;
    bmHeader->biXPelsPerMeter = 0;
    bmHeader->biYPelsPerMeter = 0;
    bmHeader->biClrUsed = 0;			// all are used 
    bmHeader->biClrImportant = 0;		// all are important 

    switch (bitsPerPixel) {
    case 8:
	bmHeader->biCompression = BI_RGB;
	bmHeader->biSizeImage = 0;
	usage = DIB_PAL_COLORS;
	// bmiColors is 256 WORD palette indices 
	{
	    WORD *palIndex = (WORD *) &bmInfo->bmiColors[0];
	    int i;

	    for (i=0; i<256; i++) {
		palIndex[i] = i;
	    }
	}
	break;
    case 16:
	bmHeader->biCompression = BI_RGB;
	bmHeader->biSizeImage = 0;
	usage = DIB_RGB_COLORS;
	// bmiColors is 3 WORD component masks 
	{
	    DWORD *compMask = (DWORD *) &bmInfo->bmiColors[0];

	    compMask[0] = 0xF800;
	    compMask[1] = 0x07E0;
	    compMask[2] = 0x001F;
	}
	break;
    case 24:
    case 32:
    default:
	bmHeader->biCompression = BI_RGB;
	bmHeader->biSizeImage = 0;
	usage = DIB_RGB_COLORS;
	// bmiColors not used 
	break;
    }

    *hBitmap = CreateDIBSection(hDC, bmInfo, usage, &base, NULL, 0);
    if (*hBitmap == NULL) {
	(void) MessageBox(WindowFromDC(hDC),
		"Failed to create DIBSection.",
		"OpenGL application error",
		MB_ICONERROR | MB_OK);
	exit(1);
    }

    hOldBitmap = SelectObject(hDC, *hBitmap);
	if(hOldBitmap!=0)
		DeleteObject(hOldBitmap);

    free(bmInfo);
}


/*
static void
setupDIB(HDC hDCOrig, HDC hDC, HBITMAP * hBitmap, int width, int height)
{
	HBITMAP hOldBitmap=0;

	*hBitmap = CreateCompatibleBitmap(  hDCOrig, width, height );
    if (*hBitmap == NULL) {
        fprintf(stderr,"Failed to create CreateCompatibleBitmap! \n");
		fflush(stderr);
		return;
    }

    hOldBitmap = SelectObject(hDC, *hBitmap);
	if(hOldBitmap!=0)
		DeleteObject(hOldBitmap);
}
*/


static void resizeDIB(HDC hDC, HBITMAP *hOldBitmap, HBITMAP *hBitmap)
{
	/*
    SelectObject(hDC, *hOldBitmap);
    DeleteObject(*hBitmap);
    setupDIB(hDC, hBitmap);
	*/
}

static void setupPalette(HDC hDC)
{
    PIXELFORMATDESCRIPTOR pfd;
    LOGPALETTE* pPal;
    int pixelFormat = GetPixelFormat(hDC);
    int paletteSize;

    DescribePixelFormat(hDC, pixelFormat, sizeof(PIXELFORMATDESCRIPTOR), &pfd);

    /*
    ** Determine if a palette is needed and if so what size.
    */
    if (pfd.dwFlags & PFD_NEED_PALETTE) {
	paletteSize = 1 << pfd.cColorBits;
    } else if (pfd.iPixelType == PFD_TYPE_COLORINDEX) {
	paletteSize = 4096;
    } else {
	return;
    }

    pPal = (LOGPALETTE*)
	malloc(sizeof(LOGPALETTE) + paletteSize * sizeof(PALETTEENTRY));
    pPal->palVersion = 0x300;
    pPal->palNumEntries = paletteSize;

    if (pfd.iPixelType == PFD_TYPE_RGBA) {
	/*
	** Fill the logical paletee with RGB color ramps
	*/
	int redMask = (1 << pfd.cRedBits) - 1;
	int greenMask = (1 << pfd.cGreenBits) - 1;
	int blueMask = (1 << pfd.cBlueBits) - 1;
	int i;

	for (i=0; i<paletteSize; ++i) {
	    pPal->palPalEntry[i].peRed =
		    (((i >> pfd.cRedShift) & redMask) * 255) / redMask;
	    pPal->palPalEntry[i].peGreen =
		    (((i >> pfd.cGreenShift) & greenMask) * 255) / greenMask;
	    pPal->palPalEntry[i].peBlue =
		    (((i >> pfd.cBlueShift) & blueMask) * 255) / blueMask;
	    pPal->palPalEntry[i].peFlags = 0;
	}
    } else {
	/*
	** Fill the logical palette with color ramps.
	**
	** Set up the logical palette so that it can be realized
	** into the system palette as an identity palette.
	**
	** 1) The default static entries should be present and at the right
	**    location.  The easiest way to do this is to grab them from
	**    the current system palette.
	**
	** 2) All non-static entries should be initialized to unique values.
	**    The easiest way to do this is to ensure that all of the non-static
	**    entries have the PC_NOCOLLAPSE flag bit set.
	*/
	int numRamps = NUM_COLORS;
	int rampSize = (paletteSize - 20) / numRamps;
	int extra = (paletteSize - 20) - (numRamps * rampSize);
	int i, r;

	/*
	** Initialize static entries by copying them from the
	** current system palette.
	*/
	GetSystemPaletteEntries(hDC, 0, paletteSize, &pPal->palPalEntry[0]);

	/*
	** Fill in non-static entries with desired colors.
	*/
	for (r=0; r<numRamps; ++r) {
	    int rampBase = r * rampSize + 10;
	    PALETTEENTRY *pe = &pPal->palPalEntry[rampBase];
	    int diffSize = (int) (rampSize * colors[r].ratio);
	    int specSize = rampSize - diffSize;

	    for (i=0; i<rampSize; ++i) {
		GLfloat *c0, *c1;
		GLint a;

		if (i < diffSize) {
		    c0 = colors[r].amb;
		    c1 = colors[r].diff;
		    a = (i * 255) / (diffSize - 1);
		} else {
		    c0 = colors[r].diff;
		    c1 = colors[r].spec;
		    a = ((i - diffSize) * 255) / (specSize - 1);
		}

		pe[i].peRed = (BYTE) (a * (c1[0] - c0[0]) + 255 * c0[0]);
		pe[i].peGreen = (BYTE) (a * (c1[1] - c0[1]) + 255 * c0[1]);
		pe[i].peBlue = (BYTE) (a * (c1[2] - c0[2]) + 255 * c0[2]);
		pe[i].peFlags = PC_NOCOLLAPSE;
	    }

	    colors[r].indexes[0] = rampBase;
	    colors[r].indexes[1] = rampBase + (diffSize-1);
	    colors[r].indexes[2] = rampBase + (rampSize-1);
	}

	/*
	** Initialize any remaining non-static entries.
	*/
	for (i=0; i<extra; ++i) {
	    int index = numRamps*rampSize+10+i;
	    PALETTEENTRY *pe = &pPal->palPalEntry[index];

	    pe->peRed = (BYTE) 0;
	    pe->peGreen = (BYTE) 0;
	    pe->peBlue = (BYTE) 0;
	    pe->peFlags = PC_NOCOLLAPSE;
	}
    }

    hPalette = CreatePalette(pPal);
    free(pPal);

    if (hPalette) {
	SelectPalette(hDC, hPalette, FALSE);
	RealizePalette(hDC);
    }
}


