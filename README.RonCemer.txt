------------------------------------------------------------------------------

      GL4Java Implementation for the Microsoft Java VM under Windows
                   And some Other Interesting Topics
                          Ronald B. Cemer
                          August 10, 1999

{ This part is updated by Sven Goethel for GL4Java 2.1.0.0, 30th August 1999 }
------------------------------------------------------------------------------


Implementation


I began with GL4Java version 2.0.1.2, as maintained and distributed by Sven
Goethel.

Microsoft's VM comes in several versions.  While the latest versions support
JNI (Java Native Interface, an API which allows Java to call native code in
DLLs), many releases only support J/Direct, which is Microsoft's simplified
(and quite handy, but highly non-standard) interface to native code in DLLs.
I opted to use J/Direct for all native calls under the Microsoft VM.

If you have an early VM, it won't support J/Direct either, so you have to
download the latest VM in this case (or at least a newer one).  See the
"Installing" section.

Microsoft's VM uses what they call "lightweight" components.  They went to
great pains to re-use all of the ActiveX controls (whatever!) that they had
invested so much time and effort to develop.  These controls are at the heart
of the VM.  By "lightweight" they mean that each control (button, canvass,
etc.) does not have its own window handle, but are actually drawn onto the
frame, which has a window handle.  Therefore, within a frame (a top-level
window), all components share that frame's window handle.  As a result,
there's really no window to render to with OpenGL.  So I create one in the
DLL, and maintain it there.  The GLContext and GLCanvas classes cooperate to
keep the size and position of this window synchronized with the size and
position of the underlying canvas.  It all happens fairly transparently.

Beware, though, that you shouldn't try to draw on the canvas with normal Java
drawing commands, because you'll be drawing on a canvas that is obscured by
an OpenGL window and the results will never be seen.  In fact, the Win32
documentation states that PFD_DOUBLEBUFFER and PFD_SUPPORT_GDI are mutually
exclusive (see ChoosePixelFormat), so you shouldn't be trying this anyway.
Basically, the rule is this: Use OpenGL to draw everything in the GLCanvas or
GLAnimCanvas space.

------------------------------------------------------------------------------


Changes to existing applets/applications


To prevent security violations and to allow the applet to shutdown gracefully,
I added doCleanup() function to the GLCanvas class.  Since GLAnimCanvas is a
subclass of GLCanvas, doCleanup() is effectively added to both classes.

The doCleanup() function gets called by cvsDispose().  You should override
doCleanup() in your applet and put all OpenGL cleanup code there.  This is
where you delete display lists and textures, etc.

The following methods can be overridden in the GLCanvas or GLAnimCanvas object
you create, but you must call the super.*() version of the same method in your
overridden method in order for the applet to operate correctly.  Here are
sample implementations of these functions, with places for you to insert your
code:

    public void reshape(int width, int height)
    {
        super.reshape(width,height);
        /* Put your code here. */
    }

    public void componentResized(ComponentEvent e)
    {
        super.componentResized(e);
        /* Put your code here. */
    }

    public void componentMoved(ComponentEvent e)
    {
        super.componentMoved(e);
        /* Put your code here. */
    }

    public void componentShown(ComponentEvent e)
    {
        super.componentShown(e);
        /* Put your code here. */
    }

    public void componentHidden(ComponentEvent e)
    {
        super.componentHidden(e);
        /* Put your code here. */
    }

	public void windowOpened(WindowEvent e)
    {
        super.windowOpened(e);
        /* Put your code here. */
    }

    public void windowClosing(WindowEvent e)
    {
        super.windowClosing(e);
        /* Put your code here. */
    }

    public void windowClosed(WindowEvent e)
    {
        super.windowClosed(e);
        /* Put your code here. */
    }

    public void windowIconified(WindowEvent e)
    {
        super.windowIconified(e);
        /* Put your code here. */
    }

    public void windowDeiconified(WindowEvent e)
    {
        super.windowDeiconified(e);
        /* Put your code here. */
    }

    public void windowActivated(WindowEvent e)
    {
        super.windowActivated(e);
        /* Put your code here. */
    }

    public void windowDeactivated(WindowEvent e)
    {
        super.windowDeactivated(e);
        /* Put your code here. */
    }


The ideal structure for an applet is as follows.  We will use DemoApplet as
the applet class and DemoCanvas as the canvas class.  Use your own names.

The DemoApplet class looks like this:

    public class DemoApplet extends Applet 
    {
        DemoCanvas canvas = null;
    
        public void init()
        {
            Dimension d = getSize();
    
            setLayout(new BorderLayout());
            canvas = new DemoCanvas(d.width, d.height, null, null);
            add("Center", canvas);
        }
    
        public void start()
        {
    /* This only applies if you're using GLAnimCanvas: */
            canvas.start();
        }
    
        public void stop()
        {
    /* This only applies if you're using GLAnimCanvas: */
            canvas.stop();
        }
    
        public void destroy()
        {
            canvas.destroy();
        }
    }

The DemoCanvas class looks like this:

    class DemoCanvas extends GLAnimCanvas
    {
        public DemoCanvas(int w, int h, String glClass, String gluClass)
        {
            super(w, h, glClass, gluClass);
    /* These only apply if you're using GLAnimCanvas: */
            setUseRepaint(true);    /* Only for GLAnimCanvas */
            setUseFpsSleep(true);   /* Run it wide open */
        }
    
        public void init() 
        {
            gl.glEnable(GL_DEPTH_TEST);
            gl.glEnable(GL_CULL_FACE);
            gl.glShadeModel(GL_SMOOTH);
            gl.glLightModeli(GL_LIGHT_MODEL_TWO_SIDE,GL_TRUE);
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
    
    /* Do any OpenGL - related initialization here. */
    
            glj.gljCheckGL();
    
    /* This only applies if you're using GLAnimCanvas: */
            setSuspended(false);
        }
    
        public void ReInit()
        {
    /* This only applies if you're using GLAnimCanvas: */
            setSuspended(false);
        }
    
        public void destroy()
        {
            if (glj != null)
            {
    /* Call cvsDispose().  It will shutdown the GL context and call doCleanup()
       at the right time. */
                cvsDispose();
            }
        }
    
        public void doCleanup()
        {
            if (glj != null)
            {
                glj.gljMakeCurrent(true);
    /* Do any OpenGL - related cleanup here. */
                glj.gljFree();
            }
        }
    
        public void display()
        {
            if (glj == null) return;
            if (!glj.gljIsInit()) return;
            if (glj.gljMakeCurrent(true) == false) return;
    
    /* Put OpenGL commands here to render the scene. */
    
            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
        }
    }
    
------------------------------------------------------------------------------


Building the jar files


First of all, edit symbols.mak.win32 to reflect your system's configuration.
Then copy symbols.mak.win32 to symbols.mak.  Note that you should use a UNIX
editor (vim works nicely) to edit symbols.mak and any makefile(s), because
the make that comes with Cygnus chokes on carriage-returns.  Carriage-returns
almost never appear in UNIX text files, because a newline (ASCII linefeed) is
treated the same way a CR-LF pair is treated in DOS/Windows.

To rebuild the Java classes which comprise the Java side of GL4Java, you will
need the Microsoft SDK for Java, Sun JDK (1.2.1 or later is preferred), and
Cygnus Win32 tools (UNIX commands for Win32).  You can get each of these
things at the following web sites:

    Microsoft SDK for Java: http://www.microsoft.com/downloads/
    Sun JDK 1.2.1         : http://www.java.sun.com/products/
    Cygnus Win32 tools    : http://sourceware.cygnus.com/cygwin/

To build the gl4java.jar, execute the
following commands:

    make w32
    cd ..

Everything will get built except the DLLs.

{ This part is updated by Sven Goethel for GL4Java 2.1.0.0 }
------------------------------------------------------------------------------


Building the dll files


Support for building the MS-specific version of the DLL has not been added
for DJGPP or Borland BC5, since I don't have either set up on my system.
Sven Goethel or others may wish to add this for the next release.

First make sure the jar files have been built and are up to date.

To rebuild the DLLS, you need Microsoft Visual C++ 6.0.  Open the workspace:

    Win32VC6\Win32VC6.dsw

Then select each project and select "Build -> Rebuild all".

The create the archive with the makefile:

    make win2binpkg

... be sure to have zip !

{ This part is updated by Sven Goethel for GL4Java 2.1.0.0 }
------------------------------------------------------------------------------


Installing


Please read the MS-JVM.txt file !!

{ This part is updated by Sven Goethel for GL4Java 2.1.0.0 }
------------------------------------------------------------------------------


Running


To run a Java application, simply type jview followed by the class name.

To run a Java applet, type jview /a followed by the html filename.

To run a Java applet in Internet Explorer, just install the 
GL4Java classes and dll (see MS-JVM.txt) !
Then you can run all applets :-) ! 
No more security overload ...

{ This part is updated by Sven Goethel for GL4Java 2.1.0.0 }
------------------------------------------------------------------------------


Deploying an applet


You do not need to create a signed cab-file for your applet.
Please read above - and MS-JVM.txt !!

Original Text (Kept here for informational purpose):
====================================================
Sun and Netscape like signed jar files; IE likes signed cab files.  What's
more, they all use different signing techniques, so it's a bit of a mess to
get past your browser's security measures, but it can be done.

First of all, you're best off to forget about the Sun Java2 plug-in unless
your users are willing to go through a huge download (about 10 MB).  If you
want to use the Java2 plug-in in spite of the download size, go to
java.sun.com and read about their HTML converter.  It's a free download that
will fix up your HTML for both IE and Netscape to automatically download and
install the Sun VM if it's not already on their system, the first time they
try to run your applet.  It works great, but the download time is too long
for most users.  The benefit is that you only have to maintain one set of
HTML pages and one deployed copy of the applet.

If you decide to go the route which minimizes the hassle for the end users,
then you must deploy duplicate web pages (one set for Netscape and one for
IE), and deploy both a signed jar file and a signed cab file.  You need
Netscape's signtool utility to sign jar files for Netscape's VM.  You can
get it at www.netscape.com.  Build and sign a jar file with all of the
classes which comprise your applet.  Then build and sign a cab file with the
same classes.  Remember to use the correct signing tool for each.  Then, in
the page which is to start the applet, insert a little JavaScript code to
sniff the browser (microsoft.com has app notes on how to do this), and
redirect to either a Netscape-specific page which starts the applet from the
jar file, or a Microsoft-specific page which starts the applet from the cab
file.

One final caveat.  Some versions of IE 5 seem to be shipping without a Java
VM of any kind.  When you try to run a Java applet, it starts downloading the
Microsoft Java VM (about 6.5 MB or so), which takes quite awhile.  Even worse,
in some early releases of IE 5, the hard-coded URL where the browser is
supposed to go to get the VM is incorrect, so it can't find it, and so it
basically tells you to go find it yourself.  It's best to have a link on
your page to http://www.microsoft.com/java/download/32updates.htm so they can
at least get at the VM download if this happens to them.

{ This part is updated by Sven Goethel for GL4Java 2.1.0.0 }
------------------------------------------------------------------------------
