/**
 * C2J Parser Version 1.4 Beta
 * Jausoft - Sven Goethel Software Development
 * Reading from file: glu-proto-auto.orig . . .
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

		gluLookAt (
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

		gluOrtho2D (
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

		gluPerspective (
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
		static int isWarned4 = 0;

		if(viewport!=NULL)
		{
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, viewport, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluPickMatrix arg: viewport");
			}
		}
		gluPickMatrix (
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

		if(modelMatrix!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, modelMatrix, &isCopiedArray3);
			if( isCopiedArray3 == JNI_TRUE && isWarned3==0 ) {
				isWarned3=1;
				printf("COPY by gluProject arg: modelMatrix");
			}
		}
		if(projMatrix!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, projMatrix, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluProject arg: projMatrix");
			}
		}
		if(viewport!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, viewport, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluProject arg: viewport");
			}
		}
		if(winx!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, winx, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluProject arg: winx");
			}
		}
		if(winy!=NULL)
		{
			ptr7 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, winy, &isCopiedArray7);
			if( isCopiedArray7 == JNI_TRUE && isWarned7==0 ) {
				isWarned7=1;
				printf("COPY by gluProject arg: winy");
			}
		}
		if(winz!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, winz, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluProject arg: winz");
			}
		}
		ret = (jint) gluProject (
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

		if(modelMatrix!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, modelMatrix, &isCopiedArray3);
			if( isCopiedArray3 == JNI_TRUE && isWarned3==0 ) {
				isWarned3=1;
				printf("COPY by gluUnProject arg: modelMatrix");
			}
		}
		if(projMatrix!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, projMatrix, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluUnProject arg: projMatrix");
			}
		}
		if(viewport!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, viewport, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluUnProject arg: viewport");
			}
		}
		if(objx!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objx, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluUnProject arg: objx");
			}
		}
		if(objy!=NULL)
		{
			ptr7 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objy, &isCopiedArray7);
			if( isCopiedArray7 == JNI_TRUE && isWarned7==0 ) {
				isWarned7=1;
				printf("COPY by gluUnProject arg: objy");
			}
		}
		if(objz!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, objz, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluUnProject arg: objz");
			}
		}
		ret = (jint) gluUnProject (
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
		jbyteArray datain,
		jint widthout,
		jint heightout,
		jint typeout,
		jbyteArray dataout)
	{
		jint ret;

		jboolean isCopiedArray4 = JNI_FALSE;
		jbyte *ptr4 = NULL;
		static int isWarned4 = 0;
		jboolean isCopiedArray8 = JNI_FALSE;
		jbyte *ptr8 = NULL;
		static int isWarned8 = 0;

		if(datain!=NULL)
		{
			ptr4 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, datain, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluScaleImage arg: datain");
			}
		}
		if(dataout!=NULL)
		{
			ptr8 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, dataout, &isCopiedArray8);
			if( isCopiedArray8 == JNI_TRUE && isWarned8==0 ) {
				isWarned8=1;
				printf("COPY by gluScaleImage arg: dataout");
			}
		}
		ret = (jint) gluScaleImage (
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

		if(datain!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  datain, ptr4, JNI_ABORT);
		}
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

		jboolean isCopiedArray5 = JNI_FALSE;
		jbyte *ptr5 = NULL;
		static int isWarned5 = 0;

		if(data!=NULL)
		{
			ptr5 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluBuild1DMipmaps arg: data");
			}
		}
		ret = (jint) gluBuild1DMipmaps (
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

		jboolean isCopiedArray5 = JNI_FALSE;
		jshort *ptr5 = NULL;
		static int isWarned5 = 0;

		if(data!=NULL)
		{
			ptr5 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluBuild1DMipmaps arg: data");
			}
		}
		ret = (jint) gluBuild1DMipmaps (
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

		jboolean isCopiedArray5 = JNI_FALSE;
		jint *ptr5 = NULL;
		static int isWarned5 = 0;

		if(data!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluBuild1DMipmaps arg: data");
			}
		}
		ret = (jint) gluBuild1DMipmaps (
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

		jboolean isCopiedArray5 = JNI_FALSE;
		jfloat *ptr5 = NULL;
		static int isWarned5 = 0;

		if(data!=NULL)
		{
			ptr5 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluBuild1DMipmaps arg: data");
			}
		}
		ret = (jint) gluBuild1DMipmaps (
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

		jboolean isCopiedArray5 = JNI_FALSE;
		jdouble *ptr5 = NULL;
		static int isWarned5 = 0;

		if(data!=NULL)
		{
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluBuild1DMipmaps arg: data");
			}
		}
		ret = (jint) gluBuild1DMipmaps (
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

		jboolean isCopiedArray5 = JNI_FALSE;
		jboolean *ptr5 = NULL;
		static int isWarned5 = 0;

		if(data!=NULL)
		{
			ptr5 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluBuild1DMipmaps arg: data");
			}
		}
		ret = (jint) gluBuild1DMipmaps (
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

		jboolean isCopiedArray5 = JNI_FALSE;
		jlong *ptr5 = NULL;
		static int isWarned5 = 0;

		if(data!=NULL)
		{
			ptr5 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray5);
			if( isCopiedArray5 == JNI_TRUE && isWarned5==0 ) {
				isWarned5=1;
				printf("COPY by gluBuild1DMipmaps arg: data");
			}
		}
		ret = (jint) gluBuild1DMipmaps (
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

		jboolean isCopiedArray6 = JNI_FALSE;
		jbyte *ptr6 = NULL;
		static int isWarned6 = 0;

		if(data!=NULL)
		{
			ptr6 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluBuild2DMipmaps arg: data");
			}
		}
		ret = (jint) gluBuild2DMipmaps (
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

		jboolean isCopiedArray6 = JNI_FALSE;
		jshort *ptr6 = NULL;
		static int isWarned6 = 0;

		if(data!=NULL)
		{
			ptr6 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluBuild2DMipmaps arg: data");
			}
		}
		ret = (jint) gluBuild2DMipmaps (
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

		jboolean isCopiedArray6 = JNI_FALSE;
		jint *ptr6 = NULL;
		static int isWarned6 = 0;

		if(data!=NULL)
		{
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluBuild2DMipmaps arg: data");
			}
		}
		ret = (jint) gluBuild2DMipmaps (
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

		jboolean isCopiedArray6 = JNI_FALSE;
		jfloat *ptr6 = NULL;
		static int isWarned6 = 0;

		if(data!=NULL)
		{
			ptr6 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluBuild2DMipmaps arg: data");
			}
		}
		ret = (jint) gluBuild2DMipmaps (
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

		jboolean isCopiedArray6 = JNI_FALSE;
		jdouble *ptr6 = NULL;
		static int isWarned6 = 0;

		if(data!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluBuild2DMipmaps arg: data");
			}
		}
		ret = (jint) gluBuild2DMipmaps (
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

		jboolean isCopiedArray6 = JNI_FALSE;
		jboolean *ptr6 = NULL;
		static int isWarned6 = 0;

		if(data!=NULL)
		{
			ptr6 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluBuild2DMipmaps arg: data");
			}
		}
		ret = (jint) gluBuild2DMipmaps (
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

		jboolean isCopiedArray6 = JNI_FALSE;
		jlong *ptr6 = NULL;
		static int isWarned6 = 0;

		if(data!=NULL)
		{
			ptr6 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray6);
			if( isCopiedArray6 == JNI_TRUE && isWarned6==0 ) {
				isWarned6=1;
				printf("COPY by gluBuild2DMipmaps arg: data");
			}
		}
		ret = (jint) gluBuild2DMipmaps (
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
   extern GLUquadricObj * gluNewQuadric ( void ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluNewQuadric (
		JNIEnv *env, jobject obj)
	{
		jint ret;


		ret = (jint) gluNewQuadric (
		);

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
		jint quadObject,
		jint drawStyle)
	{

		gluQuadricDrawStyle (
			(GLUquadricObj *) quadObject,
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
		jint quadObject,
		jint orientation)
	{

		gluQuadricOrientation (
			(GLUquadricObj *) quadObject,
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
		jint quadObject,
		jint normals)
	{

		gluQuadricNormals (
			(GLUquadricObj *) quadObject,
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
		jint quadObject,
		jboolean textureCoords)
	{

		gluQuadricTexture (
			(GLUquadricObj *) quadObject,
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
		jint qobj,
		jdouble baseRadius,
		jdouble topRadius,
		jdouble height,
		jint slices,
		jint stacks)
	{

		gluCylinder (
			(GLUquadricObj *) qobj,
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
		jint qobj,
		jdouble radius,
		jint slices,
		jint stacks)
	{

		gluSphere (
			(GLUquadricObj *) qobj,
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
		jint qobj,
		jdouble innerRadius,
		jdouble outerRadius,
		jint slices,
		jint loops)
	{

		gluDisk (
			(GLUquadricObj *) qobj,
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
		jint qobj,
		jdouble innerRadius,
		jdouble outerRadius,
		jint slices,
		jint loops,
		jdouble startAngle,
		jdouble sweepAngle)
	{

		gluPartialDisk (
			(GLUquadricObj *) qobj,
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
   extern GLUnurbsObj * gluNewNurbsRenderer ( void ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluNewNurbsRenderer (
		JNIEnv *env, jobject obj)
	{
		jint ret;


		ret = (jint) gluNewNurbsRenderer (
		);

		return ret;
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
		jint nobj,
		jfloatArray modelMatrix,
		jfloatArray projMatrix,
		jintArray viewport)
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

		if(modelMatrix!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, modelMatrix, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluLoadSamplingMatrices arg: modelMatrix");
			}
		}
		if(projMatrix!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, projMatrix, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluLoadSamplingMatrices arg: projMatrix");
			}
		}
		if(viewport!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, viewport, &isCopiedArray3);
			if( isCopiedArray3 == JNI_TRUE && isWarned3==0 ) {
				isWarned3=1;
				printf("COPY by gluLoadSamplingMatrices arg: viewport");
			}
		}
		gluLoadSamplingMatrices (
			(GLUnurbsObj *) nobj,
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
		jint nobj,
		jint property,
		jfloat value)
	{

		gluNurbsProperty (
			(GLUnurbsObj *) nobj,
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
		jint nobj,
		jint property,
		jfloatArray value)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;
		static int isWarned2 = 0;

		if(value!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, value, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluGetNurbsProperty arg: value");
			}
		}
		gluGetNurbsProperty (
			(GLUnurbsObj *) nobj,
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
		jint nobj)
	{

		gluBeginCurve (
			(GLUnurbsObj *) nobj
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
		jint nobj)
	{

		gluEndCurve (
			(GLUnurbsObj *) nobj
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
		jint nobj,
		jint nknots,
		jfloatArray knot,
		jint stride,
		jfloatArray ctlarray,
		jint order,
		jint type)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;
		static int isWarned2 = 0;
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;
		static int isWarned4 = 0;

		if(knot!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, knot, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluNurbsCurve arg: knot");
			}
		}
		if(ctlarray!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, ctlarray, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluNurbsCurve arg: ctlarray");
			}
		}
		gluNurbsCurve (
			(GLUnurbsObj *) nobj,
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
		jint nobj)
	{

		gluBeginSurface (
			(GLUnurbsObj *) nobj
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
		jint nobj)
	{

		gluEndSurface (
			(GLUnurbsObj *) nobj
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
		jint nobj,
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
		static int isWarned2 = 0;
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;
		static int isWarned4 = 0;
		jboolean isCopiedArray7 = JNI_FALSE;
		jfloat *ptr7 = NULL;
		static int isWarned7 = 0;

		if(sknot!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, sknot, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluNurbsSurface arg: sknot");
			}
		}
		if(tknot!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, tknot, &isCopiedArray4);
			if( isCopiedArray4 == JNI_TRUE && isWarned4==0 ) {
				isWarned4=1;
				printf("COPY by gluNurbsSurface arg: tknot");
			}
		}
		if(ctlarray!=NULL)
		{
			ptr7 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, ctlarray, &isCopiedArray7);
			if( isCopiedArray7 == JNI_TRUE && isWarned7==0 ) {
				isWarned7=1;
				printf("COPY by gluNurbsSurface arg: ctlarray");
			}
		}
		gluNurbsSurface (
			(GLUnurbsObj *) nobj,
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
		jint nobj)
	{

		gluBeginTrim (
			(GLUnurbsObj *) nobj
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
		jint nobj)
	{

		gluEndTrim (
			(GLUnurbsObj *) nobj
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
		jint nobj,
		jint count,
		jfloatArray array,
		jint stride,
		jint type)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;
		static int isWarned2 = 0;

		if(array!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, array, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluPwlCurve arg: array");
			}
		}
		gluPwlCurve (
			(GLUnurbsObj *) nobj,
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
   extern GLUtesselator * gluNewTess ( void ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLUFuncJauJNI_gluNewTess (
		JNIEnv *env, jobject obj)
	{
		jint ret;


		ret = (jint) gluNewTess (
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessBeginPolygon ( GLUtesselator * tobj , void * polygon_data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__I_3B (
		JNIEnv *env, jobject obj,
		jint tobj,
		jbyteArray polygon_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jbyte *ptr1 = NULL;
		static int isWarned1 = 0;

		if(polygon_data!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, polygon_data, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessBeginPolygon arg: polygon_data");
			}
		}
		gluTessBeginPolygon (
			(GLUtesselator *) tobj,
			(void *) ptr1
		);

		if(polygon_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  polygon_data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__I_3S (
		JNIEnv *env, jobject obj,
		jint tobj,
		jshortArray polygon_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jshort *ptr1 = NULL;
		static int isWarned1 = 0;

		if(polygon_data!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, polygon_data, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessBeginPolygon arg: polygon_data");
			}
		}
		gluTessBeginPolygon (
			(GLUtesselator *) tobj,
			(void *) ptr1
		);

		if(polygon_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  polygon_data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__I_3I (
		JNIEnv *env, jobject obj,
		jint tobj,
		jintArray polygon_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;
		static int isWarned1 = 0;

		if(polygon_data!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, polygon_data, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessBeginPolygon arg: polygon_data");
			}
		}
		gluTessBeginPolygon (
			(GLUtesselator *) tobj,
			(void *) ptr1
		);

		if(polygon_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  polygon_data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__I_3F (
		JNIEnv *env, jobject obj,
		jint tobj,
		jfloatArray polygon_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;
		static int isWarned1 = 0;

		if(polygon_data!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, polygon_data, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessBeginPolygon arg: polygon_data");
			}
		}
		gluTessBeginPolygon (
			(GLUtesselator *) tobj,
			(void *) ptr1
		);

		if(polygon_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  polygon_data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__I_3D (
		JNIEnv *env, jobject obj,
		jint tobj,
		jdoubleArray polygon_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		static int isWarned1 = 0;

		if(polygon_data!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, polygon_data, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessBeginPolygon arg: polygon_data");
			}
		}
		gluTessBeginPolygon (
			(GLUtesselator *) tobj,
			(void *) ptr1
		);

		if(polygon_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  polygon_data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__I_3Z (
		JNIEnv *env, jobject obj,
		jint tobj,
		jbooleanArray polygon_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jboolean *ptr1 = NULL;
		static int isWarned1 = 0;

		if(polygon_data!=NULL)
		{
			ptr1 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, polygon_data, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessBeginPolygon arg: polygon_data");
			}
		}
		gluTessBeginPolygon (
			(GLUtesselator *) tobj,
			(void *) ptr1
		);

		if(polygon_data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  polygon_data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__I_3J (
		JNIEnv *env, jobject obj,
		jint tobj,
		jlongArray polygon_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jlong *ptr1 = NULL;
		static int isWarned1 = 0;

		if(polygon_data!=NULL)
		{
			ptr1 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, polygon_data, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessBeginPolygon arg: polygon_data");
			}
		}
		gluTessBeginPolygon (
			(GLUtesselator *) tobj,
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
		jint tobj)
	{

		gluTessBeginContour (
			(GLUtesselator *) tobj
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessVertex ( GLUtesselator * tobj , GLdouble coords [ 3 ] , void * vertex_data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__I_3D_3B (
		JNIEnv *env, jobject obj,
		jint tobj,
		jdoubleArray coords,
		jbyteArray vertex_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		static int isWarned1 = 0;
		jboolean isCopiedArray2 = JNI_FALSE;
		jbyte *ptr2 = NULL;
		static int isWarned2 = 0;

		if(coords!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, coords, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessVertex arg: coords");
			}
		}
		if(vertex_data!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, vertex_data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluTessVertex arg: vertex_data");
			}
		}
		gluTessVertex (
			(GLUtesselator *) tobj,
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
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__I_3D_3S (
		JNIEnv *env, jobject obj,
		jint tobj,
		jdoubleArray coords,
		jshortArray vertex_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		static int isWarned1 = 0;
		jboolean isCopiedArray2 = JNI_FALSE;
		jshort *ptr2 = NULL;
		static int isWarned2 = 0;

		if(coords!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, coords, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessVertex arg: coords");
			}
		}
		if(vertex_data!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, vertex_data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluTessVertex arg: vertex_data");
			}
		}
		gluTessVertex (
			(GLUtesselator *) tobj,
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
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__I_3D_3I (
		JNIEnv *env, jobject obj,
		jint tobj,
		jdoubleArray coords,
		jintArray vertex_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		static int isWarned1 = 0;
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;
		static int isWarned2 = 0;

		if(coords!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, coords, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessVertex arg: coords");
			}
		}
		if(vertex_data!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, vertex_data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluTessVertex arg: vertex_data");
			}
		}
		gluTessVertex (
			(GLUtesselator *) tobj,
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
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__I_3D_3F (
		JNIEnv *env, jobject obj,
		jint tobj,
		jdoubleArray coords,
		jfloatArray vertex_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		static int isWarned1 = 0;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;
		static int isWarned2 = 0;

		if(coords!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, coords, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessVertex arg: coords");
			}
		}
		if(vertex_data!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, vertex_data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluTessVertex arg: vertex_data");
			}
		}
		gluTessVertex (
			(GLUtesselator *) tobj,
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
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__I_3D_3D (
		JNIEnv *env, jobject obj,
		jint tobj,
		jdoubleArray coords,
		jdoubleArray vertex_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		static int isWarned1 = 0;
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;
		static int isWarned2 = 0;

		if(coords!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, coords, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessVertex arg: coords");
			}
		}
		if(vertex_data!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, vertex_data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluTessVertex arg: vertex_data");
			}
		}
		gluTessVertex (
			(GLUtesselator *) tobj,
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
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__I_3D_3Z (
		JNIEnv *env, jobject obj,
		jint tobj,
		jdoubleArray coords,
		jbooleanArray vertex_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		static int isWarned1 = 0;
		jboolean isCopiedArray2 = JNI_FALSE;
		jboolean *ptr2 = NULL;
		static int isWarned2 = 0;

		if(coords!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, coords, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessVertex arg: coords");
			}
		}
		if(vertex_data!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, vertex_data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluTessVertex arg: vertex_data");
			}
		}
		gluTessVertex (
			(GLUtesselator *) tobj,
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
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__I_3D_3J (
		JNIEnv *env, jobject obj,
		jint tobj,
		jdoubleArray coords,
		jlongArray vertex_data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;
		static int isWarned1 = 0;
		jboolean isCopiedArray2 = JNI_FALSE;
		jlong *ptr2 = NULL;
		static int isWarned2 = 0;

		if(coords!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, coords, &isCopiedArray1);
			if( isCopiedArray1 == JNI_TRUE && isWarned1==0 ) {
				isWarned1=1;
				printf("COPY by gluTessVertex arg: coords");
			}
		}
		if(vertex_data!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, vertex_data, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluTessVertex arg: vertex_data");
			}
		}
		gluTessVertex (
			(GLUtesselator *) tobj,
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
		jint tobj)
	{

		gluTessEndContour (
			(GLUtesselator *) tobj
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
		jint tobj)
	{

		gluTessEndPolygon (
			(GLUtesselator *) tobj
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
		jint tobj,
		jint which,
		jdouble value)
	{

		gluTessProperty (
			(GLUtesselator *) tobj,
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
		jint tobj,
		jdouble x,
		jdouble y,
		jdouble z)
	{

		gluTessNormal (
			(GLUtesselator *) tobj,
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
		jint tobj,
		jint which,
		jdoubleArray value)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;
		static int isWarned2 = 0;

		if(value!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, value, &isCopiedArray2);
			if( isCopiedArray2 == JNI_TRUE && isWarned2==0 ) {
				isWarned2=1;
				printf("COPY by gluGetTessProperty arg: value");
			}
		}
		gluGetTessProperty (
			(GLUtesselator *) tobj,
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
		jint tobj)
	{

		gluBeginPolygon (
			(GLUtesselator *) tobj
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
		jint tobj,
		jint type)
	{

		gluNextContour (
			(GLUtesselator *) tobj,
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
		jint tobj)
	{

		gluEndPolygon (
			(GLUtesselator *) tobj
		);

	}

/* C2J Parser Version 1.4 Beta:  Java program parsed successfully. */ 
