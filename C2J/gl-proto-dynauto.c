/**
 * C2J Parser Version 2.0
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

		disp__glClearIndex (
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

		disp__glClearColor (
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

		disp__glClear (
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

		disp__glIndexMask (
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

		disp__glColorMask (
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

		disp__glAlphaFunc (
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

		disp__glBlendFunc (
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

		disp__glLogicOp (
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

		disp__glCullFace (
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

		disp__glFrontFace (
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

		disp__glPointSize (
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

		disp__glLineWidth (
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

		disp__glLineStipple (
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

		disp__glPolygonMode (
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

		disp__glPolygonOffset (
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
		jbyte *ptr0 = NULL;

		if(mask!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, mask, 0);
		}
		disp__glPolygonStipple (
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
		jboolean isCopiedArray0 = JNI_FALSE;
		jbyte *ptr0 = NULL;

		if(mask!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, mask, &isCopiedArray0);
		}
		disp__glGetPolygonStipple (
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

		disp__glEdgeFlag (
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
		jboolean *ptr0 = NULL;

		if(flag!=NULL)
		{
			ptr0 = (*env)->GetBooleanArrayElements(env, flag, 0);
		}
		disp__glEdgeFlagv (
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

		disp__glScissor (
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
		jdouble *ptr1 = NULL;

		if(equation!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, equation, 0);
		}
		disp__glClipPlane (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;

		if(equation!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, equation, &isCopiedArray1);
		}
		disp__glGetClipPlane (
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

		disp__glDrawBuffer (
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

		disp__glReadBuffer (
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

		disp__glEnable (
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

		disp__glDisable (
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
		jboolean ret;


		ret = (jboolean) disp__glIsEnabled (
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

		disp__glEnableClientState (
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

		disp__glDisableClientState (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jboolean *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetBooleanArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetBooleanv (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetDoublev (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetFloatv (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetIntegerv (
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

		disp__glPushAttrib (
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

		disp__glPopAttrib (
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

		disp__glPushClientAttrib (
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

		disp__glPopClientAttrib (
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
		jint ret;


		ret = (jint) disp__glRenderMode (
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
		jint ret;


		ret = (jint) disp__glGetError (
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

		disp__glFinish (
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

		disp__glFlush (
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

		disp__glHint (
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

		disp__glClearDepth (
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

		disp__glDepthFunc (
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

		disp__glDepthMask (
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

		disp__glDepthRange (
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

		disp__glClearAccum (
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

		disp__glAccum (
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

		disp__glMatrixMode (
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

		disp__glOrtho (
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

		disp__glFrustum (
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

		disp__glViewport (
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

		disp__glPushMatrix (
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

		disp__glPopMatrix (
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

		disp__glLoadIdentity (
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
		jdouble *ptr0 = NULL;

		if(m!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, m, 0);
		}
		disp__glLoadMatrixd (
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
		jfloat *ptr0 = NULL;

		if(m!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, m, 0);
		}
		disp__glLoadMatrixf (
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
		jdouble *ptr0 = NULL;

		if(m!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, m, 0);
		}
		disp__glMultMatrixd (
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
		jfloat *ptr0 = NULL;

		if(m!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, m, 0);
		}
		disp__glMultMatrixf (
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

		disp__glRotated (
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

		disp__glRotatef (
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

		disp__glScaled (
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

		disp__glScalef (
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

		disp__glTranslated (
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

		disp__glTranslatef (
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
		jboolean ret;


		ret = (jboolean) disp__glIsList (
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

		disp__glDeleteLists (
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
		jint ret;


		ret = (jint) disp__glGenLists (
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

		disp__glNewList (
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

		disp__glEndList (
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

		disp__glCallList (
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
		jbyte *ptr2 = NULL;

		if(lists!=NULL)
		{
			ptr2 = (*env)->GetByteArrayElements(env, lists, 0);
		}
		disp__glCallLists (
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
		jshort *ptr2 = NULL;

		if(lists!=NULL)
		{
			ptr2 = (*env)->GetShortArrayElements(env, lists, 0);
		}
		disp__glCallLists (
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
		jint *ptr2 = NULL;

		if(lists!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, lists, 0);
		}
		disp__glCallLists (
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
		jfloat *ptr2 = NULL;

		if(lists!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, lists, 0);
		}
		disp__glCallLists (
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
		jdouble *ptr2 = NULL;

		if(lists!=NULL)
		{
			ptr2 = (*env)->GetDoubleArrayElements(env, lists, 0);
		}
		disp__glCallLists (
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
		jboolean *ptr2 = NULL;

		if(lists!=NULL)
		{
			ptr2 = (*env)->GetBooleanArrayElements(env, lists, 0);
		}
		disp__glCallLists (
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
		jlong *ptr2 = NULL;

		if(lists!=NULL)
		{
			ptr2 = (*env)->GetLongArrayElements(env, lists, 0);
		}
		disp__glCallLists (
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

		disp__glListBase (
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

		disp__glBegin (
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

		disp__glEnd (
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

		disp__glVertex2d (
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

		disp__glVertex2f (
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

		disp__glVertex2i (
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

		disp__glVertex2s (
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

		disp__glVertex3d (
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

		disp__glVertex3f (
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

		disp__glVertex3i (
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

		disp__glVertex3s (
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

		disp__glVertex4d (
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

		disp__glVertex4f (
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

		disp__glVertex4i (
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

		disp__glVertex4s (
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
		jdouble *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glVertex2dv (
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
		jfloat *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glVertex2fv (
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
		jint *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glVertex2iv (
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
		jshort *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glVertex2sv (
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
		jdouble *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glVertex3dv (
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
		jfloat *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glVertex3fv (
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
		jint *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glVertex3iv (
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
		jshort *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glVertex3sv (
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
		jdouble *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glVertex4dv (
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
		jfloat *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glVertex4fv (
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
		jint *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glVertex4iv (
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
		jshort *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glVertex4sv (
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

		disp__glNormal3b (
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

		disp__glNormal3d (
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

		disp__glNormal3f (
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

		disp__glNormal3i (
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

		disp__glNormal3s (
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
		jbyte *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, v, 0);
		}
		disp__glNormal3bv (
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
		jdouble *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glNormal3dv (
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
		jfloat *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glNormal3fv (
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
		jint *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glNormal3iv (
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
		jshort *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glNormal3sv (
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

		disp__glIndexd (
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

		disp__glIndexf (
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

		disp__glIndexi (
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

		disp__glIndexs (
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

		disp__glIndexub (
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
		jdouble *ptr0 = NULL;

		if(c!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, c, 0);
		}
		disp__glIndexdv (
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
		jfloat *ptr0 = NULL;

		if(c!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, c, 0);
		}
		disp__glIndexfv (
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
		jint *ptr0 = NULL;

		if(c!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, c, 0);
		}
		disp__glIndexiv (
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
		jshort *ptr0 = NULL;

		if(c!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, c, 0);
		}
		disp__glIndexsv (
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
		jbyte *ptr0 = NULL;

		if(c!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, c, 0);
		}
		disp__glIndexubv (
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

		disp__glColor3b (
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

		disp__glColor3d (
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

		disp__glColor3f (
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

		disp__glColor3i (
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

		disp__glColor3s (
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

		disp__glColor3ub (
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

		disp__glColor3ui (
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

		disp__glColor3us (
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

		disp__glColor4b (
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

		disp__glColor4d (
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

		disp__glColor4f (
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

		disp__glColor4i (
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

		disp__glColor4s (
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

		disp__glColor4ub (
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

		disp__glColor4ui (
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

		disp__glColor4us (
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
		jbyte *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, v, 0);
		}
		disp__glColor3bv (
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
		jdouble *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glColor3dv (
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
		jfloat *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glColor3fv (
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
		jint *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glColor3iv (
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
		jshort *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glColor3sv (
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
		jbyte *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, v, 0);
		}
		disp__glColor3ubv (
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
		jint *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glColor3uiv (
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
		jshort *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glColor3usv (
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
		jbyte *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, v, 0);
		}
		disp__glColor4bv (
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
		jdouble *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glColor4dv (
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
		jfloat *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glColor4fv (
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
		jint *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glColor4iv (
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
		jshort *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glColor4sv (
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
		jbyte *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetByteArrayElements(env, v, 0);
		}
		disp__glColor4ubv (
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
		jint *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glColor4uiv (
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
		jshort *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glColor4usv (
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

		disp__glTexCoord1d (
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

		disp__glTexCoord1f (
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

		disp__glTexCoord1i (
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

		disp__glTexCoord1s (
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

		disp__glTexCoord2d (
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

		disp__glTexCoord2f (
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

		disp__glTexCoord2i (
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

		disp__glTexCoord2s (
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

		disp__glTexCoord3d (
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

		disp__glTexCoord3f (
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

		disp__glTexCoord3i (
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

		disp__glTexCoord3s (
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

		disp__glTexCoord4d (
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

		disp__glTexCoord4f (
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

		disp__glTexCoord4i (
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

		disp__glTexCoord4s (
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
		jdouble *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glTexCoord1dv (
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
		jfloat *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glTexCoord1fv (
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
		jint *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glTexCoord1iv (
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
		jshort *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glTexCoord1sv (
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
		jdouble *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glTexCoord2dv (
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
		jfloat *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glTexCoord2fv (
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
		jint *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glTexCoord2iv (
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
		jshort *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glTexCoord2sv (
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
		jdouble *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glTexCoord3dv (
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
		jfloat *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glTexCoord3fv (
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
		jint *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glTexCoord3iv (
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
		jshort *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glTexCoord3sv (
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
		jdouble *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glTexCoord4dv (
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
		jfloat *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glTexCoord4fv (
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
		jint *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glTexCoord4iv (
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
		jshort *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glTexCoord4sv (
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

		disp__glRasterPos2d (
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

		disp__glRasterPos2f (
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

		disp__glRasterPos2i (
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

		disp__glRasterPos2s (
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

		disp__glRasterPos3d (
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

		disp__glRasterPos3f (
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

		disp__glRasterPos3i (
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

		disp__glRasterPos3s (
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

		disp__glRasterPos4d (
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

		disp__glRasterPos4f (
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

		disp__glRasterPos4i (
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

		disp__glRasterPos4s (
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
		jdouble *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glRasterPos2dv (
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
		jfloat *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glRasterPos2fv (
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
		jint *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glRasterPos2iv (
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
		jshort *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glRasterPos2sv (
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
		jdouble *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glRasterPos3dv (
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
		jfloat *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glRasterPos3fv (
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
		jint *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glRasterPos3iv (
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
		jshort *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glRasterPos3sv (
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
		jdouble *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glRasterPos4dv (
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
		jfloat *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glRasterPos4fv (
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
		jint *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glRasterPos4iv (
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
		jshort *ptr0 = NULL;

		if(v!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glRasterPos4sv (
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

		disp__glRectd (
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

		disp__glRectf (
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

		disp__glRecti (
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

		disp__glRects (
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
		jdouble *ptr0 = NULL;
		jdouble *ptr1 = NULL;

		if(v1!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, v1, 0);
		}
		if(v2!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, v2, 0);
		}
		disp__glRectdv (
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
		jfloat *ptr0 = NULL;
		jfloat *ptr1 = NULL;

		if(v1!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, v1, 0);
		}
		if(v2!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, v2, 0);
		}
		disp__glRectfv (
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
		jint *ptr0 = NULL;
		jint *ptr1 = NULL;

		if(v1!=NULL)
		{
			ptr0 = (*env)->GetIntArrayElements(env, v1, 0);
		}
		if(v2!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, v2, 0);
		}
		disp__glRectiv (
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
		jshort *ptr0 = NULL;
		jshort *ptr1 = NULL;

		if(v1!=NULL)
		{
			ptr0 = (*env)->GetShortArrayElements(env, v1, 0);
		}
		if(v2!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, v2, 0);
		}
		disp__glRectsv (
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
		jbyte *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		disp__glVertexPointer (
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
		jshort *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		disp__glVertexPointer (
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
		jint *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		disp__glVertexPointer (
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
		jfloat *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		disp__glVertexPointer (
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
		jdouble *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		disp__glVertexPointer (
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
		jboolean *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		disp__glVertexPointer (
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
		jlong *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		disp__glVertexPointer (
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
		jbyte *ptr2 = NULL;

		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		disp__glNormalPointer (
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
		jshort *ptr2 = NULL;

		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		disp__glNormalPointer (
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
		jint *ptr2 = NULL;

		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		disp__glNormalPointer (
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
		jfloat *ptr2 = NULL;

		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		disp__glNormalPointer (
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
		jdouble *ptr2 = NULL;

		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		disp__glNormalPointer (
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
		jboolean *ptr2 = NULL;

		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		disp__glNormalPointer (
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
		jlong *ptr2 = NULL;

		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		disp__glNormalPointer (
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
		jbyte *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		disp__glColorPointer (
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
		jshort *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		disp__glColorPointer (
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
		jint *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		disp__glColorPointer (
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
		jfloat *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		disp__glColorPointer (
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
		jdouble *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		disp__glColorPointer (
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
		jboolean *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		disp__glColorPointer (
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
		jlong *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		disp__glColorPointer (
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
		jbyte *ptr2 = NULL;

		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		disp__glIndexPointer (
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
		jshort *ptr2 = NULL;

		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		disp__glIndexPointer (
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
		jint *ptr2 = NULL;

		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		disp__glIndexPointer (
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
		jfloat *ptr2 = NULL;

		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		disp__glIndexPointer (
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
		jdouble *ptr2 = NULL;

		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		disp__glIndexPointer (
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
		jboolean *ptr2 = NULL;

		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		disp__glIndexPointer (
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
		jlong *ptr2 = NULL;

		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		disp__glIndexPointer (
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
		jbyte *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		disp__glTexCoordPointer (
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
		jshort *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		disp__glTexCoordPointer (
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
		jint *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		disp__glTexCoordPointer (
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
		jfloat *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		disp__glTexCoordPointer (
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
		jdouble *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		disp__glTexCoordPointer (
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
		jboolean *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		disp__glTexCoordPointer (
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
		jlong *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		disp__glTexCoordPointer (
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
		jbyte *ptr1 = NULL;

		if(ptr!=NULL)
		{
			ptr1 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		disp__glEdgeFlagPointer (
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
		jshort *ptr1 = NULL;

		if(ptr!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		disp__glEdgeFlagPointer (
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
		jint *ptr1 = NULL;

		if(ptr!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		disp__glEdgeFlagPointer (
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
		jfloat *ptr1 = NULL;

		if(ptr!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		disp__glEdgeFlagPointer (
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
		jdouble *ptr1 = NULL;

		if(ptr!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		disp__glEdgeFlagPointer (
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
		jboolean *ptr1 = NULL;

		if(ptr!=NULL)
		{
			ptr1 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		disp__glEdgeFlagPointer (
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
		jlong *ptr1 = NULL;

		if(ptr!=NULL)
		{
			ptr1 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		disp__glEdgeFlagPointer (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jbyte *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetByteArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetPointerv (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jshort *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetPointerv (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetPointerv (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetPointerv (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetPointerv (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jboolean *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetBooleanArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetPointerv (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jlong *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetLongArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetPointerv (
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

		disp__glArrayElement (
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

		disp__glDrawArrays (
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
		jbyte *ptr3 = NULL;

		if(indices!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, indices, 0);
		}
		disp__glDrawElements (
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
		jshort *ptr3 = NULL;

		if(indices!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, indices, 0);
		}
		disp__glDrawElements (
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
		jint *ptr3 = NULL;

		if(indices!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, indices, 0);
		}
		disp__glDrawElements (
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
		jfloat *ptr3 = NULL;

		if(indices!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, indices, 0);
		}
		disp__glDrawElements (
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
		jdouble *ptr3 = NULL;

		if(indices!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, indices, 0);
		}
		disp__glDrawElements (
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
		jboolean *ptr3 = NULL;

		if(indices!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, indices, 0);
		}
		disp__glDrawElements (
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
		jlong *ptr3 = NULL;

		if(indices!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, indices, 0);
		}
		disp__glDrawElements (
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
		jbyte *ptr2 = NULL;

		if(pointer!=NULL)
		{
			ptr2 = (*env)->GetByteArrayElements(env, pointer, 0);
		}
		disp__glInterleavedArrays (
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
		jshort *ptr2 = NULL;

		if(pointer!=NULL)
		{
			ptr2 = (*env)->GetShortArrayElements(env, pointer, 0);
		}
		disp__glInterleavedArrays (
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
		jint *ptr2 = NULL;

		if(pointer!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, pointer, 0);
		}
		disp__glInterleavedArrays (
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
		jfloat *ptr2 = NULL;

		if(pointer!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, pointer, 0);
		}
		disp__glInterleavedArrays (
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
		jdouble *ptr2 = NULL;

		if(pointer!=NULL)
		{
			ptr2 = (*env)->GetDoubleArrayElements(env, pointer, 0);
		}
		disp__glInterleavedArrays (
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
		jboolean *ptr2 = NULL;

		if(pointer!=NULL)
		{
			ptr2 = (*env)->GetBooleanArrayElements(env, pointer, 0);
		}
		disp__glInterleavedArrays (
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
		jlong *ptr2 = NULL;

		if(pointer!=NULL)
		{
			ptr2 = (*env)->GetLongArrayElements(env, pointer, 0);
		}
		disp__glInterleavedArrays (
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

		disp__glShadeModel (
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

		disp__glLightf (
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

		disp__glLighti (
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
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		disp__glLightfv (
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
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, 0);
		}
		disp__glLightiv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetLightfv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetLightiv (
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

		disp__glLightModelf (
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

		disp__glLightModeli (
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
		jfloat *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		disp__glLightModelfv (
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
		jint *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, params, 0);
		}
		disp__glLightModeliv (
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

		disp__glMaterialf (
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

		disp__glMateriali (
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
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		disp__glMaterialfv (
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
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, 0);
		}
		disp__glMaterialiv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetMaterialfv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetMaterialiv (
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

		disp__glColorMaterial (
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

		disp__glPixelZoom (
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

		disp__glPixelStoref (
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

		disp__glPixelStorei (
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

		disp__glPixelTransferf (
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

		disp__glPixelTransferi (
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
		jfloat *ptr2 = NULL;

		if(values!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, values, 0);
		}
		disp__glPixelMapfv (
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
		jint *ptr2 = NULL;

		if(values!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, values, 0);
		}
		disp__glPixelMapuiv (
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
		jshort *ptr2 = NULL;

		if(values!=NULL)
		{
			ptr2 = (*env)->GetShortArrayElements(env, values, 0);
		}
		disp__glPixelMapusv (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;

		if(values!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, values, &isCopiedArray1);
		}
		disp__glGetPixelMapfv (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if(values!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, values, &isCopiedArray1);
		}
		disp__glGetPixelMapuiv (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jshort *ptr1 = NULL;

		if(values!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, values, &isCopiedArray1);
		}
		disp__glGetPixelMapusv (
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
		jbyte *ptr6 = NULL;

		if(bitmap!=NULL)
		{
			ptr6 = (*env)->GetByteArrayElements(env, bitmap, 0);
		}
		disp__glBitmap (
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
		jboolean isCopiedArray6 = JNI_FALSE;
		jbyte *ptr6 = NULL;

		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetByteArrayElements(env, pixels, &isCopiedArray6);
		}
		disp__glReadPixels (
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
		jboolean isCopiedArray6 = JNI_FALSE;
		jshort *ptr6 = NULL;

		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetShortArrayElements(env, pixels, &isCopiedArray6);
		}
		disp__glReadPixels (
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
		jboolean isCopiedArray6 = JNI_FALSE;
		jint *ptr6 = NULL;

		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetIntArrayElements(env, pixels, &isCopiedArray6);
		}
		disp__glReadPixels (
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
		jboolean isCopiedArray6 = JNI_FALSE;
		jfloat *ptr6 = NULL;

		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetFloatArrayElements(env, pixels, &isCopiedArray6);
		}
		disp__glReadPixels (
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
		jboolean isCopiedArray6 = JNI_FALSE;
		jdouble *ptr6 = NULL;

		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetDoubleArrayElements(env, pixels, &isCopiedArray6);
		}
		disp__glReadPixels (
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
		jboolean isCopiedArray6 = JNI_FALSE;
		jboolean *ptr6 = NULL;

		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetBooleanArrayElements(env, pixels, &isCopiedArray6);
		}
		disp__glReadPixels (
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
		jboolean isCopiedArray6 = JNI_FALSE;
		jlong *ptr6 = NULL;

		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetLongArrayElements(env, pixels, &isCopiedArray6);
		}
		disp__glReadPixels (
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
		jbyte *ptr4 = NULL;

		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		disp__glDrawPixels (
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
		jshort *ptr4 = NULL;

		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		disp__glDrawPixels (
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
		jint *ptr4 = NULL;

		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		disp__glDrawPixels (
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
		jfloat *ptr4 = NULL;

		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		disp__glDrawPixels (
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
		jdouble *ptr4 = NULL;

		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		disp__glDrawPixels (
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
		jboolean *ptr4 = NULL;

		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		disp__glDrawPixels (
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
		jlong *ptr4 = NULL;

		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		disp__glDrawPixels (
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

		disp__glCopyPixels (
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

		disp__glStencilFunc (
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

		disp__glStencilMask (
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

		disp__glStencilOp (
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

		disp__glClearStencil (
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

		disp__glTexGend (
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

		disp__glTexGenf (
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

		disp__glTexGeni (
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
		jdouble *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetDoubleArrayElements(env, params, 0);
		}
		disp__glTexGendv (
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
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		disp__glTexGenfv (
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
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, 0);
		}
		disp__glTexGeniv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetDoubleArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetTexGendv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetTexGenfv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetTexGeniv (
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

		disp__glTexEnvf (
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

		disp__glTexEnvi (
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
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		disp__glTexEnvfv (
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
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, 0);
		}
		disp__glTexEnviv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetTexEnvfv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetTexEnviv (
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

		disp__glTexParameterf (
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

		disp__glTexParameteri (
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
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		disp__glTexParameterfv (
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
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, 0);
		}
		disp__glTexParameteriv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetTexParameterfv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetTexParameteriv (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;

		if(params!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray3);
		}
		disp__glGetTexLevelParameterfv (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;

		if(params!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, params, &isCopiedArray3);
		}
		disp__glGetTexLevelParameteriv (
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
		jbyte *ptr7 = NULL;

		if(pixels!=NULL)
		{
			ptr7 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		disp__glTexImage1D (
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
		jshort *ptr7 = NULL;

		if(pixels!=NULL)
		{
			ptr7 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		disp__glTexImage1D (
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
		jint *ptr7 = NULL;

		if(pixels!=NULL)
		{
			ptr7 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		disp__glTexImage1D (
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
		jfloat *ptr7 = NULL;

		if(pixels!=NULL)
		{
			ptr7 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		disp__glTexImage1D (
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
		jdouble *ptr7 = NULL;

		if(pixels!=NULL)
		{
			ptr7 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		disp__glTexImage1D (
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
		jboolean *ptr7 = NULL;

		if(pixels!=NULL)
		{
			ptr7 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		disp__glTexImage1D (
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
		jlong *ptr7 = NULL;

		if(pixels!=NULL)
		{
			ptr7 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		disp__glTexImage1D (
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
		jbyte *ptr8 = NULL;

		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		disp__glTexImage2D (
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
		jshort *ptr8 = NULL;

		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		disp__glTexImage2D (
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
		jint *ptr8 = NULL;

		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		disp__glTexImage2D (
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
		jfloat *ptr8 = NULL;

		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		disp__glTexImage2D (
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
		jdouble *ptr8 = NULL;

		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		disp__glTexImage2D (
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
		jboolean *ptr8 = NULL;

		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		disp__glTexImage2D (
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
		jlong *ptr8 = NULL;

		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		disp__glTexImage2D (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jbyte *ptr4 = NULL;

		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetByteArrayElements(env, pixels, &isCopiedArray4);
		}
		disp__glGetTexImage (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jshort *ptr4 = NULL;

		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetShortArrayElements(env, pixels, &isCopiedArray4);
		}
		disp__glGetTexImage (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jint *ptr4 = NULL;

		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, pixels, &isCopiedArray4);
		}
		disp__glGetTexImage (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;

		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, pixels, &isCopiedArray4);
		}
		disp__glGetTexImage (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jdouble *ptr4 = NULL;

		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, pixels, &isCopiedArray4);
		}
		disp__glGetTexImage (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jboolean *ptr4 = NULL;

		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetBooleanArrayElements(env, pixels, &isCopiedArray4);
		}
		disp__glGetTexImage (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jlong *ptr4 = NULL;

		if(pixels!=NULL)
		{
			ptr4 = (*env)->GetLongArrayElements(env, pixels, &isCopiedArray4);
		}
		disp__glGetTexImage (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if(textures!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, textures, &isCopiedArray1);
		}
		disp__glGenTextures (
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
		jint *ptr1 = NULL;

		if(textures!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, textures, 0);
		}
		disp__glDeleteTextures (
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

		disp__glBindTexture (
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
		jint *ptr1 = NULL;
		jfloat *ptr2 = NULL;

		if(textures!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, textures, 0);
		}
		if(priorities!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, priorities, 0);
		}
		disp__glPrioritizeTextures (
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
		jboolean ret;

		jint *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jboolean *ptr2 = NULL;

		if(textures!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, textures, 0);
		}
		if(residences!=NULL)
		{
			ptr2 = (*env)->GetBooleanArrayElements(env, residences, &isCopiedArray2);
		}
		ret = (jboolean) disp__glAreTexturesResident (
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
		jboolean ret;


		ret = (jboolean) disp__glIsTexture (
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
		jbyte *ptr6 = NULL;

		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage1D (
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
		jshort *ptr6 = NULL;

		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage1D (
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
		jint *ptr6 = NULL;

		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage1D (
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
		jfloat *ptr6 = NULL;

		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage1D (
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
		jdouble *ptr6 = NULL;

		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage1D (
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
		jboolean *ptr6 = NULL;

		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage1D (
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
		jlong *ptr6 = NULL;

		if(pixels!=NULL)
		{
			ptr6 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage1D (
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
		jbyte *ptr8 = NULL;

		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage2D (
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
		jshort *ptr8 = NULL;

		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage2D (
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
		jint *ptr8 = NULL;

		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage2D (
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
		jfloat *ptr8 = NULL;

		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage2D (
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
		jdouble *ptr8 = NULL;

		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage2D (
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
		jboolean *ptr8 = NULL;

		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage2D (
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
		jlong *ptr8 = NULL;

		if(pixels!=NULL)
		{
			ptr8 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage2D (
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

		disp__glCopyTexImage1D (
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

		disp__glCopyTexImage2D (
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

		disp__glCopyTexSubImage1D (
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

		disp__glCopyTexSubImage2D (
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
		jdouble *ptr5 = NULL;

		if(points!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, points, 0);
		}
		disp__glMap1d (
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
		jfloat *ptr5 = NULL;

		if(points!=NULL)
		{
			ptr5 = (*env)->GetFloatArrayElements(env, points, 0);
		}
		disp__glMap1f (
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
		jdouble *ptr9 = NULL;

		if(points!=NULL)
		{
			ptr9 = (*env)->GetDoubleArrayElements(env, points, 0);
		}
		disp__glMap2d (
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
		jfloat *ptr9 = NULL;

		if(points!=NULL)
		{
			ptr9 = (*env)->GetFloatArrayElements(env, points, 0);
		}
		disp__glMap2f (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;

		if(v!=NULL)
		{
			ptr2 = (*env)->GetDoubleArrayElements(env, v, &isCopiedArray2);
		}
		disp__glGetMapdv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(v!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, v, &isCopiedArray2);
		}
		disp__glGetMapfv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(v!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, v, &isCopiedArray2);
		}
		disp__glGetMapiv (
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

		disp__glEvalCoord1d (
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

		disp__glEvalCoord1f (
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
		jdouble *ptr0 = NULL;

		if(u!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, u, 0);
		}
		disp__glEvalCoord1dv (
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
		jfloat *ptr0 = NULL;

		if(u!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, u, 0);
		}
		disp__glEvalCoord1fv (
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

		disp__glEvalCoord2d (
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

		disp__glEvalCoord2f (
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
		jdouble *ptr0 = NULL;

		if(u!=NULL)
		{
			ptr0 = (*env)->GetDoubleArrayElements(env, u, 0);
		}
		disp__glEvalCoord2dv (
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
		jfloat *ptr0 = NULL;

		if(u!=NULL)
		{
			ptr0 = (*env)->GetFloatArrayElements(env, u, 0);
		}
		disp__glEvalCoord2fv (
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

		disp__glMapGrid1d (
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

		disp__glMapGrid1f (
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

		disp__glMapGrid2d (
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

		disp__glMapGrid2f (
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

		disp__glEvalPoint1 (
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

		disp__glEvalPoint2 (
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

		disp__glEvalMesh1 (
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

		disp__glEvalMesh2 (
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

		disp__glFogf (
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

		disp__glFogi (
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
		jfloat *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		disp__glFogfv (
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
		jint *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, params, 0);
		}
		disp__glFogiv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(buffer!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, buffer, &isCopiedArray2);
		}
		disp__glFeedbackBuffer (
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

		disp__glPassThrough (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if(buffer!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, buffer, &isCopiedArray1);
		}
		disp__glSelectBuffer (
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

		disp__glInitNames (
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

		disp__glLoadName (
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

		disp__glPushName (
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

		disp__glPopName (
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
		jbyte *ptr5 = NULL;

		if(indices!=NULL)
		{
			ptr5 = (*env)->GetByteArrayElements(env, indices, 0);
		}
		disp__glDrawRangeElements (
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
		jshort *ptr5 = NULL;

		if(indices!=NULL)
		{
			ptr5 = (*env)->GetShortArrayElements(env, indices, 0);
		}
		disp__glDrawRangeElements (
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
		jint *ptr5 = NULL;

		if(indices!=NULL)
		{
			ptr5 = (*env)->GetIntArrayElements(env, indices, 0);
		}
		disp__glDrawRangeElements (
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
		jfloat *ptr5 = NULL;

		if(indices!=NULL)
		{
			ptr5 = (*env)->GetFloatArrayElements(env, indices, 0);
		}
		disp__glDrawRangeElements (
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
		jdouble *ptr5 = NULL;

		if(indices!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, indices, 0);
		}
		disp__glDrawRangeElements (
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
		jboolean *ptr5 = NULL;

		if(indices!=NULL)
		{
			ptr5 = (*env)->GetBooleanArrayElements(env, indices, 0);
		}
		disp__glDrawRangeElements (
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
		jlong *ptr5 = NULL;

		if(indices!=NULL)
		{
			ptr5 = (*env)->GetLongArrayElements(env, indices, 0);
		}
		disp__glDrawRangeElements (
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
		jbyte *ptr9 = NULL;

		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		disp__glTexImage3D (
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
		jshort *ptr9 = NULL;

		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		disp__glTexImage3D (
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
		jint *ptr9 = NULL;

		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		disp__glTexImage3D (
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
		jfloat *ptr9 = NULL;

		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		disp__glTexImage3D (
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
		jdouble *ptr9 = NULL;

		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		disp__glTexImage3D (
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
		jboolean *ptr9 = NULL;

		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		disp__glTexImage3D (
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
		jlong *ptr9 = NULL;

		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		disp__glTexImage3D (
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
		jbyte *ptr10 = NULL;

		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage3D (
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
		jshort *ptr10 = NULL;

		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage3D (
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
		jint *ptr10 = NULL;

		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage3D (
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
		jfloat *ptr10 = NULL;

		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage3D (
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
		jdouble *ptr10 = NULL;

		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage3D (
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
		jboolean *ptr10 = NULL;

		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage3D (
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
		jlong *ptr10 = NULL;

		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage3D (
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

		disp__glCopyTexSubImage3D (
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
		jbyte *ptr5 = NULL;

		if(table!=NULL)
		{
			ptr5 = (*env)->GetByteArrayElements(env, table, 0);
		}
		disp__glColorTable (
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
		jshort *ptr5 = NULL;

		if(table!=NULL)
		{
			ptr5 = (*env)->GetShortArrayElements(env, table, 0);
		}
		disp__glColorTable (
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
		jint *ptr5 = NULL;

		if(table!=NULL)
		{
			ptr5 = (*env)->GetIntArrayElements(env, table, 0);
		}
		disp__glColorTable (
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
		jfloat *ptr5 = NULL;

		if(table!=NULL)
		{
			ptr5 = (*env)->GetFloatArrayElements(env, table, 0);
		}
		disp__glColorTable (
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
		jdouble *ptr5 = NULL;

		if(table!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, table, 0);
		}
		disp__glColorTable (
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
		jboolean *ptr5 = NULL;

		if(table!=NULL)
		{
			ptr5 = (*env)->GetBooleanArrayElements(env, table, 0);
		}
		disp__glColorTable (
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
		jlong *ptr5 = NULL;

		if(table!=NULL)
		{
			ptr5 = (*env)->GetLongArrayElements(env, table, 0);
		}
		disp__glColorTable (
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
		jbyte *ptr5 = NULL;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetByteArrayElements(env, data, 0);
		}
		disp__glColorSubTable (
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
		jshort *ptr5 = NULL;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetShortArrayElements(env, data, 0);
		}
		disp__glColorSubTable (
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
		jint *ptr5 = NULL;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetIntArrayElements(env, data, 0);
		}
		disp__glColorSubTable (
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
		jfloat *ptr5 = NULL;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetFloatArrayElements(env, data, 0);
		}
		disp__glColorSubTable (
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
		jdouble *ptr5 = NULL;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, data, 0);
		}
		disp__glColorSubTable (
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
		jboolean *ptr5 = NULL;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetBooleanArrayElements(env, data, 0);
		}
		disp__glColorSubTable (
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
		jlong *ptr5 = NULL;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetLongArrayElements(env, data, 0);
		}
		disp__glColorSubTable (
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
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, 0);
		}
		disp__glColorTableParameteriv (
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
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		disp__glColorTableParameterfv (
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

		disp__glCopyColorSubTable (
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

		disp__glCopyColorTable (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jbyte *ptr3 = NULL;

		if(table!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, table, &isCopiedArray3);
		}
		disp__glGetColorTable (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jshort *ptr3 = NULL;

		if(table!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, table, &isCopiedArray3);
		}
		disp__glGetColorTable (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;

		if(table!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, table, &isCopiedArray3);
		}
		disp__glGetColorTable (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;

		if(table!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, table, &isCopiedArray3);
		}
		disp__glGetColorTable (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jdouble *ptr3 = NULL;

		if(table!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, table, &isCopiedArray3);
		}
		disp__glGetColorTable (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jboolean *ptr3 = NULL;

		if(table!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, table, &isCopiedArray3);
		}
		disp__glGetColorTable (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jlong *ptr3 = NULL;

		if(table!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, table, &isCopiedArray3);
		}
		disp__glGetColorTable (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetColorTableParameterfv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetColorTableParameteriv (
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

		disp__glBlendEquation (
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

		disp__glBlendColor (
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

		disp__glHistogram (
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

		disp__glResetHistogram (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jbyte *ptr4 = NULL;

		if(values!=NULL)
		{
			ptr4 = (*env)->GetByteArrayElements(env, values, &isCopiedArray4);
		}
		disp__glGetHistogram (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jshort *ptr4 = NULL;

		if(values!=NULL)
		{
			ptr4 = (*env)->GetShortArrayElements(env, values, &isCopiedArray4);
		}
		disp__glGetHistogram (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jint *ptr4 = NULL;

		if(values!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, values, &isCopiedArray4);
		}
		disp__glGetHistogram (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;

		if(values!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, values, &isCopiedArray4);
		}
		disp__glGetHistogram (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jdouble *ptr4 = NULL;

		if(values!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, values, &isCopiedArray4);
		}
		disp__glGetHistogram (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jboolean *ptr4 = NULL;

		if(values!=NULL)
		{
			ptr4 = (*env)->GetBooleanArrayElements(env, values, &isCopiedArray4);
		}
		disp__glGetHistogram (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jlong *ptr4 = NULL;

		if(values!=NULL)
		{
			ptr4 = (*env)->GetLongArrayElements(env, values, &isCopiedArray4);
		}
		disp__glGetHistogram (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetHistogramParameterfv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetHistogramParameteriv (
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

		disp__glMinmax (
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

		disp__glResetMinmax (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jbyte *ptr4 = NULL;

		if(values!=NULL)
		{
			ptr4 = (*env)->GetByteArrayElements(env, values, &isCopiedArray4);
		}
		disp__glGetMinmax (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jshort *ptr4 = NULL;

		if(values!=NULL)
		{
			ptr4 = (*env)->GetShortArrayElements(env, values, &isCopiedArray4);
		}
		disp__glGetMinmax (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jint *ptr4 = NULL;

		if(values!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, values, &isCopiedArray4);
		}
		disp__glGetMinmax (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;

		if(values!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, values, &isCopiedArray4);
		}
		disp__glGetMinmax (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jdouble *ptr4 = NULL;

		if(values!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, values, &isCopiedArray4);
		}
		disp__glGetMinmax (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jboolean *ptr4 = NULL;

		if(values!=NULL)
		{
			ptr4 = (*env)->GetBooleanArrayElements(env, values, &isCopiedArray4);
		}
		disp__glGetMinmax (
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
		jboolean isCopiedArray4 = JNI_FALSE;
		jlong *ptr4 = NULL;

		if(values!=NULL)
		{
			ptr4 = (*env)->GetLongArrayElements(env, values, &isCopiedArray4);
		}
		disp__glGetMinmax (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetMinmaxParameterfv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetMinmaxParameteriv (
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
		jbyte *ptr5 = NULL;

		if(image!=NULL)
		{
			ptr5 = (*env)->GetByteArrayElements(env, image, 0);
		}
		disp__glConvolutionFilter1D (
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
		jshort *ptr5 = NULL;

		if(image!=NULL)
		{
			ptr5 = (*env)->GetShortArrayElements(env, image, 0);
		}
		disp__glConvolutionFilter1D (
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
		jint *ptr5 = NULL;

		if(image!=NULL)
		{
			ptr5 = (*env)->GetIntArrayElements(env, image, 0);
		}
		disp__glConvolutionFilter1D (
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
		jfloat *ptr5 = NULL;

		if(image!=NULL)
		{
			ptr5 = (*env)->GetFloatArrayElements(env, image, 0);
		}
		disp__glConvolutionFilter1D (
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
		jdouble *ptr5 = NULL;

		if(image!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, image, 0);
		}
		disp__glConvolutionFilter1D (
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
		jboolean *ptr5 = NULL;

		if(image!=NULL)
		{
			ptr5 = (*env)->GetBooleanArrayElements(env, image, 0);
		}
		disp__glConvolutionFilter1D (
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
		jlong *ptr5 = NULL;

		if(image!=NULL)
		{
			ptr5 = (*env)->GetLongArrayElements(env, image, 0);
		}
		disp__glConvolutionFilter1D (
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
		jbyte *ptr6 = NULL;

		if(image!=NULL)
		{
			ptr6 = (*env)->GetByteArrayElements(env, image, 0);
		}
		disp__glConvolutionFilter2D (
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
		jshort *ptr6 = NULL;

		if(image!=NULL)
		{
			ptr6 = (*env)->GetShortArrayElements(env, image, 0);
		}
		disp__glConvolutionFilter2D (
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
		jint *ptr6 = NULL;

		if(image!=NULL)
		{
			ptr6 = (*env)->GetIntArrayElements(env, image, 0);
		}
		disp__glConvolutionFilter2D (
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
		jfloat *ptr6 = NULL;

		if(image!=NULL)
		{
			ptr6 = (*env)->GetFloatArrayElements(env, image, 0);
		}
		disp__glConvolutionFilter2D (
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
		jdouble *ptr6 = NULL;

		if(image!=NULL)
		{
			ptr6 = (*env)->GetDoubleArrayElements(env, image, 0);
		}
		disp__glConvolutionFilter2D (
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
		jboolean *ptr6 = NULL;

		if(image!=NULL)
		{
			ptr6 = (*env)->GetBooleanArrayElements(env, image, 0);
		}
		disp__glConvolutionFilter2D (
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
		jlong *ptr6 = NULL;

		if(image!=NULL)
		{
			ptr6 = (*env)->GetLongArrayElements(env, image, 0);
		}
		disp__glConvolutionFilter2D (
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

		disp__glConvolutionParameterf (
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
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		disp__glConvolutionParameterfv (
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

		disp__glConvolutionParameteri (
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
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, 0);
		}
		disp__glConvolutionParameteriv (
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

		disp__glCopyConvolutionFilter1D (
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

		disp__glCopyConvolutionFilter2D (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jbyte *ptr3 = NULL;

		if(image!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, image, &isCopiedArray3);
		}
		disp__glGetConvolutionFilter (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jshort *ptr3 = NULL;

		if(image!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, image, &isCopiedArray3);
		}
		disp__glGetConvolutionFilter (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;

		if(image!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, image, &isCopiedArray3);
		}
		disp__glGetConvolutionFilter (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;

		if(image!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, image, &isCopiedArray3);
		}
		disp__glGetConvolutionFilter (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jdouble *ptr3 = NULL;

		if(image!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, image, &isCopiedArray3);
		}
		disp__glGetConvolutionFilter (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jboolean *ptr3 = NULL;

		if(image!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, image, &isCopiedArray3);
		}
		disp__glGetConvolutionFilter (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jlong *ptr3 = NULL;

		if(image!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, image, &isCopiedArray3);
		}
		disp__glGetConvolutionFilter (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetConvolutionParameterfv (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetConvolutionParameteriv (
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
		jbyte *ptr6 = NULL;
		jbyte *ptr7 = NULL;

		if(row!=NULL)
		{
			ptr6 = (*env)->GetByteArrayElements(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (*env)->GetByteArrayElements(env, column, 0);
		}
		disp__glSeparableFilter2D (
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
		jshort *ptr6 = NULL;
		jshort *ptr7 = NULL;

		if(row!=NULL)
		{
			ptr6 = (*env)->GetShortArrayElements(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (*env)->GetShortArrayElements(env, column, 0);
		}
		disp__glSeparableFilter2D (
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
		jint *ptr6 = NULL;
		jint *ptr7 = NULL;

		if(row!=NULL)
		{
			ptr6 = (*env)->GetIntArrayElements(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (*env)->GetIntArrayElements(env, column, 0);
		}
		disp__glSeparableFilter2D (
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
		jfloat *ptr6 = NULL;
		jfloat *ptr7 = NULL;

		if(row!=NULL)
		{
			ptr6 = (*env)->GetFloatArrayElements(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (*env)->GetFloatArrayElements(env, column, 0);
		}
		disp__glSeparableFilter2D (
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
		jdouble *ptr6 = NULL;
		jdouble *ptr7 = NULL;

		if(row!=NULL)
		{
			ptr6 = (*env)->GetDoubleArrayElements(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (*env)->GetDoubleArrayElements(env, column, 0);
		}
		disp__glSeparableFilter2D (
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
		jboolean *ptr6 = NULL;
		jboolean *ptr7 = NULL;

		if(row!=NULL)
		{
			ptr6 = (*env)->GetBooleanArrayElements(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (*env)->GetBooleanArrayElements(env, column, 0);
		}
		disp__glSeparableFilter2D (
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
		jlong *ptr6 = NULL;
		jlong *ptr7 = NULL;

		if(row!=NULL)
		{
			ptr6 = (*env)->GetLongArrayElements(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (*env)->GetLongArrayElements(env, column, 0);
		}
		disp__glSeparableFilter2D (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jbyte *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jbyte *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jbyte *ptr5 = NULL;

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
		disp__glGetSeparableFilter (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jshort *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jshort *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jshort *ptr5 = NULL;

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
		disp__glGetSeparableFilter (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jint *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jint *ptr5 = NULL;

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
		disp__glGetSeparableFilter (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jfloat *ptr5 = NULL;

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
		disp__glGetSeparableFilter (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jdouble *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jdouble *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jdouble *ptr5 = NULL;

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
		disp__glGetSeparableFilter (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jboolean *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jboolean *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jboolean *ptr5 = NULL;

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
		disp__glGetSeparableFilter (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jlong *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jlong *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jlong *ptr5 = NULL;

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
		disp__glGetSeparableFilter (
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

		disp__glBlendColorEXT (
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

		disp__glPolygonOffsetEXT (
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
		jbyte *ptr9 = NULL;

		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		disp__glTexImage3DEXT (
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
		jshort *ptr9 = NULL;

		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		disp__glTexImage3DEXT (
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
		jint *ptr9 = NULL;

		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		disp__glTexImage3DEXT (
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
		jfloat *ptr9 = NULL;

		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		disp__glTexImage3DEXT (
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
		jdouble *ptr9 = NULL;

		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		disp__glTexImage3DEXT (
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
		jboolean *ptr9 = NULL;

		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		disp__glTexImage3DEXT (
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
		jlong *ptr9 = NULL;

		if(pixels!=NULL)
		{
			ptr9 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		disp__glTexImage3DEXT (
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
		jbyte *ptr10 = NULL;

		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetByteArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage3DEXT (
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
		jshort *ptr10 = NULL;

		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetShortArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage3DEXT (
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
		jint *ptr10 = NULL;

		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetIntArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage3DEXT (
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
		jfloat *ptr10 = NULL;

		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetFloatArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage3DEXT (
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
		jdouble *ptr10 = NULL;

		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetDoubleArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage3DEXT (
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
		jboolean *ptr10 = NULL;

		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetBooleanArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage3DEXT (
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
		jlong *ptr10 = NULL;

		if(pixels!=NULL)
		{
			ptr10 = (*env)->GetLongArrayElements(env, pixels, 0);
		}
		disp__glTexSubImage3DEXT (
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

		disp__glCopyTexSubImage3DEXT (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if(textures!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, textures, &isCopiedArray1);
		}
		disp__glGenTexturesEXT (
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
		jint *ptr1 = NULL;

		if(textures!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, textures, 0);
		}
		disp__glDeleteTexturesEXT (
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

		disp__glBindTextureEXT (
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
		jint *ptr1 = NULL;
		jfloat *ptr2 = NULL;

		if(textures!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, textures, 0);
		}
		if(priorities!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, priorities, 0);
		}
		disp__glPrioritizeTexturesEXT (
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
		jboolean ret;

		jint *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jboolean *ptr2 = NULL;

		if(textures!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, textures, 0);
		}
		if(residences!=NULL)
		{
			ptr2 = (*env)->GetBooleanArrayElements(env, residences, &isCopiedArray2);
		}
		ret = (jboolean) disp__glAreTexturesResidentEXT (
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
		jboolean ret;


		ret = (jboolean) disp__glIsTextureEXT (
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
		jbyte *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		disp__glVertexPointerEXT (
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
		jshort *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		disp__glVertexPointerEXT (
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
		jint *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		disp__glVertexPointerEXT (
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
		jfloat *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		disp__glVertexPointerEXT (
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
		jdouble *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		disp__glVertexPointerEXT (
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
		jboolean *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		disp__glVertexPointerEXT (
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
		jlong *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		disp__glVertexPointerEXT (
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
		jbyte *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		disp__glNormalPointerEXT (
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
		jshort *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		disp__glNormalPointerEXT (
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
		jint *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		disp__glNormalPointerEXT (
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
		jfloat *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		disp__glNormalPointerEXT (
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
		jdouble *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		disp__glNormalPointerEXT (
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
		jboolean *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		disp__glNormalPointerEXT (
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
		jlong *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		disp__glNormalPointerEXT (
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
		jbyte *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		disp__glColorPointerEXT (
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
		jshort *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		disp__glColorPointerEXT (
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
		jint *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		disp__glColorPointerEXT (
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
		jfloat *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		disp__glColorPointerEXT (
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
		jdouble *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		disp__glColorPointerEXT (
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
		jboolean *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		disp__glColorPointerEXT (
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
		jlong *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		disp__glColorPointerEXT (
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
		jbyte *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		disp__glIndexPointerEXT (
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
		jshort *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		disp__glIndexPointerEXT (
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
		jint *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		disp__glIndexPointerEXT (
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
		jfloat *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		disp__glIndexPointerEXT (
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
		jdouble *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		disp__glIndexPointerEXT (
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
		jboolean *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		disp__glIndexPointerEXT (
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
		jlong *ptr3 = NULL;

		if(ptr!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		disp__glIndexPointerEXT (
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
		jbyte *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetByteArrayElements(env, ptr, 0);
		}
		disp__glTexCoordPointerEXT (
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
		jshort *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetShortArrayElements(env, ptr, 0);
		}
		disp__glTexCoordPointerEXT (
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
		jint *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetIntArrayElements(env, ptr, 0);
		}
		disp__glTexCoordPointerEXT (
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
		jfloat *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetFloatArrayElements(env, ptr, 0);
		}
		disp__glTexCoordPointerEXT (
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
		jdouble *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetDoubleArrayElements(env, ptr, 0);
		}
		disp__glTexCoordPointerEXT (
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
		jboolean *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		disp__glTexCoordPointerEXT (
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
		jlong *ptr4 = NULL;

		if(ptr!=NULL)
		{
			ptr4 = (*env)->GetLongArrayElements(env, ptr, 0);
		}
		disp__glTexCoordPointerEXT (
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
		jboolean *ptr2 = NULL;

		if(ptr!=NULL)
		{
			ptr2 = (*env)->GetBooleanArrayElements(env, ptr, 0);
		}
		disp__glEdgeFlagPointerEXT (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jbyte *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetByteArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetPointervEXT (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jshort *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetPointervEXT (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetPointervEXT (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetPointervEXT (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetPointervEXT (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jboolean *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetBooleanArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetPointervEXT (
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
		jboolean isCopiedArray1 = JNI_FALSE;
		jlong *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetLongArrayElements(env, params, &isCopiedArray1);
		}
		disp__glGetPointervEXT (
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

		disp__glArrayElementEXT (
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

		disp__glDrawArraysEXT (
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

		disp__glBlendEquationEXT (
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

		disp__glPointParameterfEXT (
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
		jfloat *ptr1 = NULL;

		if(params!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, params, 0);
		}
		disp__glPointParameterfvEXT (
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
		jbyte *ptr5 = NULL;

		if(table!=NULL)
		{
			ptr5 = (*env)->GetByteArrayElements(env, table, 0);
		}
		disp__glColorTableEXT (
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
		jshort *ptr5 = NULL;

		if(table!=NULL)
		{
			ptr5 = (*env)->GetShortArrayElements(env, table, 0);
		}
		disp__glColorTableEXT (
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
		jint *ptr5 = NULL;

		if(table!=NULL)
		{
			ptr5 = (*env)->GetIntArrayElements(env, table, 0);
		}
		disp__glColorTableEXT (
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
		jfloat *ptr5 = NULL;

		if(table!=NULL)
		{
			ptr5 = (*env)->GetFloatArrayElements(env, table, 0);
		}
		disp__glColorTableEXT (
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
		jdouble *ptr5 = NULL;

		if(table!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, table, 0);
		}
		disp__glColorTableEXT (
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
		jboolean *ptr5 = NULL;

		if(table!=NULL)
		{
			ptr5 = (*env)->GetBooleanArrayElements(env, table, 0);
		}
		disp__glColorTableEXT (
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
		jlong *ptr5 = NULL;

		if(table!=NULL)
		{
			ptr5 = (*env)->GetLongArrayElements(env, table, 0);
		}
		disp__glColorTableEXT (
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
		jbyte *ptr5 = NULL;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetByteArrayElements(env, data, 0);
		}
		disp__glColorSubTableEXT (
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
		jshort *ptr5 = NULL;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetShortArrayElements(env, data, 0);
		}
		disp__glColorSubTableEXT (
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
		jint *ptr5 = NULL;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetIntArrayElements(env, data, 0);
		}
		disp__glColorSubTableEXT (
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
		jfloat *ptr5 = NULL;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetFloatArrayElements(env, data, 0);
		}
		disp__glColorSubTableEXT (
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
		jdouble *ptr5 = NULL;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetDoubleArrayElements(env, data, 0);
		}
		disp__glColorSubTableEXT (
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
		jboolean *ptr5 = NULL;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetBooleanArrayElements(env, data, 0);
		}
		disp__glColorSubTableEXT (
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
		jlong *ptr5 = NULL;

		if(data!=NULL)
		{
			ptr5 = (*env)->GetLongArrayElements(env, data, 0);
		}
		disp__glColorSubTableEXT (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jbyte *ptr3 = NULL;

		if(table!=NULL)
		{
			ptr3 = (*env)->GetByteArrayElements(env, table, &isCopiedArray3);
		}
		disp__glGetColorTableEXT (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jshort *ptr3 = NULL;

		if(table!=NULL)
		{
			ptr3 = (*env)->GetShortArrayElements(env, table, &isCopiedArray3);
		}
		disp__glGetColorTableEXT (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;

		if(table!=NULL)
		{
			ptr3 = (*env)->GetIntArrayElements(env, table, &isCopiedArray3);
		}
		disp__glGetColorTableEXT (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;

		if(table!=NULL)
		{
			ptr3 = (*env)->GetFloatArrayElements(env, table, &isCopiedArray3);
		}
		disp__glGetColorTableEXT (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jdouble *ptr3 = NULL;

		if(table!=NULL)
		{
			ptr3 = (*env)->GetDoubleArrayElements(env, table, &isCopiedArray3);
		}
		disp__glGetColorTableEXT (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jboolean *ptr3 = NULL;

		if(table!=NULL)
		{
			ptr3 = (*env)->GetBooleanArrayElements(env, table, &isCopiedArray3);
		}
		disp__glGetColorTableEXT (
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
		jboolean isCopiedArray3 = JNI_FALSE;
		jlong *ptr3 = NULL;

		if(table!=NULL)
		{
			ptr3 = (*env)->GetLongArrayElements(env, table, &isCopiedArray3);
		}
		disp__glGetColorTableEXT (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetFloatArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetColorTableParameterfvEXT (
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
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if(params!=NULL)
		{
			ptr2 = (*env)->GetIntArrayElements(env, params, &isCopiedArray2);
		}
		disp__glGetColorTableParameterivEXT (
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

		disp__glLockArraysEXT (
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

		disp__glUnlockArraysEXT (
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

		disp__glActiveTextureARB (
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

		disp__glClientActiveTextureARB (
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

		disp__glMultiTexCoord1dARB (
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
		jdouble *ptr1 = NULL;

		if(v!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glMultiTexCoord1dvARB (
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

		disp__glMultiTexCoord1fARB (
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
		jfloat *ptr1 = NULL;

		if(v!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glMultiTexCoord1fvARB (
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

		disp__glMultiTexCoord1iARB (
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
		jint *ptr1 = NULL;

		if(v!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glMultiTexCoord1ivARB (
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

		disp__glMultiTexCoord1sARB (
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
		jshort *ptr1 = NULL;

		if(v!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glMultiTexCoord1svARB (
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

		disp__glMultiTexCoord2dARB (
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
		jdouble *ptr1 = NULL;

		if(v!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glMultiTexCoord2dvARB (
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

		disp__glMultiTexCoord2fARB (
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
		jfloat *ptr1 = NULL;

		if(v!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glMultiTexCoord2fvARB (
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

		disp__glMultiTexCoord2iARB (
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
		jint *ptr1 = NULL;

		if(v!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glMultiTexCoord2ivARB (
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

		disp__glMultiTexCoord2sARB (
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
		jshort *ptr1 = NULL;

		if(v!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glMultiTexCoord2svARB (
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

		disp__glMultiTexCoord3dARB (
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
		jdouble *ptr1 = NULL;

		if(v!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glMultiTexCoord3dvARB (
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

		disp__glMultiTexCoord3fARB (
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
		jfloat *ptr1 = NULL;

		if(v!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glMultiTexCoord3fvARB (
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

		disp__glMultiTexCoord3iARB (
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
		jint *ptr1 = NULL;

		if(v!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glMultiTexCoord3ivARB (
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

		disp__glMultiTexCoord3sARB (
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
		jshort *ptr1 = NULL;

		if(v!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glMultiTexCoord3svARB (
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

		disp__glMultiTexCoord4dARB (
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
		jdouble *ptr1 = NULL;

		if(v!=NULL)
		{
			ptr1 = (*env)->GetDoubleArrayElements(env, v, 0);
		}
		disp__glMultiTexCoord4dvARB (
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

		disp__glMultiTexCoord4fARB (
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
		jfloat *ptr1 = NULL;

		if(v!=NULL)
		{
			ptr1 = (*env)->GetFloatArrayElements(env, v, 0);
		}
		disp__glMultiTexCoord4fvARB (
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

		disp__glMultiTexCoord4iARB (
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
		jint *ptr1 = NULL;

		if(v!=NULL)
		{
			ptr1 = (*env)->GetIntArrayElements(env, v, 0);
		}
		disp__glMultiTexCoord4ivARB (
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

		disp__glMultiTexCoord4sARB (
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
		jshort *ptr1 = NULL;

		if(v!=NULL)
		{
			ptr1 = (*env)->GetShortArrayElements(env, v, 0);
		}
		disp__glMultiTexCoord4svARB (
			(GLenum) target,
			(const GLshort *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleaseShortArrayElements(env,  v, ptr1, JNI_ABORT);
		}
	}

/* C2J Parser Version 2.0:  Java program parsed successfully. */ 
