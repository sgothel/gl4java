GL4Java is prepared for XFree86 4.0 & OpenGL/DRI
================================================

Since GL4Java 2.7.1 and 2001 April 10,
everything works fine !

The following text is history ..

ctx := OpenGL rendering context

I have worked for the DRI compatibility of GL4Java.
GL4Java is an OpenGL language mapping for Java.
	http://www.jausoft.com/gl4java

I used:
	Linux version 2.3.99-pre6 
	DRI cvs source tree (check out at 30th April 2000)
	GlideV3Dri-3.10-6
	gcc version 2.95.2
	glibc 2.1
	Vodoo3 3dfx card

While working for the compatibility, I have found some
problems, which looks like bugs !

I really would love to see your comments about chapter 1-3,
thanxs a lot !

Some bugs in OpenGL/DRI should be fixed/worked around:


1.) 3dfx Bug: Missing library link for tdfx_dri.so
===================================================

This may happen for other drivers either.

/xc/lib/GL/mesa/src/drv/tdfx/Makefile line 1051:
old: REQUIREDLIBS = -lglide3x -lm
new: REQUIREDLIBS = -lglide3x -lm -L../../../.. -lGL

Now, the "ldd -r -v tdfx_dri.so" check does not complain
about missing symbols. And GL4Java is able to load this lib
via libGL.so ! The funny thing is, that the binary demos
does not complain about the missing links ...


3.) GLX/DRI Indirect Rendering mode
===================================

Within this mode, we have to use the GL4Java mode of
an own created window for the ctx !
Because without, we will not receive an double-buffered visual
for the allready existing java native window !
(But this work for DRI rendering mode)

So, the workaround is, that the flag/define
"GL4JAVA_FORCE_X11_OWN_WINDOW" is set.
So in DRI and indirect rendering mode,
an own native window is created !


4.) Java2 JVM must run in native threads mode
==============================================

The environment var "THREADS_FLAG=native" must be set !
Green threads does result in an exception ...


=====================================================================

FIXED:
======

2.) glxMakeCurrent(..) bug
==========================

Try the demo "glxdemo.c" (out of mesa/xdemos) !
If you modify the code, so that the function code of 
"redraw" is encapsulated like this:

/**
 dpy, win & ctx are globals ...
 */
Display *dpy=NULL;
GLXContext ctx=NULL;
Window win=0;
  
static void redraw( )
{
      /**
       * Make the ctx current to this thread 
       */
      glXMakeCurrent( dpy, win, ctx ); 

      /*
       ... original code here 
       */

      /**
       * Release the current thread's ctx,
       * so that the ctx is usable for other threads ...
       */
      glXMakeCurrent( dpy, None, NULL );
} 

The very first "redraw" does work !
The upcoming calls just throwing the GL-Error messages: 
	"GL User Error: calling ; without a current context"
and the GL impl. are not called !
So - the call of "glXMakeCurrent( dpy, None, NULL )" 
makes the glx management very unhappy :-(


A current workaround for GL4Java is the flag/define
"GLXDRIMAKECURRENTBUG" !
If this is set, the native implementation of the method 
GLContext::gljFree() does not call "glXMakeCurrent( dpy, None, NULL )"
anymore ! So we do lost the thread safety !

> In xc/xc/lib/GL/mesa/src/drv/tdfx/tdfx_xmesa.c in
> the XMesaMakeCurrent()
> function, look for this line (should be line 228):
> 
>       if (c==gCC) return GL_TRUE;
> 
> Remove it.


1st May 2000

Sven Goethel
http://www.jausoft.com
mailto:gl4java@jausoft.com
mailto:sgoethel@jausoft.com
