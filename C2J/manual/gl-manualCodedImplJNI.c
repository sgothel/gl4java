/** THIS IS A MANUAL CODED PART
    gl-manualCodedImplJNI.java
*/

static const char _gl_n_a_string[] = "GL-String not avaiable !";

JNIEXPORT jstring JNICALL
Java_gl4java_GLFuncJauJNI_glGetString ( JNIEnv *env, jobject obj,
	                                  jint name ) 
{
    const char * tmpString=0;

    if ( disp__glGetString == NULL ) 
    	return (*env)->NewStringUTF(env, _gl_n_a_string);

    tmpString = disp__glGetString ( /* jint */ name);
    if(tmpString==NULL)
    	tmpString=_gl_n_a_string;
 
    return (*env)->NewStringUTF(env, tmpString);
}

static const char * _gl_lib_vendor_="Jausoft - Sven Goethel Software Development";
static const char * _gl_lib_version_="2.8.0.8";

JNIEXPORT jstring JNICALL
Java_gl4java_GLFuncJauJNI_getNativeVendor ( JNIEnv *env, jobject obj )
{
    return (*env)->NewStringUTF(env, _gl_lib_vendor_);   
}

JNIEXPORT jstring JNICALL
Java_gl4java_GLFuncJauJNI_getNativeVersion ( JNIEnv *env, jobject obj )
{
    return (*env)->NewStringUTF(env, _gl_lib_version_);   
}

