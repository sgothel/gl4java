
static const char * _glf_lib_vendor_="Roman Podobedov, Sven Goethel";
static const char * _glf_lib_version_="1.4.0.0";

JNIEXPORT jstring JNICALL
Java_gl4java_utils_glf_GLFFuncJNI_getNativeVendor ( JNIEnv *env, jobject obj )
{
    return (*env)->NewStringUTF(env, _glf_lib_vendor_);   
}

JNIEXPORT jstring JNICALL
Java_gl4java_utils_glf_GLFFuncJNI_getNativeVersion ( JNIEnv *env, jobject obj )
{
    return (*env)->NewStringUTF(env, _glf_lib_version_);   
}

JNIEXPORT jint JNICALL
Java_gl4java_utils_glf_GLFFuncJNI_glfLoadFontNative (
	JNIEnv *env, jobject obj, jlong filed)
{
	return (jint) glfLoadFont ( (FILE *) ((PointerHolder)filed) );
}

JNIEXPORT jint JNICALL
Java_gl4java_utils_glf_GLFFuncJNI_glfLoadBFontNative (
	JNIEnv *env, jobject obj, jlong filed)
{
	return (jint) glfLoadBFont ( (FILE *) ((PointerHolder)filed) );
}

