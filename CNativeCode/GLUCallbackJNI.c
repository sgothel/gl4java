
#include "GLCallbackHelperJNI.h"
#include "GLUCallbackJNI.h"
#include "jnitools.h"

void LIBAPIENTRY cbf_GLU_TESS_BEGIN (GLenum type)
{
	JNIEnv * env = NULL;
	jobject obj = 0;
	jclass oclass=0;
	jmethodID id=0;
	CallbackEntry * cbe = NULL;

	cbe = FindCallbackEntryOfCurrentCbObj(GLU_TESS_BEGIN, GetCurrentGLContext());

	if(cbe==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback entry");
		return;
	}
	env = cbe->env;
	obj = cbe->jobj;

  	oclass = (jclass) (*env)->GetObjectClass(env, obj);
	if(oclass!=0)
	{
		id = (*env)->GetMethodID(env,oclass,cbe->methodName,cbe->signature) ;
	}
	if(id==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback method: %s %s",
			    cbe->methodName, cbe->signature);
		return;
	}

	(*env)->CallVoidMethod(env, obj, id, (jint)type);
}

void LIBAPIENTRY cbf_GLU_TESS_BEGIN_DATA (GLenum type, void *udata)
{
	JNIEnv * env = NULL;
	jobject obj = 0;
	jclass oclass=0;
	jmethodID id=0;
	JavaBasicType jbt=0;
	jarray arr=0;

	CallbackEntry * cbe = FindCallbackEntryOfCurrentCbObj(GLU_TESS_BEGIN_DATA, GetCurrentGLContext());

	if(cbe==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback entry");
		return;
	}
	env = cbe->env;
	obj = cbe->jobj;
  	oclass = (jclass) (*env)->GetObjectClass(env, obj);
	if(oclass!=0)
		id = (*env)->GetMethodID(env,oclass,cbe->methodName,cbe->signature) ;
	if(id==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback method: %s %s",
			    cbe->methodName, cbe->signature);
		return;
	}

	if(cbe->argListNumber<2)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "too few arguments in registered callback function");
		return;
	}
	jbt = jnitoolsGetJavaBasicType(env,cbe->signature, 1, cbe->methodName);
	arr = jnitoolsNativeArray2JavaArray (env, jbt, udata,  cbe->arrayLen1, cbe->methodName, 2);

	if(arr!=0)
	{
		(*env)->CallVoidMethod(env, obj, id, (jint)type, arr);
		jnitoolsReleaseJavaArray2NativeArray (env, arr, jbt, 
						     udata,  cbe->arrayLen1, cbe->methodName, 2);
	}
} 

void LIBAPIENTRY cbf_GLU_TESS_EDGE_FLAG (GLboolean flag)
{
	JNIEnv * env = NULL;
	jobject obj = 0;
	jclass oclass=0;
	jmethodID id=0;

	CallbackEntry * cbe = FindCallbackEntryOfCurrentCbObj(GLU_TESS_EDGE_FLAG, GetCurrentGLContext());

	if(cbe==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback entry");
		return;
	}
	env = cbe->env;
	obj = cbe->jobj;
  	oclass = (jclass) (*env)->GetObjectClass(env, obj);
	if(oclass!=0)
		id = (*env)->GetMethodID(env,oclass,cbe->methodName,cbe->signature) ;
	if(id==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback method: %s %s",
			    cbe->methodName, cbe->signature);
		return;
	}

	(*env)->CallVoidMethod(env, obj, id, (jboolean)flag);
} 

void LIBAPIENTRY cbf_GLU_TESS_EDGE_FLAG_DATA (GLboolean flag, void *udata)
{
	JNIEnv * env = NULL;
	jobject obj = 0;
	jclass oclass=0;
	jmethodID id=0;
	JavaBasicType jbt=0;
	jarray arr=0;

	CallbackEntry * cbe = FindCallbackEntryOfCurrentCbObj(GLU_TESS_EDGE_FLAG_DATA, GetCurrentGLContext());

	if(cbe==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback entry");
		return;
	}
	env = cbe->env;
	obj = cbe->jobj;
  	oclass = (jclass) (*env)->GetObjectClass(env, obj);
	if(oclass!=0)
		id = (*env)->GetMethodID(env,oclass,cbe->methodName,cbe->signature) ;
	if(id==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback method: %s %s",
			    cbe->methodName, cbe->signature);
		return;
	}

	if(cbe->argListNumber<2)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "too few arguments in registered callback function");
		return;
	}
	jbt = jnitoolsGetJavaBasicType(env,cbe->signature, 1, cbe->methodName);
	arr = jnitoolsNativeArray2JavaArray (env, jbt, udata,  cbe->arrayLen1, cbe->methodName, 2);

	if(arr!=0)
	{
		(*env)->CallVoidMethod(env, obj, id, (jboolean)flag, arr);
		jnitoolsReleaseJavaArray2NativeArray (env, arr, jbt, 
						     udata,  cbe->arrayLen1, cbe->methodName, 2);
	}
} 

void LIBAPIENTRY cbf_GLU_TESS_VERTEX (void * vdata)
{
	JNIEnv * env = NULL;
	jobject obj = 0;
	jclass oclass=0;
	jmethodID id=0;
	JavaBasicType jbt=0;
	jarray arr=0;

	CallbackEntry * cbe = FindCallbackEntryOfCurrentCbObj(GLU_TESS_VERTEX, GetCurrentGLContext());

	if(cbe==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback entry");
		return;
	}
	env = cbe->env;
	obj = cbe->jobj;
  	oclass = (jclass) (*env)->GetObjectClass(env, obj);
	if(oclass!=0)
		id = (*env)->GetMethodID(env,oclass,cbe->methodName,cbe->signature) ;
	if(id==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback method: %s %s",
			    cbe->methodName, cbe->signature);
		return;
	}

	if(cbe->argListNumber<1)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "too few arguments in registered callback function");
		return;
	}
	jbt = jnitoolsGetJavaBasicType(env,cbe->signature, 0, cbe->methodName);
	arr = jnitoolsNativeArray2JavaArray (env, jbt, vdata,  cbe->arrayLen1, cbe->methodName, 1);

	if(arr!=0)
	{
		(*env)->CallVoidMethod(env, obj, id, arr);
		jnitoolsReleaseJavaArray2NativeArray (env, arr, jbt, 
						     vdata,  cbe->arrayLen1, cbe->methodName, 1);
	}
} 

void LIBAPIENTRY cbf_GLU_TESS_VERTEX_DATA (void * vdata, void * udata)
{
	JNIEnv * env = NULL;
	jobject obj = 0;
	jclass oclass=0;
	jmethodID id=0;
	JavaBasicType jbt0=0;
	jarray arr0=0;
	JavaBasicType jbt1=0;
	jarray arr1=0;

	CallbackEntry * cbe = FindCallbackEntryOfCurrentCbObj(GLU_TESS_VERTEX_DATA, GetCurrentGLContext());

	if(cbe==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback entry");
		return;
	}
	env = cbe->env;
	obj = cbe->jobj;
  	oclass = (jclass) (*env)->GetObjectClass(env, obj);
	if(oclass!=0)
		id = (*env)->GetMethodID(env,oclass,cbe->methodName,cbe->signature) ;
	if(id==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback method: %s %s",
			    cbe->methodName, cbe->signature);
		return;
	}

	if(cbe->argListNumber<2)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "too few arguments in registered callback function");
		return;
	}
	jbt0 = jnitoolsGetJavaBasicType(env,cbe->signature, 0, cbe->methodName);
	arr0 = jnitoolsNativeArray2JavaArray (env, jbt0, vdata,  cbe->arrayLen1, cbe->methodName, 1);
	jbt1 = jnitoolsGetJavaBasicType(env,cbe->signature, 1, cbe->methodName);
	arr1 = jnitoolsNativeArray2JavaArray (env, jbt1, udata,  cbe->arrayLen2, cbe->methodName, 2);

	if(arr0!=0 && arr1!=0)
	{
		(*env)->CallVoidMethod(env, obj, id, arr0, arr1);

		jnitoolsReleaseJavaArray2NativeArray (env, arr0, jbt0, 
						     udata,  cbe->arrayLen1, cbe->methodName, 1);
		jnitoolsReleaseJavaArray2NativeArray (env, arr1, jbt1, 
						     udata,  cbe->arrayLen2, cbe->methodName, 2);
	}
} 

void LIBAPIENTRY cbf_GLU_TESS_END (void)
{
	JNIEnv * env = NULL;
	jobject obj = 0;
	jclass oclass=0;
	jmethodID id=0;

	CallbackEntry * cbe = FindCallbackEntryOfCurrentCbObj(GLU_TESS_END, GetCurrentGLContext());

	if(cbe==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback entry");
		return;
	}
	env = cbe->env;
	obj = cbe->jobj;
  	oclass = (jclass) (*env)->GetObjectClass(env, obj);
	if(oclass!=0)
		id = (*env)->GetMethodID(env,oclass,cbe->methodName,cbe->signature) ;
	if(id==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback method: %s %s",
			    cbe->methodName, cbe->signature);
		return;
	}

	(*env)->CallVoidMethod(env, obj, id);
} 

void LIBAPIENTRY cbf_GLU_TESS_END_DATA (void * udata)
{
	JNIEnv * env = NULL;
	jobject obj = 0;
	jclass oclass=0;
	jmethodID id=0;
	JavaBasicType jbt=0;
	jarray arr=0;

	CallbackEntry * cbe = FindCallbackEntryOfCurrentCbObj(GLU_TESS_END_DATA, GetCurrentGLContext());

	if(cbe==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback entry");
		return;
	}
	env = cbe->env;
	obj = cbe->jobj;
  	oclass = (jclass) (*env)->GetObjectClass(env, obj);
	if(oclass!=0)
		id = (*env)->GetMethodID(env,oclass,cbe->methodName,cbe->signature) ;
	if(id==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback method: %s %s",
			    cbe->methodName, cbe->signature);
		return;
	}

	if(cbe->argListNumber<1)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "too few arguments in registered callback function");
		return;
	}
	jbt = jnitoolsGetJavaBasicType(env,cbe->signature, 0, cbe->methodName);
	arr = jnitoolsNativeArray2JavaArray (env, jbt, udata,  cbe->arrayLen1, cbe->methodName, 1);

	if(arr!=0)
	{
		(*env)->CallVoidMethod(env, obj, id, arr);
		jnitoolsReleaseJavaArray2NativeArray (env, arr, jbt, 
						     udata,  cbe->arrayLen1, cbe->methodName, 1);
	}
} 

void LIBAPIENTRY cbf_GLU_TESS_ERROR (GLenum errno)
{
	JNIEnv * env = NULL;
	jobject obj = 0;
	jclass oclass=0;
	jmethodID id=0;

	CallbackEntry * cbe = FindCallbackEntryOfCurrentCbObj(GLU_TESS_ERROR, GetCurrentGLContext());

	if(cbe==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback entry");
		return;
	}
	env = cbe->env;
	obj = cbe->jobj;
  	oclass = (jclass) (*env)->GetObjectClass(env, obj);
	if(oclass!=0)
		id = (*env)->GetMethodID(env,oclass,cbe->methodName,cbe->signature) ;
	if(id==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback method: %s %s",
			    cbe->methodName, cbe->signature);
		return;
	}

	(*env)->CallVoidMethod(env, obj, id, (jint)errno);
} 

void LIBAPIENTRY cbf_GLU_TESS_ERROR_DATA (GLenum errno, void * udata)
{
	JNIEnv * env = NULL;
	jobject obj = 0;
	jclass oclass=0;
	jmethodID id=0;
	JavaBasicType jbt=0;
	jarray arr=0;

	CallbackEntry * cbe = FindCallbackEntryOfCurrentCbObj(GLU_TESS_ERROR_DATA, GetCurrentGLContext());

	if(cbe==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback entry");
		return;
	}
	env = cbe->env;
	obj = cbe->jobj;
  	oclass = (jclass) (*env)->GetObjectClass(env, obj);
	if(oclass!=0)
		id = (*env)->GetMethodID(env,oclass,cbe->methodName,cbe->signature) ;
	if(id==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback method: %s %s",
			    cbe->methodName, cbe->signature);
		return;
	}

	if(cbe->argListNumber<2)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "too few arguments in registered callback function");
		return;
	}
	jbt = jnitoolsGetJavaBasicType(env,cbe->signature, 1, cbe->methodName);
	arr = jnitoolsNativeArray2JavaArray (env, jbt, udata,  cbe->arrayLen1, cbe->methodName, 2);

	if(arr!=0)
	{
		(*env)->CallVoidMethod(env, obj, id, (jint)errno, arr);
		jnitoolsReleaseJavaArray2NativeArray (env, arr, jbt, 
						     udata,  cbe->arrayLen1, cbe->methodName, 2);
	}
} 

void LIBAPIENTRY cbf_GLU_TESS_COMBINE (GLdouble coords[3], void *vdata[4],
				   GLfloat weight[4], void **outdata)
{
	JNIEnv * env = NULL;
	jobject obj = 0;
	jclass oclass=0;
	jmethodID id=0;
	JavaBasicType jbt0=0;
	jarray arr0=0;
	JavaBasicType jbt1=0;
	jarray arr1=0;
	JavaBasicType jbt2=0;
	jarray arr2=0;
	JavaBasicType jbt3=0;
	jarray arr3=0;
	void * combdata = NULL;
	CallbackEntry * cbe = NULL;

	cbe = FindCallbackEntryOfCurrentCbObj(GLU_TESS_COMBINE, GetCurrentGLContext());

	if(cbe==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback entry");
		return;
	}
	env = cbe->env;
	obj = cbe->jobj;
  	oclass = (jclass) (*env)->GetObjectClass(env, obj);
	if(oclass!=0)
		id = (*env)->GetMethodID(env,oclass,cbe->methodName,cbe->signature) ;
	if(id==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback method: %s %s",
			    cbe->methodName, cbe->signature);
		return;
	}

	if(cbe->argListNumber<4)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "too few arguments in registered callback function");
		return;
	}
	if(cbe->arrayLen1>3)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "First Array of GLU_TESS_COMBINE cannot exceed 3 elements !");
		return;
	}
	if(cbe->arrayLen2%4!=0)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "Secound Array of GLU_TESS_COMBINE must be a multiple of 4 !");
		return;
	}
	if(cbe->arrayLen3>4)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "First Array of GLU_TESS_COMBINE cannot exceed 4 elements !");
		return;
	}
	jbt0 = jnitoolsGetJavaBasicType(env,cbe->signature, 0, cbe->methodName);
	arr0 = jnitoolsNativeArray2JavaArray (env, jbt0, coords, cbe->arrayLen1, cbe->methodName, 1);
	jbt1 = jnitoolsGetJavaBasicType(env,cbe->signature, 1, cbe->methodName);
	arr1 = jnitoolsNativePtrArray2JavaArray (env, jbt1, vdata, 4, cbe->arrayLen2, cbe->methodName, 2);
	jbt2 = jnitoolsGetJavaBasicType(env,cbe->signature, 2, cbe->methodName);
	arr2 = jnitoolsNativeArray2JavaArray (env, jbt2, weight, cbe->arrayLen3, cbe->methodName, 3);

	jbt3 = jnitoolsGetJavaBasicType(env,cbe->signature, 3, cbe->methodName);
	combdata = jnitoolsCreateNativeArray (jbt3, cbe->arrayLen4, cbe->methodName);
	arr3 = jnitoolsNativeArray2JavaArray (env, jbt3, combdata, cbe->arrayLen4, cbe->methodName, 4);

	if(arr0!=0 && arr1!=0 && arr2!=0 && arr3!=0)
	{
		(*env)->CallVoidMethod(env, obj, id, arr0, arr1, arr2, arr3);

		jnitoolsReleaseJavaArray2NativeArray (env, arr0, jbt0, coords, 
							cbe->arrayLen1, cbe->methodName, 1);
		jnitoolsReleaseJavaArray2NativeArrayPtr(env, arr1, jbt1, vdata, 
							4, cbe->arrayLen2, cbe->methodName, 2); 
		jnitoolsReleaseJavaArray2NativeArray (env, arr2, jbt2, weight, 
							cbe->arrayLen3, cbe->methodName, 3);
		jnitoolsReleaseJavaArray2NativeArray (env, arr3, jbt3, combdata,
							cbe->arrayLen4, cbe->methodName, 4);
		*outdata=combdata;
	}
}

void LIBAPIENTRY cbf_GLU_TESS_COMBINE_DATA (GLdouble coords[3], void *vdata[4],
					GLfloat weight[4], void **outdata,
					void *udata)
{
	JNIEnv * env = NULL;
	jobject obj = 0;
	jclass oclass=0;
	jmethodID id=0;
	JavaBasicType jbt0=0;
	jarray arr0=0;
	JavaBasicType jbt1=0;
	jarray arr1=0;
	JavaBasicType jbt2=0;
	jarray arr2=0;
	JavaBasicType jbt3=0;
	jarray arr3=0;
	JavaBasicType jbt4=0;
	jarray arr4=0;
	void * combdata = NULL;

	CallbackEntry * cbe = FindCallbackEntryOfCurrentCbObj(GLU_TESS_COMBINE_DATA, GetCurrentGLContext());

	if(cbe==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback entry");
		return;
	}
	env = cbe->env;
	obj = cbe->jobj;
  	oclass = (jclass) (*env)->GetObjectClass(env, obj);
	if(oclass!=0)
		id = (*env)->GetMethodID(env,oclass,cbe->methodName,cbe->signature) ;
	if(id==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback method: %s %s",
			    cbe->methodName, cbe->signature);
		return;
	}

	if(cbe->argListNumber<5)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "too few arguments in registered callback function");
		return;
	}
	if(cbe->arrayLen1>3)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "First Array of GLU_TESS_COMBINE_DATA cannot exceed 3 elements !");
		return;
	}
	if(cbe->arrayLen2%4!=0)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "Secound Array of GLU_TESS_COMBINE_DATA must be a multiple of 4 !");
		return;
	}
	if(cbe->arrayLen3>4)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "First Array of GLU_TESS_COMBINE_DATA cannot exceed 4 elements !");
		return;
	}
	jbt0 = jnitoolsGetJavaBasicType(env,cbe->signature, 0, cbe->methodName);
	arr0 = jnitoolsNativeArray2JavaArray (env, jbt0, coords, cbe->arrayLen1, cbe->methodName, 1);
	jbt1 = jnitoolsGetJavaBasicType(env,cbe->signature, 1, cbe->methodName);
	arr1 = jnitoolsNativePtrArray2JavaArray (env, jbt1, vdata, 4, cbe->arrayLen2, cbe->methodName, 2);
	jbt2 = jnitoolsGetJavaBasicType(env,cbe->signature, 2, cbe->methodName);
	arr2 = jnitoolsNativeArray2JavaArray (env, jbt2, weight, cbe->arrayLen3, cbe->methodName, 3);

	jbt3 = jnitoolsGetJavaBasicType(env,cbe->signature, 3, cbe->methodName);
	combdata = jnitoolsCreateNativeArray (jbt3, cbe->arrayLen2, cbe->methodName);
	arr3 = jnitoolsNativeArray2JavaArray (env, jbt3, combdata, cbe->arrayLen4, cbe->methodName, 4);
	jbt4 = jnitoolsGetJavaBasicType(env,cbe->signature, 4, cbe->methodName);
	arr4 = jnitoolsNativeArray2JavaArray (env, jbt4, udata, cbe->arrayLen5, cbe->methodName, 5);

	if(arr0!=0 && arr1!=0 && arr2!=0 && arr3!=0 && arr4!=0)
	{
		(*env)->CallVoidMethod(env, obj, id, arr0, arr1, arr2, arr3);
		jnitoolsReleaseJavaArray2NativeArray (env, arr0, jbt0, coords, 
							cbe->arrayLen1, cbe->methodName, 1);
		jnitoolsReleaseJavaArray2NativeArrayPtr(env, arr1, jbt1, vdata, 
							4, cbe->arrayLen2, cbe->methodName, 2); 
		jnitoolsReleaseJavaArray2NativeArray (env, arr2, jbt2, weight, 
							cbe->arrayLen3, cbe->methodName, 3);
		jnitoolsReleaseJavaArray2NativeArray (env, arr3, jbt3, combdata,
							cbe->arrayLen4, cbe->methodName, 4);
		*outdata=combdata;
		jnitoolsReleaseJavaArray2NativeArray (env, arr4, jbt4, udata,  
							cbe->arrayLen5, cbe->methodName, 5);
	}
}

void LIBAPIENTRY cbf_GLU_ERROR (GLenum errno)
{
	JNIEnv * env = NULL;
	jobject obj = 0;
	jclass oclass=0;
	jmethodID id=0;

	CallbackEntry * cbe = FindCallbackEntry(GLU_ERROR, GetCurrentGLContext());

	if(cbe==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback entry");
		return;
	}
	env = cbe->env;
	obj = cbe->jobj;
  	oclass = (jclass) (*env)->GetObjectClass(env, obj);
	if(oclass!=0)
		id = (*env)->GetMethodID(env,oclass,cbe->methodName,cbe->signature) ;
	if(id==NULL)
	{
		jnitoolsThrowByName(env, "java/lang/IllegalArgumentException",
			    "could not find the java callback method: %s %s",
			    cbe->methodName, cbe->signature);
		return;
	}

	(*env)->CallVoidMethod(env, obj, id, (jint)errno);
} 


