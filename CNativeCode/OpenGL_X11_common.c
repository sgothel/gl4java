/*
 * This file takes care of the C implementation of opening up an
 * X window, assigning an OpenGL graphics context to it, storing that
 * graphics context in the java class data structure.
 *
 * also contains the use() and swap() functions for double buffering
 *
 * Leo Chan  -- 1995
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

#include "OpenGL_X11_common.h"

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
int LIBAPIENTRY get_GC( Display *display, Window win, XVisualInfo *visual,
                        GLXContext *gc, GLXContext gc_share,
			jboolean verbose )
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
            if(JNI_TRUE==verbose)
	    {
	      fprintf(stderr, "GL4Java: glXCreateContext  trial %p\n", *gc);
	      fprintf(stderr, "GL4Java: glXDestroyContext trial %p\n", *gc);
	    }
	    continue;
        } else {
	    if(JNI_TRUE==verbose)
		fprintf(stderr, "GL4Java: glXCreateContext  sure %p\n", *gc);
	    return 0;
        }
    }

    return -2;
}



/**
 * Description for pWin:
 *   if ownwin:
 *      input: 	the parent window
 *      output: the newly created window
 *   else if ! ownwin:
 *      i/o:    the window itself
 */
VisualGC LIBAPIENTRY findVisualGlX( Display *display, 
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
			       Pixmap *pix,
			       jboolean verbose
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
						      accumSize,
						      verbose);
	    }

	    if(vgc.visual==NULL)
	    {
	        vgc.visual = findVisualIdByFeature( &visualList, 
				                      display, *pWin,
	                                              doubleBuffer, stereoView,
	                                              rgba, 
						      stencilBits>0, 
						      accumSize>0, verbose);
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
			        vgc.visual, &(vgc.gc), shareWith, verbose)) == 0
              )
	    {
		    vgc.success=1;
		    *pWin = newWin ;
	    }
	    else if( vgc.visual!=NULL &&  *pOwnWin == JNI_FALSE && *pWin!=0 &&
	             (gc_ret=get_GC( display, *pWin,
			             vgc.visual, &(vgc.gc), shareWith, verbose)) == 0
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


void LIBAPIENTRY printVisualInfo ( Display *display, XVisualInfo * vi)
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

void LIBAPIENTRY printAllVisualInfo ( Display *disp, Window win, jboolean verbose)
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

int LIBAPIENTRY testVisualInfo ( Display *display, XVisualInfo * vi, 
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


XVisualInfo * LIBAPIENTRY findVisualIdByFeature( XVisualInfo ** visualList, 
                                  Display *disp, Window win,
	                          int dblBuffer, int stereoView, int rgbaMode, 
		                  int stencilSize, int accumSize,
				  jboolean verbose)
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


jboolean LIBAPIENTRY testX11Java()
{
    jboolean ret=JNI_TRUE;

    /* NON DEPENDENCE CHECKS */

    /* FIRST OF ALL CHECK IF A NATIVE POINTER OR X11-TYPE FITS IN ´jint´ */

    if( sizeof(jlong) < sizeof(Display *) )
    {
        fprintf(stderr,"GL4Java: (Display *) fits not in jlong\n");
	ret = JNI_FALSE;
    }

    if( sizeof(jlong) < sizeof(GLXContext) )
    {
        fprintf(stderr,"GL4Java: GLXContext fits not in jlong\n");
	ret = JNI_FALSE;
    }

    if( sizeof(jlong) < sizeof(Window) )
    {
        fprintf(stderr,"GL4Java: Window fits not in jlong\n");
	ret = JNI_FALSE;
    }

    if(ret==JNI_FALSE)
    {
	fflush(stderr);
    }

    return ret;
}


int LIBAPIENTRY x11gl_myErrorHandler(Display *pDisp, XErrorEvent *p_error)
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

int LIBAPIENTRY x11gl_myIOErrorHandler(Display *pDisp)
{
	fprintf(stderr, "X11 I/O Error detected.\n");
	fprintf(stderr, " \ndo not know what to do ... \n");
	fflush(stderr);
	return 0;
}

Window LIBAPIENTRY createOwnOverlayWin(Display *display, Window rootwini, Window parentWin,
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


