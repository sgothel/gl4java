
#include "OpenGL_misc.h"
#include "gl4java_GLContext.h"

#ifdef _X11_
	#include <GL/glx.h>
	#include <dlfcn.h>
	#include "glxtool.h"
        #include <unistd.h>
#endif

#ifdef _WIN32_
	#include "wgltool.h"
#endif

#include <string.h>

#ifdef _MAC_OS9_
	#include <agl.h>
	#include <CodeFragments.h>
	#include <Errors.h>
	#include <TextUtils.h>
	#include <StringCompare.h>
	#include "mac_console.h"
	
	#define fragNoErr 0
#endif

static const char * _lib_version_=  __LIB_VERSION__ ;

#ifdef _MAC_OS9_
  static const char * _lib_vendor_ = "Jausoft - Sven Goethel Software Development & Gerard Ziemski"; 
#else
  static const char * _lib_vendor_ = "Jausoft - Sven Goethel Software Development"; 
#endif

#ifndef CALLBACK
	#define CALLBACK
#endif

char libGLName[800] = 
#ifdef _X11_
	"libGL.so"
#endif
#ifdef _WIN32_
	"OPENGL32.DLL"
#endif
#ifdef _MAC_OS9_
	"\pOpenGLLibrary"
#endif
#ifdef _MAC_OSX_
	"libGL.so"
#endif
;

char libGLUName[800] = 
#ifdef _X11_
	"libGLU.so"
#endif
#ifdef _WIN32_
	"GLU32.DLL"
#endif
#ifdef _MAC_OS9_
	"\pOpenGLULibrary"
#endif
#ifdef _MAC_OSX_
	"libGLU.so"
#endif
;

#ifdef  J_GET_BOOL_FIELD
	#undef  J_GET_BOOL_FIELD
#endif
#define J_GET_BOOL_FIELD(ATTRIBUTE_NAME, ATTRIBUTE_NAME_STR) if(ok==JNI_TRUE) { f ## ATTRIBUTE_NAME = (*env)->GetFieldID(env, cls, ATTRIBUTE_NAME_STR, "Z"); if ( f ## ATTRIBUTE_NAME == 0) ok= JNI_FALSE; }

#ifdef  J_GET_BOOL_FIELD_VAL
	#undef  J_GET_BOOL_FIELD_VAL
#endif
#define J_GET_BOOL_FIELD_VAL(ATTRIBUTE_NAME, ATTRIBUTE_NAME_STR) if(ok==JNI_TRUE) { f ## ATTRIBUTE_NAME = (*env)->GetFieldID(env, cls, ATTRIBUTE_NAME_STR, "Z"); if ( f ## ATTRIBUTE_NAME == 0) ok= JNI_FALSE; else glCaps-> ## ATTRIBUTE_NAME = (int) ((*env)->GetBooleanField(env, capsObj, f ## ATTRIBUTE_NAME)); }

#ifdef  J_SET_BOOL_FIELD_VAL
	#undef  J_SET_BOOL_FIELD_VAL
#endif
#define J_SET_BOOL_FIELD_VAL(ATTRIBUTE_NAME) if(ok==JNI_TRUE && f ## ATTRIBUTE_NAME!=0) { (*env)->SetBooleanField(env, capsObj, f ## ATTRIBUTE_NAME, (jboolean) glCaps-> ## ATTRIBUTE_NAME); }

#ifdef  J_GET_INT_FIELD
	#undef  J_GET_INT_FIELD
#endif
#define J_GET_INT_FIELD(ATTRIBUTE_NAME, ATTRIBUTE_NAME_STR) if(ok==JNI_TRUE) { f ## ATTRIBUTE_NAME = (*env)->GetFieldID(env, cls, ATTRIBUTE_NAME_STR, "I"); if ( f ## ATTRIBUTE_NAME == 0) ok= JNI_FALSE; }

#ifdef  J_GET_INT_FIELD_VAL
	#undef  J_GET_INT_FIELD_VAL
#endif
#define J_GET_INT_FIELD_VAL(ATTRIBUTE_NAME, ATTRIBUTE_NAME_STR) if(ok==JNI_TRUE) { f ## ATTRIBUTE_NAME = (*env)->GetFieldID(env, cls, ATTRIBUTE_NAME_STR, "I"); if ( f ## ATTRIBUTE_NAME == 0) ok= JNI_FALSE; else glCaps-> ## ATTRIBUTE_NAME = (int) ((*env)->GetIntField(env, capsObj, f ## ATTRIBUTE_NAME)); }

#ifdef  J_SET_INT_FIELD_VAL
	#undef  J_SET_INT_FIELD_VAL
#endif
#define J_SET_INT_FIELD_VAL(ATTRIBUTE_NAME) if(ok==JNI_TRUE && f ## ATTRIBUTE_NAME!=0) { (*env)->SetIntField(env, capsObj, f ## ATTRIBUTE_NAME, (jint) glCaps-> ## ATTRIBUTE_NAME); }

#ifdef  J_GET_LONG_FIELD
	#undef  J_GET_LONG_FIELD
#endif
#define J_GET_LONG_FIELD(ATTRIBUTE_NAME, ATTRIBUTE_NAME_STR) if(ok==JNI_TRUE) { f ## ATTRIBUTE_NAME = (*env)->GetFieldID(env, cls, ATTRIBUTE_NAME_STR, "J"); if ( f ## ATTRIBUTE_NAME == 0) ok= JNI_FALSE; }


#ifdef  J_GET_LONG_FIELD_VAL
	#undef  J_GET_LONG_FIELD_VAL
#endif
#define J_GET_LONG_FIELD_VAL(ATTRIBUTE_NAME, ATTRIBUTE_NAME_STR) if(ok==JNI_TRUE) { f ## ATTRIBUTE_NAME = (*env)->GetFieldID(env, cls, ATTRIBUTE_NAME_STR, "J"); if ( f ## ATTRIBUTE_NAME == 0) ok= JNI_FALSE; else glCaps-> ## ATTRIBUTE_NAME = (long) ((*env)->GetLongField(env, capsObj, f ## ATTRIBUTE_NAME)); }

#ifdef  J_SET_LONG_FIELD_VAL
	#undef  J_SET_LONG_FIELD_VAL
#endif
#define J_SET_LONG_FIELD_VAL(ATTRIBUTE_NAME) if(ok==JNI_TRUE && f ## ATTRIBUTE_NAME!=0) { (*env)->SetLongField(env, capsObj, f ## ATTRIBUTE_NAME, (jlong) glCaps-> ## ATTRIBUTE_NAME); }

jboolean LIBAPIENTRY javaGLCapabilities2NativeGLCapabilities 
					     ( JNIEnv *env, 
		                               jobject capsObj, 
					       GLCapabilities *glCaps )
{
    jfieldID fbuffer=0;
    jfieldID fcolor=0;
    jfieldID fstereo=0;
    jfieldID fdepthBits=0;
    jfieldID fstencilBits=0;
    jfieldID fredBits=0;
    jfieldID fgreenBits=0;
    jfieldID fblueBits=0;
    jfieldID falphaBits=0;
    jfieldID faccumRedBits=0;
    jfieldID faccumGreenBits=0;
    jfieldID faccumBlueBits=0;
    jfieldID faccumAlphaBits=0;
    jfieldID fnativeVisualID=0;

    jclass cls = 0;

    jboolean ok = JNI_TRUE;

    /**
     *
    jthrowable exc;
    jclass _GLCapabilities= 0;

    _GLCapabilities= (*env)->FindClass(env, "Lgl4java/GLCapabilities;");
    exc = (*env)->ExceptionOccurred(env);
    if(exc) {
          fprintf(stderr, "GL4Java: glcaps java2native FindClass gl4java/GLCapabilities failed, cannot check glCaps object\n");
	  (*env)->ExceptionClear(env);
          fflush(stderr);
	  _GLCapabilities=0;
    }
    exc=0;


    if(_GLCapabilities!=0 &&
        (*env)->IsInstanceOf(env, capsObj, _GLCapabilities)==JNI_FALSE )
    {
      fprintf(stderr,"\nGL4Java glcaps java2native ERROR: capsObj is not instanceof gl4java/GLCapabilities !\n");
      fflush(stderr);
      return JNI_FALSE;
    }
    */
							                  
    cls = (*env)->GetObjectClass(env, capsObj);
    if(cls==0) 
    {
        fprintf(stderr,"GL4Java ERROR: clazz not accessible\n");
	fflush(stderr);
        return JNI_FALSE;
    }

    if(glCaps==0) 
    {
        fprintf(stderr,"GL4Java ERROR: native argument GLCapabilities not given\n");
	fflush(stderr);
        return JNI_FALSE;
    }

    J_GET_INT_FIELD_VAL(buffer, "buffer")
    J_GET_INT_FIELD_VAL(color, "color")
    J_GET_INT_FIELD_VAL(stereo, "stereo")
    J_GET_INT_FIELD_VAL(depthBits, "depthBits")
    J_GET_INT_FIELD_VAL(stencilBits, "stencilBits")
    J_GET_INT_FIELD_VAL(redBits, "redBits")
    J_GET_INT_FIELD_VAL(greenBits, "greenBits")
    J_GET_INT_FIELD_VAL(blueBits, "blueBits")
    J_GET_INT_FIELD_VAL(alphaBits, "alphaBits")
    J_GET_INT_FIELD_VAL(accumRedBits, "accumRedBits")
    J_GET_INT_FIELD_VAL(accumGreenBits, "accumGreenBits")
    J_GET_INT_FIELD_VAL(accumBlueBits, "accumBlueBits")
    J_GET_INT_FIELD_VAL(accumAlphaBits, "accumAlphaBits")
    J_GET_LONG_FIELD_VAL(nativeVisualID, "nativeVisualID")
    glCaps->gl_supported=1;

    if(JNI_TRUE!=ok)
    {
        fprintf(stderr,"GL4Java ERROR: gl4java/GLCapabilities fields not accessible\n");
	fflush(stderr);
        return JNI_FALSE;
    }

    return JNI_TRUE;
}

jboolean LIBAPIENTRY nativeGLCapabilities2JavaGLCapabilities 
				     ( JNIEnv *env, 
				       jobject capsObj, 
				       GLCapabilities *glCaps )
{
    jfieldID fbuffer=0;
    jfieldID fcolor=0;
    jfieldID fstereo=0;
    jfieldID fdepthBits=0;
    jfieldID fstencilBits=0;
    jfieldID fredBits=0;
    jfieldID fgreenBits=0;
    jfieldID fblueBits=0;
    jfieldID falphaBits=0;
    jfieldID faccumRedBits=0;
    jfieldID faccumGreenBits=0;
    jfieldID faccumBlueBits=0;
    jfieldID faccumAlphaBits=0;
    jfieldID fnativeVisualID=0;

    jclass cls = 0;

    jboolean ok = JNI_TRUE;

    /**
    jthrowable exc;
    jclass _GLCapabilities= 0;

    _GLCapabilities= (*env)->FindClass(env, "Lgl4java/GLCapabilities;");
    exc = (*env)->ExceptionOccurred(env);
    if(exc) {
          fprintf(stderr, "GL4Java: glcaps native2java FindClass gl4java/GLCapabilities failed, cannot check glCaps object\n");
	  (*env)->ExceptionClear(env);
          fflush(stderr);
	  _GLCapabilities=0;
    }
    exc=0;


    if(_GLCapabilities!=0 &&
        (*env)->IsInstanceOf(env, capsObj, _GLCapabilities)==JNI_FALSE )
    {
      fprintf(stderr,"\nGL4Java glcaps native2java ERROR: capsObj is not instanceof gl4java/GLCapabilities !\n");
      fflush(stderr);
      return JNI_FALSE;
    }
    */
							                  
    cls = (*env)->GetObjectClass(env, capsObj);
    if(cls==0) 
    {
        fprintf(stderr,"GL4Java ERROR: clazz not accessible\n");
	fflush(stderr);
        return JNI_FALSE;
    }

    J_GET_INT_FIELD(buffer, "buffer")
    J_GET_INT_FIELD(color, "color")
    J_GET_INT_FIELD(stereo, "stereo")
    J_GET_INT_FIELD(depthBits, "depthBits")
    J_GET_INT_FIELD(stencilBits, "stencilBits")
    J_GET_INT_FIELD(redBits, "redBits")
    J_GET_INT_FIELD(greenBits, "greenBits")
    J_GET_INT_FIELD(blueBits, "blueBits")
    J_GET_INT_FIELD(alphaBits, "alphaBits")
    J_GET_INT_FIELD(accumRedBits, "accumRedBits")
    J_GET_INT_FIELD(accumGreenBits, "accumGreenBits")
    J_GET_INT_FIELD(accumBlueBits, "accumBlueBits")
    J_GET_INT_FIELD(accumAlphaBits, "accumAlphaBits")
    J_GET_LONG_FIELD(nativeVisualID, "nativeVisualID")

    if(JNI_TRUE!=ok)
    {
        fprintf(stderr,"GL4Java ERROR: gl4java/GLCapabilities fields not accessible\n");
	fflush(stderr);
        return JNI_FALSE;
    }

    J_SET_INT_FIELD_VAL(buffer);
    J_SET_INT_FIELD_VAL(color);
    J_SET_INT_FIELD_VAL(stereo);
    J_SET_INT_FIELD_VAL(depthBits);
    J_SET_INT_FIELD_VAL(stencilBits);
    J_SET_INT_FIELD_VAL(redBits);
    J_SET_INT_FIELD_VAL(greenBits);
    J_SET_INT_FIELD_VAL(blueBits);
    J_SET_INT_FIELD_VAL(alphaBits);
    J_SET_INT_FIELD_VAL(accumRedBits);
    J_SET_INT_FIELD_VAL(accumGreenBits);
    J_SET_INT_FIELD_VAL(accumBlueBits);
    J_SET_INT_FIELD_VAL(accumAlphaBits);
    J_GET_LONG_FIELD_VAL(nativeVisualID, "nativeVisualID")

    if(JNI_TRUE!=ok)
    {
        fprintf(stderr,"GL4Java ERROR: gl4java/GLCapabilities fields not writable\n");
	fflush(stderr);
        return JNI_FALSE;
    }

    return JNI_TRUE;
}
	
jboolean LIBAPIENTRY testJavaGLTypes(jboolean verbose)
{
    jboolean ret=JNI_TRUE;
    jint i1 = (jint)0xaaff;
    jint i2 = 0;
    jlong l1 = (jlong)i1;
    i2 = (jint)l1;

    if(i1!=i2)
    {
        fprintf(stderr,"(jint)((jlong)0xaaff) != (jint)0xaaff\n");
	ret = JNI_FALSE;
    }

    /* NON DEPENDENCE CHECKS */

    /* NOW LET's CHECK THE TAKEN JNI-TYPE <-> GL-TYPE MAPPING */

    if( sizeof(GLUtriangulatorObj *) > sizeof(jlong) )
    {
        fprintf(stderr,"(GLUtriangulatorObj *) > (jlong)\n");
	ret = JNI_FALSE;
    }

    if( sizeof(GLUnurbsObj *) > sizeof(jlong) )
    {
        fprintf(stderr,"(GLUnurbsObj *) > (jlong)\n");
	ret = JNI_FALSE;
    }

    if( sizeof(GLUquadricObj *) > sizeof(jlong) )
    {
        fprintf(stderr,"(GLUquadricObj *) > (jlong)\n");
	ret = JNI_FALSE;
    }

    if( sizeof(GLvoid *) > sizeof(jbyte *) )
    {
        fprintf(stderr,"(GLvoid *) > (jbyte *)\n");
	ret = JNI_FALSE;
    }

    if( sizeof(GLbyte) != sizeof(jbyte) )
    {
        fprintf(stderr,"GLbyte != jbyte\n");
	ret = JNI_FALSE;
    }

    if( sizeof(GLshort) != sizeof(jshort) )
    {
        fprintf(stderr,"GLshort != jshort\n");
	ret = JNI_FALSE;
    }

    if( sizeof(GLint) != sizeof(jint) )
    {
        fprintf(stderr,"GLint != jint\n");
	ret = JNI_FALSE;
    }

    if( sizeof(GLsizei) != sizeof(jint) )
    {
        fprintf(stderr,"GLsizei != jint\n");
	ret = JNI_FALSE;
    }

    if( sizeof(GLfloat) != sizeof(jfloat) )
    {
        fprintf(stderr,"GLfloat != jfloat\n");
	ret = JNI_FALSE;
    }

    if( sizeof(GLclampf) != sizeof(jfloat) )
    {
        fprintf(stderr,"GLclampf != jfloat\n");
	ret = JNI_FALSE;
    }

    if( sizeof(GLdouble) != sizeof(jdouble) )
    {
        fprintf(stderr,"GLdouble != jdouble\n");
	ret = JNI_FALSE;
    }

    if( sizeof(GLclampd) != sizeof(jdouble) )
    {
        fprintf(stderr,"GLclampd != jdouble\n");
	ret = JNI_FALSE;
    }

    if( sizeof(GLubyte) != sizeof(jbyte) )
    {
        fprintf(stderr,"GLubyte != jboolean\n");
	ret = JNI_FALSE;
    }

    if( sizeof(GLboolean) != sizeof(jboolean) )
    {
        fprintf(stderr,"GLboolean != jboolean\n");
	ret = JNI_FALSE;
    }

    if( sizeof(GLushort) != sizeof(jshort) )
    {
        fprintf(stderr,"GLushort != jshort\n");
	ret = JNI_FALSE;
    }

    /* NOT DEF'ed IN JNI
     *
     * GLuint, GLenum : 32-bit unsigned integer
     * GLbitfield     :       dito.
     */

    if( sizeof(void *) > sizeof(PointerHolder) )
    {
        fprintf(stderr,"(void *) > (PointerHolder)\n");
	ret = JNI_FALSE;
    }

    if( sizeof(void *) > sizeof(jlong) )
    {
        fprintf(stderr,"(void *) > (jlong)\n");
	ret = JNI_FALSE;
    }

    if( sizeof(GLuint) != sizeof(jint) )
    {
        fprintf(stderr,"GLuint != jint\n");
	ret = JNI_FALSE;
    }
    if( sizeof(GLenum) != sizeof(jint) )
    {
        fprintf(stderr,"GLenum != jint\n");
	ret = JNI_FALSE;
    }
    if( sizeof(GLbitfield) != sizeof(jint) )
    {
        fprintf(stderr,"GLbitfield != jint\n");
	ret = JNI_FALSE;
    }

    if(ret==JNI_FALSE)
    {
	fflush(stderr);
    }

    /* VERBOSE/ERROR DUMP OF GL Types */

    if(JNI_FALSE==verbose && ret==JNI_TRUE) return ret;

    fprintf(stderr,"GLbyte %d\n", sizeof(GLbyte)); 
    fprintf(stderr,"GLshort %d\n", sizeof(GLshort)); 
    fprintf(stderr,"GLint %d\n", sizeof(GLint)); 
    fprintf(stderr,"GLfloat %d\n", sizeof(GLfloat)); 
    fprintf(stderr,"GLdouble %d\n", sizeof(GLdouble)); 
    fprintf(stderr,"GLubyte %d\n", sizeof(GLubyte)); 
    fprintf(stderr,"GLboolean %d\n", sizeof(GLboolean)); 
    fprintf(stderr,"GLushort %d\n", sizeof(GLushort)); 
    fprintf(stderr,"GLuint %d\n", sizeof(GLuint)); 
    fprintf(stderr,"GLenum %d\n", sizeof(GLenum)); 
    fprintf(stderr,"GLbitfield %d\n", sizeof(GLbitfield)); 

    fprintf(stderr,"\njboolean %d\n", sizeof(jboolean)); 
    fprintf(stderr,"jbyte %d\n", sizeof(jbyte)); 
    fprintf(stderr,"jchar %d\n", sizeof(jchar)); 
    fprintf(stderr,"jshort %d\n", sizeof(jshort)); 
    fprintf(stderr,"jint %d\n", sizeof(jint)); 
    fprintf(stderr,"jlong %d\n", sizeof(jlong)); 
    fprintf(stderr,"jfloat %d\n", sizeof(jfloat)); 
    fprintf(stderr,"jdouble %d\n", sizeof(jdouble)); 

    fprintf(stderr,"\nPointerHolder %d\n", sizeof(PointerHolder)); 

    fprintf(stderr, "GL4Java: useJAWT=%d\n\n",
	(int) Java_gl4java_GLContext_useJAWT( 0, 0 ) );

    fflush(stderr);
    return ret;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljCheckGLTypesNative(JNIEnv *env, jobject obj )
{
    return testJavaGLTypes(JNI_TRUE);
}


JNIEXPORT jstring JNICALL
Java_gl4java_GLContext_gljGetNativeLibVersionNative(JNIEnv *env, jobject obj )
{
    return (*env)->NewStringUTF(env, _lib_version_);
}

JNIEXPORT jstring JNICALL
Java_gl4java_GLContext_gljGetNativeLibVendorNative(JNIEnv *env, jobject obj )
{
    return (*env)->NewStringUTF(env, _lib_vendor_);
}

/**
 * Experimental Code, not done yet !
 * This one is to upspeed the Offscreen rendering engine for e.g. Swing !
 */
JNIEXPORT void JNICALL
Java_gl4java_GLContext_gljReadPixelGL2AWT__IIIIIIIIII_3B (
	JNIEnv *env, jobject obj,
	jint pack_rowlen,
	jint pack_x,
	jint pack_y,
	jint xpos,
	jint ypos,
	jint width,
	jint height,
	jint format,
	jint type,
	jint bufferName,
	jbyteArray pixelGLDest)
{
	GLint swapbytes, lsbfirst, rowlength;
	GLint skiprows, skippixels, alignment;
	GLint unswapbytes, unlsbfirst, unrowlength;
	GLint unskiprows, unskippixels, unalignment;

	jbyte *pixelGLDestData = NULL;
	jsize lenPixelGLDest = 0;

	jboolean isCopiedArray = JNI_FALSE;

	if(pixelGLDest==NULL)
		return;

	lenPixelGLDest = (*env)->GetArrayLength(env, pixelGLDest);
	pixelGLDestData = (*env)->GetByteArrayElements(env, pixelGLDest, 
	                                               &isCopiedArray);

	/* Save current modes. */
	disp__glGetIntegerv(GL_PACK_SWAP_BYTES, &swapbytes);
	disp__glGetIntegerv(GL_PACK_LSB_FIRST, &lsbfirst);
	disp__glGetIntegerv(GL_PACK_ROW_LENGTH, &rowlength);
	disp__glGetIntegerv(GL_PACK_SKIP_ROWS, &skiprows);
	disp__glGetIntegerv(GL_PACK_SKIP_PIXELS, &skippixels);
	disp__glGetIntegerv(GL_PACK_ALIGNMENT, &alignment);
	disp__glGetIntegerv(GL_UNPACK_SWAP_BYTES, &unswapbytes);
	disp__glGetIntegerv(GL_UNPACK_LSB_FIRST, &unlsbfirst);
	disp__glGetIntegerv(GL_UNPACK_ROW_LENGTH, &unrowlength);
	disp__glGetIntegerv(GL_UNPACK_SKIP_ROWS, &unskiprows);
	disp__glGetIntegerv(GL_UNPACK_SKIP_PIXELS, &unskippixels);
	disp__glGetIntegerv(GL_UNPACK_ALIGNMENT, &unalignment);

	/* Little endian machines (DEC Alpha, Inten X86, PPC(in LSB mode)...  
	   for example) could benefit from setting 
	   GL_PACK_LSB_FIRST to GL_TRUE
	   instead of GL_FALSE, but this would require changing the
	   generated bitmaps too. */
	disp__glPixelStorei(GL_PACK_SWAP_BYTES, GL_FALSE);
	disp__glPixelStorei(GL_PACK_LSB_FIRST, GL_TRUE);
        disp__glPixelStorei(GL_PACK_ROW_LENGTH, pack_rowlen);
	disp__glPixelStorei(GL_PACK_SKIP_ROWS, pack_y);
	disp__glPixelStorei(GL_PACK_SKIP_PIXELS, pack_x);
	disp__glPixelStorei(GL_PACK_ALIGNMENT, 1);
	disp__glPixelStorei(GL_UNPACK_SWAP_BYTES, GL_FALSE);
	disp__glPixelStorei(GL_UNPACK_LSB_FIRST, GL_TRUE);
        disp__glPixelStorei(GL_UNPACK_ROW_LENGTH, width);
	disp__glPixelStorei(GL_UNPACK_SKIP_ROWS, 0);
	disp__glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
	disp__glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

	/* Actually read the pixels. */
        disp__glReadBuffer(bufferName);
        disp__glReadPixels(xpos, ypos, width, height, format, type, 
	             pixelGLDestData);

	/* Restore saved modes. */
	disp__glPixelStorei(GL_PACK_SWAP_BYTES, swapbytes);
	disp__glPixelStorei(GL_PACK_LSB_FIRST, lsbfirst);
	disp__glPixelStorei(GL_PACK_ROW_LENGTH, rowlength);
	disp__glPixelStorei(GL_PACK_SKIP_ROWS, skiprows);
	disp__glPixelStorei(GL_PACK_SKIP_PIXELS, skippixels);
	disp__glPixelStorei(GL_PACK_ALIGNMENT, alignment);
	disp__glPixelStorei(GL_UNPACK_SWAP_BYTES, unswapbytes);
	disp__glPixelStorei(GL_UNPACK_LSB_FIRST, unlsbfirst);
	disp__glPixelStorei(GL_UNPACK_ROW_LENGTH, unrowlength);
	disp__glPixelStorei(GL_UNPACK_SKIP_ROWS, unskiprows);
	disp__glPixelStorei(GL_UNPACK_SKIP_PIXELS, unskippixels);
	disp__glPixelStorei(GL_UNPACK_ALIGNMENT, unalignment);

	disp__glFlush();
	disp__glFinish();

	(*env)->ReleaseByteArrayElements(env,  
	                                 pixelGLDest, pixelGLDestData, 
					 (isCopiedArray==JNI_TRUE)?0:JNI_ABORT);
}

/**
 * Experimental Code, not done yet !
 * This one is to upspeed the Offscreen rendering engine for e.g. Swing !
 */
JNIEXPORT void JNICALL
Java_gl4java_GLContext_gljReadPixelGL2AWT__IIIIIIIIII_3S (
	JNIEnv *env, jobject obj,
	jint pack_rowlen,
	jint pack_x,
	jint pack_y,
	jint xpos,
	jint ypos,
	jint width,
	jint height,
	jint format,
	jint type,
	jint bufferName,
	jshortArray pixelGLDest)
{
	GLint swapbytes, lsbfirst, rowlength;
	GLint skiprows, skippixels, alignment;
	GLint unswapbytes, unlsbfirst, unrowlength;
	GLint unskiprows, unskippixels, unalignment;

	jshort *pixelGLDestData = NULL;
	jsize lenPixelGLDest = 0;

	jboolean isCopiedArray = JNI_FALSE;

	if(pixelGLDest==NULL)
		return;

	lenPixelGLDest = (*env)->GetArrayLength(env, pixelGLDest);
	pixelGLDestData = (*env)->GetShortArrayElements(env, pixelGLDest, 
	                                               &isCopiedArray);

	/* Save current modes. */
	disp__glGetIntegerv(GL_PACK_SWAP_BYTES, &swapbytes);
	disp__glGetIntegerv(GL_PACK_LSB_FIRST, &lsbfirst);
	disp__glGetIntegerv(GL_PACK_ROW_LENGTH, &rowlength);
	disp__glGetIntegerv(GL_PACK_SKIP_ROWS, &skiprows);
	disp__glGetIntegerv(GL_PACK_SKIP_PIXELS, &skippixels);
	disp__glGetIntegerv(GL_PACK_ALIGNMENT, &alignment);
	disp__glGetIntegerv(GL_UNPACK_SWAP_BYTES, &unswapbytes);
	disp__glGetIntegerv(GL_UNPACK_LSB_FIRST, &unlsbfirst);
	disp__glGetIntegerv(GL_UNPACK_ROW_LENGTH, &unrowlength);
	disp__glGetIntegerv(GL_UNPACK_SKIP_ROWS, &unskiprows);
	disp__glGetIntegerv(GL_UNPACK_SKIP_PIXELS, &unskippixels);
	disp__glGetIntegerv(GL_UNPACK_ALIGNMENT, &unalignment);

	/* Little endian machines (DEC Alpha, Inten X86, PPC(in LSB mode)...  
	   for example) could benefit from setting 
	   GL_PACK_LSB_FIRST to GL_TRUE
	   instead of GL_FALSE, but this would require changing the
	   generated bitmaps too. */
	disp__glPixelStorei(GL_PACK_SWAP_BYTES, GL_FALSE);
	disp__glPixelStorei(GL_PACK_LSB_FIRST, GL_TRUE);
        disp__glPixelStorei(GL_PACK_ROW_LENGTH, pack_rowlen);
	disp__glPixelStorei(GL_PACK_SKIP_ROWS, pack_y);
	disp__glPixelStorei(GL_PACK_SKIP_PIXELS, pack_x);
	disp__glPixelStorei(GL_PACK_ALIGNMENT, 2);
	disp__glPixelStorei(GL_UNPACK_SWAP_BYTES, GL_FALSE);
	disp__glPixelStorei(GL_UNPACK_LSB_FIRST, GL_TRUE);
        disp__glPixelStorei(GL_UNPACK_ROW_LENGTH, width);
	disp__glPixelStorei(GL_UNPACK_SKIP_ROWS, 0);
	disp__glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
	disp__glPixelStorei(GL_UNPACK_ALIGNMENT, 2);

	/* Actually read the pixels. */
        disp__glReadBuffer(bufferName);
        disp__glReadPixels(xpos, ypos, width, height, format, type, 
	             pixelGLDestData);

	/* Restore saved modes. */
	disp__glPixelStorei(GL_PACK_SWAP_BYTES, swapbytes);
	disp__glPixelStorei(GL_PACK_LSB_FIRST, lsbfirst);
	disp__glPixelStorei(GL_PACK_ROW_LENGTH, rowlength);
	disp__glPixelStorei(GL_PACK_SKIP_ROWS, skiprows);
	disp__glPixelStorei(GL_PACK_SKIP_PIXELS, skippixels);
	disp__glPixelStorei(GL_PACK_ALIGNMENT, alignment);
	disp__glPixelStorei(GL_UNPACK_SWAP_BYTES, unswapbytes);
	disp__glPixelStorei(GL_UNPACK_LSB_FIRST, unlsbfirst);
	disp__glPixelStorei(GL_UNPACK_ROW_LENGTH, unrowlength);
	disp__glPixelStorei(GL_UNPACK_SKIP_ROWS, unskiprows);
	disp__glPixelStorei(GL_UNPACK_SKIP_PIXELS, unskippixels);
	disp__glPixelStorei(GL_UNPACK_ALIGNMENT, unalignment);

	disp__glFlush();
	disp__glFinish();

	(*env)->ReleaseShortArrayElements(env,  
	                                 pixelGLDest, pixelGLDestData, 
					 (isCopiedArray==JNI_TRUE)?0:JNI_ABORT);
}

/**
 * This one is to upspeed the Offscreen rendering engine for e.g. Swing !
 */
JNIEXPORT void JNICALL
Java_gl4java_GLContext_gljReadPixelGL2AWT__IIIIIIIIII_3I (
	JNIEnv *env, jobject obj,
	jint pack_rowlen,
	jint pack_x,
	jint pack_y,
	jint xpos,
	jint ypos,
	jint width,
	jint height,
	jint format,
	jint type,
	jint bufferName,
	jintArray pixelDest)
{
	GLint swapbytes, lsbfirst, rowlength;
	GLint skiprows, skippixels, alignment;
	GLint unswapbytes, unlsbfirst, unrowlength;
	GLint unskiprows, unskippixels, unalignment;

	jsize lenPixelDest = 0;
	jint *pixelDestData = NULL;

	jboolean isCopiedArray = JNI_FALSE;

	if(pixelDest==NULL)
		return;

	lenPixelDest = (*env)->GetArrayLength(env, pixelDest);
	pixelDestData = (*env)->GetIntArrayElements(env, pixelDest, 
	                                            &isCopiedArray);

	/* Save current modes. */
	disp__glGetIntegerv(GL_PACK_SWAP_BYTES, &swapbytes);
	disp__glGetIntegerv(GL_PACK_LSB_FIRST, &lsbfirst);
	disp__glGetIntegerv(GL_PACK_ROW_LENGTH, &rowlength);
	disp__glGetIntegerv(GL_PACK_SKIP_ROWS, &skiprows);
	disp__glGetIntegerv(GL_PACK_SKIP_PIXELS, &skippixels);
	disp__glGetIntegerv(GL_PACK_ALIGNMENT, &alignment);
	disp__glGetIntegerv(GL_UNPACK_SWAP_BYTES, &unswapbytes);
	disp__glGetIntegerv(GL_UNPACK_LSB_FIRST, &unlsbfirst);
	disp__glGetIntegerv(GL_UNPACK_ROW_LENGTH, &unrowlength);
	disp__glGetIntegerv(GL_UNPACK_SKIP_ROWS, &unskiprows);
	disp__glGetIntegerv(GL_UNPACK_SKIP_PIXELS, &unskippixels);
	disp__glGetIntegerv(GL_UNPACK_ALIGNMENT, &unalignment);

	/* Little endian machines (DEC Alpha, Inten X86, PPC(in LSB mode)...  
	   for example) could benefit from setting 
	   GL_PACK_LSB_FIRST to GL_TRUE
	   instead of GL_FALSE, but this would require changing the
	   generated bitmaps too. */
	disp__glPixelStorei(GL_PACK_SWAP_BYTES, GL_FALSE);
	disp__glPixelStorei(GL_PACK_LSB_FIRST, GL_TRUE);
        disp__glPixelStorei(GL_PACK_ROW_LENGTH, pack_rowlen);
	disp__glPixelStorei(GL_PACK_SKIP_ROWS, pack_y);
	disp__glPixelStorei(GL_PACK_SKIP_PIXELS, pack_x);
	disp__glPixelStorei(GL_PACK_ALIGNMENT, 4);
	disp__glPixelStorei(GL_UNPACK_SWAP_BYTES, GL_FALSE);
	disp__glPixelStorei(GL_UNPACK_LSB_FIRST, GL_TRUE);
        disp__glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
	disp__glPixelStorei(GL_UNPACK_SKIP_ROWS, 0);
	disp__glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
	disp__glPixelStorei(GL_UNPACK_ALIGNMENT, 4);

	/* Actually read the pixels. */
        disp__glReadBuffer(bufferName);
        disp__glReadPixels(xpos, ypos, width, height, 
			   format, type, pixelDestData);

	/* Restore saved modes. */
	disp__glPixelStorei(GL_PACK_SWAP_BYTES, swapbytes);
	disp__glPixelStorei(GL_PACK_LSB_FIRST, lsbfirst);
	disp__glPixelStorei(GL_PACK_ROW_LENGTH, rowlength);
	disp__glPixelStorei(GL_PACK_SKIP_ROWS, skiprows);
	disp__glPixelStorei(GL_PACK_SKIP_PIXELS, skippixels);
	disp__glPixelStorei(GL_PACK_ALIGNMENT, alignment);
	disp__glPixelStorei(GL_UNPACK_SWAP_BYTES, unswapbytes);
	disp__glPixelStorei(GL_UNPACK_LSB_FIRST, unlsbfirst);
	disp__glPixelStorei(GL_UNPACK_ROW_LENGTH, unrowlength);
	disp__glPixelStorei(GL_UNPACK_SKIP_ROWS, unskiprows);
	disp__glPixelStorei(GL_UNPACK_SKIP_PIXELS, unskippixels);
	disp__glPixelStorei(GL_UNPACK_ALIGNMENT, unalignment);

	(*env)->ReleaseIntArrayElements(env,  pixelDest, pixelDestData, 
	                               (isCopiedArray==JNI_TRUE)?0:JNI_ABORT);
}


JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljFetchOSGLFunctions (
	JNIEnv *env, jclass jclass,
	jstring gllibname, jstring glulibname, jboolean force )
{
	const char * gllib;
	const char * glulib;

        gllib = (*env)->GetStringUTFChars(env, gllibname, 0);
        glulib = (*env)->GetStringUTFChars(env, glulibname, 0);

	strncpy (libGLName, gllib, 798);
	strncpy (libGLUName, glulib, 798);
	libGLName[799] = 0;
	libGLUName[799] = 0;

        (*env)->ReleaseStringUTFChars(env, gllibname, gllib);
        (*env)->ReleaseStringUTFChars(env, glulibname, glulib);

#ifdef _X11_
        fetch_GLX_FUNCS (libGLName, libGLUName, (force==JNI_TRUE)?1:0);
#endif

#ifdef _WIN32_
        fetch_WGL_FUNCS (libGLName, libGLUName, (force==JNI_TRUE)?1:0);
#endif

	return JNI_TRUE;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljFetchGLFunctions (
	JNIEnv *env, jclass jclass,
	jstring gllibname, jstring glulibname, jboolean force )
{
	const char * gllib;
	const char * glulib;

        gllib = (*env)->GetStringUTFChars(env, gllibname, 0);
        glulib = (*env)->GetStringUTFChars(env, glulibname, 0);

	strncpy (libGLName, gllib, 798);
	strncpy (libGLUName, glulib, 798);
	libGLName[799] = 0;
	libGLUName[799] = 0;

        (*env)->ReleaseStringUTFChars(env, gllibname, gllib);
        (*env)->ReleaseStringUTFChars(env, glulibname, glulib);

        fetch_GL_FUNCS (libGLName, libGLUName, (force==JNI_TRUE)?1:0);

	return JNI_TRUE;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljTestGLProc (
	JNIEnv *env, jobject obj, jstring name, jboolean verbose )
{
     jboolean res;
     int method=0;
     
     const char *str = (*env)->GetStringUTFChars(env, name, 0);

     #ifdef _MAC_OS9_
     	InstallJavaConsole(env);
     #endif
     
     res = ( getGLProcAddressHelper(libGLName, libGLUName,
                                    str, &method, 0, verbose)!=NULL )?
			JNI_TRUE:JNI_FALSE;

     (*env)->ReleaseStringUTFChars(env, name, str);
     return res;
}


JNIEXPORT jlong JNICALL
Java_gl4java_GLContext_gljGetCurrentContext( 
	JNIEnv *env, jobject obj )
{
	#ifdef _WIN32_
                return (jlong) ((PointerHolder)disp__wglGetCurrentContext());
        #else
          #ifdef _MAC_OS9_
                return (jlong) ((PointerHolder)aglGetCurrentContext());
          #else
                return (jlong) ((PointerHolder)disp__glXGetCurrentContext());   
	  #endif
        #endif
}

