/**
 * C2J Parser Version 3.0
 * Jausoft - Sven Goethel Software Development
 * Reading from file: glu-proto-auto.orig.h . . .
 * Destination-Class: gl4java_GLUFunc14JauJNI ! 
 */

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginCurve ( GLUnurbs * nurb ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBeginCurve (
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
	Java_gl4java_GLUFunc14JauJNI_gluBeginPolygon (
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
	Java_gl4java_GLUFunc14JauJNI_gluBeginSurface (
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
	Java_gl4java_GLUFunc14JauJNI_gluBeginTrim (
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
	Java_gl4java_GLUFunc14JauJNI_gluBuild1DMipmapLevels__IIIIIIII_3B (
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
			ptr8 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild1DMipmapLevels__IIIIIIII_3S (
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
			ptr8 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild1DMipmapLevels__IIIIIIII_3I (
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
			ptr8 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild1DMipmapLevels__IIIIIIII_3F (
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
			ptr8 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild1DMipmapLevels__IIIIIIII_3D (
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
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild1DMipmapLevels__IIIIIIII_3Z (
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
			ptr8 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild1DMipmapLevels__IIIIIIII_3J (
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
			ptr8 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild1DMipmapLevels__IIIIIIIILjava_nio_Buffer_2 (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint format,
		jint type,
		jint level,
		jint base,
		jint max,
		jobject data)
	{
		jint ret;

		void *ptr8 = NULL;

		if ( disp__gluBuild1DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr8 = (*env)->GetDirectBufferAddress(env, data);
			if (ptr8 == NULL) {
				(*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/IllegalArgumentException"),
					"Argument 8 was not a direct buffer");
				return 0;
			}
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

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild1DMipmaps ( GLenum target , GLint internalFormat , GLsizei width , GLenum format , GLenum type , const void * data ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild1DMipmaps__IIIII_3B (
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
			ptr5 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild1DMipmaps__IIIII_3S (
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
			ptr5 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild1DMipmaps__IIIII_3I (
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
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild1DMipmaps__IIIII_3F (
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
			ptr5 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild1DMipmaps__IIIII_3D (
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
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild1DMipmaps__IIIII_3Z (
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
			ptr5 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild1DMipmaps__IIIII_3J (
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
			ptr5 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild1DMipmaps__IIIIILjava_nio_Buffer_2 (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint format,
		jint type,
		jobject data)
	{
		jint ret;

		void *ptr5 = NULL;

		if ( disp__gluBuild1DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetDirectBufferAddress(env, data);
			if (ptr5 == NULL) {
				(*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/IllegalArgumentException"),
					"Argument 5 was not a direct buffer");
				return 0;
			}
		}
		ret = (jint) disp__gluBuild1DMipmaps (
			(GLenum) target,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const void *) ptr5
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild2DMipmapLevels ( GLenum target , GLint internalFormat , GLsizei width , GLsizei height , GLenum format , GLenum type , GLint level , GLint base , GLint max , const void * data ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild2DMipmapLevels__IIIIIIIII_3B (
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
			ptr9 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr9, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild2DMipmapLevels__IIIIIIIII_3S (
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
			ptr9 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr9, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild2DMipmapLevels__IIIIIIIII_3I (
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
			ptr9 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr9, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild2DMipmapLevels__IIIIIIIII_3F (
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
			ptr9 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr9, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild2DMipmapLevels__IIIIIIIII_3D (
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
			ptr9 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr9, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild2DMipmapLevels__IIIIIIIII_3Z (
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
			ptr9 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr9, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild2DMipmapLevels__IIIIIIIII_3J (
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
			ptr9 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr9, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild2DMipmapLevels__IIIIIIIIILjava_nio_Buffer_2 (
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
		jobject data)
	{
		jint ret;

		void *ptr9 = NULL;

		if ( disp__gluBuild2DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr9 = (*env)->GetDirectBufferAddress(env, data);
			if (ptr9 == NULL) {
				(*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/IllegalArgumentException"),
					"Argument 9 was not a direct buffer");
				return 0;
			}
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

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild2DMipmaps ( GLenum target , GLint internalFormat , GLsizei width , GLsizei height , GLenum format , GLenum type , const void * data ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild2DMipmaps__IIIIII_3B (
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
			ptr6 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild2DMipmaps__IIIIII_3S (
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
			ptr6 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild2DMipmaps__IIIIII_3I (
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
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild2DMipmaps__IIIIII_3F (
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
			ptr6 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild2DMipmaps__IIIIII_3D (
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
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild2DMipmaps__IIIIII_3Z (
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
			ptr6 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild2DMipmaps__IIIIII_3J (
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
			ptr6 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild2DMipmaps__IIIIIILjava_nio_Buffer_2 (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint format,
		jint type,
		jobject data)
	{
		jint ret;

		void *ptr6 = NULL;

		if ( disp__gluBuild2DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr6 = (*env)->GetDirectBufferAddress(env, data);
			if (ptr6 == NULL) {
				(*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/IllegalArgumentException"),
					"Argument 6 was not a direct buffer");
				return 0;
			}
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

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild3DMipmapLevels ( GLenum target , GLint internalFormat , GLsizei width , GLsizei height , GLsizei depth , GLenum format , GLenum type , GLint level , GLint base , GLint max , const void * data ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild3DMipmapLevels__IIIIIIIIII_3B (
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
			ptr10 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild3DMipmapLevels__IIIIIIIIII_3S (
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
			ptr10 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild3DMipmapLevels__IIIIIIIIII_3I (
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
			ptr10 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild3DMipmapLevels__IIIIIIIIII_3F (
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
			ptr10 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild3DMipmapLevels__IIIIIIIIII_3D (
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
			ptr10 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild3DMipmapLevels__IIIIIIIIII_3Z (
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
			ptr10 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild3DMipmapLevels__IIIIIIIIII_3J (
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
			ptr10 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild3DMipmapLevels__IIIIIIIIIILjava_nio_Buffer_2 (
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
		jobject data)
	{
		jint ret;

		void *ptr10 = NULL;

		if ( disp__gluBuild3DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr10 = (*env)->GetDirectBufferAddress(env, data);
			if (ptr10 == NULL) {
				(*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/IllegalArgumentException"),
					"Argument 10 was not a direct buffer");
				return 0;
			}
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

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild3DMipmaps ( GLenum target , GLint internalFormat , GLsizei width , GLsizei height , GLsizei depth , GLenum format , GLenum type , const void * data ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild3DMipmaps__IIIIIII_3B (
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
			ptr7 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild3DMipmaps__IIIIIII_3S (
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
			ptr7 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild3DMipmaps__IIIIIII_3I (
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
			ptr7 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild3DMipmaps__IIIIIII_3F (
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
			ptr7 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild3DMipmaps__IIIIIII_3D (
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
			ptr7 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild3DMipmaps__IIIIIII_3Z (
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
			ptr7 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild3DMipmaps__IIIIIII_3J (
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
			ptr7 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluBuild3DMipmaps__IIIIIIILjava_nio_Buffer_2 (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jobject data)
	{
		jint ret;

		void *ptr7 = NULL;

		if ( disp__gluBuild3DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr7 = (*env)->GetDirectBufferAddress(env, data);
			if (ptr7 == NULL) {
				(*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/IllegalArgumentException"),
					"Argument 7 was not a direct buffer");
				return 0;
			}
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

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean gluCheckExtension ( const GLubyte * extName , const GLubyte * extString ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluCheckExtension (
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
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, extName, 0);
		}
		if(extString!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, extString, 0);
		}
		ret = (jboolean) disp__gluCheckExtension (
			(const GLubyte *) ptr0,
			(const GLubyte *) ptr1
		);

		if(extName!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  extName, ptr0, JNI_ABORT);
		}
		if(extString!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  extString, ptr1, JNI_ABORT);
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
	Java_gl4java_GLUFunc14JauJNI_gluCylinder (
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
	Java_gl4java_GLUFunc14JauJNI_gluDisk (
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
	Java_gl4java_GLUFunc14JauJNI_gluEndCurve (
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
	Java_gl4java_GLUFunc14JauJNI_gluEndPolygon (
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
	Java_gl4java_GLUFunc14JauJNI_gluEndSurface (
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
	Java_gl4java_GLUFunc14JauJNI_gluEndTrim (
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
	Java_gl4java_GLUFunc14JauJNI_gluGetNurbsProperty (
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
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray2);
		}
		disp__gluGetNurbsProperty (
			(GLUnurbs *) (PointerHolder) nurb,
			(GLenum) property,
			(GLfloat *) ptr2
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluGetTessProperty ( GLUtesselator * tess , GLenum which , GLdouble * data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluGetTessProperty (
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
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray2);
		}
		disp__gluGetTessProperty (
			(GLUtesselator *) (PointerHolder) tess,
			(GLenum) which,
			(GLdouble *) ptr2
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluLoadSamplingMatrices ( GLUnurbs * nurb , const GLfloat * model , const GLfloat * perspective , const GLint * view ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluLoadSamplingMatrices (
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
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, model, 0);
		}
		if(perspective!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, perspective, 0);
		}
		if(view!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, view, 0);
		}
		disp__gluLoadSamplingMatrices (
			(GLUnurbs *) (PointerHolder) nurb,
			(const GLfloat *) ptr1,
			(const GLfloat *) ptr2,
			(const GLint *) ptr3
		);

		if(model!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  model, ptr1, JNI_ABORT);
		}
		if(perspective!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  perspective, ptr2, JNI_ABORT);
		}
		if(view!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  view, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluLookAt ( GLdouble eyeX , GLdouble eyeY , GLdouble eyeZ , GLdouble centerX , GLdouble centerY , GLdouble centerZ , GLdouble upX , GLdouble upY , GLdouble upZ ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluLookAt (
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
	Java_gl4java_GLUFunc14JauJNI_gluNextContour (
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
	Java_gl4java_GLUFunc14JauJNI_gluNurbsCurve (
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
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, knots, &isCopiedArray2);
		}
		if(control!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, control, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  knots, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(control!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  control, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNurbsProperty ( GLUnurbs * nurb , GLenum property , GLfloat value ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluNurbsProperty (
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
	Java_gl4java_GLUFunc14JauJNI_gluNurbsSurface (
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
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, sKnots, &isCopiedArray2);
		}
		if(tKnots!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, tKnots, &isCopiedArray4);
		}
		if(control!=NULL)
		{
			ptr7 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, control, &isCopiedArray7);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  sKnots, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(tKnots!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  tKnots, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(control!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  control, ptr7, (isCopiedArray7 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluOrtho2D ( GLdouble left , GLdouble right , GLdouble bottom , GLdouble top ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluOrtho2D (
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
	Java_gl4java_GLUFunc14JauJNI_gluPartialDisk (
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
	Java_gl4java_GLUFunc14JauJNI_gluPerspective (
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
	Java_gl4java_GLUFunc14JauJNI_gluPickMatrix (
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
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, viewport, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  viewport, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluProject ( GLdouble objX , GLdouble objY , GLdouble objZ , const GLdouble * model , const GLdouble * proj , const GLint * view , GLdouble * winX , GLdouble * winY , GLdouble * winZ ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluProject (
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
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, model, 0);
		}
		if(proj!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, proj, 0);
		}
		if(view!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, view, 0);
		}
		if(winX!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, winX, &isCopiedArray6);
		}
		if(winY!=NULL)
		{
			ptr7 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, winY, &isCopiedArray7);
		}
		if(winZ!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, winZ, &isCopiedArray8);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  model, ptr3, JNI_ABORT);
		}
		if(proj!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  proj, ptr4, JNI_ABORT);
		}
		if(view!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  view, ptr5, JNI_ABORT);
		}
		if(winX!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  winX, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(winY!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  winY, ptr7, (isCopiedArray7 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(winZ!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  winZ, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
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
	Java_gl4java_GLUFunc14JauJNI_gluPwlCurve (
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
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray2);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricDrawStyle ( GLUquadric * quad , GLenum draw ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluQuadricDrawStyle (
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
	Java_gl4java_GLUFunc14JauJNI_gluQuadricNormals (
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
	Java_gl4java_GLUFunc14JauJNI_gluQuadricOrientation (
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
	Java_gl4java_GLUFunc14JauJNI_gluQuadricTexture (
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
	Java_gl4java_GLUFunc14JauJNI_gluScaleImage__IIII_3BIII_3B (
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
			ptr4 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, dataIn, 0);
		}
		if(dataOut!=NULL)
		{
			ptr8 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, dataOut, &isCopiedArray8);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  dataIn, ptr4, JNI_ABORT);
		}
		if(dataOut!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  dataOut, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluScaleImage__IIII_3SIII_3S (
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
			ptr4 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, dataIn, 0);
		}
		if(dataOut!=NULL)
		{
			ptr8 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, dataOut, &isCopiedArray8);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  dataIn, ptr4, JNI_ABORT);
		}
		if(dataOut!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  dataOut, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluScaleImage__IIII_3IIII_3I (
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
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, dataIn, 0);
		}
		if(dataOut!=NULL)
		{
			ptr8 = (jint *) (*env)->GetPrimitiveArrayCritical(env, dataOut, &isCopiedArray8);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  dataIn, ptr4, JNI_ABORT);
		}
		if(dataOut!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  dataOut, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluScaleImage__IIII_3FIII_3F (
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
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, dataIn, 0);
		}
		if(dataOut!=NULL)
		{
			ptr8 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, dataOut, &isCopiedArray8);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  dataIn, ptr4, JNI_ABORT);
		}
		if(dataOut!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  dataOut, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluScaleImage__IIII_3DIII_3D (
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
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, dataIn, 0);
		}
		if(dataOut!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, dataOut, &isCopiedArray8);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  dataIn, ptr4, JNI_ABORT);
		}
		if(dataOut!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  dataOut, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluScaleImage__IIII_3ZIII_3Z (
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
			ptr4 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, dataIn, 0);
		}
		if(dataOut!=NULL)
		{
			ptr8 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, dataOut, &isCopiedArray8);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  dataIn, ptr4, JNI_ABORT);
		}
		if(dataOut!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  dataOut, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluScaleImage__IIII_3JIII_3J (
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
			ptr4 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, dataIn, 0);
		}
		if(dataOut!=NULL)
		{
			ptr8 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, dataOut, &isCopiedArray8);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  dataIn, ptr4, JNI_ABORT);
		}
		if(dataOut!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  dataOut, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluScaleImage__IIIILjava_nio_Buffer_2IIILjava_nio_Buffer_2 (
		JNIEnv *env, jobject obj,
		jint format,
		jint wIn,
		jint hIn,
		jint typeIn,
		jobject dataIn,
		jint wOut,
		jint hOut,
		jint typeOut,
		jobject dataOut)
	{
		jint ret;

		void *ptr4 = NULL;
		void *ptr8 = NULL;

		if ( disp__gluScaleImage == NULL ) return 0;

		if(dataIn!=NULL)
		{
			ptr4 = (*env)->GetDirectBufferAddress(env, dataIn);
			if (ptr4 == NULL) {
				(*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/IllegalArgumentException"),
					"Argument 4 was not a direct buffer");
				return 0;
			}
		}
		if(dataOut!=NULL)
		{
			ptr8 = (*env)->GetDirectBufferAddress(env, dataOut);
			if (ptr8 == NULL) {
				(*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/IllegalArgumentException"),
					"Argument 8 was not a direct buffer");
				return 0;
			}
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

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluSphere ( GLUquadric * quad , GLdouble radius , GLint slices , GLint stacks ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluSphere (
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
   extern GLint gluUnProject ( GLdouble winX , GLdouble winY , GLdouble winZ , const GLdouble * model , const GLdouble * proj , const GLint * view , GLdouble * objX , GLdouble * objY , GLdouble * objZ ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFunc14JauJNI_gluUnProject (
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
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, model, 0);
		}
		if(proj!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, proj, 0);
		}
		if(view!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, view, 0);
		}
		if(objX!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objX, &isCopiedArray6);
		}
		if(objY!=NULL)
		{
			ptr7 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objY, &isCopiedArray7);
		}
		if(objZ!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objZ, &isCopiedArray8);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  model, ptr3, JNI_ABORT);
		}
		if(proj!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  proj, ptr4, JNI_ABORT);
		}
		if(view!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  view, ptr5, JNI_ABORT);
		}
		if(objX!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  objX, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(objY!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  objY, ptr7, (isCopiedArray7 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(objZ!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  objZ, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
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
	Java_gl4java_GLUFunc14JauJNI_gluUnProject4 (
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
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, model, 0);
		}
		if(proj!=NULL)
		{
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, proj, 0);
		}
		if(view!=NULL)
		{
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, view, 0);
		}
		if(objX!=NULL)
		{
			ptr9 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objX, &isCopiedArray9);
		}
		if(objY!=NULL)
		{
			ptr10 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objY, &isCopiedArray10);
		}
		if(objZ!=NULL)
		{
			ptr11 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objZ, &isCopiedArray11);
		}
		if(objW!=NULL)
		{
			ptr12 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objW, &isCopiedArray12);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  model, ptr4, JNI_ABORT);
		}
		if(proj!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  proj, ptr5, JNI_ABORT);
		}
		if(view!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  view, ptr6, JNI_ABORT);
		}
		if(objX!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  objX, ptr9, (isCopiedArray9 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(objY!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  objY, ptr10, (isCopiedArray10 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(objZ!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  objZ, ptr11, (isCopiedArray11 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(objW!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  objW, ptr12, (isCopiedArray12 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}

/* C2J Parser Version 3.0:  Java program parsed successfully. */ 
