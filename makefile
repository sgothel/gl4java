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
# make x11strip	: strip the debug info / symbols from the native libs !
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
# make doxygendoc	: doxygendoc
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
LIBMINOR		= 8
LIBBUGFIX		= 0
RELEASE                 = 0

#
# The demo release number
#
DEMORELEASE		= 4

LIBBASENAME1 		= GL4JavaJauGljJNI
LIBNAME1 		= lib$(LIBBASENAME1)
LIBRARY1 		= $(LIBNAME1).so

LIBBASENAME2 		= GL4JavaJauGljJNI12
LIBNAME2 		= lib$(LIBBASENAME2)
LIBRARY2 		= $(LIBNAME2).so

LIBBASENAME3 		= GL4JavaJauGljJNI13
LIBNAME3 		= lib$(LIBBASENAME3)
LIBRARY3 		= $(LIBNAME3).so

LIBBASENAME4 		= GL4JavaJauGljJNI13nf
LIBNAME4 		= lib$(LIBBASENAME4)
LIBRARY4 		= $(LIBNAME4).so

LIBBASENAME5 		= GL4JavaJauGljJNI13tst
LIBNAME5 		= lib$(LIBBASENAME5)
LIBRARY5 		= $(LIBNAME5).so

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
				gl4java/utils/glut/*.class \
				gl4java/utils/glf/*.class \
				gl4java/drawable ; \
			    rm -f gl4java-glutfonts.jar ; \
			    $(JAR) cf gl4java-glutfonts.jar \
				gl4java/utils/glut/fonts ; \
			    rm -f gl4java-glffonts.jar ; \
			    $(JAR) cf gl4java-glffonts.jar \
				gl4java/utils/glf/fonts ; \
			    if [ ! -z "$(JAR_DESTS)" ] ; then \
			        for i in $(JAR_DESTS); do \
			    	    cp -av gl4java*.jar $$i ; done \
			    fi \
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

JAVA_C_MAP6_X11_FILE 	= X11SunJDK13GLDrawableFactory.java

JAVA_C_MAP6_WIN32_FILE 	= Win32SunJDK13GLDrawableFactory.java

JAVA_C_MAP6_MAC_FILE 	= MacSunJDK13GLDrawableFactory.java

#lib GLFFunc 
JAVA_C_MAP7_FILE 	= GLFFuncJNI.java

#lib Tool 
JAVA_C_MAP8_FILE 	= Tool.java

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
		  $(PACKAGEDIR)/GLCapabilities.java \
		  $(PACKAGEDIR)/GLRunnable.java \
		  $(PACKAGEDIR)/GLEnum.java \
		  $(PACKAGEDIR)/GLUEnum.java \
		  $(PACKAGEDIR)/GLFunc.java \
		  $(PACKAGEDIR)/GLUFunc.java \
	          $(PACKAGEDIR)/$(JAVA_C_MAP1_FILE) \
	          $(PACKAGEDIR)/$(JAVA_C_MAP2_FILE) \
	          $(PACKAGEDIR)/$(JAVA_C_MAP3_FILE) \
	          $(PACKAGEDIR)/$(JAVA_C_MAP4_FILE) \
	          $(PACKAGEDIR)/$(JAVA_C_MAP5_FILE) \
		  $(PACKAGEDIR)/utils/$(JAVA_C_MAP8_FILE) \
		  $(PACKAGEDIR)/utils/Test.java \
		  $(PACKAGEDIR)/awt/GLCanvas.java   \
		  $(PACKAGEDIR)/awt/GLAnimCanvas.java \
		  $(PACKAGEDIR)/awt/GLImageCanvas.java \
		  $(PACKAGEDIR)/applet/SimpleGLAnimApplet1.java \
		  $(PACKAGEDIR)/swing/GLJPanel.java \
		  $(PACKAGEDIR)/swing/GLAnimJPanel.java \
		  $(PACKAGEDIR)/swing/SimpleGLJApplet1.java \
		  $(PACKAGEDIR)/utils/glf/GLFEnum.java \
		  $(PACKAGEDIR)/utils/glf/$(JAVA_C_MAP7_FILE) \
		  $(PACKAGEDIR)/utils/glf/GLF.java \
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
		  $(PACKAGEDIR)/utils/textures/TGATextureGrabber.java \
		  $(PACKAGEDIR)/drawable/GLEventListener.java \
		  $(PACKAGEDIR)/drawable/utils/GLEventListenerList.java \
		  $(PACKAGEDIR)/drawable/GLDrawable.java   \
		  $(PACKAGEDIR)/drawable/GLDrawableFactory.java   \
		  $(PACKAGEDIR)/drawable/DummyGLDrawableFactory.java \
		  $(PACKAGEDIR)/drawable/SunJDK13GLDrawableFactory.java

FILES.class 		= ${FILES.java:.java=.class}

FILES_mac.java		= gl4java/jau/awt/macintosh/MacHandleAccess.java \
		          gl4java/drawable/$(JAVA_C_MAP6_MAC_FILE)

FILES_mac.class 	= ${FILES_mac.java:.java=.class}

FILES_w32.java		= gl4java/jau/awt/windows/Win32HandleAccess.java \
		          gl4java/drawable/$(JAVA_C_MAP6_WIN32_FILE)

FILES_w32.class 	= ${FILES_w32.java:.java=.class}

FILES_msw32.java	= $(PACKAGEDIR)/system/GljMSJDirect.java \
			  gl4java/jau/awt/windows/MSWin32HandleAccess.java

FILES_msw32.class 	= ${FILES_msw32.java:.java=.class}

FILES_x11.java		= gl4java/jau/awt/motif/X11HandleAccess.java \
		          gl4java/drawable/$(JAVA_C_MAP6_X11_FILE)

FILES_x11.class 	= ${FILES_x11.java:.java=.class}


#lib GLContext
FILES1.c 		= $(CNATIVEDIR)/OpenGL_X11.c		 \
			  $(CNATIVEDIR)/OpenGL_X11_common.c      \
			  $(CNATIVEDIR)/glcaps.c	         \
			  $(CNATIVEDIR)/gltool.c	         \
			  $(CNATIVEDIR)/glxtool.c	         \
			  $(CNATIVEDIR)/OpenGL_misc.c		 \
			  $(CNATIVEDIR)/jnitools.c	         \
			  $(CNATIVEDIR)/Tool_JNI_funcs.c         \
			  $(CNATIVEDIR)/GLCallbackHelperJNI.c    \
			  $(CNATIVEDIR)/OpenGL_JauJNI_funcs.c    \
			  $(CNATIVEDIR)/OpenGLU_JauJNI_funcs.c   \
			  $(CNATIVEDIR)/glf.c                    \
			  $(CNATIVEDIR)/GLF_JNI_funcs.c          \
			  $(CNATIVEDIR)/GLUCallbackJNI.c

FILES2.c 		= $(CNATIVEDIR)/OpenGL_X11.c		 \
			  $(CNATIVEDIR)/OpenGL_X11_common.c      \
			  $(CNATIVEDIR)/glcaps.c	         \
			  $(CNATIVEDIR)/gltool.c	         \
			  $(CNATIVEDIR)/glxtool.c	         \
			  $(CNATIVEDIR)/OpenGL_misc.c		 \
			  $(CNATIVEDIR)/jni12tools.c	         \
			  $(CNATIVEDIR)/Tool_JNI12_funcs.c       \
			  $(CNATIVEDIR)/GLCallbackHelperJNI.c    \
			  $(CNATIVEDIR)/OpenGL_JauJNI12_funcs.c  \
			  $(CNATIVEDIR)/OpenGLU_JauJNI12_funcs.c \
			  $(CNATIVEDIR)/glf.c                    \
			  $(CNATIVEDIR)/GLF_JNI12_funcs.c        \
			  $(CNATIVEDIR)/GLUCallbackJNI.c

FILES3.c 		= $(CNATIVEDIR)/OpenGL_X11_jawt.c        \
			  $(CNATIVEDIR)/OpenGL_X11_common.c      \
			  $(CNATIVEDIR)/glcaps.c	         \
			  $(CNATIVEDIR)/gltool.c	         \
			  $(CNATIVEDIR)/glxtool.c	         \
			  $(CNATIVEDIR)/jawt_misc.c		 \
			  $(CNATIVEDIR)/GLDrawableFactory_X11_SunJDK13.c \
			  $(CNATIVEDIR)/OpenGL_misc.c		 \
			  $(CNATIVEDIR)/jni12tools.c	         \
			  $(CNATIVEDIR)/Tool_JNI12_funcs.c       \
			  $(CNATIVEDIR)/GLCallbackHelperJNI.c    \
			  $(CNATIVEDIR)/OpenGL_JauJNI12_funcs.c  \
			  $(CNATIVEDIR)/OpenGLU_JauJNI12_funcs.c \
			  $(CNATIVEDIR)/glf.c                    \
			  $(CNATIVEDIR)/GLF_JNI12_funcs.c        \
			  $(CNATIVEDIR)/GLUCallbackJNI.c

FILES4.c 		= $(CNATIVEDIR)/OpenGL_X11_jawt.c        \
			  $(CNATIVEDIR)/OpenGL_X11_common.c      \
			  $(CNATIVEDIR)/glcaps.c	         \
			  $(CNATIVEDIR)/gltool.c	         \
			  $(CNATIVEDIR)/glxtool.c	         \
			  $(CNATIVEDIR)/jawt_misc.c		 \
			  $(CNATIVEDIR)/GLDrawableFactory_X11_SunJDK13.c \
			  $(CNATIVEDIR)/OpenGL_misc.c		 \
			  $(CNATIVEDIR)/jni12tools.c	         \
			  $(CNATIVEDIR)/Tool_JNI12_funcs.c       \
			  $(CNATIVEDIR)/GLCallbackHelperJNI.c    \
			  $(CNATIVEDIR)/OpenGL_JauJNI12nf_funcs.c  \
			  $(CNATIVEDIR)/OpenGLU_JauJNI12nf_funcs.c \
			  $(CNATIVEDIR)/glf.c                    \
			  $(CNATIVEDIR)/GLF_JNI12_funcs.c        \
			  $(CNATIVEDIR)/GLUCallbackJNI.c

FILES5.c 		= $(CNATIVEDIR)/OpenGL_X11_jawt.c        \
			  $(CNATIVEDIR)/OpenGL_X11_common.c      \
			  $(CNATIVEDIR)/glcaps.c	         \
			  $(CNATIVEDIR)/gltool.c	         \
			  $(CNATIVEDIR)/glxtool.c	         \
			  $(CNATIVEDIR)/jawt_misc.c		 \
			  $(CNATIVEDIR)/GLDrawableFactory_X11_SunJDK13.c \
			  $(CNATIVEDIR)/OpenGL_misc.c		 \
			  $(CNATIVEDIR)/jni12tools.c	         \
			  $(CNATIVEDIR)/Tool_JNI12_funcs.c       \
			  $(CNATIVEDIR)/GLCallbackHelperJNI.c    \
			  $(CNATIVEDIR)/OpenGL_JauJNI12tst_funcs.c  \
			  $(CNATIVEDIR)/OpenGLU_JauJNI12tst_funcs.c \
			  $(CNATIVEDIR)/glf.c                    \
			  $(CNATIVEDIR)/GLF_JNI12_funcs.c        \
			  $(CNATIVEDIR)/GLUCallbackJNI.c


FILES1.o 		= ${FILES1.c:.c=.o}
FILES2.o 		= ${FILES2.c:.c=.o}
FILES3.o 		= ${FILES3.c:.c=.o}
FILES4.o 		= ${FILES4.c:.c=.o}
FILES5.o 		= ${FILES5.c:.c=.o}

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

FILE.gen6.x11.h = $(CHEADERDIR)/$(PACKAGEDIR)_drawable_${JAVA_C_MAP6_X11_FILE:.java=.h}

FILE.gen6.win32.h = $(CHEADERDIR)/$(PACKAGEDIR)_drawable_${JAVA_C_MAP6_WIN32_FILE:.java=.h}

FILE.gen6.mac.h = $(CHEADERDIR)/$(PACKAGEDIR)_drawable_${JAVA_C_MAP6_MAC_FILE:.java=.h}

FILE.gen7.h     = $(CHEADERDIR)/$(PACKAGEDIR)_utils_glf_${JAVA_C_MAP7_FILE:.java=.h}

FILE.gen8.h     = $(CHEADERDIR)/$(PACKAGEDIR)_utils_${JAVA_C_MAP8_FILE:.java=.h}

FILES.gen   		= $(FILE.gen1.h) \
			  $(FILE.gen2.h) \
			  $(FILE.gen3.h) \
			  $(FILE.gen4.h) \
			  $(FILE.gen5.h) \
			  $(FILE.gen7.h) \
			  $(FILE.gen8.h)

######################################################################
# SPECIFY ALL SUFFIX-RULES
######################################################################

.SUFFIXES 		: .java .class .h .c .o

#.class.h:
#	$(JAVAH) -jni -d $(CHEADERDIR) $(PACKAGEDIR).${<F:.class=} 2>&1 \
#	| tee -a $(THISDIR)/errors

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

classes			: $(FILES.class) $(FILES_x11.class) \
			  $(DEST_CLASSES_DIR)/gl4java.jar 

x11			: cleanup gljni \
	                  $(FILES.class) $(FILES_x11.class) \
			  $(DEST_CLASSES_DIR)/gl4java.jar \
			  $(FILES.gen) \
			  $(FILE.gen6.x11.h) \
		 	  $(HOME_LIB_DIR)/$(LIBRARY1) \
		 	  $(HOME_LIB_DIR)/$(LIBRARY2) \
		 	  $(HOME_LIB_DIR)/$(LIBRARY3) \
		 	  $(HOME_LIB_DIR)/$(LIBRARY4) \
			  $(HOME_LIB_DIR)/$(LIBRARY5) \
			  invokejvm

x11strip		:
	strip ${HOME_LIB_DIR}/${LIBRARY1}.$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX)
	strip ${HOME_LIB_DIR}/${LIBRARY2}.$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX)
	strip ${HOME_LIB_DIR}/${LIBRARY3}.$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX)
	strip ${HOME_LIB_DIR}/${LIBRARY4}.$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX)
	strip ${HOME_LIB_DIR}/${LIBRARY5}.$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX)

mac			: cleanup gljni \
	                  $(FILES.class) $(FILES_mac.class) \
			  makeJar \
			  $(FILES.gen) \
			  $(FILE.gen6.mac.h) \
                          $(CNATIVEDIR)/winstuff.h 


w32			: cleanup gljni \
	                  $(FILES_w32.class) \
	                  $(FILES_msw32.class) \
			  $(FILES.class) \
			  $(DEST_CLASSES_DIR)/gl4java.jar \
			  $(FILES.gen) \
			  $(FILE.gen6.win32.h) \
                          $(CNATIVEDIR)/winstuff.h 

#gljni			: tools gl2j gl2c
gljni			: gl2j gl2c


invokejvm: $(CNATIVEDIR)/invokejvm.o
	gcc -o invokejvm $(CNATIVEDIR)/invokejvm.o \
	    -L$(JAVAOSLIB)/client -ljvm -ldl

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

$(HOME_LIB_DIR)/$(LIBRARY2): $(FILES2.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME2}.*
	$(MKEXP) $(LIBNAME2) $(FILES2.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME2) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES2.o) $(LIBS)

$(HOME_LIB_DIR)/$(LIBRARY3): $(FILES3.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME3}.*
	$(MKEXP) $(LIBNAME3) $(FILES3.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME3) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES3.o) $(LIBS) -L$(JAVAOSLIB) \
		 -ljawt

$(HOME_LIB_DIR)/$(LIBRARY4): $(FILES4.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME4}.*
	$(MKEXP) $(LIBNAME4) $(FILES4.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME4) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES4.o) $(LIBS) -L$(JAVAOSLIB) \
		 -ljawt

$(HOME_LIB_DIR)/$(LIBRARY5): $(FILES5.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME5}.*
	$(MKEXP) $(LIBNAME5) $(FILES5.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME5) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES5.o) $(LIBS) -L$(JAVAOSLIB) \
		 -ljawt

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

$(FILE.gen1.h): $(PACKAGEDIR)/${JAVA_C_MAP1_FILE:.java=.class}
	rm -f $(FILE.gen1.h)
	$(JAVAH) -jni -d $(CHEADERDIR) $(PACKAGEDIR).${JAVA_C_MAP1_FILE:.java=} 2>&1 \
	| tee -a $(THISDIR)/errors

$(CNATIVEDIR)/OpenGL_misc.o: $(CNATIVEDIR)/OpenGL_misc.c makefile
	$(CC) $(CC_OPTS) \
	      -D__LIB_VERSION__=\"$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)\" \
	      -o $@ $< 2>&1 | tee -a $(THISDIR)/errors

#lib GLFunc - 1
$(CNATIVEDIR)/OpenGL_JauJNI_funcs.o: ${FILE.gen2.h} \
                                        $(CNATIVEDIR)/jnitools.h \
				        $(CNATIVEDIR)/GLCallbackHelperJNI.h

$(FILE.gen2.h): $(PACKAGEDIR)/${JAVA_C_MAP2_FILE:.java=.class}
	rm -f $(FILE.gen2.h)
	$(JAVAH) -jni -d $(CHEADERDIR) $(PACKAGEDIR).${JAVA_C_MAP2_FILE:.java=} 2>&1 \
	| tee -a $(THISDIR)/errors


#lib GLUFunc - 1
$(CNATIVEDIR)/OpenGLU_JauJNI_funcs.o: ${FILE.gen3.h} \
                                        $(CNATIVEDIR)/jnitools.h \
				        $(CNATIVEDIR)/GLCallbackHelperJNI.h

$(FILE.gen3.h): $(PACKAGEDIR)/${JAVA_C_MAP3_FILE:.java=.class}
	rm -f $(FILE.gen3.h)
	$(JAVAH) -jni -d $(CHEADERDIR) $(PACKAGEDIR).${JAVA_C_MAP3_FILE:.java=} 2>&1 \
	| tee -a $(THISDIR)/errors

#lib GLFunc - 2
$(CNATIVEDIR)/OpenGL_JauJNInf_funcs.o: ${FILE.gen4.h} \
                                        $(CNATIVEDIR)/jnitools.h \
				        $(CNATIVEDIR)/GLCallbackHelperJNI.h

$(FILE.gen4.h): $(PACKAGEDIR)/${JAVA_C_MAP4_FILE:.java=.class}
	rm -f $(FILE.gen4.h)
	$(JAVAH) -jni -d $(CHEADERDIR) $(PACKAGEDIR).${JAVA_C_MAP4_FILE:.java=} 2>&1 \
	| tee -a $(THISDIR)/errors

#lib GLUFunc - 2
$(CNATIVEDIR)/OpenGLU_JauJNInf_funcs.o: ${FILE.gen5.h} \
                                        $(CNATIVEDIR)/jnitools.h \
				        $(CNATIVEDIR)/GLCallbackHelperJNI.h

$(FILE.gen5.h): $(PACKAGEDIR)/${JAVA_C_MAP5_FILE:.java=.class}
	rm -f $(FILE.gen5.h)
	$(JAVAH) -jni -d $(CHEADERDIR) $(PACKAGEDIR).${JAVA_C_MAP5_FILE:.java=} 2>&1 \
	| tee -a $(THISDIR)/errors

$(FILE.gen6.x11.h): $(PACKAGEDIR)/drawable/${JAVA_C_MAP6_X11_FILE:.java=.class}
	rm -f $(FILE.gen6.x11.h)
	$(JAVAH) -jni -d $(CHEADERDIR) \
	      $(PACKAGEDIR).drawable.${JAVA_C_MAP6_X11_FILE:.java=} 2>&1 \
	| tee -a $(THISDIR)/errors

$(FILE.gen6.win32.h): $(PACKAGEDIR)/drawable/${JAVA_C_MAP6_WIN32_FILE:.java=.class}
	rm -f $(FILE.gen6.win32.h)
	$(JAVAH) -jni -d $(CHEADERDIR) \
	      $(PACKAGEDIR).drawable.${JAVA_C_MAP6_WIN32_FILE:.java=} 2>&1 \
	| tee -a $(THISDIR)/errors

$(FILE.gen6.mac.h): $(PACKAGEDIR)/drawable/${JAVA_C_MAP6_MAC_FILE:.java=.class}
	rm -f $(FILE.gen6.mac.h)
	$(JAVAH) -jni -d $(CHEADERDIR) \
	      $(PACKAGEDIR).drawable.${JAVA_C_MAP6_MAC_FILE:.java=} 2>&1 \
	| tee -a $(THISDIR)/errors

$(CNATIVEDIR)/GLF_JNI12_funcs.o: ${FILE.gen7.h}

$(CNATIVEDIR)/GLF_JNI_funcs.o: ${FILE.gen7.h}

$(CNATIVEDIR)/Tool_JNI12_funcs.o: ${FILE.gen8.h}

$(CNATIVEDIR)/Tool_JNI_funcs.o: ${FILE.gen8.h}

$(FILE.gen7.h): $(PACKAGEDIR)/utils/glf/${JAVA_C_MAP7_FILE:.java=.class}
	rm -f $(FILE.gen7.h)
	$(JAVAH) -jni -d $(CHEADERDIR) \
	      $(PACKAGEDIR).utils.glf.${JAVA_C_MAP7_FILE:.java=} 2>&1 \
	| tee -a $(THISDIR)/errors

$(FILE.gen8.h): $(PACKAGEDIR)/utils/${JAVA_C_MAP8_FILE:.java=.class}
	rm -f $(FILE.gen8.h)
	$(JAVAH) -jni -d $(CHEADERDIR) \
	      $(PACKAGEDIR).utils.${JAVA_C_MAP8_FILE:.java=} 2>&1 \
	| tee -a $(THISDIR)/errors

$(CNATIVEDIR)/gltool.o:  $(CNATIVEDIR)/gltool.h \
                      $(CNATIVEDIR)/glxtool.h $(CNATIVEDIR)/glcaps.h \
		      $(CNATIVEDIR)/gl-disp-var.hc   $(CNATIVEDIR)/glu-disp-fetch.hc \
		      $(CNATIVEDIR)/gl-disp-fetch.hc $(CNATIVEDIR)/glu-disp-var.hc

$(CNATIVEDIR)/glxtool.o: $(CNATIVEDIR)/gltool.h \
                      $(CNATIVEDIR)/glxtool.h $(CNATIVEDIR)/glcaps.h \
		      $(CNATIVEDIR)/glx-disp-fetch.hc $(CNATIVEDIR)/glx-disp-var.hc


$(CNATIVEDIR)/glxtool.h: $(CNATIVEDIR)/glx-disp-var.h

$(CNATIVEDIR)/gltool.h:  $(CNATIVEDIR)/gl-disp-var.h $(CNATIVEDIR)/glu-disp-var.h

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

cleanup: $(CHEADERDIR) archive binpkg
	rm -f errors

cleanupw32: cleanup Win32VC6/libs Win32VC6/temp
	rm -rvf Win32VC6/libs/*
	rm -fv `find Win32VC6 -name \*.plg -o -name \*.idb -o -name \*.opt -o -name \*.ncb`

Win32VC6/libs:
	mkdir -p Win32VC6/libs

Win32VC6/temp:
	mkdir -p Win32VC6/temp

archive:
	mkdir archive

binpkg:
	mkdir binpkg


$(CHEADERDIR):
	mkdir $(CHEADERDIR)

# clean out the *.o files and machine generated files from javah
cleannative:
	rm -f `find . -name \*~ -o -name \*.swp -o -name \*.bak -o -name \*.obj -o -name \*.o` \
	      $(FILES1.o) $(FILES2.o) \
	      $(FILES3.o) $(FILES4.o) $(FILES5.o)  \
	      errors gl4java/*~ CNativeCode/*~ \
	      $(HOME_LIB_DIR)/${LIBNAME1}.* $(HOME_LIB_DIR)/${LIBNAME2}.* \
	      $(HOME_LIB_DIR)/${LIBNAME3}.* $(HOME_LIB_DIR)/${LIBNAME4}.* \
	      $(HOME_LIB_DIR)/${LIBNAME5}.* \
	      $(CNATIVEDIR)/winstuff.h
	cd demos/natives/x11 ; make clean

# clean out the *.o files and machine generated files from javah
clean: cleannative cleanupw32 cleanhtmldoc cleantemp

cleantemp:
	rm -f $(CHEADERDIR)/* errors gl4java/*~ CNativeCode/*~ \
	      $(FILE.gen1.h) $(FILE.gen2.h) \
	      $(FILE.gen3.h) $(FILE.gen4.h) $(FILE.gen5.h)
	rm -f `find . -name \*.class`
	rm -f `find . -name discrete.log`
	cd demos ; make clean

cleanhtmldoc:
	rm -rf doxygens/html
	rm -rf docs/html
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
	cp -a gl4java/utils/glf/fonts $(DEST_CLASSES_DIR)/gl4java/utils/glf
	echo classes copied
	chmod -R 755 $(DEST_CLASSES_DIR)/gl4java
	$(MK_GL4JAVA_JAR)

$(DEST_CLASSES_DIR)/gl4java.jar: $(FILES.class)
	$(MK_GL4JAVA_JAR)

makeJar:
	$(MK_GL4JAVA_JAR)

htmldoc: cleanhtmldoc javadoc latexdoc 
	cp -Rf docs-src/images docs/html/.

htmldocw32: latexdoc javadocw32

latexdoc: 
	cd docs-src; UpdateHtml

doxygendoc:
	doxygen

javadoc:
	cd C2J; make htmldoc
	$(JAVADOC) -J-Xmx64m -protected -d docs/html \
		-sourcepath "$(JDK_HOME)/lib/classes.zip:$(THISDIR):$(THISDIR)/demos" \
		-author -version \
		-use \
		-doctitle "GL4Java API" \
		gl4java gl4java.jau.awt gl4java.awt gl4java.swing \
		gl4java.system gl4java.applet \
		gl4java.drawable \
		gl4java.drawable.utils \
		gl4java.utils \
		gl4java.utils.glf \
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
		gl4java.drawable \
		gl4java.drawable.utils \
		gl4java.utils \
		gl4java.utils.glf \
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

	rm -f binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-glffonts-jar.zip
	cd $(DEST_CLASSES_DIR) ; \
	zip -9 $(THISDIR)/binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-glffonts-jar.zip gl4java-glffonts.jar

	rm -f binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-classes.zip
	cd $(DEST_CLASSES_DIR) ; \
	zip -9r $(THISDIR)/binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-classes.zip \
		gl4java/*.class \
		gl4java/applet \
		gl4java/awt \
		gl4java/swing \
		gl4java/jau \
		gl4java/system \
		gl4java/drawable \
		gl4java/utils/*.class \
		gl4java/utils/textures \
		gl4java/utils/glf/*.class \
		gl4java/utils/glut/*.class

	rm -f binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-glutfonts-classes.zip
	cd $(DEST_CLASSES_DIR) ; \
	zip -9r $(THISDIR)/binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-glutfonts-classes.zip \
		gl4java/utils/glut/fonts

	rm -f binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-glffonts.zip
	cd $(DEST_CLASSES_DIR) ; \
	zip -9r $(THISDIR)/binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-glffonts.zip \
		gl4java/utils/glf/fonts

	rm -f binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-INSTALLER.zip
	cd .. ; \
	zip -9 GL4Java/binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-INSTALLER.zip \
		GL4Java/Installer/GL4JInstaller.jar \
		GL4Java/Installer/install*.sh \
		GL4Java/Installer/install*.bat
		
installer2binpkg: pbinpkg
	rm -f binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-installer.zip
	zip -9r $(THISDIR)/binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-installer.zip \
		Installer/*.jar Installer/*.cab Installer/*.html \
		Installer/*.crt

unix2binpkg: pbinpkg java2binpkg
	rm -f binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(UNIXTYPE).zip
	cd $(HOME_LIB_DIR) ; \
	zip -9 $(THISDIR)/binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(UNIXTYPE).zip \
		$(LIBRARY1) $(LIBRARY2) $(LIBRARY3) 
	rm -f binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(UNIXTYPE).tar.gz
	cd $(HOME_LIB_DIR) ; \
	tar cf $(THISDIR)/binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(UNIXTYPE).tar \
		$(LIBNAME1).* $(LIBNAME2).* \
		$(LIBNAME3).* \
		$(LIBNAME4).* $(LIBNAME5).* 
	cd binpkg ; gzip -9 libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(UNIXTYPE).tar

win2binpkg: pbinpkg java2binpkg
	rm -f binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(WIN32TYPE).zip
	cd Win32VC6/libs ; zip -9 ../../binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(WIN32TYPE).zip \
		GL4JavaGljMSJDirect.dll \
		GL4JavaJauGljJNI.dll GL4JavaJauGljJNI12.dll \
		GL4JavaJauGljJNI13.dll 

	rm -f binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(WIN32TYPE)-tst.zip
	cd Win32VC6/libs ; zip -9 ../../binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(WIN32TYPE)-tst.zip \
		GL4JavaJauGljJNI13nf.dll GL4JavaJauGljJNI13tst.dll

javacalldemos:
	cd demos ; javac *.java
	cd demos/GLLandScape ; javac *.java
	cd demos/HodglimsNeHe ; javac *.java
	cd demos/MiscDemos ; javac *.java
	cd demos/RonsDemos ; javac *.java
	cd demos/SwingDemos ; javac *.java

archivclean: pbinpkg cleannative cleanupw32 cleantemp
	if [ ! -e archive ] ; then mkdir archive ; fi

archivdemos:
	rm -f archive/GL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-demosV$(DEMORELEASE).zip
	cd ..; \
	zip -9r GL4Java/archive/GL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-demosV$(DEMORELEASE).zip \
		GL4Java/*.txt GL4Java/demos.html GL4Java/demos
	
archivsrc: archivclean
	rm -f archive/GL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-src.*
	cd ..; \
	tar cf GL4Java/archive/GL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-src.tar \
		GL4Java/*.txt GL4Java/symbols.mak.*  GL4Java/makefile  \
		GL4Java/capsapi_classes.zip \
		GL4Java/*.html  GL4Java/C2J  \
		GL4Java/$(CHEADERDIR) GL4Java/CNativeCode GL4Java/gl4java \
		GL4Java/Win32VC6 \
		GL4Java/MacOS9PPC/MacOS9PPC \
		GL4Java/MacOS9PPC/java11X \
		GL4Java/docs-src GL4Java/mklibs \
		GL4Java/Installer/*.java GL4Java/Installer/*.skel \
		GL4Java/Installer/*.sh GL4Java/Installer/*.bat \
		GL4Java/Installer/*.txt GL4Java/Installer/*.html 

	cd archive; \
	        $(GZIP) -9 GL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-src.tar
	

archivdoc:
	rm -f archive/GL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-doc.zip
	cd ..; \
	zip -9r GL4Java/archive/GL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-doc.zip \
		GL4Java/docs GL4Java/doxygens GL4Java/*.txt
	

archiv: archivdemos archivsrc archivdoc

