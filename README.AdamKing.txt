This readme is for the OpenGL4Java release 0.3.

Welcome!
-------
This is an initial developer's release of a (unoffical) port of OpenGL(tm)
for java.  I've taken Leo Chan's original package and ported it to both
WindowsNT/95 and to Linux.  I've included Leo Chan's original readme file
in this directory as README.orig.  Also, I've added several features, the main
one being OpenGl now drawing into a java Frame.  What advantage does this
provide?  Well, you can now add menus to the OpenGL widget as well as
receiving all normal events such as MouseMotion and Window events.  You
could very simply have a user rotate a openGL object by moving the mouse
around in the Frame ( the demo for the next release will have this feature ).


Installation
------------
For compiling/installation instructions, please read the INSTALL file.   


Use
---
Have a look at the testOGLWidget.java file included with this release.  It
shows how to create a java application that can show an OpenGL object.  I
will be adding more details on the steps required to create an OpenGL
application in the following releases.  Briefly, this is what must be done:

1) Create the frame that will display the OpenGL scene.
	- DO this by extending the class 'OpenGLFrame' or instatiating a new
	OpenGLFrame object.  Make sure you create it with a title.

2) Create a new 'OpenGLwidget' object and pass it the 'OpenGLFrame'
	object that it will be displayed in into it's constructor.

3) Set up the OpenGL scene within the OpenGLwidget with normal opengl 
	functions. 
	NOTE:  Currently the gl prefix and parameter suffix on
	OpenGL functions are not used ie. glLightf become light.  This 
	was how it was in Leo Chan original package, however I am
	considering putting the gl prefix back on and possibly the parameter
	suffix as well to be more in line with the normal OpenGL functions.
	Please email me at aking@magma.com if you have any comment on this.

4) Call swap() and the scene should be rendered into the Frame.


The OpenGL4Java home page is at:

  http://www.magmacom.com/~aking/java


Known Bugs
----------
Both:
	- If you create more than one OpenGLFrame, they MUST have different
	  titles.
	- most of the bugs mentioned in Leo Chan's original readme are still
	  present.  Since I now have fairly stable Win32 and Linux version
	  I will be fixing most of them over the next several releases
	- Make sure that you place Thread.yield() statements in any loops
	  you have otherwise you might not get any events.  This is the
	  case with the Linux version due to it's virtual machine's 
	  threading model.  However, the Win32 version isn't affected by this.

Linux:
	- The first X visual that is found is used.  This shouldn't affect
	  most people

Win32:
	- I haven't tested it with Microsoft's VM, and I'm pretty sure it
	  won't work.  Make sure you have Sun's VM.


Bug Reporting
-------------

If you come across any bugs please email me with details, and please
include the following information:

Which Operating System and version:
OpenGL4Java version:
OpenGL library being used and version:

or if you have any suggestions, just email me at aking@magmacom.ca


License:
-------
As per the original package, I'm releasing this as FREEWARE (ie. you can 
do anything you want with it ) for both for non-commercial and for
commerical use.  


Warranty
--------
There is none.  As I'm not a lawyer, and I don't know anyone that is,
I shall say this in plain english. If you use this software and your system 
explodes/breaks, or data is lost/damaged, it's not my fault.  By using the 
supplied software, you agree not to sue me and not to cause me any greif.


Enjoy!
Adam King
aking@magmacom.ca
adam@opcom.ca
