/**
 * C2J Parser Version 1.5 Beta
 * Jausoft - Sven Goethel Software Development
 * Reading from file: gl-proto-auto.orig.h . . .
 * Destination-Class: gl4java_GLFuncJauJNI ! 
 */

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearIndex ( GLfloat c ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glClearIndex (
		JNIEnv *env, jobject obj,
		jfloat c)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat))
				getGLProcAddressHelper("glClearIndex", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) c
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearColor ( GLclampf red , GLclampf green , GLclampf blue , GLclampf alpha ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glClearColor (
		JNIEnv *env, jobject obj,
		jfloat red,
		jfloat green,
		jfloat blue,
		jfloat alpha)
	{
		static void (CALLBACK *__func_ptr__)(GLclampf, GLclampf, GLclampf, GLclampf) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLclampf, GLclampf, GLclampf, GLclampf))
				getGLProcAddressHelper("glClearColor", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLclampf) red,
			(GLclampf) green,
			(GLclampf) blue,
			(GLclampf) alpha
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClear ( GLbitfield mask ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glClear (
		JNIEnv *env, jobject obj,
		jint mask)
	{
		static void (CALLBACK *__func_ptr__)(GLbitfield) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLbitfield))
				getGLProcAddressHelper("glClear", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLbitfield) mask
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexMask ( GLuint mask ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexMask (
		JNIEnv *env, jobject obj,
		jint mask)
	{
		static void (CALLBACK *__func_ptr__)(GLuint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLuint))
				getGLProcAddressHelper("glIndexMask", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLuint) mask
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorMask ( GLboolean red , GLboolean green , GLboolean blue , GLboolean alpha ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorMask (
		JNIEnv *env, jobject obj,
		jboolean red,
		jboolean green,
		jboolean blue,
		jboolean alpha)
	{
		static void (CALLBACK *__func_ptr__)(GLboolean, GLboolean, GLboolean, GLboolean) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLboolean, GLboolean, GLboolean, GLboolean))
				getGLProcAddressHelper("glColorMask", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLboolean) red,
			(GLboolean) green,
			(GLboolean) blue,
			(GLboolean) alpha
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAlphaFunc ( GLenum func , GLclampf ref ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glAlphaFunc (
		JNIEnv *env, jobject obj,
		jint func,
		jfloat ref)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLclampf) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLclampf))
				getGLProcAddressHelper("glAlphaFunc", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) func,
			(GLclampf) ref
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendFunc ( GLenum sfactor , GLenum dfactor ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBlendFunc (
		JNIEnv *env, jobject obj,
		jint sfactor,
		jint dfactor)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum))
				getGLProcAddressHelper("glBlendFunc", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) sfactor,
			(GLenum) dfactor
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLogicOp ( GLenum opcode ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLogicOp (
		JNIEnv *env, jobject obj,
		jint opcode)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glLogicOp", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) opcode
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCullFace ( GLenum mode ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCullFace (
		JNIEnv *env, jobject obj,
		jint mode)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glCullFace", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) mode
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFrontFace ( GLenum mode ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFrontFace (
		JNIEnv *env, jobject obj,
		jint mode)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glFrontFace", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) mode
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointSize ( GLfloat size ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPointSize (
		JNIEnv *env, jobject obj,
		jfloat size)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat))
				getGLProcAddressHelper("glPointSize", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) size
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLineWidth ( GLfloat width ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLineWidth (
		JNIEnv *env, jobject obj,
		jfloat width)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat))
				getGLProcAddressHelper("glLineWidth", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) width
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLineStipple ( GLint factor , GLushort pattern ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLineStipple (
		JNIEnv *env, jobject obj,
		jint factor,
		jshort pattern)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLushort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLushort))
				getGLProcAddressHelper("glLineStipple", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) factor,
			(GLushort) pattern
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPolygonMode ( GLenum face , GLenum mode ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPolygonMode (
		JNIEnv *env, jobject obj,
		jint face,
		jint mode)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum))
				getGLProcAddressHelper("glPolygonMode", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) face,
			(GLenum) mode
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPolygonOffset ( GLfloat factor , GLfloat units ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPolygonOffset (
		JNIEnv *env, jobject obj,
		jfloat factor,
		jfloat units)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat))
				getGLProcAddressHelper("glPolygonOffset", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) factor,
			(GLfloat) units
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPolygonStipple ( const GLubyte * mask ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPolygonStipple (
		JNIEnv *env, jobject obj,
		jbyteArray mask)
	{
		static void (CALLBACK *__func_ptr__)(const GLubyte *) = NULL;
		jbyte *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLubyte *))
				getGLProcAddressHelper("glPolygonStipple", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(mask!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, mask, 0);
		}
		__func_ptr__ (
			(const GLubyte *) ptr0
		);

		if(mask!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  mask, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPolygonStipple ( GLubyte * mask ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPolygonStipple (
		JNIEnv *env, jobject obj,
		jbyteArray mask)
	{
		static void (CALLBACK *__func_ptr__)(GLubyte *) = NULL;
		jboolean isCopiedArray0 = JNI_FALSE;
		jbyte *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLubyte *))
				getGLProcAddressHelper("glGetPolygonStipple", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(mask!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, mask, &isCopiedArray0);
		}
		__func_ptr__ (
			(GLubyte *) ptr0
		);

		if(mask!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  mask, ptr0, (isCopiedArray0 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlag ( GLboolean flag ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlag (
		JNIEnv *env, jobject obj,
		jboolean flag)
	{
		static void (CALLBACK *__func_ptr__)(GLboolean) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLboolean))
				getGLProcAddressHelper("glEdgeFlag", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLboolean) flag
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlagv ( const GLboolean * flag ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlagv (
		JNIEnv *env, jobject obj,
		jbooleanArray flag)
	{
		static void (CALLBACK *__func_ptr__)(const GLboolean *) = NULL;
		jboolean *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLboolean *))
				getGLProcAddressHelper("glEdgeFlagv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(flag!=NULL)
		{
			ptr0 = (*env)->GetBooleanArrayElements(env, flag, 0);
		}
		__func_ptr__ (
			(const GLboolean *) ptr0
		);

		if(flag!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  flag, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glScissor ( GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glScissor (
		JNIEnv *env, jobject obj,
		jint x,
		jint y,
		jint width,
		jint height)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLsizei, GLsizei) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLsizei, GLsizei))
				getGLProcAddressHelper("glScissor", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) x,
			(GLint) y,
			(GLsizei) width,
			(GLsizei) height
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClipPlane ( GLenum plane , const GLdouble * equation ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glClipPlane (
		JNIEnv *env, jobject obj,
		jint plane,
		jdoubleArray equation)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLdouble *) = NULL;
		jdouble *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLdouble *))
				getGLProcAddressHelper("glClipPlane", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(equation!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, equation, 0);
		}
		__func_ptr__ (
			(GLenum) plane,
			(const GLdouble *) ptr1
		);

		if(equation!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  equation, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetClipPlane ( GLenum plane , GLdouble * equation ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetClipPlane (
		JNIEnv *env, jobject obj,
		jint plane,
		jdoubleArray equation)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLdouble *) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLdouble *))
				getGLProcAddressHelper("glGetClipPlane", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(equation!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, equation, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) plane,
			(GLdouble *) ptr1
		);

		if(equation!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  equation, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawBuffer ( GLenum mode ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawBuffer (
		JNIEnv *env, jobject obj,
		jint mode)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glDrawBuffer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) mode
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReadBuffer ( GLenum mode ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReadBuffer (
		JNIEnv *env, jobject obj,
		jint mode)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glReadBuffer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) mode
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEnable ( GLenum cap ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEnable (
		JNIEnv *env, jobject obj,
		jint cap)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glEnable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) cap
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDisable ( GLenum cap ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDisable (
		JNIEnv *env, jobject obj,
		jint cap)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glDisable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) cap
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsEnabled ( GLenum cap ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_GLFuncJauJNI_glIsEnabled (
		JNIEnv *env, jobject obj,
		jint cap)
	{
		static jboolean (CALLBACK *__func_ptr__)(GLenum) = NULL;
		jboolean ret;


		if(__func_ptr__==NULL) {
			__func_ptr__ = (jboolean (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glIsEnabled", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return 0;
		}
		ret = (jboolean) __func_ptr__ (
			(GLenum) cap
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEnableClientState ( GLenum cap ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEnableClientState (
		JNIEnv *env, jobject obj,
		jint cap)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glEnableClientState", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) cap
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDisableClientState ( GLenum cap ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDisableClientState (
		JNIEnv *env, jobject obj,
		jint cap)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glDisableClientState", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) cap
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetBooleanv ( GLenum pname , GLboolean * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetBooleanv (
		JNIEnv *env, jobject obj,
		jint pname,
		jbooleanArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLboolean *) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jboolean *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLboolean *))
				getGLProcAddressHelper("glGetBooleanv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetBooleanArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(GLboolean *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetDoublev ( GLenum pname , GLdouble * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetDoublev (
		JNIEnv *env, jobject obj,
		jint pname,
		jdoubleArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLdouble *) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLdouble *))
				getGLProcAddressHelper("glGetDoublev", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(GLdouble *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFloatv ( GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetFloatv (
		JNIEnv *env, jobject obj,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLfloat *) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLfloat *))
				getGLProcAddressHelper("glGetFloatv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(GLfloat *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetIntegerv ( GLenum pname , GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetIntegerv (
		JNIEnv *env, jobject obj,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint *) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint *))
				getGLProcAddressHelper("glGetIntegerv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(GLint *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPushAttrib ( GLbitfield mask ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPushAttrib (
		JNIEnv *env, jobject obj,
		jint mask)
	{
		static void (CALLBACK *__func_ptr__)(GLbitfield) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLbitfield))
				getGLProcAddressHelper("glPushAttrib", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLbitfield) mask
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPopAttrib ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPopAttrib (
		JNIEnv *env, jobject obj)
	{
		static void (CALLBACK *__func_ptr__)() = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)())
				getGLProcAddressHelper("glPopAttrib", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPushClientAttrib ( GLbitfield mask ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPushClientAttrib (
		JNIEnv *env, jobject obj,
		jint mask)
	{
		static void (CALLBACK *__func_ptr__)(GLbitfield) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLbitfield))
				getGLProcAddressHelper("glPushClientAttrib", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLbitfield) mask
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPopClientAttrib ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPopClientAttrib (
		JNIEnv *env, jobject obj)
	{
		static void (CALLBACK *__func_ptr__)() = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)())
				getGLProcAddressHelper("glPopClientAttrib", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glRenderMode ( GLenum mode ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glRenderMode (
		JNIEnv *env, jobject obj,
		jint mode)
	{
		static jint (CALLBACK *__func_ptr__)(GLenum) = NULL;
		jint ret;


		if(__func_ptr__==NULL) {
			__func_ptr__ = (jint (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glRenderMode", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return 0;
		}
		ret = (jint) __func_ptr__ (
			(GLenum) mode
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLenum glGetError ( void ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glGetError (
		JNIEnv *env, jobject obj)
	{
		static jint (CALLBACK *__func_ptr__)() = NULL;
		jint ret;


		if(__func_ptr__==NULL) {
			__func_ptr__ = (jint (CALLBACK *)())
				getGLProcAddressHelper("glGetError", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return 0;
		}
		ret = (jint) __func_ptr__ (
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFinish ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFinish (
		JNIEnv *env, jobject obj)
	{
		static void (CALLBACK *__func_ptr__)() = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)())
				getGLProcAddressHelper("glFinish", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFlush ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFlush (
		JNIEnv *env, jobject obj)
	{
		static void (CALLBACK *__func_ptr__)() = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)())
				getGLProcAddressHelper("glFlush", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glHint ( GLenum target , GLenum mode ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glHint (
		JNIEnv *env, jobject obj,
		jint target,
		jint mode)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum))
				getGLProcAddressHelper("glHint", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) mode
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearDepth ( GLclampd depth ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glClearDepth (
		JNIEnv *env, jobject obj,
		jdouble depth)
	{
		static void (CALLBACK *__func_ptr__)(GLclampd) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLclampd))
				getGLProcAddressHelper("glClearDepth", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLclampd) depth
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDepthFunc ( GLenum func ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDepthFunc (
		JNIEnv *env, jobject obj,
		jint func)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glDepthFunc", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) func
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDepthMask ( GLboolean flag ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDepthMask (
		JNIEnv *env, jobject obj,
		jboolean flag)
	{
		static void (CALLBACK *__func_ptr__)(GLboolean) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLboolean))
				getGLProcAddressHelper("glDepthMask", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLboolean) flag
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDepthRange ( GLclampd near_val , GLclampd far_val ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDepthRange (
		JNIEnv *env, jobject obj,
		jdouble near_val,
		jdouble far_val)
	{
		static void (CALLBACK *__func_ptr__)(GLclampd, GLclampd) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLclampd, GLclampd))
				getGLProcAddressHelper("glDepthRange", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLclampd) near_val,
			(GLclampd) far_val
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearAccum ( GLfloat red , GLfloat green , GLfloat blue , GLfloat alpha ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glClearAccum (
		JNIEnv *env, jobject obj,
		jfloat red,
		jfloat green,
		jfloat blue,
		jfloat alpha)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat))
				getGLProcAddressHelper("glClearAccum", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) red,
			(GLfloat) green,
			(GLfloat) blue,
			(GLfloat) alpha
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAccum ( GLenum op , GLfloat value ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glAccum (
		JNIEnv *env, jobject obj,
		jint op,
		jfloat value)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLfloat))
				getGLProcAddressHelper("glAccum", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) op,
			(GLfloat) value
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixMode ( GLenum mode ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMatrixMode (
		JNIEnv *env, jobject obj,
		jint mode)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glMatrixMode", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) mode
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glOrtho ( GLdouble left , GLdouble right , GLdouble bottom , GLdouble top , GLdouble near_val , GLdouble far_val ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glOrtho (
		JNIEnv *env, jobject obj,
		jdouble left,
		jdouble right,
		jdouble bottom,
		jdouble top,
		jdouble near_val,
		jdouble far_val)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glOrtho", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) left,
			(GLdouble) right,
			(GLdouble) bottom,
			(GLdouble) top,
			(GLdouble) near_val,
			(GLdouble) far_val
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFrustum ( GLdouble left , GLdouble right , GLdouble bottom , GLdouble top , GLdouble near_val , GLdouble far_val ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFrustum (
		JNIEnv *env, jobject obj,
		jdouble left,
		jdouble right,
		jdouble bottom,
		jdouble top,
		jdouble near_val,
		jdouble far_val)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glFrustum", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) left,
			(GLdouble) right,
			(GLdouble) bottom,
			(GLdouble) top,
			(GLdouble) near_val,
			(GLdouble) far_val
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glViewport ( GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glViewport (
		JNIEnv *env, jobject obj,
		jint x,
		jint y,
		jint width,
		jint height)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLsizei, GLsizei) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLsizei, GLsizei))
				getGLProcAddressHelper("glViewport", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) x,
			(GLint) y,
			(GLsizei) width,
			(GLsizei) height
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPushMatrix ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPushMatrix (
		JNIEnv *env, jobject obj)
	{
		static void (CALLBACK *__func_ptr__)() = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)())
				getGLProcAddressHelper("glPushMatrix", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPopMatrix ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPopMatrix (
		JNIEnv *env, jobject obj)
	{
		static void (CALLBACK *__func_ptr__)() = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)())
				getGLProcAddressHelper("glPopMatrix", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadIdentity ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLoadIdentity (
		JNIEnv *env, jobject obj)
	{
		static void (CALLBACK *__func_ptr__)() = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)())
				getGLProcAddressHelper("glLoadIdentity", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadMatrixd ( const GLdouble * m ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLoadMatrixd (
		JNIEnv *env, jobject obj,
		jdoubleArray m)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glLoadMatrixd", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(m!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, m, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(m!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  m, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadMatrixf ( const GLfloat * m ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLoadMatrixf (
		JNIEnv *env, jobject obj,
		jfloatArray m)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glLoadMatrixf", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(m!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, m, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(m!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  m, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultMatrixd ( const GLdouble * m ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultMatrixd (
		JNIEnv *env, jobject obj,
		jdoubleArray m)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glMultMatrixd", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(m!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, m, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(m!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  m, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultMatrixf ( const GLfloat * m ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultMatrixf (
		JNIEnv *env, jobject obj,
		jfloatArray m)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glMultMatrixf", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(m!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, m, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(m!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  m, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRotated ( GLdouble angle , GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRotated (
		JNIEnv *env, jobject obj,
		jdouble angle,
		jdouble x,
		jdouble y,
		jdouble z)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glRotated", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) angle,
			(GLdouble) x,
			(GLdouble) y,
			(GLdouble) z
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRotatef ( GLfloat angle , GLfloat x , GLfloat y , GLfloat z ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRotatef (
		JNIEnv *env, jobject obj,
		jfloat angle,
		jfloat x,
		jfloat y,
		jfloat z)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat))
				getGLProcAddressHelper("glRotatef", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) angle,
			(GLfloat) x,
			(GLfloat) y,
			(GLfloat) z
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glScaled ( GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glScaled (
		JNIEnv *env, jobject obj,
		jdouble x,
		jdouble y,
		jdouble z)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glScaled", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) x,
			(GLdouble) y,
			(GLdouble) z
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glScalef ( GLfloat x , GLfloat y , GLfloat z ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glScalef (
		JNIEnv *env, jobject obj,
		jfloat x,
		jfloat y,
		jfloat z)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
				getGLProcAddressHelper("glScalef", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) x,
			(GLfloat) y,
			(GLfloat) z
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTranslated ( GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTranslated (
		JNIEnv *env, jobject obj,
		jdouble x,
		jdouble y,
		jdouble z)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glTranslated", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) x,
			(GLdouble) y,
			(GLdouble) z
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTranslatef ( GLfloat x , GLfloat y , GLfloat z ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTranslatef (
		JNIEnv *env, jobject obj,
		jfloat x,
		jfloat y,
		jfloat z)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
				getGLProcAddressHelper("glTranslatef", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) x,
			(GLfloat) y,
			(GLfloat) z
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsList ( GLuint list ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_GLFuncJauJNI_glIsList (
		JNIEnv *env, jobject obj,
		jint list)
	{
		static jboolean (CALLBACK *__func_ptr__)(GLuint) = NULL;
		jboolean ret;


		if(__func_ptr__==NULL) {
			__func_ptr__ = (jboolean (CALLBACK *)(GLuint))
				getGLProcAddressHelper("glIsList", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return 0;
		}
		ret = (jboolean) __func_ptr__ (
			(GLuint) list
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteLists ( GLuint list , GLsizei range ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDeleteLists (
		JNIEnv *env, jobject obj,
		jint list,
		jint range)
	{
		static void (CALLBACK *__func_ptr__)(GLuint, GLsizei) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLuint, GLsizei))
				getGLProcAddressHelper("glDeleteLists", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLuint) list,
			(GLsizei) range
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenLists ( GLsizei range ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glGenLists (
		JNIEnv *env, jobject obj,
		jint range)
	{
		static jint (CALLBACK *__func_ptr__)(GLsizei) = NULL;
		jint ret;


		if(__func_ptr__==NULL) {
			__func_ptr__ = (jint (CALLBACK *)(GLsizei))
				getGLProcAddressHelper("glGenLists", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return 0;
		}
		ret = (jint) __func_ptr__ (
			(GLsizei) range
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNewList ( GLuint list , GLenum mode ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNewList (
		JNIEnv *env, jobject obj,
		jint list,
		jint mode)
	{
		static void (CALLBACK *__func_ptr__)(GLuint, GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLuint, GLenum))
				getGLProcAddressHelper("glNewList", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLuint) list,
			(GLenum) mode
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEndList ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEndList (
		JNIEnv *env, jobject obj)
	{
		static void (CALLBACK *__func_ptr__)() = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)())
				getGLProcAddressHelper("glEndList", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCallList ( GLuint list ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCallList (
		JNIEnv *env, jobject obj,
		jint list)
	{
		static void (CALLBACK *__func_ptr__)(GLuint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLuint))
				getGLProcAddressHelper("glCallList", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLuint) list
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCallLists ( GLsizei n , GLenum type , const GLvoid * lists ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCallLists__II_3B (
		JNIEnv *env, jobject obj,
		jint n,
		jint type,
		jbyteArray lists)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLenum, const GLvoid *) = NULL;
		jbyte *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glCallLists", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(lists!=NULL)
		{
			ptr2 = (*env)->GetByteArrayElements(env, lists, 0);
		}
		__func_ptr__ (
			(GLsizei) n,
			(GLenum) type,
			(const GLvoid *) ptr2
		);

		if(lists!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  lists, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCallLists__II_3S (
		JNIEnv *env, jobject obj,
		jint n,
		jint type,
		jshortArray lists)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLenum, const GLvoid *) = NULL;
		jshort *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glCallLists", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(lists!=NULL)
		{
			ptr2 = (*env)->GetShortArrayElements(env, lists, 0);
		}
		__func_ptr__ (
			(GLsizei) n,
			(GLenum) type,
			(const GLvoid *) ptr2
		);

		if(lists!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  lists, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCallLists__II_3I (
		JNIEnv *env, jobject obj,
		jint n,
		jint type,
		jintArray lists)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLenum, const GLvoid *) = NULL;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glCallLists", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(lists!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, lists, 0);
		}
		__func_ptr__ (
			(GLsizei) n,
			(GLenum) type,
			(const GLvoid *) ptr2
		);

		if(lists!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  lists, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCallLists__II_3F (
		JNIEnv *env, jobject obj,
		jint n,
		jint type,
		jfloatArray lists)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLenum, const GLvoid *) = NULL;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glCallLists", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(lists!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, lists, 0);
		}
		__func_ptr__ (
			(GLsizei) n,
			(GLenum) type,
			(const GLvoid *) ptr2
		);

		if(lists!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  lists, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCallLists__II_3D (
		JNIEnv *env, jobject obj,
		jint n,
		jint type,
		jdoubleArray lists)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLenum, const GLvoid *) = NULL;
		jdouble *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glCallLists", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(lists!=NULL)
		{
			ptr2 = (*env)->GetDoubleArrayElements(env, lists, 0);
		}
		__func_ptr__ (
			(GLsizei) n,
			(GLenum) type,
			(const GLvoid *) ptr2
		);

		if(lists!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  lists, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCallLists__II_3Z (
		JNIEnv *env, jobject obj,
		jint n,
		jint type,
		jbooleanArray lists)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLenum, const GLvoid *) = NULL;
		jboolean *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glCallLists", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(lists!=NULL)
		{
			ptr2 = (*env)->GetBooleanArrayElements(env, lists, 0);
		}
		__func_ptr__ (
			(GLsizei) n,
			(GLenum) type,
			(const GLvoid *) ptr2
		);

		if(lists!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  lists, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCallLists__II_3J (
		JNIEnv *env, jobject obj,
		jint n,
		jint type,
		jlongArray lists)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLenum, const GLvoid *) = NULL;
		jlong *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glCallLists", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(lists!=NULL)
		{
			ptr2 = (*env)->GetLongArrayElements(env, lists, 0);
		}
		__func_ptr__ (
			(GLsizei) n,
			(GLenum) type,
			(const GLvoid *) ptr2
		);

		if(lists!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  lists, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glListBase ( GLuint base ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glListBase (
		JNIEnv *env, jobject obj,
		jint base)
	{
		static void (CALLBACK *__func_ptr__)(GLuint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLuint))
				getGLProcAddressHelper("glListBase", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLuint) base
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBegin ( GLenum mode ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBegin (
		JNIEnv *env, jobject obj,
		jint mode)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glBegin", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) mode
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEnd ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEnd (
		JNIEnv *env, jobject obj)
	{
		static void (CALLBACK *__func_ptr__)() = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)())
				getGLProcAddressHelper("glEnd", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2d ( GLdouble x , GLdouble y ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex2d (
		JNIEnv *env, jobject obj,
		jdouble x,
		jdouble y)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble))
				getGLProcAddressHelper("glVertex2d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) x,
			(GLdouble) y
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2f ( GLfloat x , GLfloat y ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex2f (
		JNIEnv *env, jobject obj,
		jfloat x,
		jfloat y)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat))
				getGLProcAddressHelper("glVertex2f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) x,
			(GLfloat) y
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2i ( GLint x , GLint y ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex2i (
		JNIEnv *env, jobject obj,
		jint x,
		jint y)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint))
				getGLProcAddressHelper("glVertex2i", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) x,
			(GLint) y
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2s ( GLshort x , GLshort y ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex2s (
		JNIEnv *env, jobject obj,
		jshort x,
		jshort y)
	{
		static void (CALLBACK *__func_ptr__)(GLshort, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLshort, GLshort))
				getGLProcAddressHelper("glVertex2s", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLshort) x,
			(GLshort) y
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3d ( GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex3d (
		JNIEnv *env, jobject obj,
		jdouble x,
		jdouble y,
		jdouble z)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glVertex3d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) x,
			(GLdouble) y,
			(GLdouble) z
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3f ( GLfloat x , GLfloat y , GLfloat z ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex3f (
		JNIEnv *env, jobject obj,
		jfloat x,
		jfloat y,
		jfloat z)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
				getGLProcAddressHelper("glVertex3f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) x,
			(GLfloat) y,
			(GLfloat) z
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3i ( GLint x , GLint y , GLint z ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex3i (
		JNIEnv *env, jobject obj,
		jint x,
		jint y,
		jint z)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLint))
				getGLProcAddressHelper("glVertex3i", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) x,
			(GLint) y,
			(GLint) z
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3s ( GLshort x , GLshort y , GLshort z ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex3s (
		JNIEnv *env, jobject obj,
		jshort x,
		jshort y,
		jshort z)
	{
		static void (CALLBACK *__func_ptr__)(GLshort, GLshort, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLshort, GLshort, GLshort))
				getGLProcAddressHelper("glVertex3s", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLshort) x,
			(GLshort) y,
			(GLshort) z
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4d ( GLdouble x , GLdouble y , GLdouble z , GLdouble w ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex4d (
		JNIEnv *env, jobject obj,
		jdouble x,
		jdouble y,
		jdouble z,
		jdouble w)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glVertex4d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) x,
			(GLdouble) y,
			(GLdouble) z,
			(GLdouble) w
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4f ( GLfloat x , GLfloat y , GLfloat z , GLfloat w ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex4f (
		JNIEnv *env, jobject obj,
		jfloat x,
		jfloat y,
		jfloat z,
		jfloat w)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat))
				getGLProcAddressHelper("glVertex4f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) x,
			(GLfloat) y,
			(GLfloat) z,
			(GLfloat) w
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4i ( GLint x , GLint y , GLint z , GLint w ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex4i (
		JNIEnv *env, jobject obj,
		jint x,
		jint y,
		jint z,
		jint w)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLint, GLint))
				getGLProcAddressHelper("glVertex4i", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) x,
			(GLint) y,
			(GLint) z,
			(GLint) w
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4s ( GLshort x , GLshort y , GLshort z , GLshort w ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex4s (
		JNIEnv *env, jobject obj,
		jshort x,
		jshort y,
		jshort z,
		jshort w)
	{
		static void (CALLBACK *__func_ptr__)(GLshort, GLshort, GLshort, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLshort, GLshort, GLshort, GLshort))
				getGLProcAddressHelper("glVertex4s", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLshort) x,
			(GLshort) y,
			(GLshort) z,
			(GLshort) w
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2dv ( const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex2dv (
		JNIEnv *env, jobject obj,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glVertex2dv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2fv ( const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex2fv (
		JNIEnv *env, jobject obj,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glVertex2fv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2iv ( const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex2iv (
		JNIEnv *env, jobject obj,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLint *) = NULL;
		jint *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLint *))
				getGLProcAddressHelper("glVertex2iv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2sv ( const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex2sv (
		JNIEnv *env, jobject obj,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLshort *) = NULL;
		jshort *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLshort *))
				getGLProcAddressHelper("glVertex2sv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex3dv (
		JNIEnv *env, jobject obj,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glVertex3dv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex3fv (
		JNIEnv *env, jobject obj,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glVertex3fv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3iv ( const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex3iv (
		JNIEnv *env, jobject obj,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLint *) = NULL;
		jint *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLint *))
				getGLProcAddressHelper("glVertex3iv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3sv ( const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex3sv (
		JNIEnv *env, jobject obj,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLshort *) = NULL;
		jshort *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLshort *))
				getGLProcAddressHelper("glVertex3sv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4dv ( const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex4dv (
		JNIEnv *env, jobject obj,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glVertex4dv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4fv ( const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex4fv (
		JNIEnv *env, jobject obj,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glVertex4fv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4iv ( const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex4iv (
		JNIEnv *env, jobject obj,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLint *) = NULL;
		jint *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLint *))
				getGLProcAddressHelper("glVertex4iv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4sv ( const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertex4sv (
		JNIEnv *env, jobject obj,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLshort *) = NULL;
		jshort *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLshort *))
				getGLProcAddressHelper("glVertex4sv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3b ( GLbyte nx , GLbyte ny , GLbyte nz ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormal3b (
		JNIEnv *env, jobject obj,
		jbyte nx,
		jbyte ny,
		jbyte nz)
	{
		static void (CALLBACK *__func_ptr__)(GLbyte, GLbyte, GLbyte) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLbyte, GLbyte, GLbyte))
				getGLProcAddressHelper("glNormal3b", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLbyte) nx,
			(GLbyte) ny,
			(GLbyte) nz
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3d ( GLdouble nx , GLdouble ny , GLdouble nz ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormal3d (
		JNIEnv *env, jobject obj,
		jdouble nx,
		jdouble ny,
		jdouble nz)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glNormal3d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) nx,
			(GLdouble) ny,
			(GLdouble) nz
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3f ( GLfloat nx , GLfloat ny , GLfloat nz ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormal3f (
		JNIEnv *env, jobject obj,
		jfloat nx,
		jfloat ny,
		jfloat nz)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
				getGLProcAddressHelper("glNormal3f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) nx,
			(GLfloat) ny,
			(GLfloat) nz
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3i ( GLint nx , GLint ny , GLint nz ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormal3i (
		JNIEnv *env, jobject obj,
		jint nx,
		jint ny,
		jint nz)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLint))
				getGLProcAddressHelper("glNormal3i", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) nx,
			(GLint) ny,
			(GLint) nz
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3s ( GLshort nx , GLshort ny , GLshort nz ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormal3s (
		JNIEnv *env, jobject obj,
		jshort nx,
		jshort ny,
		jshort nz)
	{
		static void (CALLBACK *__func_ptr__)(GLshort, GLshort, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLshort, GLshort, GLshort))
				getGLProcAddressHelper("glNormal3s", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLshort) nx,
			(GLshort) ny,
			(GLshort) nz
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3bv ( const GLbyte * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormal3bv (
		JNIEnv *env, jobject obj,
		jbyteArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLbyte *) = NULL;
		jbyte *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLbyte *))
				getGLProcAddressHelper("glNormal3bv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLbyte *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormal3dv (
		JNIEnv *env, jobject obj,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glNormal3dv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormal3fv (
		JNIEnv *env, jobject obj,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glNormal3fv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3iv ( const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormal3iv (
		JNIEnv *env, jobject obj,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLint *) = NULL;
		jint *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLint *))
				getGLProcAddressHelper("glNormal3iv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3sv ( const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormal3sv (
		JNIEnv *env, jobject obj,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLshort *) = NULL;
		jshort *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLshort *))
				getGLProcAddressHelper("glNormal3sv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexd ( GLdouble c ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexd (
		JNIEnv *env, jobject obj,
		jdouble c)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble))
				getGLProcAddressHelper("glIndexd", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) c
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexf ( GLfloat c ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexf (
		JNIEnv *env, jobject obj,
		jfloat c)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat))
				getGLProcAddressHelper("glIndexf", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) c
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexi ( GLint c ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexi (
		JNIEnv *env, jobject obj,
		jint c)
	{
		static void (CALLBACK *__func_ptr__)(GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint))
				getGLProcAddressHelper("glIndexi", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) c
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexs ( GLshort c ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexs (
		JNIEnv *env, jobject obj,
		jshort c)
	{
		static void (CALLBACK *__func_ptr__)(GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLshort))
				getGLProcAddressHelper("glIndexs", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLshort) c
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexub ( GLubyte c ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexub (
		JNIEnv *env, jobject obj,
		jbyte c)
	{
		static void (CALLBACK *__func_ptr__)(GLubyte) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLubyte))
				getGLProcAddressHelper("glIndexub", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLubyte) c
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexdv ( const GLdouble * c ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexdv (
		JNIEnv *env, jobject obj,
		jdoubleArray c)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glIndexdv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(c!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, c, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(c!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  c, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexfv ( const GLfloat * c ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexfv (
		JNIEnv *env, jobject obj,
		jfloatArray c)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glIndexfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(c!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, c, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(c!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  c, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexiv ( const GLint * c ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexiv (
		JNIEnv *env, jobject obj,
		jintArray c)
	{
		static void (CALLBACK *__func_ptr__)(const GLint *) = NULL;
		jint *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLint *))
				getGLProcAddressHelper("glIndexiv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(c!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, c, 0);
		}
		__func_ptr__ (
			(const GLint *) ptr0
		);

		if(c!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  c, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexsv ( const GLshort * c ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexsv (
		JNIEnv *env, jobject obj,
		jshortArray c)
	{
		static void (CALLBACK *__func_ptr__)(const GLshort *) = NULL;
		jshort *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLshort *))
				getGLProcAddressHelper("glIndexsv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(c!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, c, 0);
		}
		__func_ptr__ (
			(const GLshort *) ptr0
		);

		if(c!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  c, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexubv ( const GLubyte * c ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexubv (
		JNIEnv *env, jobject obj,
		jbyteArray c)
	{
		static void (CALLBACK *__func_ptr__)(const GLubyte *) = NULL;
		jbyte *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLubyte *))
				getGLProcAddressHelper("glIndexubv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(c!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, c, 0);
		}
		__func_ptr__ (
			(const GLubyte *) ptr0
		);

		if(c!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  c, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3b ( GLbyte red , GLbyte green , GLbyte blue ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3b (
		JNIEnv *env, jobject obj,
		jbyte red,
		jbyte green,
		jbyte blue)
	{
		static void (CALLBACK *__func_ptr__)(GLbyte, GLbyte, GLbyte) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLbyte, GLbyte, GLbyte))
				getGLProcAddressHelper("glColor3b", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLbyte) red,
			(GLbyte) green,
			(GLbyte) blue
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3d ( GLdouble red , GLdouble green , GLdouble blue ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3d (
		JNIEnv *env, jobject obj,
		jdouble red,
		jdouble green,
		jdouble blue)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glColor3d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) red,
			(GLdouble) green,
			(GLdouble) blue
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3f ( GLfloat red , GLfloat green , GLfloat blue ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3f (
		JNIEnv *env, jobject obj,
		jfloat red,
		jfloat green,
		jfloat blue)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
				getGLProcAddressHelper("glColor3f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) red,
			(GLfloat) green,
			(GLfloat) blue
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3i ( GLint red , GLint green , GLint blue ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3i (
		JNIEnv *env, jobject obj,
		jint red,
		jint green,
		jint blue)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLint))
				getGLProcAddressHelper("glColor3i", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) red,
			(GLint) green,
			(GLint) blue
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3s ( GLshort red , GLshort green , GLshort blue ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3s (
		JNIEnv *env, jobject obj,
		jshort red,
		jshort green,
		jshort blue)
	{
		static void (CALLBACK *__func_ptr__)(GLshort, GLshort, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLshort, GLshort, GLshort))
				getGLProcAddressHelper("glColor3s", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLshort) red,
			(GLshort) green,
			(GLshort) blue
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3ub ( GLubyte red , GLubyte green , GLubyte blue ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3ub (
		JNIEnv *env, jobject obj,
		jbyte red,
		jbyte green,
		jbyte blue)
	{
		static void (CALLBACK *__func_ptr__)(GLubyte, GLubyte, GLubyte) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLubyte, GLubyte, GLubyte))
				getGLProcAddressHelper("glColor3ub", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLubyte) red,
			(GLubyte) green,
			(GLubyte) blue
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3ui ( GLuint red , GLuint green , GLuint blue ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3ui (
		JNIEnv *env, jobject obj,
		jint red,
		jint green,
		jint blue)
	{
		static void (CALLBACK *__func_ptr__)(GLuint, GLuint, GLuint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLuint, GLuint, GLuint))
				getGLProcAddressHelper("glColor3ui", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLuint) red,
			(GLuint) green,
			(GLuint) blue
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3us ( GLushort red , GLushort green , GLushort blue ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3us (
		JNIEnv *env, jobject obj,
		jshort red,
		jshort green,
		jshort blue)
	{
		static void (CALLBACK *__func_ptr__)(GLushort, GLushort, GLushort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLushort, GLushort, GLushort))
				getGLProcAddressHelper("glColor3us", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLushort) red,
			(GLushort) green,
			(GLushort) blue
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4b ( GLbyte red , GLbyte green , GLbyte blue , GLbyte alpha ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4b (
		JNIEnv *env, jobject obj,
		jbyte red,
		jbyte green,
		jbyte blue,
		jbyte alpha)
	{
		static void (CALLBACK *__func_ptr__)(GLbyte, GLbyte, GLbyte, GLbyte) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLbyte, GLbyte, GLbyte, GLbyte))
				getGLProcAddressHelper("glColor4b", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLbyte) red,
			(GLbyte) green,
			(GLbyte) blue,
			(GLbyte) alpha
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4d ( GLdouble red , GLdouble green , GLdouble blue , GLdouble alpha ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4d (
		JNIEnv *env, jobject obj,
		jdouble red,
		jdouble green,
		jdouble blue,
		jdouble alpha)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glColor4d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) red,
			(GLdouble) green,
			(GLdouble) blue,
			(GLdouble) alpha
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4f ( GLfloat red , GLfloat green , GLfloat blue , GLfloat alpha ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4f (
		JNIEnv *env, jobject obj,
		jfloat red,
		jfloat green,
		jfloat blue,
		jfloat alpha)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat))
				getGLProcAddressHelper("glColor4f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) red,
			(GLfloat) green,
			(GLfloat) blue,
			(GLfloat) alpha
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4i ( GLint red , GLint green , GLint blue , GLint alpha ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4i (
		JNIEnv *env, jobject obj,
		jint red,
		jint green,
		jint blue,
		jint alpha)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLint, GLint))
				getGLProcAddressHelper("glColor4i", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) red,
			(GLint) green,
			(GLint) blue,
			(GLint) alpha
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4s ( GLshort red , GLshort green , GLshort blue , GLshort alpha ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4s (
		JNIEnv *env, jobject obj,
		jshort red,
		jshort green,
		jshort blue,
		jshort alpha)
	{
		static void (CALLBACK *__func_ptr__)(GLshort, GLshort, GLshort, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLshort, GLshort, GLshort, GLshort))
				getGLProcAddressHelper("glColor4s", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLshort) red,
			(GLshort) green,
			(GLshort) blue,
			(GLshort) alpha
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ub ( GLubyte red , GLubyte green , GLubyte blue , GLubyte alpha ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4ub (
		JNIEnv *env, jobject obj,
		jbyte red,
		jbyte green,
		jbyte blue,
		jbyte alpha)
	{
		static void (CALLBACK *__func_ptr__)(GLubyte, GLubyte, GLubyte, GLubyte) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLubyte, GLubyte, GLubyte, GLubyte))
				getGLProcAddressHelper("glColor4ub", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLubyte) red,
			(GLubyte) green,
			(GLubyte) blue,
			(GLubyte) alpha
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ui ( GLuint red , GLuint green , GLuint blue , GLuint alpha ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4ui (
		JNIEnv *env, jobject obj,
		jint red,
		jint green,
		jint blue,
		jint alpha)
	{
		static void (CALLBACK *__func_ptr__)(GLuint, GLuint, GLuint, GLuint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLuint, GLuint, GLuint, GLuint))
				getGLProcAddressHelper("glColor4ui", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLuint) red,
			(GLuint) green,
			(GLuint) blue,
			(GLuint) alpha
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4us ( GLushort red , GLushort green , GLushort blue , GLushort alpha ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4us (
		JNIEnv *env, jobject obj,
		jshort red,
		jshort green,
		jshort blue,
		jshort alpha)
	{
		static void (CALLBACK *__func_ptr__)(GLushort, GLushort, GLushort, GLushort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLushort, GLushort, GLushort, GLushort))
				getGLProcAddressHelper("glColor4us", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLushort) red,
			(GLushort) green,
			(GLushort) blue,
			(GLushort) alpha
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3bv ( const GLbyte * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3bv (
		JNIEnv *env, jobject obj,
		jbyteArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLbyte *) = NULL;
		jbyte *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLbyte *))
				getGLProcAddressHelper("glColor3bv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLbyte *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3dv (
		JNIEnv *env, jobject obj,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glColor3dv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3fv (
		JNIEnv *env, jobject obj,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glColor3fv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3iv ( const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3iv (
		JNIEnv *env, jobject obj,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLint *) = NULL;
		jint *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLint *))
				getGLProcAddressHelper("glColor3iv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3sv ( const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3sv (
		JNIEnv *env, jobject obj,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLshort *) = NULL;
		jshort *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLshort *))
				getGLProcAddressHelper("glColor3sv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3ubv ( const GLubyte * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3ubv (
		JNIEnv *env, jobject obj,
		jbyteArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLubyte *) = NULL;
		jbyte *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLubyte *))
				getGLProcAddressHelper("glColor3ubv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLubyte *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3uiv ( const GLuint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3uiv (
		JNIEnv *env, jobject obj,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLuint *) = NULL;
		jint *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLuint *))
				getGLProcAddressHelper("glColor3uiv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLuint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3usv ( const GLushort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3usv (
		JNIEnv *env, jobject obj,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLushort *) = NULL;
		jshort *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLushort *))
				getGLProcAddressHelper("glColor3usv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLushort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4bv ( const GLbyte * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4bv (
		JNIEnv *env, jobject obj,
		jbyteArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLbyte *) = NULL;
		jbyte *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLbyte *))
				getGLProcAddressHelper("glColor4bv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLbyte *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4dv ( const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4dv (
		JNIEnv *env, jobject obj,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glColor4dv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4fv ( const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4fv (
		JNIEnv *env, jobject obj,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glColor4fv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4iv ( const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4iv (
		JNIEnv *env, jobject obj,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLint *) = NULL;
		jint *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLint *))
				getGLProcAddressHelper("glColor4iv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4sv ( const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4sv (
		JNIEnv *env, jobject obj,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLshort *) = NULL;
		jshort *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLshort *))
				getGLProcAddressHelper("glColor4sv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubv ( const GLubyte * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4ubv (
		JNIEnv *env, jobject obj,
		jbyteArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLubyte *) = NULL;
		jbyte *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLubyte *))
				getGLProcAddressHelper("glColor4ubv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLubyte *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4uiv ( const GLuint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4uiv (
		JNIEnv *env, jobject obj,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLuint *) = NULL;
		jint *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLuint *))
				getGLProcAddressHelper("glColor4uiv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLuint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4usv ( const GLushort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4usv (
		JNIEnv *env, jobject obj,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLushort *) = NULL;
		jshort *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLushort *))
				getGLProcAddressHelper("glColor4usv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLushort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1d ( GLdouble s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord1d (
		JNIEnv *env, jobject obj,
		jdouble s)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble))
				getGLProcAddressHelper("glTexCoord1d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1f ( GLfloat s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord1f (
		JNIEnv *env, jobject obj,
		jfloat s)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat))
				getGLProcAddressHelper("glTexCoord1f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1i ( GLint s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord1i (
		JNIEnv *env, jobject obj,
		jint s)
	{
		static void (CALLBACK *__func_ptr__)(GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint))
				getGLProcAddressHelper("glTexCoord1i", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1s ( GLshort s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord1s (
		JNIEnv *env, jobject obj,
		jshort s)
	{
		static void (CALLBACK *__func_ptr__)(GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLshort))
				getGLProcAddressHelper("glTexCoord1s", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLshort) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2d ( GLdouble s , GLdouble t ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2d (
		JNIEnv *env, jobject obj,
		jdouble s,
		jdouble t)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble))
				getGLProcAddressHelper("glTexCoord2d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) s,
			(GLdouble) t
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2f ( GLfloat s , GLfloat t ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2f (
		JNIEnv *env, jobject obj,
		jfloat s,
		jfloat t)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat))
				getGLProcAddressHelper("glTexCoord2f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) s,
			(GLfloat) t
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2i ( GLint s , GLint t ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2i (
		JNIEnv *env, jobject obj,
		jint s,
		jint t)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint))
				getGLProcAddressHelper("glTexCoord2i", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) s,
			(GLint) t
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2s ( GLshort s , GLshort t ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2s (
		JNIEnv *env, jobject obj,
		jshort s,
		jshort t)
	{
		static void (CALLBACK *__func_ptr__)(GLshort, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLshort, GLshort))
				getGLProcAddressHelper("glTexCoord2s", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLshort) s,
			(GLshort) t
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3d ( GLdouble s , GLdouble t , GLdouble r ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord3d (
		JNIEnv *env, jobject obj,
		jdouble s,
		jdouble t,
		jdouble r)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glTexCoord3d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) s,
			(GLdouble) t,
			(GLdouble) r
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3f ( GLfloat s , GLfloat t , GLfloat r ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord3f (
		JNIEnv *env, jobject obj,
		jfloat s,
		jfloat t,
		jfloat r)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
				getGLProcAddressHelper("glTexCoord3f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) s,
			(GLfloat) t,
			(GLfloat) r
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3i ( GLint s , GLint t , GLint r ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord3i (
		JNIEnv *env, jobject obj,
		jint s,
		jint t,
		jint r)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLint))
				getGLProcAddressHelper("glTexCoord3i", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) s,
			(GLint) t,
			(GLint) r
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3s ( GLshort s , GLshort t , GLshort r ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord3s (
		JNIEnv *env, jobject obj,
		jshort s,
		jshort t,
		jshort r)
	{
		static void (CALLBACK *__func_ptr__)(GLshort, GLshort, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLshort, GLshort, GLshort))
				getGLProcAddressHelper("glTexCoord3s", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLshort) s,
			(GLshort) t,
			(GLshort) r
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4d ( GLdouble s , GLdouble t , GLdouble r , GLdouble q ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord4d (
		JNIEnv *env, jobject obj,
		jdouble s,
		jdouble t,
		jdouble r,
		jdouble q)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glTexCoord4d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) s,
			(GLdouble) t,
			(GLdouble) r,
			(GLdouble) q
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4f ( GLfloat s , GLfloat t , GLfloat r , GLfloat q ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord4f (
		JNIEnv *env, jobject obj,
		jfloat s,
		jfloat t,
		jfloat r,
		jfloat q)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat))
				getGLProcAddressHelper("glTexCoord4f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) s,
			(GLfloat) t,
			(GLfloat) r,
			(GLfloat) q
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4i ( GLint s , GLint t , GLint r , GLint q ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord4i (
		JNIEnv *env, jobject obj,
		jint s,
		jint t,
		jint r,
		jint q)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLint, GLint))
				getGLProcAddressHelper("glTexCoord4i", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) s,
			(GLint) t,
			(GLint) r,
			(GLint) q
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4s ( GLshort s , GLshort t , GLshort r , GLshort q ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord4s (
		JNIEnv *env, jobject obj,
		jshort s,
		jshort t,
		jshort r,
		jshort q)
	{
		static void (CALLBACK *__func_ptr__)(GLshort, GLshort, GLshort, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLshort, GLshort, GLshort, GLshort))
				getGLProcAddressHelper("glTexCoord4s", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLshort) s,
			(GLshort) t,
			(GLshort) r,
			(GLshort) q
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1dv ( const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord1dv (
		JNIEnv *env, jobject obj,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glTexCoord1dv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1fv ( const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord1fv (
		JNIEnv *env, jobject obj,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glTexCoord1fv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1iv ( const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord1iv (
		JNIEnv *env, jobject obj,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLint *) = NULL;
		jint *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLint *))
				getGLProcAddressHelper("glTexCoord1iv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1sv ( const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord1sv (
		JNIEnv *env, jobject obj,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLshort *) = NULL;
		jshort *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLshort *))
				getGLProcAddressHelper("glTexCoord1sv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2dv ( const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2dv (
		JNIEnv *env, jobject obj,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glTexCoord2dv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fv ( const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2fv (
		JNIEnv *env, jobject obj,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glTexCoord2fv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2iv ( const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2iv (
		JNIEnv *env, jobject obj,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLint *) = NULL;
		jint *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLint *))
				getGLProcAddressHelper("glTexCoord2iv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2sv ( const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2sv (
		JNIEnv *env, jobject obj,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLshort *) = NULL;
		jshort *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLshort *))
				getGLProcAddressHelper("glTexCoord2sv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord3dv (
		JNIEnv *env, jobject obj,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glTexCoord3dv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord3fv (
		JNIEnv *env, jobject obj,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glTexCoord3fv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3iv ( const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord3iv (
		JNIEnv *env, jobject obj,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLint *) = NULL;
		jint *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLint *))
				getGLProcAddressHelper("glTexCoord3iv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3sv ( const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord3sv (
		JNIEnv *env, jobject obj,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLshort *) = NULL;
		jshort *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLshort *))
				getGLProcAddressHelper("glTexCoord3sv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4dv ( const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord4dv (
		JNIEnv *env, jobject obj,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glTexCoord4dv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fv ( const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord4fv (
		JNIEnv *env, jobject obj,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glTexCoord4fv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4iv ( const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord4iv (
		JNIEnv *env, jobject obj,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLint *) = NULL;
		jint *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLint *))
				getGLProcAddressHelper("glTexCoord4iv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4sv ( const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord4sv (
		JNIEnv *env, jobject obj,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLshort *) = NULL;
		jshort *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLshort *))
				getGLProcAddressHelper("glTexCoord4sv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2d ( GLdouble x , GLdouble y ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos2d (
		JNIEnv *env, jobject obj,
		jdouble x,
		jdouble y)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble))
				getGLProcAddressHelper("glRasterPos2d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) x,
			(GLdouble) y
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2f ( GLfloat x , GLfloat y ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos2f (
		JNIEnv *env, jobject obj,
		jfloat x,
		jfloat y)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat))
				getGLProcAddressHelper("glRasterPos2f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) x,
			(GLfloat) y
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2i ( GLint x , GLint y ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos2i (
		JNIEnv *env, jobject obj,
		jint x,
		jint y)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint))
				getGLProcAddressHelper("glRasterPos2i", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) x,
			(GLint) y
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2s ( GLshort x , GLshort y ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos2s (
		JNIEnv *env, jobject obj,
		jshort x,
		jshort y)
	{
		static void (CALLBACK *__func_ptr__)(GLshort, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLshort, GLshort))
				getGLProcAddressHelper("glRasterPos2s", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLshort) x,
			(GLshort) y
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3d ( GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos3d (
		JNIEnv *env, jobject obj,
		jdouble x,
		jdouble y,
		jdouble z)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glRasterPos3d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) x,
			(GLdouble) y,
			(GLdouble) z
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3f ( GLfloat x , GLfloat y , GLfloat z ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos3f (
		JNIEnv *env, jobject obj,
		jfloat x,
		jfloat y,
		jfloat z)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
				getGLProcAddressHelper("glRasterPos3f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) x,
			(GLfloat) y,
			(GLfloat) z
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3i ( GLint x , GLint y , GLint z ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos3i (
		JNIEnv *env, jobject obj,
		jint x,
		jint y,
		jint z)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLint))
				getGLProcAddressHelper("glRasterPos3i", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) x,
			(GLint) y,
			(GLint) z
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3s ( GLshort x , GLshort y , GLshort z ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos3s (
		JNIEnv *env, jobject obj,
		jshort x,
		jshort y,
		jshort z)
	{
		static void (CALLBACK *__func_ptr__)(GLshort, GLshort, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLshort, GLshort, GLshort))
				getGLProcAddressHelper("glRasterPos3s", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLshort) x,
			(GLshort) y,
			(GLshort) z
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4d ( GLdouble x , GLdouble y , GLdouble z , GLdouble w ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos4d (
		JNIEnv *env, jobject obj,
		jdouble x,
		jdouble y,
		jdouble z,
		jdouble w)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glRasterPos4d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) x,
			(GLdouble) y,
			(GLdouble) z,
			(GLdouble) w
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4f ( GLfloat x , GLfloat y , GLfloat z , GLfloat w ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos4f (
		JNIEnv *env, jobject obj,
		jfloat x,
		jfloat y,
		jfloat z,
		jfloat w)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat))
				getGLProcAddressHelper("glRasterPos4f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) x,
			(GLfloat) y,
			(GLfloat) z,
			(GLfloat) w
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4i ( GLint x , GLint y , GLint z , GLint w ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos4i (
		JNIEnv *env, jobject obj,
		jint x,
		jint y,
		jint z,
		jint w)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLint, GLint))
				getGLProcAddressHelper("glRasterPos4i", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) x,
			(GLint) y,
			(GLint) z,
			(GLint) w
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4s ( GLshort x , GLshort y , GLshort z , GLshort w ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos4s (
		JNIEnv *env, jobject obj,
		jshort x,
		jshort y,
		jshort z,
		jshort w)
	{
		static void (CALLBACK *__func_ptr__)(GLshort, GLshort, GLshort, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLshort, GLshort, GLshort, GLshort))
				getGLProcAddressHelper("glRasterPos4s", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLshort) x,
			(GLshort) y,
			(GLshort) z,
			(GLshort) w
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2dv ( const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos2dv (
		JNIEnv *env, jobject obj,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glRasterPos2dv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2fv ( const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos2fv (
		JNIEnv *env, jobject obj,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glRasterPos2fv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2iv ( const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos2iv (
		JNIEnv *env, jobject obj,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLint *) = NULL;
		jint *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLint *))
				getGLProcAddressHelper("glRasterPos2iv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2sv ( const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos2sv (
		JNIEnv *env, jobject obj,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLshort *) = NULL;
		jshort *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLshort *))
				getGLProcAddressHelper("glRasterPos2sv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos3dv (
		JNIEnv *env, jobject obj,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glRasterPos3dv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos3fv (
		JNIEnv *env, jobject obj,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glRasterPos3fv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3iv ( const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos3iv (
		JNIEnv *env, jobject obj,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLint *) = NULL;
		jint *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLint *))
				getGLProcAddressHelper("glRasterPos3iv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3sv ( const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos3sv (
		JNIEnv *env, jobject obj,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLshort *) = NULL;
		jshort *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLshort *))
				getGLProcAddressHelper("glRasterPos3sv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4dv ( const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos4dv (
		JNIEnv *env, jobject obj,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glRasterPos4dv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4fv ( const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos4fv (
		JNIEnv *env, jobject obj,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glRasterPos4fv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4iv ( const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos4iv (
		JNIEnv *env, jobject obj,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLint *) = NULL;
		jint *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLint *))
				getGLProcAddressHelper("glRasterPos4iv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4sv ( const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRasterPos4sv (
		JNIEnv *env, jobject obj,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(const GLshort *) = NULL;
		jshort *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLshort *))
				getGLProcAddressHelper("glRasterPos4sv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectd ( GLdouble x1 , GLdouble y1 , GLdouble x2 , GLdouble y2 ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRectd (
		JNIEnv *env, jobject obj,
		jdouble x1,
		jdouble y1,
		jdouble x2,
		jdouble y2)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glRectd", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) x1,
			(GLdouble) y1,
			(GLdouble) x2,
			(GLdouble) y2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectf ( GLfloat x1 , GLfloat y1 , GLfloat x2 , GLfloat y2 ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRectf (
		JNIEnv *env, jobject obj,
		jfloat x1,
		jfloat y1,
		jfloat x2,
		jfloat y2)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat))
				getGLProcAddressHelper("glRectf", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) x1,
			(GLfloat) y1,
			(GLfloat) x2,
			(GLfloat) y2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRecti ( GLint x1 , GLint y1 , GLint x2 , GLint y2 ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRecti (
		JNIEnv *env, jobject obj,
		jint x1,
		jint y1,
		jint x2,
		jint y2)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLint, GLint))
				getGLProcAddressHelper("glRecti", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) x1,
			(GLint) y1,
			(GLint) x2,
			(GLint) y2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRects ( GLshort x1 , GLshort y1 , GLshort x2 , GLshort y2 ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRects (
		JNIEnv *env, jobject obj,
		jshort x1,
		jshort y1,
		jshort x2,
		jshort y2)
	{
		static void (CALLBACK *__func_ptr__)(GLshort, GLshort, GLshort, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLshort, GLshort, GLshort, GLshort))
				getGLProcAddressHelper("glRects", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLshort) x1,
			(GLshort) y1,
			(GLshort) x2,
			(GLshort) y2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectdv ( const GLdouble * v1 , const GLdouble * v2 ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRectdv (
		JNIEnv *env, jobject obj,
		jdoubleArray v1,
		jdoubleArray v2)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *, const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;
		jdouble *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *, const GLdouble *))
				getGLProcAddressHelper("glRectdv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v1!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v1, 0);
		}
		if(v2!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, v2, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0,
			(const GLdouble *) ptr1
		);

		if(v1!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v1, ptr0, JNI_ABORT);
		}
		if(v2!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v2, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectfv ( const GLfloat * v1 , const GLfloat * v2 ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRectfv (
		JNIEnv *env, jobject obj,
		jfloatArray v1,
		jfloatArray v2)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *, const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;
		jfloat *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *, const GLfloat *))
				getGLProcAddressHelper("glRectfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v1!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v1, 0);
		}
		if(v2!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, v2, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0,
			(const GLfloat *) ptr1
		);

		if(v1!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v1, ptr0, JNI_ABORT);
		}
		if(v2!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v2, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectiv ( const GLint * v1 , const GLint * v2 ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRectiv (
		JNIEnv *env, jobject obj,
		jintArray v1,
		jintArray v2)
	{
		static void (CALLBACK *__func_ptr__)(const GLint *, const GLint *) = NULL;
		jint *ptr0 = NULL;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLint *, const GLint *))
				getGLProcAddressHelper("glRectiv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v1!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v1, 0);
		}
		if(v2!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, v2, 0);
		}
		__func_ptr__ (
			(const GLint *) ptr0,
			(const GLint *) ptr1
		);

		if(v1!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v1, ptr0, JNI_ABORT);
		}
		if(v2!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v2, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectsv ( const GLshort * v1 , const GLshort * v2 ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRectsv (
		JNIEnv *env, jobject obj,
		jshortArray v1,
		jshortArray v2)
	{
		static void (CALLBACK *__func_ptr__)(const GLshort *, const GLshort *) = NULL;
		jshort *ptr0 = NULL;
		jshort *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLshort *, const GLshort *))
				getGLProcAddressHelper("glRectsv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v1!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v1, 0);
		}
		if(v2!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, v2, 0);
		}
		__func_ptr__ (
			(const GLshort *) ptr0,
			(const GLshort *) ptr1
		);

		if(v1!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v1, ptr0, JNI_ABORT);
		}
		if(v2!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v2, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexPointer ( GLint size , GLenum type , GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointer__III_3B (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jbyteArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jbyte *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glVertexPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointer__III_3S (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jshortArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jshort *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glVertexPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointer__III_3I (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jintArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jint *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glVertexPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointer__III_3F (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jfloatArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jfloat *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glVertexPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointer__III_3D (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jdoubleArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jdouble *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glVertexPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointer__III_3Z (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jbooleanArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jboolean *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glVertexPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointer__III_3J (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jlongArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jlong *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glVertexPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalPointer ( GLenum type , GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointer__II_3B (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jbyteArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jbyte *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glNormalPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  ptr, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointer__II_3S (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jshortArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jshort *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glNormalPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  ptr, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointer__II_3I (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jintArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glNormalPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  ptr, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointer__II_3F (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jfloatArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glNormalPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  ptr, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointer__II_3D (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jdoubleArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jdouble *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glNormalPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  ptr, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointer__II_3Z (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jbooleanArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jboolean *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glNormalPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  ptr, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointer__II_3J (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jlongArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jlong *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glNormalPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  ptr, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorPointer ( GLint size , GLenum type , GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointer__III_3B (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jbyteArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jbyte *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glColorPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointer__III_3S (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jshortArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jshort *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glColorPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointer__III_3I (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jintArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jint *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glColorPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointer__III_3F (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jfloatArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jfloat *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glColorPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointer__III_3D (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jdoubleArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jdouble *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glColorPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointer__III_3Z (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jbooleanArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jboolean *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glColorPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointer__III_3J (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jlongArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jlong *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glColorPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexPointer ( GLenum type , GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointer__II_3B (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jbyteArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jbyte *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glIndexPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  ptr, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointer__II_3S (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jshortArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jshort *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glIndexPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  ptr, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointer__II_3I (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jintArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glIndexPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  ptr, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointer__II_3F (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jfloatArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glIndexPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  ptr, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointer__II_3D (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jdoubleArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jdouble *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glIndexPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  ptr, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointer__II_3Z (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jbooleanArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jboolean *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glIndexPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  ptr, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointer__II_3J (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jlongArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jlong *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glIndexPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  ptr, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoordPointer ( GLint size , GLenum type , GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointer__III_3B (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jbyteArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jbyte *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glTexCoordPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointer__III_3S (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jshortArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jshort *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glTexCoordPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointer__III_3I (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jintArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jint *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glTexCoordPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointer__III_3F (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jfloatArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jfloat *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glTexCoordPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointer__III_3D (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jdoubleArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jdouble *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glTexCoordPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointer__III_3Z (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jbooleanArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jboolean *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glTexCoordPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointer__III_3J (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jlongArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, const GLvoid *) = NULL;
		jlong *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glTexCoordPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlagPointer ( GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlagPointer__I_3B (
		JNIEnv *env, jobject obj,
		jint stride,
		jbyteArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, const GLvoid *) = NULL;
		jbyte *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, const GLvoid *))
				getGLProcAddressHelper("glEdgeFlagPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr1 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLsizei) stride,
			(const GLvoid *) ptr1
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  ptr, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlagPointer__I_3S (
		JNIEnv *env, jobject obj,
		jint stride,
		jshortArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, const GLvoid *) = NULL;
		jshort *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, const GLvoid *))
				getGLProcAddressHelper("glEdgeFlagPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLsizei) stride,
			(const GLvoid *) ptr1
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  ptr, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlagPointer__I_3I (
		JNIEnv *env, jobject obj,
		jint stride,
		jintArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, const GLvoid *) = NULL;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, const GLvoid *))
				getGLProcAddressHelper("glEdgeFlagPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLsizei) stride,
			(const GLvoid *) ptr1
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  ptr, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlagPointer__I_3F (
		JNIEnv *env, jobject obj,
		jint stride,
		jfloatArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, const GLvoid *) = NULL;
		jfloat *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, const GLvoid *))
				getGLProcAddressHelper("glEdgeFlagPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLsizei) stride,
			(const GLvoid *) ptr1
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  ptr, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlagPointer__I_3D (
		JNIEnv *env, jobject obj,
		jint stride,
		jdoubleArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, const GLvoid *) = NULL;
		jdouble *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, const GLvoid *))
				getGLProcAddressHelper("glEdgeFlagPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLsizei) stride,
			(const GLvoid *) ptr1
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  ptr, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlagPointer__I_3Z (
		JNIEnv *env, jobject obj,
		jint stride,
		jbooleanArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, const GLvoid *) = NULL;
		jboolean *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, const GLvoid *))
				getGLProcAddressHelper("glEdgeFlagPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr1 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLsizei) stride,
			(const GLvoid *) ptr1
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  ptr, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlagPointer__I_3J (
		JNIEnv *env, jobject obj,
		jint stride,
		jlongArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, const GLvoid *) = NULL;
		jlong *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, const GLvoid *))
				getGLProcAddressHelper("glEdgeFlagPointer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr1 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLsizei) stride,
			(const GLvoid *) ptr1
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  ptr, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPointerv ( GLenum pname , void * * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPointerv__I_3_3B (
		JNIEnv *env, jobject obj,
		jint pname,
		jbyteArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, void **) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jbyte *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, void **))
				getGLProcAddressHelper("glGetPointerv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetByteArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(void **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPointerv__I_3_3S (
		JNIEnv *env, jobject obj,
		jint pname,
		jshortArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, void **) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jshort *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, void **))
				getGLProcAddressHelper("glGetPointerv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(void **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPointerv__I_3_3I (
		JNIEnv *env, jobject obj,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, void **) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, void **))
				getGLProcAddressHelper("glGetPointerv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(void **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPointerv__I_3_3F (
		JNIEnv *env, jobject obj,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, void **) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, void **))
				getGLProcAddressHelper("glGetPointerv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(void **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPointerv__I_3_3D (
		JNIEnv *env, jobject obj,
		jint pname,
		jdoubleArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, void **) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, void **))
				getGLProcAddressHelper("glGetPointerv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(void **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPointerv__I_3_3Z (
		JNIEnv *env, jobject obj,
		jint pname,
		jbooleanArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, void **) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jboolean *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, void **))
				getGLProcAddressHelper("glGetPointerv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetBooleanArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(void **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPointerv__I_3_3J (
		JNIEnv *env, jobject obj,
		jint pname,
		jlongArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, void **) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jlong *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, void **))
				getGLProcAddressHelper("glGetPointerv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetLongArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(void **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glArrayElement ( GLint i ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glArrayElement (
		JNIEnv *env, jobject obj,
		jint i)
	{
		static void (CALLBACK *__func_ptr__)(GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint))
				getGLProcAddressHelper("glArrayElement", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) i
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawArrays ( GLenum mode , GLint first , GLsizei count ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawArrays (
		JNIEnv *env, jobject obj,
		jint mode,
		jint first,
		jint count)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLsizei) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLsizei))
				getGLProcAddressHelper("glDrawArrays", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLint) first,
			(GLsizei) count
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawElements ( GLenum mode , GLsizei count , GLenum type , const GLvoid * indices ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawElements__III_3B (
		JNIEnv *env, jobject obj,
		jint mode,
		jint count,
		jint type,
		jbyteArray indices)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLenum, const GLvoid *) = NULL;
		jbyte *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawElements", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(indices!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, indices, 0);
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr3
		);

		if(indices!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  indices, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawElements__III_3S (
		JNIEnv *env, jobject obj,
		jint mode,
		jint count,
		jint type,
		jshortArray indices)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLenum, const GLvoid *) = NULL;
		jshort *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawElements", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(indices!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, indices, 0);
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr3
		);

		if(indices!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  indices, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawElements__III_3I (
		JNIEnv *env, jobject obj,
		jint mode,
		jint count,
		jint type,
		jintArray indices)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLenum, const GLvoid *) = NULL;
		jint *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawElements", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(indices!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, indices, 0);
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr3
		);

		if(indices!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  indices, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawElements__III_3F (
		JNIEnv *env, jobject obj,
		jint mode,
		jint count,
		jint type,
		jfloatArray indices)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLenum, const GLvoid *) = NULL;
		jfloat *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawElements", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(indices!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, indices, 0);
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr3
		);

		if(indices!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  indices, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawElements__III_3D (
		JNIEnv *env, jobject obj,
		jint mode,
		jint count,
		jint type,
		jdoubleArray indices)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLenum, const GLvoid *) = NULL;
		jdouble *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawElements", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(indices!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, indices, 0);
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr3
		);

		if(indices!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  indices, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawElements__III_3Z (
		JNIEnv *env, jobject obj,
		jint mode,
		jint count,
		jint type,
		jbooleanArray indices)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLenum, const GLvoid *) = NULL;
		jboolean *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawElements", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(indices!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, indices, 0);
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr3
		);

		if(indices!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  indices, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawElements__III_3J (
		JNIEnv *env, jobject obj,
		jint mode,
		jint count,
		jint type,
		jlongArray indices)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLenum, const GLvoid *) = NULL;
		jlong *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawElements", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(indices!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, indices, 0);
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr3
		);

		if(indices!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  indices, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glInterleavedArrays ( GLenum format , GLsizei stride , const GLvoid * pointer ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glInterleavedArrays__II_3B (
		JNIEnv *env, jobject obj,
		jint format,
		jint stride,
		jbyteArray pointer)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jbyte *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glInterleavedArrays", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pointer!=NULL)
		{
			ptr2 = (*env)->GetByteArrayElements(env, pointer, 0);
		}
		__func_ptr__ (
			(GLenum) format,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(pointer!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  pointer, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glInterleavedArrays__II_3S (
		JNIEnv *env, jobject obj,
		jint format,
		jint stride,
		jshortArray pointer)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jshort *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glInterleavedArrays", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pointer!=NULL)
		{
			ptr2 = (*env)->GetShortArrayElements(env, pointer, 0);
		}
		__func_ptr__ (
			(GLenum) format,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(pointer!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  pointer, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glInterleavedArrays__II_3I (
		JNIEnv *env, jobject obj,
		jint format,
		jint stride,
		jintArray pointer)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glInterleavedArrays", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pointer!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, pointer, 0);
		}
		__func_ptr__ (
			(GLenum) format,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(pointer!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  pointer, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glInterleavedArrays__II_3F (
		JNIEnv *env, jobject obj,
		jint format,
		jint stride,
		jfloatArray pointer)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glInterleavedArrays", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pointer!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, pointer, 0);
		}
		__func_ptr__ (
			(GLenum) format,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(pointer!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  pointer, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glInterleavedArrays__II_3D (
		JNIEnv *env, jobject obj,
		jint format,
		jint stride,
		jdoubleArray pointer)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jdouble *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glInterleavedArrays", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pointer!=NULL)
		{
			ptr2 = (*env)->GetDoubleArrayElements(env, pointer, 0);
		}
		__func_ptr__ (
			(GLenum) format,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(pointer!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  pointer, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glInterleavedArrays__II_3Z (
		JNIEnv *env, jobject obj,
		jint format,
		jint stride,
		jbooleanArray pointer)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jboolean *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glInterleavedArrays", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pointer!=NULL)
		{
			ptr2 = (*env)->GetBooleanArrayElements(env, pointer, 0);
		}
		__func_ptr__ (
			(GLenum) format,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(pointer!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  pointer, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glInterleavedArrays__II_3J (
		JNIEnv *env, jobject obj,
		jint format,
		jint stride,
		jlongArray pointer)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, const GLvoid *) = NULL;
		jlong *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glInterleavedArrays", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pointer!=NULL)
		{
			ptr2 = (*env)->GetLongArrayElements(env, pointer, 0);
		}
		__func_ptr__ (
			(GLenum) format,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(pointer!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  pointer, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glShadeModel ( GLenum mode ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glShadeModel (
		JNIEnv *env, jobject obj,
		jint mode)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glShadeModel", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) mode
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightf ( GLenum light , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLightf (
		JNIEnv *env, jobject obj,
		jint light,
		jint pname,
		jfloat param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
				getGLProcAddressHelper("glLightf", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) light,
			(GLenum) pname,
			(GLfloat) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLighti ( GLenum light , GLenum pname , GLint param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLighti (
		JNIEnv *env, jobject obj,
		jint light,
		jint pname,
		jint param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint))
				getGLProcAddressHelper("glLighti", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) light,
			(GLenum) pname,
			(GLint) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightfv ( GLenum light , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLightfv (
		JNIEnv *env, jobject obj,
		jint light,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, const GLfloat *) = NULL;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
				getGLProcAddressHelper("glLightfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) light,
			(GLenum) pname,
			(const GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightiv ( GLenum light , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLightiv (
		JNIEnv *env, jobject obj,
		jint light,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, const GLint *) = NULL;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
				getGLProcAddressHelper("glLightiv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) light,
			(GLenum) pname,
			(const GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetLightfv ( GLenum light , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetLightfv (
		JNIEnv *env, jobject obj,
		jint light,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
				getGLProcAddressHelper("glGetLightfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) light,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetLightiv ( GLenum light , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetLightiv (
		JNIEnv *env, jobject obj,
		jint light,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint *))
				getGLProcAddressHelper("glGetLightiv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) light,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightModelf ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLightModelf (
		JNIEnv *env, jobject obj,
		jint pname,
		jfloat param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLfloat))
				getGLProcAddressHelper("glLightModelf", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) pname,
			(GLfloat) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightModeli ( GLenum pname , GLint param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLightModeli (
		JNIEnv *env, jobject obj,
		jint pname,
		jint param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint))
				getGLProcAddressHelper("glLightModeli", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) pname,
			(GLint) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightModelfv ( GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLightModelfv (
		JNIEnv *env, jobject obj,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLfloat *) = NULL;
		jfloat *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLfloat *))
				getGLProcAddressHelper("glLightModelfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) pname,
			(const GLfloat *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightModeliv ( GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLightModeliv (
		JNIEnv *env, jobject obj,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLint *) = NULL;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLint *))
				getGLProcAddressHelper("glLightModeliv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) pname,
			(const GLint *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMaterialf ( GLenum face , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMaterialf (
		JNIEnv *env, jobject obj,
		jint face,
		jint pname,
		jfloat param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
				getGLProcAddressHelper("glMaterialf", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) face,
			(GLenum) pname,
			(GLfloat) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMateriali ( GLenum face , GLenum pname , GLint param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMateriali (
		JNIEnv *env, jobject obj,
		jint face,
		jint pname,
		jint param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint))
				getGLProcAddressHelper("glMateriali", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) face,
			(GLenum) pname,
			(GLint) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMaterialfv ( GLenum face , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMaterialfv (
		JNIEnv *env, jobject obj,
		jint face,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, const GLfloat *) = NULL;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
				getGLProcAddressHelper("glMaterialfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) face,
			(GLenum) pname,
			(const GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMaterialiv ( GLenum face , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMaterialiv (
		JNIEnv *env, jobject obj,
		jint face,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, const GLint *) = NULL;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
				getGLProcAddressHelper("glMaterialiv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) face,
			(GLenum) pname,
			(const GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMaterialfv ( GLenum face , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMaterialfv (
		JNIEnv *env, jobject obj,
		jint face,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
				getGLProcAddressHelper("glGetMaterialfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) face,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMaterialiv ( GLenum face , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMaterialiv (
		JNIEnv *env, jobject obj,
		jint face,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint *))
				getGLProcAddressHelper("glGetMaterialiv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) face,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorMaterial ( GLenum face , GLenum mode ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorMaterial (
		JNIEnv *env, jobject obj,
		jint face,
		jint mode)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum))
				getGLProcAddressHelper("glColorMaterial", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) face,
			(GLenum) mode
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelZoom ( GLfloat xfactor , GLfloat yfactor ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelZoom (
		JNIEnv *env, jobject obj,
		jfloat xfactor,
		jfloat yfactor)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat))
				getGLProcAddressHelper("glPixelZoom", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) xfactor,
			(GLfloat) yfactor
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelStoref ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelStoref (
		JNIEnv *env, jobject obj,
		jint pname,
		jfloat param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLfloat))
				getGLProcAddressHelper("glPixelStoref", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) pname,
			(GLfloat) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelStorei ( GLenum pname , GLint param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelStorei (
		JNIEnv *env, jobject obj,
		jint pname,
		jint param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint))
				getGLProcAddressHelper("glPixelStorei", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) pname,
			(GLint) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransferf ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelTransferf (
		JNIEnv *env, jobject obj,
		jint pname,
		jfloat param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLfloat))
				getGLProcAddressHelper("glPixelTransferf", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) pname,
			(GLfloat) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransferi ( GLenum pname , GLint param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelTransferi (
		JNIEnv *env, jobject obj,
		jint pname,
		jint param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint))
				getGLProcAddressHelper("glPixelTransferi", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) pname,
			(GLint) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelMapfv ( GLenum map , GLint mapsize , const GLfloat * values ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelMapfv (
		JNIEnv *env, jobject obj,
		jint map,
		jint mapsize,
		jfloatArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, const GLfloat *) = NULL;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, const GLfloat *))
				getGLProcAddressHelper("glPixelMapfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, values, 0);
		}
		__func_ptr__ (
			(GLenum) map,
			(GLint) mapsize,
			(const GLfloat *) ptr2
		);

		if(values!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  values, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelMapuiv ( GLenum map , GLint mapsize , const GLuint * values ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelMapuiv (
		JNIEnv *env, jobject obj,
		jint map,
		jint mapsize,
		jintArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, const GLuint *) = NULL;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, const GLuint *))
				getGLProcAddressHelper("glPixelMapuiv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, values, 0);
		}
		__func_ptr__ (
			(GLenum) map,
			(GLint) mapsize,
			(const GLuint *) ptr2
		);

		if(values!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  values, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelMapusv ( GLenum map , GLint mapsize , const GLushort * values ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelMapusv (
		JNIEnv *env, jobject obj,
		jint map,
		jint mapsize,
		jshortArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, const GLushort *) = NULL;
		jshort *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, const GLushort *))
				getGLProcAddressHelper("glPixelMapusv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr2 = (*env)->GetShortArrayElements(env, values, 0);
		}
		__func_ptr__ (
			(GLenum) map,
			(GLint) mapsize,
			(const GLushort *) ptr2
		);

		if(values!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  values, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelMapfv ( GLenum map , GLfloat * values ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPixelMapfv (
		JNIEnv *env, jobject obj,
		jint map,
		jfloatArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLfloat *) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLfloat *))
				getGLProcAddressHelper("glGetPixelMapfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, values, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) map,
			(GLfloat *) ptr1
		);

		if(values!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  values, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelMapuiv ( GLenum map , GLuint * values ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPixelMapuiv (
		JNIEnv *env, jobject obj,
		jint map,
		jintArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLuint *) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLuint *))
				getGLProcAddressHelper("glGetPixelMapuiv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, values, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) map,
			(GLuint *) ptr1
		);

		if(values!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  values, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelMapusv ( GLenum map , GLushort * values ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPixelMapusv (
		JNIEnv *env, jobject obj,
		jint map,
		jshortArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLushort *) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jshort *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLushort *))
				getGLProcAddressHelper("glGetPixelMapusv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, values, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) map,
			(GLushort *) ptr1
		);

		if(values!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  values, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBitmap ( GLsizei width , GLsizei height , GLfloat xorig , GLfloat yorig , GLfloat xmove , GLfloat ymove , const GLubyte * bitmap ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBitmap (
		JNIEnv *env, jobject obj,
		jint width,
		jint height,
		jfloat xorig,
		jfloat yorig,
		jfloat xmove,
		jfloat ymove,
		jbyteArray bitmap)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *) = NULL;
		jbyte *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *))
				getGLProcAddressHelper("glBitmap", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(bitmap!=NULL)
		{
			ptr6 = (*env)->GetByteArrayElements(env, bitmap, 0);
		}
		__func_ptr__ (
			(GLsizei) width,
			(GLsizei) height,
			(GLfloat) xorig,
			(GLfloat) yorig,
			(GLfloat) xmove,
			(GLfloat) ymove,
			(const GLubyte *) ptr6
		);

		if(bitmap!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  bitmap, ptr6, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReadPixels ( GLint x , GLint y , GLsizei width , GLsizei height , GLenum format , GLenum type , GLvoid * pixels ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReadPixels__IIIIII_3B (
		JNIEnv *env, jobject obj,
		jint x,
		jint y,
		jint width,
		jint height,
		jint format,
		jint type,
		jbyteArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray6 = JNI_FALSE;
		jbyte *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glReadPixels", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetByteArrayElements(env, pixels, &isCopiedArray6);
		}
		__func_ptr__ (
			(GLint) x,
			(GLint) y,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr6
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  pixels, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReadPixels__IIIIII_3S (
		JNIEnv *env, jobject obj,
		jint x,
		jint y,
		jint width,
		jint height,
		jint format,
		jint type,
		jshortArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray6 = JNI_FALSE;
		jshort *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glReadPixels", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetShortArrayElements(env, pixels, &isCopiedArray6);
		}
		__func_ptr__ (
			(GLint) x,
			(GLint) y,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr6
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  pixels, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReadPixels__IIIIII_3I (
		JNIEnv *env, jobject obj,
		jint x,
		jint y,
		jint width,
		jint height,
		jint format,
		jint type,
		jintArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray6 = JNI_FALSE;
		jint *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glReadPixels", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetIntArrayElements(env, pixels, &isCopiedArray6);
		}
		__func_ptr__ (
			(GLint) x,
			(GLint) y,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr6
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  pixels, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReadPixels__IIIIII_3F (
		JNIEnv *env, jobject obj,
		jint x,
		jint y,
		jint width,
		jint height,
		jint format,
		jint type,
		jfloatArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray6 = JNI_FALSE;
		jfloat *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glReadPixels", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetFloatArrayElements(env, pixels, &isCopiedArray6);
		}
		__func_ptr__ (
			(GLint) x,
			(GLint) y,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr6
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  pixels, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReadPixels__IIIIII_3D (
		JNIEnv *env, jobject obj,
		jint x,
		jint y,
		jint width,
		jint height,
		jint format,
		jint type,
		jdoubleArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray6 = JNI_FALSE;
		jdouble *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glReadPixels", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetDoubleArrayElements(env, pixels, &isCopiedArray6);
		}
		__func_ptr__ (
			(GLint) x,
			(GLint) y,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr6
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  pixels, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReadPixels__IIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint x,
		jint y,
		jint width,
		jint height,
		jint format,
		jint type,
		jbooleanArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray6 = JNI_FALSE;
		jboolean *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glReadPixels", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetBooleanArrayElements(env, pixels, &isCopiedArray6);
		}
		__func_ptr__ (
			(GLint) x,
			(GLint) y,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr6
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  pixels, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReadPixels__IIIIII_3J (
		JNIEnv *env, jobject obj,
		jint x,
		jint y,
		jint width,
		jint height,
		jint format,
		jint type,
		jlongArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray6 = JNI_FALSE;
		jlong *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glReadPixels", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetLongArrayElements(env, pixels, &isCopiedArray6);
		}
		__func_ptr__ (
			(GLint) x,
			(GLint) y,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr6
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  pixels, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawPixels ( GLsizei width , GLsizei height , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawPixels__IIII_3B (
		JNIEnv *env, jobject obj,
		jint width,
		jint height,
		jint format,
		jint type,
		jbyteArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jbyte *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawPixels", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr4
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  pixels, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawPixels__IIII_3S (
		JNIEnv *env, jobject obj,
		jint width,
		jint height,
		jint format,
		jint type,
		jshortArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jshort *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawPixels", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr4
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  pixels, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawPixels__IIII_3I (
		JNIEnv *env, jobject obj,
		jint width,
		jint height,
		jint format,
		jint type,
		jintArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jint *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawPixels", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr4
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  pixels, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawPixels__IIII_3F (
		JNIEnv *env, jobject obj,
		jint width,
		jint height,
		jint format,
		jint type,
		jfloatArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jfloat *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawPixels", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr4
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  pixels, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawPixels__IIII_3D (
		JNIEnv *env, jobject obj,
		jint width,
		jint height,
		jint format,
		jint type,
		jdoubleArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jdouble *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawPixels", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr4
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  pixels, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawPixels__IIII_3Z (
		JNIEnv *env, jobject obj,
		jint width,
		jint height,
		jint format,
		jint type,
		jbooleanArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jboolean *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawPixels", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr4
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  pixels, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawPixels__IIII_3J (
		JNIEnv *env, jobject obj,
		jint width,
		jint height,
		jint format,
		jint type,
		jlongArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jlong *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawPixels", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr4
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  pixels, ptr4, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyPixels ( GLint x , GLint y , GLsizei width , GLsizei height , GLenum type ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyPixels (
		JNIEnv *env, jobject obj,
		jint x,
		jint y,
		jint width,
		jint height,
		jint type)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint, GLsizei, GLsizei, GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint, GLsizei, GLsizei, GLenum))
				getGLProcAddressHelper("glCopyPixels", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) x,
			(GLint) y,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) type
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStencilFunc ( GLenum func , GLint ref , GLuint mask ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glStencilFunc (
		JNIEnv *env, jobject obj,
		jint func,
		jint ref,
		jint mask)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLuint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLuint))
				getGLProcAddressHelper("glStencilFunc", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) func,
			(GLint) ref,
			(GLuint) mask
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStencilMask ( GLuint mask ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glStencilMask (
		JNIEnv *env, jobject obj,
		jint mask)
	{
		static void (CALLBACK *__func_ptr__)(GLuint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLuint))
				getGLProcAddressHelper("glStencilMask", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLuint) mask
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStencilOp ( GLenum fail , GLenum zfail , GLenum zpass ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glStencilOp (
		JNIEnv *env, jobject obj,
		jint fail,
		jint zfail,
		jint zpass)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum))
				getGLProcAddressHelper("glStencilOp", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) fail,
			(GLenum) zfail,
			(GLenum) zpass
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearStencil ( GLint s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glClearStencil (
		JNIEnv *env, jobject obj,
		jint s)
	{
		static void (CALLBACK *__func_ptr__)(GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint))
				getGLProcAddressHelper("glClearStencil", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGend ( GLenum coord , GLenum pname , GLdouble param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexGend (
		JNIEnv *env, jobject obj,
		jint coord,
		jint pname,
		jdouble param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLdouble))
				getGLProcAddressHelper("glTexGend", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) coord,
			(GLenum) pname,
			(GLdouble) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGenf ( GLenum coord , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexGenf (
		JNIEnv *env, jobject obj,
		jint coord,
		jint pname,
		jfloat param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
				getGLProcAddressHelper("glTexGenf", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) coord,
			(GLenum) pname,
			(GLfloat) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGeni ( GLenum coord , GLenum pname , GLint param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexGeni (
		JNIEnv *env, jobject obj,
		jint coord,
		jint pname,
		jint param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint))
				getGLProcAddressHelper("glTexGeni", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) coord,
			(GLenum) pname,
			(GLint) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGendv ( GLenum coord , GLenum pname , const GLdouble * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexGendv (
		JNIEnv *env, jobject obj,
		jint coord,
		jint pname,
		jdoubleArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, const GLdouble *) = NULL;
		jdouble *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, const GLdouble *))
				getGLProcAddressHelper("glTexGendv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetDoubleArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) coord,
			(GLenum) pname,
			(const GLdouble *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  params, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGenfv ( GLenum coord , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexGenfv (
		JNIEnv *env, jobject obj,
		jint coord,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, const GLfloat *) = NULL;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
				getGLProcAddressHelper("glTexGenfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) coord,
			(GLenum) pname,
			(const GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGeniv ( GLenum coord , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexGeniv (
		JNIEnv *env, jobject obj,
		jint coord,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, const GLint *) = NULL;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
				getGLProcAddressHelper("glTexGeniv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) coord,
			(GLenum) pname,
			(const GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexGendv ( GLenum coord , GLenum pname , GLdouble * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexGendv (
		JNIEnv *env, jobject obj,
		jint coord,
		jint pname,
		jdoubleArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLdouble *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLdouble *))
				getGLProcAddressHelper("glGetTexGendv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetDoubleArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) coord,
			(GLenum) pname,
			(GLdouble *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexGenfv ( GLenum coord , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexGenfv (
		JNIEnv *env, jobject obj,
		jint coord,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
				getGLProcAddressHelper("glGetTexGenfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) coord,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexGeniv ( GLenum coord , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexGeniv (
		JNIEnv *env, jobject obj,
		jint coord,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint *))
				getGLProcAddressHelper("glGetTexGeniv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) coord,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexEnvf ( GLenum target , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexEnvf (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jfloat param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
				getGLProcAddressHelper("glTexEnvf", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexEnvi ( GLenum target , GLenum pname , GLint param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexEnvi (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jint param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint))
				getGLProcAddressHelper("glTexEnvi", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLint) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexEnvfv ( GLenum target , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexEnvfv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, const GLfloat *) = NULL;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
				getGLProcAddressHelper("glTexEnvfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(const GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexEnviv ( GLenum target , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexEnviv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, const GLint *) = NULL;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
				getGLProcAddressHelper("glTexEnviv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(const GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexEnvfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexEnvfv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
				getGLProcAddressHelper("glGetTexEnvfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexEnviv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexEnviv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint *))
				getGLProcAddressHelper("glGetTexEnviv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexParameterf ( GLenum target , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexParameterf (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jfloat param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
				getGLProcAddressHelper("glTexParameterf", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexParameteri ( GLenum target , GLenum pname , GLint param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexParameteri (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jint param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint))
				getGLProcAddressHelper("glTexParameteri", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLint) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexParameterfv ( GLenum target , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexParameterfv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, const GLfloat *) = NULL;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
				getGLProcAddressHelper("glTexParameterfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(const GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexParameteriv ( GLenum target , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexParameteriv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, const GLint *) = NULL;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
				getGLProcAddressHelper("glTexParameteriv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(const GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexParameterfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexParameterfv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
				getGLProcAddressHelper("glGetTexParameterfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexParameteriv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexParameteriv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint *))
				getGLProcAddressHelper("glGetTexParameteriv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexLevelParameterfv ( GLenum target , GLint level , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexLevelParameterfv (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLfloat *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLfloat *))
				getGLProcAddressHelper("glGetTexLevelParameterfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) pname,
			(GLfloat *) ptr3
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexLevelParameteriv ( GLenum target , GLint level , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexLevelParameteriv (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLint *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLint *))
				getGLProcAddressHelper("glGetTexLevelParameteriv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, params, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) pname,
			(GLint *) ptr3
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage1D ( GLenum target , GLint level , GLint internalFormat , GLsizei width , GLint border , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage1D__IIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint border,
		jint format,
		jint type,
		jbyteArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jbyte *ptr7 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr7 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr7
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  pixels, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage1D__IIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint border,
		jint format,
		jint type,
		jshortArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jshort *ptr7 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr7 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr7
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  pixels, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage1D__IIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint border,
		jint format,
		jint type,
		jintArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jint *ptr7 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr7 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr7
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  pixels, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage1D__IIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint border,
		jint format,
		jint type,
		jfloatArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jfloat *ptr7 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr7 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr7
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  pixels, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage1D__IIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint border,
		jint format,
		jint type,
		jdoubleArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jdouble *ptr7 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr7 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr7
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  pixels, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage1D__IIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint border,
		jint format,
		jint type,
		jbooleanArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jboolean *ptr7 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr7 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr7
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  pixels, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage1D__IIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint border,
		jint format,
		jint type,
		jlongArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jlong *ptr7 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr7 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr7
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  pixels, ptr7, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage2D ( GLenum target , GLint level , GLint internalFormat , GLsizei width , GLsizei height , GLint border , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage2D__IIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint border,
		jint format,
		jint type,
		jbyteArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jbyte *ptr8 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr8
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  pixels, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage2D__IIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint border,
		jint format,
		jint type,
		jshortArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jshort *ptr8 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr8
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  pixels, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage2D__IIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint border,
		jint format,
		jint type,
		jintArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jint *ptr8 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr8
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  pixels, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage2D__IIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint border,
		jint format,
		jint type,
		jfloatArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jfloat *ptr8 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr8
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  pixels, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage2D__IIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint border,
		jint format,
		jint type,
		jdoubleArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jdouble *ptr8 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr8
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  pixels, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage2D__IIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint border,
		jint format,
		jint type,
		jbooleanArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jboolean *ptr8 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr8
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  pixels, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage2D__IIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint border,
		jint format,
		jint type,
		jlongArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jlong *ptr8 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr8
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  pixels, ptr8, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexImage ( GLenum target , GLint level , GLenum format , GLenum type , GLvoid * pixels ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexImage__IIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint format,
		jint type,
		jbyteArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jbyte *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetTexImage", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetByteArrayElements(env, pixels, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr4
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  pixels, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexImage__IIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint format,
		jint type,
		jshortArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jshort *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetTexImage", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetShortArrayElements(env, pixels, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr4
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  pixels, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexImage__IIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint format,
		jint type,
		jintArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jint *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetTexImage", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, pixels, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr4
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  pixels, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexImage__IIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint format,
		jint type,
		jfloatArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetTexImage", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, pixels, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr4
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  pixels, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexImage__IIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint format,
		jint type,
		jdoubleArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jdouble *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetTexImage", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, pixels, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr4
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  pixels, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexImage__IIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint format,
		jint type,
		jbooleanArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jboolean *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetTexImage", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetBooleanArrayElements(env, pixels, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr4
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  pixels, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexImage__IIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint format,
		jint type,
		jlongArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jlong *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetTexImage", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetLongArrayElements(env, pixels, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr4
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  pixels, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGenTextures ( GLsizei n , GLuint * textures ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGenTextures (
		JNIEnv *env, jobject obj,
		jint n,
		jintArray textures)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLuint *) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLuint *))
				getGLProcAddressHelper("glGenTextures", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(textures!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, textures, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLsizei) n,
			(GLuint *) ptr1
		);

		if(textures!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  textures, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteTextures ( GLsizei n , const GLuint * textures ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDeleteTextures (
		JNIEnv *env, jobject obj,
		jint n,
		jintArray textures)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, const GLuint *) = NULL;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, const GLuint *))
				getGLProcAddressHelper("glDeleteTextures", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(textures!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, textures, 0);
		}
		__func_ptr__ (
			(GLsizei) n,
			(const GLuint *) ptr1
		);

		if(textures!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  textures, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindTexture ( GLenum target , GLuint texture ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBindTexture (
		JNIEnv *env, jobject obj,
		jint target,
		jint texture)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLuint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLuint))
				getGLProcAddressHelper("glBindTexture", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLuint) texture
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPrioritizeTextures ( GLsizei n , const GLuint * textures , const GLclampf * priorities ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPrioritizeTextures (
		JNIEnv *env, jobject obj,
		jint n,
		jintArray textures,
		jfloatArray priorities)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, const GLuint *, const GLclampf *) = NULL;
		jint *ptr1 = NULL;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, const GLuint *, const GLclampf *))
				getGLProcAddressHelper("glPrioritizeTextures", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(textures!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, textures, 0);
		}
		if(priorities!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, priorities, 0);
		}
		__func_ptr__ (
			(GLsizei) n,
			(const GLuint *) ptr1,
			(const GLclampf *) ptr2
		);

		if(textures!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  textures, ptr1, JNI_ABORT);
		}
		if(priorities!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  priorities, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glAreTexturesResident ( GLsizei n , const GLuint * textures , GLboolean * residences ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_GLFuncJauJNI_glAreTexturesResident (
		JNIEnv *env, jobject obj,
		jint n,
		jintArray textures,
		jbooleanArray residences)
	{
		static jboolean (CALLBACK *__func_ptr__)(GLsizei, const GLuint *, GLboolean *) = NULL;
		jboolean ret;

		jint *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jboolean *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (jboolean (CALLBACK *)(GLsizei, const GLuint *, GLboolean *))
				getGLProcAddressHelper("glAreTexturesResident", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return 0;
		}
		if(textures!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, textures, 0);
		}
		if(residences!=NULL)
		{
			ptr2 = (*env)->GetBooleanArrayElements(env, residences, &isCopiedArray2);
		}
		ret = (jboolean) __func_ptr__ (
			(GLsizei) n,
			(const GLuint *) ptr1,
			(GLboolean *) ptr2
		);

		if(textures!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  textures, ptr1, JNI_ABORT);
		}
		if(residences!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  residences, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsTexture ( GLuint texture ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_GLFuncJauJNI_glIsTexture (
		JNIEnv *env, jobject obj,
		jint texture)
	{
		static jboolean (CALLBACK *__func_ptr__)(GLuint) = NULL;
		jboolean ret;


		if(__func_ptr__==NULL) {
			__func_ptr__ = (jboolean (CALLBACK *)(GLuint))
				getGLProcAddressHelper("glIsTexture", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return 0;
		}
		ret = (jboolean) __func_ptr__ (
			(GLuint) texture
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage1D ( GLenum target , GLint level , GLint xoffset , GLsizei width , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage1D__IIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint width,
		jint format,
		jint type,
		jbyteArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jbyte *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  pixels, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage1D__IIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint width,
		jint format,
		jint type,
		jshortArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jshort *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  pixels, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage1D__IIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint width,
		jint format,
		jint type,
		jintArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jint *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  pixels, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage1D__IIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint width,
		jint format,
		jint type,
		jfloatArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jfloat *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  pixels, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage1D__IIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint width,
		jint format,
		jint type,
		jdoubleArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jdouble *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  pixels, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage1D__IIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint width,
		jint format,
		jint type,
		jbooleanArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jboolean *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  pixels, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage1D__IIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint width,
		jint format,
		jint type,
		jlongArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jlong *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  pixels, ptr6, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage2D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLsizei width , GLsizei height , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage2D__IIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint width,
		jint height,
		jint format,
		jint type,
		jbyteArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jbyte *ptr8 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr8
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  pixels, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage2D__IIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint width,
		jint height,
		jint format,
		jint type,
		jshortArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jshort *ptr8 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr8
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  pixels, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage2D__IIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint width,
		jint height,
		jint format,
		jint type,
		jintArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jint *ptr8 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr8
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  pixels, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage2D__IIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint width,
		jint height,
		jint format,
		jint type,
		jfloatArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jfloat *ptr8 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr8
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  pixels, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage2D__IIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint width,
		jint height,
		jint format,
		jint type,
		jdoubleArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jdouble *ptr8 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr8
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  pixels, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage2D__IIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint width,
		jint height,
		jint format,
		jint type,
		jbooleanArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jboolean *ptr8 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr8
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  pixels, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage2D__IIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint width,
		jint height,
		jint format,
		jint type,
		jlongArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jlong *ptr8 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr8
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  pixels, ptr8, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexImage1D ( GLenum target , GLint level , GLenum internalformat , GLint x , GLint y , GLsizei width , GLint border ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyTexImage1D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint x,
		jint y,
		jint width,
		jint border)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint))
				getGLProcAddressHelper("glCopyTexImage1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLint) x,
			(GLint) y,
			(GLsizei) width,
			(GLint) border
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexImage2D ( GLenum target , GLint level , GLenum internalformat , GLint x , GLint y , GLsizei width , GLsizei height , GLint border ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyTexImage2D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint x,
		jint y,
		jint width,
		jint height,
		jint border)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint))
				getGLProcAddressHelper("glCopyTexImage2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLint) x,
			(GLint) y,
			(GLsizei) width,
			(GLsizei) height,
			(GLint) border
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage1D ( GLenum target , GLint level , GLint xoffset , GLint x , GLint y , GLsizei width ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyTexSubImage1D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint x,
		jint y,
		jint width)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLsizei) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei))
				getGLProcAddressHelper("glCopyTexSubImage1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) x,
			(GLint) y,
			(GLsizei) width
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage2D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyTexSubImage2D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint x,
		jint y,
		jint width,
		jint height)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei))
				getGLProcAddressHelper("glCopyTexSubImage2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) x,
			(GLint) y,
			(GLsizei) width,
			(GLsizei) height
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMap1d ( GLenum target , GLdouble u1 , GLdouble u2 , GLint stride , GLint order , const GLdouble * points ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMap1d (
		JNIEnv *env, jobject obj,
		jint target,
		jdouble u1,
		jdouble u2,
		jint stride,
		jint order,
		jdoubleArray points)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *) = NULL;
		jdouble *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *))
				getGLProcAddressHelper("glMap1d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(points!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, points, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLdouble) u1,
			(GLdouble) u2,
			(GLint) stride,
			(GLint) order,
			(const GLdouble *) ptr5
		);

		if(points!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  points, ptr5, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMap1f ( GLenum target , GLfloat u1 , GLfloat u2 , GLint stride , GLint order , const GLfloat * points ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMap1f (
		JNIEnv *env, jobject obj,
		jint target,
		jfloat u1,
		jfloat u2,
		jint stride,
		jint order,
		jfloatArray points)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *) = NULL;
		jfloat *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *))
				getGLProcAddressHelper("glMap1f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(points!=NULL)
		{
			ptr5 = (*env)->GetFloatArrayElements(env, points, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLfloat) u1,
			(GLfloat) u2,
			(GLint) stride,
			(GLint) order,
			(const GLfloat *) ptr5
		);

		if(points!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  points, ptr5, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMap2d ( GLenum target , GLdouble u1 , GLdouble u2 , GLint ustride , GLint uorder , GLdouble v1 , GLdouble v2 , GLint vstride , GLint vorder , const GLdouble * points ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMap2d (
		JNIEnv *env, jobject obj,
		jint target,
		jdouble u1,
		jdouble u2,
		jint ustride,
		jint uorder,
		jdouble v1,
		jdouble v2,
		jint vstride,
		jint vorder,
		jdoubleArray points)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *) = NULL;
		jdouble *ptr9 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *))
				getGLProcAddressHelper("glMap2d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(points!=NULL)
		{
			ptr9 = (*env)->GetDoubleArrayElements(env, points, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLdouble) u1,
			(GLdouble) u2,
			(GLint) ustride,
			(GLint) uorder,
			(GLdouble) v1,
			(GLdouble) v2,
			(GLint) vstride,
			(GLint) vorder,
			(const GLdouble *) ptr9
		);

		if(points!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  points, ptr9, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMap2f ( GLenum target , GLfloat u1 , GLfloat u2 , GLint ustride , GLint uorder , GLfloat v1 , GLfloat v2 , GLint vstride , GLint vorder , const GLfloat * points ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMap2f (
		JNIEnv *env, jobject obj,
		jint target,
		jfloat u1,
		jfloat u2,
		jint ustride,
		jint uorder,
		jfloat v1,
		jfloat v2,
		jint vstride,
		jint vorder,
		jfloatArray points)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *) = NULL;
		jfloat *ptr9 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *))
				getGLProcAddressHelper("glMap2f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(points!=NULL)
		{
			ptr9 = (*env)->GetFloatArrayElements(env, points, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLfloat) u1,
			(GLfloat) u2,
			(GLint) ustride,
			(GLint) uorder,
			(GLfloat) v1,
			(GLfloat) v2,
			(GLint) vstride,
			(GLint) vorder,
			(const GLfloat *) ptr9
		);

		if(points!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  points, ptr9, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapdv ( GLenum target , GLenum query , GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMapdv (
		JNIEnv *env, jobject obj,
		jint target,
		jint query,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLdouble *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLdouble *))
				getGLProcAddressHelper("glGetMapdv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr2 = (*env)->GetDoubleArrayElements(env, v, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) query,
			(GLdouble *) ptr2
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapfv ( GLenum target , GLenum query , GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMapfv (
		JNIEnv *env, jobject obj,
		jint target,
		jint query,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
				getGLProcAddressHelper("glGetMapfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, v, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) query,
			(GLfloat *) ptr2
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapiv ( GLenum target , GLenum query , GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMapiv (
		JNIEnv *env, jobject obj,
		jint target,
		jint query,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint *))
				getGLProcAddressHelper("glGetMapiv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, v, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) query,
			(GLint *) ptr2
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord1d ( GLdouble u ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEvalCoord1d (
		JNIEnv *env, jobject obj,
		jdouble u)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble))
				getGLProcAddressHelper("glEvalCoord1d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) u
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord1f ( GLfloat u ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEvalCoord1f (
		JNIEnv *env, jobject obj,
		jfloat u)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat))
				getGLProcAddressHelper("glEvalCoord1f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) u
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord1dv ( const GLdouble * u ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEvalCoord1dv (
		JNIEnv *env, jobject obj,
		jdoubleArray u)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glEvalCoord1dv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(u!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, u, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(u!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  u, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord1fv ( const GLfloat * u ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEvalCoord1fv (
		JNIEnv *env, jobject obj,
		jfloatArray u)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glEvalCoord1fv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(u!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, u, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(u!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  u, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord2d ( GLdouble u , GLdouble v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEvalCoord2d (
		JNIEnv *env, jobject obj,
		jdouble u,
		jdouble v)
	{
		static void (CALLBACK *__func_ptr__)(GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLdouble, GLdouble))
				getGLProcAddressHelper("glEvalCoord2d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLdouble) u,
			(GLdouble) v
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord2f ( GLfloat u , GLfloat v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEvalCoord2f (
		JNIEnv *env, jobject obj,
		jfloat u,
		jfloat v)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat))
				getGLProcAddressHelper("glEvalCoord2f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) u,
			(GLfloat) v
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord2dv ( const GLdouble * u ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEvalCoord2dv (
		JNIEnv *env, jobject obj,
		jdoubleArray u)
	{
		static void (CALLBACK *__func_ptr__)(const GLdouble *) = NULL;
		jdouble *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLdouble *))
				getGLProcAddressHelper("glEvalCoord2dv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(u!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, u, 0);
		}
		__func_ptr__ (
			(const GLdouble *) ptr0
		);

		if(u!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  u, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord2fv ( const GLfloat * u ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEvalCoord2fv (
		JNIEnv *env, jobject obj,
		jfloatArray u)
	{
		static void (CALLBACK *__func_ptr__)(const GLfloat *) = NULL;
		jfloat *ptr0 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(const GLfloat *))
				getGLProcAddressHelper("glEvalCoord2fv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(u!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, u, 0);
		}
		__func_ptr__ (
			(const GLfloat *) ptr0
		);

		if(u!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  u, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapGrid1d ( GLint un , GLdouble u1 , GLdouble u2 ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMapGrid1d (
		JNIEnv *env, jobject obj,
		jint un,
		jdouble u1,
		jdouble u2)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLdouble, GLdouble))
				getGLProcAddressHelper("glMapGrid1d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) un,
			(GLdouble) u1,
			(GLdouble) u2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapGrid1f ( GLint un , GLfloat u1 , GLfloat u2 ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMapGrid1f (
		JNIEnv *env, jobject obj,
		jint un,
		jfloat u1,
		jfloat u2)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLfloat, GLfloat))
				getGLProcAddressHelper("glMapGrid1f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) un,
			(GLfloat) u1,
			(GLfloat) u2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapGrid2d ( GLint un , GLdouble u1 , GLdouble u2 , GLint vn , GLdouble v1 , GLdouble v2 ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMapGrid2d (
		JNIEnv *env, jobject obj,
		jint un,
		jdouble u1,
		jdouble u2,
		jint vn,
		jdouble v1,
		jdouble v2)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble))
				getGLProcAddressHelper("glMapGrid2d", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) un,
			(GLdouble) u1,
			(GLdouble) u2,
			(GLint) vn,
			(GLdouble) v1,
			(GLdouble) v2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapGrid2f ( GLint un , GLfloat u1 , GLfloat u2 , GLint vn , GLfloat v1 , GLfloat v2 ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMapGrid2f (
		JNIEnv *env, jobject obj,
		jint un,
		jfloat u1,
		jfloat u2,
		jint vn,
		jfloat v1,
		jfloat v2)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat))
				getGLProcAddressHelper("glMapGrid2f", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) un,
			(GLfloat) u1,
			(GLfloat) u2,
			(GLint) vn,
			(GLfloat) v1,
			(GLfloat) v2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalPoint1 ( GLint i ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEvalPoint1 (
		JNIEnv *env, jobject obj,
		jint i)
	{
		static void (CALLBACK *__func_ptr__)(GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint))
				getGLProcAddressHelper("glEvalPoint1", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) i
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalPoint2 ( GLint i , GLint j ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEvalPoint2 (
		JNIEnv *env, jobject obj,
		jint i,
		jint j)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLint))
				getGLProcAddressHelper("glEvalPoint2", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) i,
			(GLint) j
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalMesh1 ( GLenum mode , GLint i1 , GLint i2 ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEvalMesh1 (
		JNIEnv *env, jobject obj,
		jint mode,
		jint i1,
		jint i2)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint))
				getGLProcAddressHelper("glEvalMesh1", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLint) i1,
			(GLint) i2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalMesh2 ( GLenum mode , GLint i1 , GLint i2 , GLint j1 , GLint j2 ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEvalMesh2 (
		JNIEnv *env, jobject obj,
		jint mode,
		jint i1,
		jint i2,
		jint j1,
		jint j2)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint))
				getGLProcAddressHelper("glEvalMesh2", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLint) i1,
			(GLint) i2,
			(GLint) j1,
			(GLint) j2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogf ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogf (
		JNIEnv *env, jobject obj,
		jint pname,
		jfloat param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLfloat))
				getGLProcAddressHelper("glFogf", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) pname,
			(GLfloat) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogi ( GLenum pname , GLint param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogi (
		JNIEnv *env, jobject obj,
		jint pname,
		jint param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint))
				getGLProcAddressHelper("glFogi", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) pname,
			(GLint) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogfv ( GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogfv (
		JNIEnv *env, jobject obj,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLfloat *) = NULL;
		jfloat *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLfloat *))
				getGLProcAddressHelper("glFogfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) pname,
			(const GLfloat *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogiv ( GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogiv (
		JNIEnv *env, jobject obj,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLint *) = NULL;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLint *))
				getGLProcAddressHelper("glFogiv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) pname,
			(const GLint *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFeedbackBuffer ( GLsizei size , GLenum type , GLfloat * buffer ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFeedbackBuffer (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jfloatArray buffer)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLenum, GLfloat *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLenum, GLfloat *))
				getGLProcAddressHelper("glFeedbackBuffer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(buffer!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, buffer, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLsizei) size,
			(GLenum) type,
			(GLfloat *) ptr2
		);

		if(buffer!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  buffer, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPassThrough ( GLfloat token ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPassThrough (
		JNIEnv *env, jobject obj,
		jfloat token)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat))
				getGLProcAddressHelper("glPassThrough", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) token
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSelectBuffer ( GLsizei size , GLuint * buffer ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSelectBuffer (
		JNIEnv *env, jobject obj,
		jint size,
		jintArray buffer)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLuint *) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLuint *))
				getGLProcAddressHelper("glSelectBuffer", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(buffer!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, buffer, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLsizei) size,
			(GLuint *) ptr1
		);

		if(buffer!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  buffer, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glInitNames ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glInitNames (
		JNIEnv *env, jobject obj)
	{
		static void (CALLBACK *__func_ptr__)() = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)())
				getGLProcAddressHelper("glInitNames", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadName ( GLuint name ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLoadName (
		JNIEnv *env, jobject obj,
		jint name)
	{
		static void (CALLBACK *__func_ptr__)(GLuint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLuint))
				getGLProcAddressHelper("glLoadName", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLuint) name
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPushName ( GLuint name ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPushName (
		JNIEnv *env, jobject obj,
		jint name)
	{
		static void (CALLBACK *__func_ptr__)(GLuint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLuint))
				getGLProcAddressHelper("glPushName", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLuint) name
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPopName ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPopName (
		JNIEnv *env, jobject obj)
	{
		static void (CALLBACK *__func_ptr__)() = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)())
				getGLProcAddressHelper("glPopName", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawRangeElements ( GLenum mode , GLuint start , GLuint end , GLsizei count , GLenum type , const GLvoid * indices ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawRangeElements__IIIII_3B (
		JNIEnv *env, jobject obj,
		jint mode,
		jint start,
		jint end,
		jint count,
		jint type,
		jbyteArray indices)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *) = NULL;
		jbyte *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawRangeElements", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(indices!=NULL)
		{
			ptr5 = (*env)->GetByteArrayElements(env, indices, 0);
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLuint) start,
			(GLuint) end,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(indices!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  indices, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawRangeElements__IIIII_3S (
		JNIEnv *env, jobject obj,
		jint mode,
		jint start,
		jint end,
		jint count,
		jint type,
		jshortArray indices)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *) = NULL;
		jshort *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawRangeElements", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(indices!=NULL)
		{
			ptr5 = (*env)->GetShortArrayElements(env, indices, 0);
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLuint) start,
			(GLuint) end,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(indices!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  indices, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawRangeElements__IIIII_3I (
		JNIEnv *env, jobject obj,
		jint mode,
		jint start,
		jint end,
		jint count,
		jint type,
		jintArray indices)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *) = NULL;
		jint *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawRangeElements", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(indices!=NULL)
		{
			ptr5 = (*env)->GetIntArrayElements(env, indices, 0);
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLuint) start,
			(GLuint) end,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(indices!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  indices, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawRangeElements__IIIII_3F (
		JNIEnv *env, jobject obj,
		jint mode,
		jint start,
		jint end,
		jint count,
		jint type,
		jfloatArray indices)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *) = NULL;
		jfloat *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawRangeElements", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(indices!=NULL)
		{
			ptr5 = (*env)->GetFloatArrayElements(env, indices, 0);
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLuint) start,
			(GLuint) end,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(indices!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  indices, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawRangeElements__IIIII_3D (
		JNIEnv *env, jobject obj,
		jint mode,
		jint start,
		jint end,
		jint count,
		jint type,
		jdoubleArray indices)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *) = NULL;
		jdouble *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawRangeElements", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(indices!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, indices, 0);
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLuint) start,
			(GLuint) end,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(indices!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  indices, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawRangeElements__IIIII_3Z (
		JNIEnv *env, jobject obj,
		jint mode,
		jint start,
		jint end,
		jint count,
		jint type,
		jbooleanArray indices)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *) = NULL;
		jboolean *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawRangeElements", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(indices!=NULL)
		{
			ptr5 = (*env)->GetBooleanArrayElements(env, indices, 0);
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLuint) start,
			(GLuint) end,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(indices!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  indices, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawRangeElements__IIIII_3J (
		JNIEnv *env, jobject obj,
		jint mode,
		jint start,
		jint end,
		jint count,
		jint type,
		jlongArray indices)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *) = NULL;
		jlong *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *))
				getGLProcAddressHelper("glDrawRangeElements", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(indices!=NULL)
		{
			ptr5 = (*env)->GetLongArrayElements(env, indices, 0);
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLuint) start,
			(GLuint) end,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(indices!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  indices, ptr5, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage3D ( GLenum target , GLint level , GLint internalFormat , GLsizei width , GLsizei height , GLsizei depth , GLint border , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage3D__IIIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint format,
		jint type,
		jbyteArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jbyte *ptr9 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage3D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr9
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  pixels, ptr9, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage3D__IIIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint format,
		jint type,
		jshortArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jshort *ptr9 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage3D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr9
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  pixels, ptr9, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage3D__IIIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint format,
		jint type,
		jintArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jint *ptr9 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage3D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr9
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  pixels, ptr9, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage3D__IIIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint format,
		jint type,
		jfloatArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jfloat *ptr9 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage3D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr9
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  pixels, ptr9, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage3D__IIIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint format,
		jint type,
		jdoubleArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jdouble *ptr9 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage3D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr9
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  pixels, ptr9, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage3D__IIIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint format,
		jint type,
		jbooleanArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jboolean *ptr9 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage3D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr9
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  pixels, ptr9, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage3D__IIIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint format,
		jint type,
		jlongArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jlong *ptr9 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage3D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr9
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  pixels, ptr9, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage3D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint zoffset , GLsizei width , GLsizei height , GLsizei depth , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage3D__IIIIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint zoffset,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jbyteArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jbyte *ptr10 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage3D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr10
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  pixels, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage3D__IIIIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint zoffset,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jshortArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jshort *ptr10 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage3D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr10
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  pixels, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage3D__IIIIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint zoffset,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jintArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jint *ptr10 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage3D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr10
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  pixels, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage3D__IIIIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint zoffset,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jfloatArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jfloat *ptr10 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage3D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr10
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  pixels, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage3D__IIIIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint zoffset,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jdoubleArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jdouble *ptr10 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage3D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr10
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  pixels, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage3D__IIIIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint zoffset,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jbooleanArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jboolean *ptr10 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage3D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr10
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  pixels, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage3D__IIIIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint zoffset,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jlongArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jlong *ptr10 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage3D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr10
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  pixels, ptr10, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage3D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint zoffset , GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyTexSubImage3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint zoffset,
		jint x,
		jint y,
		jint width,
		jint height)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei))
				getGLProcAddressHelper("glCopyTexSubImage3D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLint) x,
			(GLint) y,
			(GLsizei) width,
			(GLsizei) height
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTable ( GLenum target , GLenum internalformat , GLsizei width , GLenum format , GLenum type , const GLvoid * table ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTable__IIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jbyteArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jbyte *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr5 = (*env)->GetByteArrayElements(env, table, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(table!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  table, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTable__IIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jshortArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jshort *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr5 = (*env)->GetShortArrayElements(env, table, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(table!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  table, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTable__IIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jintArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jint *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr5 = (*env)->GetIntArrayElements(env, table, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(table!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  table, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTable__IIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jfloatArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jfloat *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr5 = (*env)->GetFloatArrayElements(env, table, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(table!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  table, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTable__IIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jdoubleArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jdouble *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, table, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(table!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  table, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTable__IIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jbooleanArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jboolean *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr5 = (*env)->GetBooleanArrayElements(env, table, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(table!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  table, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTable__IIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jlongArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jlong *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr5 = (*env)->GetLongArrayElements(env, table, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(table!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  table, ptr5, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorSubTable ( GLenum target , GLsizei start , GLsizei count , GLenum format , GLenum type , const GLvoid * data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorSubTable__IIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint start,
		jint count,
		jint format,
		jint type,
		jbyteArray data)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jbyte *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorSubTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(data!=NULL)
		{
			ptr5 = (*env)->GetByteArrayElements(env, data, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLsizei) start,
			(GLsizei) count,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  data, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorSubTable__IIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint start,
		jint count,
		jint format,
		jint type,
		jshortArray data)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jshort *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorSubTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(data!=NULL)
		{
			ptr5 = (*env)->GetShortArrayElements(env, data, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLsizei) start,
			(GLsizei) count,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  data, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorSubTable__IIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint start,
		jint count,
		jint format,
		jint type,
		jintArray data)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jint *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorSubTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(data!=NULL)
		{
			ptr5 = (*env)->GetIntArrayElements(env, data, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLsizei) start,
			(GLsizei) count,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  data, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorSubTable__IIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint start,
		jint count,
		jint format,
		jint type,
		jfloatArray data)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jfloat *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorSubTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(data!=NULL)
		{
			ptr5 = (*env)->GetFloatArrayElements(env, data, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLsizei) start,
			(GLsizei) count,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  data, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorSubTable__IIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint start,
		jint count,
		jint format,
		jint type,
		jdoubleArray data)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jdouble *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorSubTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(data!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, data, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLsizei) start,
			(GLsizei) count,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  data, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorSubTable__IIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint start,
		jint count,
		jint format,
		jint type,
		jbooleanArray data)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jboolean *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorSubTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(data!=NULL)
		{
			ptr5 = (*env)->GetBooleanArrayElements(env, data, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLsizei) start,
			(GLsizei) count,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  data, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorSubTable__IIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint start,
		jint count,
		jint format,
		jint type,
		jlongArray data)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jlong *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorSubTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(data!=NULL)
		{
			ptr5 = (*env)->GetLongArrayElements(env, data, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLsizei) start,
			(GLsizei) count,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  data, ptr5, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableParameteriv ( GLenum target , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableParameteriv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, const GLint *) = NULL;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
				getGLProcAddressHelper("glColorTableParameteriv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(const GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableParameterfv ( GLenum target , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableParameterfv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, const GLfloat *) = NULL;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
				getGLProcAddressHelper("glColorTableParameterfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(const GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyColorSubTable ( GLenum target , GLsizei start , GLint x , GLint y , GLsizei width ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyColorSubTable (
		JNIEnv *env, jobject obj,
		jint target,
		jint start,
		jint x,
		jint y,
		jint width)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLint, GLint, GLsizei) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLint, GLint, GLsizei))
				getGLProcAddressHelper("glCopyColorSubTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLsizei) start,
			(GLint) x,
			(GLint) y,
			(GLsizei) width
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyColorTable ( GLenum target , GLenum internalformat , GLint x , GLint y , GLsizei width ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyColorTable (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint x,
		jint y,
		jint width)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint, GLint, GLsizei) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint, GLint, GLsizei))
				getGLProcAddressHelper("glCopyColorTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLint) x,
			(GLint) y,
			(GLsizei) width
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTable ( GLenum target , GLenum format , GLenum type , GLvoid * table ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTable__III_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jbyteArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jbyte *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetColorTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, table, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTable__III_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jshortArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jshort *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetColorTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, table, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTable__III_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jintArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetColorTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, table, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTable__III_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jfloatArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetColorTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, table, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTable__III_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jdoubleArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jdouble *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetColorTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, table, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTable__III_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jbooleanArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jboolean *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetColorTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, table, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTable__III_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jlongArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jlong *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetColorTable", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, table, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameterfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableParameterfv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
				getGLProcAddressHelper("glGetColorTableParameterfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameteriv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableParameteriv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint *))
				getGLProcAddressHelper("glGetColorTableParameteriv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendEquation ( GLenum mode ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBlendEquation (
		JNIEnv *env, jobject obj,
		jint mode)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glBlendEquation", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) mode
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendColor ( GLclampf red , GLclampf green , GLclampf blue , GLclampf alpha ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBlendColor (
		JNIEnv *env, jobject obj,
		jfloat red,
		jfloat green,
		jfloat blue,
		jfloat alpha)
	{
		static void (CALLBACK *__func_ptr__)(GLclampf, GLclampf, GLclampf, GLclampf) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLclampf, GLclampf, GLclampf, GLclampf))
				getGLProcAddressHelper("glBlendColor", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLclampf) red,
			(GLclampf) green,
			(GLclampf) blue,
			(GLclampf) alpha
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glHistogram ( GLenum target , GLsizei width , GLenum internalformat , GLboolean sink ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glHistogram (
		JNIEnv *env, jobject obj,
		jint target,
		jint width,
		jint internalformat,
		jboolean sink)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLenum, GLboolean) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLenum, GLboolean))
				getGLProcAddressHelper("glHistogram", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLsizei) width,
			(GLenum) internalformat,
			(GLboolean) sink
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glResetHistogram ( GLenum target ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glResetHistogram (
		JNIEnv *env, jobject obj,
		jint target)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glResetHistogram", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogram ( GLenum target , GLboolean reset , GLenum format , GLenum type , GLvoid * values ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogram__IZII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jboolean reset,
		jint format,
		jint type,
		jbyteArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jbyte *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetHistogram", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr4 = (*env)->GetByteArrayElements(env, values, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLboolean) reset,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr4
		);

		if(values!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogram__IZII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jboolean reset,
		jint format,
		jint type,
		jshortArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jshort *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetHistogram", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr4 = (*env)->GetShortArrayElements(env, values, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLboolean) reset,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr4
		);

		if(values!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogram__IZII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jboolean reset,
		jint format,
		jint type,
		jintArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jint *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetHistogram", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, values, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLboolean) reset,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr4
		);

		if(values!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogram__IZII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jboolean reset,
		jint format,
		jint type,
		jfloatArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetHistogram", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, values, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLboolean) reset,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr4
		);

		if(values!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogram__IZII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jboolean reset,
		jint format,
		jint type,
		jdoubleArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jdouble *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetHistogram", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, values, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLboolean) reset,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr4
		);

		if(values!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogram__IZII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jboolean reset,
		jint format,
		jint type,
		jbooleanArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jboolean *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetHistogram", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr4 = (*env)->GetBooleanArrayElements(env, values, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLboolean) reset,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr4
		);

		if(values!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogram__IZII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jboolean reset,
		jint format,
		jint type,
		jlongArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jlong *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetHistogram", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr4 = (*env)->GetLongArrayElements(env, values, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLboolean) reset,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr4
		);

		if(values!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogramParameterfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogramParameterfv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
				getGLProcAddressHelper("glGetHistogramParameterfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogramParameteriv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogramParameteriv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint *))
				getGLProcAddressHelper("glGetHistogramParameteriv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMinmax ( GLenum target , GLenum internalformat , GLboolean sink ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMinmax (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jboolean sink)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLboolean) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLboolean))
				getGLProcAddressHelper("glMinmax", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLboolean) sink
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glResetMinmax ( GLenum target ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glResetMinmax (
		JNIEnv *env, jobject obj,
		jint target)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glResetMinmax", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmax ( GLenum target , GLboolean reset , GLenum format , GLenum types , GLvoid * values ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmax__IZII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jboolean reset,
		jint format,
		jint types,
		jbyteArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jbyte *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetMinmax", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr4 = (*env)->GetByteArrayElements(env, values, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLboolean) reset,
			(GLenum) format,
			(GLenum) types,
			(GLvoid *) ptr4
		);

		if(values!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmax__IZII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jboolean reset,
		jint format,
		jint types,
		jshortArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jshort *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetMinmax", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr4 = (*env)->GetShortArrayElements(env, values, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLboolean) reset,
			(GLenum) format,
			(GLenum) types,
			(GLvoid *) ptr4
		);

		if(values!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmax__IZII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jboolean reset,
		jint format,
		jint types,
		jintArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jint *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetMinmax", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, values, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLboolean) reset,
			(GLenum) format,
			(GLenum) types,
			(GLvoid *) ptr4
		);

		if(values!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmax__IZII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jboolean reset,
		jint format,
		jint types,
		jfloatArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetMinmax", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, values, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLboolean) reset,
			(GLenum) format,
			(GLenum) types,
			(GLvoid *) ptr4
		);

		if(values!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmax__IZII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jboolean reset,
		jint format,
		jint types,
		jdoubleArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jdouble *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetMinmax", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, values, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLboolean) reset,
			(GLenum) format,
			(GLenum) types,
			(GLvoid *) ptr4
		);

		if(values!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmax__IZII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jboolean reset,
		jint format,
		jint types,
		jbooleanArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jboolean *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetMinmax", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr4 = (*env)->GetBooleanArrayElements(env, values, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLboolean) reset,
			(GLenum) format,
			(GLenum) types,
			(GLvoid *) ptr4
		);

		if(values!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmax__IZII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jboolean reset,
		jint format,
		jint types,
		jlongArray values)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jlong *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetMinmax", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(values!=NULL)
		{
			ptr4 = (*env)->GetLongArrayElements(env, values, &isCopiedArray4);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLboolean) reset,
			(GLenum) format,
			(GLenum) types,
			(GLvoid *) ptr4
		);

		if(values!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmaxParameterfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmaxParameterfv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
				getGLProcAddressHelper("glGetMinmaxParameterfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmaxParameteriv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmaxParameteriv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint *))
				getGLProcAddressHelper("glGetMinmaxParameteriv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionFilter1D ( GLenum target , GLenum internalformat , GLsizei width , GLenum format , GLenum type , const GLvoid * image ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter1D__IIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jbyteArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jbyte *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glConvolutionFilter1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr5 = (*env)->GetByteArrayElements(env, image, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(image!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  image, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter1D__IIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jshortArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jshort *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glConvolutionFilter1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr5 = (*env)->GetShortArrayElements(env, image, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(image!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  image, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter1D__IIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jintArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jint *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glConvolutionFilter1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr5 = (*env)->GetIntArrayElements(env, image, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(image!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  image, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter1D__IIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jfloatArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jfloat *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glConvolutionFilter1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr5 = (*env)->GetFloatArrayElements(env, image, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(image!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  image, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter1D__IIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jdoubleArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jdouble *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glConvolutionFilter1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, image, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(image!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  image, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter1D__IIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jbooleanArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jboolean *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glConvolutionFilter1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr5 = (*env)->GetBooleanArrayElements(env, image, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(image!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  image, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter1D__IIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jlongArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jlong *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glConvolutionFilter1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr5 = (*env)->GetLongArrayElements(env, image, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(image!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  image, ptr5, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionFilter2D ( GLenum target , GLenum internalformat , GLsizei width , GLsizei height , GLenum format , GLenum type , const GLvoid * image ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter2D__IIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint height,
		jint format,
		jint type,
		jbyteArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jbyte *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glConvolutionFilter2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr6 = (*env)->GetByteArrayElements(env, image, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6
		);

		if(image!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  image, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter2D__IIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint height,
		jint format,
		jint type,
		jshortArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jshort *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glConvolutionFilter2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr6 = (*env)->GetShortArrayElements(env, image, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6
		);

		if(image!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  image, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter2D__IIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint height,
		jint format,
		jint type,
		jintArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jint *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glConvolutionFilter2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr6 = (*env)->GetIntArrayElements(env, image, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6
		);

		if(image!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  image, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter2D__IIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint height,
		jint format,
		jint type,
		jfloatArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jfloat *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glConvolutionFilter2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr6 = (*env)->GetFloatArrayElements(env, image, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6
		);

		if(image!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  image, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter2D__IIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint height,
		jint format,
		jint type,
		jdoubleArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jdouble *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glConvolutionFilter2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr6 = (*env)->GetDoubleArrayElements(env, image, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6
		);

		if(image!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  image, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter2D__IIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint height,
		jint format,
		jint type,
		jbooleanArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jboolean *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glConvolutionFilter2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr6 = (*env)->GetBooleanArrayElements(env, image, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6
		);

		if(image!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  image, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter2D__IIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint height,
		jint format,
		jint type,
		jlongArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jlong *ptr6 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glConvolutionFilter2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr6 = (*env)->GetLongArrayElements(env, image, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6
		);

		if(image!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  image, ptr6, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameterf ( GLenum target , GLenum pname , GLfloat params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionParameterf (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jfloat params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
				getGLProcAddressHelper("glConvolutionParameterf", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat) params
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameterfv ( GLenum target , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionParameterfv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, const GLfloat *) = NULL;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
				getGLProcAddressHelper("glConvolutionParameterfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(const GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameteri ( GLenum target , GLenum pname , GLint params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionParameteri (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jint params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint))
				getGLProcAddressHelper("glConvolutionParameteri", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLint) params
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameteriv ( GLenum target , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionParameteriv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, const GLint *) = NULL;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
				getGLProcAddressHelper("glConvolutionParameteriv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(const GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyConvolutionFilter1D ( GLenum target , GLenum internalformat , GLint x , GLint y , GLsizei width ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyConvolutionFilter1D (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint x,
		jint y,
		jint width)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint, GLint, GLsizei) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint, GLint, GLsizei))
				getGLProcAddressHelper("glCopyConvolutionFilter1D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLint) x,
			(GLint) y,
			(GLsizei) width
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyConvolutionFilter2D ( GLenum target , GLenum internalformat , GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyConvolutionFilter2D (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint x,
		jint y,
		jint width,
		jint height)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei))
				getGLProcAddressHelper("glCopyConvolutionFilter2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLint) x,
			(GLint) y,
			(GLsizei) width,
			(GLsizei) height
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionFilter ( GLenum target , GLenum format , GLenum type , GLvoid * image ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionFilter__III_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jbyteArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jbyte *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetConvolutionFilter", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, image, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(image!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  image, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionFilter__III_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jshortArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jshort *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetConvolutionFilter", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, image, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(image!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  image, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionFilter__III_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jintArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetConvolutionFilter", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, image, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(image!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  image, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionFilter__III_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jfloatArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetConvolutionFilter", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, image, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(image!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  image, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionFilter__III_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jdoubleArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jdouble *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetConvolutionFilter", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, image, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(image!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  image, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionFilter__III_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jbooleanArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jboolean *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetConvolutionFilter", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, image, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(image!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  image, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionFilter__III_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jlongArray image)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jlong *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetConvolutionFilter", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(image!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, image, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(image!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  image, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionParameterfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionParameterfv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
				getGLProcAddressHelper("glGetConvolutionParameterfv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionParameteriv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionParameteriv (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint *))
				getGLProcAddressHelper("glGetConvolutionParameteriv", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSeparableFilter2D ( GLenum target , GLenum internalformat , GLsizei width , GLsizei height , GLenum format , GLenum type , const GLvoid * row , const GLvoid * column ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSeparableFilter2D__IIIIII_3B_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint height,
		jint format,
		jint type,
		jbyteArray row,
		jbyteArray column)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *) = NULL;
		jbyte *ptr6 = NULL;
		jbyte *ptr7 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *))
				getGLProcAddressHelper("glSeparableFilter2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(row!=NULL)
		{
			ptr6 = (*env)->GetByteArrayElements(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (*env)->GetByteArrayElements(env, column, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6,
			(const GLvoid *) ptr7
		);

		if(row!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  row, ptr6, JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  column, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSeparableFilter2D__IIIIII_3S_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint height,
		jint format,
		jint type,
		jshortArray row,
		jshortArray column)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *) = NULL;
		jshort *ptr6 = NULL;
		jshort *ptr7 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *))
				getGLProcAddressHelper("glSeparableFilter2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(row!=NULL)
		{
			ptr6 = (*env)->GetShortArrayElements(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (*env)->GetShortArrayElements(env, column, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6,
			(const GLvoid *) ptr7
		);

		if(row!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  row, ptr6, JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  column, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSeparableFilter2D__IIIIII_3I_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint height,
		jint format,
		jint type,
		jintArray row,
		jintArray column)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *) = NULL;
		jint *ptr6 = NULL;
		jint *ptr7 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *))
				getGLProcAddressHelper("glSeparableFilter2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(row!=NULL)
		{
			ptr6 = (*env)->GetIntArrayElements(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (*env)->GetIntArrayElements(env, column, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6,
			(const GLvoid *) ptr7
		);

		if(row!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  row, ptr6, JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  column, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSeparableFilter2D__IIIIII_3F_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint height,
		jint format,
		jint type,
		jfloatArray row,
		jfloatArray column)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *) = NULL;
		jfloat *ptr6 = NULL;
		jfloat *ptr7 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *))
				getGLProcAddressHelper("glSeparableFilter2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(row!=NULL)
		{
			ptr6 = (*env)->GetFloatArrayElements(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (*env)->GetFloatArrayElements(env, column, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6,
			(const GLvoid *) ptr7
		);

		if(row!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  row, ptr6, JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  column, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSeparableFilter2D__IIIIII_3D_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint height,
		jint format,
		jint type,
		jdoubleArray row,
		jdoubleArray column)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *) = NULL;
		jdouble *ptr6 = NULL;
		jdouble *ptr7 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *))
				getGLProcAddressHelper("glSeparableFilter2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(row!=NULL)
		{
			ptr6 = (*env)->GetDoubleArrayElements(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (*env)->GetDoubleArrayElements(env, column, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6,
			(const GLvoid *) ptr7
		);

		if(row!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  row, ptr6, JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  column, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSeparableFilter2D__IIIIII_3Z_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint height,
		jint format,
		jint type,
		jbooleanArray row,
		jbooleanArray column)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *) = NULL;
		jboolean *ptr6 = NULL;
		jboolean *ptr7 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *))
				getGLProcAddressHelper("glSeparableFilter2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(row!=NULL)
		{
			ptr6 = (*env)->GetBooleanArrayElements(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (*env)->GetBooleanArrayElements(env, column, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6,
			(const GLvoid *) ptr7
		);

		if(row!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  row, ptr6, JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  column, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSeparableFilter2D__IIIIII_3J_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint height,
		jint format,
		jint type,
		jlongArray row,
		jlongArray column)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *) = NULL;
		jlong *ptr6 = NULL;
		jlong *ptr7 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *))
				getGLProcAddressHelper("glSeparableFilter2D", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(row!=NULL)
		{
			ptr6 = (*env)->GetLongArrayElements(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (*env)->GetLongArrayElements(env, column, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr6,
			(const GLvoid *) ptr7
		);

		if(row!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  row, ptr6, JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  column, ptr7, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetSeparableFilter ( GLenum target , GLenum format , GLenum type , GLvoid * row , GLvoid * column , GLvoid * span ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetSeparableFilter__III_3B_3B_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jbyteArray row,
		jbyteArray column,
		jbyteArray span)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jbyte *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jbyte *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jbyte *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *))
				getGLProcAddressHelper("glGetSeparableFilter", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(row!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, row, &isCopiedArray3);
		}
		if(column!=NULL)
		{
			ptr4 = (*env)->GetByteArrayElements(env, column, &isCopiedArray4);
		}
		if(span!=NULL)
		{
			ptr5 = (*env)->GetByteArrayElements(env, span, &isCopiedArray5);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3,
			(GLvoid *) ptr4,
			(GLvoid *) ptr5
		);

		if(row!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  row, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  column, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(span!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  span, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetSeparableFilter__III_3S_3S_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jshortArray row,
		jshortArray column,
		jshortArray span)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jshort *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jshort *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jshort *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *))
				getGLProcAddressHelper("glGetSeparableFilter", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(row!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, row, &isCopiedArray3);
		}
		if(column!=NULL)
		{
			ptr4 = (*env)->GetShortArrayElements(env, column, &isCopiedArray4);
		}
		if(span!=NULL)
		{
			ptr5 = (*env)->GetShortArrayElements(env, span, &isCopiedArray5);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3,
			(GLvoid *) ptr4,
			(GLvoid *) ptr5
		);

		if(row!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  row, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  column, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(span!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  span, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetSeparableFilter__III_3I_3I_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jintArray row,
		jintArray column,
		jintArray span)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jint *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jint *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *))
				getGLProcAddressHelper("glGetSeparableFilter", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(row!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, row, &isCopiedArray3);
		}
		if(column!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, column, &isCopiedArray4);
		}
		if(span!=NULL)
		{
			ptr5 = (*env)->GetIntArrayElements(env, span, &isCopiedArray5);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3,
			(GLvoid *) ptr4,
			(GLvoid *) ptr5
		);

		if(row!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  row, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  column, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(span!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  span, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetSeparableFilter__III_3F_3F_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jfloatArray row,
		jfloatArray column,
		jfloatArray span)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jfloat *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *))
				getGLProcAddressHelper("glGetSeparableFilter", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(row!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, row, &isCopiedArray3);
		}
		if(column!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, column, &isCopiedArray4);
		}
		if(span!=NULL)
		{
			ptr5 = (*env)->GetFloatArrayElements(env, span, &isCopiedArray5);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3,
			(GLvoid *) ptr4,
			(GLvoid *) ptr5
		);

		if(row!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  row, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  column, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(span!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  span, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetSeparableFilter__III_3D_3D_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jdoubleArray row,
		jdoubleArray column,
		jdoubleArray span)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jdouble *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jdouble *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jdouble *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *))
				getGLProcAddressHelper("glGetSeparableFilter", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(row!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, row, &isCopiedArray3);
		}
		if(column!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, column, &isCopiedArray4);
		}
		if(span!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, span, &isCopiedArray5);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3,
			(GLvoid *) ptr4,
			(GLvoid *) ptr5
		);

		if(row!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  row, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  column, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(span!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  span, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetSeparableFilter__III_3Z_3Z_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jbooleanArray row,
		jbooleanArray column,
		jbooleanArray span)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jboolean *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jboolean *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jboolean *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *))
				getGLProcAddressHelper("glGetSeparableFilter", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(row!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, row, &isCopiedArray3);
		}
		if(column!=NULL)
		{
			ptr4 = (*env)->GetBooleanArrayElements(env, column, &isCopiedArray4);
		}
		if(span!=NULL)
		{
			ptr5 = (*env)->GetBooleanArrayElements(env, span, &isCopiedArray5);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3,
			(GLvoid *) ptr4,
			(GLvoid *) ptr5
		);

		if(row!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  row, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  column, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(span!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  span, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetSeparableFilter__III_3J_3J_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jlongArray row,
		jlongArray column,
		jlongArray span)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jlong *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jlong *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jlong *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *))
				getGLProcAddressHelper("glGetSeparableFilter", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(row!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, row, &isCopiedArray3);
		}
		if(column!=NULL)
		{
			ptr4 = (*env)->GetLongArrayElements(env, column, &isCopiedArray4);
		}
		if(span!=NULL)
		{
			ptr5 = (*env)->GetLongArrayElements(env, span, &isCopiedArray5);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3,
			(GLvoid *) ptr4,
			(GLvoid *) ptr5
		);

		if(row!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  row, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  column, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(span!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  span, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendColorEXT ( GLclampf red , GLclampf green , GLclampf blue , GLclampf alpha ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBlendColorEXT (
		JNIEnv *env, jobject obj,
		jfloat red,
		jfloat green,
		jfloat blue,
		jfloat alpha)
	{
		static void (CALLBACK *__func_ptr__)(GLclampf, GLclampf, GLclampf, GLclampf) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLclampf, GLclampf, GLclampf, GLclampf))
				getGLProcAddressHelper("glBlendColorEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLclampf) red,
			(GLclampf) green,
			(GLclampf) blue,
			(GLclampf) alpha
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPolygonOffsetEXT ( GLfloat factor , GLfloat bias ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPolygonOffsetEXT (
		JNIEnv *env, jobject obj,
		jfloat factor,
		jfloat bias)
	{
		static void (CALLBACK *__func_ptr__)(GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLfloat, GLfloat))
				getGLProcAddressHelper("glPolygonOffsetEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLfloat) factor,
			(GLfloat) bias
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage3DEXT ( GLenum target , GLint level , GLenum internalFormat , GLsizei width , GLsizei height , GLsizei depth , GLint border , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage3DEXT__IIIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint format,
		jint type,
		jbyteArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jbyte *ptr9 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage3DEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr9
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  pixels, ptr9, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage3DEXT__IIIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint format,
		jint type,
		jshortArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jshort *ptr9 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage3DEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr9
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  pixels, ptr9, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage3DEXT__IIIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint format,
		jint type,
		jintArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jint *ptr9 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage3DEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr9
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  pixels, ptr9, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage3DEXT__IIIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint format,
		jint type,
		jfloatArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jfloat *ptr9 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage3DEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr9
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  pixels, ptr9, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage3DEXT__IIIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint format,
		jint type,
		jdoubleArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jdouble *ptr9 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage3DEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr9
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  pixels, ptr9, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage3DEXT__IIIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint format,
		jint type,
		jbooleanArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jboolean *ptr9 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage3DEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr9
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  pixels, ptr9, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage3DEXT__IIIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalFormat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint format,
		jint type,
		jlongArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;
		jlong *ptr9 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexImage3DEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalFormat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr9
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  pixels, ptr9, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage3DEXT ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint zoffset , GLsizei width , GLsizei height , GLsizei depth , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage3DEXT__IIIIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint zoffset,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jbyteArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jbyte *ptr10 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage3DEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr10
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  pixels, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage3DEXT__IIIIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint zoffset,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jshortArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jshort *ptr10 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage3DEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr10
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  pixels, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage3DEXT__IIIIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint zoffset,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jintArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jint *ptr10 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage3DEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr10
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  pixels, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage3DEXT__IIIIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint zoffset,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jfloatArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jfloat *ptr10 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage3DEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr10
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  pixels, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage3DEXT__IIIIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint zoffset,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jdoubleArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jdouble *ptr10 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage3DEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr10
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  pixels, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage3DEXT__IIIIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint zoffset,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jbooleanArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jboolean *ptr10 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage3DEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr10
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  pixels, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage3DEXT__IIIIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint zoffset,
		jint width,
		jint height,
		jint depth,
		jint format,
		jint type,
		jlongArray pixels)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jlong *ptr10 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glTexSubImage3DEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr10
		);

		if(pixels!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  pixels, ptr10, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage3DEXT ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint zoffset , GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyTexSubImage3DEXT (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint zoffset,
		jint x,
		jint y,
		jint width,
		jint height)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei))
				getGLProcAddressHelper("glCopyTexSubImage3DEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLint) x,
			(GLint) y,
			(GLsizei) width,
			(GLsizei) height
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGenTexturesEXT ( GLsizei n , GLuint * textures ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGenTexturesEXT (
		JNIEnv *env, jobject obj,
		jint n,
		jintArray textures)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLuint *) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLuint *))
				getGLProcAddressHelper("glGenTexturesEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(textures!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, textures, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLsizei) n,
			(GLuint *) ptr1
		);

		if(textures!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  textures, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteTexturesEXT ( GLsizei n , const GLuint * textures ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDeleteTexturesEXT (
		JNIEnv *env, jobject obj,
		jint n,
		jintArray textures)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, const GLuint *) = NULL;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, const GLuint *))
				getGLProcAddressHelper("glDeleteTexturesEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(textures!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, textures, 0);
		}
		__func_ptr__ (
			(GLsizei) n,
			(const GLuint *) ptr1
		);

		if(textures!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  textures, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindTextureEXT ( GLenum target , GLuint texture ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBindTextureEXT (
		JNIEnv *env, jobject obj,
		jint target,
		jint texture)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLuint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLuint))
				getGLProcAddressHelper("glBindTextureEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLuint) texture
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPrioritizeTexturesEXT ( GLsizei n , const GLuint * textures , const GLclampf * priorities ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPrioritizeTexturesEXT (
		JNIEnv *env, jobject obj,
		jint n,
		jintArray textures,
		jfloatArray priorities)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, const GLuint *, const GLclampf *) = NULL;
		jint *ptr1 = NULL;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, const GLuint *, const GLclampf *))
				getGLProcAddressHelper("glPrioritizeTexturesEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(textures!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, textures, 0);
		}
		if(priorities!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, priorities, 0);
		}
		__func_ptr__ (
			(GLsizei) n,
			(const GLuint *) ptr1,
			(const GLclampf *) ptr2
		);

		if(textures!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  textures, ptr1, JNI_ABORT);
		}
		if(priorities!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  priorities, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glAreTexturesResidentEXT ( GLsizei n , const GLuint * textures , GLboolean * residences ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_GLFuncJauJNI_glAreTexturesResidentEXT (
		JNIEnv *env, jobject obj,
		jint n,
		jintArray textures,
		jbooleanArray residences)
	{
		static jboolean (CALLBACK *__func_ptr__)(GLsizei, const GLuint *, GLboolean *) = NULL;
		jboolean ret;

		jint *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jboolean *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (jboolean (CALLBACK *)(GLsizei, const GLuint *, GLboolean *))
				getGLProcAddressHelper("glAreTexturesResidentEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return 0;
		}
		if(textures!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, textures, 0);
		}
		if(residences!=NULL)
		{
			ptr2 = (*env)->GetBooleanArrayElements(env, residences, &isCopiedArray2);
		}
		ret = (jboolean) __func_ptr__ (
			(GLsizei) n,
			(const GLuint *) ptr1,
			(GLboolean *) ptr2
		);

		if(textures!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  textures, ptr1, JNI_ABORT);
		}
		if(residences!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  residences, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsTextureEXT ( GLuint texture ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_GLFuncJauJNI_glIsTextureEXT (
		JNIEnv *env, jobject obj,
		jint texture)
	{
		static jboolean (CALLBACK *__func_ptr__)(GLuint) = NULL;
		jboolean ret;


		if(__func_ptr__==NULL) {
			__func_ptr__ = (jboolean (CALLBACK *)(GLuint))
				getGLProcAddressHelper("glIsTextureEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return 0;
		}
		ret = (jboolean) __func_ptr__ (
			(GLuint) texture
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexPointerEXT ( GLint size , GLenum type , GLsizei stride , GLsizei count , const GLvoid * ptr ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointerEXT__IIII_3B (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jbyteArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jbyte *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glVertexPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointerEXT__IIII_3S (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jshortArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jshort *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glVertexPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointerEXT__IIII_3I (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jintArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jint *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glVertexPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointerEXT__IIII_3F (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jfloatArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jfloat *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glVertexPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointerEXT__IIII_3D (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jdoubleArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jdouble *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glVertexPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointerEXT__IIII_3Z (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jbooleanArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jboolean *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glVertexPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointerEXT__IIII_3J (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jlongArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jlong *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glVertexPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalPointerEXT ( GLenum type , GLsizei stride , GLsizei count , const GLvoid * ptr ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointerEXT__III_3B (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jint count,
		jbyteArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jbyte *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glNormalPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointerEXT__III_3S (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jint count,
		jshortArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jshort *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glNormalPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointerEXT__III_3I (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jint count,
		jintArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jint *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glNormalPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointerEXT__III_3F (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jint count,
		jfloatArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jfloat *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glNormalPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointerEXT__III_3D (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jint count,
		jdoubleArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jdouble *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glNormalPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointerEXT__III_3Z (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jint count,
		jbooleanArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jboolean *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glNormalPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointerEXT__III_3J (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jint count,
		jlongArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jlong *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glNormalPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorPointerEXT ( GLint size , GLenum type , GLsizei stride , GLsizei count , const GLvoid * ptr ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointerEXT__IIII_3B (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jbyteArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jbyte *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glColorPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointerEXT__IIII_3S (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jshortArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jshort *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glColorPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointerEXT__IIII_3I (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jintArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jint *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glColorPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointerEXT__IIII_3F (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jfloatArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jfloat *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glColorPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointerEXT__IIII_3D (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jdoubleArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jdouble *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glColorPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointerEXT__IIII_3Z (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jbooleanArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jboolean *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glColorPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointerEXT__IIII_3J (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jlongArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jlong *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glColorPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexPointerEXT ( GLenum type , GLsizei stride , GLsizei count , const GLvoid * ptr ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointerEXT__III_3B (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jint count,
		jbyteArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jbyte *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glIndexPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointerEXT__III_3S (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jint count,
		jshortArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jshort *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glIndexPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointerEXT__III_3I (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jint count,
		jintArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jint *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glIndexPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointerEXT__III_3F (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jint count,
		jfloatArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jfloat *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glIndexPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointerEXT__III_3D (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jint count,
		jdoubleArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jdouble *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glIndexPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointerEXT__III_3Z (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jint count,
		jbooleanArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jboolean *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glIndexPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointerEXT__III_3J (
		JNIEnv *env, jobject obj,
		jint type,
		jint stride,
		jint count,
		jlongArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jlong *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glIndexPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  ptr, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoordPointerEXT ( GLint size , GLenum type , GLsizei stride , GLsizei count , const GLvoid * ptr ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointerEXT__IIII_3B (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jbyteArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jbyte *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glTexCoordPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointerEXT__IIII_3S (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jshortArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jshort *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glTexCoordPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointerEXT__IIII_3I (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jintArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jint *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glTexCoordPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointerEXT__IIII_3F (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jfloatArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jfloat *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glTexCoordPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointerEXT__IIII_3D (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jdoubleArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jdouble *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glTexCoordPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointerEXT__IIII_3Z (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jbooleanArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jboolean *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glTexCoordPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointerEXT__IIII_3J (
		JNIEnv *env, jobject obj,
		jint size,
		jint type,
		jint stride,
		jint count,
		jlongArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;
		jlong *ptr4 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
				getGLProcAddressHelper("glTexCoordPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr4
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  ptr, ptr4, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlagPointerEXT ( GLsizei stride , GLsizei count , const GLboolean * ptr ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlagPointerEXT (
		JNIEnv *env, jobject obj,
		jint stride,
		jint count,
		jbooleanArray ptr)
	{
		static void (CALLBACK *__func_ptr__)(GLsizei, GLsizei, const GLboolean *) = NULL;
		jboolean *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLsizei, GLsizei, const GLboolean *))
				getGLProcAddressHelper("glEdgeFlagPointerEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		__func_ptr__ (
			(GLsizei) stride,
			(GLsizei) count,
			(const GLboolean *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  ptr, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPointervEXT ( GLenum pname , void * * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPointervEXT__I_3_3B (
		JNIEnv *env, jobject obj,
		jint pname,
		jbyteArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, void **) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jbyte *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, void **))
				getGLProcAddressHelper("glGetPointervEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetByteArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(void **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPointervEXT__I_3_3S (
		JNIEnv *env, jobject obj,
		jint pname,
		jshortArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, void **) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jshort *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, void **))
				getGLProcAddressHelper("glGetPointervEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(void **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPointervEXT__I_3_3I (
		JNIEnv *env, jobject obj,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, void **) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, void **))
				getGLProcAddressHelper("glGetPointervEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(void **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPointervEXT__I_3_3F (
		JNIEnv *env, jobject obj,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, void **) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, void **))
				getGLProcAddressHelper("glGetPointervEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(void **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPointervEXT__I_3_3D (
		JNIEnv *env, jobject obj,
		jint pname,
		jdoubleArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, void **) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, void **))
				getGLProcAddressHelper("glGetPointervEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(void **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPointervEXT__I_3_3Z (
		JNIEnv *env, jobject obj,
		jint pname,
		jbooleanArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, void **) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jboolean *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, void **))
				getGLProcAddressHelper("glGetPointervEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetBooleanArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(void **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPointervEXT__I_3_3J (
		JNIEnv *env, jobject obj,
		jint pname,
		jlongArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, void **) = NULL;
		jboolean isCopiedArray1 = JNI_FALSE;
		jlong *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, void **))
				getGLProcAddressHelper("glGetPointervEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetLongArrayElements(env, params, &isCopiedArray1);
		}
		__func_ptr__ (
			(GLenum) pname,
			(void **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glArrayElementEXT ( GLint i ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glArrayElementEXT (
		JNIEnv *env, jobject obj,
		jint i)
	{
		static void (CALLBACK *__func_ptr__)(GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint))
				getGLProcAddressHelper("glArrayElementEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) i
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawArraysEXT ( GLenum mode , GLint first , GLsizei count ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawArraysEXT (
		JNIEnv *env, jobject obj,
		jint mode,
		jint first,
		jint count)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLsizei) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLsizei))
				getGLProcAddressHelper("glDrawArraysEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) mode,
			(GLint) first,
			(GLsizei) count
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendEquationEXT ( GLenum mode ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBlendEquationEXT (
		JNIEnv *env, jobject obj,
		jint mode)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glBlendEquationEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) mode
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfEXT ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPointParameterfEXT (
		JNIEnv *env, jobject obj,
		jint pname,
		jfloat param)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLfloat))
				getGLProcAddressHelper("glPointParameterfEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) pname,
			(GLfloat) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfvEXT ( GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPointParameterfvEXT (
		JNIEnv *env, jobject obj,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLfloat *) = NULL;
		jfloat *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLfloat *))
				getGLProcAddressHelper("glPointParameterfvEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		__func_ptr__ (
			(GLenum) pname,
			(const GLfloat *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableEXT ( GLenum target , GLenum internalformat , GLsizei width , GLenum format , GLenum type , const GLvoid * table ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableEXT__IIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jbyteArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jbyte *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr5 = (*env)->GetByteArrayElements(env, table, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(table!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  table, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableEXT__IIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jshortArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jshort *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr5 = (*env)->GetShortArrayElements(env, table, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(table!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  table, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableEXT__IIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jintArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jint *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr5 = (*env)->GetIntArrayElements(env, table, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(table!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  table, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableEXT__IIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jfloatArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jfloat *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr5 = (*env)->GetFloatArrayElements(env, table, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(table!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  table, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableEXT__IIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jdoubleArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jdouble *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, table, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(table!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  table, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableEXT__IIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jbooleanArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jboolean *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr5 = (*env)->GetBooleanArrayElements(env, table, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(table!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  table, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableEXT__IIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint internalformat,
		jint width,
		jint format,
		jint type,
		jlongArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jlong *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr5 = (*env)->GetLongArrayElements(env, table, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(table!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  table, ptr5, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorSubTableEXT ( GLenum target , GLsizei start , GLsizei count , GLenum format , GLenum type , const GLvoid * data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorSubTableEXT__IIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint start,
		jint count,
		jint format,
		jint type,
		jbyteArray data)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jbyte *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorSubTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(data!=NULL)
		{
			ptr5 = (*env)->GetByteArrayElements(env, data, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLsizei) start,
			(GLsizei) count,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  data, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorSubTableEXT__IIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint start,
		jint count,
		jint format,
		jint type,
		jshortArray data)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jshort *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorSubTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(data!=NULL)
		{
			ptr5 = (*env)->GetShortArrayElements(env, data, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLsizei) start,
			(GLsizei) count,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  data, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorSubTableEXT__IIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint start,
		jint count,
		jint format,
		jint type,
		jintArray data)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jint *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorSubTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(data!=NULL)
		{
			ptr5 = (*env)->GetIntArrayElements(env, data, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLsizei) start,
			(GLsizei) count,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  data, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorSubTableEXT__IIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint start,
		jint count,
		jint format,
		jint type,
		jfloatArray data)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jfloat *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorSubTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(data!=NULL)
		{
			ptr5 = (*env)->GetFloatArrayElements(env, data, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLsizei) start,
			(GLsizei) count,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  data, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorSubTableEXT__IIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint start,
		jint count,
		jint format,
		jint type,
		jdoubleArray data)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jdouble *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorSubTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(data!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, data, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLsizei) start,
			(GLsizei) count,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  data, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorSubTableEXT__IIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint start,
		jint count,
		jint format,
		jint type,
		jbooleanArray data)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jboolean *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorSubTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(data!=NULL)
		{
			ptr5 = (*env)->GetBooleanArrayElements(env, data, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLsizei) start,
			(GLsizei) count,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  data, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorSubTableEXT__IIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint start,
		jint count,
		jint format,
		jint type,
		jlongArray data)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;
		jlong *ptr5 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
				getGLProcAddressHelper("glColorSubTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(data!=NULL)
		{
			ptr5 = (*env)->GetLongArrayElements(env, data, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLsizei) start,
			(GLsizei) count,
			(GLenum) format,
			(GLenum) type,
			(const GLvoid *) ptr5
		);

		if(data!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  data, ptr5, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableEXT ( GLenum target , GLenum format , GLenum type , GLvoid * table ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableEXT__III_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jbyteArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jbyte *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetColorTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, table, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleaseByteArrayElements(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableEXT__III_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jshortArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jshort *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetColorTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, table, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableEXT__III_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jintArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetColorTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, table, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableEXT__III_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jfloatArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetColorTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, table, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableEXT__III_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jdoubleArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jdouble *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetColorTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, table, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableEXT__III_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jbooleanArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jboolean *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetColorTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, table, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleaseBooleanArrayElements(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableEXT__III_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint format,
		jint type,
		jlongArray table)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLenum, GLvoid *) = NULL;
		jboolean isCopiedArray3 = JNI_FALSE;
		jlong *ptr3 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
				getGLProcAddressHelper("glGetColorTableEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(table!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, table, &isCopiedArray3);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleaseLongArrayElements(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameterfvEXT ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableParameterfvEXT (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jfloatArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLfloat *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
				getGLProcAddressHelper("glGetColorTableParameterfvEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameterivEXT ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableParameterivEXT (
		JNIEnv *env, jobject obj,
		jint target,
		jint pname,
		jintArray params)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLenum, GLint *) = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLenum, GLint *))
				getGLProcAddressHelper("glGetColorTableParameterivEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		__func_ptr__ (
			(GLenum) target,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLockArraysEXT ( GLint first , GLsizei count ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLockArraysEXT (
		JNIEnv *env, jobject obj,
		jint first,
		jint count)
	{
		static void (CALLBACK *__func_ptr__)(GLint, GLsizei) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLint, GLsizei))
				getGLProcAddressHelper("glLockArraysEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLint) first,
			(GLsizei) count
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glUnlockArraysEXT ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glUnlockArraysEXT (
		JNIEnv *env, jobject obj)
	{
		static void (CALLBACK *__func_ptr__)() = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)())
				getGLProcAddressHelper("glUnlockArraysEXT", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glActiveTextureARB ( GLenum texture ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glActiveTextureARB (
		JNIEnv *env, jobject obj,
		jint texture)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glActiveTextureARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) texture
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClientActiveTextureARB ( GLenum texture ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glClientActiveTextureARB (
		JNIEnv *env, jobject obj,
		jint texture)
	{
		static void (CALLBACK *__func_ptr__)(GLenum) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum))
				getGLProcAddressHelper("glClientActiveTextureARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) texture
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1dARB ( GLenum target , GLdouble s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord1dARB (
		JNIEnv *env, jobject obj,
		jint target,
		jdouble s)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLdouble))
				getGLProcAddressHelper("glMultiTexCoord1dARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLdouble) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1dvARB ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord1dvARB (
		JNIEnv *env, jobject obj,
		jint target,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLdouble *) = NULL;
		jdouble *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLdouble *))
				getGLProcAddressHelper("glMultiTexCoord1dvARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(const GLdouble *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1fARB ( GLenum target , GLfloat s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord1fARB (
		JNIEnv *env, jobject obj,
		jint target,
		jfloat s)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLfloat))
				getGLProcAddressHelper("glMultiTexCoord1fARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLfloat) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1fvARB ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord1fvARB (
		JNIEnv *env, jobject obj,
		jint target,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLfloat *) = NULL;
		jfloat *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLfloat *))
				getGLProcAddressHelper("glMultiTexCoord1fvARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(const GLfloat *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1iARB ( GLenum target , GLint s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord1iARB (
		JNIEnv *env, jobject obj,
		jint target,
		jint s)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint))
				getGLProcAddressHelper("glMultiTexCoord1iARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1ivARB ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord1ivARB (
		JNIEnv *env, jobject obj,
		jint target,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLint *) = NULL;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLint *))
				getGLProcAddressHelper("glMultiTexCoord1ivARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(const GLint *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1sARB ( GLenum target , GLshort s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord1sARB (
		JNIEnv *env, jobject obj,
		jint target,
		jshort s)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLshort))
				getGLProcAddressHelper("glMultiTexCoord1sARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLshort) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1svARB ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord1svARB (
		JNIEnv *env, jobject obj,
		jint target,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLshort *) = NULL;
		jshort *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLshort *))
				getGLProcAddressHelper("glMultiTexCoord1svARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(const GLshort *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2dARB ( GLenum target , GLdouble s , GLdouble t ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord2dARB (
		JNIEnv *env, jobject obj,
		jint target,
		jdouble s,
		jdouble t)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLdouble, GLdouble))
				getGLProcAddressHelper("glMultiTexCoord2dARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLdouble) s,
			(GLdouble) t
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2dvARB ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord2dvARB (
		JNIEnv *env, jobject obj,
		jint target,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLdouble *) = NULL;
		jdouble *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLdouble *))
				getGLProcAddressHelper("glMultiTexCoord2dvARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(const GLdouble *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2fARB ( GLenum target , GLfloat s , GLfloat t ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord2fARB (
		JNIEnv *env, jobject obj,
		jint target,
		jfloat s,
		jfloat t)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLfloat, GLfloat))
				getGLProcAddressHelper("glMultiTexCoord2fARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLfloat) s,
			(GLfloat) t
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2fvARB ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord2fvARB (
		JNIEnv *env, jobject obj,
		jint target,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLfloat *) = NULL;
		jfloat *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLfloat *))
				getGLProcAddressHelper("glMultiTexCoord2fvARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(const GLfloat *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2iARB ( GLenum target , GLint s , GLint t ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord2iARB (
		JNIEnv *env, jobject obj,
		jint target,
		jint s,
		jint t)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint))
				getGLProcAddressHelper("glMultiTexCoord2iARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) s,
			(GLint) t
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2ivARB ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord2ivARB (
		JNIEnv *env, jobject obj,
		jint target,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLint *) = NULL;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLint *))
				getGLProcAddressHelper("glMultiTexCoord2ivARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(const GLint *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2sARB ( GLenum target , GLshort s , GLshort t ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord2sARB (
		JNIEnv *env, jobject obj,
		jint target,
		jshort s,
		jshort t)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLshort, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLshort, GLshort))
				getGLProcAddressHelper("glMultiTexCoord2sARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLshort) s,
			(GLshort) t
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2svARB ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord2svARB (
		JNIEnv *env, jobject obj,
		jint target,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLshort *) = NULL;
		jshort *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLshort *))
				getGLProcAddressHelper("glMultiTexCoord2svARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(const GLshort *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3dARB ( GLenum target , GLdouble s , GLdouble t , GLdouble r ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord3dARB (
		JNIEnv *env, jobject obj,
		jint target,
		jdouble s,
		jdouble t,
		jdouble r)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glMultiTexCoord3dARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLdouble) s,
			(GLdouble) t,
			(GLdouble) r
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3dvARB ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord3dvARB (
		JNIEnv *env, jobject obj,
		jint target,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLdouble *) = NULL;
		jdouble *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLdouble *))
				getGLProcAddressHelper("glMultiTexCoord3dvARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(const GLdouble *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3fARB ( GLenum target , GLfloat s , GLfloat t , GLfloat r ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord3fARB (
		JNIEnv *env, jobject obj,
		jint target,
		jfloat s,
		jfloat t,
		jfloat r)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLfloat, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLfloat))
				getGLProcAddressHelper("glMultiTexCoord3fARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLfloat) s,
			(GLfloat) t,
			(GLfloat) r
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3fvARB ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord3fvARB (
		JNIEnv *env, jobject obj,
		jint target,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLfloat *) = NULL;
		jfloat *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLfloat *))
				getGLProcAddressHelper("glMultiTexCoord3fvARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(const GLfloat *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3iARB ( GLenum target , GLint s , GLint t , GLint r ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord3iARB (
		JNIEnv *env, jobject obj,
		jint target,
		jint s,
		jint t,
		jint r)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint))
				getGLProcAddressHelper("glMultiTexCoord3iARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) s,
			(GLint) t,
			(GLint) r
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3ivARB ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord3ivARB (
		JNIEnv *env, jobject obj,
		jint target,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLint *) = NULL;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLint *))
				getGLProcAddressHelper("glMultiTexCoord3ivARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(const GLint *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3sARB ( GLenum target , GLshort s , GLshort t , GLshort r ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord3sARB (
		JNIEnv *env, jobject obj,
		jint target,
		jshort s,
		jshort t,
		jshort r)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLshort, GLshort, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLshort, GLshort, GLshort))
				getGLProcAddressHelper("glMultiTexCoord3sARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLshort) s,
			(GLshort) t,
			(GLshort) r
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3svARB ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord3svARB (
		JNIEnv *env, jobject obj,
		jint target,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLshort *) = NULL;
		jshort *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLshort *))
				getGLProcAddressHelper("glMultiTexCoord3svARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(const GLshort *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4dARB ( GLenum target , GLdouble s , GLdouble t , GLdouble r , GLdouble q ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord4dARB (
		JNIEnv *env, jobject obj,
		jint target,
		jdouble s,
		jdouble t,
		jdouble r,
		jdouble q)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble))
				getGLProcAddressHelper("glMultiTexCoord4dARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLdouble) s,
			(GLdouble) t,
			(GLdouble) r,
			(GLdouble) q
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4dvARB ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord4dvARB (
		JNIEnv *env, jobject obj,
		jint target,
		jdoubleArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLdouble *) = NULL;
		jdouble *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLdouble *))
				getGLProcAddressHelper("glMultiTexCoord4dvARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(const GLdouble *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseDoubleArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4fARB ( GLenum target , GLfloat s , GLfloat t , GLfloat r , GLfloat q ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord4fARB (
		JNIEnv *env, jobject obj,
		jint target,
		jfloat s,
		jfloat t,
		jfloat r,
		jfloat q)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat))
				getGLProcAddressHelper("glMultiTexCoord4fARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLfloat) s,
			(GLfloat) t,
			(GLfloat) r,
			(GLfloat) q
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4fvARB ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord4fvARB (
		JNIEnv *env, jobject obj,
		jint target,
		jfloatArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLfloat *) = NULL;
		jfloat *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLfloat *))
				getGLProcAddressHelper("glMultiTexCoord4fvARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(const GLfloat *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseFloatArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4iARB ( GLenum target , GLint s , GLint t , GLint r , GLint q ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord4iARB (
		JNIEnv *env, jobject obj,
		jint target,
		jint s,
		jint t,
		jint r,
		jint q)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLint, GLint, GLint, GLint) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint))
				getGLProcAddressHelper("glMultiTexCoord4iARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLint) s,
			(GLint) t,
			(GLint) r,
			(GLint) q
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4ivARB ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord4ivARB (
		JNIEnv *env, jobject obj,
		jint target,
		jintArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLint *) = NULL;
		jint *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLint *))
				getGLProcAddressHelper("glMultiTexCoord4ivARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(const GLint *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseIntArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4sARB ( GLenum target , GLshort s , GLshort t , GLshort r , GLshort q ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord4sARB (
		JNIEnv *env, jobject obj,
		jint target,
		jshort s,
		jshort t,
		jshort r,
		jshort q)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, GLshort, GLshort, GLshort, GLshort) = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, GLshort, GLshort, GLshort, GLshort))
				getGLProcAddressHelper("glMultiTexCoord4sARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		__func_ptr__ (
			(GLenum) target,
			(GLshort) s,
			(GLshort) t,
			(GLshort) r,
			(GLshort) q
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4svARB ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord4svARB (
		JNIEnv *env, jobject obj,
		jint target,
		jshortArray v)
	{
		static void (CALLBACK *__func_ptr__)(GLenum, const GLshort *) = NULL;
		jshort *ptr1 = NULL;

		if(__func_ptr__==NULL) {
			__func_ptr__ = (void (CALLBACK *)(GLenum, const GLshort *))
				getGLProcAddressHelper("glMultiTexCoord4svARB", NULL, 1, 0);
			if(__func_ptr__==NULL)
				return;
		}
		if(v!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, v, 0);
		}
		__func_ptr__ (
			(GLenum) target,
			(const GLshort *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/* C2J Parser Version 1.5 Beta:  Java program parsed successfully. */ 
