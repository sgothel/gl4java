
.SUFFIXES	: .jj .java .class .html

.jj.java:
	javacc $<

.jj.html:
	jjdoc $<
	if [ ! -e ../docs ] ; then mkdir ../docs ; fi
	if [ ! -e ../docs/html ] ; then mkdir ../docs/html ; fi
	mv *.html ../docs/html

.java.class:
	javac -O $<


all: C2J htmldoc gl2j gl2c

gl2j: \
     ../gl4java/GLEnum.java \
     ../gl4java/GLUEnum.java \
     ../gl4java/GLFunc.java \
     ../gl4java/GLFuncJauJNI.java \
     ../gl4java/GLFuncJauJNInf.java \
     ../gl4java/GLUFunc.java \
     ../gl4java/GLUFuncJauJNI.java \
     ../gl4java/GLUFuncJauJNInf.java

gl2c: \
     ../CNativeCode/gl-disp-var.h \
     ../CNativeCode/gl-disp-var.hc \
     ../CNativeCode/gl-disp-fetch.hc \
     ../CNativeCode/glu-disp-var.h \
     ../CNativeCode/glu-disp-var.hc \
     ../CNativeCode/glu-disp-fetch.hc \
     ../CNativeCode/glx-disp-var.h \
     ../CNativeCode/glx-disp-var.hc \
     ../CNativeCode/glx-disp-fetch.hc \
     ../CNativeCode/wgl-disp-var.h \
     ../CNativeCode/wgl-disp-var.hc \
     ../CNativeCode/wgl-disp-fetch.hc \
     ../CNativeCode/OpenGL_JauJNI_funcs.c \
     ../CNativeCode/OpenGL_JauJNI12_funcs.c \
     ../CNativeCode/OpenGL_JauJNI12nf_funcs.c \
     ../CNativeCode/OpenGL_JauJNI12tst_funcs.c \
     ../CNativeCode/OpenGLU_JauJNI_funcs.c \
     ../CNativeCode/OpenGLU_JauJNI12_funcs.c \
     ../CNativeCode/OpenGLU_JauJNI12nf_funcs.c \
     ../CNativeCode/OpenGLU_JauJNI12tst_funcs.c

C2J.class: C2J.java CFuncVariable.class CFuncDeclaration.class

C2J: C2J.class

C2C: C2C.class


htmldoc: C2J.html

#
# for the c - global GL function dispatcher
#
gl-disp-var-auto.h: gl-proto-auto.orig.h C2J.class
	java C2J -echo gldispatch-decl gl4java_GLUFuncJauJNI gl-proto-auto.orig.h \
	> gl-disp-var-auto.h

gl-disp-var-auto.hc: gl-proto-auto.orig.h C2J.class
	java C2J gldispatch-var gl4java_GLUFuncJauJNI gl-proto-auto.orig.h \
	> gl-disp-var-auto.hc

gl-disp-fetch-auto.hc: gl-proto-auto.orig.h C2J.class
	java C2J gldispatch-get gl4java_GLUFuncJauJNI gl-proto-auto.orig.h \
	> gl-disp-fetch-auto.hc

../CNativeCode/gl-disp-var.h: warning.skel \
			              manual/gl-man-disp-var.h \
			              gl-disp-var-auto.h
	cat warning.skel 			\
	    manual/gl-man-disp-var.h \
	    gl-disp-var-auto.h \
	    > ../CNativeCode/gl-disp-var.h

../CNativeCode/gl-disp-var.hc: warning.skel \
			              manual/gl-man-disp-var.hc \
			              gl-disp-var-auto.hc
	cat warning.skel 			\
	    manual/gl-man-disp-var.hc \
	    gl-disp-var-auto.hc \
	    > ../CNativeCode/gl-disp-var.hc

../CNativeCode/gl-disp-fetch.hc: warning.skel \
			              manual/gl-man-disp-fetch.hc \
			              gl-disp-fetch-auto.hc
	cat warning.skel 			\
	    manual/gl-man-disp-fetch.hc \
	    gl-disp-fetch-auto.hc \
	    > ../CNativeCode/gl-disp-fetch.hc

#
# for the c - global GLU function dispatcher
#
glu-disp-var-auto.h: glu-proto-auto.orig.h C2J.class
	java C2J -echo gldispatch-decl gl4java_GLUFuncJauJNI glu-proto-auto.orig.h \
	> glu-disp-var-auto.h

glu-disp-var-auto.hc: glu-proto-auto.orig.h C2J.class
	java C2J gldispatch-var gl4java_GLUFuncJauJNI glu-proto-auto.orig.h \
	> glu-disp-var-auto.hc

glu-disp-fetch-auto.hc: glu-proto-auto.orig.h C2J.class
	java C2J gldispatch-get gl4java_GLUFuncJauJNI glu-proto-auto.orig.h \
	> glu-disp-fetch-auto.hc

../CNativeCode/glu-disp-var.h: warning.skel \
			              manual/glu-man-disp-var.h \
			              glu-disp-var-auto.h
	cat warning.skel 			\
	    manual/glu-man-disp-var.h \
	    glu-disp-var-auto.h \
	    > ../CNativeCode/glu-disp-var.h

../CNativeCode/glu-disp-var.hc: warning.skel \
			              manual/glu-man-disp-var.hc \
			              glu-disp-var-auto.hc
	cat warning.skel 			\
	    manual/glu-man-disp-var.hc \
	    glu-disp-var-auto.hc \
	    > ../CNativeCode/glu-disp-var.hc

../CNativeCode/glu-disp-fetch.hc: warning.skel \
			              manual/glu-man-disp-fetch.hc \
			              glu-disp-fetch-auto.hc
	cat warning.skel 			\
	    manual/glu-man-disp-fetch.hc \
	    glu-disp-fetch-auto.hc \
	    > ../CNativeCode/glu-disp-fetch.hc

#
# for the c - global GLX function dispatcher
#
../CNativeCode/glx-disp-var.h: warning.skel \
			              manual/glx-disp-var.h
	cat warning.skel 			\
	    manual/glx-disp-var.h \
	    > ../CNativeCode/glx-disp-var.h

../CNativeCode/glx-disp-var.hc: warning.skel \
			              manual/glx-disp-var.hc
	cat warning.skel 			\
	    manual/glx-disp-var.hc \
	    > ../CNativeCode/glx-disp-var.hc

../CNativeCode/glx-disp-fetch.hc: warning.skel \
			              manual/glx-disp-fetch.hc 
	cat warning.skel 			\
	    manual/glx-disp-fetch.hc \
	    > ../CNativeCode/glx-disp-fetch.hc

#
# for the c - global WGL function dispatcher
#
../CNativeCode/wgl-disp-var.h: warning.skel \
			              manual/wgl-disp-var.h
	cat warning.skel 			\
	    manual/wgl-disp-var.h \
	    > ../CNativeCode/wgl-disp-var.h

../CNativeCode/wgl-disp-var.hc: warning.skel \
			              manual/wgl-disp-var.hc
	cat warning.skel 			\
	    manual/wgl-disp-var.hc \
	    > ../CNativeCode/wgl-disp-var.hc

../CNativeCode/wgl-disp-fetch.hc: warning.skel \
			              manual/wgl-disp-fetch.hc 
	cat warning.skel 			\
	    manual/wgl-disp-fetch.hc \
	    > ../CNativeCode/wgl-disp-fetch.hc


#
# for java class gl4java.GLEnum
#
gl-enum-auto.java: gl-enum-auto.orig.h C2J.class
	java C2J jnijava gl4java_GLEnum gl-enum-auto.orig.h > gl-enum-auto.java

../gl4java/GLEnum.java: warning.skel			     \
			gl-enum-auto.java 		     \
	    		manual/gl-enum-manualCoded.java     
	cat warning.skel 			\
	    manual/gl-enum-manualCoded.java     \
	    gl-enum-auto.java 			\
	    > ../gl4java/GLEnum.java
	printf "\n\n}\n\n" >> ../gl4java/GLEnum.java

#
# for java class gl4java.GLUEnum
#
glu-enum-auto.java: glu-enum-auto.orig.h C2J.class
	java C2J jnijava gl4java_GLUEnum glu-enum-auto.orig.h > glu-enum-auto.java

../gl4java/GLUEnum.java: warning.skel				\
			 glu-enum-auto.java 		        \
	    		 manual/glu-enum-manualCoded.java     
	cat warning.skel 			\
	    manual/glu-enum-manualCoded.java     \
	    glu-enum-auto.java 			\
	    > ../gl4java/GLUEnum.java
	printf "\n\n}\n\n" >> ../gl4java/GLUEnum.java

#
# Common for gl4java.GLFuncJauJNI and gl4java.GLFuncJauJNInf
# Here we create the final part !
#
gl-proto-auto.java: gl-proto-auto.orig.h C2J.class
	java C2J -echo jnijavaf gl4java_GLFuncJauJNI gl-proto-auto.orig.h \
	> gl-proto-auto.java

#
# Common for gl4java.GLUFuncJauJNI and gl4java.GLUFuncJauJNInf
# Here we create the final part !
#
glu-proto-auto.java: glu-proto-auto.orig.h C2J.class
	java C2J -echo jnijavaf gl4java_GLUFuncJauJNI glu-proto-auto.orig.h \
	> glu-proto-auto.java

#
# for java interface gl4java.GLFunc
#
gl-funcnames.skel: gl-proto-auto.orig.h C2J.class
	java C2J glfnames gl4java_GLFuncJauJNI gl-proto-auto.orig.h \
	> gl-funcnames.skel

gl-protoVirt-auto.java: gl-proto-auto.java
	cat gl-proto-auto.java | \
	sed -e 's/final native //g' > gl-protoVirt-auto.java

../gl4java/GLFunc.java: warning.skel				\
			manual/gl-manualCodedVirt1.java 	\
			manual/gl-manualCodedVirt2.java 	\
			gl-funcnames.skel \
			gl-protoVirt-auto.java			
	cat warning.skel 			\
	    manual/gl-manualCodedVirt1.java 	\
	    gl-funcnames.skel                   \
	    manual/gl-manualCodedVirt2.java 	\
	    gl-protoVirt-auto.java 		\
	    > ../gl4java/GLFunc.java
	printf "\n\n}\n\n" >> ../gl4java/GLFunc.java

#
# for java interface gl4java.GLUFunc
#
glu-protoVirt-auto.java: glu-proto-auto.java
	cat glu-proto-auto.java | \
	sed -e 's/final native //g' > glu-protoVirt-auto.java

../gl4java/GLUFunc.java: warning.skel				\
			 manual/glu-manualCodedVirt.java 	\
			 glu-protoVirt-auto.java			
	cat warning.skel 			\
	    manual/glu-manualCodedVirt.java 	\
	    glu-protoVirt-auto.java 		\
	    > ../gl4java/GLUFunc.java
	printf "\n\n}\n\n" >> ../gl4java/GLUFunc.java

#
# for java class gl4java.GLFuncJauJNI
#
# This class is the default implementation and is final -> security
#
../gl4java/GLFuncJauJNI.java: warning.skel				\
			      manual/gl-manualCodedImplJNI1.java 	\
			      manual/gl-manualCodedImplJNI2.java 	\
			      gl-proto-auto.java			
	cat warning.skel 			\
	    manual/gl-manualCodedImplJNI1.java 	\
	    manual/gl-manualCodedImplJNI2.java 	\
	    gl-proto-auto.java	 		\
	    > ../gl4java/GLFuncJauJNI.java
	printf "\n\n}\n\n" >> ../gl4java/GLFuncJauJNI.java

#
# for java class gl4java.GLFuncJauJNInf
#
# This class is for pipelining purposes, and can be overloaded
#
../gl4java/GLFuncJauJNInf.java: warning.skel				\
			        manual/gl-manualCodedImplJNI1.java 	\
			 	manual/gl-manualCodedImplJNI2.java 	\
			        gl-proto-auto.java			
	cat warning.skel 			\
	    manual/gl-manualCodedImplJNI1.java 	\
	    manual/gl-manualCodedImplJNI2.java 	\
	    gl-proto-auto.java	 		\
	    > ../gl4java/GLFuncJauJNInf.java.tmp
	printf "\n\n}\n\n" >> ../gl4java/GLFuncJauJNInf.java.tmp
	cat ../gl4java/GLFuncJauJNInf.java.tmp | \
	sed -e 's/final //g' -e 's/GLFuncJauJNI/GLFuncJauJNInf/g' \
		> ../gl4java/GLFuncJauJNInf.java
	rm  ../gl4java/GLFuncJauJNInf.java.tmp 

#
# for java class gl4java.GLUFuncJauJNI
#
# This class is the default implementation and is final -> security
#
../gl4java/GLUFuncJauJNI.java: warning.skel				\
			 manual/glu-manualCodedImplJNI1.java 	\
			 manual/glu-manualCodedImplJNI2.java 	\
			 glu-proto-auto.java			
	cat warning.skel 			\
	    manual/glu-manualCodedImplJNI1.java 	\
	    manual/glu-manualCodedImplJNI2.java 	\
	    glu-proto-auto.java	 		\
	    > ../gl4java/GLUFuncJauJNI.java
	printf "\n\n}\n\n" >> ../gl4java/GLUFuncJauJNI.java

#
# for java class gl4java.GLUFuncJauJNInf
#
# This class is for pipelining purposes, and can be overloaded
#
../gl4java/GLUFuncJauJNInf.java: warning.skel				\
			 manual/glu-manualCodedImplJNI1.java 	\
			 manual/glu-manualCodedImplJNI2.java 	\
			 glu-proto-auto.java			
	cat warning.skel 			\
	    manual/glu-manualCodedImplJNI1.java 	\
	    manual/glu-manualCodedImplJNI2.java 	\
	    glu-proto-auto.java	 		\
	    > ../gl4java/GLUFuncJauJNInf.java.tmp
	printf "\n\n}\n\n" >> ../gl4java/GLUFuncJauJNInf.java.tmp
	cat ../gl4java/GLUFuncJauJNInf.java.tmp | \
	sed -e 's/final //g' -e 's/GLUFuncJauJNI/GLUFuncJauJNInf/g' \
		> ../gl4java/GLUFuncJauJNInf.java
	rm  ../gl4java/GLUFuncJauJNInf.java.tmp 

#
# for native library gl4javaJauJNI[32]
#
gl-proto-dynauto.c: gl-proto-auto.orig.h C2J.class
	java C2J -echo jnic-dyn gl4java_GLFuncJauJNI gl-proto-auto.orig.h \
	> gl-proto-dynauto.c

../CNativeCode/OpenGL_JauJNI_funcs.c: warning.skel			 \
			              ../CNativeCode/OpenGL_funcs.c.skel \
			              manual/gl-manualCodedImplJNI.c     \
			              gl-proto-dynauto.c
	cat warning.skel 			\
	    ../CNativeCode/OpenGL_funcs.c.skel 	\
	    manual/gl-manualCodedImplJNI.c 		\
	    gl-proto-dynauto.c 			\
	    > ../CNativeCode/OpenGL_JauJNI_funcs.c

gl-proto-dynauto-jni12.c: gl-proto-auto.orig.h C2J.class
	java C2J -echo -jnic-criticalarray jnic-dyn gl4java_GLFuncJauJNI gl-proto-auto.orig.h \
	> gl-proto-dynauto-jni12.c

../CNativeCode/OpenGL_JauJNI12_funcs.c: warning.skel			 \
			              ../CNativeCode/OpenGL_funcs.c.skel \
			              manual/gl-manualCodedImplJNI.c     \
			              gl-proto-dynauto-jni12.c
	cat warning.skel 			\
	    ../CNativeCode/OpenGL_funcs.c.skel 	\
	    manual/gl-manualCodedImplJNI.c 		\
	    gl-proto-dynauto-jni12.c 			\
	    > ../CNativeCode/OpenGL_JauJNI12_funcs.c

gl-proto-dynauto-tst-jni12.c: gl-proto-auto.orig.h C2J.class
	java C2J -echo -jnic-criticalarray -jnic-trial jnic-dyn gl4java_GLFuncJauJNI gl-proto-auto.orig.h \
	> gl-proto-dynauto-tst-jni12.c

../CNativeCode/OpenGL_JauJNI12tst_funcs.c: warning.skel		 \
			              ../CNativeCode/OpenGL_funcs.c.skel \
			              manual/gl-manualCodedImplJNI.c     \
			              gl-proto-dynauto-tst-jni12.c
	cat warning.skel 			\
	    ../CNativeCode/OpenGL_funcs.c.skel 	\
	    manual/gl-manualCodedImplJNI.c 		\
	    gl-proto-dynauto-tst-jni12.c 			\
	    > ../CNativeCode/OpenGL_JauJNI12tst_funcs.c

glu-proto-auto.c: glu-proto-auto.orig.h C2J.class
	java C2J -echo jnic-dyn gl4java_GLUFuncJauJNI glu-proto-auto.orig.h \
	> glu-proto-auto.c

../CNativeCode/OpenGLU_JauJNI_funcs.c: C2J.class 			   \
			               warning.skel			   \
			               ../CNativeCode/OpenGLU_funcs.c.skel \
			               manual/glu-manualCodedImplJNI.c	   \
			               glu-proto-auto.c
	cat warning.skel 			\
	    ../CNativeCode/OpenGLU_funcs.c.skel \
	    manual/glu-manualCodedImplJNI.c	\
	    glu-proto-auto.c 			\
	    > ../CNativeCode/OpenGLU_JauJNI_funcs.c

glu-proto-auto-jni12.c: glu-proto-auto.orig.h C2J.class
	java C2J -echo -jnic-criticalarray jnic-dyn gl4java_GLUFuncJauJNI glu-proto-auto.orig.h \
	> glu-proto-auto-jni12.c

../CNativeCode/OpenGLU_JauJNI12_funcs.c: C2J.class 			   \
			               warning.skel			   \
			               ../CNativeCode/OpenGLU_funcs.c.skel \
			               manual/glu-manualCodedImplJNI.c	   \
			               glu-proto-auto-jni12.c
	cat warning.skel 			\
	    ../CNativeCode/OpenGLU_funcs.c.skel \
	    manual/glu-manualCodedImplJNI.c	\
	    glu-proto-auto-jni12.c 			\
	    > ../CNativeCode/OpenGLU_JauJNI12_funcs.c

glu-proto-auto-tst-jni12.c: glu-proto-auto.orig.h C2J.class
	java C2J -echo -jnic-criticalarray -jnic-trial jnic-dyn gl4java_GLUFuncJauJNI glu-proto-auto.orig.h \
	> glu-proto-auto-tst-jni12.c

../CNativeCode/OpenGLU_JauJNI12tst_funcs.c: C2J.class 			   \
			               warning.skel			   \
			               ../CNativeCode/OpenGLU_funcs.c.skel \
			               manual/glu-manualCodedImplJNI.c	   \
			               glu-proto-auto-tst-jni12.c
	cat warning.skel 			\
	    ../CNativeCode/OpenGLU_funcs.c.skel \
	    manual/glu-manualCodedImplJNI.c	\
	    glu-proto-auto-tst-jni12.c 			\
	    > ../CNativeCode/OpenGLU_JauJNI12tst_funcs.c


#
# for native library gl4javaJauJNInf[32]
#
../CNativeCode/OpenGL_JauJNI12nf_funcs.c: ../CNativeCode/OpenGL_JauJNI12_funcs.c
	cat ../CNativeCode/OpenGL_JauJNI12_funcs.c |  \
	sed -e 's/GLFuncJauJNI/GLFuncJauJNInf/g' \
	> ../CNativeCode/OpenGL_JauJNI12nf_funcs.c

../CNativeCode/OpenGLU_JauJNI12nf_funcs.c: ../CNativeCode/OpenGLU_JauJNI12_funcs.c
	cat ../CNativeCode/OpenGLU_JauJNI12_funcs.c |  \
	sed -e 's/GLUFuncJauJNI/GLUFuncJauJNInf/g' \
	> ../CNativeCode/OpenGLU_JauJNI12nf_funcs.c

clean:
	rm -f *~

cleanc2j:
	rm -f \
		ASCII_CharStream.java \
		C2J.java \
		C2JConstants.java \
		C2JTokenManager.java \
		ParseException.java \
		Token.java \
		TokenMgrError.java

cleangl2j: clean
	rm -f \
	     gl-proto-auto.java \
	     gl-proto-auto.msjvm \
	     glu-proto-auto.java \
	     glu-proto-auto.msjvm \
	     gl-enum-auto.java \
	     gl-protoVirt-auto.java \
	     glu-enum-auto.java \
	     glu-protoVirt-auto.java

cleangl2c: clean
	rm -f \
	     gl-funcnames.skel \
	     gl-proto-dynauto.c \
	     gl-proto-dynauto-jni12.c \
	     gl-proto-dynauto-tst-jni12.c \
	     glu-proto-auto.c \
	     glu-proto-auto-jni12.c \
	     glu-proto-auto-tst-jni12.c \
	     gl-disp-fetch-auto.hc \
	     gl-disp-var-auto.hc  \
	     glu-disp-var-auto.h \
	     gl-disp-var-auto.h \
	     glu-disp-fetch-auto.hc \
	     glu-disp-var-auto.hc

cleangenfiles: clean
	rm -f \
		../gl4java/GLEnum.java \
		../gl4java/GLUEnum.java \
		../gl4java/GLFunc.java \
		../gl4java/GLFuncJauJNI.java \
		../gl4java/GLFuncJauJNInf.java \
		../gl4java/GLUFunc.java \
		../gl4java/GLUFuncJauJNI.java \
		../gl4java/GLUFuncJauJNInf.java \
		../CNativeCode/OpenGL_JauJNI_funcs.c \
		../CNativeCode/OpenGL_JauJNI12_funcs.c \
		../CNativeCode/OpenGL_JauJNI12nf_funcs.c \
		../CNativeCode/OpenGL_JauJNI12tst_funcs.c \
		../CNativeCode/OpenGLU_JauJNI_funcs.c \
		../CNativeCode/OpenGLU_JauJNI12_funcs.c \
		../CNativeCode/OpenGLU_JauJNI12nf_funcs.c \
		../CNativeCode/OpenGLU_JauJNI12tst_funcs.c \
		../CNativeCode/gl-disp-var.h \
		../CNativeCode/gl-disp-var.hc \
		../CNativeCode/gl-disp-fetch.hc \
		../CNativeCode/glu-disp-var.h \
		../CNativeCode/glu-disp-var.hc \
		../CNativeCode/glu-disp-fetch.hc \
		../CNativeCode/glx-disp-var.h \
		../CNativeCode/glx-disp-var.hc \
		../CNativeCode/glx-disp-fetch.hc \
		../CNativeCode/wgl-disp-var.h \
		../CNativeCode/wgl-disp-var.hc \
		../CNativeCode/wgl-disp-fetch.hc

cleanall: clean cleangl2c cleangl2j cleangenfiles cleanc2j
	rm -f *.c *.class *.html

