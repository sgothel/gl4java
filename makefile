#
# Makefile for the GL4Java 
# 
# THIS MAKEFILE IS COMPLETELY REENGINEERED
# NOW - WE HAVE SUFFIX RULES - JUST ONE MAKEFILE
# JUST ONE SYMBOLS.MAK FILE (WHERE ALL DIRS and TOOLS ARE)
#
#
# for general creation (java + native-lib) invoke:
#
# make x11	: create java and native lib for unix/x11
# make w32	: create java and native lib for windows32 (SUN & MSJVM)
# make mac	: create java and native lib for Macintosh
#
#
# to copy the class-files to DEST_CLASSES_DIR, invoke:
#
# make classcpy
#
# 
# to save the native-library invoke after general creation:
#
# make unix2binpkg	: put the created unix-lib to the binpkg-dir
# make win2binpkg	: put the created win-lib (SUN & MSJVM) 
# 			  to the binpkg-dir
# make mac2binpkg	: put the created macintosh-lib to the binpkg-dir
#
# to create the complete html documentation invoke
#
# make htmldoc		: unix
# make javadoc		: unix (javadoc only)
# make htmldocw32	: win32
# make javadocw32	: win32 (javadoc only)
#
#
# to put all together as an tar-gzip archive in the archive-dir, invoke:
#
# make archiv
#
#
# for cleanup (without archive and binpkg !!) invoke:
#
# make clean		: only temp-files (java, native)
# make cleannative	: only temp-files (native)
# make cleanall		: all temp-,java-,and native-files
#
# * ---------------
# *
# * Sven Goethel
# *
# * September 1997
#
# 25. Juni 1998
#
# ---------
#
# changed: now unix2binpkg replaces: linux2binpkg, aix2binpkg and solaris2binpkg
#          the UNIXLIBDIR and WIN32LIBDIR 
#          resides now in the symbol.mak.* files !
#
# 15. January 1999
#
# -----------
#
# changed: Now having UNIXTYPE/WIN32TYPE defined 
#          instead of UNIXLIBDIR/WIN32LIBDIR in symbols.mak,
#          where only the OS is specified - not the GL4Java version !
#          Now - a tar-gz/zip file is generated for the specific 
#          OS-type - not a directory. The filename contains the
#          GL4Java name+version and the OS type information !
#

######################################################################
# Locations that are environment specific.  You will need to
# change these to reflect the location of Java and Mesa (or OpenGL)
# on your system
######################################################################

include symbols.mak

######################################################################
# end of location specifications -- the rest of this file should not
# need to be changed to compile and link OpenGLwidget applets
######################################################################


# subdirectory to put the C header files produced by JAVAH

CHEADERDIR  		= CClassHeaders


# subdirectory where the C Native code files live

CNATIVEDIR  		= CNativeCode

# LIBRARY DEFINITION

LIBMAJOR		= 2
LIBMINOR		= 5
LIBBUGFIX		= 0
RELEASE                 = 0

#
# The demo release number
#
DEMORELEASE		= 3

#lib GLContext
LIBBASENAME1b 		= GL4JavaJauGljJNI12
LIBNAME1b 		= lib$(LIBBASENAME1b)
LIBRARY1b 		= $(LIBNAME1b).so

#lib GLContext
LIBBASENAME1 		= GL4JavaJauGljJNI
LIBNAME1 		= lib$(LIBBASENAME1)
LIBRARY1 		= $(LIBNAME1).so

#lib GLFunc - 1
LIBBASENAME2 		= GL4JavaJauGLJNI
LIBNAME2 		= lib$(LIBBASENAME2)
LIBRARY2 		= $(LIBNAME2).so

#lib GLFunc - 1
LIBBASENAME2b 		= GL4JavaJauGLJNI12
LIBNAME2b 		= lib$(LIBBASENAME2b)
LIBRARY2b 		= $(LIBNAME2b).so

#lib GLUFunc - 1
LIBBASENAME3 		= GL4JavaJauGLUJNI
LIBNAME3 		= lib$(LIBBASENAME3)
LIBRARY3 		= $(LIBNAME3).so

#lib GLUFunc - 1
LIBBASENAME3b 		= GL4JavaJauGLUJNI12
LIBNAME3b 		= lib$(LIBBASENAME3b)
LIBRARY3b 		= $(LIBNAME3b).so

#lib GLFunc - 2
LIBBASENAME4 		= GL4JavaJauGLJNInf
LIBNAME4 		= lib$(LIBBASENAME4)
LIBRARY4 		= $(LIBNAME4).so

#lib GLUFunc - 2
LIBBASENAME5 		= GL4JavaJauGLUJNInf
LIBNAME5 		= lib$(LIBBASENAME5)
LIBRARY5 		= $(LIBNAME5).so

#lib GLFunc - 3
LIBBASENAME6 		= GL4JavaJauGLJNItst
LIBNAME6 		= lib$(LIBBASENAME6)
LIBRARY6 		= $(LIBNAME6).so

#lib GLFunc - 3
LIBBASENAME6b 		= GL4JavaJauGLJNI12tst
LIBNAME6b 		= lib$(LIBBASENAME6b)
LIBRARY6b 		= $(LIBNAME6b).so

#lib GLUFunc - 3
LIBBASENAME7 		= GL4JavaJauGLUJNItst
LIBNAME7 		= lib$(LIBBASENAME7)
LIBRARY7 		= $(LIBNAME7).so

#lib GLUFunc - 3
LIBBASENAME7b 		= GL4JavaJauGLUJNI12tst
LIBNAME7b 		= lib$(LIBBASENAME7b)
LIBRARY7b 		= $(LIBNAME7b).so

# the name of the package has to match the name of the subdirectory that
# the java source and java class files sit in
# PACKAGEDIR is relative to THISDIR 

PACKAGEDIR 		= gl4java


INCL_PRJ    		= -I$(CHEADERDIR) 

CC_OPTS      		= $(INCL_OS) $(INCL_PRJ) $(CFLAGS)

MK_GL4JAVA_JAR		= ( cd $(DEST_CLASSES_DIR) ; \
			    rm -f gl4java.jar ; \
			    $(JAR) cf gl4java.jar \
			    	gl4java/*.class \
				gl4java/applet \
				gl4java/awt \
				gl4java/swing \
				gl4java/jau \
				gl4java/system \
				gl4java/utils/*.class \
				gl4java/utils/textures \
				gl4java/utils/glut/*.class ; \
			    rm -f gl4java-glutfonts.jar ; \
			    $(JAR) cf gl4java-glutfonts.jar \
				gl4java/utils/glut/fonts ; \
			  )

######################################################################
# SPECIFY ALL JAVA FILES 
# ... AND ALL JAVA-C-MAPPING FILES (generated *.c and *.h)
######################################################################

# classes which rely on native methods
#
#lib GLContext
JAVA_C_MAP1_FILE 	= GLContext.java

#lib GLFunc - 1
JAVA_C_MAP2_FILE 	= GLFuncJauJNI.java

#lib GLUFunc - 1
JAVA_C_MAP3_FILE 	= GLUFuncJauJNI.java

#lib GLFunc - 2
JAVA_C_MAP4_FILE 	= GLFuncJauJNInf.java

#lib GLUFunc - 2
JAVA_C_MAP5_FILE 	= GLUFuncJauJNInf.java

FILES_GLUT_FONT.java = \
		  $(PACKAGEDIR)/utils/glut/fonts/GLUTBitmapFont.java \
		  $(PACKAGEDIR)/utils/glut/fonts/GLUTStrokeFont.java \
		  $(PACKAGEDIR)/utils/glut/fonts/BitmapCharRec.java \
		  $(PACKAGEDIR)/utils/glut/fonts/BitmapFontRec.java \
		  $(PACKAGEDIR)/utils/glut/fonts/CoordRec.java \
		  $(PACKAGEDIR)/utils/glut/fonts/StrokeCharRec.java \
		  $(PACKAGEDIR)/utils/glut/fonts/StrokeFontRec.java \
		  $(PACKAGEDIR)/utils/glut/fonts/StrokeRec.java \
		  $(PACKAGEDIR)/utils/glut/fonts/data/glutBitmap8By13.java \
		  $(PACKAGEDIR)/utils/glut/fonts/data/glutBitmap9By15.java \
		  $(PACKAGEDIR)/utils/glut/fonts/data/glutBitmapHelvetica10.java \
		  $(PACKAGEDIR)/utils/glut/fonts/data/glutBitmapHelvetica12.java \
		  $(PACKAGEDIR)/utils/glut/fonts/data/glutBitmapHelvetica18.java \
		  $(PACKAGEDIR)/utils/glut/fonts/data/glutBitmapTimesRoman10.java \
		  $(PACKAGEDIR)/utils/glut/fonts/data/glutBitmapTimesRoman24.java \
		  $(PACKAGEDIR)/utils/glut/fonts/data/glutStrokeMonoRoman.java \
		  $(PACKAGEDIR)/utils/glut/fonts/data/glutStrokeRoman.java \
		  $(PACKAGEDIR)/utils/glut/fonts/GLUTFuncLightImplWithFonts.java

FILES_GLUT_FONT.class = ${FILES_GLUT_FONT.java:.java=.class}

FILES.java 	= $(PACKAGEDIR)/GL4JavaInitException.java \
		  $(PACKAGEDIR)/jau/awt/WinHandleAccess.java \
		  $(PACKAGEDIR)/GL4JavaReflections.java \
		  $(PACKAGEDIR)/GLEnum.java \
		  $(PACKAGEDIR)/GLUEnum.java \
		  $(PACKAGEDIR)/GLFunc.java \
		  $(PACKAGEDIR)/GLUFunc.java \
	          $(PACKAGEDIR)/$(JAVA_C_MAP1_FILE) \
	          $(PACKAGEDIR)/$(JAVA_C_MAP2_FILE) \
	          $(PACKAGEDIR)/$(JAVA_C_MAP3_FILE) \
	          $(PACKAGEDIR)/$(JAVA_C_MAP4_FILE) \
	          $(PACKAGEDIR)/$(JAVA_C_MAP5_FILE) \
		  $(PACKAGEDIR)/utils/Tool.java \
		  $(PACKAGEDIR)/utils/Test.java \
		  $(PACKAGEDIR)/awt/GLCanvas.java   \
		  $(PACKAGEDIR)/awt/GLAnimCanvas.java \
		  $(PACKAGEDIR)/awt/GLImageCanvas.java \
		  $(PACKAGEDIR)/applet/SimpleGLAnimApplet1.java \
		  $(PACKAGEDIR)/swing/GLJPanel.java \
		  $(PACKAGEDIR)/swing/GLAnimJPanel.java \
		  $(PACKAGEDIR)/swing/SimpleGLJApplet1.java \
		  $(PACKAGEDIR)/utils/glut/GLUTEnum.java \
		  $(PACKAGEDIR)/utils/glut/GLUTFunc.java \
		  $(PACKAGEDIR)/utils/glut/GLUTFuncLightImpl.java \
		  $(FILES_GLUT_FONT.java) \
		  $(PACKAGEDIR)/utils/textures/TextureTool.java \
		  $(PACKAGEDIR)/utils/textures/TextureLoader.java \
		  $(PACKAGEDIR)/utils/textures/IOTextureLoader.java \
		  $(PACKAGEDIR)/utils/textures/PngTextureLoader.java \
		  $(PACKAGEDIR)/utils/textures/PPMAsciiTextureLoader.java \
		  $(PACKAGEDIR)/utils/textures/TGATextureLoader.java \
		  $(PACKAGEDIR)/utils/textures/AWTTextureLoader.java \
		  $(PACKAGEDIR)/utils/textures/TextureGrabber.java \
		  $(PACKAGEDIR)/utils/textures/TGATextureGrabber.java

FILES.class 		= ${FILES.java:.java=.class}

FILES_mac.java		= gl4java/jau/awt/macintosh/MacHandleAccess.java 

FILES_mac.class 	= ${FILES_mac.java:.java=.class}

FILES_w32.java		= gl4java/jau/awt/windows/Win32HandleAccess.java 

FILES_w32.class 	= ${FILES_w32.java:.java=.class}

FILES_msw32.java	= $(PACKAGEDIR)/system/GljMSJDirect.java \
			  gl4java/jau/awt/windows/MSWin32HandleAccess.java

FILES_msw32.class 	= ${FILES_msw32.java:.java=.class}

FILES_x11.java		= gl4java/jau/awt/motif/X11HandleAccess.java

FILES_x11.class 	= ${FILES_x11.java:.java=.class}


#lib GLContext
FILES1.c 		= $(CNATIVEDIR)/OpenGL_X11.c		 \
			  $(CNATIVEDIR)/OpenGL_misc.c		 \
			  $(CNATIVEDIR)/jnitools.c	         \
			  $(CNATIVEDIR)/GLCallbackHelperJNI.c

FILES1b.c 		= $(CNATIVEDIR)/OpenGL_X11.c		 \
			  $(CNATIVEDIR)/OpenGL_misc.c		 \
			  $(CNATIVEDIR)/jni12tools.c	         \
			  $(CNATIVEDIR)/GLCallbackHelperJNI.c

#lib GLFunc - 1
FILES2.c		= $(CNATIVEDIR)/OpenGL_JauJNI_dynfuncs.c

#lib GLFunc - 1
FILES2b.c		= $(CNATIVEDIR)/OpenGL_JauJNI12_dynfuncs.c

#lib GLUFunc - 1
FILES3.c		= $(CNATIVEDIR)/OpenGLU_JauJNI_funcs.c   \
			  $(CNATIVEDIR)/GLUCallbackJNI.c

#lib GLUFunc - 1
FILES3b.c		= $(CNATIVEDIR)/OpenGLU_JauJNI12_funcs.c   \
			  $(CNATIVEDIR)/GLUCallbackJNI.c

#lib GLFunc - 2
FILES4.c		= $(CNATIVEDIR)/OpenGL_JauJNInf_dynfuncs.c

#lib GLUFunc - 2
FILES5.c		= $(CNATIVEDIR)/OpenGLU_JauJNInf_funcs.c \
			  $(CNATIVEDIR)/GLUCallbackJNI.c

#lib GLFunc - 3
FILES6.c		= $(CNATIVEDIR)/OpenGL_JauJNItst_dynfuncs.c

#lib GLFunc - 3
FILES6b.c		= $(CNATIVEDIR)/OpenGL_JauJNI12tst_dynfuncs.c

#lib GLUFunc - 3
FILES7.c		= $(CNATIVEDIR)/OpenGLU_JauJNItst_funcs.c \
			  $(CNATIVEDIR)/GLUCallbackJNI.c

#lib GLUFunc - 3
FILES7b.c		= $(CNATIVEDIR)/OpenGLU_JauJNI12tst_funcs.c \
			  $(CNATIVEDIR)/GLUCallbackJNI.c

#lib GLFunc - 3
FILES1.o 		= ${FILES1.c:.c=.o}
FILES1b.o 		= ${FILES1b.c:.c=.o}
FILES2.o 		= ${FILES2.c:.c=.o}
FILES2b.o 		= ${FILES2b.c:.c=.o}
FILES3.o 		= ${FILES3.c:.c=.o}
FILES3b.o 		= ${FILES3b.c:.c=.o}
FILES4.o 		= ${FILES4.c:.c=.o}
FILES5.o 		= ${FILES5.c:.c=.o}
FILES6.o 		= ${FILES6.c:.c=.o}
FILES6b.o 		= ${FILES6b.c:.c=.o}
FILES7.o 		= ${FILES7.c:.c=.o}
FILES7b.o 		= ${FILES7b.c:.c=.o}

#lib GLContext
FILE.gen1.h 	= $(CHEADERDIR)/$(PACKAGEDIR)_${JAVA_C_MAP1_FILE:.java=.h}

#lib GLFunc - 1
FILE.gen2.h 	= $(CHEADERDIR)/$(PACKAGEDIR)_${JAVA_C_MAP2_FILE:.java=.h}

#lib GLUFunc - 1
FILE.gen3.h 	= $(CHEADERDIR)/$(PACKAGEDIR)_${JAVA_C_MAP3_FILE:.java=.h}

#lib GLFunc - 2
FILE.gen4.h 	= $(CHEADERDIR)/$(PACKAGEDIR)_${JAVA_C_MAP4_FILE:.java=.h}

#lib GLUFunc - 2
FILE.gen5.h 	= $(CHEADERDIR)/$(PACKAGEDIR)_${JAVA_C_MAP5_FILE:.java=.h}

FILES.gen   		= $(FILE.gen1.h) \
			  $(FILE.gen2.h) \
			  $(FILE.gen3.h) \
			  $(FILE.gen4.h) \
			  $(FILE.gen5.h)

######################################################################
# SPECIFY ALL SUFFIX-RULES
######################################################################

.SUFFIXES 		: .java .class .h .c .o

.class.h:
	$(JAVAH) -jni -d $(CHEADERDIR) $(PACKAGEDIR).${<F:.class=} 2>&1 \
	| tee -a $(THISDIR)/errors

.java.class:    
	cd ${<D}; $(JAVAC) -O -deprecation ${<F} 2>&1 \
                  | tee -a $(THISDIR)/errors
	mkdir -p $(DEST_CLASSES_DIR)/${@D}
	cp ${@D}/*.class $(DEST_CLASSES_DIR)/${@D}

.c.o:
	$(CC) $(CC_OPTS) -o $@ $< 2>&1 | tee -a $(THISDIR)/errors

######################################################################
# SPECIFY ALL TARGETS -- MAIN TARGETS
######################################################################

x11			: cleanup gljni \
	                  $(FILES.class) $(FILES_x11.class) \
			  makeJar \
		 	  $(HOME_LIB_DIR)/$(LIBRARY1) \
		 	  $(HOME_LIB_DIR)/$(LIBRARY1b) \
		 	  $(HOME_LIB_DIR)/$(LIBRARY2) \
		 	  $(HOME_LIB_DIR)/$(LIBRARY2b) \
		 	  $(HOME_LIB_DIR)/$(LIBRARY3) \
		 	  $(HOME_LIB_DIR)/$(LIBRARY3b) \
		 	  $(HOME_LIB_DIR)/$(LIBRARY4) \
			  $(HOME_LIB_DIR)/$(LIBRARY5) \
			  $(HOME_LIB_DIR)/$(LIBRARY6) \
			  $(HOME_LIB_DIR)/$(LIBRARY6b) \
			  $(HOME_LIB_DIR)/$(LIBRARY7) \
			  $(HOME_LIB_DIR)/$(LIBRARY7b)

mac			: cleanup gljni \
	                  $(FILES.class) $(FILES_mac.class) \
			  makeJar \
			  $(FILES.gen) \
                          $(CNATIVEDIR)/winstuff.h 


w32			: cleanup gljni \
	                  $(FILES_w32.class) \
	                  $(FILES_msw32.class) \
			  $(FILES.class) \
			  makeJar \
			  $(FILES.gen) \
                          $(CNATIVEDIR)/winstuff.h 

#gljni			: tools gl2j gl2c
gljni			: gl2j gl2c


######################################################################
# GENERATE LIBS ...
######################################################################

# making the library will create the .so (or only .a)
# shared library to be loaded in at runtime

$(HOME_LIB_DIR)/$(LIBRARY1): $(FILES1.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME1}.*
	$(MKEXP) $(LIBNAME1) $(FILES1.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME1) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES1.o) $(LIBS)

$(HOME_LIB_DIR)/$(LIBRARY1b): $(FILES1b.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME1b}.*
	$(MKEXP) $(LIBNAME1b) $(FILES1b.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME1b) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES1b.o) $(LIBS)

$(HOME_LIB_DIR)/$(LIBRARY2): $(FILES2.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME2}.*
	$(MKEXP) $(LIBNAME2) $(FILES2.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME2) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES2.o) $(LIBS) -L$(HOME_LIB_DIR) -l$(LIBBASENAME1)

$(HOME_LIB_DIR)/$(LIBRARY2b): $(FILES2b.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME2b}.*
	$(MKEXP) $(LIBNAME2b) $(FILES2b.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME2b) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES2b.o) $(LIBS) -L$(HOME_LIB_DIR) -l$(LIBBASENAME1b)

$(HOME_LIB_DIR)/$(LIBRARY3): $(FILES3.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME3}.*
	$(MKEXP) $(LIBNAME3) $(FILES3.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME3) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES3.o) $(LIBS) -L$(HOME_LIB_DIR) -l$(LIBBASENAME1)

$(HOME_LIB_DIR)/$(LIBRARY3b): $(FILES3b.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME3b}.*
	$(MKEXP) $(LIBNAME3b) $(FILES3b.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME3b) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES3b.o) $(LIBS) -L$(HOME_LIB_DIR) -l$(LIBBASENAME1b)

$(HOME_LIB_DIR)/$(LIBRARY4): $(FILES4.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME4}.*
	$(MKEXP) $(LIBNAME4) $(FILES4.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME4) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES4.o) $(LIBS) -L$(HOME_LIB_DIR) -l$(LIBBASENAME1)

$(HOME_LIB_DIR)/$(LIBRARY5): $(FILES5.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME5}.*
	$(MKEXP) $(LIBNAME5) $(FILES5.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME5) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES5.o) $(LIBS) -L$(HOME_LIB_DIR) -l$(LIBBASENAME1)

$(HOME_LIB_DIR)/$(LIBRARY6): $(FILES6.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME6}.*
	$(MKEXP) $(LIBNAME6) $(FILES6.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME6) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES6.o) $(LIBS) -L$(HOME_LIB_DIR) -l$(LIBBASENAME1)

$(HOME_LIB_DIR)/$(LIBRARY6b): $(FILES6b.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME6b}.*
	$(MKEXP) $(LIBNAME6b) $(FILES6b.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME6b) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES6b.o) $(LIBS) -L$(HOME_LIB_DIR) -l$(LIBBASENAME1b)

$(HOME_LIB_DIR)/$(LIBRARY7): $(FILES7.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME7}.*
	$(MKEXP) $(LIBNAME7) $(FILES7.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME7) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES7.o) $(LIBS) -L$(HOME_LIB_DIR) -l$(LIBBASENAME1)

$(HOME_LIB_DIR)/$(LIBRARY7b): $(FILES7b.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME7b}.*
	$(MKEXP) $(LIBNAME7b) $(FILES7b.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME7b) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES7b.o) $(LIBS) -L$(HOME_LIB_DIR) -l$(LIBBASENAME1b)

######################################################################
# NEEDED DEPENDENCYs FOR GENERATED FILES ...
# 
# mapping filenames for suffix rules ...
######################################################################

#tools			: 
#	cd C2J ; make C2J
#

gl2j			:
	cd C2J ; make gl2j

gl2c			:
	cd C2J ; make gl2c

$(PACKAGEDIR)/GLContext.java: makefile $(PACKAGEDIR)/GLContext.java.skel
	sed -e 's/__SED_CLASS_VERSION__/\"$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)\"/g' \
		$(PACKAGEDIR)/GLContext.java.skel \
		> $(PACKAGEDIR)/GLContext.java

$(CNATIVEDIR)/winstuff.h: makefile $(CNATIVEDIR)/winstuff.h.skel
	sed -e 's/__SED_LIB_VERSION__/\"$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)\"/g' \
		$(CNATIVEDIR)/winstuff.h.skel \
		> $(CNATIVEDIR)/winstuff.h

#lib GLContext
$(CNATIVEDIR)/OpenGL_X11.o: ${FILE.gen1.h}

$(CNATIVEDIR)/OpenGL_misc.o: ${FILE.gen1.h}

$(FILE.gen1.h): $(PACKAGEDIR)/${JAVA_C_MAP1_FILE}
	$(JAVAH) -jni -d $(CHEADERDIR) $(PACKAGEDIR).${JAVA_C_MAP1_FILE:.java=} 2>&1 \
	| tee -a $(THISDIR)/errors

$(CNATIVEDIR)/OpenGL_misc.o: $(CNATIVEDIR)/OpenGL_misc.c makefile
	$(CC) $(CC_OPTS) \
	      -D__LIB_VERSION__=\"$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)\" \
	      -o $@ $< 2>&1 | tee -a $(THISDIR)/errors

#lib GLFunc - 1
$(CNATIVEDIR)/OpenGL_JauJNI_dynfuncs.o: ${FILE.gen2.h} \
                                        $(CNATIVEDIR)/jnitools.h \
				        $(CNATIVEDIR)/GLCallbackHelperJNI.h

$(FILE.gen2.h): $(PACKAGEDIR)/${JAVA_C_MAP2_FILE}
	$(JAVAH) -jni -d $(CHEADERDIR) $(PACKAGEDIR).${JAVA_C_MAP2_FILE:.java=} 2>&1 \
	| tee -a $(THISDIR)/errors


#lib GLUFunc - 1
$(CNATIVEDIR)/OpenGLU_JauJNI_funcs.o: ${FILE.gen3.h} \
                                        $(CNATIVEDIR)/jnitools.h \
				        $(CNATIVEDIR)/GLCallbackHelperJNI.h

$(FILE.gen3.h): $(PACKAGEDIR)/${JAVA_C_MAP3_FILE}
	$(JAVAH) -jni -d $(CHEADERDIR) $(PACKAGEDIR).${JAVA_C_MAP3_FILE:.java=} 2>&1 \
	| tee -a $(THISDIR)/errors

#lib GLFunc - 2
$(CNATIVEDIR)/OpenGL_JauJNInf_dynfuncs.o: ${FILE.gen4.h} \
                                        $(CNATIVEDIR)/jnitools.h \
				        $(CNATIVEDIR)/GLCallbackHelperJNI.h

$(FILE.gen4.h): $(PACKAGEDIR)/${JAVA_C_MAP4_FILE}
	$(JAVAH) -jni -d $(CHEADERDIR) $(PACKAGEDIR).${JAVA_C_MAP4_FILE:.java=} 2>&1 \
	| tee -a $(THISDIR)/errors

#lib GLUFunc - 2
$(CNATIVEDIR)/OpenGLU_JauJNInf_funcs.o: ${FILE.gen5.h} \
                                        $(CNATIVEDIR)/jnitools.h \
				        $(CNATIVEDIR)/GLCallbackHelperJNI.h

$(FILE.gen5.h): $(PACKAGEDIR)/${JAVA_C_MAP5_FILE}
	$(JAVAH) -jni -d $(CHEADERDIR) $(PACKAGEDIR).${JAVA_C_MAP5_FILE:.java=} 2>&1 \
	| tee -a $(THISDIR)/errors

#
# This is the stuff for the MS-JVM
#
$(PACKAGEDIR)/system/GljMSJDirect.class: $(PACKAGEDIR)/system/GljMSJDirect.java
	$(MSJAVAC) -O -cp:p .. $< 2>&1 | tee -a errors
	mkdir -p $(DEST_CLASSES_DIR)/${@D}
	cp ${@D}/*.class $(DEST_CLASSES_DIR)/${@D}

gl4java/jau/awt/windows/MSWin32HandleAccess.class: gl4java/jau/awt/windows/MSWin32HandleAccess.java
	$(MSJAVAC) -O -cp:p .. $< 2>&1 | tee -a errors
	mkdir -p $(DEST_CLASSES_DIR)/${@D}
	cp ${@D}/*.class $(DEST_CLASSES_DIR)/${@D}

#
# This is the stuff general
#
$(CNATIVEDIR)/GLCallbackHelperJNI.o: $(CNATIVEDIR)/jnitools.h

$(CNATIVEDIR)/GLUCallbackJNI.o: $(CNATIVEDIR)/jnitools.h \
				$(CNATIVEDIR)/GLCallbackHelperJNI.h

######################################################################
#
# now we have some administration/documentation stuff
#
######################################################################

cleanup:
	rm -f errors

# clean out the *.o files and machine generated files from javah
cleannative:
	rm -f `find . -name \*~ -o -name \*.swp -o -name \*.bak -o -name \*.obj -o -name \*.o` \
	      $(FILES1.o) $(FILES2.o) \
	      $(FILES3.o) $(FILES4.o) $(FILES5.o)  \
	      errors gl4java/*~ CNativeCode/*~ \
	      $(HOME_LIB_DIR)/${LIBNAME1}.* $(HOME_LIB_DIR)/${LIBNAME2}.* \
	      $(HOME_LIB_DIR)/${LIBNAME3}.* $(HOME_LIB_DIR)/${LIBNAME4}.* \
	      $(HOME_LIB_DIR)/${LIBNAME5}.* \
	      $(HOME_LIB_DIR)/${LIBNAME6}.* $(HOME_LIB_DIR)/${LIBNAME7}.* \
	      $(CNATIVEDIR)/winstuff.h
	cd demos/natives/x11 ; make clean

# clean out the *.o files and machine generated files from javah
clean: cleannative
	rm -f CClassHeaders/* errors gl4java/*~ CNativeCode/*~ \
	      $(FILE.gen1.h) $(FILE.gen2.h) \
	      $(FILE.gen3.h) $(FILE.gen4.h) $(FILE.gen5.h) \
	      gl4java/GLContext.java 
	rm -f `find . -name \*.class`
	cd demos ; make clean

cleanhtmldoc:
	rm -f docs/html/*.html docs/html/*.css docs/html/*.gif 
	rm -f docs/html/gl4java
	rm -f docs/*.ps

cleanall: clean cleanhtmldoc
	rm -f $(FILES.class) 
	rm -f $(FILES_x11.class) 
	rm -f $(FILES_w32.class) 
	rm -f $(FILES_mac.class) 
	rm -f archive/GL4Java*
	for i in $$(find . -name \*.class) ; do \
		rm -f $$i ; \
	done
	cd demos ; make clean
	cd demos/natives/x11 ; make cleanall

# ... Copy all *.class files to DEST_CLASSES_DIR
classcpy:
	for i in $$(find gl4java -name \*.class ) ; do \
		if [ ! -e $(DEST_CLASSES_DIR)/$$(dirname $$i) ] ; then \
		  echo mkdir -p $$(dirname $(DEST_CLASSES_DIR)/$$i) ; \
		  mkdir -p $$(dirname $(DEST_CLASSES_DIR)/$$i) ; \
		fi ; \
		cp $$i $(DEST_CLASSES_DIR)/$$(dirname $$i) ; \
	done 
	echo classes copied
	chmod -R 755 $(DEST_CLASSES_DIR)/gl4java
	$(MK_GL4JAVA_JAR)

makeJar:
	$(MK_GL4JAVA_JAR)

htmldoc: latexdoc javadoc
	cp -Rf docs-src/images docs/html/.

htmldocw32: latexdoc javadocw32

latexdoc: cleanhtmldoc
	cd docs-src; UpdateHtml

javadoc:
	cd C2J; make htmldoc
	$(JAVADOC) -J-Xmx64m -protected -d docs/html \
		-sourcepath "$(JDK_HOME)/lib/classes.zip:$(THISDIR):$(THISDIR)/demos" \
		-author -version \
		-use \
		-doctitle "GL4Java API" \
		gl4java gl4java.jau.awt gl4java.awt gl4java.swing \
		gl4java.system gl4java.applet \
		gl4java.utils \
		gl4java.utils.glut \
		gl4java.utils.glut.fonts \
		gl4java.utils.glut.fonts.data \
		gl4java.utils.textures \
		gl4java.jau.awt.motif \
		gl4java.jau.awt.windows \
		gl4java.jau.awt.macintosh  \
		2>&1 | tee -a errors

javadocw32:
	cd C2J; make htmldoc
	$(JAVADOC) -protected -d docs\\html \
		-sourcepath "$(THISDIR_w32);$(THISDIR_w32)\\demos" \
		-author -version \
		gl4java gl4java.jau.awt gl4java.awt gl4java.swing \
		gl4java.system gl4java.applet \
		gl4java.utils \
		gl4java.utils.glut \
		gl4java.utils.glut.fonts \
		gl4java.utils.glut.fonts.data \
		gl4java.utils.textures \
		gl4java.jau.awt.motif \
		gl4java.jau.awt.windows \
		gl4java.jau.awt.macintosh  \
		2>&1 | tee -a errors

pbinpkg:
	if [ ! -e binpkg ] ; then mkdir binpkg ; fi

java2binpkg: pbinpkg
	rm -f binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-jar.zip
	cd $(DEST_CLASSES_DIR) ; \
	zip -9 $(THISDIR)/binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-jar.zip gl4java.jar

	rm -f binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-glutfonts-jar.zip
	cd $(DEST_CLASSES_DIR) ; \
	zip -9 $(THISDIR)/binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-glutfonts-jar.zip gl4java-glutfonts.jar

	rm -f binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-classes.zip
	cd $(DEST_CLASSES_DIR) ; \
	zip -9r $(THISDIR)/binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-classes.zip \
		gl4java/*.class \
		gl4java/applet \
		gl4java/awt \
		gl4java/swing \
		gl4java/jau \
		gl4java/system \
		gl4java/utils/*.class \
		gl4java/utils/textures \
		gl4java/utils/glut/*.class

	rm -f binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-glutfonts-classes.zip
	cd $(DEST_CLASSES_DIR) ; \
	zip -9r $(THISDIR)/binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-glutfonts-classes.zip \
		gl4java/utils/glut/fonts

	rm -f binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-INSTALLER.zip
	cd .. ; \
	zip -9 GL4Java/binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-INSTALLER.zip \
		GL4Java/Installer/GL4JInstaller.jar \
		GL4Java/Installer/install.sh \
		GL4Java/Installer/install.bat
		
installer2binpkg: pbinpkg
	rm -f binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-installer.zip
	zip -9r $(THISDIR)/binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-installer.zip \
		Installer/*.jar Installer/*.cab Installer/*.html \
		Installer/*.crt

unix2binpkg: pbinpkg java2binpkg
	rm -f binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(UNIXTYPE).zip
	cd $(HOME_LIB_DIR) ; \
	zip -9 $(THISDIR)/binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(UNIXTYPE).zip \
		$(LIBRARY1) $(LIBRARY2) $(LIBRARY3) \
		$(LIBRARY1b) $(LIBRARY2b) $(LIBRARY3b)
	rm -f binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(UNIXTYPE).tar.gz
	cd $(HOME_LIB_DIR) ; \
	tar cf $(THISDIR)/binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(UNIXTYPE).tar \
		$(LIBNAME1).* $(LIBNAME2).* \
		$(LIBNAME1b).* $(LIBNAME2b).* \
		$(LIBNAME3).* $(LIBNAME3b).* \
		$(LIBNAME4).* $(LIBNAME5).* \
		$(LIBNAME6).* $(LIBNAME7).* \
		$(LIBNAME6b).* $(LIBNAME7b).* 
	cd binpkg ; gzip -9 libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(UNIXTYPE).tar

win2binpkg: pbinpkg java2binpkg
	rm -f binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(WIN32TYPE).zip
	cd Win32VC6/libs ; zip -9 ../../binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(WIN32TYPE).zip \
		GL4JavaGljMSJDirect.dll \
		GL4JavaJauGljJNI.dll GL4JavaJauGljJNI12.dll \
		GL4JavaJauGLJNI.dll GL4JavaJauGLJNI12.dll \
		GL4JavaJauGLUJNI.dll GL4JavaJauGLUJNI12.dll

	rm -f binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(WIN32TYPE)-tst.zip
	cd Win32VC6/libs ; zip -9 ../../binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(WIN32TYPE)-tst.zip \
		GL4JavaJauGLJNInf.dll GL4JavaJauGLUJNInf.dll \
		GL4JavaJauGLJNItst.dll GL4JavaJauGLJNI12tst.dll \
		GL4JavaJauGLUJNItst.dll GL4JavaJauGLUJNI12tst.dll

javacalldemos:
	cd demos ; javac *.java
	cd demos/GLLandScape ; javac *.java
	cd demos/HodglimsNeHe ; javac *.java
	cd demos/MiscDemos ; javac *.java
	cd demos/RonsDemos ; javac *.java
	cd demos/SwingDemos ; javac *.java

archivclean: pbinpkg
	if [ ! -e archive ] ; then mkdir archive ; fi
	make clean

archivdemos:
	rm -f GL4Java/archive/GL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-demosV$(DEMORELEASE).zip
	cd ..; \
	zip -9r GL4Java/archive/GL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-demosV$(DEMORELEASE).zip \
		GL4Java/*.txt GL4Java/demos.html GL4Java/demos
	
archivsrc: archivclean
	rm -f GL4Java/archive/GL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-src.*
	cd ..; \
	tar cf GL4Java/archive/GL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-src.tar \
		GL4Java/*.txt GL4Java/symbols.mak.*  GL4Java/makefile  \
		GL4Java/capsapi_classes.zip \
		GL4Java/*.html  GL4Java/C2J  \
		GL4Java/CClassHeaders GL4Java/CNativeCode GL4Java/gl4java \
		GL4Java/Win32VC6 \
		GL4Java/MacOS9PPC/MacOS9PPC \
		GL4Java/MacOS9PPC/java11X \
		GL4Java/docs-src GL4Java/mklibs \
		GL4Java/Installer/*.java GL4Java/Installer/*.skel \
		GL4Java/Installer/*.sh GL4Java/Installer/*.bat \
		GL4Java/Installer/*.txt GL4Java/Installer/*.html \
		GL4Java/Installer/*.crt
	cd archive; \
	        $(GZIP) -9 GL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-src.tar
	

archivdoc: archivclean
	rm -f GL4Java/archive/GL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-doc.zip
	cd ..; \
	zip -9r GL4Java/archive/GL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-doc.zip \
		GL4Java/docs GL4Java/*.txt
	

archiv: archivdemos archivsrc archivdoc

