#include "jnitools.h"

JNIEXPORT jlong JNICALL
Java_gl4java_utils_Tool_tmpfileCreate ( 
	JNIEnv *env, jobject obj )
{
	return (jlong) ((PointerHolder)tmpfile());
}

JNIEXPORT jboolean JNICALL
Java_gl4java_utils_Tool_tmpfileClose ( 
	JNIEnv *env, jobject obj, jlong filed )
{
	return ( fclose( (FILE *) ((PointerHolder)filed) ) == 0 ) ? 
	       JNI_TRUE : JNI_FALSE;
}

JNIEXPORT jint JNICALL
Java_gl4java_utils_Tool_tmpfileWrite ( 
	JNIEnv *env, jobject obj, jlong filed, jbyteArray data, int bytes)
{
	jint len;
	jbyte * ptr = NULL;

	if(data==NULL || filed==0) return 0;

	len = (*env)->GetArrayLength(env, data);
	if( 0 >= bytes || bytes>len ) bytes=len;

	ptr = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, NULL);

	len = (jint) fwrite ( (void *) ptr, 1, bytes,
			      (FILE *) ((PointerHolder)filed) );

	/* NO copy back,  free the memory .. */
	(*env)->ReleasePrimitiveArrayCritical(env, data, ptr, JNI_ABORT);

	return len;
}

JNIEXPORT jint JNICALL
Java_gl4java_utils_Tool_tmpfileRead ( 
	JNIEnv *env, jobject obj, jlong filed, jbyteArray data, int bytes)
{
	jint len;
	jbyte * ptr = NULL;

	if(data==NULL || filed==0) return 0;

	len = (*env)->GetArrayLength(env, data);
	if( 0 >= bytes || bytes>len ) bytes=len;

	ptr = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, NULL);

	len = (jint) fread ( (void *) ptr, 1, bytes,
		             (FILE *) ((PointerHolder)filed) );

	/* copy back and free the memory .. */
	(*env)->ReleasePrimitiveArrayCritical(env, data, ptr, 0);

	return len;
}

JNIEXPORT void JNICALL
Java_gl4java_utils_Tool_tmpfileRewind ( 
	JNIEnv *env, jobject obj, jlong filed)
{
	(void) fseek ( (FILE *) ((PointerHolder)filed), 0L, SEEK_SET );
}

