# *OpenGL™ for Java™ (GL4Java)*, a native OpenGL mapping to Java™

[Original document location](https://jogamp.org/cgit/gl4java.git/about/)

## Git Repository
This project's canonical repositories is hosted on [JogAmp](https://jogamp.org/cgit/gl4java.git/).

## Overview
The [*OpenGL™ for Java™ (GL4Java)*](https://jausoft.com/gl4java/docs/) is an OpenGL™ binding for the Java™ programming language.

*GL4Java* was developed [from March 1997](https://jausoft.com/gl4java/docs/overview/history.html) 
until [March 2003](https://jogamp.org/cgit/gl4java.git/log/).

Its many concepts were reused in the subsequently launched [JOGL project](https://jogamp.org/jogl/www/),
initially lead by Sun Microsystems and later run by [myself and the JogAmp community](https://jogamp.org/), 
rendering *GL4Java* effectively *JOGL's* predecessor.    
A few of the concepts reused were:
- C-Header Compiler to JNI glue code: C2J -> GlueGen
- AWT integration: GLCanvas, GLJPanel (swing)
- WinHandleAccess -> NativeWindow
- GLDrawableFactory
- GLDrawable
- GLContext
- GLEvenListener
- etc

## Index of text files
- [CHANGES.txt](./CHANGES.txt) 

    A list of the changes are made through the versions.

- [INSTALLER.txt](./INSTALLER.txt)

    The description howto install GL4Java with
    the installer via web or as an downloaded application!

- [INSTALL.txt](./INSTALL.txt)

    The root description howto install GL4Java manually.
    The following files are linked here:

- [Java2.txt](./Java2.txt)
- [MS-JVM.txt](./MS-JVM.txt)
- [Netscape.txt](./Netscape.txt)

- [COMPILATION.txt](./COMPILATION.txt)

    The description howto install GL4Java 
    from scratch (obtain + compiling) !
		
- Some license informations:
  - [LICENSE.txt](./LICENSE.txt)
  - [PNG-LICENSE.txt](./PNG-LICENSE.txt)

- Some historical, further readings:
  - [PNG-README.txt](./PNG-README.txt)
  - [README.AdamKing.txt](./README.AdamKing.txt)
  - [README.RonCemer.txt](./README.RonCemer.txt)
  - [THANXS.txt](./THANXS.txt)

- Some technical short-hand infos:
  - [Tesselation.txt](./Tesselation.txt)
  - [VERSIONS.txt](./VERSIONS.txt)

## Supported Platforms
- Unix Platforms
  - Linux (x86) 2.X
  - SunOS (Sparc) 5.X
  - AIX 4.2 (RS/6000)
  - SGI Irix
- Misc Platforms
  - Macintosh
  - Windows NT 95/98 (x86) 4.0 (sun/netscape)
  - Windows NT 95/98 (x86) 4.0 (msjvm/ie40)

## Concluding
May be - WE can find a way for a standard OpenGL for Java API !

As you can see, OpenGL-Rendering can be integrated in Java-Programs
very well. You can use the normal java paint and event - functions
as you used display and reshape in glut !
 
See also [LICENSE.txt](./LICENSE.txt) for the license of GL4Java !

Sven Gothel
- January 1999
- April 1999
- September 1999
- April 2000
- June 2023

## Contact
- Jausoft            [http://jausoft.com/](http://jausoft.com/)
- JogAmp             [http://jogamp.org/](http://jogamp.org/)
- JOGL Web           [http://jogamp.org/](http://jogamp.org/jogl/)
- Sven's Blog        [https://jausoft.com/blog/tag/jogamp/](https://jausoft.com/blog/tag/jogamp/)
- Email              sgothel _at_ jausoft _dot_ com

