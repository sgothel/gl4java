/**
 * C2J Parser Version 2.2
 * Jausoft - Sven Goethel Software Development
 * Reading from file: glu-proto-auto.orig.h . . .
 * Destination-Class: gl4java_GLUFuncJauJNI ! 
 */

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluLookAt ( GLdouble eyex , GLdouble eyey , GLdouble eyez , GLdouble centerx , GLdouble centery , GLdouble centerz , GLdouble upx , GLdouble upy , GLdouble upz ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluLookAt (
		JNIEnv *env, jobject obj,
		jdouble eyex,
		jdouble eyey,
		jdouble eyez,
		jdouble centerx,
		jdouble centery,
		jdouble centerz,
		jdouble upx,
		jdouble upy,
		jdouble upz)
	{

		if ( disp__gluLookAt == NULL ) return;

		disp__gluLookAt (
			(GLdouble) eyex,
			(GLdouble) eyey,
			(GLdouble) eyez,
			(GLdouble) centerx,
			(GLdouble) centery,
			(GLdouble) centerz,
			(GLdouble) upx,
			(GLdouble) upy,
			(GLdouble) upz
		);

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
   extern void gluPickMatrix ( GLdouble x , GLdouble y , GLdouble width , GLdouble height , GLint * viewport ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluPickMatrix (
		JNIEnv *env, jobject obj,
		jdouble x,
		jdouble y,
		jdouble width,
		jdouble height,
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
			(GLdouble) width,
			(GLdouble) height,
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
   extern GLint gluProject ( GLdouble objx , GLdouble objy , GLdouble objz , const GLdouble modelMatrix [ 16 ] , const GLdouble projMatrix [ 16 ] , const GLint viewport [ 4 ] , GLdouble * winx , GLdouble * winy , GLdouble * winz ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluProject (
		JNIEnv *env, jobject obj,
		jdouble objx,
		jdouble objy,
		jdouble objz,
		jdoubleArray modelMatrix,
		jdoubleArray projMatrix,
		jintArray viewport,
		jdoubleArray winx,
		jdoubleArray winy,
		jdoubleArray winz)
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

		if(modelMatrix!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, modelMatrix, 0);
		}
		if(projMatrix!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, projMatrix, 0);
		}
		if(viewport!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, viewport, 0);
		}
		if(winx!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, winx, &isCopiedArray6);
		}
		if(winy!=NULL)
		{
			ptr7 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, winy, &isCopiedArray7);
		}
		if(winz!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, winz, &isCopiedArray8);
		}
		ret = (jint) disp__gluProject (
			(GLdouble) objx,
			(GLdouble) objy,
			(GLdouble) objz,
			(const GLdouble *) ptr3,
			(const GLdouble *) ptr4,
			(const GLint *) ptr5,
			(GLdouble *) ptr6,
			(GLdouble *) ptr7,
			(GLdouble *) ptr8
		);

		if(modelMatrix!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  modelMatrix, ptr3, JNI_ABORT);
		}
		if(projMatrix!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  projMatrix, ptr4, JNI_ABORT);
		}
		if(viewport!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  viewport, ptr5, JNI_ABORT);
		}
		if(winx!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  winx, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(winy!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  winy, ptr7, (isCopiedArray7 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(winz!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  winz, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluUnProject ( GLdouble winx , GLdouble winy , GLdouble winz , const GLdouble modelMatrix [ 16 ] , const GLdouble projMatrix [ 16 ] , const GLint viewport [ 4 ] , GLdouble * objx , GLdouble * objy , GLdouble * objz ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluUnProject (
		JNIEnv *env, jobject obj,
		jdouble winx,
		jdouble winy,
		jdouble winz,
		jdoubleArray modelMatrix,
		jdoubleArray projMatrix,
		jintArray viewport,
		jdoubleArray objx,
		jdoubleArray objy,
		jdoubleArray objz)
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

		if(modelMatrix!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, modelMatrix, 0);
		}
		if(projMatrix!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, projMatrix, 0);
		}
		if(viewport!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, viewport, 0);
		}
		if(objx!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objx, &isCopiedArray6);
		}
		if(objy!=NULL)
		{
			ptr7 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objy, &isCopiedArray7);
		}
		if(objz!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objz, &isCopiedArray8);
		}
		ret = (jint) disp__gluUnProject (
			(GLdouble) winx,
			(GLdouble) winy,
			(GLdouble) winz,
			(const GLdouble *) ptr3,
			(const GLdouble *) ptr4,
			(const GLint *) ptr5,
			(GLdouble *) ptr6,
			(GLdouble *) ptr7,
			(GLdouble *) ptr8
		);

		if(modelMatrix!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  modelMatrix, ptr3, JNI_ABORT);
		}
		if(projMatrix!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  projMatrix, ptr4, JNI_ABORT);
		}
		if(viewport!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  viewport, ptr5, JNI_ABORT);
		}
		if(objx!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  objx, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(objy!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  objy, ptr7, (isCopiedArray7 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(objz!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  objz, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluScaleImage ( GLenum format , GLsizei widthin , GLsizei heightin , GLenum typein , const char * datain , GLsizei widthout , GLsizei heightout , GLenum typeout , char * dataout ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluScaleImage (
		JNIEnv *env, jobject obj,
		jint format,
		jint widthin,
		jint heightin,
		jint typein,
		jstring datain,
		jint widthout,
		jint heightout,
		jint typeout,
		jbyteArray dataout)
	{
		jint ret;

		char *ptr4 = NULL;
		jboolean isCopiedArray8 = JNI_FALSE;
		jbyte *ptr8 = NULL;

		if ( disp__gluScaleImage == NULL ) return 0;

		ptr4 = jnitoolsGetJavaString(env, datain);
		if(dataout!=NULL)
		{
			ptr8 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, dataout, &isCopiedArray8);
		}
		ret = (jint) disp__gluScaleImage (
			(GLenum) format,
			(GLsizei) widthin,
			(GLsizei) heightin,
			(GLenum) typein,
			(const char *) ptr4,
			(GLsizei) widthout,
			(GLsizei) heightout,
			(GLenum) typeout,
			(char *) ptr8
		);

		free(ptr4);
		if(dataout!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  dataout, ptr8, (isCopiedArray8 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild1DMipmaps ( GLenum target , GLint components , GLint width , GLenum format , GLenum type , const void * data ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild1DMipmaps__IIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint components,
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
			(GLint) components,
			(GLint) width,
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
		jint components,
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
			(GLint) components,
			(GLint) width,
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
		jint components,
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
			(GLint) components,
			(GLint) width,
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
		jint components,
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
			(GLint) components,
			(GLint) width,
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
		jint components,
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
			(GLint) components,
			(GLint) width,
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
		jint components,
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
			(GLint) components,
			(GLint) width,
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
		jint components,
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
			(GLint) components,
			(GLint) width,
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
   extern GLint gluBuild2DMipmaps ( GLenum target , GLint components , GLint width , GLint height , GLenum format , GLenum type , const void * data ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBuild2DMipmaps__IIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint components,
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
			(GLint) components,
			(GLint) width,
			(GLint) height,
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
		jint components,
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
			(GLint) components,
			(GLint) width,
			(GLint) height,
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
		jint components,
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
			(GLint) components,
			(GLint) width,
			(GLint) height,
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
		jint components,
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
			(GLint) components,
			(GLint) width,
			(GLint) height,
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
		jint components,
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
			(GLint) components,
			(GLint) width,
			(GLint) height,
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
		jint components,
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
			(GLint) components,
			(GLint) width,
			(GLint) height,
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
		jint components,
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
			(GLint) components,
			(GLint) width,
			(GLint) height,
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
   extern void gluQuadricDrawStyle ( GLUquadricObj * quadObject , GLenum drawStyle ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluQuadricDrawStyle (
		JNIEnv *env, jobject obj,
		jlong quadObject,
		jint drawStyle)
	{

		if ( disp__gluQuadricDrawStyle == NULL ) return;

		disp__gluQuadricDrawStyle (
			(GLUquadricObj *) (PointerHolder) quadObject,
			(GLenum) drawStyle
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricOrientation ( GLUquadricObj * quadObject , GLenum orientation ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluQuadricOrientation (
		JNIEnv *env, jobject obj,
		jlong quadObject,
		jint orientation)
	{

		if ( disp__gluQuadricOrientation == NULL ) return;

		disp__gluQuadricOrientation (
			(GLUquadricObj *) (PointerHolder) quadObject,
			(GLenum) orientation
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricNormals ( GLUquadricObj * quadObject , GLenum normals ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluQuadricNormals (
		JNIEnv *env, jobject obj,
		jlong quadObject,
		jint normals)
	{

		if ( disp__gluQuadricNormals == NULL ) return;

		disp__gluQuadricNormals (
			(GLUquadricObj *) (PointerHolder) quadObject,
			(GLenum) normals
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricTexture ( GLUquadricObj * quadObject , GLboolean textureCoords ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluQuadricTexture (
		JNIEnv *env, jobject obj,
		jlong quadObject,
		jboolean textureCoords)
	{

		if ( disp__gluQuadricTexture == NULL ) return;

		disp__gluQuadricTexture (
			(GLUquadricObj *) (PointerHolder) quadObject,
			(GLboolean) textureCoords
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluCylinder ( GLUquadricObj * qobj , GLdouble baseRadius , GLdouble topRadius , GLdouble height , GLint slices , GLint stacks ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluCylinder (
		JNIEnv *env, jobject obj,
		jlong qobj,
		jdouble baseRadius,
		jdouble topRadius,
		jdouble height,
		jint slices,
		jint stacks)
	{

		if ( disp__gluCylinder == NULL ) return;

		disp__gluCylinder (
			(GLUquadricObj *) (PointerHolder) qobj,
			(GLdouble) baseRadius,
			(GLdouble) topRadius,
			(GLdouble) height,
			(GLint) slices,
			(GLint) stacks
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluSphere ( GLUquadricObj * qobj , GLdouble radius , GLint slices , GLint stacks ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluSphere (
		JNIEnv *env, jobject obj,
		jlong qobj,
		jdouble radius,
		jint slices,
		jint stacks)
	{

		if ( disp__gluSphere == NULL ) return;

		disp__gluSphere (
			(GLUquadricObj *) (PointerHolder) qobj,
			(GLdouble) radius,
			(GLint) slices,
			(GLint) stacks
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluDisk ( GLUquadricObj * qobj , GLdouble innerRadius , GLdouble outerRadius , GLint slices , GLint loops ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluDisk (
		JNIEnv *env, jobject obj,
		jlong qobj,
		jdouble innerRadius,
		jdouble outerRadius,
		jint slices,
		jint loops)
	{

		if ( disp__gluDisk == NULL ) return;

		disp__gluDisk (
			(GLUquadricObj *) (PointerHolder) qobj,
			(GLdouble) innerRadius,
			(GLdouble) outerRadius,
			(GLint) slices,
			(GLint) loops
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPartialDisk ( GLUquadricObj * qobj , GLdouble innerRadius , GLdouble outerRadius , GLint slices , GLint loops , GLdouble startAngle , GLdouble sweepAngle ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluPartialDisk (
		JNIEnv *env, jobject obj,
		jlong qobj,
		jdouble innerRadius,
		jdouble outerRadius,
		jint slices,
		jint loops,
		jdouble startAngle,
		jdouble sweepAngle)
	{

		if ( disp__gluPartialDisk == NULL ) return;

		disp__gluPartialDisk (
			(GLUquadricObj *) (PointerHolder) qobj,
			(GLdouble) innerRadius,
			(GLdouble) outerRadius,
			(GLint) slices,
			(GLint) loops,
			(GLdouble) startAngle,
			(GLdouble) sweepAngle
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluLoadSamplingMatrices ( GLUnurbsObj * nobj , const GLfloat modelMatrix [ 16 ] , const GLfloat projMatrix [ 16 ] , const GLint viewport [ 4 ] ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluLoadSamplingMatrices (
		JNIEnv *env, jobject obj,
		jlong nobj,
		jfloatArray modelMatrix,
		jfloatArray projMatrix,
		jintArray viewport)
	{
		jfloat *ptr1 = NULL;
		jfloat *ptr2 = NULL;
		jint *ptr3 = NULL;

		if ( disp__gluLoadSamplingMatrices == NULL ) return;

		if(modelMatrix!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, modelMatrix, 0);
		}
		if(projMatrix!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, projMatrix, 0);
		}
		if(viewport!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, viewport, 0);
		}
		disp__gluLoadSamplingMatrices (
			(GLUnurbsObj *) (PointerHolder) nobj,
			(const GLfloat *) ptr1,
			(const GLfloat *) ptr2,
			(const GLint *) ptr3
		);

		if(modelMatrix!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  modelMatrix, ptr1, JNI_ABORT);
		}
		if(projMatrix!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  projMatrix, ptr2, JNI_ABORT);
		}
		if(viewport!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  viewport, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNurbsProperty ( GLUnurbsObj * nobj , GLenum property , GLfloat value ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluNurbsProperty (
		JNIEnv *env, jobject obj,
		jlong nobj,
		jint property,
		jfloat value)
	{

		if ( disp__gluNurbsProperty == NULL ) return;

		disp__gluNurbsProperty (
			(GLUnurbsObj *) (PointerHolder) nobj,
			(GLenum) property,
			(GLfloat) value
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluGetNurbsProperty ( GLUnurbsObj * nobj , GLenum property , GLfloat * value ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluGetNurbsProperty (
		JNIEnv *env, jobject obj,
		jlong nobj,
		jint property,
		jfloatArray value)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__gluGetNurbsProperty == NULL ) return;

		if(value!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, value, &isCopiedArray2);
		}
		disp__gluGetNurbsProperty (
			(GLUnurbsObj *) (PointerHolder) nobj,
			(GLenum) property,
			(GLfloat *) ptr2
		);

		if(value!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  value, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginCurve ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBeginCurve (
		JNIEnv *env, jobject obj,
		jlong nobj)
	{

		if ( disp__gluBeginCurve == NULL ) return;

		disp__gluBeginCurve (
			(GLUnurbsObj *) (PointerHolder) nobj
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndCurve ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluEndCurve (
		JNIEnv *env, jobject obj,
		jlong nobj)
	{

		if ( disp__gluEndCurve == NULL ) return;

		disp__gluEndCurve (
			(GLUnurbsObj *) (PointerHolder) nobj
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNurbsCurve ( GLUnurbsObj * nobj , GLint nknots , GLfloat * knot , GLint stride , GLfloat * ctlarray , GLint order , GLenum type ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluNurbsCurve (
		JNIEnv *env, jobject obj,
		jlong nobj,
		jint nknots,
		jfloatArray knot,
		jint stride,
		jfloatArray ctlarray,
		jint order,
		jint type)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;

		if ( disp__gluNurbsCurve == NULL ) return;

		if(knot!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, knot, &isCopiedArray2);
		}
		if(ctlarray!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, ctlarray, &isCopiedArray4);
		}
		disp__gluNurbsCurve (
			(GLUnurbsObj *) (PointerHolder) nobj,
			(GLint) nknots,
			(GLfloat *) ptr2,
			(GLint) stride,
			(GLfloat *) ptr4,
			(GLint) order,
			(GLenum) type
		);

		if(knot!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  knot, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(ctlarray!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ctlarray, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginSurface ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBeginSurface (
		JNIEnv *env, jobject obj,
		jlong nobj)
	{

		if ( disp__gluBeginSurface == NULL ) return;

		disp__gluBeginSurface (
			(GLUnurbsObj *) (PointerHolder) nobj
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndSurface ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluEndSurface (
		JNIEnv *env, jobject obj,
		jlong nobj)
	{

		if ( disp__gluEndSurface == NULL ) return;

		disp__gluEndSurface (
			(GLUnurbsObj *) (PointerHolder) nobj
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNurbsSurface ( GLUnurbsObj * nobj , GLint sknot_count , GLfloat * sknot , GLint tknot_count , GLfloat * tknot , GLint s_stride , GLint t_stride , GLfloat * ctlarray , GLint sorder , GLint torder , GLenum type ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluNurbsSurface (
		JNIEnv *env, jobject obj,
		jlong nobj,
		jint sknot_count,
		jfloatArray sknot,
		jint tknot_count,
		jfloatArray tknot,
		jint s_stride,
		jint t_stride,
		jfloatArray ctlarray,
		jint sorder,
		jint torder,
		jint type)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;
		jboolean isCopiedArray7 = JNI_FALSE;
		jfloat *ptr7 = NULL;

		if ( disp__gluNurbsSurface == NULL ) return;

		if(sknot!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, sknot, &isCopiedArray2);
		}
		if(tknot!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, tknot, &isCopiedArray4);
		}
		if(ctlarray!=NULL)
		{
			ptr7 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, ctlarray, &isCopiedArray7);
		}
		disp__gluNurbsSurface (
			(GLUnurbsObj *) (PointerHolder) nobj,
			(GLint) sknot_count,
			(GLfloat *) ptr2,
			(GLint) tknot_count,
			(GLfloat *) ptr4,
			(GLint) s_stride,
			(GLint) t_stride,
			(GLfloat *) ptr7,
			(GLint) sorder,
			(GLint) torder,
			(GLenum) type
		);

		if(sknot!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  sknot, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(tknot!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  tknot, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(ctlarray!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ctlarray, ptr7, (isCopiedArray7 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginTrim ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBeginTrim (
		JNIEnv *env, jobject obj,
		jlong nobj)
	{

		if ( disp__gluBeginTrim == NULL ) return;

		disp__gluBeginTrim (
			(GLUnurbsObj *) (PointerHolder) nobj
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndTrim ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluEndTrim (
		JNIEnv *env, jobject obj,
		jlong nobj)
	{

		if ( disp__gluEndTrim == NULL ) return;

		disp__gluEndTrim (
			(GLUnurbsObj *) (PointerHolder) nobj
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPwlCurve ( GLUnurbsObj * nobj , GLint count , GLfloat * array , GLint stride , GLenum type ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluPwlCurve (
		JNIEnv *env, jobject obj,
		jlong nobj,
		jint count,
		jfloatArray array,
		jint stride,
		jint type)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__gluPwlCurve == NULL ) return;

		if(array!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, array, &isCopiedArray2);
		}
		disp__gluPwlCurve (
			(GLUnurbsObj *) (PointerHolder) nobj,
			(GLint) count,
			(GLfloat *) ptr2,
			(GLint) stride,
			(GLenum) type
		);

		if(array!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  array, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessBeginPolygon ( GLUtesselator * tobj , void * polygon_data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3B (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jbyteArray polygon_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jbyte *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(polygon_data!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, polygon_data, &isCopiedArray1);
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tobj,
			(void *) ptr1
		);

		if(polygon_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  polygon_data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3S (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jshortArray polygon_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jshort *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(polygon_data!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, polygon_data, &isCopiedArray1);
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tobj,
			(void *) ptr1
		);

		if(polygon_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  polygon_data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3I (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jintArray polygon_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(polygon_data!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, polygon_data, &isCopiedArray1);
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tobj,
			(void *) ptr1
		);

		if(polygon_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  polygon_data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3F (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jfloatArray polygon_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(polygon_data!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, polygon_data, &isCopiedArray1);
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tobj,
			(void *) ptr1
		);

		if(polygon_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  polygon_data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3D (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jdoubleArray polygon_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(polygon_data!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, polygon_data, &isCopiedArray1);
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tobj,
			(void *) ptr1
		);

		if(polygon_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  polygon_data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3Z (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jbooleanArray polygon_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jboolean *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(polygon_data!=NULL)
		{
			ptr1 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, polygon_data, &isCopiedArray1);
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tobj,
			(void *) ptr1
		);

		if(polygon_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  polygon_data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3J (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jlongArray polygon_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jlong *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(polygon_data!=NULL)
		{
			ptr1 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, polygon_data, &isCopiedArray1);
		}
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tobj,
			(void *) ptr1
		);

		if(polygon_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  polygon_data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessBeginContour ( GLUtesselator * tobj ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginContour (
		JNIEnv *env, jobject obj,
		jlong tobj)
	{

		if ( disp__gluTessBeginContour == NULL ) return;

		disp__gluTessBeginContour (
			(GLUtesselator *) (PointerHolder) tobj
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessVertex ( GLUtesselator * tobj , GLdouble coords [ 3 ] , void * vertex_data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3B (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jdoubleArray coords,
		jbyteArray vertex_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jbyte *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(coords!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, coords, &isCopiedArray1);
		}
		if(vertex_data!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, vertex_data, &isCopiedArray2);
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tobj,
			(GLdouble *) ptr1,
			(void *) ptr2
		);

		if(coords!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  coords, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(vertex_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  vertex_data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3S (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jdoubleArray coords,
		jshortArray vertex_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jshort *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(coords!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, coords, &isCopiedArray1);
		}
		if(vertex_data!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, vertex_data, &isCopiedArray2);
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tobj,
			(GLdouble *) ptr1,
			(void *) ptr2
		);

		if(coords!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  coords, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(vertex_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  vertex_data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3I (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jdoubleArray coords,
		jintArray vertex_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(coords!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, coords, &isCopiedArray1);
		}
		if(vertex_data!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, vertex_data, &isCopiedArray2);
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tobj,
			(GLdouble *) ptr1,
			(void *) ptr2
		);

		if(coords!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  coords, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(vertex_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  vertex_data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3F (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jdoubleArray coords,
		jfloatArray vertex_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(coords!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, coords, &isCopiedArray1);
		}
		if(vertex_data!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, vertex_data, &isCopiedArray2);
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tobj,
			(GLdouble *) ptr1,
			(void *) ptr2
		);

		if(coords!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  coords, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(vertex_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  vertex_data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3D (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jdoubleArray coords,
		jdoubleArray vertex_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(coords!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, coords, &isCopiedArray1);
		}
		if(vertex_data!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, vertex_data, &isCopiedArray2);
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tobj,
			(GLdouble *) ptr1,
			(void *) ptr2
		);

		if(coords!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  coords, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(vertex_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  vertex_data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3Z (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jdoubleArray coords,
		jbooleanArray vertex_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jboolean *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(coords!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, coords, &isCopiedArray1);
		}
		if(vertex_data!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, vertex_data, &isCopiedArray2);
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tobj,
			(GLdouble *) ptr1,
			(void *) ptr2
		);

		if(coords!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  coords, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(vertex_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  vertex_data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3J (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jdoubleArray coords,
		jlongArray vertex_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jlong *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(coords!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, coords, &isCopiedArray1);
		}
		if(vertex_data!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, vertex_data, &isCopiedArray2);
		}
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tobj,
			(GLdouble *) ptr1,
			(void *) ptr2
		);

		if(coords!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  coords, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(vertex_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  vertex_data, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessEndContour ( GLUtesselator * tobj ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessEndContour (
		JNIEnv *env, jobject obj,
		jlong tobj)
	{

		if ( disp__gluTessEndContour == NULL ) return;

		disp__gluTessEndContour (
			(GLUtesselator *) (PointerHolder) tobj
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessEndPolygon ( GLUtesselator * tobj ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessEndPolygon (
		JNIEnv *env, jobject obj,
		jlong tobj)
	{

		if ( disp__gluTessEndPolygon == NULL ) return;

		disp__gluTessEndPolygon (
			(GLUtesselator *) (PointerHolder) tobj
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessProperty ( GLUtesselator * tobj , GLenum which , GLdouble value ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessProperty (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jint which,
		jdouble value)
	{

		if ( disp__gluTessProperty == NULL ) return;

		disp__gluTessProperty (
			(GLUtesselator *) (PointerHolder) tobj,
			(GLenum) which,
			(GLdouble) value
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessNormal ( GLUtesselator * tobj , GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessNormal (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jdouble x,
		jdouble y,
		jdouble z)
	{

		if ( disp__gluTessNormal == NULL ) return;

		disp__gluTessNormal (
			(GLUtesselator *) (PointerHolder) tobj,
			(GLdouble) x,
			(GLdouble) y,
			(GLdouble) z
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluGetTessProperty ( GLUtesselator * tobj , GLenum which , GLdouble * value ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluGetTessProperty (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jint which,
		jdoubleArray value)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;

		if ( disp__gluGetTessProperty == NULL ) return;

		if(value!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, value, &isCopiedArray2);
		}
		disp__gluGetTessProperty (
			(GLUtesselator *) (PointerHolder) tobj,
			(GLenum) which,
			(GLdouble *) ptr2
		);

		if(value!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  value, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginPolygon ( GLUtesselator * tobj ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluBeginPolygon (
		JNIEnv *env, jobject obj,
		jlong tobj)
	{

		if ( disp__gluBeginPolygon == NULL ) return;

		disp__gluBeginPolygon (
			(GLUtesselator *) (PointerHolder) tobj
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNextContour ( GLUtesselator * tobj , GLenum type ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluNextContour (
		JNIEnv *env, jobject obj,
		jlong tobj,
		jint type)
	{

		if ( disp__gluNextContour == NULL ) return;

		disp__gluNextContour (
			(GLUtesselator *) (PointerHolder) tobj,
			(GLenum) type
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndPolygon ( GLUtesselator * tobj ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluEndPolygon (
		JNIEnv *env, jobject obj,
		jlong tobj)
	{

		if ( disp__gluEndPolygon == NULL ) return;

		disp__gluEndPolygon (
			(GLUtesselator *) (PointerHolder) tobj
		);

	}

/* C2J Parser Version 2.2:  Java program parsed successfully. */ 
