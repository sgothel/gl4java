
#ifndef OPENGLMISC
	#define OPENGLMISC

	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>

	#ifdef _WIN32_
		#include "winstuff.h"
	#endif

	#include <jni.h>

	#include "gltool.h"

	#ifndef LIBAPIENTRY
		#define LIBAPIENTRY
	#endif
	#ifndef LIBAPI
		#define LIBAPI extern
	#endif

	LIBAPI char libGLName[/*800*/];
	LIBAPI char libGLUName[/*800*/];

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

		
	/* testJavaGLTypes does important implementation plattformspecific checks:
	 *
	 * o do fit the JNI <-> GL Variables-Type Mapping 
	 * o IF ERROR OR VERBOSE -> DUMP JNI,GL Type-Length
	 */
	LIBAPI jboolean LIBAPIENTRY testJavaGLTypes(jboolean verbose);
#endif
