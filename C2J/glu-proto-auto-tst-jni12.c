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

		jboolean isCopiedArray8 = JNI_FALSE;
		jbyte *ptr8 = NULL;
		static int isWarned8 = 0;

		if ( disp__gluBuild1DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr8 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluBuild1DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
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

		jboolean isCopiedArray8 = JNI_FALSE;
		jshort *ptr8 = NULL;
		static int isWarned8 = 0;

		if ( disp__gluBuild1DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr8 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluBuild1DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
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

		jboolean isCopiedArray8 = JNI_FALSE;
		jint *ptr8 = NULL;
		static int isWarned8 = 0;

		if ( disp__gluBuild1DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr8 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluBuild1DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
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

		jboolean isCopiedArray8 = JNI_FALSE;
		jfloat *ptr8 = NULL;
		static int isWarned8 = 0;

		if ( disp__gluBuild1DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr8 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluBuild1DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
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

		jboolean isCopiedArray8 = JNI_FALSE;
		jdouble *ptr8 = NULL;
		static int isWarned8 = 0;

		if ( disp__gluBuild1DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluBuild1DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
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

		jboolean isCopiedArray8 = JNI_FALSE;
		jboolean *ptr8 = NULL;
		static int isWarned8 = 0;

		if ( disp__gluBuild1DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr8 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluBuild1DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
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

		jboolean isCopiedArray8 = JNI_FALSE;
		jlong *ptr8 = NULL;
		static int isWarned8 = 0;

		if ( disp__gluBuild1DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr8 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluBuild1DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
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

		jboolean isCopiedArray5 = JNI_FALSE;
		jbyte *ptr5 = NULL;
		static int isWarned5 = 0;

		if ( disp__gluBuild1DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr5 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluBuild1DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		jboolean isCopiedArray5 = JNI_FALSE;
		jshort *ptr5 = NULL;
		static int isWarned5 = 0;

		if ( disp__gluBuild1DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr5 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluBuild1DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		jboolean isCopiedArray5 = JNI_FALSE;
		jint *ptr5 = NULL;
		static int isWarned5 = 0;

		if ( disp__gluBuild1DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluBuild1DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		jboolean isCopiedArray5 = JNI_FALSE;
		jfloat *ptr5 = NULL;
		static int isWarned5 = 0;

		if ( disp__gluBuild1DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr5 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluBuild1DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		jboolean isCopiedArray5 = JNI_FALSE;
		jdouble *ptr5 = NULL;
		static int isWarned5 = 0;

		if ( disp__gluBuild1DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluBuild1DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		jboolean isCopiedArray5 = JNI_FALSE;
		jboolean *ptr5 = NULL;
		static int isWarned5 = 0;

		if ( disp__gluBuild1DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr5 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluBuild1DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		jboolean isCopiedArray5 = JNI_FALSE;
		jlong *ptr5 = NULL;
		static int isWarned5 = 0;

		if ( disp__gluBuild1DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr5 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluBuild1DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		jboolean isCopiedArray9 = JNI_FALSE;
		jbyte *ptr9 = NULL;
		static int isWarned9 = 0;

		if ( disp__gluBuild2DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr9 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray9);
			if( isCopiedArray9 == JNI_TRUE && isWarned9==0 ) {
				isWarned9=1;
				printf("COPY by gluBuild2DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr9, JNI_ABORT);
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

		jboolean isCopiedArray9 = JNI_FALSE;
		jshort *ptr9 = NULL;
		static int isWarned9 = 0;

		if ( disp__gluBuild2DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr9 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray9);
			if( isCopiedArray9 == JNI_TRUE && isWarned9==0 ) {
				isWarned9=1;
				printf("COPY by gluBuild2DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr9, JNI_ABORT);
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

		jboolean isCopiedArray9 = JNI_FALSE;
		jint *ptr9 = NULL;
		static int isWarned9 = 0;

		if ( disp__gluBuild2DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr9 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray9);
			if( isCopiedArray9 == JNI_TRUE && isWarned9==0 ) {
				isWarned9=1;
				printf("COPY by gluBuild2DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr9, JNI_ABORT);
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

		jboolean isCopiedArray9 = JNI_FALSE;
		jfloat *ptr9 = NULL;
		static int isWarned9 = 0;

		if ( disp__gluBuild2DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr9 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray9);
			if( isCopiedArray9 == JNI_TRUE && isWarned9==0 ) {
				isWarned9=1;
				printf("COPY by gluBuild2DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr9, JNI_ABORT);
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

		jboolean isCopiedArray9 = JNI_FALSE;
		jdouble *ptr9 = NULL;
		static int isWarned9 = 0;

		if ( disp__gluBuild2DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr9 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray9);
			if( isCopiedArray9 == JNI_TRUE && isWarned9==0 ) {
				isWarned9=1;
				printf("COPY by gluBuild2DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr9, JNI_ABORT);
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

		jboolean isCopiedArray9 = JNI_FALSE;
		jboolean *ptr9 = NULL;
		static int isWarned9 = 0;

		if ( disp__gluBuild2DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr9 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray9);
			if( isCopiedArray9 == JNI_TRUE && isWarned9==0 ) {
				isWarned9=1;
				printf("COPY by gluBuild2DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr9, JNI_ABORT);
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

		jboolean isCopiedArray9 = JNI_FALSE;
		jlong *ptr9 = NULL;
		static int isWarned9 = 0;

		if ( disp__gluBuild2DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr9 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray9);
			if( isCopiedArray9 == JNI_TRUE && isWarned9==0 ) {
				isWarned9=1;
				printf("COPY by gluBuild2DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr9, JNI_ABORT);
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

		jboolean isCopiedArray6 = JNI_FALSE;
		jbyte *ptr6 = NULL;
		static int isWarned6 = 0;

		if ( disp__gluBuild2DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr6 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluBuild2DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
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

		jboolean isCopiedArray6 = JNI_FALSE;
		jshort *ptr6 = NULL;
		static int isWarned6 = 0;

		if ( disp__gluBuild2DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr6 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluBuild2DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
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

		jboolean isCopiedArray6 = JNI_FALSE;
		jint *ptr6 = NULL;
		static int isWarned6 = 0;

		if ( disp__gluBuild2DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluBuild2DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
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

		jboolean isCopiedArray6 = JNI_FALSE;
		jfloat *ptr6 = NULL;
		static int isWarned6 = 0;

		if ( disp__gluBuild2DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr6 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluBuild2DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
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

		jboolean isCopiedArray6 = JNI_FALSE;
		jdouble *ptr6 = NULL;
		static int isWarned6 = 0;

		if ( disp__gluBuild2DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluBuild2DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
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

		jboolean isCopiedArray6 = JNI_FALSE;
		jboolean *ptr6 = NULL;
		static int isWarned6 = 0;

		if ( disp__gluBuild2DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr6 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluBuild2DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
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

		jboolean isCopiedArray6 = JNI_FALSE;
		jlong *ptr6 = NULL;
		static int isWarned6 = 0;

		if ( disp__gluBuild2DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr6 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluBuild2DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
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

		jboolean isCopiedArray10 = JNI_FALSE;
		jbyte *ptr10 = NULL;
		static int isWarned10 = 0;

		if ( disp__gluBuild3DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr10 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray10);
			if( isCopiedArray10 == JNI_TRUE && isWarned10==0 ) {
				isWarned10=1;
				printf("COPY by gluBuild3DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
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

		jboolean isCopiedArray10 = JNI_FALSE;
		jshort *ptr10 = NULL;
		static int isWarned10 = 0;

		if ( disp__gluBuild3DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr10 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray10);
			if( isCopiedArray10 == JNI_TRUE && isWarned10==0 ) {
				isWarned10=1;
				printf("COPY by gluBuild3DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
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

		jboolean isCopiedArray10 = JNI_FALSE;
		jint *ptr10 = NULL;
		static int isWarned10 = 0;

		if ( disp__gluBuild3DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr10 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray10);
			if( isCopiedArray10 == JNI_TRUE && isWarned10==0 ) {
				isWarned10=1;
				printf("COPY by gluBuild3DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
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

		jboolean isCopiedArray10 = JNI_FALSE;
		jfloat *ptr10 = NULL;
		static int isWarned10 = 0;

		if ( disp__gluBuild3DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr10 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray10);
			if( isCopiedArray10 == JNI_TRUE && isWarned10==0 ) {
				isWarned10=1;
				printf("COPY by gluBuild3DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
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

		jboolean isCopiedArray10 = JNI_FALSE;
		jdouble *ptr10 = NULL;
		static int isWarned10 = 0;

		if ( disp__gluBuild3DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr10 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray10);
			if( isCopiedArray10 == JNI_TRUE && isWarned10==0 ) {
				isWarned10=1;
				printf("COPY by gluBuild3DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
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

		jboolean isCopiedArray10 = JNI_FALSE;
		jboolean *ptr10 = NULL;
		static int isWarned10 = 0;

		if ( disp__gluBuild3DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr10 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray10);
			if( isCopiedArray10 == JNI_TRUE && isWarned10==0 ) {
				isWarned10=1;
				printf("COPY by gluBuild3DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
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

		jboolean isCopiedArray10 = JNI_FALSE;
		jlong *ptr10 = NULL;
		static int isWarned10 = 0;

		if ( disp__gluBuild3DMipmapLevels == NULL ) return 0;

		if(data!=NULL)
		{
			ptr10 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray10);
			if( isCopiedArray10 == JNI_TRUE && isWarned10==0 ) {
				isWarned10=1;
				printf("COPY by gluBuild3DMipmapLevels arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
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

		jboolean isCopiedArray7 = JNI_FALSE;
		jbyte *ptr7 = NULL;
		static int isWarned7 = 0;

		if ( disp__gluBuild3DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr7 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray7);
			if( isCopiedArray7 == JNI_TRUE && isWarned7==0 ) {
				isWarned7=1;
				printf("COPY by gluBuild3DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
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

		jboolean isCopiedArray7 = JNI_FALSE;
		jshort *ptr7 = NULL;
		static int isWarned7 = 0;

		if ( disp__gluBuild3DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr7 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray7);
			if( isCopiedArray7 == JNI_TRUE && isWarned7==0 ) {
				isWarned7=1;
				printf("COPY by gluBuild3DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
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

		jboolean isCopiedArray7 = JNI_FALSE;
		jint *ptr7 = NULL;
		static int isWarned7 = 0;

		if ( disp__gluBuild3DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr7 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray7);
			if( isCopiedArray7 == JNI_TRUE && isWarned7==0 ) {
				isWarned7=1;
				printf("COPY by gluBuild3DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
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

		jboolean isCopiedArray7 = JNI_FALSE;
		jfloat *ptr7 = NULL;
		static int isWarned7 = 0;

		if ( disp__gluBuild3DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr7 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray7);
			if( isCopiedArray7 == JNI_TRUE && isWarned7==0 ) {
				isWarned7=1;
				printf("COPY by gluBuild3DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
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

		jboolean isCopiedArray7 = JNI_FALSE;
		jdouble *ptr7 = NULL;
		static int isWarned7 = 0;

		if ( disp__gluBuild3DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr7 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray7);
			if( isCopiedArray7 == JNI_TRUE && isWarned7==0 ) {
				isWarned7=1;
				printf("COPY by gluBuild3DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
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

		jboolean isCopiedArray7 = JNI_FALSE;
		jboolean *ptr7 = NULL;
		static int isWarned7 = 0;

		if ( disp__gluBuild3DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr7 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray7);
			if( isCopiedArray7 == JNI_TRUE && isWarned7==0 ) {
				isWarned7=1;
				printf("COPY by gluBuild3DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
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

		jboolean isCopiedArray7 = JNI_FALSE;
		jlong *ptr7 = NULL;
		static int isWarned7 = 0;

		if ( disp__gluBuild3DMipmaps == NULL ) return 0;

		if(data!=NULL)
		{
			ptr7 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray7);
			if( isCopiedArray7 == JNI_TRUE && isWarned7==0 ) {
				isWarned7=1;
				printf("COPY by gluBuild3DMipmaps arg: data");
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

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
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

		jboolean isCopiedArray0 = JNI_FALSE;
		jbyte *ptr0 = NULL;
		static int isWarned0 = 0;
		jboolean isCopiedArray1 = JNI_FALSE;
		jbyte *ptr1 = NULL;
		static int isWarned1 = 0;

		if ( disp__gluCheckExtension == NULL ) return 0;

		if(extName!=NULL)
		{
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, extName, &isCopiedArray0);
			if( isCopiedArray0 == JNI_TRUE && isWarned0==0 ) {
				isWarned0=1;
				printf("COPY by gluCheckExtension arg: extName");
			}
		}
		if(extString!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, extString, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluCheckExtension arg: extString");
			}
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
		static int isWarned2 = 0;

		if ( disp__gluGetNurbsProperty == NULL ) return;

		if(data!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluGetNurbsProperty arg: data");
			}
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
	Java_gl4java_GLUFuncJauJNI_gluGetTessProperty (
		JNIEnv *env, jobject obj,
		jlong tess,
		jint which,
		jdoubleArray data)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;
		static int isWarned2 = 0;

		if ( disp__gluGetTessProperty == NULL ) return;

		if(data!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluGetTessProperty arg: data");
			}
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
	Java_gl4java_GLUFuncJauJNI_gluLoadSamplingMatrices (
		JNIEnv *env, jobject obj,
		jlong nurb,
		jfloatArray model,
		jfloatArray perspective,
		jintArray view)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;
		static int isWarned1 = 0;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;
		static int isWarned2 = 0;
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;
		static int isWarned3 = 0;

		if ( disp__gluLoadSamplingMatrices == NULL ) return;

		if(model!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, model, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluLoadSamplingMatrices arg: model");
			}
		}
		if(perspective!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, perspective, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluLoadSamplingMatrices arg: perspective");
			}
		}
		if(view!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, view, &isCopiedArray3);
			if( isCopiedArray3 == JNI_TRUE && isWarned3==0 ) {
				isWarned3=1;
				printf("COPY by gluLoadSamplingMatrices arg: view");
			}
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
		static int isWarned2 = 0;
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;
		static int isWarned4 = 0;

		if ( disp__gluNurbsCurve == NULL ) return;

		if(knots!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, knots, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluNurbsCurve arg: knots");
			}
		}
		if(control!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, control, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluNurbsCurve arg: control");
			}
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
		static int isWarned2 = 0;
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;
		static int isWarned4 = 0;
		jboolean isCopiedArray7 = JNI_FALSE;
		jfloat *ptr7 = NULL;
		static int isWarned7 = 0;

		if ( disp__gluNurbsSurface == NULL ) return;

		if(sKnots!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, sKnots, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluNurbsSurface arg: sKnots");
			}
		}
		if(tKnots!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, tKnots, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluNurbsSurface arg: tKnots");
			}
		}
		if(control!=NULL)
		{
			ptr7 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, control, &isCopiedArray7);
			if( isCopiedArray7 == JNI_TRUE && isWarned7==0 ) {
				isWarned7=1;
				printf("COPY by gluNurbsSurface arg: control");
			}
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
		static int isWarned4 = 0;

		if ( disp__gluPickMatrix == NULL ) return;

		if(viewport!=NULL)
		{
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, viewport, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluPickMatrix arg: viewport");
			}
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

		jboolean isCopiedArray3 = JNI_FALSE;
		jdouble *ptr3 = NULL;
		static int isWarned3 = 0;
		jboolean isCopiedArray4 = JNI_FALSE;
		jdouble *ptr4 = NULL;
		static int isWarned4 = 0;
		jboolean isCopiedArray5 = JNI_FALSE;
		jint *ptr5 = NULL;
		static int isWarned5 = 0;
		jboolean isCopiedArray6 = JNI_FALSE;
		jdouble *ptr6 = NULL;
		static int isWarned6 = 0;
		jboolean isCopiedArray7 = JNI_FALSE;
		jdouble *ptr7 = NULL;
		static int isWarned7 = 0;
		jboolean isCopiedArray8 = JNI_FALSE;
		jdouble *ptr8 = NULL;
		static int isWarned8 = 0;

		if ( disp__gluProject == NULL ) return 0;

		if(model!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, model, &isCopiedArray3);
			if( isCopiedArray3 == JNI_TRUE && isWarned3==0 ) {
				isWarned3=1;
				printf("COPY by gluProject arg: model");
			}
		}
		if(proj!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, proj, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluProject arg: proj");
			}
		}
		if(view!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, view, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluProject arg: view");
			}
		}
		if(winX!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, winX, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluProject arg: winX");
			}
		}
		if(winY!=NULL)
		{
			ptr7 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, winY, &isCopiedArray7);
			if( isCopiedArray7 == JNI_TRUE && isWarned7==0 ) {
				isWarned7=1;
				printf("COPY by gluProject arg: winY");
			}
		}
		if(winZ!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, winZ, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluProject arg: winZ");
			}
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
		static int isWarned2 = 0;

		if ( disp__gluPwlCurve == NULL ) return;

		if(data!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluPwlCurve arg: data");
			}
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

		jboolean isCopiedArray4 = JNI_FALSE;
		jbyte *ptr4 = NULL;
		static int isWarned4 = 0;
		jboolean isCopiedArray8 = JNI_FALSE;
		jbyte *ptr8 = NULL;
		static int isWarned8 = 0;

		if ( disp__gluScaleImage == NULL ) return 0;

		if(dataIn!=NULL)
		{
			ptr4 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, dataIn, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluScaleImage arg: dataIn");
			}
		}
		if(dataOut!=NULL)
		{
			ptr8 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, dataOut, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluScaleImage arg: dataOut");
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

		jboolean isCopiedArray4 = JNI_FALSE;
		jshort *ptr4 = NULL;
		static int isWarned4 = 0;
		jboolean isCopiedArray8 = JNI_FALSE;
		jshort *ptr8 = NULL;
		static int isWarned8 = 0;

		if ( disp__gluScaleImage == NULL ) return 0;

		if(dataIn!=NULL)
		{
			ptr4 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, dataIn, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluScaleImage arg: dataIn");
			}
		}
		if(dataOut!=NULL)
		{
			ptr8 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, dataOut, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluScaleImage arg: dataOut");
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

		jboolean isCopiedArray4 = JNI_FALSE;
		jint *ptr4 = NULL;
		static int isWarned4 = 0;
		jboolean isCopiedArray8 = JNI_FALSE;
		jint *ptr8 = NULL;
		static int isWarned8 = 0;

		if ( disp__gluScaleImage == NULL ) return 0;

		if(dataIn!=NULL)
		{
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, dataIn, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluScaleImage arg: dataIn");
			}
		}
		if(dataOut!=NULL)
		{
			ptr8 = (jint *) (*env)->GetPrimitiveArrayCritical(env, dataOut, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluScaleImage arg: dataOut");
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

		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;
		static int isWarned4 = 0;
		jboolean isCopiedArray8 = JNI_FALSE;
		jfloat *ptr8 = NULL;
		static int isWarned8 = 0;

		if ( disp__gluScaleImage == NULL ) return 0;

		if(dataIn!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, dataIn, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluScaleImage arg: dataIn");
			}
		}
		if(dataOut!=NULL)
		{
			ptr8 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, dataOut, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluScaleImage arg: dataOut");
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

		jboolean isCopiedArray4 = JNI_FALSE;
		jdouble *ptr4 = NULL;
		static int isWarned4 = 0;
		jboolean isCopiedArray8 = JNI_FALSE;
		jdouble *ptr8 = NULL;
		static int isWarned8 = 0;

		if ( disp__gluScaleImage == NULL ) return 0;

		if(dataIn!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, dataIn, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluScaleImage arg: dataIn");
			}
		}
		if(dataOut!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, dataOut, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluScaleImage arg: dataOut");
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

		jboolean isCopiedArray4 = JNI_FALSE;
		jboolean *ptr4 = NULL;
		static int isWarned4 = 0;
		jboolean isCopiedArray8 = JNI_FALSE;
		jboolean *ptr8 = NULL;
		static int isWarned8 = 0;

		if ( disp__gluScaleImage == NULL ) return 0;

		if(dataIn!=NULL)
		{
			ptr4 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, dataIn, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluScaleImage arg: dataIn");
			}
		}
		if(dataOut!=NULL)
		{
			ptr8 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, dataOut, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluScaleImage arg: dataOut");
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

		jboolean isCopiedArray4 = JNI_FALSE;
		jlong *ptr4 = NULL;
		static int isWarned4 = 0;
		jboolean isCopiedArray8 = JNI_FALSE;
		jlong *ptr8 = NULL;
		static int isWarned8 = 0;

		if ( disp__gluScaleImage == NULL ) return 0;

		if(dataIn!=NULL)
		{
			ptr4 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, dataIn, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluScaleImage arg: dataIn");
			}
		}
		if(dataOut!=NULL)
		{
			ptr8 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, dataOut, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluScaleImage arg: dataOut");
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
		static int isWarned1 = 0;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessBeginPolygon arg: data");
			}
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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
		static int isWarned1 = 0;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessBeginPolygon arg: data");
			}
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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
		static int isWarned1 = 0;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessBeginPolygon arg: data");
			}
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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
		static int isWarned1 = 0;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessBeginPolygon arg: data");
			}
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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
		static int isWarned1 = 0;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessBeginPolygon arg: data");
			}
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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
		static int isWarned1 = 0;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessBeginPolygon arg: data");
			}
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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
		static int isWarned1 = 0;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessBeginPolygon arg: data");
			}
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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
		static int isWarned1 = 0;
		jboolean isCopiedArray2 = JNI_FALSE;
		jbyte *ptr2 = NULL;
		static int isWarned2 = 0;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, location, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessVertex arg: location");
			}
		}
		if(data!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluTessVertex arg: data");
			}
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);

		if(location!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  location, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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
		static int isWarned1 = 0;
		jboolean isCopiedArray2 = JNI_FALSE;
		jshort *ptr2 = NULL;
		static int isWarned2 = 0;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, location, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessVertex arg: location");
			}
		}
		if(data!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluTessVertex arg: data");
			}
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);

		if(location!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  location, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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
		static int isWarned1 = 0;
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;
		static int isWarned2 = 0;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, location, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessVertex arg: location");
			}
		}
		if(data!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluTessVertex arg: data");
			}
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);

		if(location!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  location, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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
		static int isWarned1 = 0;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;
		static int isWarned2 = 0;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, location, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessVertex arg: location");
			}
		}
		if(data!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluTessVertex arg: data");
			}
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);

		if(location!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  location, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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
		static int isWarned1 = 0;
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;
		static int isWarned2 = 0;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, location, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessVertex arg: location");
			}
		}
		if(data!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluTessVertex arg: data");
			}
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);

		if(location!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  location, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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
		static int isWarned1 = 0;
		jboolean isCopiedArray2 = JNI_FALSE;
		jboolean *ptr2 = NULL;
		static int isWarned2 = 0;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, location, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessVertex arg: location");
			}
		}
		if(data!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluTessVertex arg: data");
			}
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);

		if(location!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  location, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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
		static int isWarned1 = 0;
		jboolean isCopiedArray2 = JNI_FALSE;
		jlong *ptr2 = NULL;
		static int isWarned2 = 0;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, location, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessVertex arg: location");
			}
		}
		if(data!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluTessVertex arg: data");
			}
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);

		if(location!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  location, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		jboolean isCopiedArray3 = JNI_FALSE;
		jdouble *ptr3 = NULL;
		static int isWarned3 = 0;
		jboolean isCopiedArray4 = JNI_FALSE;
		jdouble *ptr4 = NULL;
		static int isWarned4 = 0;
		jboolean isCopiedArray5 = JNI_FALSE;
		jint *ptr5 = NULL;
		static int isWarned5 = 0;
		jboolean isCopiedArray6 = JNI_FALSE;
		jdouble *ptr6 = NULL;
		static int isWarned6 = 0;
		jboolean isCopiedArray7 = JNI_FALSE;
		jdouble *ptr7 = NULL;
		static int isWarned7 = 0;
		jboolean isCopiedArray8 = JNI_FALSE;
		jdouble *ptr8 = NULL;
		static int isWarned8 = 0;

		if ( disp__gluUnProject == NULL ) return 0;

		if(model!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, model, &isCopiedArray3);
			if( isCopiedArray3 == JNI_TRUE && isWarned3==0 ) {
				isWarned3=1;
				printf("COPY by gluUnProject arg: model");
			}
		}
		if(proj!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, proj, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluUnProject arg: proj");
			}
		}
		if(view!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, view, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluUnProject arg: view");
			}
		}
		if(objX!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objX, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluUnProject arg: objX");
			}
		}
		if(objY!=NULL)
		{
			ptr7 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objY, &isCopiedArray7);
			if( isCopiedArray7 == JNI_TRUE && isWarned7==0 ) {
				isWarned7=1;
				printf("COPY by gluUnProject arg: objY");
			}
		}
		if(objZ!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objZ, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluUnProject arg: objZ");
			}
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

		jboolean isCopiedArray4 = JNI_FALSE;
		jdouble *ptr4 = NULL;
		static int isWarned4 = 0;
		jboolean isCopiedArray5 = JNI_FALSE;
		jdouble *ptr5 = NULL;
		static int isWarned5 = 0;
		jboolean isCopiedArray6 = JNI_FALSE;
		jint *ptr6 = NULL;
		static int isWarned6 = 0;
		jboolean isCopiedArray9 = JNI_FALSE;
		jdouble *ptr9 = NULL;
		static int isWarned9 = 0;
		jboolean isCopiedArray10 = JNI_FALSE;
		jdouble *ptr10 = NULL;
		static int isWarned10 = 0;
		jboolean isCopiedArray11 = JNI_FALSE;
		jdouble *ptr11 = NULL;
		static int isWarned11 = 0;
		jboolean isCopiedArray12 = JNI_FALSE;
		jdouble *ptr12 = NULL;
		static int isWarned12 = 0;

		if ( disp__gluUnProject4 == NULL ) return 0;

		if(model!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, model, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluUnProject4 arg: model");
			}
		}
		if(proj!=NULL)
		{
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, proj, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluUnProject4 arg: proj");
			}
		}
		if(view!=NULL)
		{
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, view, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluUnProject4 arg: view");
			}
		}
		if(objX!=NULL)
		{
			ptr9 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objX, &isCopiedArray9);
			if( isCopiedArray9 == JNI_TRUE && isWarned9==0 ) {
				isWarned9=1;
				printf("COPY by gluUnProject4 arg: objX");
			}
		}
		if(objY!=NULL)
		{
			ptr10 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objY, &isCopiedArray10);
			if( isCopiedArray10 == JNI_TRUE && isWarned10==0 ) {
				isWarned10=1;
				printf("COPY by gluUnProject4 arg: objY");
			}
		}
		if(objZ!=NULL)
		{
			ptr11 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objZ, &isCopiedArray11);
			if( isCopiedArray11 == JNI_TRUE && isWarned11==0 ) {
				isWarned11=1;
				printf("COPY by gluUnProject4 arg: objZ");
			}
		}
		if(objW!=NULL)
		{
			ptr12 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objW, &isCopiedArray12);
			if( isCopiedArray12 == JNI_TRUE && isWarned12==0 ) {
				isWarned12=1;
				printf("COPY by gluUnProject4 arg: objW");
			}
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
