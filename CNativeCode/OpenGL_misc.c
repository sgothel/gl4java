
#include "OpenGL_misc.h"
#include "gl4java_GLContext.h"

#ifdef _X11_
	#include <GL/glx.h>
	#include <dlfcn.h>
#endif

#ifdef macintosh
	#include <agl.h>
	#include <string.h>
	#include <CodeFragments.h>
	#include <Errors.h>
	#include <TextUtils.h>
	#include <StringCompare.h>
	#include "mac_console.h"
	
	#define fragNoErr 0
#endif

static const char * _lib_version_=  __LIB_VERSION__ ;

#ifdef macintosh
  static const char * _lib_vendor_ = "Jausoft - Sven Goethel Software Development & Gerard Ziemski"; 
#else
  static const char * _lib_vendor_ = "Jausoft - Sven Goethel Software Development"; 
#endif

#ifndef CALLBACK
	#define CALLBACK
#endif


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
	
void LIBAPIENTRY printGLCapabilities ( GLCapabilities *glCaps )
{
    fprintf(stdout, "\t doubleBuff: %d, ", (int)glCaps->buffer);
    fprintf(stdout, " rgba: %d, ", (int)glCaps->color);
    fprintf(stdout, " stereo: %d, ", (int)glCaps->stereo);
    fprintf(stdout, " depthSize: %d, ", (int)glCaps->depthBits);
    fprintf(stdout, " stencilSize: %d !\n", (int)glCaps->stencilBits);
    fprintf(stdout, "\t red: %d, ", (int)glCaps->redBits);
    fprintf(stdout, " green: %d, ", (int)glCaps->greenBits);
    fprintf(stdout, " blue: %d, ", (int)glCaps->blueBits);
    fprintf(stdout, " alpha: %d !\n", (int)glCaps->alphaBits);
    fprintf(stdout, "\t red accum: %d, ", (int)glCaps->accumRedBits);
    fprintf(stdout, " green accum: %d, ", (int)glCaps->accumGreenBits);
    fprintf(stdout, " blue accum: %d, ", (int)glCaps->accumBlueBits);
    fprintf(stdout, " alpha accum: %d !\n", (int)glCaps->accumAlphaBits);
    fprintf(stdout, "\t nativeVisualID: %ld !\n", (long)glCaps->nativeVisualID);

    fflush(stdout);
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
Java_gl4java_GLContext_gljReadPixelGL2AWT__IIIIIII_3B (
	JNIEnv *env, jobject obj,
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
	glGetIntegerv(GL_PACK_SWAP_BYTES, &swapbytes);
	glGetIntegerv(GL_PACK_LSB_FIRST, &lsbfirst);
	glGetIntegerv(GL_PACK_ROW_LENGTH, &rowlength);
	glGetIntegerv(GL_PACK_SKIP_ROWS, &skiprows);
	glGetIntegerv(GL_PACK_SKIP_PIXELS, &skippixels);
	glGetIntegerv(GL_PACK_ALIGNMENT, &alignment);
	glGetIntegerv(GL_UNPACK_SWAP_BYTES, &unswapbytes);
	glGetIntegerv(GL_UNPACK_LSB_FIRST, &unlsbfirst);
	glGetIntegerv(GL_UNPACK_ROW_LENGTH, &unrowlength);
	glGetIntegerv(GL_UNPACK_SKIP_ROWS, &unskiprows);
	glGetIntegerv(GL_UNPACK_SKIP_PIXELS, &unskippixels);
	glGetIntegerv(GL_UNPACK_ALIGNMENT, &unalignment);

	/* Little endian machines (DEC Alpha, Inten X86, PPC(in LSB mode)...  
	   for example) could benefit from setting 
	   GL_PACK_LSB_FIRST to GL_TRUE
	   instead of GL_FALSE, but this would require changing the
	   generated bitmaps too. */
	glPixelStorei(GL_PACK_SWAP_BYTES, GL_FALSE);
	glPixelStorei(GL_PACK_LSB_FIRST, GL_TRUE);
        glPixelStorei(GL_PACK_ROW_LENGTH, width);
	glPixelStorei(GL_PACK_SKIP_ROWS, 0);
	glPixelStorei(GL_PACK_SKIP_PIXELS, 0);
	glPixelStorei(GL_PACK_ALIGNMENT, 1);
	glPixelStorei(GL_UNPACK_SWAP_BYTES, GL_FALSE);
	glPixelStorei(GL_UNPACK_LSB_FIRST, GL_TRUE);
        glPixelStorei(GL_UNPACK_ROW_LENGTH, width);
	glPixelStorei(GL_UNPACK_SKIP_ROWS, 0);
	glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
	glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

	/* Actually read the pixels. */
        glReadBuffer(bufferName);
        glReadPixels(xpos, ypos, width, height, format, type, 
	             pixelGLDestData);

	/* Restore saved modes. */
	glPixelStorei(GL_PACK_SWAP_BYTES, swapbytes);
	glPixelStorei(GL_PACK_LSB_FIRST, lsbfirst);
	glPixelStorei(GL_PACK_ROW_LENGTH, rowlength);
	glPixelStorei(GL_PACK_SKIP_ROWS, skiprows);
	glPixelStorei(GL_PACK_SKIP_PIXELS, skippixels);
	glPixelStorei(GL_PACK_ALIGNMENT, alignment);
	glPixelStorei(GL_UNPACK_SWAP_BYTES, unswapbytes);
	glPixelStorei(GL_UNPACK_LSB_FIRST, unlsbfirst);
	glPixelStorei(GL_UNPACK_ROW_LENGTH, unrowlength);
	glPixelStorei(GL_UNPACK_SKIP_ROWS, unskiprows);
	glPixelStorei(GL_UNPACK_SKIP_PIXELS, unskippixels);
	glPixelStorei(GL_UNPACK_ALIGNMENT, unalignment);

	glFlush();
	glFinish();

	(*env)->ReleaseByteArrayElements(env,  
	                                 pixelGLDest, pixelGLDestData, 
					 (isCopiedArray==JNI_TRUE)?0:JNI_ABORT);
}

/**
 * This one is to upspeed the Offscreen rendering engine for e.g. Swing !
 */
JNIEXPORT void JNICALL
Java_gl4java_GLContext_gljReadPixelGL2AWT__IIIIIII_3B_3I (
	JNIEnv *env, jobject obj,
	jint xpos,
	jint ypos,
	jint width,
	jint height,
	jint format,
	jint type,
	jint bufferName,
	jbyteArray pixelGL,
	jintArray pixelDest)
{
	GLint swapbytes, lsbfirst, rowlength;
	GLint skiprows, skippixels, alignment;
	GLint unswapbytes, unlsbfirst, unrowlength;
	GLint unskiprows, unskippixels, unalignment;

	jsize lenPixelSource = 0;
	jbyte *pixelGLData = NULL;
	jsize lenPixelDest = 0;
	jint *pixelDestData = NULL;
        int alpha=0;
        int red=0;
        int green=0;
        int blue=0;
        int offset=0;
        int y_desc;
	int x;

	jboolean isCopiedArray0 = JNI_FALSE;
	jboolean isCopiedArray1 = JNI_FALSE;

	if(pixelGL==NULL || pixelDest==NULL)
		return;

	lenPixelSource = (*env)->GetArrayLength(env, pixelGL);
	pixelGLData = (*env)->GetByteArrayElements(env, pixelGL, 
	                                           &isCopiedArray0);
	lenPixelDest = (*env)->GetArrayLength(env, pixelDest);
	pixelDestData = (*env)->GetIntArrayElements(env, pixelDest, 
	                                            &isCopiedArray1);

	/* Save current modes. */
	glGetIntegerv(GL_PACK_SWAP_BYTES, &swapbytes);
	glGetIntegerv(GL_PACK_LSB_FIRST, &lsbfirst);
	glGetIntegerv(GL_PACK_ROW_LENGTH, &rowlength);
	glGetIntegerv(GL_PACK_SKIP_ROWS, &skiprows);
	glGetIntegerv(GL_PACK_SKIP_PIXELS, &skippixels);
	glGetIntegerv(GL_PACK_ALIGNMENT, &alignment);
	glGetIntegerv(GL_UNPACK_SWAP_BYTES, &unswapbytes);
	glGetIntegerv(GL_UNPACK_LSB_FIRST, &unlsbfirst);
	glGetIntegerv(GL_UNPACK_ROW_LENGTH, &unrowlength);
	glGetIntegerv(GL_UNPACK_SKIP_ROWS, &unskiprows);
	glGetIntegerv(GL_UNPACK_SKIP_PIXELS, &unskippixels);
	glGetIntegerv(GL_UNPACK_ALIGNMENT, &unalignment);

	/* Little endian machines (DEC Alpha, Inten X86, PPC(in LSB mode)...  
	   for example) could benefit from setting 
	   GL_PACK_LSB_FIRST to GL_TRUE
	   instead of GL_FALSE, but this would require changing the
	   generated bitmaps too. */
	glPixelStorei(GL_PACK_SWAP_BYTES, GL_FALSE);
	glPixelStorei(GL_PACK_LSB_FIRST, GL_TRUE);
        glPixelStorei(GL_PACK_ROW_LENGTH, width);
	glPixelStorei(GL_PACK_SKIP_ROWS, 0);
	glPixelStorei(GL_PACK_SKIP_PIXELS, 0);
	glPixelStorei(GL_PACK_ALIGNMENT, 1);
	glPixelStorei(GL_UNPACK_SWAP_BYTES, GL_FALSE);
	glPixelStorei(GL_UNPACK_LSB_FIRST, GL_TRUE);
        glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
	glPixelStorei(GL_UNPACK_SKIP_ROWS, 0);
	glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
	glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

	/* Actually read the pixels. */
        glReadBuffer(bufferName);
        glReadPixels(xpos, ypos, width, height, format, type, pixelGLData);

	/* Restore saved modes. */
	glPixelStorei(GL_PACK_SWAP_BYTES, swapbytes);
	glPixelStorei(GL_PACK_LSB_FIRST, lsbfirst);
	glPixelStorei(GL_PACK_ROW_LENGTH, rowlength);
	glPixelStorei(GL_PACK_SKIP_ROWS, skiprows);
	glPixelStorei(GL_PACK_SKIP_PIXELS, skippixels);
	glPixelStorei(GL_PACK_ALIGNMENT, alignment);
	glPixelStorei(GL_UNPACK_SWAP_BYTES, unswapbytes);
	glPixelStorei(GL_UNPACK_LSB_FIRST, unlsbfirst);
	glPixelStorei(GL_UNPACK_ROW_LENGTH, unrowlength);
	glPixelStorei(GL_UNPACK_SKIP_ROWS, unskiprows);
	glPixelStorei(GL_UNPACK_SKIP_PIXELS, unskippixels);
	glPixelStorei(GL_UNPACK_ALIGNMENT, unalignment);

        for(y_desc=height-1; y_desc>=0; y_desc--)
        {
              for(x=0;x<width;x++)
              {
                red   = ( (int)(pixelGLData[offset++]) & 0xff ) << 16;
                green = ( (int)(pixelGLData[offset++]) & 0xff ) <<  8;
                blue  =   (int)(pixelGLData[offset++]) & 0xff;

                if(format==GL_RGBA)
                    alpha = ( (int)(pixelGLData[offset++]) & 0xff ) << 24;
                else
                    alpha = ( (int) 0xff ) << 24;

                pixelDestData[y_desc*width + x] = alpha | red | green | blue;
              }
        }     

	(*env)->ReleaseByteArrayElements(env,  pixelGL, pixelGLData, 
	                               (isCopiedArray0==JNI_TRUE)?0:JNI_ABORT);

	(*env)->ReleaseIntArrayElements(env,  pixelDest, pixelDestData, 
	                               (isCopiedArray1==JNI_TRUE)?0:JNI_ABORT);
}

/**
 * Experimental Code, not done yet !
 * This one is to upspeed the Offscreen rendering engine for e.g. Swing !
 */
JNIEXPORT void JNICALL 
Java_gl4java_GLContext_gljCpyOffScrnImg2Buffer__III_3B
  (JNIEnv *env, jobject obj, jint width, jint height, jint format, jbyteArray pixelDest)
{
}

/**
 * Experimental Code, not done yet !
 * This one is to upspeed the Offscreen rendering engine for e.g. Swing !
 */
JNIEXPORT void JNICALL 
Java_gl4java_GLContext_gljCpyOffScrnImg2Buffer__III_3I
  (JNIEnv *env, jobject obj, jint width, jint height, jint format, jintArray pixelDest)
{
#ifdef _X11_

        jclass cls = 0;
        jfieldID fpixmapHandle=0;

	jsize lenPixelDest = 0;
	jint *pixelDestData = NULL;
	jboolean isCopiedArray = JNI_FALSE;
	jboolean ret = JNI_TRUE;
	int sizemax=0;
	int sizepix=0;


        jfieldID fdisplayHandle=0;
        Display *disp=0;
	Pixmap pix=0;
        XImage *image;

        cls = (*env)->GetObjectClass(env, obj);

	fdisplayHandle = (*env)->GetFieldID(env, cls, "displayHandle", "I");
	if (fdisplayHandle == 0) ret= JNI_FALSE;
	else disp=(Display *)(*env)->GetIntField(env, obj, fdisplayHandle);

	fpixmapHandle = (*env)->GetFieldID(env, cls, "pixmapHandle", "I");
	if (fpixmapHandle == 0) ret= JNI_FALSE;
	else pix = (Pixmap)(*env)->GetIntField(env, obj, fpixmapHandle);

	if(pix==0 || pixelDest==NULL)
		return;

	lenPixelDest = (*env)->GetArrayLength(env, pixelDest);
	pixelDestData = (*env)->GetIntArrayElements(env, pixelDest, 
	                                            &isCopiedArray);

	if(format==GL_RGBA) {
          image = XGetImage(disp, pix, 0, 0, width, height, 
	                    0xffffffff, ZPixmap);
          printf("format RGBA!!\n");
	} else if(format==GL_RGB) {
          image = XGetImage(disp, pix, 0, 0, width, height, 
	                    0x00ffffff, ZPixmap);
          printf("format RGB!!\n");
	} else {
          image = XGetImage(disp, pix, 0, 0, width, height, 
	                    0xffffffff, ZPixmap);
          printf("format not supported - guessing RGBA!!\n");
	}

	if(image!=NULL)
	{
	    printf("width %d height %d\n", (int)width, (int)height);
	    printf("depth %d, bytes_per_line %d, width %d, height %d\n",
	       image->depth, image->bytes_per_line, image->width, image->height);
	    sizemax=(int)(lenPixelDest*sizeof(jint));
	    sizepix=image->bytes_per_line*image->height;

	    printf("sizeof dest-array: %d bytes\n", sizemax);
	    printf("sizeof image bpl*height: %d bytes\n", sizepix); 

	    if(sizepix<sizemax) sizemax=sizepix;

	    (*env)->SetIntArrayRegion(env,  pixelDest, 0, sizemax/sizeof(jint),
				      (jint*)image->data);
	    printf("copied ..\n");
	} else {
	    printf("invalid image ...\n");
	}

	if(pixelDestData!=NULL)
	    (*env)->ReleaseIntArrayElements(env,  pixelDest, pixelDestData, 
	                                    JNI_ABORT);
#endif
}

#ifdef macintosh

#ifndef NDEBUG

static void PrintSymbolNamesByConnection (CFragConnectionID myConnID)
{
       long           myIndex;
       long           myCount;       /*number of exported symbols in fragment*/
       OSErr          myErr;
       Str255         myName;        /*symbol name*/
       Ptr            myAddr;        /*symbol address*/
       CFragSymbolClass       myClass;       /*symbol class*/
       static char buffer[256];

       myErr = CountSymbols(myConnID, &myCount);
       if (!myErr)
          for (myIndex = 1; myIndex <= myCount; myIndex++)
             {
                myErr = GetIndSymbol(myConnID, myIndex, myName, 
                                        &myAddr, &myClass);
                if (!myErr)
		{
			p2cstrcpy (buffer, myName);
								 
            printf("%d/%d: class %d - name %s\n", 
		   		myIndex, myCount, myClass, buffer);
		}
             }
}

static Ptr SeekSymbolNamesByConnection (CFragConnectionID myConnID, Str255 name)
{
       long           myIndex;
       long           myCount;       /*number of exported symbols in fragment*/
       OSErr          myErr;
       Str255         myName;        /*symbol name*/
       Ptr            myAddr;        /*symbol address*/
       CFragSymbolClass       myClass;       /*symbol class*/

       myErr = CountSymbols(myConnID, &myCount);
       if (!myErr)
          for (myIndex = 1; myIndex <= myCount; myIndex++)
             {
                myErr = GetIndSymbol(myConnID, myIndex, myName, 
                                        &myAddr, &myClass);
                if (!myErr && EqualString (myName, name, true, true) == true )
			return myAddr;
             }
}

#endif /* ifndef NDEBUG */

#endif /* ifdef macintosh */

void * LIBAPIENTRY getGLProcAddressHelper(const char * func, int * method,
					  int debug, int verbose )
{
	void * funcPtr=NULL;
	int lmethod;

#ifdef _X11_

	void * libHandleGL;

	/*
	 * void (*glXGetProcAddressARB(const GLubyte *procName))
	 */
	static void * (CALLBACK *__glXGetProcAddress)
					(const GLubyte *procName) = NULL;
        static int                  __firstAccess                 = 1;

        if(__glXGetProcAddress==NULL && __firstAccess)
	{
	    libHandleGL = dlopen("libGL.so", RTLD_LAZY|RTLD_GLOBAL);
	    if(libHandleGL==NULL)
	    {
		printf("cannot access OpenGL library libGL.so\n");
		fflush(NULL);
	    } else {
		__glXGetProcAddress = 
				    dlsym(libHandleGL, "glXGetProcAddressARB");

		if(__glXGetProcAddress!=NULL && verbose) {
		        printf("found glXGetProcAddressARB in libGL.so\n");
		        fflush(NULL);
		}

		if(__glXGetProcAddress==NULL) 
		{
		    __glXGetProcAddress = 
				    dlsym(libHandleGL, "glXGetProcAddressEXT");

		    if(__glXGetProcAddress!=NULL && verbose) {
		        printf("found glXGetProcAddressEXT in libGL.so\n");
		        fflush(NULL);
		    }
		}

		if(__glXGetProcAddress==NULL) 
		{
		    __glXGetProcAddress = 
				    dlsym(libHandleGL, "glXGetProcAddress");

		    if(__glXGetProcAddress!=NULL && verbose) {
		        printf("found glXGetProcAddress in libGL.so\n");
		        fflush(NULL);
		    }
		}

		dlclose(libHandleGL);
		libHandleGL=NULL;

		if(__glXGetProcAddress==NULL)
		{
		    printf("cannot find glXGetProcAddress* in OpenGL library libGL.so\n");
		    fflush(NULL);
		    libHandleGL = dlopen("libglx.so", RTLD_LAZY|RTLD_GLOBAL);
		    if(libHandleGL==NULL)
		    {
			printf("cannot access GLX library libglx.so\n");
			fflush(NULL);
		    } else {
			__glXGetProcAddress = 
				    dlsym(libHandleGL, "glXGetProcAddressARB");

		        if(__glXGetProcAddress!=NULL && verbose) {
		            printf("found glXGetProcAddressARB in libglx.so\n");
		            fflush(NULL);
		        }

			if(__glXGetProcAddress==NULL) {
			    __glXGetProcAddress = 
				    dlsym(libHandleGL, "glXGetProcAddressEXT");

		            if(__glXGetProcAddress!=NULL && verbose) {
		                printf("found glXGetProcAddressEXT in libglx.so\n");
		                fflush(NULL);
		            }
			}

			if(__glXGetProcAddress==NULL) {
			    __glXGetProcAddress = 
				    dlsym(libHandleGL, "glXGetProcAddress");

		            if(__glXGetProcAddress!=NULL && verbose) {
		                printf("found glXGetProcAddress in libglx.so\n");
		                fflush(NULL);
		            }
			}

			dlclose(libHandleGL);
			libHandleGL=NULL;
		    }
		}
	    }
	}
        if(__glXGetProcAddress==NULL && __firstAccess)
	{
	    printf("cannot find glXGetProcAddress* in GLX library libglx.so\n");
	    fflush(NULL);
	}
        __firstAccess = 0;

        if(__glXGetProcAddress!=NULL)
		funcPtr = __glXGetProcAddress(func);

	if(funcPtr==NULL) {
		lmethod=2;
		libHandleGL = dlopen("libGL.so", RTLD_LAZY|RTLD_GLOBAL);
		if(libHandleGL==NULL)
		{
			printf("cannot access OpenGL library libGL.so\n");
			fflush(NULL);
		} else {
			funcPtr = dlsym(libHandleGL, func);
			dlclose(libHandleGL);
		}
	} else lmethod=1;
#endif


#ifdef _WIN32_

	HMODULE hDLL_OPENGL32 = 0;



	funcPtr = wglGetProcAddress(func);
	if(funcPtr==NULL)
	{
		lmethod=2;


		if(hDLL_OPENGL32==NULL)

		{
			hDLL_OPENGL32 = LoadLibrary ("OPENGL32.DLL");

			/* hDLL_OPENGL32 = GetModuleHandle ("OPENGL32.DLL"); */

		}
		if(hDLL_OPENGL32==NULL)
		{
			printf("cannot access OpenGL library OPENGL32.DLL\n");
			fflush(NULL);
		} else {
			funcPtr = GetProcAddress (hDLL_OPENGL32, func);
			FreeLibrary(hDLL_OPENGL32);
		}
	} else lmethod=1;
#endif

#ifdef macintosh
   	Str255 errName;
	Str255 funcName;
	Ptr glLibMainAddr = 0;
	CFragConnectionID glLibConnectId = 0;
	CFragSymbolClass glLibSymClass = 0;
	OSErr returnError=fragNoErr;
	#ifndef NDEBUG
        static int firstTime = 1;
    #endif
	     
        returnError = 
		GetSharedLibrary("\pOpenGLLibrary", 
			       kPowerPCCFragArch, 
			       kReferenceCFrag,
			       &glLibConnectId, 
			       &glLibMainAddr, 
                   errName);

	if (returnError != fragNoErr)
	{
        	printf ("GetSharedLibrary Err(%d): Ahhh!  Didn't find LIBRARY !\n",
        		returnError);
	} 

	if (returnError == fragNoErr)
	{
		c2pstrcpy ( funcName, func );
		
		#ifndef NDEBUG
		 if(firstTime)
		 {
			PrintSymbolNamesByConnection (glLibConnectId);
			firstTime=0;
		 } 
		 funcPtr = (void *) 
			SeekSymbolNamesByConnection (glLibConnectId, funcName);
		#endif
		
		if(funcPtr==NULL)
		{
		  returnError = 
		    FindSymbol (glLibConnectId, funcName, 
		                &funcPtr, & glLibSymClass );
		    lmethod=2;
		} 
		#ifndef NDEBUG
		 else lmethod=3;
		#endif
		
		if (returnError != fragNoErr)
		{
		  printf ("GetSharedLibrary Err(%d): Ahhh!  Didn't find SYMBOL: %s !\n",
		  	returnError, func);
		} 
		returnError = fragNoErr; // fall back to ok mode ...
	} 

	if (returnError == fragNoErr && glLibConnectId!=NULL)
	{
		returnError = CloseConnection(&glLibConnectId);

		if (returnError != fragNoErr)
		{
		  printf ("GetSharedLibrary Err(%d): Ahhh!  Didn't close LIBRARY !\n",
		  	returnError);
		} 
	} 

	
#endif

	if(funcPtr==NULL)
	{
	  if(debug||verbose)
	  {
		printf("%s (%d): not implemented !\n", func, lmethod);
		fflush(NULL);
	  }
	} else if(verbose) {
		printf("%s (%d): loaded !\n", func, lmethod);
		fflush(NULL);
	} 
	if(method!=NULL) *method=lmethod;
	return funcPtr;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_GLContext_gljTestGLProc (
	JNIEnv *env, jobject obj, jstring name, jboolean verbose )
{
     jboolean res;
     int method=0;
     
     const char *str = (*env)->GetStringUTFChars(env, name, 0);

     #ifdef macintosh
     	InstallJavaConsole(env);
     #endif
     
     res = ( getGLProcAddressHelper(str, &method, 0, verbose)!=NULL )?
			JNI_TRUE:JNI_FALSE;

     (*env)->ReleaseStringUTFChars(env, name, str);
     return res;
}


JNIEXPORT jint JNICALL
Java_gl4java_GLContext_gljGetCurrentContext( 
	JNIEnv *env, jobject obj )
{
	#ifdef _WIN32_
                return (jint) wglGetCurrentContext();
        #else
          #ifdef macintosh
                return (jint) aglGetCurrentContext();
          #else
                return (jint) glXGetCurrentContext();   
	  #endif
        #endif
}

