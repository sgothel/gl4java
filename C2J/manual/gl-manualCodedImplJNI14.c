/** THIS IS A MANUAL CODED PART
    gl-manualCodedImplJNI14.java
*/

static const char _gl_n_a_string[] = "GL-String not avaiable !";

static const char * _gl_lib_vendor_="Jausoft - Sven Goethel Software Development";
static const char * _gl_lib_version_="2.8.1.0";

/* ---------------------------------------------------------------------- */

JNIEXPORT jstring JNICALL
Java_gl4java_GLFunc14JauJNI_glGetString ( JNIEnv *env, jobject obj,
	                                  jint name ) 
{
    const char * tmpString=0;

    if ( disp__glGetString == NULL ) 
    	return (*env)->NewStringUTF(env, _gl_n_a_string);

    tmpString = disp__glGetString ( /* jint */ name);
    if(tmpString==NULL)
    	tmpString=_gl_n_a_string;
 
    return (*env)->NewStringUTF(env, tmpString);
}

JNIEXPORT jstring JNICALL
Java_gl4java_GLFunc14JauJNI_getNativeVendor ( JNIEnv *env, jobject obj )
{
    return (*env)->NewStringUTF(env, _gl_lib_vendor_);   
}

JNIEXPORT jstring JNICALL
Java_gl4java_GLFunc14JauJNI_getNativeVersion ( JNIEnv *env, jobject obj )
{
    return (*env)->NewStringUTF(env, _gl_lib_version_);   
}

/* ---------------------------------------------------------------------- */
/*
 * Support for NVidia routines
 */

#include "ptrtypes.h"

#ifdef _X11_
  #include <GL/glx.h>
  #include <dlfcn.h>
  #include "glxtool.h"
  #include <unistd.h>
#endif

#ifdef _WIN32_
  #include "wgltool.h"
#endif

#define GET_GL_PROCADDRESS(a) getGLProcAddressHelper (NULL, NULL, (a), NULL, 0);

JNIEXPORT jlong JNICALL
Java_gl4java_GLFunc14JauJNI_glAllocateMemoryNV0(JNIEnv* env, jobject unused,
                                                jint size,
                                                jfloat readFreq,
                                                jfloat writeFreq,
                                                jfloat priority)
{
  void* (CALLBACK *disp__glAllocateMemoryNV)(int, float, float, float) =
#ifdef _WIN32_
    disp__wglAllocateMemoryNV;
#elif defined(_X11_)
    disp__glXAllocateMemoryNV;
#else
    NULL;
#endif

  if (disp__glAllocateMemoryNV == NULL) return 0;

  return ((uintptr_t) disp__glAllocateMemoryNV(size, readFreq, writeFreq, priority));
}

JNIEXPORT void JNICALL
Java_gl4java_GLFunc14JauJNI_glFreeMemoryNV0(JNIEnv* env, jobject unused, jlong address)
{
  void (CALLBACK *disp__glFreeMemoryNV)(void*) =
#if (defined(_WIN32_))
      disp__wglFreeMemoryNV;
#elif defined(_X11_)
      disp__glXFreeMemoryNV;
#else
      NULL;
#endif

  if (disp__glFreeMemoryNV == NULL) return;

  disp__glFreeMemoryNV((void*) ((uintptr_t) address));
}

JNIEXPORT jobject JNICALL
Java_gl4java_GLFunc14JauJNI_newDirectByteBuffer(JNIEnv* env, jobject unused, jlong addr, jint capacity)
{
  return (*env)->NewDirectByteBuffer(env, (void *) ((uintptr_t) addr), capacity);
}
