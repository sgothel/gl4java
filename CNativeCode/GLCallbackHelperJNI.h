
#ifndef GLCALLBACKHELPERJNI
	#define GLCALLBACKHELPERJNI

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
		#define LIBAPI
	#endif

	typedef struct {
		/* The Java Handles */
		JNIEnv *env;		/* non-copy */
		jobject jobj;		/* copy */
		char *methodName;	/* copy */
		char *signature;	/* copy */
		int argListNumber;	/* copy */
		int arrayLen1;	/* copy */
		int arrayLen2;	/* copy */
		int arrayLen3;	/* copy */
		int arrayLen4;	/* copy */
		int arrayLen5;	/* copy */

		/* The Native Handles */
		void *cb_obj; /* non-copy, the tesselator, quadratics, etc. object */
		GLenum which; /* copy, the function type */
		jlong glx; /* copy, the GL-Context */
	} CallbackEntry;

	typedef struct _CallbackNode {
		struct _CallbackNode *prev;
		CallbackEntry *this;
		struct _CallbackNode *next;
	} CallbackNode;

	LIBAPI void LIBAPIENTRY PrintCallbackEntry(const char *title, CallbackEntry * cbe);

	LIBAPI void LIBAPIENTRY PrintCallbackNode(const char *title, CallbackNode * cbn);

	LIBAPI CallbackNode * LIBAPIENTRY LastCallbackNode();

	LIBAPI CallbackNode * LIBAPIENTRY FindNextCallbackNodeOfCbObj(void *cb_obj);
	LIBAPI CallbackNode * LIBAPIENTRY FindCallbackNode(GLenum which, jlong glx);

	LIBAPI CallbackEntry * LIBAPIENTRY FindCallbackEntry(GLenum which, jlong glx);

	LIBAPI void  LIBAPIENTRY AddCallbackNode(JNIEnv * env, jobject jobj, 
			      const char *methodName, const char *signature,
			      int arrayLen1, int arrayLen2, int arrayLen3,
		      	      int arrayLen4, int arrayLen5,
			      void *cb_obj, GLenum which, jlong glx);

	LIBAPI void  LIBAPIENTRY RemoveCallbackNodes(void *cb_obj);

	LIBAPI jlong  LIBAPIENTRY GetCurrentGLContext();

	LIBAPI void* LIBAPIENTRY GetCurrentCallbackObject();
	LIBAPI void  LIBAPIENTRY SetCurrentCallbackObject(void* newCbObj);

#endif
