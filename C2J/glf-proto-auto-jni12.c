/**
 * C2J Parser Version 2.2
 * Jausoft - Sven Goethel Software Development
 * Reading from file: glf-proto-auto.orig.h . . .
 * Destination-Class: gl4java_utils_glf_GLFFuncJNI ! 
 */

/**
 * Original Function-Prototype :
 * <pre> 
   void glfInit ( ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfInit (
		JNIEnv *env, jobject obj)
	{

		glfInit (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfClose ( ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfClose (
		JNIEnv *env, jobject obj)
	{

		glfClose (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   int glfUnloadFont ( ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfUnloadFont (
		JNIEnv *env, jobject obj)
	{
		jint ret;


		ret = (jint) glfUnloadFont (
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   int glfUnloadBFont ( ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfUnloadBFont (
		JNIEnv *env, jobject obj)
	{
		jint ret;


		ret = (jint) glfUnloadBFont (
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   int glfUnloadFontD ( int font_descriptor ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfUnloadFontD (
		JNIEnv *env, jobject obj,
		jint font_descriptor)
	{
		jint ret;


		ret = (jint) glfUnloadFontD (
			(int) font_descriptor
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   int glfUnloadBFontD ( int bmf_descriptor ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfUnloadBFontD (
		JNIEnv *env, jobject obj,
		jint bmf_descriptor)
	{
		jint ret;


		ret = (jint) glfUnloadBFontD (
			(int) bmf_descriptor
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDrawWiredSymbol ( char s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDrawWiredSymbol (
		JNIEnv *env, jobject obj,
		jbyte s)
	{

		glfDrawWiredSymbol (
			(char) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDrawWiredString ( const char * s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDrawWiredString (
		JNIEnv *env, jobject obj,
		jstring s)
	{
		char *ptr0 = NULL;

		ptr0 = jnitoolsGetJavaString(env, s);
		glfDrawWiredString (
			(const char *) ptr0
		);

		free(ptr0);
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDrawSolidSymbol ( char s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDrawSolidSymbol (
		JNIEnv *env, jobject obj,
		jbyte s)
	{

		glfDrawSolidSymbol (
			(char) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDrawSolidString ( const char * s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDrawSolidString (
		JNIEnv *env, jobject obj,
		jstring s)
	{
		char *ptr0 = NULL;

		ptr0 = jnitoolsGetJavaString(env, s);
		glfDrawSolidString (
			(const char *) ptr0
		);

		free(ptr0);
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDraw3DWiredSymbol ( char s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDraw3DWiredSymbol (
		JNIEnv *env, jobject obj,
		jbyte s)
	{

		glfDraw3DWiredSymbol (
			(char) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDraw3DWiredString ( const char * s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDraw3DWiredString (
		JNIEnv *env, jobject obj,
		jstring s)
	{
		char *ptr0 = NULL;

		ptr0 = jnitoolsGetJavaString(env, s);
		glfDraw3DWiredString (
			(const char *) ptr0
		);

		free(ptr0);
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDraw3DSolidSymbol ( char s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDraw3DSolidSymbol (
		JNIEnv *env, jobject obj,
		jbyte s)
	{

		glfDraw3DSolidSymbol (
			(char) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDraw3DSolidString ( const char * s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDraw3DSolidString (
		JNIEnv *env, jobject obj,
		jstring s)
	{
		char *ptr0 = NULL;

		ptr0 = jnitoolsGetJavaString(env, s);
		glfDraw3DSolidString (
			(const char *) ptr0
		);

		free(ptr0);
	}

/**
 * Original Function-Prototype :
 * <pre> 
   int glfBeginBFont ( int Font_Descriptor ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfBeginBFont (
		JNIEnv *env, jobject obj,
		jint Font_Descriptor)
	{
		jint ret;


		ret = (jint) glfBeginBFont (
			(int) Font_Descriptor
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfEndBFont ( ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfEndBFont (
		JNIEnv *env, jobject obj)
	{

		glfEndBFont (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDrawBSymbol ( char s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDrawBSymbol (
		JNIEnv *env, jobject obj,
		jbyte s)
	{

		glfDrawBSymbol (
			(char) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDrawBString ( const char * s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDrawBString (
		JNIEnv *env, jobject obj,
		jstring s)
	{
		char *ptr0 = NULL;

		ptr0 = jnitoolsGetJavaString(env, s);
		glfDrawBString (
			(const char *) ptr0
		);

		free(ptr0);
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDrawBMaskSymbol ( char s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDrawBMaskSymbol (
		JNIEnv *env, jobject obj,
		jbyte s)
	{

		glfDrawBMaskSymbol (
			(char) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDrawBMaskString ( const char * s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDrawBMaskString (
		JNIEnv *env, jobject obj,
		jstring s)
	{
		char *ptr0 = NULL;

		ptr0 = jnitoolsGetJavaString(env, s);
		glfDrawBMaskString (
			(const char *) ptr0
		);

		free(ptr0);
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDrawWiredSymbolF ( int font_descriptor , char s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDrawWiredSymbolF (
		JNIEnv *env, jobject obj,
		jint font_descriptor,
		jbyte s)
	{

		glfDrawWiredSymbolF (
			(int) font_descriptor,
			(char) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDrawWiredStringF ( int font_descriptor , const char * s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDrawWiredStringF (
		JNIEnv *env, jobject obj,
		jint font_descriptor,
		jstring s)
	{
		char *ptr1 = NULL;

		ptr1 = jnitoolsGetJavaString(env, s);
		glfDrawWiredStringF (
			(int) font_descriptor,
			(const char *) ptr1
		);

		free(ptr1);
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDrawSolidSymbolF ( int font_descriptor , char s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDrawSolidSymbolF (
		JNIEnv *env, jobject obj,
		jint font_descriptor,
		jbyte s)
	{

		glfDrawSolidSymbolF (
			(int) font_descriptor,
			(char) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDrawSolidStringF ( int font_descriptor , const char * s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDrawSolidStringF (
		JNIEnv *env, jobject obj,
		jint font_descriptor,
		jstring s)
	{
		char *ptr1 = NULL;

		ptr1 = jnitoolsGetJavaString(env, s);
		glfDrawSolidStringF (
			(int) font_descriptor,
			(const char *) ptr1
		);

		free(ptr1);
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDraw3DWiredSymbolF ( int font_descriptor , char s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDraw3DWiredSymbolF (
		JNIEnv *env, jobject obj,
		jint font_descriptor,
		jbyte s)
	{

		glfDraw3DWiredSymbolF (
			(int) font_descriptor,
			(char) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDraw3DWiredStringF ( int font_descriptor , const char * s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDraw3DWiredStringF (
		JNIEnv *env, jobject obj,
		jint font_descriptor,
		jstring s)
	{
		char *ptr1 = NULL;

		ptr1 = jnitoolsGetJavaString(env, s);
		glfDraw3DWiredStringF (
			(int) font_descriptor,
			(const char *) ptr1
		);

		free(ptr1);
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDraw3DSolidSymbolF ( int font_descriptor , char s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDraw3DSolidSymbolF (
		JNIEnv *env, jobject obj,
		jint font_descriptor,
		jbyte s)
	{

		glfDraw3DSolidSymbolF (
			(int) font_descriptor,
			(char) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDraw3DSolidStringF ( int font_descriptor , const char * s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDraw3DSolidStringF (
		JNIEnv *env, jobject obj,
		jint font_descriptor,
		jstring s)
	{
		char *ptr1 = NULL;

		ptr1 = jnitoolsGetJavaString(env, s);
		glfDraw3DSolidStringF (
			(int) font_descriptor,
			(const char *) ptr1
		);

		free(ptr1);
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfGetStringBoundsF ( int fd , const char * s , float * minx , float * miny , float * maxx , float * maxy ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfGetStringBoundsF (
		JNIEnv *env, jobject obj,
		jint fd,
		jstring s,
		jfloatArray minx,
		jfloatArray miny,
		jfloatArray maxx,
		jfloatArray maxy)
	{
		char *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jfloat *ptr5 = NULL;

		ptr1 = jnitoolsGetJavaString(env, s);
		if(minx!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, minx, &isCopiedArray2);
		}
		if(miny!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, miny, &isCopiedArray3);
		}
		if(maxx!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, maxx, &isCopiedArray4);
		}
		if(maxy!=NULL)
		{
			ptr5 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, maxy, &isCopiedArray5);
		}
		glfGetStringBoundsF (
			(int) fd,
			(const char *) ptr1,
			(float *) ptr2,
			(float *) ptr3,
			(float *) ptr4,
			(float *) ptr5
		);

		free(ptr1);
		if(minx!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  minx, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(miny!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  miny, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(maxx!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  maxx, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(maxy!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  maxy, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfGetStringBounds ( const char * s , float * minx , float * miny , float * maxx , float * maxy ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfGetStringBounds (
		JNIEnv *env, jobject obj,
		jstring s,
		jfloatArray minx,
		jfloatArray miny,
		jfloatArray maxx,
		jfloatArray maxy)
	{
		char *ptr0 = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;

		ptr0 = jnitoolsGetJavaString(env, s);
		if(minx!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, minx, &isCopiedArray1);
		}
		if(miny!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, miny, &isCopiedArray2);
		}
		if(maxx!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, maxx, &isCopiedArray3);
		}
		if(maxy!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, maxy, &isCopiedArray4);
		}
		glfGetStringBounds (
			(const char *) ptr0,
			(float *) ptr1,
			(float *) ptr2,
			(float *) ptr3,
			(float *) ptr4
		);

		free(ptr0);
		if(minx!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  minx, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(miny!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  miny, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(maxx!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  maxx, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(maxy!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  maxy, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfSetSymbolSpace ( float sp ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfSetSymbolSpace (
		JNIEnv *env, jobject obj,
		jfloat sp)
	{

		glfSetSymbolSpace (
			(float) sp
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   float glfGetSymbolSpace ( ) ;
 * </pre> 
 */
	JNIEXPORT jfloat JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfGetSymbolSpace (
		JNIEnv *env, jobject obj)
	{
		jfloat ret;


		ret = (jfloat) glfGetSymbolSpace (
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfSetSpaceSize ( float sp ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfSetSpaceSize (
		JNIEnv *env, jobject obj,
		jfloat sp)
	{

		glfSetSpaceSize (
			(float) sp
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   float glfGetSpaceSize ( ) ;
 * </pre> 
 */
	JNIEXPORT jfloat JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfGetSpaceSize (
		JNIEnv *env, jobject obj)
	{
		jfloat ret;


		ret = (jfloat) glfGetSpaceSize (
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfSetSymbolDepth ( float dpth ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfSetSymbolDepth (
		JNIEnv *env, jobject obj,
		jfloat dpth)
	{

		glfSetSymbolDepth (
			(float) dpth
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   float glfGetSymbolDepth ( ) ;
 * </pre> 
 */
	JNIEXPORT jfloat JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfGetSymbolDepth (
		JNIEnv *env, jobject obj)
	{
		jfloat ret;


		ret = (jfloat) glfGetSymbolDepth (
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   int glfSetCurrentFont ( int Font_Descriptor ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfSetCurrentFont (
		JNIEnv *env, jobject obj,
		jint Font_Descriptor)
	{
		jint ret;


		ret = (jint) glfSetCurrentFont (
			(int) Font_Descriptor
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   int glfSetCurrentBFont ( int Font_Descriptor ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfSetCurrentBFont (
		JNIEnv *env, jobject obj,
		jint Font_Descriptor)
	{
		jint ret;


		ret = (jint) glfSetCurrentBFont (
			(int) Font_Descriptor
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   int glfGetCurrentFont ( ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfGetCurrentFont (
		JNIEnv *env, jobject obj)
	{
		jint ret;


		ret = (jint) glfGetCurrentFont (
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   int glfGetCurrentBFont ( ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfGetCurrentBFont (
		JNIEnv *env, jobject obj)
	{
		jint ret;


		ret = (jint) glfGetCurrentBFont (
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfSetAnchorPoint ( int anchp ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfSetAnchorPoint (
		JNIEnv *env, jobject obj,
		jint anchp)
	{

		glfSetAnchorPoint (
			(int) anchp
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfSetContourColor ( float r , float g , float b , float a ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfSetContourColor (
		JNIEnv *env, jobject obj,
		jfloat r,
		jfloat g,
		jfloat b,
		jfloat a)
	{

		glfSetContourColor (
			(float) r,
			(float) g,
			(float) b,
			(float) a
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfEnable ( int what ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfEnable (
		JNIEnv *env, jobject obj,
		jint what)
	{

		glfEnable (
			(int) what
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfDisable ( int what ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfDisable (
		JNIEnv *env, jobject obj,
		jint what)
	{

		glfDisable (
			(int) what
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfSetConsoleParam ( int width , int height ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfSetConsoleParam (
		JNIEnv *env, jobject obj,
		jint width,
		jint height)
	{

		glfSetConsoleParam (
			(int) width,
			(int) height
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   int glfSetConsoleFont ( int Font_Descriptor ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfSetConsoleFont (
		JNIEnv *env, jobject obj,
		jint Font_Descriptor)
	{
		jint ret;


		ret = (jint) glfSetConsoleFont (
			(int) Font_Descriptor
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfConsoleClear ( ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfConsoleClear (
		JNIEnv *env, jobject obj)
	{

		glfConsoleClear (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfPrint ( const char * s , int lenght ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfPrint (
		JNIEnv *env, jobject obj,
		jstring s,
		jint lenght)
	{
		char *ptr0 = NULL;

		ptr0 = jnitoolsGetJavaString(env, s);
		glfPrint (
			(const char *) ptr0,
			(int) lenght
		);

		free(ptr0);
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfPrintString ( const char * s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfPrintString (
		JNIEnv *env, jobject obj,
		jstring s)
	{
		char *ptr0 = NULL;

		ptr0 = jnitoolsGetJavaString(env, s);
		glfPrintString (
			(const char *) ptr0
		);

		free(ptr0);
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfPrintChar ( char s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfPrintChar (
		JNIEnv *env, jobject obj,
		jbyte s)
	{

		glfPrintChar (
			(char) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfConsoleDraw ( ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfConsoleDraw (
		JNIEnv *env, jobject obj)
	{

		glfConsoleDraw (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfSetCursorBlinkRate ( int Rate ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfSetCursorBlinkRate (
		JNIEnv *env, jobject obj,
		jint Rate)
	{

		glfSetCursorBlinkRate (
			(int) Rate
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfStringCentering ( GLboolean center ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfStringCentering (
		JNIEnv *env, jobject obj,
		jboolean center)
	{

		glfStringCentering (
			(GLboolean) center
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   GLboolean glfGetStringCentering ( ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfGetStringCentering (
		JNIEnv *env, jobject obj)
	{
		jboolean ret;


		ret = (jboolean) glfGetStringCentering (
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfBitmapStringCentering ( GLboolean center ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfBitmapStringCentering (
		JNIEnv *env, jobject obj,
		jboolean center)
	{

		glfBitmapStringCentering (
			(GLboolean) center
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   GLboolean glfBitmapGetStringCentering ( ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfBitmapGetStringCentering (
		JNIEnv *env, jobject obj)
	{
		jboolean ret;


		ret = (jboolean) glfBitmapGetStringCentering (
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfStringDirection ( GLuint direction ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfStringDirection (
		JNIEnv *env, jobject obj,
		jint direction)
	{

		glfStringDirection (
			(GLuint) direction
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   GLuint glfGetStringDirection ( ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfGetStringDirection (
		JNIEnv *env, jobject obj)
	{
		jint ret;


		ret = (jint) glfGetStringDirection (
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfSetRotateAngle ( float angle ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfSetRotateAngle (
		JNIEnv *env, jobject obj,
		jfloat angle)
	{

		glfSetRotateAngle (
			(float) angle
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   void glfSetBRotateAngle ( float angle ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_utils_glf_GLFFuncJNI_glfSetBRotateAngle (
		JNIEnv *env, jobject obj,
		jfloat angle)
	{

		glfSetBRotateAngle (
			(float) angle
		);

	}

/* C2J Parser Version 2.2:  Java program parsed successfully. */ 
