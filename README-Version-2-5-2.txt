GL4Java has it's new _legal_ name:

	OpenGL[tm] for Java[tm]

	It's abbreviation may be gl4java 
	.. with the additional trademark hints !

Summary Version 2-5-2-0 testX:
===============================
	- jdk1.3 and jdk >=1.4 support while implementing the JAWT interface !
	- multi threading usage is more reliabel.
	- code is now 64bit clean, 64bit prepared
	- Using the new revision makes your existing code incompatible,
	  because:
		- The GLUFunc.gluNew* etc. methods uses the long type for
		  the reference holder for quadric, tesselation, 
		  .. (old: int type) !

		  This is, because this new revision is completly 64bit clean !
		  All native reference holders are of type long !

		- You did not encapsulate your OpenGL calls within
			GLContext.gljMakeCurrent
					<your render code>
			GLContext.gljFree
		  e.g. within the GLCanvas.display method:
			glj.gljMakeCurrent();  // lock GL Context
				gl.glBegin();
				gl.glEnd();
				glj.gljSwap();
			glj.gljFree();        // release GL Context

	All the demo's have been updated in the new test release,
	to work with 2.5.2.0 !

Experience:
==========
 Linux 2.4.1, XFree86 4.0.2, kde 2.1 beta2:

	 Command-Line JDK (1.1-1.3, sun, blackdown, ibm(no jawt)):       OK !
		 Indirect DRI (Mesa-Soft 3.3):           OK
		 NVidia 0.96:                            OK
			 See NVidia notes below !

	 Netscape + Netscape JVM:                                        ERROR !
		 does not work, because Netscape's JVM
		 implementation on linux looks like
		 not to handle long-types within the JNI API .. ?!

	 Netscape + j2re-1_3_0_01:                                       OK !
		 Indirect DRI (Mesa-Soft 3.3):           OK
		 NVidia 0.96:                            OK
			 See NVidia notes below !

	 Konqueror (2.1 beta2):
		 jdk 1.3-sun:                                            ERROR
			 Applet runs, but nothing is visible !

		 jdk 1.3-ibm (no jawt):                                  OK !

		 jdk 1.3-blackdown:                                      OK !
			 Indirect DRI (Mesa-Soft 3.3):   OK
			 NVidia 0.96:                    OK
				 See NVidia notes below !
			 You should disable:
			 	- show java console
			 	- security manager (java2 itself takes care)

 Win98/WinNT4.0(*):

	 Command-Line JDK (1.1-1.2.X, sun):                              OK !

	 Command-Line JDK (1.3-1.4.X, sun):                              OK !
		 Well, you have to start the java.exe from the
		 <jdk-path>/jre/bin/java.exe
		 Otherwise, the jawt.dll is not found !! BUG in JDK !!

	 IExplorer + MS-JVM buil 3802:                                   OK !
		 JDirect usage ..

	 JRE 1.3* Plugin + ( IExplorer | Netscape )                      OK !

	 Netscape + Netscape JVM                                         OK !

         (*) WinNT 4.0:
                 On my system (servicepack6, nvidia detonator3),
                 i cannot restart the applet !
                 An read access to adress 0x000000 occures right from
                 NVidia's OGL implementation !!
                 Looks like another bug within NVidia ?
                 See NVidia notes below !
                 Well, Win98 runs fine


NVidia Driver Note's:
====================

The Linux >= 0.9-769 driver works ok !


kind regards, sven

