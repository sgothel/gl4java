
#ifndef JNITOOLS
	#define JNITOOLS

	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>

	#ifdef _WIN32_
		#include "winstuff.h"
	#endif

	#include <jni.h>

	#ifndef LIBAPIENTRY
		#define LIBAPIENTRY
	#endif
	#ifndef LIBAPI
		#define LIBAPI
	#endif

	typedef enum {
		T_NOPE = 0,
		T_VOID,
		T_BOOLEAN,
		T_BYTE,
		T_CHAR,
		T_SHORT,
		T_INT,
		T_LONG,
		T_FLOAT,
		T_DOUBLE,
		T_OBJECT,
		T_ARRAY_TYPE_BORDER,
		T_BOOLEAN_ARRAY,
		T_BYTE_ARRAY,
		T_CHAR_ARRAY,
		T_SHORT_ARRAY,
		T_INT_ARRAY,
		T_LONG_ARRAY,
		T_FLOAT_ARRAY,
		T_DOUBLE_ARRAY,
		T_OBJECT_ARRAY
	} JavaBasicType;

	/* Throw an exception by name */
	LIBAPI void LIBAPIENTRY jnitoolsThrowByName(JNIEnv *env, const char *name, const char *msg, ...);

	/* Translates a Java string to a C string using the String.getBytes
	 * method, which uses default local encoding.
	 */
	LIBAPI char * LIBAPIENTRY jnitoolsGetJavaString(JNIEnv *env, jstring jstr);

	/**
	 * signature: e.g. "(II[I)V" for "void <name>(int, int, int[])"
	 *
	 * argIndex:  0-n argument index of the method signature
	 *            -1  return type
	 */
	LIBAPI JavaBasicType LIBAPIENTRY jnitoolsGetJavaBasicType(JNIEnv *env, const char * signature, int argIndex, const char * errText);

	LIBAPI int LIBAPIENTRY jnitoolsGetArgNumber(JNIEnv *env, 
					     const char * signature,
					     const char * errText);
	/**
	 * e.g.: int a[4];
	 *       jarray arr = jnitoolsNativeArray2JavaArray(env, T_INT_ARRAY,
	 *	 				            a, 4);
	 */
	LIBAPI jarray LIBAPIENTRY jnitoolsNativeArray2JavaArray (JNIEnv *env, 
					     JavaBasicType jbt, 
					     void *data, int dataArrayLen, 
					     const char * errText, int arg);

	/**
	 * e.g.: int * a[2];
	 *       a[0] = calloc (4, sizeof(int));
	 *       a[1] = calloc (4, sizeof(int));
	 *       jarray arr = jnitoolsNativePtrArray2JavaArray(env, T_INT_ARRAY,
	 *	 				            a, 2, 8);
	 */
	LIBAPI jarray LIBAPIENTRY jnitoolsNativePtrArray2JavaArray(JNIEnv *env, 
						 JavaBasicType jbt, 
                                                 void *data[/*pointerNumber*/], 
						 int pointerNumber, 
						 int dataArrayLen, 
						 const char * errText, int arg);


	/**
	 * e.g.: int a[4];
	 *       jarray arr = ...
	 *       jnitoolsReleaseJavaArray2NativeArray(env, arr, T_INT_ARRAY,
	 *	 				      a, 4);
	 */
	LIBAPI void LIBAPIENTRY jnitoolsReleaseJavaArray2NativeArray(
						 JNIEnv *env, 
						 jarray arr, JavaBasicType jbt, 
						 void *data, int dataArrayLen, 
						 const char * errText, int arg);

	/**
	 * e.g.: int * a[2];
	 *       a[0] = calloc (4, sizeof(int));
	 *       a[1] = calloc (4, sizeof(int));
	 *       jarray arr = ...
	 *       jnitoolsReleaseJavaArray2NativeArrayPtr (env, arr, T_INT_ARRAY,
	 *	 				          a, 2, 8);
	 */
	LIBAPI void LIBAPIENTRY jnitoolsReleaseJavaArray2NativeArrayPtr (
						 JNIEnv *env, 
						 jarray arr, 
						 JavaBasicType jbt, 
						 void *data[/*pointerNumber*/], 
						 int pointerNumber, 
						 int dataArrayLen, 
						 const char * errText, int arg);

	LIBAPI void * LIBAPIENTRY jnitoolsCreateNativeArray (JavaBasicType jbt, 
							    int dataArrayLen, 
							    const char * errText);

	/**
	 * It is very important that OnLoad returns
	 * the right JNI Version Number ... !!
	 */
	JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM * vm, void *reserved);
	JNIEXPORT void JNICALL JNI_OnUnload(JavaVM *vm, void *reserved);

#endif
