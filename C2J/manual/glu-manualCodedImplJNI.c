static const char _glu_n_a_string[] = "GLU-String not avaiable !";

JNIEXPORT jstring JNICALL
Java_gl4java_GLUFuncJauJNI_gluErrorString ( JNIEnv *env, jobject obj,
	                                    jint errorCode ) 
{
    const char *tmpString=0;

    tmpString = gluErrorString ( /* jint */ errorCode );
    if(tmpString==NULL)
    	tmpString=_glu_n_a_string;

    return (*env)->NewStringUTF(env, tmpString);
}

JNIEXPORT jstring JNICALL
Java_gl4java_GLUFuncJauJNI_gluGetString ( JNIEnv *env, jobject obj,
	                                  jint name ) 
{
    const char *tmpString=0;

    tmpString = gluGetString ( /* jint */ name);
    if(tmpString==NULL)
    	tmpString=_glu_n_a_string;

    return (*env)->NewStringUTF(env, tmpString);   
}

static const char * _glu_lib_vendor_="Jausoft - Sven Goethel Software Development";
static const char * _glu_lib_version_="2.4.1.0";

JNIEXPORT jstring JNICALL
Java_gl4java_GLUFuncJauJNI_getNativeVendor ( JNIEnv *env, jobject obj )
{
    return (*env)->NewStringUTF(env, _glu_lib_vendor_);   
}

JNIEXPORT jstring JNICALL
Java_gl4java_GLUFuncJauJNI_getNativeVersion ( JNIEnv *env, jobject obj )
{
    return (*env)->NewStringUTF(env, _glu_lib_version_);   
}

static void _AddCallbackNode(JNIEnv *env,
	                          jint qnt_obj, jint which,
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
			(void *)qnt_obj, which, glx);
	free(strMethodName);
	free(strSignature);
}
                  

JNIEXPORT void JNICALL
Java_gl4java_GLUFuncJauJNI_gluQuadricCallback( JNIEnv *env, jobject obj,
	                          jint qobj, jint which,
			          jobject methodClassInstance, 
			          jstring methodName, 
				  jstring signature)
{
	switch(which)
	{
		case GLU_ERROR:
			gluQuadricCallback((void *)qobj, which, 
				           cbf_GLU_ERROR );
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
Java_gl4java_GLUFuncJauJNI_gluNurbsCallback( JNIEnv *env, jobject obj,
	                          jint nobj, jint which,
			          jobject methodClassInstance, 
			          jstring methodName, 
				  jstring signature)
{
	switch(which)
	{
		case GLU_ERROR:
			gluNurbsCallback((void *)nobj, which, 
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
Java_gl4java_GLUFuncJauJNI_gluTessCallback( JNIEnv *env, jobject obj,
	                          jint tobj, jint which,
			          jobject methodClassInstance, 
			          jstring methodName, 
				  jstring signature,
				  jint arrayLen1,
				  jint arrayLen2,
				  jint arrayLen3,
				  jint arrayLen4,
				  jint arrayLen5)
{
	switch(which)
	{
		case GLU_TESS_BEGIN:
			gluTessCallback((GLUtesselator *)tobj, which, 
				        cbf_GLU_TESS_BEGIN );
			break;
		case GLU_TESS_BEGIN_DATA:
			gluTessCallback((GLUtesselator *)tobj, which, 
				        cbf_GLU_TESS_BEGIN_DATA );
			break;
		case GLU_TESS_EDGE_FLAG:
			gluTessCallback((GLUtesselator *)tobj, which, 
				        cbf_GLU_TESS_EDGE_FLAG );
			break;
		case GLU_TESS_EDGE_FLAG_DATA:
			gluTessCallback((GLUtesselator *)tobj, which, 
				        cbf_GLU_TESS_EDGE_FLAG_DATA );
			break;
		case GLU_TESS_VERTEX:
			gluTessCallback((GLUtesselator *)tobj, which, 
				        cbf_GLU_TESS_VERTEX );
			break;
		case GLU_TESS_VERTEX_DATA:
			gluTessCallback((GLUtesselator *)tobj, which, 
				        cbf_GLU_TESS_VERTEX_DATA );
			break;
		case GLU_TESS_END:
			gluTessCallback((GLUtesselator *)tobj, which, 
				        cbf_GLU_TESS_END );
			break;
		case GLU_TESS_END_DATA:
			gluTessCallback((GLUtesselator *)tobj, which, 
				        cbf_GLU_TESS_END_DATA );
			break;
		case GLU_TESS_ERROR:
			gluTessCallback((GLUtesselator *)tobj, which, 
				        cbf_GLU_TESS_ERROR );
			break;
		case GLU_TESS_ERROR_DATA:
			gluTessCallback((GLUtesselator *)tobj, which, 
				        cbf_GLU_TESS_ERROR_DATA );
			break;
		case GLU_TESS_COMBINE:
			gluTessCallback((GLUtesselator *)tobj, which, 
				        cbf_GLU_TESS_COMBINE );
			break;
		case GLU_TESS_COMBINE_DATA:
			gluTessCallback((GLUtesselator *)tobj, which, 
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
Java_gl4java_GLUFuncJauJNI_gluDeleteQuadric( JNIEnv *env, jobject obj,
					     jint qobj )
{
	gluDeleteQuadric((void *)qobj);
	RemoveCallbackNodes((void *)qobj);
}

JNIEXPORT void JNICALL
Java_gl4java_GLUFuncJauJNI_gluDeleteNurbsRenderer( JNIEnv *env, jobject obj,
						   jint nobj )
{
	gluDeleteNurbsRenderer((void *)nobj);
	RemoveCallbackNodes((void *)nobj);
}

JNIEXPORT void JNICALL
Java_gl4java_GLUFuncJauJNI_gluDeleteTess( JNIEnv *env, jobject obj,
					  jint tobj )
{
	gluDeleteTess((GLUtesselator *)tobj);
	RemoveCallbackNodes((void *)tobj);
}

