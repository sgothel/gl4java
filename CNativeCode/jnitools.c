#include <string.h>
#include "jnitools.h"

#ifdef __BUILTIN_VA_ARG_INCR
        /* Special stuff for the SunOS port ... */
        va_list __builtin_va_arg_incr = 0;
        va_list __builtin_va_alist = 0;
#endif

static int isinit = 0;
static jclass classString=0;
static jmethodID String_getBytes_ID=0;
static jmethodID String_init_ID=0;

static int init(JNIEnv *env)
{
    classString = (*env)->FindClass(env, "java/lang/String");
    if(classString)
    {
	    String_getBytes_ID = 
		(*env)->GetMethodID(env, classString, "getBytes", "()[B");
	    if(!String_getBytes_ID) return 0;
	    String_init_ID = (*env)->GetMethodID(env, classString, "<init>", "([B)V");
	    if(!String_init_ID) return 0;
    } else return 0;
    return 1;
}

/* Throw an exception by name */
void LIBAPIENTRY jnitoolsThrowByName(JNIEnv *env, const char *name, const char *msg, ...)
{
    static char buffer[1024];
    va_list va;
    jclass cls = 0;

    if(!isinit && init(env)) isinit=1;

    va_start(va, msg);  

    #ifdef NO_VSNPRINTF
	    (void) vsprintf(buffer, msg, va); /* dangerous -> stack overwrite ... */
    #else
	    (void) vsnprintf(buffer, 1023, msg, va);
    #endif
    buffer[1023]=0;

    va_end(va);

    cls = (*env)->FindClass(env, name);

    if (cls != 0) /* Otherwise an exception has already been thrown */
        (*env)->ThrowNew(env, cls, buffer);

    /* It's a good practice to clean up the local references. */
    (*env)->DeleteLocalRef(env, cls);
}

/* Translates a Java string to a C string using the String.getBytes
 * method, which uses default local encoding.
 */
char * LIBAPIENTRY jnitoolsGetJavaString(JNIEnv *env, jstring jstr)
{
    jbyteArray hab = 0;
    jthrowable exc;
    char *result = 0;

    if(!isinit && init(env)) isinit=1;

    hab = (*env)->CallObjectMethod(env, jstr, String_getBytes_ID);
    exc = (*env)->ExceptionOccurred(env);
    if (!exc) {
        jint len = (*env)->GetArrayLength(env, hab);
        result = (char *)malloc(len + 1);
        if (result == 0) {
            jnitoolsThrowByName(env, "java/lang/OutOfMemoryError", 0);
            (*env)->DeleteLocalRef(env, hab);
            return 0;
        }
        (*env)->GetByteArrayRegion(env, hab, 0, len, (jbyte *)result);
        result[len] = 0; /* NULL-terminate */
    } else {
        (*env)->DeleteLocalRef(env, exc);
    }
    (*env)->DeleteLocalRef(env, hab);
    return result;
}

/**
 * signature: e.g. "(II[I)V" for "void <name>(int, int, int[])"
 *
 * argIndex:  0-n argument index of the method signature
 *            -1  return type
 */
static JavaBasicType _jnitoolsGetJavaBasicTypeAndArgLen(JNIEnv *env, 
                                                   const char * signature, int argIndex, 
						   const char * errText,
						   int * argLen)
{
	int i, j, arg, argend, arraydim;
	char c, *help;
	JavaBasicType jbt = T_NOPE;

    	if(!isinit && init(env)) isinit=1;

	*argLen=0;

	if(signature==NULL) return T_NOPE;
	j=strlen(signature);

	for(i=0, arg=0, argend=0, arraydim=0; i<j; i++)
	{
		c=signature[i];
		if(c=='(') continue;
		if(c==')') { argend=1; continue; }
		if(c=='[') { arraydim++; continue; }
		switch (c)
		{
			case 'L':
				help = strchr(signature+i, ';');
				if(help==NULL)
				{
				  jnitoolsThrowByName(env, 
				        "java/lang/IllegalArgumentException",
				        "%s(arg #%d): invalid signature (inv. object) at %d <%s>\n", 
					 errText, argIndex+1, i, signature);
				  return T_NOPE;
				}
				jbt = (arraydim==0)?T_OBJECT:T_OBJECT_ARRAY;
				i = help-signature;
				arraydim=0;
				break;
			case 'V':
				if(arraydim>0)
				{
				  jnitoolsThrowByName(env, 
				        "java/lang/IllegalArgumentException",
				        "%s(arg #%d): invalid signature (void array) at %d <%s>\n", 
					 errText, argIndex+1, i, signature);
				  return T_NOPE;
				}
				jbt = T_VOID;
				arraydim=0;
				break;
			case 'Z':
				jbt = (arraydim==0)?T_BOOLEAN:T_BOOLEAN_ARRAY;
				arraydim=0;
				break;
			case 'B':
				jbt = (arraydim==0)?T_BYTE:T_BYTE_ARRAY;
				arraydim=0;
				break;
			case 'C':
				jbt = (arraydim==0)?T_CHAR:T_CHAR_ARRAY;
				arraydim=0;
				break;
			case 'S':
				jbt = (arraydim==0)?T_SHORT:T_SHORT_ARRAY;
				arraydim=0;
				break;
			case 'I':
				jbt = (arraydim==0)?T_INT:T_INT_ARRAY;
				arraydim=0;
				break;
			case 'J':
				jbt = (arraydim==0)?T_LONG:T_LONG_ARRAY;
				arraydim=0;
				break;
			case 'F':
				jbt = (arraydim==0)?T_FLOAT:T_FLOAT_ARRAY;
				arraydim=0;
				break;
			case 'D':
				jbt = (arraydim==0)?T_DOUBLE:T_DOUBLE_ARRAY;
				arraydim=0;
				break;
		}
		if( (argIndex >=0 && arg==argIndex) ||
		    (argIndex==-1 && argend==1)
		  )
		{
		  *argLen=arg;
		  return jbt;
		}
		arg++;
	}
	return T_NOPE;
}

/**
 * signature: e.g. "(II[I)V" for "void <name>(int, int, int[])"
 *
 * argIndex:  0-n argument index of the method signature
 *            -1  return type
 */
int LIBAPIENTRY jnitoolsGetArgNumber(JNIEnv *env, 
                                     const char * signature,
				     const char * errText)
{
	int num = 0;
	(void)  _jnitoolsGetJavaBasicTypeAndArgLen(env, 
                                                   signature, -1,
						   errText,
						   &num);
	return num;
}

/**
 * signature: e.g. "(II[I)V" for "void <name>(int, int, int[])"
 *
 * argIndex:  0-n argument index of the method signature
 *            -1  return type
 */
JavaBasicType LIBAPIENTRY jnitoolsGetJavaBasicType(JNIEnv *env, 
                                                   const char * signature, int argIndex, 
						   const char * errText)
{
	int num = 0;
	JavaBasicType jbt = _jnitoolsGetJavaBasicTypeAndArgLen(env, 
                                                   signature, argIndex,
						   errText,
						   &num);
	return jbt;
}

jarray LIBAPIENTRY jnitoolsNativeArray2JavaArray (JNIEnv *env, JavaBasicType jbt, 
                                     void *data, int dataArrayLen, 
				     const char * errText, int arg)
{
	jarray res = 0;

    	if(!isinit && init(env)) isinit=1;

	switch(jbt)
	{
		case T_BOOLEAN_ARRAY:
			res = (*env)->NewBooleanArray(env, dataArrayLen);
			if(data!=NULL)
				(*env)->SetBooleanArrayRegion(env, (jbooleanArray)res, 
							   0, dataArrayLen, 
							   (jboolean*)data);
			break;
		case T_BYTE_ARRAY:
			res = (*env)->NewByteArray(env, dataArrayLen);
			if(data!=NULL)
				(*env)->SetByteArrayRegion(env, (jbyteArray)res, 
						   0, dataArrayLen, (jbyte*)data);
			break;
		case T_CHAR_ARRAY:
			res = (*env)->NewCharArray(env, dataArrayLen);
			if(data!=NULL)
				(*env)->SetCharArrayRegion(env, (jcharArray)res, 
						   0, dataArrayLen, (jchar*)data);
			break;
		case T_SHORT_ARRAY:
			res = (*env)->NewShortArray(env, dataArrayLen);
			if(data!=NULL)
				(*env)->SetShortArrayRegion(env, (jshortArray)res, 
						   0, dataArrayLen, (jshort*)data);
			break;
		case T_INT_ARRAY:
			res = (*env)->NewIntArray(env, dataArrayLen);
			if(data!=NULL)
				(*env)->SetIntArrayRegion(env, (jintArray)res, 
						   0, dataArrayLen, (jint*)data);
			break;
		case T_LONG_ARRAY:
			res = (*env)->NewLongArray(env, dataArrayLen);
			if(data!=NULL)
				(*env)->SetLongArrayRegion(env, (jlongArray)res, 
						   0, dataArrayLen, (jlong*)data);
			break;
		case T_FLOAT_ARRAY:
			res = (*env)->NewFloatArray(env, dataArrayLen);
			if(data!=NULL)
				(*env)->SetFloatArrayRegion(env, (jfloatArray)res, 
						   0, dataArrayLen, (jfloat*)data);
			break;
		case T_DOUBLE_ARRAY:
			res = (*env)->NewDoubleArray(env, dataArrayLen);
			if(data!=NULL)
				(*env)->SetDoubleArrayRegion(env, (jdoubleArray)res, 
						   0, dataArrayLen, (jdouble*)data);
			break;
		default:
			jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
				                "%s(arg #%d): Type is not an array",
						errText, arg);
			return 0;
	}
	return res;
}

jarray LIBAPIENTRY jnitoolsNativePtrArray2JavaArray (JNIEnv *env, 
						 JavaBasicType jbt, 
                                                 void *data[/*pointerNumber*/], 
						 int pointerNumber, 
						 int dataArrayLen, 
						 const char * errText, int arg)

{
	unsigned char * buffer = NULL;
	jarray res = 0;
	int i;
	int setLenElems = dataArrayLen/pointerNumber;
	int setLenBytes = 0;


    	if(!isinit && init(env)) isinit=1;

	switch(jbt)
	{
		case T_BYTE_ARRAY:
			setLenBytes = setLenElems * sizeof(jbyte) ;
			break;
		case T_CHAR_ARRAY:
			setLenBytes = setLenElems * sizeof(jchar) ;
			break;
		case T_SHORT_ARRAY:
			setLenBytes = setLenElems * sizeof(jshort) ;
			break;
		case T_BOOLEAN_ARRAY:
			setLenBytes = setLenElems * sizeof(jboolean) ;
			break;
		case T_INT_ARRAY:
			setLenBytes = setLenElems * sizeof(jint) ;
			break;
		case T_LONG_ARRAY:
			setLenBytes = setLenElems * sizeof(jlong) ;
			break;
		case T_FLOAT_ARRAY:
			setLenBytes = setLenElems * sizeof(jfloat) ;
			break;
		case T_DOUBLE_ARRAY:
			setLenBytes = setLenElems * sizeof(jdouble) ;
			break;
		default:
			jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
				                "%s(arg #%d): Type is not an array",
						errText, arg);
			return 0;
	}
	buffer = calloc (pointerNumber, setLenBytes);
	if(buffer==NULL)
	{
			jnitoolsThrowByName(env, "java/lang/Exception",
				                "%s(arg #%d): Out of memory",
						errText, arg);
			return 0;
	}
	for(i=0; data!=NULL && i<pointerNumber; i++)
	{
	    if(data[i]!=NULL)
	    {
		memcpy(buffer+i*setLenBytes,
		       data[i], setLenBytes);
	    } else {
	        memset(buffer+i*setLenBytes, 0, setLenBytes);
	    }
	}

	res = jnitoolsNativeArray2JavaArray (env, jbt, 
                                             buffer, dataArrayLen, 
					     errText, arg);
	free(buffer);
	return res;
}

void LIBAPIENTRY jnitoolsReleaseJavaArray2NativeArray (JNIEnv *env, jarray arr, JavaBasicType jbt, 
                                          void *data, int dataArrayLen, 
					  const char * errText, int arg)
{
	int len = (*env)->GetArrayLength(env, arr);
	void * arrdata = 0;

    	if(!isinit && init(env)) isinit=1;

    	if(data==NULL) return;

	if(len!=dataArrayLen)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
					"%s(arg #%d): Array-Length differs of Java-Callback input(%d) vs output(%d)", errText, arg, dataArrayLen, len);
		return;
	}

	switch(jbt)
	{
		case T_BOOLEAN_ARRAY:
			arrdata = (*env)->GetBooleanArrayElements(env, (jbooleanArray)arr, 0);
			memcpy (data, arrdata, len*sizeof(jboolean));
			(*env)->ReleaseBooleanArrayElements(env,(jbooleanArray)arr,arrdata,JNI_ABORT);
			break;
		case T_BYTE_ARRAY:
			arrdata = (*env)->GetByteArrayElements(env, (jbyteArray)arr, 0);
			memcpy (data, arrdata, len*sizeof(jbyte));
			(*env)->ReleaseByteArrayElements(env,(jbyteArray)arr,arrdata,JNI_ABORT);
			break;
		case T_CHAR_ARRAY:
			arrdata = (*env)->GetCharArrayElements(env, (jcharArray)arr, 0);
			memcpy (data, arrdata, len*sizeof(jchar));
			(*env)->ReleaseCharArrayElements(env,(jcharArray)arr,arrdata,JNI_ABORT);
			break;
		case T_SHORT_ARRAY:
			arrdata = (*env)->GetShortArrayElements(env, (jshortArray)arr, 0);
			memcpy (data, arrdata, len*sizeof(jshort));
			(*env)->ReleaseShortArrayElements(env,(jshortArray)arr,arrdata,JNI_ABORT);
			break;
		case T_INT_ARRAY:
			arrdata = (*env)->GetIntArrayElements(env, (jintArray)arr, 0);
			memcpy (data, arrdata, len*sizeof(jint));
			(*env)->ReleaseIntArrayElements(env,(jintArray)arr,arrdata,JNI_ABORT);
			break;
		case T_LONG_ARRAY:
			arrdata = (*env)->GetLongArrayElements(env, (jlongArray)arr, 0);
			memcpy (data, arrdata, len*sizeof(jlong));
			(*env)->ReleaseLongArrayElements(env,(jlongArray)arr,arrdata,JNI_ABORT);
			break;
		case T_FLOAT_ARRAY:
			arrdata = (*env)->GetFloatArrayElements(env, (jfloatArray)arr, 0);
			memcpy (data, arrdata, len*sizeof(jfloat));
			(*env)->ReleaseFloatArrayElements(env,(jfloatArray)arr,arrdata,JNI_ABORT);
			break;
		case T_DOUBLE_ARRAY:
			arrdata = (*env)->GetDoubleArrayElements(env, (jdoubleArray)arr, 0);
			memcpy (data, arrdata, len*sizeof(jdouble));
			(*env)->ReleaseDoubleArrayElements(env,(jdoubleArray)arr,arrdata,JNI_ABORT);
			break;
		default:
			jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
				                "%s(arg #%d): Type is not an array",
						errText, arg);
	}
}

void LIBAPIENTRY jnitoolsReleaseJavaArray2NativeArrayPtr (JNIEnv *env, 
				                 jarray arr, 
						 JavaBasicType jbt, 
                                                 void *data[/*pointerNumber*/], 
						 int pointerNumber, 
						 int dataArrayLen, 
						 const char * errText,
						 int arg)
{
	int len = (*env)->GetArrayLength(env, arr);
	unsigned char * arrdata = 0;
	int i;
	int setLenElems = dataArrayLen/pointerNumber;
	int setLenBytes;

    	if(!isinit && init(env)) isinit=1;

    	if(data==NULL) return;

	if(len!=dataArrayLen)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
					"%s(arg #%d): Array-Length differs of Java-Callback input(%d) vs output(%d)", errText, arg, dataArrayLen, len);
		return;
	}

	switch(jbt)
	{
		case T_BOOLEAN_ARRAY:
			arrdata = (unsigned char *) (*env)->GetBooleanArrayElements(env, (jbooleanArray)arr, 0);
			setLenBytes = setLenElems * sizeof(jboolean);
			for(i=0; i<pointerNumber; i++)
				if(data[i]!=NULL)
					memcpy(data[i], arrdata+i*setLenBytes,
					       setLenBytes);
			(*env)->ReleaseBooleanArrayElements(env,(jbooleanArray)arr, (jboolean *)arrdata,JNI_ABORT);
			break;
		case T_BYTE_ARRAY:
			arrdata = (unsigned char *) (*env)->GetByteArrayElements(env, (jbyteArray)arr, 0);
			setLenBytes = setLenElems * sizeof(jbyte);
			for(i=0; i<pointerNumber; i++)
				if(data[i]!=NULL)
					memcpy(data[i], arrdata+i*setLenBytes,
					       setLenBytes);
			(*env)->ReleaseByteArrayElements(env,(jbyteArray)arr, (jbyte *)arrdata,JNI_ABORT);
			break;
		case T_CHAR_ARRAY:
			arrdata = (unsigned char *) (*env)->GetCharArrayElements(env, (jcharArray)arr, 0);
			setLenBytes = setLenElems * sizeof(jchar);
			for(i=0; i<pointerNumber; i++)
				if(data[i]!=NULL)
					memcpy(data[i], arrdata+i*setLenBytes,
					       setLenBytes);
			(*env)->ReleaseCharArrayElements(env,(jcharArray)arr, (jchar *)arrdata,JNI_ABORT);
			break;
		case T_SHORT_ARRAY:
			arrdata = (unsigned char *) (*env)->GetShortArrayElements(env, (jshortArray)arr, 0);
			setLenBytes = setLenElems * sizeof(jshort);
			for(i=0; i<pointerNumber; i++)
				if(data[i]!=NULL)
					memcpy(data[i], arrdata+i*setLenBytes,
					       setLenBytes);
			(*env)->ReleaseShortArrayElements(env,(jshortArray)arr, (jshort *)arrdata,JNI_ABORT);
			break;
		case T_INT_ARRAY:
			arrdata = (unsigned char *) (*env)->GetIntArrayElements(env, (jintArray)arr, 0);
			setLenBytes = setLenElems * sizeof(jint);
			for(i=0; i<pointerNumber; i++)
				if(data[i]!=NULL)
					memcpy(data[i], arrdata+i*setLenBytes,
					       setLenBytes);
			(*env)->ReleaseIntArrayElements(env,(jintArray)arr, (jint *)arrdata,JNI_ABORT);
			break;
		case T_LONG_ARRAY:
			arrdata = (unsigned char *) (*env)->GetLongArrayElements(env, (jlongArray)arr, 0);
			setLenBytes = setLenElems * sizeof(jlong);
			for(i=0; i<pointerNumber; i++)
				if(data[i]!=NULL)
					memcpy(data[i], arrdata+i*setLenBytes,
					       setLenBytes);
			(*env)->ReleaseLongArrayElements(env,(jlongArray)arr, (jlong *)arrdata,JNI_ABORT);
			break;
		case T_FLOAT_ARRAY:
			arrdata = (unsigned char *) (*env)->GetFloatArrayElements(env, (jfloatArray)arr, 0);
			setLenBytes = setLenElems * sizeof(jfloat);
			for(i=0; i<pointerNumber; i++)
				if(data[i]!=NULL)
					memcpy(data[i], arrdata+i*setLenBytes,
					       setLenBytes);
			(*env)->ReleaseFloatArrayElements(env,(jfloatArray)arr, (jfloat *)arrdata,JNI_ABORT);
			break;
		case T_DOUBLE_ARRAY:
			arrdata = (unsigned char *) (*env)->GetDoubleArrayElements(env, (jdoubleArray)arr, 0);
			setLenBytes = setLenElems * sizeof(jdouble);
			for(i=0; i<pointerNumber; i++)
				if(data[i]!=NULL)
					memcpy(data[i], arrdata+i*setLenBytes,
					       setLenBytes);
			(*env)->ReleaseDoubleArrayElements(env,(jdoubleArray)arr, (jdouble *)arrdata,JNI_ABORT);
			break;
		default:
			jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
				                "%s(arg #%d): Type is not an array", errText, arg);
	}
}


void * LIBAPIENTRY jnitoolsCreateNativeArray (JavaBasicType jbt, int dataArrayLen, const char * errText)
{
	void * arrdata = 0;

	(void)errText;

	switch(jbt)
	{
		case T_BOOLEAN_ARRAY:
			arrdata = calloc(dataArrayLen, sizeof(int));
			break;
		case T_BYTE_ARRAY:
			arrdata = calloc(dataArrayLen, sizeof(char));
			break;
		case T_CHAR_ARRAY:
			arrdata = calloc(dataArrayLen, sizeof(char));
			break;
		case T_SHORT_ARRAY:
			arrdata = calloc(dataArrayLen, sizeof(short));
			break;
		case T_INT_ARRAY:
			arrdata = calloc(dataArrayLen, sizeof(int));
			break;
		case T_LONG_ARRAY:
			arrdata = calloc(dataArrayLen, sizeof(long));
			break;
		case T_FLOAT_ARRAY:
			arrdata = calloc(dataArrayLen, sizeof(float));
			break;
		case T_DOUBLE_ARRAY:
			arrdata = calloc(dataArrayLen, sizeof(double));
			break;
		default:
			return 0;
	}
	return arrdata;
}

