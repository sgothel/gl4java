#ifndef MEMORYMANAGER
	#define MEMORYMANAGER

	#include "jnitools.h"

	typedef enum { MEMM_TESSELATOR, 
		       MEMM_SELECTION,
		       MEMM_LAST
        } ListType;

	#define NUMBER_OF_LISTS ((int)MEMM_LAST)

	typedef struct tnode {
		void *java_array;
		void *native_array;
		JavaBasicType type;
		void *next;
	} ArrayList;

	void RegisterArray(JNIEnv *env, void *java_array, void *native_array, 
	                   JavaBasicType array_type, ListType ltype);

	void FreeArrays(JNIEnv *env, ListType ltype);

#endif
