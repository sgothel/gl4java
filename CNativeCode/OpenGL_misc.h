
#ifndef OPENGLMISC
	#define OPENGLMISC

	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>

	#ifdef _WIN32_
		#include "winstuff.h"
	#endif

	#include <jni.h>

	#include<GL/gl.h>
	#include <GL/glu.h>

	#ifndef LIBAPIENTRY
		#define LIBAPIENTRY
	#endif
	#ifndef LIBAPI
		#define LIBAPI
	#endif

	#ifndef USE_64BIT_POINTER
		typedef int  PointerHolder;
	#else
		typedef long PointerHolder;
	#endif

	  /* to match the GLCapabilities values .. */

	  #define BUFFER_SINGLE 0
	  #define BUFFER_DOUBLE 1
	 
	  #define COLOR_INDEX 0
	  #define COLOR_RGBA  1
	  
	  #define STEREO_OFF 0
	  #define STEREO_ON  1

	  typedef struct {
		  jint buffer;
		  jint color;
		  jint stereo;
		  jint depthBits;
		  jint stencilBits;

		  jint redBits;
		  jint greenBits;
		  jint blueBits;
		  jint alphaBits;
		  jint accumRedBits;
		  jint accumGreenBits;
		  jint accumBlueBits;
		  jint accumAlphaBits;

		  jlong nativeVisualID;
	  } GLCapabilities;
		
	/**
	 * gets the capabilities outta java's GLCapabilities object 'capsObj'
	 * and puts those values to the C-Struct GLCapabilities !
	 */
	LIBAPI jboolean LIBAPIENTRY javaGLCapabilities2NativeGLCapabilities 
						     ( JNIEnv *env, 
						       jobject capsObj, 
						       GLCapabilities *glCaps );

	/**
	 * gets the capabilities outta the C-Struct GLCapabilities
	 * and puts those values to java's GLCapabilities object 'capsObj'
	 */
	LIBAPI jboolean LIBAPIENTRY nativeGLCapabilities2JavaGLCapabilities 
						     ( JNIEnv *env, 
						       jobject capsObj, 
						       GLCapabilities *glCaps );

		
	/**
	 * prints the contents of the GLCapabilities to stdout !
	 */
	LIBAPI void LIBAPIENTRY printGLCapabilities ( GLCapabilities *glCaps );

	/* testJavaGLTypes does important implementation plattformspecific checks:
	 *
	 * o do fit the JNI <-> GL Variables-Type Mapping 
	 * o IF ERROR OR VERBOSE -> DUMP JNI,GL Type-Length
	 */
	LIBAPI jboolean LIBAPIENTRY testJavaGLTypes(jboolean verbose);
	  
	LIBAPI void * LIBAPIENTRY getGLProcAddressHelper
				         (const char * func, int * method,
					  int debug, int verbose );
#endif
