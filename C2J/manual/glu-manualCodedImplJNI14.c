static const char _glu_n_a_string[] = "GLU-String not avaiable !";

JNIEXPORT jstring JNICALL
Java_gl4java_GLUFunc14JauJNI_gluErrorString ( JNIEnv *env, jobject obj,
	                                    jint errorCode ) 
{
    const char *tmpString=0;

    if ( disp__gluErrorString == NULL ) 
    	return (*env)->NewStringUTF(env, _glu_n_a_string);

    tmpString = disp__gluErrorString ( /* jint */ errorCode );
    if(tmpString==NULL)
    	tmpString=_glu_n_a_string;

    return (*env)->NewStringUTF(env, tmpString);
}

JNIEXPORT jstring JNICALL
Java_gl4java_GLUFunc14JauJNI_gluGetString ( JNIEnv *env, jobject obj,
	                                  jint name ) 
{
    const char *tmpString=0;

    if ( disp__gluGetString == NULL ) 
    	return (*env)->NewStringUTF(env, _glu_n_a_string);

    tmpString = disp__gluGetString ( /* jint */ name);
    if(tmpString==NULL)
    	tmpString=_glu_n_a_string;

    return (*env)->NewStringUTF(env, tmpString);   
}

static const char * _glu_lib_vendor_="Jausoft - Sven Goethel Software Development";
static const char * _glu_lib_version_="2.8.0.8";

JNIEXPORT jstring JNICALL
Java_gl4java_GLUFunc14JauJNI_getNativeVendor ( JNIEnv *env, jobject obj )
{
    return (*env)->NewStringUTF(env, _glu_lib_vendor_);   
}

JNIEXPORT jstring JNICALL
Java_gl4java_GLUFunc14JauJNI_getNativeVersion ( JNIEnv *env, jobject obj )
{
    return (*env)->NewStringUTF(env, _glu_lib_version_);   
}

static void _AddCallbackNode(JNIEnv *env,
	                          jlong qnt_obj, jint which,
			          jobject methodClassInstance, 
			          jstring methodName, 
				  jstring signature,
				  jint arrayLen1,
				  jint arrayLen2,
				  jint arrayLen3,
				  jint arrayLen4,
				  jint arrayLen5)
{
	char * strMethodName = jnitoolsGetJavaString(env, methodName);
	char * strSignature = jnitoolsGetJavaString(env, signature);
	jlong glx=0;

	glx = GetCurrentGLContext();

	AddCallbackNode(env, methodClassInstance, strMethodName, strSignature,
			arrayLen1, arrayLen2, arrayLen3,
			arrayLen4, arrayLen5,
			(void *)((PointerHolder)qnt_obj), which, glx);
	free(strMethodName);
	free(strSignature);
}
                  

JNIEXPORT void JNICALL
Java_gl4java_GLUFunc14JauJNI_gluQuadricCallback( JNIEnv *env, jobject obj,
	                          jlong qobj, jint which,
			          jobject methodClassInstance, 
			          jstring methodName, 
				  jstring signature)
{
	if ( disp__gluQuadricCallback == NULL )  return;

	switch(which)
	{
		case GLU_ERROR:
			disp__gluQuadricCallback((void *)((PointerHolder)qobj), 
			                   which, cbf_GLU_ERROR );
			break;
		default:
		    jnitoolsThrowByName(env, "java/lang/IllegalArgumentException", "Wrong Callback-Function type (\"which\") !");
		    return;
	}
	_AddCallbackNode(env, 
			 qobj, which, methodClassInstance, methodName, 
			  signature, 
			  0, 0, 0, 0, 0);
}


JNIEXPORT void JNICALL
Java_gl4java_GLUFunc14JauJNI_gluNurbsCallback( JNIEnv *env, jobject obj,
	                          jlong nobj, jint which,
			          jobject methodClassInstance, 
			          jstring methodName, 
				  jstring signature)
{
	if ( disp__gluNurbsCallback == NULL )  return;

	switch(which)
	{
		case GLU_ERROR:
			disp__gluNurbsCallback((void *)((PointerHolder)nobj), which, 
				         cbf_GLU_ERROR );
			break;
		default:
		    jnitoolsThrowByName(env, "java/lang/IllegalArgumentException", "Wrong Callback-Function type (\"which\") !");
		    return;
	}
	_AddCallbackNode(env,
			 nobj, which, methodClassInstance, methodName, 
			  signature, 
			  0, 0, 0, 0, 0);
}

JNIEXPORT void JNICALL
Java_gl4java_GLUFunc14JauJNI_gluTessCallback( JNIEnv *env, jobject obj,
	                          jlong tobj, jint which,
			          jobject methodClassInstance, 
			          jstring methodName, 
				  jstring signature,
				  jint arrayLen1,
				  jint arrayLen2,
				  jint arrayLen3,
				  jint arrayLen4,
				  jint arrayLen5)
{
	if ( disp__gluTessCallback == NULL )  return;

	switch(which)
	{
		case GLU_TESS_BEGIN:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_BEGIN );
			break;
		case GLU_TESS_BEGIN_DATA:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_BEGIN_DATA );
			break;
		case GLU_TESS_EDGE_FLAG:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_EDGE_FLAG );
			break;
		case GLU_TESS_EDGE_FLAG_DATA:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_EDGE_FLAG_DATA );
			break;
		case GLU_TESS_VERTEX:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_VERTEX );
			break;
		case GLU_TESS_VERTEX_DATA:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_VERTEX_DATA );
			break;
		case GLU_TESS_END:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_END );
			break;
		case GLU_TESS_END_DATA:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_END_DATA );
			break;
		case GLU_TESS_ERROR:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_ERROR );
			break;
		case GLU_TESS_ERROR_DATA:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_ERROR_DATA );
			break;
		case GLU_TESS_COMBINE:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_COMBINE );
			break;
		case GLU_TESS_COMBINE_DATA:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_COMBINE_DATA );
			break;
		default:
		    jnitoolsThrowByName(env, "java/lang/IllegalArgumentException", "Wrong Callback-Function type (\"which\") !");
		    return;
	}
	_AddCallbackNode(env,
			  tobj, which, methodClassInstance, methodName, 
			  signature, 
			  arrayLen1, arrayLen2, arrayLen3,
			  arrayLen4, arrayLen5);
}

JNIEXPORT void JNICALL
Java_gl4java_GLUFunc14JauJNI_gluDeleteQuadric( JNIEnv *env, jobject obj,
					     jlong qobj )
{
	if ( disp__gluDeleteQuadric == NULL )  return;

	disp__gluDeleteQuadric((void *)((PointerHolder)qobj));
	RemoveCallbackNodes((void *)((PointerHolder)qobj));
}

JNIEXPORT void JNICALL
Java_gl4java_GLUFunc14JauJNI_gluDeleteNurbsRenderer( JNIEnv *env, jobject obj,
						   jlong nobj )
{
	if ( disp__gluDeleteNurbsRenderer == NULL )  return;

	disp__gluDeleteNurbsRenderer((void *)((PointerHolder)nobj));
	RemoveCallbackNodes((void *)((PointerHolder)nobj));
}

JNIEXPORT void JNICALL
Java_gl4java_GLUFunc14JauJNI_gluDeleteTess( JNIEnv *env, jobject obj,
					  jlong tobj )
{
	if ( disp__gluDeleteTess == NULL )  return;

	disp__gluDeleteTess((GLUtesselator *)((PointerHolder)tobj));
	RemoveCallbackNodes((void *)((PointerHolder)tobj));
}

JNIEXPORT jlong JNICALL
Java_gl4java_GLUFunc14JauJNI_gluNewQuadric( JNIEnv *env, jobject obj)
{
	if ( disp__gluNewQuadric == NULL )  return 0;

	return (jlong)((PointerHolder)disp__gluNewQuadric());
}

JNIEXPORT jlong JNICALL
Java_gl4java_GLUFunc14JauJNI_gluNewNurbsRenderer( JNIEnv *env, jobject obj)
{
	if ( disp__gluNewNurbsRenderer == NULL )  return 0;

	return (jlong)((PointerHolder)disp__gluNewNurbsRenderer());
}

JNIEXPORT jlong JNICALL
Java_gl4java_GLUFunc14JauJNI_gluNewTess( JNIEnv *env, jobject obj)
{
	if ( disp__gluNewTess == NULL )  return 0;

	return (jlong)((PointerHolder)disp__gluNewTess());
}
