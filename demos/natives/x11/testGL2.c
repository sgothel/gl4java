#include <stdio.h>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glx.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>

Display *dpy;		/* X display connection */
Window xid;		/* X window id */
GLXContext glid;	/* GL window id */

double width = 250;
double height = 250;
double fps = 25.0;

  static float lmodel_twoside[] =
  {GL_FALSE};
  static float lmodel_local[] =
  {GL_FALSE};
  static float lmodel_ambient[] =
  {0.0, 0.0, 0.0, 0.0};

void CylinderDraw( ) 
{
    glBegin( GL_TRIANGLE_STRIP );
    glNormal3f ( 1.0, 0.0, -5.0 );
    glVertex3f ( 1.0, 0.0, -5.0 );
    glNormal3f ( 1.0, 0.0, -5.0 );
    glVertex3f (1.000000, 0.000000, 5.000000);
    glNormal3f (0.707107, 0.707107, -5.000000);
    glVertex3f (0.707107, 0.707107, -5.000000);
    glNormal3f (0.707107, 0.707107, -5.000000);
    glVertex3f (0.707107, 0.707107, 5.000000);
    glNormal3f (0.000000, 1.000000, -5.000000);
    glVertex3f (0.000000, 1.000000, -5.000000);
    glNormal3f (0.000000, 1.000000, -5.000000);
    glVertex3f (0.000000, 1.000000, 5.000000);
    glNormal3f (-0.707107, 0.707107, -5.00000);
    glVertex3f (-0.707107, 0.707107, -5.00000);
    glNormal3f (-0.707107, 0.707107, -5.00000);
    glVertex3f (-0.707107, 0.707107, 5.00000);
    glNormal3f (-1.000000, 0.000000, -5.000000);
    glVertex3f (-1.000000, 0.000000, -5.000000);
    glNormal3f (-1.000000, 0.000000, -5.000000);
    glVertex3f (-1.000000, 0.000000, 5.00000);
    glNormal3f (-0.707107, -0.707107, -5.000000);
    glVertex3f (-0.707107, -0.707107, -5.000000);
    glNormal3f (-0.707107, -0.707107, -5.000000);
    glVertex3f (-0.707107, -0.707107, 5.00000);
    glNormal3f (0.000000, -1.000000, -5.000000);
    glVertex3f (0.000000, -1.000000, -5.000000);
    glNormal3f (0.000000, -1.000000, -5.000000);
    glVertex3f (0.000000, -1.000000, 5.00000);
    glNormal3f (0.707107, -0.707107, -5.00000);
    glVertex3f (0.707107, -0.707107, -5.00000);
    glNormal3f (0.707107, -0.707107, -5.00000);
    glVertex3f (0.707107, -0.707107, 5.000000);
    glNormal3f (1.000000, 0.000000, -5.00000);
    glVertex3f (1.000000, 0.000000, -5.00000);
    glNormal3f (1.000000, 0.000000, -5.00000);
    glVertex3f (1.000000, 0.000000, 5.00000);
    glEnd();
}

void reshape(int width, int height)
{
	double fov    = 45.0,
	aspect = width / height,
	near   = 1.0,
	far    = 200.0;

	glViewport( 0, 0, width, height );

	glMatrixMode( GL_PROJECTION );
	glLoadIdentity();

	gluPerspective( fov, aspect, near, far );

	glMatrixMode( GL_MODELVIEW );
	glLoadIdentity();

}

void display()
{
        static int FrameStep = 0;

	glXWaitGL();
	glXWaitX();
        /* associated the context with the X window */
        if( glXMakeCurrent( dpy, xid, glid ) == False) {
          glXDestroyContext( display, glid );
          fprintf(stderr,"(NO GC ASSOC)\n");
          fflush(stderr);
	  return 1;
        }

	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
	glPushMatrix();
	glTranslatef( 0.0, 0.0, -65.0 );
	glRotatef(  40.0+(2*FrameStep), 0.0, 0.0, 1.0 );
	glRotatef( 190.0+(2*FrameStep), 0.0, 1.0, 0.0 );
	glRotatef( 200.0+(FrameStep*2), 1.0, 0.0, 0.0 );
	glPushMatrix();
	glScalef( 1.0, 1.0, 10.0 );
	CylinderDraw( );
	glPopMatrix();
	glPushMatrix();
	glRotatef( 90.0, 0.0, 1.0, 0.0 );
	glScalef( 1.0, 1.0, 10.0 );
	CylinderDraw( );
	glPopMatrix();
	glPushMatrix();
	glRotatef( 90.0, 1.0, 0.0, 0.0 );
	glScalef( 1.0, 1.0, 10.0 );
	CylinderDraw( );
	glPopMatrix();
	glPopMatrix();

	glXWaitGL();
	glXWaitX();
	glXSwapBuffers(dpy, xid);

	glXWaitGL();
	glXWaitX();
        /* associated the context with the X window */
        if( glXMakeCurrent( dpy, None, NULL ) == False) {
          glXDestroyContext( display, glid );
          fprintf(stderr,"(free GC failed)\n");
          fflush(stderr);
	  return 1;
        }

	FrameStep++;

	if(FrameStep>100000) FrameStep=0;

}

void init()
{
	double fov    = 45.0;
	double aspect = width / height ;
	double near   = 1.0;
	double far    = 200.0;
	float lightArr[4];
	float farr[4];

	/* initialize the widget */
	glClearColor( 0.8f, 0.8f, 1.0f, 1.0f );
	glFrontFace( GL_CW );
	glEnable( GL_DEPTH_TEST );

	glViewport( 0, 0, width, height );

	glMatrixMode( GL_PROJECTION );
	glLoadIdentity();

	gluPerspective( fov, aspect, near, far );

	/* render three rotated cylinders */
	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

	glMatrixMode( GL_MODELVIEW );
	glLoadIdentity();

	/* enable lighting */
	lightArr[0] = 1.0f; lightArr[1] = 1.0f; 
	lightArr[2] = 1.0f; lightArr[3] = 1.0f;
	glLightfv( GL_LIGHT0, GL_DIFFUSE, lightArr );
	lightArr[0] = 90.0f; lightArr[1] = 90.0f; 
	lightArr[2] = 0.0f; lightArr[3] = 0.0f;
	glLightfv( GL_LIGHT0, GL_POSITION, lightArr );
	lightArr[0] = 0.1f; lightArr[1] = 0.1f; 
	lightArr[2] = 0.1f; lightArr[3] = 1.0f;
	glLightfv( GL_LIGHT0, GL_AMBIENT, lightArr );
	glEnable( GL_LIGHT0 );

		/*
		glLightModelfv(GL_LIGHT_MODEL_LOCAL_VIEWER, lmodel_local);
		glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
		*/
		glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, 1);
		glEnable( GL_LIGHTING );

		/*
        glLightModelfv(GL_LIGHT_MODEL_LOCAL_VIEWER, lmodel_local);
        glLightModelfv(GL_LIGHT_MODEL_TWO_SIDE, lmodel_twoside);
        glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
	glEnable( GL_LIGHTING );
	*/


	glMaterialf( GL_FRONT, GL_SHININESS, 30.0f );

	farr[0] = 0.0f; farr[1] = 0.0f; farr[2] = 0.0f; farr[3] = 1.0f;
	glMaterialfv( GL_FRONT, GL_SPECULAR, farr );

	farr[0] = 0.0f; farr[1] = 1.0f; farr[2] = 0.0f; farr[3] = 1.0f;
	glMaterialfv( GL_FRONT, GL_DIFFUSE, farr );

	glMaterialf( GL_BACK, GL_SHININESS, 50.0f );

	farr[0] = 0.0f; farr[1] = 0.0f; farr[2] = 1.0f; farr[3] = 1.0f;
	glMaterialfv( GL_BACK, GL_SPECULAR, farr );

	farr[0] = 1.0f; farr[1] = 1.0f; farr[2] = 0.0f; farr[3] = 1.0f;
	glMaterialfv( GL_BACK, GL_DIFFUSE, farr );

}


static void GetLargeVisual(Display *dpy, XVisualInfo *bigVisualInfo);
static XVisualInfo *findVisualGlX( Display *display);
Window findAWindow( const char *frameName, Display *display, Window window);
int verbose=1;

main()
{
    XWMHints *p_xwmh=NULL;
    Window xid2;
    XEvent event;
    XVisualInfo bigVisualInfo;	/* largest pseudo color visual type */
    XSetWindowAttributes attribs;  /* X window attributes structure */
    Colormap bigColormap;	/* 12-bit color map */
    unsigned long vmask;	/* value mask for attributes */
    int i;


    /* Get the X display connection.  We'll assume that the DISPLAY
     * environment variable is "unix:0" since GL windows only run on 
     * on the local display.  */
    if(!(dpy = XOpenDisplay(""))) {
        printf("\n  can't open display connection \n");
	exit(0);
    }

    /* GetLargeVisual(dpy, &bigVisualInfo); */
    bigVisualInfo = * findVisualGlX(dpy);
    printf("\n    address of XVisualInfo structure = 0x%x \n", bigVisualInfo);
    printf("\n    address of Visual structure = 0x%x ", bigVisualInfo.visual);
    printf("\n    visualID =	0x%x ", bigVisualInfo.visualid);
    printf("\n    depth of visual = 	%d", bigVisualInfo.depth);
    printf("\n    class of visual =	%d", bigVisualInfo.class);
    printf("\n    bits_per_rgb of visual = 	%d", bigVisualInfo.bits_per_rgb);
    printf("\n    colormap_size of visual = 	%d \n", bigVisualInfo.colormap_size);
 
	   attribs.event_mask = 
		ExposureMask;
	   attribs.border_pixel = 
		BlackPixel(dpy, bigVisualInfo.screen);
	   attribs.colormap = 
    		XCreateColormap( dpy,
                             RootWindow( dpy, bigVisualInfo.screen ),
                             bigVisualInfo.visual,
                             AllocNone ) ;


	   attribs.background_pixel = 0xFFFFFFFF; 

           attribs.background_pixel = 
		BlackPixel(dpy, bigVisualInfo.screen);

    	   attribs.border_pixmap = None;
    	   attribs.background_pixmap = None;

	   vmask = CWColormap | CWBorderPixmap | CWBackPixmap;
	   vmask = CWEventMask | CWColormap | CWBorderPixel | CWBackPixel;

	   xid =
	       XCreateWindow(dpy,
                             RootWindow( dpy, bigVisualInfo.screen ),
			     0,0, 400, 400, 
			     0,
			     bigVisualInfo.depth,
			     InputOutput, bigVisualInfo.visual,
			     vmask,
			     &attribs);

    /* Name the window, map it, and flush the X buffer. */
    XStoreName(dpy, xid, "GLWindow");
    XMapWindow(dpy, xid);
    XFlush(dpy);

    glid = glXCreateContext( dpy, &bigVisualInfo, None, True );

    /* check if the context could be created */
    if( glid == NULL ) {
        fprintf(stderr,"(NO GC)\n");
        fflush(stderr);
	return 1;
    }
    /* associated the context with the X window */
    if( glXMakeCurrent( dpy, xid, glid ) == False) {
        glXDestroyContext( display, glid );
        fprintf(stderr,"(NO GC ASSOC)\n");
        fflush(stderr);
	return 1;
    }

    XFlush(dpy);
    XRaiseWindow (dpy, xid);

    xid2 = findAWindow("GLWindow", dpy, RootWindow( dpy, bigVisualInfo.screen ));

    if(xid==xid2)
      fprintf(stderr,"found win equals created win\n");
    else
      fprintf(stderr,"found win ** NOT ** equals created win\n");
    fflush(stderr);

    if((p_xwmh = XAllocWMHints()) == NULL)
    {
      fprintf(stderr,"No Mem for WMHints\n");
      fflush(stderr);
      exit(1);
    }
    p_xwmh->flags = (InputHint|StateHint);
    p_xwmh->input = True;
    p_xwmh->initial_state=NormalState;

    XSetWMHints(dpy, xid, p_xwmh);

    init();

    for(;;)
	display();

    /* exit */
    XDestroyWindow(dpy, xid);
    XCloseDisplay(dpy);
} 

/* ============================================================== */
/* The following routine draws a constant pitch spiral, 
 * with initial radius r0, pitch p, 
 * nsteps line segments per revolution, 
 * and nrev revolutions  */

/* ============================================================== */

void GetLargeVisual(Display *dpy, XVisualInfo *bigVisualInfo)
{
    XVisualInfo  	*visual_info;	/* Info. about visual classes */
    /*
     * Get all visuals based on these masks
     */
    long 		vinfo_mask = VisualClassMask | VisualScreenMask;
    XVisualInfo 	vtemp ;		/* template for visuals to look for */
    int  		i;		/* counter */
    int 		nitem ;		/* number of visuals returned */

    /*
     * Get All PseudoColor Visuals
     */
    vtemp.class  = PseudoColor ;	/* Set PseudoColor class */
    vtemp.screen = DefaultScreen(dpy) ;	/* Set screen */
    /*
     * Get all visuals of the correct class on the correct screen
     */
    visual_info  = XGetVisualInfo(dpy, vinfo_mask, &vtemp, &nitem) ;
    /*
     * Search for largest visual from all visual classes
     */
    *(bigVisualInfo) = *(visual_info);


    /*  NOTE: on GXT1000 and GXT500 family, winX does not support
     *  overlay window, so careful not to pick up overlay visual
     *  here! 
     */

    for (i=0; i<nitem; i++, visual_info++) {
        if (visual_info->colormap_size >= bigVisualInfo->colormap_size) {
            *(bigVisualInfo) = *(visual_info);
        }
    }
    /*
     * return largest visual
     */
    return;
}

static XVisualInfo *findVisualGlX( Display *display )
{
    int visualAttribList[11];
    XVisualInfo *visual;

    /* Ask GLX for a visual that matches the attributes we want: Single
       buffered and RGB with at least 4 bits for each component 
    */
    visualAttribList[0] = GLX_RGBA;
    visualAttribList[1] = GLX_RED_SIZE;
    visualAttribList[2] = 1;
    visualAttribList[3] = GLX_GREEN_SIZE;
    visualAttribList[4] = 1;
    visualAttribList[5] = GLX_BLUE_SIZE;
    visualAttribList[6] = 1;
    visualAttribList[7] = GLX_DOUBLEBUFFER;
    visualAttribList[8] = GLX_DEPTH_SIZE;
    visualAttribList[9] = 1;
    visualAttribList[10] = None;

    visual = glXChooseVisual( display,
                              DefaultScreen( display ),
                              visualAttribList );
	    fprintf(stderr, "\nused vi(ID:%d): \n screen %d, depth %d, class %d,\n clrmapsz %d, bitsPerRGB %d\n",
		visual->visualid,
		visual->screen,
		visual->depth,
		visual->class,
		visual->colormap_size,
		visual->bits_per_rgb );
	    fflush(stderr);

    return( visual );
}

Window findAWindow( const char *frameName, Display *display, Window window)
{
    /* Variables used to find the correct java Window to render into */
    Window root, parent, *children;
    unsigned int numOfChildren;
    char *buff;
    int i, status;
    Window retWindow, lastWindow;

    /* debug helpers */
    int i1, i2, i3;

    XFlush(display);

    status = XFetchName( display, window, &buff );

    if( status )
    {
        if( !strcmp( frameName, buff ) )
        {
            /* Ok, we've found it, 
	       so return the last child under this heirarchy 
	    */
            lastWindow = window;

	    XFlush(display);

            status = XQueryTree( display, window,
                &root, &parent, &children, &numOfChildren );

	    if(verbose)
	    {
		    fprintf(stderr,"\nfjw 4 (got :0x%x with %d childs)\n", 
		       window, numOfChildren);
	            fflush(stderr);
	    }

	    i1=0;

            while( status )
            {
                if( children == NULL )
		{
		    XFlush(display);

		    if(verbose)
		    {
			fprintf(stderr,"\nfjw 4 (FOUND LAST WINDOW 0x%x)\n", 
			    lastWindow);
			fflush(stderr);
		    }
                    return lastWindow;
	        }
                lastWindow = children[numOfChildren-1];

                status = XQueryTree( display, lastWindow, 
                    &root, &parent, &children, &numOfChildren );

		if(verbose)
		{
			    fprintf(stderr,"fjw 4 (got :0x%x with %d childs)\n", 
			       lastWindow, numOfChildren);
			    fflush(stderr);
		}

		XFlush(display);

            }
                
            return (Window)0;
        }
    }

    /* If Window has no name, or if it's not equal to the java Frame window name
       carry on searching recursivly 
    */
    status = XQueryTree( display, window,
        &root, &parent, &children, &numOfChildren );

    XFlush(display);

    if( status )
    {
        for( i=0; i < numOfChildren; i++ )
        {
            retWindow = findAWindow( frameName, display, children[ i ]);
            if( retWindow )
            {
                /* Free up the child list */
                /* XFree( children ); */
                return retWindow;
            }
        }
    }

    /* Free up the child list */
    /* if(children!=0) XFree( children ); */
    return (Window)0;
}
