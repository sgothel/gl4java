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

/* 
 * need to include the JAVA internal header files for macros and function
 * prototypes required to maipulated JAVA data structures and functions
 *
 * StubPreamble.h includes the structure and macro definitions neede to
 * convert JAVA data structures into C data structures.
 *
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


/*
 * STATIC FLAGS FOR gl4java behavior ...
 */
static jboolean verbose = JNI_FALSE;

/*
 * prototypes for functions local to this file scope
 */
static int get_GC( Display *display, Window win, XVisualInfo *visual,
                   GLXContext *gc, GLXContext gc_share);

typedef struct {
	XVisualInfo * visual;
        GLXContext    gc;
	int           success;  /* 1: OK, 0: ERROR */
} VisualGC;

static VisualGC findVisualGlX( Display *display, 
			       Window rootWin,
			       Window * pWin, 
			       int width, int height,
                               jboolean doubleBuffer, 
                               jboolean stereoView,
			       jboolean rgba,
			       jint stencilBits,
			       jint accumSize,
			       jboolean * pOwnWin,
			       GLXContext shareWith,
			       jboolean offscreen,
			       Pixmap *pix
			     );

static void printVisualInfo ( Display *display, XVisualInfo * vi);
static void printAllVisualInfo ( Display *disp, Window win);

static int testVisualInfo ( Display *display, XVisualInfo * vi, 
		            int dblBuffer, int stereoView, int rgbaMode, 
			    int stencilSize, int accumSize);

static XVisualInfo * findVisualIdByFeature( XVisualInfo ** visualList, 
                                  Display *disp, Window win,
	                          int dblBuffer, int stereoView, int rgbaMode, 
		                  int stencilSize, int accumSize);

/* testJavaGLTypes does important implementation plattformspecific checks:
 *
 * o do fit the JNI <-> GL Variables-Type Mapping 
 * o IF ERROR OR VERBOSE -> DUMP JNI,GL Type-Length
 */
jboolean testJavaGLTypes(jboolean verbose);

/* testX11Java does important implementation plattformspecific checks:
 *
 * o do fit X11-Vars in jint (because GLFrame stores 'em like that)
 */
static jboolean testX11Java();

static int x11gl_myErrorHandler(Display *pDisp, XErrorEvent *p_error)
{
	char err_msg[80];

	XGetErrorText(pDisp, p_error->error_code, err_msg, 80);
	fprintf(stderr, "X11 Error detected.\n %s\n", err_msg);
	fprintf(stderr, " Protocol request: %d\n", p_error->request_code);
	fprintf(stderr, " Resource ID : 0x%x\n", (int)p_error->resourceid);
	fprintf(stderr, " \ntrying to continue ... \n");
	fflush(stderr);
	return 0;
}

static int x11gl_myIOErrorHandler(Display *pDisp)
{
	fprintf(stderr, "X11 I/O Error detected.\n");
	fprintf(stderr, " \ndo not know what to do ... \n");
	fflush(stderr);
	return 0;
}

static Window createOwnOverlayWin(Display *display, Window rootwini, Window parentWin,
                                  XVisualInfo *visual, int width, int height)
{				  
  /*
  //------------------------------------------------------------------------//
  // Some Systems (SGI) wont give up the window and so we have to create a  //
  // window that fits on top of the Java Canvas.                            //
  //------------------------------------------------------------------------//
  */
  Window window=0;
  XSetWindowAttributes   attribs ;

  /*
    //----------------------------------------------------------------------//
    // now we have the visual with the best depth so lets make a color map  //
    // for it.  we use allocnone because this is a true colour visual and   //
    // the color map is read only anyway. This must be done because we      //
    // cannot call XCreateSimpleWindow.                                     // 
    //----------------------------------------------------------------------//
  */
    int cmap = XCreateColormap ( display
                               , rootwini
                               , visual->visual
                               , AllocNone 
                               );

  /*
    //----------------------------------------------------------------------//
    // Set up the window attributes.                                        //
    //----------------------------------------------------------------------//
  */
    attribs.event_mask       = ExposureMask                              ;
    attribs.border_pixel     = BlackPixel(display, DefaultScreen(display)) ;
    attribs.colormap         = cmap                                        ;
    attribs.bit_gravity      = SouthWestGravity ;                          ;
    attribs.background_pixel = 0xFF00FFFF                                  ;  
   
  /*
    //----------------------------------------------------------------------//
    // Create a window.                                                     //
    //----------------------------------------------------------------------//
  */
    window = XCreateWindow( display
                          , parentWin  
                          , 0
                          , 0
                          , width
                          , height
                          , 0
                          , visual->depth
                          , InputOutput
                          , visual->visual
                          , CWBitGravity  | CWColormap 
                          | CWBorderPixel | CWBackPixel
                          , &attribs);
    
    return window;
}


static void printVisualInfo ( Display *display, XVisualInfo * vi)
{
    int dblBuffer, stereoView, rgbaMode, stencilSize;
    int accumRedSize, accumGreenSize, accumBlueSize, accumAlphaSize;

    fprintf(stderr, "\nvi(ID:%d(0x%X)): \n screen %d, depth %d, class %d,\n clrmapsz %d, bitsPerRGB %d\n",
	(int) vi->visualid,
	(int) vi->visualid,
	(int) vi->screen,
	(int) vi->depth,
	(int) vi->class,
	(int) vi->colormap_size,
	(int) vi->bits_per_rgb );

    glXGetConfig( display, vi, GLX_DOUBLEBUFFER, &dblBuffer);
    glXGetConfig( display, vi, GLX_STEREO, &stereoView);
    glXGetConfig( display, vi, GLX_RGBA, &rgbaMode);
    glXGetConfig( display, vi, GLX_STENCIL_SIZE, &stencilSize);
    glXGetConfig( display, vi, GLX_ACCUM_RED_SIZE, &accumRedSize);
    glXGetConfig( display, vi, GLX_ACCUM_GREEN_SIZE, &accumGreenSize);
    glXGetConfig( display, vi, GLX_ACCUM_BLUE_SIZE, &accumBlueSize);
    glXGetConfig( display, vi, GLX_ACCUM_ALPHA_SIZE, &accumAlphaSize);

    fprintf(stderr, "\t doubleBuff: %d, ", dblBuffer);
    fprintf(stderr, " stereo: %d, ", stereoView);
    fprintf(stderr, " rgba: %d, ", rgbaMode);
    fprintf(stderr, " stencilSize: %d !\n", stencilSize);
    fprintf(stderr, "\t red accum: %d, ", accumRedSize);
    fprintf(stderr, " green accum: %d, ", accumGreenSize);
    fprintf(stderr, " blue accum: %d, ", accumBlueSize);
    fprintf(stderr, " alpha accum: %d !\n", accumAlphaSize);

    fflush(stderr);
}

static void printAllVisualInfo ( Display *disp, Window win)
{
    XVisualInfo    *	visualInfo=0;    
    XVisualInfo    *    vi=0;
    XVisualInfo    	viTemplate;
    int 		i, numReturns;
    XWindowAttributes 	xwa;

    if(XGetWindowAttributes(disp, win, &xwa) == 0)
    {
	fprintf(stderr, "\nERROR while fetching XWindowAttributes\n");
	fflush(stderr);
	return;
    }

    viTemplate.screen = DefaultScreen( disp );
    viTemplate.class = (xwa.visual)->class ;
    viTemplate.depth = xwa.depth;

    visualInfo = XGetVisualInfo( disp, VisualScreenMask,
	&viTemplate, &numReturns ); 

    if(JNI_TRUE==verbose)
    {
	    fprintf(stderr, "\nNum of Visuals : %d\n", numReturns );

	    for(i=0; i<numReturns; i++)
	    {
	    	    vi = &(visualInfo[i]);
		    printVisualInfo ( disp, vi);
	    }
    }

    XFree(visualInfo); 	
}

static int testVisualInfo ( Display *display, XVisualInfo * vi, 
		            int dblBuffer, int stereoView, int rgbaMode, 
			    int stencilSize, int accumSize)
{
    int glxCfg;

    glXGetConfig( display, vi, GLX_DOUBLEBUFFER, &glxCfg);
    if(glxCfg<dblBuffer) return 0;

    glXGetConfig( display, vi, GLX_STEREO, &glxCfg);
    if(glxCfg<stereoView) return 0;

    glXGetConfig( display, vi, GLX_RGBA, &glxCfg);
    if(glxCfg<rgbaMode) return 0;

    glXGetConfig( display, vi, GLX_STENCIL_SIZE, &glxCfg);
    if(glxCfg<stencilSize) return 0;

    glXGetConfig(display, vi, GLX_ACCUM_RED_SIZE, &glxCfg);
    if(glxCfg<accumSize) return 0;

    glXGetConfig(display, vi, GLX_ACCUM_GREEN_SIZE, &glxCfg);
    if(glxCfg<accumSize) return 0;

    glXGetConfig(display, vi, GLX_ACCUM_BLUE_SIZE, &glxCfg);
    if(glxCfg<accumSize) return 0;

    if(rgbaMode>0) {
	    glXGetConfig(display, vi, GLX_ACCUM_ALPHA_SIZE, &glxCfg);
	    if(glxCfg<accumSize) return 0;
    }

    return 1;
}


static XVisualInfo * findVisualIdByFeature( XVisualInfo ** visualList, 
                                  Display *disp, Window win,
	                          int dblBuffer, int stereoView, int rgbaMode, 
		                  int stencilSize, int accumSize)
{
    XVisualInfo    *    vi=0;
    XVisualInfo    	viTemplate;
    int 		i, numReturns;
    XWindowAttributes 	xwa;
    int 		done=0;

    if(XGetWindowAttributes(disp, win, &xwa) == 0)
    {
	fprintf(stderr, "\nERROR while fetching XWindowAttributes\n");
	fflush(stderr);
	return 0;
    }

    viTemplate.screen = DefaultScreen( disp );
    viTemplate.class = (xwa.visual)->class ;
    viTemplate.depth = xwa.depth;

    *visualList = XGetVisualInfo( disp, VisualScreenMask,
	                          &viTemplate, &numReturns ); 

    for(i=0; done==0 && i<numReturns; i++)
    {
        vi = &((*visualList)[i]);
	if ( testVisualInfo ( disp, vi, dblBuffer, stereoView, rgbaMode, 
			      stencilSize, accumSize) )
	{
                if(JNI_TRUE==verbose)
		{
		    fprintf(stderr, "findVisualIdByFeature: Found matching Visual:\n");
		    printVisualInfo ( disp, vi);
		}
		return vi;
	}
    }

    if(JNI_TRUE==verbose)
    {
	    if( numReturns==0 )
		fprintf(stderr, "findVisualIdByFeature: No available visuals. Exiting...\n" );
	    else if( i>=numReturns )
		fprintf(stderr, "findVisualIdByFeature: No matching visual found ...\n" );
	    fflush(stderr);
    }
     
    XFree(*visualList);
    *visualList=NULL;
    return NULL;
}

/**
 * Description for pWin:
 *   if ownwin:
 *      input: 	the parent window
 *      output: the newly created window
 *   else if ! ownwin:
 *      i/o:    the window itself
 */
static VisualGC findVisualGlX( Display *display, 
			       Window rootWin,
			       Window * pWin, 
			       int width, int height,
                               jboolean doubleBuffer, 
                               jboolean stereoView,
			       jboolean rgba,
			       jint stencilBits,
			       jint accumSize,
			       jboolean * pOwnWin,
			       GLXContext shareWith,
			       jboolean offscreen,
			       Pixmap *pix
			     )
{
    Window newWin = 0;
    int visualAttribList[32];
    int i=0;
    int j=0;
    int done=0;
    VisualGC vgc = { NULL, 0, 0 };
    jboolean tryChooseVisual = JNI_TRUE;
    int gc_ret = 0;

    /** 
     * The Visual seeked by Function: findVisualIdByFeature !
     */
    XVisualInfo * visualList=NULL; /* the visual list, to be XFree-ed */

    /* backup variables ... */
    jboolean 	_rgba=rgba;
    jint 	_stencilBits=stencilBits;
    jint 	_accumSize=accumSize;
    jboolean 	_stereoView=stereoView;
    jboolean 	_doubleBuffer=doubleBuffer;

    do {
            if(JNI_TRUE==verbose)
	    {
	         fprintf(stderr, "GL4Java: seeking visual loop# %d\n", j);
	    }

            i=0;
	    visualAttribList[i++] = GLX_RED_SIZE;
	    visualAttribList[i++] = 1;
	    visualAttribList[i++] = GLX_GREEN_SIZE;
	    visualAttribList[i++] = 1;
	    visualAttribList[i++] = GLX_BLUE_SIZE;
	    visualAttribList[i++] = 1;
	    visualAttribList[i++] = GLX_DEPTH_SIZE;
	    visualAttribList[i++] = 1;
	    visualAttribList[i++] = GLX_ACCUM_RED_SIZE;
	    visualAttribList[i++] = accumSize;
	    visualAttribList[i++] = GLX_ACCUM_GREEN_SIZE;
	    visualAttribList[i++] = accumSize;
	    visualAttribList[i++] = GLX_ACCUM_BLUE_SIZE;
	    visualAttribList[i++] = accumSize;

	    if(JNI_TRUE==rgba)
	    {
		    visualAttribList[i++] = GLX_RGBA;
		    visualAttribList[i++] = GLX_ACCUM_ALPHA_SIZE;
		    visualAttribList[i++] = accumSize;
	    }
	    if(JNI_TRUE==doubleBuffer)
		    visualAttribList[i++] = GLX_DOUBLEBUFFER;
	    if(JNI_TRUE==stereoView)
		    visualAttribList[i++] = GLX_STEREO;
	    visualAttribList[i++] = GLX_STENCIL_SIZE;
	    visualAttribList[i++] = (int)stencilBits;
	    visualAttribList[i] = None;

            if(tryChooseVisual==JNI_TRUE && vgc.visual==NULL)
	    {
		    vgc.visual = glXChooseVisual( display,
						  DefaultScreen( display ),
						  visualAttribList );
		    if(JNI_TRUE==verbose)
		    {
			if(vgc.visual!=NULL)
			{
			    fprintf(stderr, "glXChooseVisual: test visual(ID:%d(0x%X)):\n", 
				(int) vgc.visual->visualid,
				(int) vgc.visual->visualid);
			    printVisualInfo ( display, vgc.visual);
			} else
			    fprintf(stderr, "glXChooseVisual: no visual\n");
			fflush(stderr);
		    }
	    }

	    if(vgc.visual==NULL)
	    {
	        vgc.visual = findVisualIdByFeature( &visualList, 
				                      display, *pWin,
	                                              doubleBuffer, stereoView,
	                                              rgba, 
						      stencilBits, 
						      accumSize);
	    }

	    if(vgc.visual==NULL)
	    {
	        vgc.visual = findVisualIdByFeature( &visualList, 
				                      display, *pWin,
	                                              doubleBuffer, stereoView,
	                                              rgba, 
						      stencilBits>0, 
						      accumSize>0);
            }

	    if( *pOwnWin == JNI_TRUE && vgc.visual!=NULL)
	    {
		newWin = createOwnOverlayWin(display, 
					     rootWin, 
					     *pWin /* the parent */,
					     vgc.visual, width, height);
	    }

	    if( offscreen==JNI_TRUE && vgc.visual!=NULL)
	    {
	        if(*pix!=0)
		{
			XFreePixmap(display, *pix);
		}
		if(vgc.visual !=NULL)
	    		*pix = XCreatePixmap( display, rootWin, width, height, 
		                              vgc.visual->depth); 
		if(*pix!=0)
		{
	           *pWin = glXCreateGLXPixmap( display,  vgc.visual, *pix );
		   if(*pWin==0)
		   {
		   	XFreePixmap(display, *pix);
			*pix=0;
			fprintf(stderr, "GL4Java(%d): glXCreateGLXPixmap failed\n", j);
			fflush(stderr);
		   }
		} else {
		   fprintf(stderr, "GL4Java(%d): XCreatePixmap failed\n", j);
		   fflush(stderr);
		   *pWin = 0;
		}
                if(JNI_TRUE==verbose)
		{
			if(*pWin!=0)
			{
			   fprintf(stderr, "GL4Java(%d): pixmap ok\n", j);
			   fflush(stderr);
			}
		}
	    }

	    gc_ret = -100;

	    if( *pOwnWin == JNI_TRUE && newWin!=0 &&
	        (gc_ret=get_GC( display, newWin,
			        vgc.visual, &(vgc.gc), shareWith)) == 0
              )
	    {
		    vgc.success=1;
		    *pWin = newWin ;
	    }
	    else if( vgc.visual!=NULL &&  *pOwnWin == JNI_FALSE && *pWin!=0 &&
	             (gc_ret=get_GC( display, *pWin,
			             vgc.visual, &(vgc.gc), shareWith)) == 0
	           )    
	    {
		    vgc.success=1;
            } else 
	    {
	    	    j++; /* trial counter */
		    if(JNI_TRUE==verbose)
		    {
		        fprintf(stderr, "GL4Java(%d): Visual fetching failed (gc_get=%d)\n", j, gc_ret);
			fflush(stderr);
		    }

		    if(*pix!=0)
		    {
		   	XFreePixmap(display, *pix);
			*pix=0;
		    }

		    if(visualList!=NULL)
		    {
			XFree(visualList);
			visualList=NULL;
	    		vgc.visual=NULL;
		    } else if(vgc.visual!=NULL)
		    {
			XFree(vgc.visual);
	    		vgc.visual=NULL;
		    }

		    /* Fall-Back ... */
		    if(*pOwnWin==JNI_FALSE && offscreen==JNI_FALSE) {
			rgba=_rgba;
			stencilBits=_stencilBits;
			accumSize=_accumSize;
			stereoView=_stereoView;
			doubleBuffer=_doubleBuffer;
			*pOwnWin=JNI_TRUE;
		    } else if(accumSize>0 && offscreen==JNI_TRUE) {
		        accumSize=0;
		    } else if(doubleBuffer==JNI_FALSE && offscreen==JNI_TRUE) {
		        doubleBuffer=JNI_TRUE;
		    } else if(stencilBits>0) {
		        stencilBits=0;
		    } else if(stereoView==JNI_TRUE) {
			stereoView=JNI_FALSE;
		    } else if(rgba==JNI_TRUE) {
			rgba=JNI_FALSE;
		    } else if(doubleBuffer==JNI_TRUE) {
			doubleBuffer=JNI_FALSE;
		    } else if(tryChooseVisual==JNI_TRUE) {
			rgba=_rgba;
			stencilBits=_stencilBits;
			accumSize=_accumSize;
			stereoView=_stereoView;
			doubleBuffer=_doubleBuffer;
			*pOwnWin=JNI_FALSE;
			tryChooseVisual=JNI_FALSE;
		    } else done=1;
	    }
    } while (vgc.success==0 && done==0) ;

    if(vgc.success==1 && JNI_TRUE==verbose)
    {
	    fprintf(stderr, "\nfindVisualGlX vi(ID:%d): \n screen %d, depth %d, class %d,\n clrmapsz %d, bitsPerRGB %d, shared with %d\n",
		(int)vgc.visual->visualid,
		(int)vgc.visual->screen,
		(int)vgc.visual->depth,
		(int)vgc.visual->class,
		(int)vgc.visual->colormap_size,
		(int)vgc.visual->bits_per_rgb,
		(int)shareWith);
	    printVisualInfo ( display, vgc.visual);
    }

    return vgc;
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
Java_gl4java_GLContext_openOpenGLNative( JNIEnv *env, jobject obj )
{
    int screen = 0;

    /* found matching visual and gc */
    VisualGC vgc = { NULL, 0, 0 };

    jboolean ret = JNI_TRUE;

    jclass cls = 0;
    jfieldID fdisplayHandle=0, fwindowHandle=0, fpixmapHandle=0;
    jfieldID fverbose=0;
    jfieldID fglContext=0;
    jfieldID fstereoView=0, frgba=0, fstencilBits=0, 
             faccumSize=0, fownwind=0;
    jfieldID fdoubleBuffer=0, foffScreenRenderer;

    jfieldID fcreatewinw = 0, fcreatewinh = 0;
    jfieldID fshareWith = 0;
    jboolean joffScreenRenderer=JNI_FALSE;
    jboolean jdoubleBuffer=JNI_TRUE;
    jboolean jstereoView=JNI_FALSE;
    jboolean jrgba=JNI_TRUE;
    jint jstencilBits=0;
    jint jaccumSize=0;
    jboolean jownwind = JNI_FALSE ;
    jint jcreatewinw = 0, jcreatewinh = 0;
    jint jshareWith = 0;

    /* these variables will be mapped in the java-object ! */
    Window thisWin=0;
    Display * display = 0;
    Window rootwini  = 0;
    Pixmap pix;

    int iValue, iValue1, iValue2, iValue3;

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

    /* FIRST OF ALL CHECK IF A NATIVE POINTER OR X11-TYPE FITS IN ´jint´ */
    ret = testX11Java();
    ret = testJavaGLTypes(verbose);

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
	    frgba = (*env)->GetFieldID(env, cls, "rgba", "Z");
	    if (frgba == 0) ret= JNI_FALSE;
	    else jrgba =(*env)->GetBooleanField(env, obj, frgba);
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
	    fownwind = (*env)->GetFieldID(env, cls, "createOwnWindow", "Z");
	    if (fownwind == 0) ret= JNI_FALSE;
	    else jownwind =(*env)->GetBooleanField(env, obj, fownwind);
    }

    if(ret==JNI_TRUE) {
	    fshareWith = (*env)->GetFieldID(env, cls, "sharedGLContextNative", "I");
	    if (fshareWith == 0) ret= JNI_FALSE;
	    else jshareWith =(*env)->GetIntField(env, obj, fshareWith);
    }


    if(ret==JNI_TRUE) {
	    fwindowHandle = (*env)->GetFieldID(env, cls, "windowHandle", "I");
	    if (fwindowHandle == 0) ret= JNI_FALSE;
	    else thisWin =(Window) (*env)->GetIntField(env, obj, fwindowHandle);
    }

    if(ret==JNI_TRUE) {
	    fpixmapHandle = (*env)->GetFieldID(env, cls, "pixmapHandle", "I");
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
	fprintf(stderr,"\nGL4Java:  (JAVA FOUND WINDOW HANDLE %d == 0x%x)\n", 
	    (int)thisWin, (int)thisWin);
	if(joffScreenRenderer==JNI_TRUE)
	{
	  fprintf(stderr,"\nGL4Java:  (USING OFFSCREEN GLPIXMAP BUFFER,\n\t forced: !ownWindow, window=NULL)\n");
	}
	fflush(stderr);
    }

    if(JNI_TRUE==verbose)
    {
	fprintf(stderr,"\nGL4Java:  (try to use visuals: doubleBuffer=%d, stereoView=%d, rgba=%d, stencilBits=%d, accumSize=%d, ownWindow=%d)\n)\n",
	    (int)jdoubleBuffer, (int)jstereoView, (int)jrgba, (int)jstencilBits, (int)jaccumSize,
	    (int)jownwind );
	fflush(stderr);
    }

    if(ret==JNI_TRUE) {
	    fdisplayHandle = (*env)->GetFieldID(env, cls, "displayHandle", "I");
	    if (fdisplayHandle == 0) ret= JNI_FALSE;
    }

    if(ret==JNI_TRUE) {
	    fglContext=(*env)->GetFieldID(env, cls, "glContext", "I");
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
      } else {
	if (JNI_TRUE==verbose) {
		fprintf(stdout, "GLX by %s Version %s\n", 
			glXGetClientString(display, GLX_VENDOR),
			glXGetClientString(display, GLX_VERSION));
	}
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
                                 jdoubleBuffer, jstereoView, jrgba, 
				 jstencilBits, jaccumSize,
				 &jownwind, (GLXContext) jshareWith,
				 joffScreenRenderer, &pix);

	    if(vgc.success == 0 && jrgba==JNI_TRUE)
	    {
	        jrgba=JNI_FALSE;
                vgc = findVisualGlX( display, rootwini, &thisWin,
	                             (int)jcreatewinw, (int)jcreatewinh, 
                                     jdoubleBuffer, jstereoView, jrgba, 
				     jstencilBits, jaccumSize,
				     &jownwind, (GLXContext) jshareWith,
				     joffScreenRenderer, &pix);
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
	    	 if(glXGetConfig( display, vgc.visual, 
		                  GLX_DOUBLEBUFFER, &iValue)==0)
		 {
	                if (JNI_TRUE==verbose) {
				fprintf(stdout,"doubleBuffer: %d\n", iValue);
				fflush(stdout);
			}
			jdoubleBuffer=iValue?JNI_TRUE:JNI_FALSE;
		        if(ret==JNI_TRUE && fdoubleBuffer!=0) {
			    (*env)->SetBooleanField(env, obj, fdoubleBuffer, 
			                            jdoubleBuffer);
		        }

		 } else {
		 	fprintf(stderr,"GL4Java: fetching doubleBuffer state failed\n");
		        fflush(stderr);
		 }
	    	 if(glXGetConfig( display, vgc.visual, 
		                  GLX_STEREO, &iValue)==0)
		 {
	                if (JNI_TRUE==verbose) {
				fprintf(stdout,"stereoView: %d\n", iValue);
				fflush(stdout);
			}
			jstereoView=iValue?JNI_TRUE:JNI_FALSE;
		        if(ret==JNI_TRUE && fstereoView!=0) {
			    (*env)->SetBooleanField(env, obj, fstereoView, 
			                            jstereoView);
		        }

		 } else {
		 	fprintf(stderr,"GL4Java: fetching stereoView state failed\n");
		        fflush(stderr);
		 }
	    	 if(glXGetConfig( display, vgc.visual, 
		                  GLX_RGBA, &iValue)==0)
		 {
	                if (JNI_TRUE==verbose) {
				fprintf(stdout,"rgba: %d\n", iValue);
				fflush(stdout);
			}
			jrgba=iValue?JNI_TRUE:JNI_FALSE;
		        if(ret==JNI_TRUE && frgba!=0) {
			    (*env)->SetBooleanField(env, obj, frgba, 
			                            jrgba);
		        }

		 } else {
		 	fprintf(stderr,"GL4Java: fetching rgba state failed\n");
		        fflush(stderr);
		 }
	    	 if(glXGetConfig( display, vgc.visual, 
		                  GLX_STENCIL_SIZE, &iValue)==0)
		 {
	                if (JNI_TRUE==verbose) {
				fprintf(stdout,"stencilBits: %d\n", iValue);
				fflush(stdout);
			}
			jstencilBits=iValue;
		        if(ret==JNI_TRUE && fstencilBits!=0) {
	                    (*env)->SetIntField(env, obj, 
	                                        fstencilBits, (jint)jstencilBits);
		        }

		 } else {
		 	fprintf(stderr,"GL4Java: fetching stencilBits state failed\n");
		        fflush(stderr);
		 }
	    	 if(glXGetConfig( display, vgc.visual,GLX_ACCUM_RED_SIZE, &iValue)==0 &&
	    	    glXGetConfig( display, vgc.visual,GLX_ACCUM_GREEN_SIZE, &iValue1)==0 &&
	    	    glXGetConfig( display, vgc.visual,GLX_ACCUM_BLUE_SIZE, &iValue2)==0 &&
	    	    glXGetConfig( display, vgc.visual,GLX_ACCUM_ALPHA_SIZE, &iValue3)==0 )
		 {
	                if (JNI_TRUE==verbose) {
				fprintf(stdout,"accumSize(red): %d\n", iValue);
				fprintf(stdout,"accumSize(green): %d\n", iValue1);
				fprintf(stdout,"accumSize(blue): %d\n", iValue2);
				fprintf(stdout,"accumSize(alpha): %d\n", iValue3);
				fflush(stdout);
			}
			jaccumSize=iValue+iValue1+iValue2+iValue3;
		        if(ret==JNI_TRUE && faccumSize!=0) {
	                    (*env)->SetIntField(env, obj, 
	                                        faccumSize, (jint)jaccumSize);
		        }

		 } else {
		 	fprintf(stderr,"GL4Java: fetching accumSize(red) state failed\n");
		        fflush(stderr);
		 }
		 if(JNI_TRUE==verbose)
		 {
			fprintf(stderr,"\nGL4Java: (using visuals: doubleBuffer=%d, stereoView=%d, rgba=%d, stencilBits=%d, accumSize=%d, ownWindow=%d)\n)\n",
			    (int)jdoubleBuffer, (int)jstereoView, (int)jrgba,
			    (int)jstencilBits, (int)jaccumSize, (int)jownwind);
			fflush(stderr);
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
	    (*env)->SetIntField(env, obj, fwindowHandle, (jint)thisWin);
    }

    if(ret==JNI_TRUE && fpixmapHandle!=0) {
	    (*env)->SetIntField(env, obj, fpixmapHandle, (jint)pix);
    }

    if(ret==JNI_TRUE && fdisplayHandle) {
	    (*env)->SetIntField(env, obj, fdisplayHandle, (jint)display);
    }

    if(ret==JNI_TRUE && fglContext) {
	    (*env)->SetIntField(env, obj, fglContext, (jint)vgc.gc);
    }

    if(ret==JNI_TRUE && fownwind) {
	    (*env)->SetBooleanField(env, obj, fownwind, jownwind);
    }

    return ret;
}

JNIEXPORT void JNICALL
Java_gl4java_GLContext_gljResizeNative( JNIEnv *env, jobject obj,
	                                jboolean isOwnWindow,
				        jint disp, jint thisWin,
				        jint width, jint height)
{
    /* perform a X11 synchronise, because rendering could be done
     * by a native Thread .... So we have to try avoid gl* reentrance
     * on the same GL-Context
     */
    glXWaitGL();

    if(isOwnWindow)
    {
	   XResizeWindow((Display *)disp, (Window)thisWin, width, height);
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
					     jint disp,
					     jint thisWin,
					     jint glContext
                                           )
{
    jboolean ret = JNI_TRUE;
    GLXContext ctx = NULL;

    if(glContext==0)
    {
	fprintf(stderr, "GL4Java ERROR: gljUse NO actual GC was created ...\n");
	fflush(stderr);
	return JNI_FALSE;
    }

    ctx = glXGetCurrentContext();

    if(ctx==(GLXContext)glContext)
    	return JNI_TRUE;

    if(ret==JNI_TRUE)
    {
	    if( !glXMakeCurrent( (Display *)disp, (Window)thisWin, 
	                         (GLXContext)glContext ) ) 
	    {
		fprintf(stderr, "GL4Java: gljMakeCurrent failed with GC\n  Another thread may be use it now ...\n");
		fflush(stderr);
		ret = JNI_FALSE;
	    } 
    }
    
    return ret;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljFreeNative( JNIEnv *env, jobject obj,
				      jint disp,
				      jint thisWin,
				      jint glContext
				    )
{
    jboolean ret = JNI_TRUE;

    (void)thisWin;
    (void)glContext;

    if(ret==JNI_TRUE)
    {
	    if( !glXMakeCurrent( (Display *)disp, None, NULL ) ) 
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
				      jint glContext
				    )
{
    GLXContext ctx = glXGetCurrentContext();

    if(ctx==(GLXContext)glContext)
    	return JNI_TRUE;

    return JNI_FALSE;
}


JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljDestroyNative( JNIEnv *env, jobject obj )
{
    jclass cls = 0;
    jfieldID fdisplayHandle=0, fwindowHandle=0, fglContext=0;
    jfieldID fpixmapHandle=0;
    jfieldID fpData=0;

    Display *disp=0;
    GLXContext gc=0;
    Window win=0;
    jint pData=0;
    Pixmap pix=0;

    jboolean ret = JNI_TRUE;

    cls = (*env)->GetObjectClass(env, obj);
    if(cls==0) ret=JNI_FALSE;

    if(ret==JNI_TRUE) {
	    fwindowHandle = (*env)->GetFieldID(env, cls, "windowHandle", "I");
	    if (fwindowHandle == 0) ret= JNI_FALSE;
	    else win = (Window) (*env)->GetIntField(env, obj, fwindowHandle);
    }

    if(ret==JNI_TRUE) {
	    fdisplayHandle = (*env)->GetFieldID(env, cls, "displayHandle", "I");
	    if (fdisplayHandle == 0) ret= JNI_FALSE;
	    else disp=(Display *)(*env)->GetIntField(env, obj, fdisplayHandle);
    }

    if(ret==JNI_TRUE) {
	    fglContext=(*env)->GetFieldID(env, cls, "glContext", "I");
	    if (fglContext == 0) ret= JNI_FALSE;
	    else gc =(GLXContext)(*env)->GetIntField(env, obj, fglContext);
    }

    if(ret==JNI_TRUE) {
	fpData = (*env)->GetFieldID(env, cls, "pData", "I");
	if (fpData == 0) ret= JNI_FALSE;
	else pData =(*env)->GetIntField(env, obj, fpData);
    }

    if(ret==JNI_TRUE) {
	    fpixmapHandle = (*env)->GetFieldID(env, cls, "pixmapHandle", "I");
	    if (fpixmapHandle == 0) ret= JNI_FALSE;
	    else pix = (Pixmap)(*env)->GetIntField(env, obj, fpixmapHandle);
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
		ret = JNI_FALSE;
	    }
	    if( ret==JNI_TRUE && !glXMakeCurrent( disp, None, NULL ) ) 
	    {
		fprintf(stderr, "GL4Java: gljDestroy failed\n");
		fflush(stderr);
		ret = JNI_FALSE;
	    }  else if(ret==JNI_TRUE) {
		glXDestroyContext(disp, gc);
	        if(pix!=0)
	        {
		    XFreePixmap(disp, (Pixmap)pix);
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
	    (*env)->SetIntField(env, obj, fpixmapHandle, (jint)pix);
    }

    if(ret==JNI_TRUE && fwindowHandle!=0) {
	    (*env)->SetIntField(env, obj, fwindowHandle, (jint)win);
    }

    if(ret==JNI_TRUE && fdisplayHandle) {
	    (*env)->SetIntField(env, obj, fdisplayHandle, (jint)disp);
    }

    if(ret==JNI_TRUE && fglContext) {
	    (*env)->SetIntField(env, obj, fglContext, (jint)gc);
    }


    if(ret==JNI_TRUE && fpData) {
	    (*env)->SetIntField(env, obj, fpData, (jint)pData);
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
    (void)glContext;

    if( doubleBuffer == JNI_FALSE ) {
	/* don't double buffer */
	glXWaitGL();
    } else {
	glXSwapBuffers( (Display *)disp, (Window)thisWin );
    }

    return JNI_TRUE;
}

/*
 * Name      : get_GC
 *
 * Parameters: win    - the X window use to the OpenGL context with
 *             visual - The visual to create the context for
 *             gc     - a pointer to a GLXContext structure. This is how
 *                      the created context will be returned to the caller
 *
 * Returns   : a pointer to a created GLXContext is returned through the
 *             gc argument.
 *             int - an error code: 0 means everything was fine
 *                                 -1 context creation failed
 *                                 -2 context/window association failed
 *
 * Purpose   : create an X window Graphics context and assocaite it with
 *             the window. It returns 0 if everything was fine, -1 if the
 *             context could not be created, -2 if the context could not
 *             be associated with the window
 */
static int get_GC( Display *display, Window win, XVisualInfo *visual,
                   GLXContext *gc, GLXContext gc_share)
{
    int trial = 2;

    while(trial>0)
    {
    	switch(trial)
	{
	  case 2:
	    *gc = glXCreateContext( display, visual, gc_share, GL_TRUE );
	    break;
	  case 1:
	    *gc = glXCreateContext( display, visual, gc_share, GL_FALSE );
	    break;
	}
    	trial--;

        /* check if the context could be created */
        if( *gc == NULL ) {
	    continue;
        }

        /* associated the context with the X window */
        if( glXMakeCurrent( display, win, *gc ) == False) {
	    glXDestroyContext( display, *gc );
	    continue;
        } else return 0;
    }

    return -2;
}

static jboolean testX11Java()
{
    jboolean ret=JNI_TRUE;

    /* NON DEPENDENCE CHECKS */

    /* FIRST OF ALL CHECK IF A NATIVE POINTER OR X11-TYPE FITS IN ´jint´ */

    if( sizeof(jint) < sizeof(Display *) )
    {
        fprintf(stderr,"GL4Java: (Display *) fits not in jint\n");
	ret = JNI_FALSE;
    }

    if( sizeof(jint) < sizeof(GLXContext) )
    {
        fprintf(stderr,"GL4Java: GLXContext fits not in jint\n");
	ret = JNI_FALSE;
    }

    if( sizeof(jint) < sizeof(Window) )
    {
        fprintf(stderr,"GL4Java: Window fits not in jint\n");
	ret = JNI_FALSE;
    }

    if(ret==JNI_FALSE)
    {
	fflush(stderr);
    }

    return ret;
}

