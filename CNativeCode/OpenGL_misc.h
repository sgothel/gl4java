
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

	LIBAPI void * LIBAPIENTRY getGLProcAddressHelper
				         (const char * func, int * method,
					  int debug, int verbose );
#endif
