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
# to create all demos invoke
#
# make javacalldemos
#
#
# to put all together as an tar-gzip archive in the archive-dir, invoke:
#
# make archiv
#
#
# for cleanup (without archive and binpkg !!) invoke:
#
# make clean		: only temp-files (native)
# make cleannative	: only temp-files (native)
# make cleanall		: all temp-,java-,class-,and native-files
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
LIBBUGFIX		= 3
RELEASE                 = 0

#
# The demo release number
#
DEMORELEASE		= 9

LIBBASENAME1 		= GL4JavaJauGljJNI
LIBNAME1 		= lib$(LIBBASENAME1)
LIBRARY1 		= $(LIBNAME1).so

LIBBASENAME2 		= GL4JavaJauGljJNI12
LIBNAME2 		= lib$(LIBBASENAME2)
LIBRARY2 		= $(LIBNAME2).so

LIBBASENAME3 		= GL4JavaJauGljJNI13
LIBNAME3 		= lib$(LIBBASENAME3)
LIBRARY3 		= $(LIBNAME3).so

LIBBASENAME4 		= GL4JavaJauGljJNI14
LIBNAME4 		= lib$(LIBBASENAME4)
LIBRARY4 		= $(LIBNAME4).so

LIBBASENAME3_NF 	= GL4JavaJauGljJNI13nf
LIBNAME3_NF 		= lib$(LIBBASENAME3_NF)
LIBRARY3_NF 		= $(LIBNAME3_NF).so

LIBBASENAME3_TST 	= GL4JavaJauGljJNI13tst
LIBNAME3_TST 		= lib$(LIBBASENAME3_TST)
LIBRARY3_TST 		= $(LIBNAME3_TST).so

ifdef JAVAC_14
	LIB4JDK14=$(HOME_LIB_DIR)/$(LIBRARY4)
	LIBRARY4JDK14=$(LIBRARY4)
	LIBNAME4JDK14=$(LIBNAME4)
else
	LIBRARY4JDK14=
	LIBNAME4JDK14=
	LIB4JDK14=
endif

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
FILES_WITH_NATIVES_13 = \
	$(PACKAGEDIR)/GLContext.java \
	$(PACKAGEDIR)/GLFuncJauJNI.java \
	$(PACKAGEDIR)/GLFuncJauJNInf.java \
	$(PACKAGEDIR)/GLUFuncJauJNI.java \
	$(PACKAGEDIR)/GLUFuncJauJNInf.java \
	$(PACKAGEDIR)/utils/glf/GLFFuncJNI.java \
	$(PACKAGEDIR)/utils/Tool.java

# Add on JDK 1.4 files if JAVAC_14 is available
ifdef JAVAC_14
FILES_WITH_NATIVES_14 = \
	$(PACKAGEDIR)/GLFunc14JauJNI.java \
	$(PACKAGEDIR)/GLUFunc14JauJNI.java \
	$(PACKAGEDIR)/utils/DirectBufferCleanup.java
else
FILES_WITH_NATIVES_14 = 
endif

# Platform-dependent .java files with natives
FILES_WITH_NATIVES_MAC = $(PACKAGEDIR)/drawable/MacSunJDK13GLDrawableFactory.java
FILES_WITH_NATIVES_W32 = $(PACKAGEDIR)/drawable/Win32SunJDK13GLDrawableFactory.java
FILES_WITH_NATIVES_X11 = $(PACKAGEDIR)/drawable/X11SunJDK13GLDrawableFactory.java

# Other Platform-dependent .java files (can only be compiled with JDK
# 1.3 and earlier)
ifdef JAVAC_13
FILES_MAC_JDK13   = $(PACKAGEDIR)/jau/awt/macintosh/MacHandleAccess.java
FILES_W32_JDK13   = $(PACKAGEDIR)/jau/awt/windows/Win32HandleAccess.java
FILES_X11_JDK13   = $(PACKAGEDIR)/jau/awt/motif/X11HandleAccess.java
HAVE_JAVAC_13     = 1
endif

# Determination of which is necessary.
# Note that we add all of them for targets such as "cleanall" which
# use an rm -f and therefore won't fail if the file is not found.
ifeq ($(MAKECMDGOALS),mac)
FILES_WITH_NATIVES_13 += $(FILES_WITH_NATIVES_MAC)
FILES_JDK13 = $(FILES_MAC_JDK13)
else
 ifeq ($(MAKECMDGOALS),w32)
  FILES_WITH_NATIVES_13 += $(FILES_WITH_NATIVES_W32)
  FILES_JDK13 = $(FILES_W32_JDK13)
 else
  ifeq ($(MAKECMDGOALS),x11)
   FILES_WITH_NATIVES_13 += $(FILES_WITH_NATIVES_X11)
   FILES_JDK13 = $(FILES_X11_JDK13)
  else
   FILES_WITH_NATIVES_13 += $(FILES_WITH_NATIVES_MAC) $(FILES_WITH_NATIVES_W32) $(FILES_WITH_NATIVES_X11)
   FILES_JDK13 = $(FILES_MAC_JDK13) $(FILES_W32_JDK13) $(FILES_X11_JDK13)
   SUPPRESS_JDK13_RULES = 1
  endif
 endif
 ifdef HAVE_JAVAC_13
  FILES_JDK13.class = $(patsubst %,$(DEST_CLASSES_DIR)/%,${FILES_JDK13:.java=.class})
  ifndef SUPPRESS_JDK13_RULES
$(FILES_JDK13.class): $(FILES_JDK13)
	$(JAVAC_13) -O -deprecation -d $(DEST_CLASSES_DIR) $^ | tee -a errors
  endif
 endif
endif

#
# Header files from above
#
FILES_WITH_NATIVES_13.class = $(patsubst %,$(DEST_CLASSES_DIR)/%,$(FILES_WITH_NATIVES_13:.java=.class))
FILES_WITH_NATIVES_14.class = $(patsubst %,$(DEST_CLASSES_DIR)/%,$(FILES_WITH_NATIVES_14:.java=.class))
FILES_WITH_NATIVES.names = $(subst /,.,$(FILES_WITH_NATIVES_13:.java=)) \
                           $(subst /,.,$(FILES_WITH_NATIVES_14:.java=))
FILES.gen = $(patsubst %,$(CHEADERDIR)/%,$(subst /,_,$(FILES_WITH_NATIVES_13:.java=.h))) \
	    $(patsubst %,$(CHEADERDIR)/%,$(subst /,_,$(FILES_WITH_NATIVES_14:.java=.h)))

#
# This is the stuff for the MS-JVM
#
ifdef MSJAVAC
FILES_MSW32       = $(PACKAGEDIR)/system/GljMSJDirect.java \
		    $(PACKAGEDIR)/jau/awt/windows/MSWin32HandleAccess.java
FILES_MSW32.class = $(FILES_MSW32:.java=.class)
$(FILES_MSW32.class): $(FILES_MSW32)
	$(MSJAVAC) -O -cp:p .. $^ 2>&1 | tee -a errors
	mkdir -p $(DEST_CLASSES_DIR)/${@D}
	cp ${@D}/*.class $(DEST_CLASSES_DIR)/${@D}
endif
# Otherwise, if no MSJAVAC available, we still need to compile
# GljMSJDirect to get GLContext to compile
ifndef MSJAVAC
FILES_MSW32       = $(PACKAGEDIR)/system/GljMSJDirect.java
FILES_MSW32.class = $(patsubst %,$(DEST_CLASSES_DIR)/%,${FILES_MSW32:.java=.class})
$(FILES_MSW32.class): $(FILES_MSW32)
	$(JAVAC_13) -O -deprecation -d $(DEST_CLASSES_DIR) $^ | tee -a errors
endif

#
# Files in all targets
#

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

FILES_13.java 	= $(PACKAGEDIR)/GL4JavaInitException.java \
		  $(PACKAGEDIR)/jau/awt/WinHandleAccess.java \
		  $(PACKAGEDIR)/GL4JavaReflections.java \
		  $(PACKAGEDIR)/GLCapabilities.java \
		  $(PACKAGEDIR)/GLRunnable.java \
		  $(PACKAGEDIR)/GLEnum.java \
		  $(PACKAGEDIR)/GLUEnum.java \
		  $(PACKAGEDIR)/GLFunc.java \
		  $(PACKAGEDIR)/GLUFunc.java \
		  $(FILES_WITH_NATIVES_13) \
		  $(PACKAGEDIR)/utils/Test.java \
		  $(PACKAGEDIR)/awt/GLCanvas.java   \
		  $(PACKAGEDIR)/awt/GLAnimCanvas.java \
		  $(PACKAGEDIR)/awt/GLImageCanvas.java \
		  $(PACKAGEDIR)/awt/GLOffScreenDrawable.java   \
		  $(PACKAGEDIR)/applet/SimpleGLApplet1.java \
		  $(PACKAGEDIR)/applet/SimpleGLAnimApplet1.java \
		  $(PACKAGEDIR)/swing/GLJPanel.java \
		  $(PACKAGEDIR)/swing/GLAnimJPanel.java \
		  $(PACKAGEDIR)/swing/SimpleGLJApplet1.java \
		  $(PACKAGEDIR)/utils/glf/GLFEnum.java \
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

FILES_14.java 	= $(PACKAGEDIR)/GLFunc14.java \
		  $(PACKAGEDIR)/GLUFunc14.java \
		  $(FILES_WITH_NATIVES_14)

FILES_13.class 		= $(patsubst %,$(DEST_CLASSES_DIR)/%,${FILES_13.java:.java=.class})

FILES_14.class 		= $(patsubst %,$(DEST_CLASSES_DIR)/%,${FILES_14.java:.java=.class})

FILES.class		= $(FILES_13.class) $(FILES_14.class)

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
			  $(CNATIVEDIR)/OpenGL_JauJNI12_funcs.c  \
			  $(CNATIVEDIR)/OpenGLU_JauJNI12_funcs.c \
			  $(CNATIVEDIR)/OpenGL_JauJNI14_funcs.c  \
			  $(CNATIVEDIR)/OpenGLU_JauJNI14_funcs.c \
			  $(CNATIVEDIR)/gl4java_utils_DirectBufferCleanup.c \
			  $(CNATIVEDIR)/glf.c                    \
			  $(CNATIVEDIR)/GLF_JNI12_funcs.c        \
			  $(CNATIVEDIR)/GLUCallbackJNI.c

FILES3_NF.c 		= $(CNATIVEDIR)/OpenGL_X11_jawt.c        \
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

FILES3_TST.c 		= $(CNATIVEDIR)/OpenGL_X11_jawt.c        \
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
FILES3_NF.o 		= ${FILES3_NF.c:.c=.o}
FILES3_TST.o 		= ${FILES3_TST.c:.c=.o}

######################################################################
# SPECIFY ALL SUFFIX-RULES
######################################################################

.SUFFIXES 		: .c .o

.c.o:
	$(CC) $(CC_OPTS) -o $@ $< 2>&1 | tee -a $(THISDIR)/errors

######################################################################
# SPECIFY ALL TARGETS -- MAIN TARGETS
######################################################################

# Main build rule
$(FILES_13.class)           : $(FILES_13.java)
	$(JAVAC_13) -O -deprecation -d $(DEST_CLASSES_DIR) $(FILES_13.java)

$(FILES_14.class)           : $(FILES_14.java)
	$(JAVAC_14) -O -deprecation -d $(DEST_CLASSES_DIR) $(FILES_14.java)

x11			: cleanup gljni \
	                  $(FILES_13.class) $(FILES_14.class) \
			  $(FILES_JDK13.class) \
			  $(DEST_CLASSES_DIR)/gl4java.jar \
			  $(FILES.gen) \
		 	  $(HOME_LIB_DIR)/$(LIBRARY1) \
		 	  $(HOME_LIB_DIR)/$(LIBRARY2) \
		 	  $(HOME_LIB_DIR)/$(LIBRARY3) \
		 	  $(LIB4JDK14) \
		 	  $(HOME_LIB_DIR)/$(LIBRARY3_NF) \
			  $(HOME_LIB_DIR)/$(LIBRARY3_TST) \
			  invokejvm

x11strip		:
	strip ${HOME_LIB_DIR}/${LIBRARY1}.$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX)
	strip ${HOME_LIB_DIR}/${LIBRARY2}.$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX)
	strip ${HOME_LIB_DIR}/${LIBRARY3}.$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX)
	strip ${HOME_LIB_DIR}/${LIBRARY3_NF}.$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX)
	strip ${HOME_LIB_DIR}/${LIBRARY3_TST}.$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX)
	strip ${HOME_LIB_DIR}/${LIBRARY4}.$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX)

mac			: cleanup gljni \
	                  $(FILES_13.class) $(FILES_14.class) \
			  $(FILES_JDK13.class) \
			  makeJar \
			  $(FILES.gen) \
                          $(CNATIVEDIR)/winstuff.h 


w32			: cleanup gljni \
	                  $(FILES_13.class) $(FILES_14.class) \
			  $(FILES_JDK13.class) \
	                  $(FILES_MSW32.class) \
			  $(DEST_CLASSES_DIR)/gl4java.jar \
			  $(FILES.gen) \
                          $(CNATIVEDIR)/winstuff.h 

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
	         $(FILES3.o) $(LIBS) -L$(JAVAOSLIB)

$(HOME_LIB_DIR)/$(LIBRARY4): $(FILES4.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME4}.*
	$(MKEXP) $(LIBNAME4) $(FILES4.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME4) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES4.o) $(LIBS) -L$(JAVAOSLIB)

$(HOME_LIB_DIR)/$(LIBRARY3_NF): $(FILES3_NF.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME3_NF}.*
	$(MKEXP) $(LIBNAME3_NF) $(FILES3_NF.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME3_NF) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES3_NF.o) $(LIBS) -L$(JAVAOSLIB)

$(HOME_LIB_DIR)/$(LIBRARY3_TST): $(FILES3_TST.o)
	rm -f ${HOME_LIB_DIR}/${LIBNAME3_TST}.*
	$(MKEXP) $(LIBNAME3_TST) $(FILES3_TST.o)
	$(MKLIB) $(HOME_LIB_DIR) \
	         $(LIBNAME3_TST) $(LIBMAJOR) $(LIBMINOR) $(LIBBUGFIX) \
	         $(FILES3_TST.o) $(LIBS) -L$(JAVAOSLIB)

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
$(CNATIVEDIR)/OpenGL_X11.o: ${FILES.gen}
$(CNATIVEDIR)/OpenGL_misc.o: ${FILES.gen}

#
# Generated header files
#
$(FILES.gen): $(FILES_WITH_NATIVES_13.class) $(FILES_WITH_NATIVES_14.class)
	rm -f $(FILES.gen)
	$(JAVAH) -jni -d $(CHEADERDIR) $(FILES_WITH_NATIVES.names) 2>&1 | tee -a $(THISDIR)/errors

$(CNATIVEDIR)/OpenGL_misc.o: $(CNATIVEDIR)/OpenGL_misc.c makefile
	$(CC) $(CC_OPTS) \
	      -D__LIB_VERSION__=\"$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)\" \
	      -o $@ $< 2>&1 | tee -a $(THISDIR)/errors

#lib GLFunc - 1
$(CNATIVEDIR)/OpenGL_JauJNI_funcs.o: ${FILES.gen} \
                                        $(CNATIVEDIR)/jnitools.h \
				        $(CNATIVEDIR)/GLCallbackHelperJNI.h

#lib GLUFunc - 1
$(CNATIVEDIR)/OpenGLU_JauJNI_funcs.o: ${FILES.gen} \
                                        $(CNATIVEDIR)/jnitools.h \
				        $(CNATIVEDIR)/GLCallbackHelperJNI.h

#lib GLFunc - 2
$(CNATIVEDIR)/OpenGL_JauJNInf_funcs.o: ${FILES.gen} \
                                        $(CNATIVEDIR)/jnitools.h \
				        $(CNATIVEDIR)/GLCallbackHelperJNI.h

#lib GLUFunc - 2
$(CNATIVEDIR)/OpenGLU_JauJNInf_funcs.o: ${FILES.gen} \
                                        $(CNATIVEDIR)/jnitools.h \
				        $(CNATIVEDIR)/GLCallbackHelperJNI.h

$(CNATIVEDIR)/GLF_JNI12_funcs.o: ${FILES.gen}

$(CNATIVEDIR)/GLF_JNI_funcs.o: ${FILES.gen}

$(CNATIVEDIR)/Tool_JNI12_funcs.o: ${FILES.gen}

$(CNATIVEDIR)/Tool_JNI_funcs.o: ${FILES.gen}

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

#
# Cleanup Section
#

cleanall: clean
	rm -f $(FILES.class) $(FILES_JDK13.class) $(FILES_MSW32.class) 
	for i in $$(find . -name \*.class) ; do \
		rm -f $$i ; \
	done
	cd demos ; make clean
	cd demos/natives/x11 ; make cleanall

clean: cleannative cleanupw32 cleanhtmldoc cleantemp

cleannative:
	rm -f `find . -name \*~ -o -name \*.swp -o -name \*.bak -o -name \*.obj -o -name \*.o` \
	      $(FILES1.o) $(FILES2.o) \
	      $(FILES3.o) $(FILES4.o) $(FILES3_NF.o) $(FILES3_TST.o)  \
	      errors gl4java/*~ CNativeCode/*~ \
	      $(HOME_LIB_DIR)/${LIBNAME1}.* $(HOME_LIB_DIR)/${LIBNAME2}.* \
	      $(HOME_LIB_DIR)/${LIBNAME3}.* $(HOME_LIB_DIR)/${LIBNAME3_NF}.* \
	      $(HOME_LIB_DIR)/${LIBNAME3_TST}.* \
	      $(CNATIVEDIR)/winstuff.h
	cd demos/natives/x11 ; make clean

cleanupw32: cleanup Win32VC6/libs Win32VC6/temp
	rm -rvf Win32VC6/libs/*
	rm -fv `find Win32VC6 -name \*.plg -o -name \*.idb -o -name \*.opt -o -name \*.ncb`

cleanup: $(CHEADERDIR) archive binpkg
	rm -f errors

cleantemp:
	rm -f $(CHEADERDIR)/* errors $(FILES.gen)
	rm -f `find . -name *~`
	rm -f `find . -iname errors`
	rm -f `find . -iname *.log`
	rm -f `find . -iname *.tmp`
	cd demos ; make clean

cleanhtmldoc:
	rm -rf doxygens/html
	rm -rf docs/html
	rm -f docs/*.ps
	rm -f docs/*.pdf

archivclean: pbinpkg cleannative cleanupw32 cleantemp
	if [ ! -e archive ] ; then mkdir archive ; fi

#
# Jar Section
#

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

#
# Document Section
#

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

#
# BINPKG Section
#

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

	rm -f binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-glffonts-classes.zip
	cd $(DEST_CLASSES_DIR) ; \
	zip -9r $(THISDIR)/binpkg/gl4java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-glffonts-classes.zip \
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
		$(LIBRARY1) $(LIBRARY2) $(LIBRARY3) $(LIBRARY4JDK14)
	rm -f binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(UNIXTYPE).tar.gz
	cd $(HOME_LIB_DIR) ; \
	tar cf $(THISDIR)/binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(UNIXTYPE).tar \
		$(LIBNAME1).* $(LIBNAME2).* \
		$(LIBNAME3).* $$(find . -iname $(LIBNAME4JDK14).so\*) \
		$(LIBNAME3_NF).* $(LIBNAME3_TST).* 
	cd binpkg ; gzip -9 libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(UNIXTYPE).tar

win2binpkg: pbinpkg java2binpkg
	rm -f binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(WIN32TYPE).zip
	cd Win32VC6/libs ; zip -9 ../../binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(WIN32TYPE).zip \
		GL4JavaGljMSJDirect.dll \
		GL4JavaJauGljJNI.dll GL4JavaJauGljJNI12.dll \
		GL4JavaJauGljJNI13.dll GL4JavaJauGljJNI14.dll

	rm -f binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(WIN32TYPE)-tst.zip
	cd Win32VC6/libs ; zip -9 ../../binpkg/libGL4Java$(LIBMAJOR).$(LIBMINOR).$(LIBBUGFIX).$(RELEASE)-$(WIN32TYPE)-tst.zip \
		GL4JavaJauGljJNI13nf.dll GL4JavaJauGljJNI13tst.dll

#
# Demos Section
#

javacalldemos:
	cd demos ; $(JAVAC_13) *.java
	cd demos/GLFDemos ; $(JAVAC_13) *.java
	cd demos/GLLandScape ; $(JAVAC_13) *.java
	cd demos/HodglimsNeHe ; $(JAVAC_13) *.java
	cd demos/MiscDemos ; make
	cd demos/NVidia ; $(JAVAC_14) *.java
	cd demos/RonsDemos ; $(JAVAC_13) *.java
	cd demos/SwingDemos ; $(JAVAC_13) *.java

#
# Archiv Section
#

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
		GL4Java/docs GL4Java/*.txt \
		GL4Java/demos/MiscDemos \
		GL4Java/demos/NVidia \
		GL4Java/demos/RonsDemos/*.java 

archiv: archivdemos archivdoc archivsrc

