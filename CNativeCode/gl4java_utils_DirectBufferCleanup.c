#include "gl4java_utils_DirectBufferCleanup.h"

/*
 * Class:     hiperf_DirectBufferCleanup
 * Method:    getDirectBufferAddress
 * Signature: (Ljava/nio/Buffer;)J
 */
JNIEXPORT jlong JNICALL Java_gl4java_utils_DirectBufferCleanup_getDirectBufferAddress
  (JNIEnv *env, jclass unused, jobject buf)
{
  return (jlong) (*env)->GetDirectBufferAddress(env, buf);
}
