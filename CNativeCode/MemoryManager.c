#include "MemoryManager.h"

ArrayList *tesselator_list[NUMBER_OF_LISTS];

void RegisterArray(JNIEnv *env, void *java_array, void *native_array, 
		   JavaBasicType array_type, ListType ltype)
{
	ArrayList *new_element = NULL;

	if ( 0<= ltype && ltype < NUMBER_OF_LISTS &&
	     T_BOOLEAN_ARRAY <= array_type && array_type <= T_DOUBLE_ARRAY
	   ) 
	{
		new_element = malloc(sizeof(ArrayList));
		new_element->java_array = java_array;
		new_element->native_array = native_array;
		new_element->type = array_type;
		new_element->next = tesselator_list[ltype];
		tesselator_list[ltype] = new_element;
		return;
	}
	jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "RegisterArray of JavaBasicType %d and ListType %d failed",
			    array_type, ltype);
}

void FreeArrays(JNIEnv *env, ListType ltype)
{
	ArrayList *element = NULL;
	ArrayList *next = NULL;

	if (ltype >= 0 && ltype < NUMBER_OF_LISTS) 
	{
		element = tesselator_list[ltype];
		while (element != 0) 
		{
			next = element->next;
			switch (element->type) 
			{
				case T_BOOLEAN_ARRAY:
					(*env)->ReleaseBooleanArrayElements(env, element->java_array, element->native_array, JNI_ABORT);
					break;
				case T_BYTE_ARRAY:
					(*env)->ReleaseByteArrayElements(env, element->java_array, element->native_array, JNI_ABORT);
					break;
				case T_CHAR_ARRAY:
					(*env)->ReleaseCharArrayElements(env, element->java_array, element->native_array, JNI_ABORT);
					break;
				case T_SHORT_ARRAY:
					(*env)->ReleaseShortArrayElements(env, element->java_array, element->native_array, JNI_ABORT);
					break;
				case T_INT_ARRAY:
					(*env)->ReleaseIntArrayElements(env, element->java_array, element->native_array, JNI_ABORT);
					break;
				case T_LONG_ARRAY:
					(*env)->ReleaseLongArrayElements(env, element->java_array, element->native_array, JNI_ABORT);
					break;
				case T_FLOAT_ARRAY:
					(*env)->ReleaseFloatArrayElements(env, element->java_array, element->native_array, JNI_ABORT);
					break;
				case T_DOUBLE_ARRAY:
					(*env)->ReleaseDoubleArrayElements(env, element->java_array, element->native_array, JNI_ABORT);
					break;
				default:
					jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
							    "FreeArrays of JavaBasicType %d failed",
							    element->type);
			}
			free(element);
			element = next;
		}
		tesselator_list[ltype] = 0;
		return;
	}
	jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "RegisterArray of ListType %d failed",
			    ltype);
}

