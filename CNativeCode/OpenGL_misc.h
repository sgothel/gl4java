
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
