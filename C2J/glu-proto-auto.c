/**
 * C2J Parser Version 3.0
 * Jausoft - Sven Goethel Software Development
 * Reading from file: glu-proto-auto.orig.h . . .
 * Destination-Class: gl4java_GLUFuncJauJNI ! 
 */

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginCurve ( GLUnurbs * nurb ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBeginCurve (
		JNIEnv *env, jobject obj,
		jlong nurb)
	{

		if ( disp__gluBeginCurve == NULL ) return;

		disp__gluBeginCurve (
			(GLUnurbs *) (PointerHolder) nurb
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginPolygon ( GLUtesselator * tess ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBeginPolygon (
		JNIEnv *env, jobject obj,
		jlong tess)
	{

		if ( disp__gluBeginPolygon == NULL ) return;

		disp__gluBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginSurface ( GLUnurbs * nurb ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBeginSurface (
		JNIEnv *env, jobject obj,
		jlong nurb)
	{

		if ( disp__gluBeginSurface == NULL ) return;

		disp__gluBeginSurface (
			(GLUnurbs *) (PointerHolder) nurb
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginTrim ( GLUnurbs * nurb ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBeginTrim (
		JNIEnv *env, jobject obj,
		jlong nurb)
	{

		if ( disp__gluBeginTrim == NULL ) return;

		disp__gluBeginTrim (
			(GLUnurbs *) (PointerHolder) nurb
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild1DMipmapLevels ( GLenum target , GLint internalFormat , GLsizei width , GLenum format , GLenum type , GLint level , GLint base , GLint max , const void * data ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild1DMipmapLevels__IIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jbyteArray data)
	{
		jint ret;

		jbyte *ptr8 = NULL;

		if ( disp__gluBuild1DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr8 = (*env)->GetByteArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild1DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  data, ptr8, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild1DMipmapLevels__IIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jshortArray data)
	{
		jint ret;

		jshort *ptr8 = NULL;

		if ( disp__gluBuild1DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr8 = (*env)->GetShortArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild1DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  data, ptr8, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild1DMipmapLevels__IIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jintArray data)
	{
		jint ret;

		jint *ptr8 = NULL;

		if ( disp__gluBuild1DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr8 = (*env)->GetIntArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild1DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  data, ptr8, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild1DMipmapLevels__IIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jfloatArray data)
	{
		jint ret;

		jfloat *ptr8 = NULL;

		if ( disp__gluBuild1DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr8 = (*env)->GetFloatArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild1DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  data, ptr8, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild1DMipmapLevels__IIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jdoubleArray data)
	{
		jint ret;

		jdouble *ptr8 = NULL;

		if ( disp__gluBuild1DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr8 = (*env)->GetDoubleArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild1DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  data, ptr8, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild1DMipmapLevels__IIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jbooleanArray data)
	{
		jint ret;

		jboolean *ptr8 = NULL;

		if ( disp__gluBuild1DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr8 = (*env)->GetBooleanArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild1DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  data, ptr8, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild1DMipmapLevels__IIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jlongArray data)
	{
		jint ret;

		jlong *ptr8 = NULL;

		if ( disp__gluBuild1DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr8 = (*env)->GetLongArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild1DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  data, ptr8, JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild1DMipmaps ( GLenum target , GLint internalFormat , GLsizei width , GLenum format , GLenum type , const void * data ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild1DMipmaps__IIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint format,
		jint type,
		jbyteArray data)
	{
		jint ret;

		jbyte *ptr5 = NULL;

		if ( disp__gluBuild1DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetByteArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild1DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  data, ptr5, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild1DMipmaps__IIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint format,
		jint type,
		jshortArray data)
	{
		jint ret;

		jshort *ptr5 = NULL;

		if ( disp__gluBuild1DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetShortArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild1DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  data, ptr5, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild1DMipmaps__IIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint format,
		jint type,
		jintArray data)
	{
		jint ret;

		jint *ptr5 = NULL;

		if ( disp__gluBuild1DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetIntArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild1DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  data, ptr5, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild1DMipmaps__IIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint format,
		jint type,
		jfloatArray data)
	{
		jint ret;

		jfloat *ptr5 = NULL;

		if ( disp__gluBuild1DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetFloatArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild1DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  data, ptr5, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild1DMipmaps__IIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint format,
		jint type,
		jdoubleArray data)
	{
		jint ret;

		jdouble *ptr5 = NULL;

		if ( disp__gluBuild1DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild1DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  data, ptr5, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild1DMipmaps__IIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint format,
		jint type,
		jbooleanArray data)
	{
		jint ret;

		jboolean *ptr5 = NULL;

		if ( disp__gluBuild1DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetBooleanArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild1DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  data, ptr5, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild1DMipmaps__IIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint format,
		jint type,
		jlongArray data)
	{
		jint ret;

		jlong *ptr5 = NULL;

		if ( disp__gluBuild1DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetLongArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild1DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  data, ptr5, JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild2DMipmapLevels ( GLenum target , GLint internalFormat , GLsizei width , GLsizei height , GLenum format , GLenum type , GLint level , GLint base , GLint max , const void * data ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild2DMipmapLevels__IIIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jbyteArray data)
	{
		jint ret;

		jbyte *ptr9 = NULL;

		if ( disp__gluBuild2DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr9 = (*env)->GetByteArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild2DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr9
		);

		if(data!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  data, ptr9, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild2DMipmapLevels__IIIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jshortArray data)
	{
		jint ret;

		jshort *ptr9 = NULL;

		if ( disp__gluBuild2DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr9 = (*env)->GetShortArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild2DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr9
		);

		if(data!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  data, ptr9, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild2DMipmapLevels__IIIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jintArray data)
	{
		jint ret;

		jint *ptr9 = NULL;

		if ( disp__gluBuild2DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr9 = (*env)->GetIntArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild2DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr9
		);

		if(data!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  data, ptr9, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild2DMipmapLevels__IIIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jfloatArray data)
	{
		jint ret;

		jfloat *ptr9 = NULL;

		if ( disp__gluBuild2DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr9 = (*env)->GetFloatArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild2DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr9
		);

		if(data!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  data, ptr9, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild2DMipmapLevels__IIIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jdoubleArray data)
	{
		jint ret;

		jdouble *ptr9 = NULL;

		if ( disp__gluBuild2DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr9 = (*env)->GetDoubleArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild2DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr9
		);

		if(data!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  data, ptr9, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild2DMipmapLevels__IIIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jbooleanArray data)
	{
		jint ret;

		jboolean *ptr9 = NULL;

		if ( disp__gluBuild2DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr9 = (*env)->GetBooleanArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild2DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr9
		);

		if(data!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  data, ptr9, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild2DMipmapLevels__IIIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jlongArray data)
	{
		jint ret;

		jlong *ptr9 = NULL;

		if ( disp__gluBuild2DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr9 = (*env)->GetLongArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild2DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr9
		);

		if(data!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  data, ptr9, JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild2DMipmaps ( GLenum target , GLint internalFormat , GLsizei width , GLsizei height , GLenum format , GLenum type , const void * data ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild2DMipmaps__IIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint format,
		jint type,
		jbyteArray data)
	{
		jint ret;

		jbyte *ptr6 = NULL;

		if ( disp__gluBuild2DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr6 = (*env)->GetByteArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild2DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  data, ptr6, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild2DMipmaps__IIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint format,
		jint type,
		jshortArray data)
	{
		jint ret;

		jshort *ptr6 = NULL;

		if ( disp__gluBuild2DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr6 = (*env)->GetShortArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild2DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  data, ptr6, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild2DMipmaps__IIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint format,
		jint type,
		jintArray data)
	{
		jint ret;

		jint *ptr6 = NULL;

		if ( disp__gluBuild2DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr6 = (*env)->GetIntArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild2DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  data, ptr6, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild2DMipmaps__IIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint format,
		jint type,
		jfloatArray data)
	{
		jint ret;

		jfloat *ptr6 = NULL;

		if ( disp__gluBuild2DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr6 = (*env)->GetFloatArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild2DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  data, ptr6, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild2DMipmaps__IIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint format,
		jint type,
		jdoubleArray data)
	{
		jint ret;

		jdouble *ptr6 = NULL;

		if ( disp__gluBuild2DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr6 = (*env)->GetDoubleArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild2DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  data, ptr6, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild2DMipmaps__IIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint format,
		jint type,
		jbooleanArray data)
	{
		jint ret;

		jboolean *ptr6 = NULL;

		if ( disp__gluBuild2DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr6 = (*env)->GetBooleanArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild2DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  data, ptr6, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild2DMipmaps__IIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint format,
		jint type,
		jlongArray data)
	{
		jint ret;

		jlong *ptr6 = NULL;

		if ( disp__gluBuild2DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr6 = (*env)->GetLongArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild2DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  data, ptr6, JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild3DMipmapLevels ( GLenum target , GLint internalFormat , GLsizei width , GLsizei height , GLsizei depth , GLenum format , GLenum type , GLint level , GLint base , GLint max , const void * data ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild3DMipmapLevels__IIIIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jbyteArray data)
	{
		jint ret;

		jbyte *ptr10 = NULL;

		if ( disp__gluBuild3DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr10 = (*env)->GetByteArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild3DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr10
		);

		if(data!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  data, ptr10, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild3DMipmapLevels__IIIIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jshortArray data)
	{
		jint ret;

		jshort *ptr10 = NULL;

		if ( disp__gluBuild3DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr10 = (*env)->GetShortArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild3DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr10
		);

		if(data!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  data, ptr10, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild3DMipmapLevels__IIIIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jintArray data)
	{
		jint ret;

		jint *ptr10 = NULL;

		if ( disp__gluBuild3DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr10 = (*env)->GetIntArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild3DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr10
		);

		if(data!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  data, ptr10, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild3DMipmapLevels__IIIIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jfloatArray data)
	{
		jint ret;

		jfloat *ptr10 = NULL;

		if ( disp__gluBuild3DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr10 = (*env)->GetFloatArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild3DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr10
		);

		if(data!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  data, ptr10, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild3DMipmapLevels__IIIIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jdoubleArray data)
	{
		jint ret;

		jdouble *ptr10 = NULL;

		if ( disp__gluBuild3DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr10 = (*env)->GetDoubleArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild3DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr10
		);

		if(data!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  data, ptr10, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild3DMipmapLevels__IIIIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jbooleanArray data)
	{
		jint ret;

		jboolean *ptr10 = NULL;

		if ( disp__gluBuild3DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr10 = (*env)->GetBooleanArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild3DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr10
		);

		if(data!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  data, ptr10, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild3DMipmapLevels__IIIIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jlongArray data)
	{
		jint ret;

		jlong *ptr10 = NULL;

		if ( disp__gluBuild3DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr10 = (*env)->GetLongArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild3DMipmapLevels (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(GLint) level,
			(GLint) base,
			(GLint) max,
			(const void *) ptr10
		);

		if(data!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  data, ptr10, JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild3DMipmaps ( GLenum target , GLint internalFormat , GLsizei width , GLsizei height , GLsizei depth , GLenum format , GLenum type , const void * data ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild3DMipmaps__IIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jbyteArray data)
	{
		jint ret;

		jbyte *ptr7 = NULL;

		if ( disp__gluBuild3DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr7 = (*env)->GetByteArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild3DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr7
		);

		if(data!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  data, ptr7, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild3DMipmaps__IIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jshortArray data)
	{
		jint ret;

		jshort *ptr7 = NULL;

		if ( disp__gluBuild3DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr7 = (*env)->GetShortArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild3DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr7
		);

		if(data!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  data, ptr7, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild3DMipmaps__IIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jintArray data)
	{
		jint ret;

		jint *ptr7 = NULL;

		if ( disp__gluBuild3DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr7 = (*env)->GetIntArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild3DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr7
		);

		if(data!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  data, ptr7, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild3DMipmaps__IIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jfloatArray data)
	{
		jint ret;

		jfloat *ptr7 = NULL;

		if ( disp__gluBuild3DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr7 = (*env)->GetFloatArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild3DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr7
		);

		if(data!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  data, ptr7, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild3DMipmaps__IIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jdoubleArray data)
	{
		jint ret;

		jdouble *ptr7 = NULL;

		if ( disp__gluBuild3DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr7 = (*env)->GetDoubleArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild3DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr7
		);

		if(data!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  data, ptr7, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild3DMipmaps__IIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jbooleanArray data)
	{
		jint ret;

		jboolean *ptr7 = NULL;

		if ( disp__gluBuild3DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr7 = (*env)->GetBooleanArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild3DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr7
		);

		if(data!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  data, ptr7, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild3DMipmaps__IIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jlongArray data)
	{
		jint ret;

		jlong *ptr7 = NULL;

		if ( disp__gluBuild3DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr7 = (*env)->GetLongArrayElements(env, data, 0);
		}
		ret = (jint) disp__gluBuild3DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr7
		);

		if(data!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  data, ptr7, JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean gluCheckExtension ( const GLubyte * extName , const GLubyte * extString ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_GLUFuncJauJNI_gluCheckExtension (
		JNIEnv *env, jobject obj,
		jbyteArray extName,
		jbyteArray extString)
	{
		jboolean ret;

		jbyte *ptr0 = NULL;
		jbyte *ptr1 = NULL;

		if ( disp__gluCheckExtension == NULL ) return 0;

		if(extName!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, extName, 0);
		}
		if(extString!=NULL)
		{
			ptr1 = (*env)->GetByteArrayElements(env, extString, 0);
		}
		ret = (jboolean) disp__gluCheckExtension (
			(const GLubyte *) ptr0,
			(const GLubyte *) ptr1
		);

		if(extName!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  extName, ptr0, JNI_ABORT);
		}
		if(extString!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  extString, ptr1, JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluCylinder ( GLUquadric * quad , GLdouble base , GLdouble top , GLdouble height , GLint slices , GLint stacks ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluCylinder (
		JNIEnv *env, jobject obj,
		jlong quad,
		jdouble base,
		jdouble top,
		jdouble height,
		jint slices,
		jint stacks)
	{

		if ( disp__gluCylinder == NULL ) return;

		disp__gluCylinder (
			(GLUquadric *) (PointerHolder) quad,
			(GLdouble) base,
			(GLdouble) top,
			(GLdouble) height,
			(GLint) slices,
			(GLint) stacks
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluDisk ( GLUquadric * quad , GLdouble inner , GLdouble outer , GLint slices , GLint loops ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluDisk (
		JNIEnv *env, jobject obj,
		jlong quad,
		jdouble inner,
		jdouble outer,
		jint slices,
		jint loops)
	{

		if ( disp__gluDisk == NULL ) return;

		disp__gluDisk (
			(GLUquadric *) (PointerHolder) quad,
			(GLdouble) inner,
			(GLdouble) outer,
			(GLint) slices,
			(GLint) loops
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndCurve ( GLUnurbs * nurb ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluEndCurve (
		JNIEnv *env, jobject obj,
		jlong nurb)
	{

		if ( disp__gluEndCurve == NULL ) return;

		disp__gluEndCurve (
			(GLUnurbs *) (PointerHolder) nurb
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndPolygon ( GLUtesselator * tess ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluEndPolygon (
		JNIEnv *env, jobject obj,
		jlong tess)
	{

		if ( disp__gluEndPolygon == NULL ) return;

		disp__gluEndPolygon (
			(GLUtesselator *) (PointerHolder) tess
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndSurface ( GLUnurbs * nurb ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluEndSurface (
		JNIEnv *env, jobject obj,
		jlong nurb)
	{

		if ( disp__gluEndSurface == NULL ) return;

		disp__gluEndSurface (
			(GLUnurbs *) (PointerHolder) nurb
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndTrim ( GLUnurbs * nurb ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluEndTrim (
		JNIEnv *env, jobject obj,
		jlong nurb)
	{

		if ( disp__gluEndTrim == NULL ) return;

		disp__gluEndTrim (
			(GLUnurbs *) (PointerHolder) nurb
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluGetNurbsProperty ( GLUnurbs * nurb , GLenum property , GLfloat * data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluGetNurbsProperty (
		JNIEnv *env, jobject obj,
		jlong nurb,
		jint property,
		jfloatArray data)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__gluGetNurbsProperty == NULL ) return;

		if(data!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, data, &isCopiedArray2);
		}
		disp__gluGetNurbsProperty (
			(GLUnurbs *) (PointerHolder) nurb,
			(GLenum) property,
			(GLfloat *) ptr2
		);

		if(data!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluGetTessProperty ( GLUtesselator * tess , GLenum which , GLdouble * data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluGetTessProperty (
		JNIEnv *env, jobject obj,
		jlong tess,
		jint which,
		jdoubleArray data)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;

		if ( disp__gluGetTessProperty == NULL ) return;

		if(data!=NULL)
		{
			ptr2 = (*env)->GetDoubleArrayElements(env, data, &isCopiedArray2);
		}
		disp__gluGetTessProperty (
			(GLUtesselator *) (PointerHolder) tess,
			(GLenum) which,
			(GLdouble *) ptr2
		);

		if(data!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluLoadSamplingMatrices ( GLUnurbs * nurb , const GLfloat * model , const GLfloat * perspective , const GLint * view ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluLoadSamplingMatrices (
		JNIEnv *env, jobject obj,
		jlong nurb,
		jfloatArray model,
		jfloatArray perspective,
		jintArray view)
	{
		jfloat *ptr1 = NULL;
		jfloat *ptr2 = NULL;
		jint *ptr3 = NULL;

		if ( disp__gluLoadSamplingMatrices == NULL ) return;

		if(model!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, model, 0);
		}
		if(perspective!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, perspective, 0);
		}
		if(view!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, view, 0);
		}
		disp__gluLoadSamplingMatrices (
			(GLUnurbs *) (PointerHolder) nurb,
			(const GLfloat *) ptr1,
			(const GLfloat *) ptr2,
			(const GLint *) ptr3
		);

		if(model!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  model, ptr1, JNI_ABORT);
		}
		if(perspective!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  perspective, ptr2, JNI_ABORT);
		}
		if(view!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  view, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluLookAt ( GLdouble eyeX , GLdouble eyeY , GLdouble eyeZ , GLdouble centerX , GLdouble centerY , GLdouble centerZ , GLdouble upX , GLdouble upY , GLdouble upZ ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluLookAt (
		JNIEnv *env, jobject obj,
		jdouble eyeX,
		jdouble eyeY,
		jdouble eyeZ,
		jdouble centerX,
		jdouble centerY,
		jdouble centerZ,
		jdouble upX,
		jdouble upY,
		jdouble upZ)
	{

		if ( disp__gluLookAt == NULL ) return;

		disp__gluLookAt (
			(GLdouble) eyeX,
			(GLdouble) eyeY,
			(GLdouble) eyeZ,
			(GLdouble) centerX,
			(GLdouble) centerY,
			(GLdouble) centerZ,
			(GLdouble) upX,
			(GLdouble) upY,
			(GLdouble) upZ
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNextContour ( GLUtesselator * tess , GLenum type ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluNextContour (
		JNIEnv *env, jobject obj,
		jlong tess,
		jint type)
	{

		if ( disp__gluNextContour == NULL ) return;

		disp__gluNextContour (
			(GLUtesselator *) (PointerHolder) tess,
			(GLenum) type
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNurbsCurve ( GLUnurbs * nurb , GLint knotCount , GLfloat * knots , GLint stride , GLfloat * control , GLint order , GLenum type ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluNurbsCurve (
		JNIEnv *env, jobject obj,
		jlong nurb,
		jint knotCount,
		jfloatArray knots,
		jint stride,
		jfloatArray control,
		jint order,
		jint type)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;

		if ( disp__gluNurbsCurve == NULL ) return;

		if(knots!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, knots, &isCopiedArray2);
		}
		if(control!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, control, &isCopiedArray4);
		}
		disp__gluNurbsCurve (
			(GLUnurbs *) (PointerHolder) nurb,
			(GLint) knotCount,
			(GLfloat *) ptr2,
			(GLint) stride,
			(GLfloat *) ptr4,
			(GLint) order,
			(GLenum) type
		);

		if(knots!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  knots, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(control!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  control, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNurbsProperty ( GLUnurbs * nurb , GLenum property , GLfloat value ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluNurbsProperty (
		JNIEnv *env, jobject obj,
		jlong nurb,
		jint property,
		jfloat value)
	{

		if ( disp__gluNurbsProperty == NULL ) return;

		disp__gluNurbsProperty (
			(GLUnurbs *) (PointerHolder) nurb,
			(GLenum) property,
			(GLfloat) value
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNurbsSurface ( GLUnurbs * nurb , GLint sKnotCount , GLfloat * sKnots , GLint tKnotCount , GLfloat * tKnots , GLint sStride , GLint tStride , GLfloat * control , GLint sOrder , GLint tOrder , GLenum type ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluNurbsSurface (
		JNIEnv *env, jobject obj,
		jlong nurb,
		jint sKnotCount,
		jfloatArray sKnots,
		jint tKnotCount,
		jfloatArray tKnots,
		jint sStride,
		jint tStride,
		jfloatArray control,
		jint sOrder,
		jint tOrder,
		jint type)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;
		jboolean isCopiedArray7 = JNI_FALSE;
		jfloat *ptr7 = NULL;

		if ( disp__gluNurbsSurface == NULL ) return;

		if(sKnots!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, sKnots, &isCopiedArray2);
		}
		if(tKnots!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, tKnots, &isCopiedArray4);
		}
		if(control!=NULL)
		{
			ptr7 = (*env)->GetFloatArrayElements(env, control, &isCopiedArray7);
		}
		disp__gluNurbsSurface (
			(GLUnurbs *) (PointerHolder) nurb,
			(GLint) sKnotCount,
			(GLfloat *) ptr2,
			(GLint) tKnotCount,
			(GLfloat *) ptr4,
			(GLint) sStride,
			(GLint) tStride,
			(GLfloat *) ptr7,
			(GLint) sOrder,
			(GLint) tOrder,
			(GLenum) type
		);

		if(sKnots!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  sKnots, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(tKnots!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  tKnots, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(control!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  control, ptr7, (isCopiedArray7 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluOrtho2D ( GLdouble left , GLdouble right , GLdouble bottom , GLdouble top ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluOrtho2D (
		JNIEnv *env, jobject obj,
		jdouble left,
		jdouble right,
		jdouble bottom,
		jdouble top)
	{

		if ( disp__gluOrtho2D == NULL ) return;

		disp__gluOrtho2D (
			(GLdouble) left,
			(GLdouble) right,
			(GLdouble) bottom,
			(GLdouble) top
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPartialDisk ( GLUquadric * quad , GLdouble inner , GLdouble outer , GLint slices , GLint loops , GLdouble start , GLdouble sweep ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluPartialDisk (
		JNIEnv *env, jobject obj,
		jlong quad,
		jdouble inner,
		jdouble outer,
		jint slices,
		jint loops,
		jdouble start,
		jdouble sweep)
	{

		if ( disp__gluPartialDisk == NULL ) return;

		disp__gluPartialDisk (
			(GLUquadric *) (PointerHolder) quad,
			(GLdouble) inner,
			(GLdouble) outer,
			(GLint) slices,
			(GLint) loops,
			(GLdouble) start,
			(GLdouble) sweep
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPerspective ( GLdouble fovy , GLdouble aspect , GLdouble zNear , GLdouble zFar ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluPerspective (
		JNIEnv *env, jobject obj,
		jdouble fovy,
		jdouble aspect,
		jdouble zNear,
		jdouble zFar)
	{

		if ( disp__gluPerspective == NULL ) return;

		disp__gluPerspective (
			(GLdouble) fovy,
			(GLdouble) aspect,
			(GLdouble) zNear,
			(GLdouble) zFar
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPickMatrix ( GLdouble x , GLdouble y , GLdouble delX , GLdouble delY , GLint * viewport ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluPickMatrix (
		JNIEnv *env, jobject obj,
		jdouble x,
		jdouble y,
		jdouble delX,
		jdouble delY,
		jintArray viewport)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jint *ptr4 = NULL;

		if ( disp__gluPickMatrix == NULL ) return;

		if(viewport!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, viewport, &isCopiedArray4);
		}
		disp__gluPickMatrix (
			(GLdouble) x,
			(GLdouble) y,
			(GLdouble) delX,
			(GLdouble) delY,
			(GLint *) ptr4
		);

		if(viewport!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  viewport, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluProject ( GLdouble objX , GLdouble objY , GLdouble objZ , const GLdouble * model , const GLdouble * proj , const GLint * view , GLdouble * winX , GLdouble * winY , GLdouble * winZ ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluProject (
		JNIEnv *env, jobject obj,
		jdouble objX,
		jdouble objY,
		jdouble objZ,
		jdoubleArray model,
		jdoubleArray proj,
		jintArray view,
		jdoubleArray winX,
		jdoubleArray winY,
		jdoubleArray winZ)
	{
		jint ret;

		jdouble *ptr3 = NULL;
		jdouble *ptr4 = NULL;
		jint *ptr5 = NULL;
		jboolean isCopiedArray6 = JNI_FALSE;
		jdouble *ptr6 = NULL;
		jboolean isCopiedArray7 = JNI_FALSE;
		jdouble *ptr7 = NULL;
		jboolean isCopiedArray8 = JNI_FALSE;
		jdouble *ptr8 = NULL;

		if ( disp__gluProject == NULL ) return 0;

		if(model!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, model, 0);
		}
		if(proj!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, proj, 0);
		}
		if(view!=NULL)
		{
			ptr5 = (*env)->GetIntArrayElements(env, view, 0);
		}
		if(winX!=NULL)
		{
			ptr6 = (*env)->GetDoubleArrayElements(env, winX, &isCopiedArray6);
		}
		if(winY!=NULL)
		{
			ptr7 = (*env)->GetDoubleArrayElements(env, winY, &isCopiedArray7);
		}
		if(winZ!=NULL)
		{
			ptr8 = (*env)->GetDoubleArrayElements(env, winZ, &isCopiedArray8);
		}
		ret = (jint) disp__gluProject (
			(GLdouble) objX,
			(GLdouble) objY,
			(GLdouble) objZ,
			(const GLdouble *) ptr3,
			(const GLdouble *) ptr4,
			(const GLint *) ptr5,
			(GLdouble *) ptr6,
			(GLdouble *) ptr7,
			(GLdouble *) ptr8
		);

		if(model!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  model, ptr3, JNI_ABORT);
		}
		if(proj!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  proj, ptr4, JNI_ABORT);
		}
		if(view!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  view, ptr5, JNI_ABORT);
		}
		if(winX!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  winX, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(winY!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  winY, ptr7, (isCopiedArray7 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(winZ!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  winZ, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPwlCurve ( GLUnurbs * nurb , GLint count , GLfloat * data , GLint stride , GLenum type ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluPwlCurve (
		JNIEnv *env, jobject obj,
		jlong nurb,
		jint count,
		jfloatArray data,
		jint stride,
		jint type)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__gluPwlCurve == NULL ) return;

		if(data!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, data, &isCopiedArray2);
		}
		disp__gluPwlCurve (
			(GLUnurbs *) (PointerHolder) nurb,
			(GLint) count,
			(GLfloat *) ptr2,
			(GLint) stride,
			(GLenum) type
		);

		if(data!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricDrawStyle ( GLUquadric * quad , GLenum draw ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluQuadricDrawStyle (
		JNIEnv *env, jobject obj,
		jlong quad,
		jint draw)
	{

		if ( disp__gluQuadricDrawStyle == NULL ) return;

		disp__gluQuadricDrawStyle (
			(GLUquadric *) (PointerHolder) quad,
			(GLenum) draw
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricNormals ( GLUquadric * quad , GLenum normal ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluQuadricNormals (
		JNIEnv *env, jobject obj,
		jlong quad,
		jint normal)
	{

		if ( disp__gluQuadricNormals == NULL ) return;

		disp__gluQuadricNormals (
			(GLUquadric *) (PointerHolder) quad,
			(GLenum) normal
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricOrientation ( GLUquadric * quad , GLenum orientation ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluQuadricOrientation (
		JNIEnv *env, jobject obj,
		jlong quad,
		jint orientation)
	{

		if ( disp__gluQuadricOrientation == NULL ) return;

		disp__gluQuadricOrientation (
			(GLUquadric *) (PointerHolder) quad,
			(GLenum) orientation
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricTexture ( GLUquadric * quad , GLboolean texture ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluQuadricTexture (
		JNIEnv *env, jobject obj,
		jlong quad,
		jboolean texture)
	{

		if ( disp__gluQuadricTexture == NULL ) return;

		disp__gluQuadricTexture (
			(GLUquadric *) (PointerHolder) quad,
			(GLboolean) texture
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluScaleImage ( GLenum format , GLsizei wIn , GLsizei hIn , GLenum typeIn , const void * dataIn , GLsizei wOut , GLsizei hOut , GLenum typeOut , GLvoid * dataOut ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluScaleImage__IIII_3BIII_3B (
		JNIEnv *env, jobject obj,
		jint format,
		jint wIn,
		jint hIn,
		jint typeIn,
		jbyteArray dataIn,
		jint wOut,
		jint hOut,
		jint typeOut,
		jbyteArray dataOut)
	{
		jint ret;

		jbyte *ptr4 = NULL;
		jboolean isCopiedArray8 = JNI_FALSE;
		jbyte *ptr8 = NULL;

		if ( disp__gluScaleImage == NULL ) return 0;

		if(dataIn!=NULL)
		{
			ptr4 = (*env)->GetByteArrayElements(env, dataIn, 0);
		}
		if(dataOut!=NULL)
		{
			ptr8 = (*env)->GetByteArrayElements(env, dataOut, &isCopiedArray8);
		}
		ret = (jint) disp__gluScaleImage (
			(GLenum) format,
			(GLsizei) wIn,
			(GLsizei) hIn,
			(GLenum) typeIn,
			(const void *) ptr4,
			(GLsizei) wOut,
			(GLsizei) hOut,
			(GLenum) typeOut,
			(GLvoid *) ptr8
		);

		if(dataIn!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  dataIn, ptr4, JNI_ABORT);
		}
		if(dataOut!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  dataOut, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluScaleImage__IIII_3SIII_3S (
		JNIEnv *env, jobject obj,
		jint format,
		jint wIn,
		jint hIn,
		jint typeIn,
		jshortArray dataIn,
		jint wOut,
		jint hOut,
		jint typeOut,
		jshortArray dataOut)
	{
		jint ret;

		jshort *ptr4 = NULL;
		jboolean isCopiedArray8 = JNI_FALSE;
		jshort *ptr8 = NULL;

		if ( disp__gluScaleImage == NULL ) return 0;

		if(dataIn!=NULL)
		{
			ptr4 = (*env)->GetShortArrayElements(env, dataIn, 0);
		}
		if(dataOut!=NULL)
		{
			ptr8 = (*env)->GetShortArrayElements(env, dataOut, &isCopiedArray8);
		}
		ret = (jint) disp__gluScaleImage (
			(GLenum) format,
			(GLsizei) wIn,
			(GLsizei) hIn,
			(GLenum) typeIn,
			(const void *) ptr4,
			(GLsizei) wOut,
			(GLsizei) hOut,
			(GLenum) typeOut,
			(GLvoid *) ptr8
		);

		if(dataIn!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  dataIn, ptr4, JNI_ABORT);
		}
		if(dataOut!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  dataOut, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluScaleImage__IIII_3IIII_3I (
		JNIEnv *env, jobject obj,
		jint format,
		jint wIn,
		jint hIn,
		jint typeIn,
		jintArray dataIn,
		jint wOut,
		jint hOut,
		jint typeOut,
		jintArray dataOut)
	{
		jint ret;

		jint *ptr4 = NULL;
		jboolean isCopiedArray8 = JNI_FALSE;
		jint *ptr8 = NULL;

		if ( disp__gluScaleImage == NULL ) return 0;

		if(dataIn!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, dataIn, 0);
		}
		if(dataOut!=NULL)
		{
			ptr8 = (*env)->GetIntArrayElements(env, dataOut, &isCopiedArray8);
		}
		ret = (jint) disp__gluScaleImage (
			(GLenum) format,
			(GLsizei) wIn,
			(GLsizei) hIn,
			(GLenum) typeIn,
			(const void *) ptr4,
			(GLsizei) wOut,
			(GLsizei) hOut,
			(GLenum) typeOut,
			(GLvoid *) ptr8
		);

		if(dataIn!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  dataIn, ptr4, JNI_ABORT);
		}
		if(dataOut!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  dataOut, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluScaleImage__IIII_3FIII_3F (
		JNIEnv *env, jobject obj,
		jint format,
		jint wIn,
		jint hIn,
		jint typeIn,
		jfloatArray dataIn,
		jint wOut,
		jint hOut,
		jint typeOut,
		jfloatArray dataOut)
	{
		jint ret;

		jfloat *ptr4 = NULL;
		jboolean isCopiedArray8 = JNI_FALSE;
		jfloat *ptr8 = NULL;

		if ( disp__gluScaleImage == NULL ) return 0;

		if(dataIn!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, dataIn, 0);
		}
		if(dataOut!=NULL)
		{
			ptr8 = (*env)->GetFloatArrayElements(env, dataOut, &isCopiedArray8);
		}
		ret = (jint) disp__gluScaleImage (
			(GLenum) format,
			(GLsizei) wIn,
			(GLsizei) hIn,
			(GLenum) typeIn,
			(const void *) ptr4,
			(GLsizei) wOut,
			(GLsizei) hOut,
			(GLenum) typeOut,
			(GLvoid *) ptr8
		);

		if(dataIn!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  dataIn, ptr4, JNI_ABORT);
		}
		if(dataOut!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  dataOut, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluScaleImage__IIII_3DIII_3D (
		JNIEnv *env, jobject obj,
		jint format,
		jint wIn,
		jint hIn,
		jint typeIn,
		jdoubleArray dataIn,
		jint wOut,
		jint hOut,
		jint typeOut,
		jdoubleArray dataOut)
	{
		jint ret;

		jdouble *ptr4 = NULL;
		jboolean isCopiedArray8 = JNI_FALSE;
		jdouble *ptr8 = NULL;

		if ( disp__gluScaleImage == NULL ) return 0;

		if(dataIn!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, dataIn, 0);
		}
		if(dataOut!=NULL)
		{
			ptr8 = (*env)->GetDoubleArrayElements(env, dataOut, &isCopiedArray8);
		}
		ret = (jint) disp__gluScaleImage (
			(GLenum) format,
			(GLsizei) wIn,
			(GLsizei) hIn,
			(GLenum) typeIn,
			(const void *) ptr4,
			(GLsizei) wOut,
			(GLsizei) hOut,
			(GLenum) typeOut,
			(GLvoid *) ptr8
		);

		if(dataIn!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  dataIn, ptr4, JNI_ABORT);
		}
		if(dataOut!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  dataOut, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluScaleImage__IIII_3ZIII_3Z (
		JNIEnv *env, jobject obj,
		jint format,
		jint wIn,
		jint hIn,
		jint typeIn,
		jbooleanArray dataIn,
		jint wOut,
		jint hOut,
		jint typeOut,
		jbooleanArray dataOut)
	{
		jint ret;

		jboolean *ptr4 = NULL;
		jboolean isCopiedArray8 = JNI_FALSE;
		jboolean *ptr8 = NULL;

		if ( disp__gluScaleImage == NULL ) return 0;

		if(dataIn!=NULL)
		{
			ptr4 = (*env)->GetBooleanArrayElements(env, dataIn, 0);
		}
		if(dataOut!=NULL)
		{
			ptr8 = (*env)->GetBooleanArrayElements(env, dataOut, &isCopiedArray8);
		}
		ret = (jint) disp__gluScaleImage (
			(GLenum) format,
			(GLsizei) wIn,
			(GLsizei) hIn,
			(GLenum) typeIn,
			(const void *) ptr4,
			(GLsizei) wOut,
			(GLsizei) hOut,
			(GLenum) typeOut,
			(GLvoid *) ptr8
		);

		if(dataIn!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  dataIn, ptr4, JNI_ABORT);
		}
		if(dataOut!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  dataOut, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluScaleImage__IIII_3JIII_3J (
		JNIEnv *env, jobject obj,
		jint format,
		jint wIn,
		jint hIn,
		jint typeIn,
		jlongArray dataIn,
		jint wOut,
		jint hOut,
		jint typeOut,
		jlongArray dataOut)
	{
		jint ret;

		jlong *ptr4 = NULL;
		jboolean isCopiedArray8 = JNI_FALSE;
		jlong *ptr8 = NULL;

		if ( disp__gluScaleImage == NULL ) return 0;

		if(dataIn!=NULL)
		{
			ptr4 = (*env)->GetLongArrayElements(env, dataIn, 0);
		}
		if(dataOut!=NULL)
		{
			ptr8 = (*env)->GetLongArrayElements(env, dataOut, &isCopiedArray8);
		}
		ret = (jint) disp__gluScaleImage (
			(GLenum) format,
			(GLsizei) wIn,
			(GLsizei) hIn,
			(GLenum) typeIn,
			(const void *) ptr4,
			(GLsizei) wOut,
			(GLsizei) hOut,
			(GLenum) typeOut,
			(GLvoid *) ptr8
		);

		if(dataIn!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  dataIn, ptr4, JNI_ABORT);
		}
		if(dataOut!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  dataOut, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluSphere ( GLUquadric * quad , GLdouble radius , GLint slices , GLint stacks ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluSphere (
		JNIEnv *env, jobject obj,
		jlong quad,
		jdouble radius,
		jint slices,
		jint stacks)
	{

		if ( disp__gluSphere == NULL ) return;

		disp__gluSphere (
			(GLUquadric *) (PointerHolder) quad,
			(GLdouble) radius,
			(GLint) slices,
			(GLint) stacks
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessBeginContour ( GLUtesselator * tess ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginContour (
		JNIEnv *env, jobject obj,
		jlong tess)
	{

		if ( disp__gluTessBeginContour == NULL ) return;

		disp__gluTessBeginContour (
			(GLUtesselator *) (PointerHolder) tess
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessBeginPolygon ( GLUtesselator * tess , GLvoid * data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3B (
		JNIEnv *env, jobject obj,
		jlong tess,
		jbyteArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jbyte *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (*env)->GetByteArrayElements(env, data, &isCopiedArray1);
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3S (
		JNIEnv *env, jobject obj,
		jlong tess,
		jshortArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jshort *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, data, &isCopiedArray1);
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3I (
		JNIEnv *env, jobject obj,
		jlong tess,
		jintArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, data, &isCopiedArray1);
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3F (
		JNIEnv *env, jobject obj,
		jlong tess,
		jfloatArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, data, &isCopiedArray1);
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3D (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdoubleArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, data, &isCopiedArray1);
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3Z (
		JNIEnv *env, jobject obj,
		jlong tess,
		jbooleanArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jboolean *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (*env)->GetBooleanArrayElements(env, data, &isCopiedArray1);
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3J (
		JNIEnv *env, jobject obj,
		jlong tess,
		jlongArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jlong *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (*env)->GetLongArrayElements(env, data, &isCopiedArray1);
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessEndContour ( GLUtesselator * tess ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessEndContour (
		JNIEnv *env, jobject obj,
		jlong tess)
	{

		if ( disp__gluTessEndContour == NULL ) return;

		disp__gluTessEndContour (
			(GLUtesselator *) (PointerHolder) tess
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessEndPolygon ( GLUtesselator * tess ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessEndPolygon (
		JNIEnv *env, jobject obj,
		jlong tess)
	{

		if ( disp__gluTessEndPolygon == NULL ) return;

		disp__gluTessEndPolygon (
			(GLUtesselator *) (PointerHolder) tess
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessNormal ( GLUtesselator * tess , GLdouble valueX , GLdouble valueY , GLdouble valueZ ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessNormal (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdouble valueX,
		jdouble valueY,
		jdouble valueZ)
	{

		if ( disp__gluTessNormal == NULL ) return;

		disp__gluTessNormal (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble) valueX,
			(GLdouble) valueY,
			(GLdouble) valueZ
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessProperty ( GLUtesselator * tess , GLenum which , GLdouble data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessProperty (
		JNIEnv *env, jobject obj,
		jlong tess,
		jint which,
		jdouble data)
	{

		if ( disp__gluTessProperty == NULL ) return;

		disp__gluTessProperty (
			(GLUtesselator *) (PointerHolder) tess,
			(GLenum) which,
			(GLdouble) data
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessVertex ( GLUtesselator * tess , GLdouble * location , GLvoid * data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3B (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdoubleArray location,
		jbyteArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jbyte *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, location, &isCopiedArray1);
		}
		if(data!=NULL)
		{
			ptr2 = (*env)->GetByteArrayElements(env, data, &isCopiedArray2);
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);

		if(location!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  location, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(data!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3S (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdoubleArray location,
		jshortArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jshort *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, location, &isCopiedArray1);
		}
		if(data!=NULL)
		{
			ptr2 = (*env)->GetShortArrayElements(env, data, &isCopiedArray2);
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);

		if(location!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  location, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(data!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3I (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdoubleArray location,
		jintArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, location, &isCopiedArray1);
		}
		if(data!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, data, &isCopiedArray2);
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);

		if(location!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  location, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(data!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3F (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdoubleArray location,
		jfloatArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, location, &isCopiedArray1);
		}
		if(data!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, data, &isCopiedArray2);
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);

		if(location!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  location, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(data!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3D (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdoubleArray location,
		jdoubleArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, location, &isCopiedArray1);
		}
		if(data!=NULL)
		{
			ptr2 = (*env)->GetDoubleArrayElements(env, data, &isCopiedArray2);
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);

		if(location!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  location, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(data!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3Z (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdoubleArray location,
		jbooleanArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jboolean *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, location, &isCopiedArray1);
		}
		if(data!=NULL)
		{
			ptr2 = (*env)->GetBooleanArrayElements(env, data, &isCopiedArray2);
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);

		if(location!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  location, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(data!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3J (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdoubleArray location,
		jlongArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jlong *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, location, &isCopiedArray1);
		}
		if(data!=NULL)
		{
			ptr2 = (*env)->GetLongArrayElements(env, data, &isCopiedArray2);
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);

		if(location!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  location, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(data!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluUnProject ( GLdouble winX , GLdouble winY , GLdouble winZ , const GLdouble * model , const GLdouble * proj , const GLint * view , GLdouble * objX , GLdouble * objY , GLdouble * objZ ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluUnProject (
		JNIEnv *env, jobject obj,
		jdouble winX,
		jdouble winY,
		jdouble winZ,
		jdoubleArray model,
		jdoubleArray proj,
		jintArray view,
		jdoubleArray objX,
		jdoubleArray objY,
		jdoubleArray objZ)
	{
		jint ret;

		jdouble *ptr3 = NULL;
		jdouble *ptr4 = NULL;
		jint *ptr5 = NULL;
		jboolean isCopiedArray6 = JNI_FALSE;
		jdouble *ptr6 = NULL;
		jboolean isCopiedArray7 = JNI_FALSE;
		jdouble *ptr7 = NULL;
		jboolean isCopiedArray8 = JNI_FALSE;
		jdouble *ptr8 = NULL;

		if ( disp__gluUnProject == NULL ) return 0;

		if(model!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, model, 0);
		}
		if(proj!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, proj, 0);
		}
		if(view!=NULL)
		{
			ptr5 = (*env)->GetIntArrayElements(env, view, 0);
		}
		if(objX!=NULL)
		{
			ptr6 = (*env)->GetDoubleArrayElements(env, objX, &isCopiedArray6);
		}
		if(objY!=NULL)
		{
			ptr7 = (*env)->GetDoubleArrayElements(env, objY, &isCopiedArray7);
		}
		if(objZ!=NULL)
		{
			ptr8 = (*env)->GetDoubleArrayElements(env, objZ, &isCopiedArray8);
		}
		ret = (jint) disp__gluUnProject (
			(GLdouble) winX,
			(GLdouble) winY,
			(GLdouble) winZ,
			(const GLdouble *) ptr3,
			(const GLdouble *) ptr4,
			(const GLint *) ptr5,
			(GLdouble *) ptr6,
			(GLdouble *) ptr7,
			(GLdouble *) ptr8
		);

		if(model!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  model, ptr3, JNI_ABORT);
		}
		if(proj!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  proj, ptr4, JNI_ABORT);
		}
		if(view!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  view, ptr5, JNI_ABORT);
		}
		if(objX!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  objX, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(objY!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  objY, ptr7, (isCopiedArray7 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(objZ!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  objZ, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluUnProject4 ( GLdouble winX , GLdouble winY , GLdouble winZ , GLdouble clipW , const GLdouble * model , const GLdouble * proj , const GLint * view , GLdouble nearVal , GLdouble farVal , GLdouble * objX , GLdouble * objY , GLdouble * objZ , GLdouble * objW ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluUnProject4 (
		JNIEnv *env, jobject obj,
		jdouble winX,
		jdouble winY,
		jdouble winZ,
		jdouble clipW,
		jdoubleArray model,
		jdoubleArray proj,
		jintArray view,
		jdouble nearVal,
		jdouble farVal,
		jdoubleArray objX,
		jdoubleArray objY,
		jdoubleArray objZ,
		jdoubleArray objW)
	{
		jint ret;

		jdouble *ptr4 = NULL;
		jdouble *ptr5 = NULL;
		jint *ptr6 = NULL;
		jboolean isCopiedArray9 = JNI_FALSE;
		jdouble *ptr9 = NULL;
		jboolean isCopiedArray10 = JNI_FALSE;
		jdouble *ptr10 = NULL;
		jboolean isCopiedArray11 = JNI_FALSE;
		jdouble *ptr11 = NULL;
		jboolean isCopiedArray12 = JNI_FALSE;
		jdouble *ptr12 = NULL;

		if ( disp__gluUnProject4 == NULL ) return 0;

		if(model!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, model, 0);
		}
		if(proj!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, proj, 0);
		}
		if(view!=NULL)
		{
			ptr6 = (*env)->GetIntArrayElements(env, view, 0);
		}
		if(objX!=NULL)
		{
			ptr9 = (*env)->GetDoubleArrayElements(env, objX, &isCopiedArray9);
		}
		if(objY!=NULL)
		{
			ptr10 = (*env)->GetDoubleArrayElements(env, objY, &isCopiedArray10);
		}
		if(objZ!=NULL)
		{
			ptr11 = (*env)->GetDoubleArrayElements(env, objZ, &isCopiedArray11);
		}
		if(objW!=NULL)
		{
			ptr12 = (*env)->GetDoubleArrayElements(env, objW, &isCopiedArray12);
		}
		ret = (jint) disp__gluUnProject4 (
			(GLdouble) winX,
			(GLdouble) winY,
			(GLdouble) winZ,
			(GLdouble) clipW,
			(const GLdouble *) ptr4,
			(const GLdouble *) ptr5,
			(const GLint *) ptr6,
			(GLdouble) nearVal,
			(GLdouble) farVal,
			(GLdouble *) ptr9,
			(GLdouble *) ptr10,
			(GLdouble *) ptr11,
			(GLdouble *) ptr12
		);

		if(model!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  model, ptr4, JNI_ABORT);
		}
		if(proj!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  proj, ptr5, JNI_ABORT);
		}
		if(view!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  view, ptr6, JNI_ABORT);
		}
		if(objX!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  objX, ptr9, (isCopiedArray9 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(objY!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  objY, ptr10, (isCopiedArray10 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(objZ!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  objZ, ptr11, (isCopiedArray11 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(objW!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  objW, ptr12, (isCopiedArray12 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}

/* C2J Parser Version 3.0:  Java program parsed successfully. */ 
