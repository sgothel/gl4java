/**
 * C2J Parser Version 3.0
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

		if ( disp__glClearIndex == NULL ) return;

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

		if ( disp__glClearColor == NULL ) return;

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

		if ( disp__glClear == NULL ) return;

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

		if ( disp__glIndexMask == NULL ) return;

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

		if ( disp__glColorMask == NULL ) return;

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

		if ( disp__glAlphaFunc == NULL ) return;

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

		if ( disp__glBlendFunc == NULL ) return;

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

		if ( disp__glLogicOp == NULL ) return;

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

		if ( disp__glCullFace == NULL ) return;

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

		if ( disp__glFrontFace == NULL ) return;

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

		if ( disp__glPointSize == NULL ) return;

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

		if ( disp__glLineWidth == NULL ) return;

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

		if ( disp__glLineStipple == NULL ) return;

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

		if ( disp__glPolygonMode == NULL ) return;

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

		if ( disp__glPolygonOffset == NULL ) return;

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

		if ( disp__glPolygonStipple == NULL ) return;

		if(mask!=NULL)
		{
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, mask, 0);
		}
		disp__glPolygonStipple (
			(const GLubyte *) ptr0
		);

		if(mask!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  mask, ptr0, JNI_ABORT);
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

		if ( disp__glGetPolygonStipple == NULL ) return;

		if(mask!=NULL)
		{
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, mask, &isCopiedArray0);
		}
		disp__glGetPolygonStipple (
			(GLubyte *) ptr0
		);

		if(mask!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  mask, ptr0, (isCopiedArray0 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glEdgeFlag == NULL ) return;

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

		if ( disp__glEdgeFlagv == NULL ) return;

		if(flag!=NULL)
		{
			ptr0 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, flag, 0);
		}
		disp__glEdgeFlagv (
			(const GLboolean *) ptr0
		);

		if(flag!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  flag, ptr0, JNI_ABORT);
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

		if ( disp__glScissor == NULL ) return;

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

		if ( disp__glClipPlane == NULL ) return;

		if(equation!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, equation, 0);
		}
		disp__glClipPlane (
			(GLenum) plane,
			(const GLdouble *) ptr1
		);

		if(equation!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  equation, ptr1, JNI_ABORT);
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

		if ( disp__glGetClipPlane == NULL ) return;

		if(equation!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, equation, &isCopiedArray1);
		}
		disp__glGetClipPlane (
			(GLenum) plane,
			(GLdouble *) ptr1
		);

		if(equation!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  equation, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glDrawBuffer == NULL ) return;

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

		if ( disp__glReadBuffer == NULL ) return;

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

		if ( disp__glEnable == NULL ) return;

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

		if ( disp__glDisable == NULL ) return;

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


		if ( disp__glIsEnabled == NULL ) return 0;

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

		if ( disp__glEnableClientState == NULL ) return;

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

		if ( disp__glDisableClientState == NULL ) return;

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

		if ( disp__glGetBooleanv == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetBooleanv (
			(GLenum) pname,
			(GLboolean *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetDoublev == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetDoublev (
			(GLenum) pname,
			(GLdouble *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetFloatv == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetFloatv (
			(GLenum) pname,
			(GLfloat *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetIntegerv == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetIntegerv (
			(GLenum) pname,
			(GLint *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glPushAttrib == NULL ) return;

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

		if ( disp__glPopAttrib == NULL ) return;

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

		if ( disp__glPushClientAttrib == NULL ) return;

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

		if ( disp__glPopClientAttrib == NULL ) return;

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


		if ( disp__glRenderMode == NULL ) return 0;

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


		if ( disp__glGetError == NULL ) return 0;

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

		if ( disp__glFinish == NULL ) return;

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

		if ( disp__glFlush == NULL ) return;

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

		if ( disp__glHint == NULL ) return;

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

		if ( disp__glClearDepth == NULL ) return;

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

		if ( disp__glDepthFunc == NULL ) return;

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

		if ( disp__glDepthMask == NULL ) return;

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

		if ( disp__glDepthRange == NULL ) return;

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

		if ( disp__glClearAccum == NULL ) return;

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

		if ( disp__glAccum == NULL ) return;

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

		if ( disp__glMatrixMode == NULL ) return;

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

		if ( disp__glOrtho == NULL ) return;

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

		if ( disp__glFrustum == NULL ) return;

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

		if ( disp__glViewport == NULL ) return;

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

		if ( disp__glPushMatrix == NULL ) return;

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

		if ( disp__glPopMatrix == NULL ) return;

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

		if ( disp__glLoadIdentity == NULL ) return;

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

		if ( disp__glLoadMatrixd == NULL ) return;

		if(m!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, m, 0);
		}
		disp__glLoadMatrixd (
			(const GLdouble *) ptr0
		);

		if(m!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  m, ptr0, JNI_ABORT);
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

		if ( disp__glLoadMatrixf == NULL ) return;

		if(m!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, m, 0);
		}
		disp__glLoadMatrixf (
			(const GLfloat *) ptr0
		);

		if(m!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  m, ptr0, JNI_ABORT);
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

		if ( disp__glMultMatrixd == NULL ) return;

		if(m!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, m, 0);
		}
		disp__glMultMatrixd (
			(const GLdouble *) ptr0
		);

		if(m!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  m, ptr0, JNI_ABORT);
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

		if ( disp__glMultMatrixf == NULL ) return;

		if(m!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, m, 0);
		}
		disp__glMultMatrixf (
			(const GLfloat *) ptr0
		);

		if(m!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  m, ptr0, JNI_ABORT);
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

		if ( disp__glRotated == NULL ) return;

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

		if ( disp__glRotatef == NULL ) return;

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

		if ( disp__glScaled == NULL ) return;

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

		if ( disp__glScalef == NULL ) return;

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

		if ( disp__glTranslated == NULL ) return;

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

		if ( disp__glTranslatef == NULL ) return;

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


		if ( disp__glIsList == NULL ) return 0;

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

		if ( disp__glDeleteLists == NULL ) return;

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


		if ( disp__glGenLists == NULL ) return 0;

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

		if ( disp__glNewList == NULL ) return;

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

		if ( disp__glEndList == NULL ) return;

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

		if ( disp__glCallList == NULL ) return;

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

		if ( disp__glCallLists == NULL ) return;

		if(lists!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, lists, 0);
		}
		disp__glCallLists (
			(GLsizei) n,
			(GLenum) type,
			(const GLvoid *) ptr2
		);

		if(lists!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  lists, ptr2, JNI_ABORT);
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

		if ( disp__glCallLists == NULL ) return;

		if(lists!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, lists, 0);
		}
		disp__glCallLists (
			(GLsizei) n,
			(GLenum) type,
			(const GLvoid *) ptr2
		);

		if(lists!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  lists, ptr2, JNI_ABORT);
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

		if ( disp__glCallLists == NULL ) return;

		if(lists!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, lists, 0);
		}
		disp__glCallLists (
			(GLsizei) n,
			(GLenum) type,
			(const GLvoid *) ptr2
		);

		if(lists!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  lists, ptr2, JNI_ABORT);
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

		if ( disp__glCallLists == NULL ) return;

		if(lists!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, lists, 0);
		}
		disp__glCallLists (
			(GLsizei) n,
			(GLenum) type,
			(const GLvoid *) ptr2
		);

		if(lists!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  lists, ptr2, JNI_ABORT);
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

		if ( disp__glCallLists == NULL ) return;

		if(lists!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, lists, 0);
		}
		disp__glCallLists (
			(GLsizei) n,
			(GLenum) type,
			(const GLvoid *) ptr2
		);

		if(lists!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  lists, ptr2, JNI_ABORT);
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

		if ( disp__glCallLists == NULL ) return;

		if(lists!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, lists, 0);
		}
		disp__glCallLists (
			(GLsizei) n,
			(GLenum) type,
			(const GLvoid *) ptr2
		);

		if(lists!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  lists, ptr2, JNI_ABORT);
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

		if ( disp__glCallLists == NULL ) return;

		if(lists!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, lists, 0);
		}
		disp__glCallLists (
			(GLsizei) n,
			(GLenum) type,
			(const GLvoid *) ptr2
		);

		if(lists!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  lists, ptr2, JNI_ABORT);
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

		if ( disp__glListBase == NULL ) return;

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

		if ( disp__glBegin == NULL ) return;

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

		if ( disp__glEnd == NULL ) return;

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

		if ( disp__glVertex2d == NULL ) return;

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

		if ( disp__glVertex2f == NULL ) return;

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

		if ( disp__glVertex2i == NULL ) return;

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

		if ( disp__glVertex2s == NULL ) return;

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

		if ( disp__glVertex3d == NULL ) return;

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

		if ( disp__glVertex3f == NULL ) return;

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

		if ( disp__glVertex3i == NULL ) return;

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

		if ( disp__glVertex3s == NULL ) return;

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

		if ( disp__glVertex4d == NULL ) return;

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

		if ( disp__glVertex4f == NULL ) return;

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

		if ( disp__glVertex4i == NULL ) return;

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

		if ( disp__glVertex4s == NULL ) return;

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

		if ( disp__glVertex2dv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glVertex2dv (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glVertex2fv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glVertex2fv (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glVertex2iv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glVertex2iv (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glVertex2sv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glVertex2sv (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glVertex3dv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glVertex3dv (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glVertex3fv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glVertex3fv (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glVertex3iv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glVertex3iv (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glVertex3sv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glVertex3sv (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glVertex4dv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glVertex4dv (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glVertex4fv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glVertex4fv (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glVertex4iv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glVertex4iv (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glVertex4sv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glVertex4sv (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glNormal3b == NULL ) return;

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

		if ( disp__glNormal3d == NULL ) return;

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

		if ( disp__glNormal3f == NULL ) return;

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

		if ( disp__glNormal3i == NULL ) return;

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

		if ( disp__glNormal3s == NULL ) return;

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

		if ( disp__glNormal3bv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glNormal3bv (
			(const GLbyte *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glNormal3dv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glNormal3dv (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glNormal3fv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glNormal3fv (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glNormal3iv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glNormal3iv (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glNormal3sv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glNormal3sv (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glIndexd == NULL ) return;

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

		if ( disp__glIndexf == NULL ) return;

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

		if ( disp__glIndexi == NULL ) return;

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

		if ( disp__glIndexs == NULL ) return;

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

		if ( disp__glIndexub == NULL ) return;

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

		if ( disp__glIndexdv == NULL ) return;

		if(c!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, c, 0);
		}
		disp__glIndexdv (
			(const GLdouble *) ptr0
		);

		if(c!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  c, ptr0, JNI_ABORT);
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

		if ( disp__glIndexfv == NULL ) return;

		if(c!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, c, 0);
		}
		disp__glIndexfv (
			(const GLfloat *) ptr0
		);

		if(c!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  c, ptr0, JNI_ABORT);
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

		if ( disp__glIndexiv == NULL ) return;

		if(c!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, c, 0);
		}
		disp__glIndexiv (
			(const GLint *) ptr0
		);

		if(c!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  c, ptr0, JNI_ABORT);
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

		if ( disp__glIndexsv == NULL ) return;

		if(c!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, c, 0);
		}
		disp__glIndexsv (
			(const GLshort *) ptr0
		);

		if(c!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  c, ptr0, JNI_ABORT);
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

		if ( disp__glIndexubv == NULL ) return;

		if(c!=NULL)
		{
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, c, 0);
		}
		disp__glIndexubv (
			(const GLubyte *) ptr0
		);

		if(c!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  c, ptr0, JNI_ABORT);
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

		if ( disp__glColor3b == NULL ) return;

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

		if ( disp__glColor3d == NULL ) return;

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

		if ( disp__glColor3f == NULL ) return;

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

		if ( disp__glColor3i == NULL ) return;

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

		if ( disp__glColor3s == NULL ) return;

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

		if ( disp__glColor3ub == NULL ) return;

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

		if ( disp__glColor3ui == NULL ) return;

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

		if ( disp__glColor3us == NULL ) return;

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

		if ( disp__glColor4b == NULL ) return;

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

		if ( disp__glColor4d == NULL ) return;

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

		if ( disp__glColor4f == NULL ) return;

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

		if ( disp__glColor4i == NULL ) return;

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

		if ( disp__glColor4s == NULL ) return;

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

		if ( disp__glColor4ub == NULL ) return;

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

		if ( disp__glColor4ui == NULL ) return;

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

		if ( disp__glColor4us == NULL ) return;

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

		if ( disp__glColor3bv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glColor3bv (
			(const GLbyte *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glColor3dv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glColor3dv (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glColor3fv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glColor3fv (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glColor3iv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glColor3iv (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glColor3sv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glColor3sv (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glColor3ubv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glColor3ubv (
			(const GLubyte *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glColor3uiv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glColor3uiv (
			(const GLuint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glColor3usv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glColor3usv (
			(const GLushort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glColor4bv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glColor4bv (
			(const GLbyte *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glColor4dv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glColor4dv (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glColor4fv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glColor4fv (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glColor4iv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glColor4iv (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glColor4sv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glColor4sv (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glColor4ubv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glColor4ubv (
			(const GLubyte *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glColor4uiv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glColor4uiv (
			(const GLuint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glColor4usv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glColor4usv (
			(const GLushort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glTexCoord1d == NULL ) return;

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

		if ( disp__glTexCoord1f == NULL ) return;

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

		if ( disp__glTexCoord1i == NULL ) return;

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

		if ( disp__glTexCoord1s == NULL ) return;

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

		if ( disp__glTexCoord2d == NULL ) return;

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

		if ( disp__glTexCoord2f == NULL ) return;

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

		if ( disp__glTexCoord2i == NULL ) return;

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

		if ( disp__glTexCoord2s == NULL ) return;

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

		if ( disp__glTexCoord3d == NULL ) return;

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

		if ( disp__glTexCoord3f == NULL ) return;

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

		if ( disp__glTexCoord3i == NULL ) return;

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

		if ( disp__glTexCoord3s == NULL ) return;

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

		if ( disp__glTexCoord4d == NULL ) return;

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

		if ( disp__glTexCoord4f == NULL ) return;

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

		if ( disp__glTexCoord4i == NULL ) return;

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

		if ( disp__glTexCoord4s == NULL ) return;

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

		if ( disp__glTexCoord1dv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glTexCoord1dv (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glTexCoord1fv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glTexCoord1fv (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glTexCoord1iv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glTexCoord1iv (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glTexCoord1sv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glTexCoord1sv (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glTexCoord2dv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glTexCoord2dv (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glTexCoord2fv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glTexCoord2fv (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glTexCoord2iv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glTexCoord2iv (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glTexCoord2sv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glTexCoord2sv (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glTexCoord3dv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glTexCoord3dv (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glTexCoord3fv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glTexCoord3fv (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glTexCoord3iv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glTexCoord3iv (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glTexCoord3sv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glTexCoord3sv (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glTexCoord4dv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glTexCoord4dv (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glTexCoord4fv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glTexCoord4fv (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glTexCoord4iv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glTexCoord4iv (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glTexCoord4sv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glTexCoord4sv (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glRasterPos2d == NULL ) return;

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

		if ( disp__glRasterPos2f == NULL ) return;

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

		if ( disp__glRasterPos2i == NULL ) return;

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

		if ( disp__glRasterPos2s == NULL ) return;

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

		if ( disp__glRasterPos3d == NULL ) return;

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

		if ( disp__glRasterPos3f == NULL ) return;

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

		if ( disp__glRasterPos3i == NULL ) return;

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

		if ( disp__glRasterPos3s == NULL ) return;

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

		if ( disp__glRasterPos4d == NULL ) return;

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

		if ( disp__glRasterPos4f == NULL ) return;

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

		if ( disp__glRasterPos4i == NULL ) return;

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

		if ( disp__glRasterPos4s == NULL ) return;

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

		if ( disp__glRasterPos2dv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glRasterPos2dv (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glRasterPos2fv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glRasterPos2fv (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glRasterPos2iv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glRasterPos2iv (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glRasterPos2sv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glRasterPos2sv (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glRasterPos3dv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glRasterPos3dv (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glRasterPos3fv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glRasterPos3fv (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glRasterPos3iv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glRasterPos3iv (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glRasterPos3sv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glRasterPos3sv (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glRasterPos4dv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glRasterPos4dv (
			(const GLdouble *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glRasterPos4fv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glRasterPos4fv (
			(const GLfloat *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glRasterPos4iv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glRasterPos4iv (
			(const GLint *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glRasterPos4sv == NULL ) return;

		if(v!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glRasterPos4sv (
			(const GLshort *) ptr0
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr0, JNI_ABORT);
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

		if ( disp__glRectd == NULL ) return;

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

		if ( disp__glRectf == NULL ) return;

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

		if ( disp__glRecti == NULL ) return;

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

		if ( disp__glRects == NULL ) return;

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

		if ( disp__glRectdv == NULL ) return;

		if(v1!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v1, 0);
		}
		if(v2!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v2, 0);
		}
		disp__glRectdv (
			(const GLdouble *) ptr0,
			(const GLdouble *) ptr1
		);

		if(v1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v1, ptr0, JNI_ABORT);
		}
		if(v2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v2, ptr1, JNI_ABORT);
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

		if ( disp__glRectfv == NULL ) return;

		if(v1!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v1, 0);
		}
		if(v2!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v2, 0);
		}
		disp__glRectfv (
			(const GLfloat *) ptr0,
			(const GLfloat *) ptr1
		);

		if(v1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v1, ptr0, JNI_ABORT);
		}
		if(v2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v2, ptr1, JNI_ABORT);
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

		if ( disp__glRectiv == NULL ) return;

		if(v1!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v1, 0);
		}
		if(v2!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v2, 0);
		}
		disp__glRectiv (
			(const GLint *) ptr0,
			(const GLint *) ptr1
		);

		if(v1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v1, ptr0, JNI_ABORT);
		}
		if(v2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v2, ptr1, JNI_ABORT);
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

		if ( disp__glRectsv == NULL ) return;

		if(v1!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v1, 0);
		}
		if(v2!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v2, 0);
		}
		disp__glRectsv (
			(const GLshort *) ptr0,
			(const GLshort *) ptr1
		);

		if(v1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v1, ptr0, JNI_ABORT);
		}
		if(v2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v2, ptr1, JNI_ABORT);
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

		if ( disp__glVertexPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glVertexPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glVertexPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glVertexPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glVertexPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glVertexPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glVertexPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glVertexPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glVertexPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glVertexPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glVertexPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glVertexPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glVertexPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glVertexPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glNormalPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glNormalPointer (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr2, JNI_ABORT);
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

		if ( disp__glNormalPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glNormalPointer (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr2, JNI_ABORT);
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

		if ( disp__glNormalPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glNormalPointer (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr2, JNI_ABORT);
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

		if ( disp__glNormalPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glNormalPointer (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr2, JNI_ABORT);
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

		if ( disp__glNormalPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glNormalPointer (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr2, JNI_ABORT);
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

		if ( disp__glNormalPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glNormalPointer (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr2, JNI_ABORT);
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

		if ( disp__glNormalPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glNormalPointer (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr2, JNI_ABORT);
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

		if ( disp__glColorPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glColorPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glColorPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glColorPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glColorPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glColorPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glColorPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glColorPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glColorPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glColorPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glColorPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glColorPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glColorPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glColorPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glIndexPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glIndexPointer (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr2, JNI_ABORT);
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

		if ( disp__glIndexPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glIndexPointer (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr2, JNI_ABORT);
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

		if ( disp__glIndexPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glIndexPointer (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr2, JNI_ABORT);
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

		if ( disp__glIndexPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glIndexPointer (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr2, JNI_ABORT);
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

		if ( disp__glIndexPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glIndexPointer (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr2, JNI_ABORT);
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

		if ( disp__glIndexPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glIndexPointer (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr2, JNI_ABORT);
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

		if ( disp__glIndexPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glIndexPointer (
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr2, JNI_ABORT);
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

		if ( disp__glTexCoordPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glTexCoordPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glTexCoordPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glTexCoordPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glTexCoordPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glTexCoordPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glTexCoordPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glTexCoordPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glTexCoordPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glTexCoordPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glTexCoordPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glTexCoordPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glTexCoordPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glTexCoordPointer (
			(GLint) size,
			(GLenum) type,
			(GLsizei) stride,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glEdgeFlagPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glEdgeFlagPointer (
			(GLsizei) stride,
			(const GLvoid *) ptr1
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlagPointer__I_3S (
		JNIEnv *env, jobject obj,
		jint stride,
		jshortArray ptr)
	{
		jshort *ptr1 = NULL;

		if ( disp__glEdgeFlagPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glEdgeFlagPointer (
			(GLsizei) stride,
			(const GLvoid *) ptr1
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlagPointer__I_3I (
		JNIEnv *env, jobject obj,
		jint stride,
		jintArray ptr)
	{
		jint *ptr1 = NULL;

		if ( disp__glEdgeFlagPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glEdgeFlagPointer (
			(GLsizei) stride,
			(const GLvoid *) ptr1
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlagPointer__I_3F (
		JNIEnv *env, jobject obj,
		jint stride,
		jfloatArray ptr)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glEdgeFlagPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glEdgeFlagPointer (
			(GLsizei) stride,
			(const GLvoid *) ptr1
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlagPointer__I_3D (
		JNIEnv *env, jobject obj,
		jint stride,
		jdoubleArray ptr)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glEdgeFlagPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glEdgeFlagPointer (
			(GLsizei) stride,
			(const GLvoid *) ptr1
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlagPointer__I_3Z (
		JNIEnv *env, jobject obj,
		jint stride,
		jbooleanArray ptr)
	{
		jboolean *ptr1 = NULL;

		if ( disp__glEdgeFlagPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr1 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glEdgeFlagPointer (
			(GLsizei) stride,
			(const GLvoid *) ptr1
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlagPointer__I_3J (
		JNIEnv *env, jobject obj,
		jint stride,
		jlongArray ptr)
	{
		jlong *ptr1 = NULL;

		if ( disp__glEdgeFlagPointer == NULL ) return;

		if(ptr!=NULL)
		{
			ptr1 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glEdgeFlagPointer (
			(GLsizei) stride,
			(const GLvoid *) ptr1
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPointerv ( GLenum pname , GLvoid * * params ) ;
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

		if ( disp__glGetPointerv == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetPointerv (
			(GLenum) pname,
			(GLvoid **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetPointerv == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetPointerv (
			(GLenum) pname,
			(GLvoid **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetPointerv == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetPointerv (
			(GLenum) pname,
			(GLvoid **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetPointerv == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetPointerv (
			(GLenum) pname,
			(GLvoid **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetPointerv == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetPointerv (
			(GLenum) pname,
			(GLvoid **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetPointerv == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetPointerv (
			(GLenum) pname,
			(GLvoid **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetPointerv == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetPointerv (
			(GLenum) pname,
			(GLvoid **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glArrayElement == NULL ) return;

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

		if ( disp__glDrawArrays == NULL ) return;

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

		if ( disp__glDrawElements == NULL ) return;

		if(indices!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, indices, 0);
		}
		disp__glDrawElements (
			(GLenum) mode,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr3
		);

		if(indices!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  indices, ptr3, JNI_ABORT);
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

		if ( disp__glDrawElements == NULL ) return;

		if(indices!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, indices, 0);
		}
		disp__glDrawElements (
			(GLenum) mode,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr3
		);

		if(indices!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  indices, ptr3, JNI_ABORT);
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

		if ( disp__glDrawElements == NULL ) return;

		if(indices!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, indices, 0);
		}
		disp__glDrawElements (
			(GLenum) mode,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr3
		);

		if(indices!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  indices, ptr3, JNI_ABORT);
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

		if ( disp__glDrawElements == NULL ) return;

		if(indices!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, indices, 0);
		}
		disp__glDrawElements (
			(GLenum) mode,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr3
		);

		if(indices!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  indices, ptr3, JNI_ABORT);
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

		if ( disp__glDrawElements == NULL ) return;

		if(indices!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, indices, 0);
		}
		disp__glDrawElements (
			(GLenum) mode,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr3
		);

		if(indices!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  indices, ptr3, JNI_ABORT);
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

		if ( disp__glDrawElements == NULL ) return;

		if(indices!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, indices, 0);
		}
		disp__glDrawElements (
			(GLenum) mode,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr3
		);

		if(indices!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  indices, ptr3, JNI_ABORT);
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

		if ( disp__glDrawElements == NULL ) return;

		if(indices!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, indices, 0);
		}
		disp__glDrawElements (
			(GLenum) mode,
			(GLsizei) count,
			(GLenum) type,
			(const GLvoid *) ptr3
		);

		if(indices!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  indices, ptr3, JNI_ABORT);
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

		if ( disp__glInterleavedArrays == NULL ) return;

		if(pointer!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, pointer, 0);
		}
		disp__glInterleavedArrays (
			(GLenum) format,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(pointer!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  pointer, ptr2, JNI_ABORT);
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

		if ( disp__glInterleavedArrays == NULL ) return;

		if(pointer!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, pointer, 0);
		}
		disp__glInterleavedArrays (
			(GLenum) format,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(pointer!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  pointer, ptr2, JNI_ABORT);
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

		if ( disp__glInterleavedArrays == NULL ) return;

		if(pointer!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, pointer, 0);
		}
		disp__glInterleavedArrays (
			(GLenum) format,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(pointer!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  pointer, ptr2, JNI_ABORT);
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

		if ( disp__glInterleavedArrays == NULL ) return;

		if(pointer!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, pointer, 0);
		}
		disp__glInterleavedArrays (
			(GLenum) format,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(pointer!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  pointer, ptr2, JNI_ABORT);
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

		if ( disp__glInterleavedArrays == NULL ) return;

		if(pointer!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, pointer, 0);
		}
		disp__glInterleavedArrays (
			(GLenum) format,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(pointer!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  pointer, ptr2, JNI_ABORT);
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

		if ( disp__glInterleavedArrays == NULL ) return;

		if(pointer!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, pointer, 0);
		}
		disp__glInterleavedArrays (
			(GLenum) format,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(pointer!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  pointer, ptr2, JNI_ABORT);
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

		if ( disp__glInterleavedArrays == NULL ) return;

		if(pointer!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, pointer, 0);
		}
		disp__glInterleavedArrays (
			(GLenum) format,
			(GLsizei) stride,
			(const GLvoid *) ptr2
		);

		if(pointer!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  pointer, ptr2, JNI_ABORT);
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

		if ( disp__glShadeModel == NULL ) return;

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

		if ( disp__glLightf == NULL ) return;

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

		if ( disp__glLighti == NULL ) return;

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

		if ( disp__glLightfv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glLightfv (
			(GLenum) light,
			(GLenum) pname,
			(const GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, JNI_ABORT);
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

		if ( disp__glLightiv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glLightiv (
			(GLenum) light,
			(GLenum) pname,
			(const GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, JNI_ABORT);
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

		if ( disp__glGetLightfv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetLightfv (
			(GLenum) light,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetLightiv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetLightiv (
			(GLenum) light,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glLightModelf == NULL ) return;

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

		if ( disp__glLightModeli == NULL ) return;

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

		if ( disp__glLightModelfv == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glLightModelfv (
			(GLenum) pname,
			(const GLfloat *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, JNI_ABORT);
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

		if ( disp__glLightModeliv == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glLightModeliv (
			(GLenum) pname,
			(const GLint *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, JNI_ABORT);
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

		if ( disp__glMaterialf == NULL ) return;

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

		if ( disp__glMateriali == NULL ) return;

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

		if ( disp__glMaterialfv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glMaterialfv (
			(GLenum) face,
			(GLenum) pname,
			(const GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, JNI_ABORT);
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

		if ( disp__glMaterialiv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glMaterialiv (
			(GLenum) face,
			(GLenum) pname,
			(const GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, JNI_ABORT);
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

		if ( disp__glGetMaterialfv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetMaterialfv (
			(GLenum) face,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetMaterialiv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetMaterialiv (
			(GLenum) face,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glColorMaterial == NULL ) return;

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

		if ( disp__glPixelZoom == NULL ) return;

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

		if ( disp__glPixelStoref == NULL ) return;

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

		if ( disp__glPixelStorei == NULL ) return;

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

		if ( disp__glPixelTransferf == NULL ) return;

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

		if ( disp__glPixelTransferi == NULL ) return;

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

		if ( disp__glPixelMapfv == NULL ) return;

		if(values!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, values, 0);
		}
		disp__glPixelMapfv (
			(GLenum) map,
			(GLint) mapsize,
			(const GLfloat *) ptr2
		);

		if(values!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr2, JNI_ABORT);
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

		if ( disp__glPixelMapuiv == NULL ) return;

		if(values!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, values, 0);
		}
		disp__glPixelMapuiv (
			(GLenum) map,
			(GLint) mapsize,
			(const GLuint *) ptr2
		);

		if(values!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr2, JNI_ABORT);
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

		if ( disp__glPixelMapusv == NULL ) return;

		if(values!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, values, 0);
		}
		disp__glPixelMapusv (
			(GLenum) map,
			(GLint) mapsize,
			(const GLushort *) ptr2
		);

		if(values!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr2, JNI_ABORT);
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

		if ( disp__glGetPixelMapfv == NULL ) return;

		if(values!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray1);
		}
		disp__glGetPixelMapfv (
			(GLenum) map,
			(GLfloat *) ptr1
		);

		if(values!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetPixelMapuiv == NULL ) return;

		if(values!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray1);
		}
		disp__glGetPixelMapuiv (
			(GLenum) map,
			(GLuint *) ptr1
		);

		if(values!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetPixelMapusv == NULL ) return;

		if(values!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray1);
		}
		disp__glGetPixelMapusv (
			(GLenum) map,
			(GLushort *) ptr1
		);

		if(values!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glBitmap == NULL ) return;

		if(bitmap!=NULL)
		{
			ptr6 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, bitmap, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  bitmap, ptr6, JNI_ABORT);
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

		if ( disp__glReadPixels == NULL ) return;

		if(pixels!=NULL)
		{
			ptr6 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, pixels, &isCopiedArray6);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glReadPixels == NULL ) return;

		if(pixels!=NULL)
		{
			ptr6 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, pixels, &isCopiedArray6);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glReadPixels == NULL ) return;

		if(pixels!=NULL)
		{
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, pixels, &isCopiedArray6);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glReadPixels == NULL ) return;

		if(pixels!=NULL)
		{
			ptr6 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, pixels, &isCopiedArray6);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glReadPixels == NULL ) return;

		if(pixels!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, pixels, &isCopiedArray6);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glReadPixels == NULL ) return;

		if(pixels!=NULL)
		{
			ptr6 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, pixels, &isCopiedArray6);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glReadPixels == NULL ) return;

		if(pixels!=NULL)
		{
			ptr6 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, pixels, &isCopiedArray6);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glDrawPixels == NULL ) return;

		if(pixels!=NULL)
		{
			ptr4 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr4, JNI_ABORT);
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

		if ( disp__glDrawPixels == NULL ) return;

		if(pixels!=NULL)
		{
			ptr4 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr4, JNI_ABORT);
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

		if ( disp__glDrawPixels == NULL ) return;

		if(pixels!=NULL)
		{
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr4, JNI_ABORT);
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

		if ( disp__glDrawPixels == NULL ) return;

		if(pixels!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr4, JNI_ABORT);
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

		if ( disp__glDrawPixels == NULL ) return;

		if(pixels!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr4, JNI_ABORT);
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

		if ( disp__glDrawPixels == NULL ) return;

		if(pixels!=NULL)
		{
			ptr4 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr4, JNI_ABORT);
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

		if ( disp__glDrawPixels == NULL ) return;

		if(pixels!=NULL)
		{
			ptr4 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr4, JNI_ABORT);
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

		if ( disp__glCopyPixels == NULL ) return;

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

		if ( disp__glStencilFunc == NULL ) return;

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

		if ( disp__glStencilMask == NULL ) return;

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

		if ( disp__glStencilOp == NULL ) return;

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

		if ( disp__glClearStencil == NULL ) return;

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

		if ( disp__glTexGend == NULL ) return;

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

		if ( disp__glTexGenf == NULL ) return;

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

		if ( disp__glTexGeni == NULL ) return;

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

		if ( disp__glTexGendv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glTexGendv (
			(GLenum) coord,
			(GLenum) pname,
			(const GLdouble *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, JNI_ABORT);
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

		if ( disp__glTexGenfv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glTexGenfv (
			(GLenum) coord,
			(GLenum) pname,
			(const GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, JNI_ABORT);
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

		if ( disp__glTexGeniv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glTexGeniv (
			(GLenum) coord,
			(GLenum) pname,
			(const GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, JNI_ABORT);
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

		if ( disp__glGetTexGendv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetTexGendv (
			(GLenum) coord,
			(GLenum) pname,
			(GLdouble *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetTexGenfv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetTexGenfv (
			(GLenum) coord,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetTexGeniv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetTexGeniv (
			(GLenum) coord,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glTexEnvf == NULL ) return;

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

		if ( disp__glTexEnvi == NULL ) return;

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

		if ( disp__glTexEnvfv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glTexEnvfv (
			(GLenum) target,
			(GLenum) pname,
			(const GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, JNI_ABORT);
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

		if ( disp__glTexEnviv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glTexEnviv (
			(GLenum) target,
			(GLenum) pname,
			(const GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, JNI_ABORT);
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

		if ( disp__glGetTexEnvfv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetTexEnvfv (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetTexEnviv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetTexEnviv (
			(GLenum) target,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glTexParameterf == NULL ) return;

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

		if ( disp__glTexParameteri == NULL ) return;

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

		if ( disp__glTexParameterfv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glTexParameterfv (
			(GLenum) target,
			(GLenum) pname,
			(const GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, JNI_ABORT);
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

		if ( disp__glTexParameteriv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glTexParameteriv (
			(GLenum) target,
			(GLenum) pname,
			(const GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, JNI_ABORT);
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

		if ( disp__glGetTexParameterfv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetTexParameterfv (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetTexParameteriv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetTexParameteriv (
			(GLenum) target,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetTexLevelParameterfv == NULL ) return;

		if(params!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray3);
		}
		disp__glGetTexLevelParameterfv (
			(GLenum) target,
			(GLint) level,
			(GLenum) pname,
			(GLfloat *) ptr3
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetTexLevelParameteriv == NULL ) return;

		if(params!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray3);
		}
		disp__glGetTexLevelParameteriv (
			(GLenum) target,
			(GLint) level,
			(GLenum) pname,
			(GLint *) ptr3
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glTexImage1D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr7 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr7, JNI_ABORT);
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

		if ( disp__glTexImage1D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr7 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr7, JNI_ABORT);
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

		if ( disp__glTexImage1D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr7 = (jint *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr7, JNI_ABORT);
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

		if ( disp__glTexImage1D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr7 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr7, JNI_ABORT);
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

		if ( disp__glTexImage1D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr7 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr7, JNI_ABORT);
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

		if ( disp__glTexImage1D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr7 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr7, JNI_ABORT);
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

		if ( disp__glTexImage1D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr7 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr7, JNI_ABORT);
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

		if ( disp__glTexImage2D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr8 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr8, JNI_ABORT);
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

		if ( disp__glTexImage2D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr8 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr8, JNI_ABORT);
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

		if ( disp__glTexImage2D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr8 = (jint *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr8, JNI_ABORT);
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

		if ( disp__glTexImage2D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr8 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr8, JNI_ABORT);
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

		if ( disp__glTexImage2D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr8, JNI_ABORT);
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

		if ( disp__glTexImage2D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr8 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr8, JNI_ABORT);
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

		if ( disp__glTexImage2D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr8 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr8, JNI_ABORT);
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

		if ( disp__glGetTexImage == NULL ) return;

		if(pixels!=NULL)
		{
			ptr4 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, pixels, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetTexImage == NULL ) return;

		if(pixels!=NULL)
		{
			ptr4 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, pixels, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetTexImage == NULL ) return;

		if(pixels!=NULL)
		{
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, pixels, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetTexImage == NULL ) return;

		if(pixels!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, pixels, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetTexImage == NULL ) return;

		if(pixels!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, pixels, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetTexImage == NULL ) return;

		if(pixels!=NULL)
		{
			ptr4 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, pixels, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetTexImage == NULL ) return;

		if(pixels!=NULL)
		{
			ptr4 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, pixels, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGenTextures == NULL ) return;

		if(textures!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, textures, &isCopiedArray1);
		}
		disp__glGenTextures (
			(GLsizei) n,
			(GLuint *) ptr1
		);

		if(textures!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  textures, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glDeleteTextures == NULL ) return;

		if(textures!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, textures, 0);
		}
		disp__glDeleteTextures (
			(GLsizei) n,
			(const GLuint *) ptr1
		);

		if(textures!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  textures, ptr1, JNI_ABORT);
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

		if ( disp__glBindTexture == NULL ) return;

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

		if ( disp__glPrioritizeTextures == NULL ) return;

		if(textures!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, textures, 0);
		}
		if(priorities!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, priorities, 0);
		}
		disp__glPrioritizeTextures (
			(GLsizei) n,
			(const GLuint *) ptr1,
			(const GLclampf *) ptr2
		);

		if(textures!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  textures, ptr1, JNI_ABORT);
		}
		if(priorities!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  priorities, ptr2, JNI_ABORT);
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

		if ( disp__glAreTexturesResident == NULL ) return 0;

		if(textures!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, textures, 0);
		}
		if(residences!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, residences, &isCopiedArray2);
		}
		ret = (jboolean) disp__glAreTexturesResident (
			(GLsizei) n,
			(const GLuint *) ptr1,
			(GLboolean *) ptr2
		);

		if(textures!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  textures, ptr1, JNI_ABORT);
		}
		if(residences!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  residences, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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


		if ( disp__glIsTexture == NULL ) return 0;

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

		if ( disp__glTexSubImage1D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr6 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr6, JNI_ABORT);
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

		if ( disp__glTexSubImage1D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr6 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr6, JNI_ABORT);
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

		if ( disp__glTexSubImage1D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr6, JNI_ABORT);
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

		if ( disp__glTexSubImage1D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr6 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr6, JNI_ABORT);
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

		if ( disp__glTexSubImage1D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr6, JNI_ABORT);
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

		if ( disp__glTexSubImage1D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr6 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr6, JNI_ABORT);
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

		if ( disp__glTexSubImage1D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr6 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr6, JNI_ABORT);
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

		if ( disp__glTexSubImage2D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr8 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr8, JNI_ABORT);
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

		if ( disp__glTexSubImage2D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr8 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr8, JNI_ABORT);
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

		if ( disp__glTexSubImage2D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr8 = (jint *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr8, JNI_ABORT);
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

		if ( disp__glTexSubImage2D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr8 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr8, JNI_ABORT);
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

		if ( disp__glTexSubImage2D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr8, JNI_ABORT);
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

		if ( disp__glTexSubImage2D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr8 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr8, JNI_ABORT);
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

		if ( disp__glTexSubImage2D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr8 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr8, JNI_ABORT);
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

		if ( disp__glCopyTexImage1D == NULL ) return;

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

		if ( disp__glCopyTexImage2D == NULL ) return;

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

		if ( disp__glCopyTexSubImage1D == NULL ) return;

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

		if ( disp__glCopyTexSubImage2D == NULL ) return;

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

		if ( disp__glMap1d == NULL ) return;

		if(points!=NULL)
		{
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, points, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  points, ptr5, JNI_ABORT);
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

		if ( disp__glMap1f == NULL ) return;

		if(points!=NULL)
		{
			ptr5 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, points, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  points, ptr5, JNI_ABORT);
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

		if ( disp__glMap2d == NULL ) return;

		if(points!=NULL)
		{
			ptr9 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, points, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  points, ptr9, JNI_ABORT);
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

		if ( disp__glMap2f == NULL ) return;

		if(points!=NULL)
		{
			ptr9 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, points, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  points, ptr9, JNI_ABORT);
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

		if ( disp__glGetMapdv == NULL ) return;

		if(v!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, &isCopiedArray2);
		}
		disp__glGetMapdv (
			(GLenum) target,
			(GLenum) query,
			(GLdouble *) ptr2
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetMapfv == NULL ) return;

		if(v!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, &isCopiedArray2);
		}
		disp__glGetMapfv (
			(GLenum) target,
			(GLenum) query,
			(GLfloat *) ptr2
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetMapiv == NULL ) return;

		if(v!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, &isCopiedArray2);
		}
		disp__glGetMapiv (
			(GLenum) target,
			(GLenum) query,
			(GLint *) ptr2
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glEvalCoord1d == NULL ) return;

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

		if ( disp__glEvalCoord1f == NULL ) return;

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

		if ( disp__glEvalCoord1dv == NULL ) return;

		if(u!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, u, 0);
		}
		disp__glEvalCoord1dv (
			(const GLdouble *) ptr0
		);

		if(u!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  u, ptr0, JNI_ABORT);
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

		if ( disp__glEvalCoord1fv == NULL ) return;

		if(u!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, u, 0);
		}
		disp__glEvalCoord1fv (
			(const GLfloat *) ptr0
		);

		if(u!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  u, ptr0, JNI_ABORT);
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

		if ( disp__glEvalCoord2d == NULL ) return;

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

		if ( disp__glEvalCoord2f == NULL ) return;

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

		if ( disp__glEvalCoord2dv == NULL ) return;

		if(u!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, u, 0);
		}
		disp__glEvalCoord2dv (
			(const GLdouble *) ptr0
		);

		if(u!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  u, ptr0, JNI_ABORT);
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

		if ( disp__glEvalCoord2fv == NULL ) return;

		if(u!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, u, 0);
		}
		disp__glEvalCoord2fv (
			(const GLfloat *) ptr0
		);

		if(u!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  u, ptr0, JNI_ABORT);
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

		if ( disp__glMapGrid1d == NULL ) return;

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

		if ( disp__glMapGrid1f == NULL ) return;

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

		if ( disp__glMapGrid2d == NULL ) return;

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

		if ( disp__glMapGrid2f == NULL ) return;

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

		if ( disp__glEvalPoint1 == NULL ) return;

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

		if ( disp__glEvalPoint2 == NULL ) return;

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

		if ( disp__glEvalMesh1 == NULL ) return;

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

		if ( disp__glEvalMesh2 == NULL ) return;

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

		if ( disp__glFogf == NULL ) return;

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

		if ( disp__glFogi == NULL ) return;

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

		if ( disp__glFogfv == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glFogfv (
			(GLenum) pname,
			(const GLfloat *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, JNI_ABORT);
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

		if ( disp__glFogiv == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glFogiv (
			(GLenum) pname,
			(const GLint *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, JNI_ABORT);
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

		if ( disp__glFeedbackBuffer == NULL ) return;

		if(buffer!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, buffer, &isCopiedArray2);
		}
		disp__glFeedbackBuffer (
			(GLsizei) size,
			(GLenum) type,
			(GLfloat *) ptr2
		);

		if(buffer!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  buffer, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glPassThrough == NULL ) return;

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

		if ( disp__glSelectBuffer == NULL ) return;

		if(buffer!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, buffer, &isCopiedArray1);
		}
		disp__glSelectBuffer (
			(GLsizei) size,
			(GLuint *) ptr1
		);

		if(buffer!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  buffer, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glInitNames == NULL ) return;

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

		if ( disp__glLoadName == NULL ) return;

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

		if ( disp__glPushName == NULL ) return;

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

		if ( disp__glPopName == NULL ) return;

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

		if ( disp__glDrawRangeElements == NULL ) return;

		if(indices!=NULL)
		{
			ptr5 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, indices, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  indices, ptr5, JNI_ABORT);
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

		if ( disp__glDrawRangeElements == NULL ) return;

		if(indices!=NULL)
		{
			ptr5 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, indices, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  indices, ptr5, JNI_ABORT);
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

		if ( disp__glDrawRangeElements == NULL ) return;

		if(indices!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, indices, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  indices, ptr5, JNI_ABORT);
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

		if ( disp__glDrawRangeElements == NULL ) return;

		if(indices!=NULL)
		{
			ptr5 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, indices, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  indices, ptr5, JNI_ABORT);
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

		if ( disp__glDrawRangeElements == NULL ) return;

		if(indices!=NULL)
		{
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, indices, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  indices, ptr5, JNI_ABORT);
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

		if ( disp__glDrawRangeElements == NULL ) return;

		if(indices!=NULL)
		{
			ptr5 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, indices, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  indices, ptr5, JNI_ABORT);
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

		if ( disp__glDrawRangeElements == NULL ) return;

		if(indices!=NULL)
		{
			ptr5 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, indices, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  indices, ptr5, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage3D ( GLenum target , GLint level , GLenum internalFormat , GLsizei width , GLsizei height , GLsizei depth , GLint border , GLenum format , GLenum type , const GLvoid * pixels ) ;
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

		if ( disp__glTexImage3D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr9 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
		}
		disp__glTexImage3D (
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr9, JNI_ABORT);
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

		if ( disp__glTexImage3D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr9 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
		}
		disp__glTexImage3D (
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr9, JNI_ABORT);
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

		if ( disp__glTexImage3D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr9 = (jint *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
		}
		disp__glTexImage3D (
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr9, JNI_ABORT);
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

		if ( disp__glTexImage3D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr9 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
		}
		disp__glTexImage3D (
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr9, JNI_ABORT);
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

		if ( disp__glTexImage3D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr9 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
		}
		disp__glTexImage3D (
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr9, JNI_ABORT);
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

		if ( disp__glTexImage3D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr9 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
		}
		disp__glTexImage3D (
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr9, JNI_ABORT);
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

		if ( disp__glTexImage3D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr9 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
		}
		disp__glTexImage3D (
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr9, JNI_ABORT);
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

		if ( disp__glTexSubImage3D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr10 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr10, JNI_ABORT);
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

		if ( disp__glTexSubImage3D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr10 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr10, JNI_ABORT);
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

		if ( disp__glTexSubImage3D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr10 = (jint *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr10, JNI_ABORT);
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

		if ( disp__glTexSubImage3D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr10 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr10, JNI_ABORT);
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

		if ( disp__glTexSubImage3D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr10 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr10, JNI_ABORT);
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

		if ( disp__glTexSubImage3D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr10 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr10, JNI_ABORT);
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

		if ( disp__glTexSubImage3D == NULL ) return;

		if(pixels!=NULL)
		{
			ptr10 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr10, JNI_ABORT);
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

		if ( disp__glCopyTexSubImage3D == NULL ) return;

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

		if ( disp__glColorTable == NULL ) return;

		if(table!=NULL)
		{
			ptr5 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, table, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr5, JNI_ABORT);
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

		if ( disp__glColorTable == NULL ) return;

		if(table!=NULL)
		{
			ptr5 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, table, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr5, JNI_ABORT);
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

		if ( disp__glColorTable == NULL ) return;

		if(table!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, table, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr5, JNI_ABORT);
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

		if ( disp__glColorTable == NULL ) return;

		if(table!=NULL)
		{
			ptr5 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, table, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr5, JNI_ABORT);
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

		if ( disp__glColorTable == NULL ) return;

		if(table!=NULL)
		{
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, table, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr5, JNI_ABORT);
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

		if ( disp__glColorTable == NULL ) return;

		if(table!=NULL)
		{
			ptr5 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, table, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr5, JNI_ABORT);
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

		if ( disp__glColorTable == NULL ) return;

		if(table!=NULL)
		{
			ptr5 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, table, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr5, JNI_ABORT);
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

		if ( disp__glColorSubTable == NULL ) return;

		if(data!=NULL)
		{
			ptr5 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		if ( disp__glColorSubTable == NULL ) return;

		if(data!=NULL)
		{
			ptr5 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		if ( disp__glColorSubTable == NULL ) return;

		if(data!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		if ( disp__glColorSubTable == NULL ) return;

		if(data!=NULL)
		{
			ptr5 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		if ( disp__glColorSubTable == NULL ) return;

		if(data!=NULL)
		{
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		if ( disp__glColorSubTable == NULL ) return;

		if(data!=NULL)
		{
			ptr5 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		if ( disp__glColorSubTable == NULL ) return;

		if(data!=NULL)
		{
			ptr5 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		if ( disp__glColorTableParameteriv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glColorTableParameteriv (
			(GLenum) target,
			(GLenum) pname,
			(const GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, JNI_ABORT);
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

		if ( disp__glColorTableParameterfv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glColorTableParameterfv (
			(GLenum) target,
			(GLenum) pname,
			(const GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, JNI_ABORT);
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

		if ( disp__glCopyColorSubTable == NULL ) return;

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

		if ( disp__glCopyColorTable == NULL ) return;

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

		if ( disp__glGetColorTable == NULL ) return;

		if(table!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, table, &isCopiedArray3);
		}
		disp__glGetColorTable (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetColorTable == NULL ) return;

		if(table!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, table, &isCopiedArray3);
		}
		disp__glGetColorTable (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetColorTable == NULL ) return;

		if(table!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, table, &isCopiedArray3);
		}
		disp__glGetColorTable (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetColorTable == NULL ) return;

		if(table!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, table, &isCopiedArray3);
		}
		disp__glGetColorTable (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetColorTable == NULL ) return;

		if(table!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, table, &isCopiedArray3);
		}
		disp__glGetColorTable (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetColorTable == NULL ) return;

		if(table!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, table, &isCopiedArray3);
		}
		disp__glGetColorTable (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetColorTable == NULL ) return;

		if(table!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, table, &isCopiedArray3);
		}
		disp__glGetColorTable (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetColorTableParameterfv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetColorTableParameterfv (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetColorTableParameteriv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetColorTableParameteriv (
			(GLenum) target,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glBlendEquation == NULL ) return;

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

		if ( disp__glBlendColor == NULL ) return;

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

		if ( disp__glHistogram == NULL ) return;

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

		if ( disp__glResetHistogram == NULL ) return;

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

		if ( disp__glGetHistogram == NULL ) return;

		if(values!=NULL)
		{
			ptr4 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetHistogram == NULL ) return;

		if(values!=NULL)
		{
			ptr4 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetHistogram == NULL ) return;

		if(values!=NULL)
		{
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetHistogram == NULL ) return;

		if(values!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetHistogram == NULL ) return;

		if(values!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetHistogram == NULL ) return;

		if(values!=NULL)
		{
			ptr4 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetHistogram == NULL ) return;

		if(values!=NULL)
		{
			ptr4 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetHistogramParameterfv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetHistogramParameterfv (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetHistogramParameteriv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetHistogramParameteriv (
			(GLenum) target,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glMinmax == NULL ) return;

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

		if ( disp__glResetMinmax == NULL ) return;

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

		if ( disp__glGetMinmax == NULL ) return;

		if(values!=NULL)
		{
			ptr4 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetMinmax == NULL ) return;

		if(values!=NULL)
		{
			ptr4 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetMinmax == NULL ) return;

		if(values!=NULL)
		{
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetMinmax == NULL ) return;

		if(values!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetMinmax == NULL ) return;

		if(values!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetMinmax == NULL ) return;

		if(values!=NULL)
		{
			ptr4 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetMinmax == NULL ) return;

		if(values!=NULL)
		{
			ptr4 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, values, &isCopiedArray4);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  values, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetMinmaxParameterfv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetMinmaxParameterfv (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetMinmaxParameteriv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetMinmaxParameteriv (
			(GLenum) target,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glConvolutionFilter1D == NULL ) return;

		if(image!=NULL)
		{
			ptr5 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, image, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr5, JNI_ABORT);
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

		if ( disp__glConvolutionFilter1D == NULL ) return;

		if(image!=NULL)
		{
			ptr5 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, image, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr5, JNI_ABORT);
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

		if ( disp__glConvolutionFilter1D == NULL ) return;

		if(image!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, image, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr5, JNI_ABORT);
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

		if ( disp__glConvolutionFilter1D == NULL ) return;

		if(image!=NULL)
		{
			ptr5 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, image, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr5, JNI_ABORT);
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

		if ( disp__glConvolutionFilter1D == NULL ) return;

		if(image!=NULL)
		{
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, image, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr5, JNI_ABORT);
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

		if ( disp__glConvolutionFilter1D == NULL ) return;

		if(image!=NULL)
		{
			ptr5 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, image, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr5, JNI_ABORT);
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

		if ( disp__glConvolutionFilter1D == NULL ) return;

		if(image!=NULL)
		{
			ptr5 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, image, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr5, JNI_ABORT);
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

		if ( disp__glConvolutionFilter2D == NULL ) return;

		if(image!=NULL)
		{
			ptr6 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, image, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr6, JNI_ABORT);
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

		if ( disp__glConvolutionFilter2D == NULL ) return;

		if(image!=NULL)
		{
			ptr6 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, image, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr6, JNI_ABORT);
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

		if ( disp__glConvolutionFilter2D == NULL ) return;

		if(image!=NULL)
		{
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, image, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr6, JNI_ABORT);
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

		if ( disp__glConvolutionFilter2D == NULL ) return;

		if(image!=NULL)
		{
			ptr6 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, image, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr6, JNI_ABORT);
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

		if ( disp__glConvolutionFilter2D == NULL ) return;

		if(image!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, image, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr6, JNI_ABORT);
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

		if ( disp__glConvolutionFilter2D == NULL ) return;

		if(image!=NULL)
		{
			ptr6 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, image, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr6, JNI_ABORT);
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

		if ( disp__glConvolutionFilter2D == NULL ) return;

		if(image!=NULL)
		{
			ptr6 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, image, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr6, JNI_ABORT);
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

		if ( disp__glConvolutionParameterf == NULL ) return;

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

		if ( disp__glConvolutionParameterfv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glConvolutionParameterfv (
			(GLenum) target,
			(GLenum) pname,
			(const GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, JNI_ABORT);
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

		if ( disp__glConvolutionParameteri == NULL ) return;

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

		if ( disp__glConvolutionParameteriv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glConvolutionParameteriv (
			(GLenum) target,
			(GLenum) pname,
			(const GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, JNI_ABORT);
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

		if ( disp__glCopyConvolutionFilter1D == NULL ) return;

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

		if ( disp__glCopyConvolutionFilter2D == NULL ) return;

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

		if ( disp__glGetConvolutionFilter == NULL ) return;

		if(image!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, image, &isCopiedArray3);
		}
		disp__glGetConvolutionFilter (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(image!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetConvolutionFilter == NULL ) return;

		if(image!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, image, &isCopiedArray3);
		}
		disp__glGetConvolutionFilter (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(image!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetConvolutionFilter == NULL ) return;

		if(image!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, image, &isCopiedArray3);
		}
		disp__glGetConvolutionFilter (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(image!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetConvolutionFilter == NULL ) return;

		if(image!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, image, &isCopiedArray3);
		}
		disp__glGetConvolutionFilter (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(image!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetConvolutionFilter == NULL ) return;

		if(image!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, image, &isCopiedArray3);
		}
		disp__glGetConvolutionFilter (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(image!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetConvolutionFilter == NULL ) return;

		if(image!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, image, &isCopiedArray3);
		}
		disp__glGetConvolutionFilter (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(image!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetConvolutionFilter == NULL ) return;

		if(image!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, image, &isCopiedArray3);
		}
		disp__glGetConvolutionFilter (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(image!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  image, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetConvolutionParameterfv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetConvolutionParameterfv (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetConvolutionParameteriv == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetConvolutionParameteriv (
			(GLenum) target,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glSeparableFilter2D == NULL ) return;

		if(row!=NULL)
		{
			ptr6 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, column, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  row, ptr6, JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  column, ptr7, JNI_ABORT);
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

		if ( disp__glSeparableFilter2D == NULL ) return;

		if(row!=NULL)
		{
			ptr6 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, column, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  row, ptr6, JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  column, ptr7, JNI_ABORT);
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

		if ( disp__glSeparableFilter2D == NULL ) return;

		if(row!=NULL)
		{
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (jint *) (*env)->GetPrimitiveArrayCritical(env, column, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  row, ptr6, JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  column, ptr7, JNI_ABORT);
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

		if ( disp__glSeparableFilter2D == NULL ) return;

		if(row!=NULL)
		{
			ptr6 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, column, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  row, ptr6, JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  column, ptr7, JNI_ABORT);
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

		if ( disp__glSeparableFilter2D == NULL ) return;

		if(row!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, column, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  row, ptr6, JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  column, ptr7, JNI_ABORT);
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

		if ( disp__glSeparableFilter2D == NULL ) return;

		if(row!=NULL)
		{
			ptr6 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, column, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  row, ptr6, JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  column, ptr7, JNI_ABORT);
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

		if ( disp__glSeparableFilter2D == NULL ) return;

		if(row!=NULL)
		{
			ptr6 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, row, 0);
		}
		if(column!=NULL)
		{
			ptr7 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, column, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  row, ptr6, JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  column, ptr7, JNI_ABORT);
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

		if ( disp__glGetSeparableFilter == NULL ) return;

		if(row!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, row, &isCopiedArray3);
		}
		if(column!=NULL)
		{
			ptr4 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, column, &isCopiedArray4);
		}
		if(span!=NULL)
		{
			ptr5 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, span, &isCopiedArray5);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  row, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  column, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(span!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  span, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetSeparableFilter == NULL ) return;

		if(row!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, row, &isCopiedArray3);
		}
		if(column!=NULL)
		{
			ptr4 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, column, &isCopiedArray4);
		}
		if(span!=NULL)
		{
			ptr5 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, span, &isCopiedArray5);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  row, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  column, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(span!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  span, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetSeparableFilter == NULL ) return;

		if(row!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, row, &isCopiedArray3);
		}
		if(column!=NULL)
		{
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, column, &isCopiedArray4);
		}
		if(span!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, span, &isCopiedArray5);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  row, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  column, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(span!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  span, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetSeparableFilter == NULL ) return;

		if(row!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, row, &isCopiedArray3);
		}
		if(column!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, column, &isCopiedArray4);
		}
		if(span!=NULL)
		{
			ptr5 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, span, &isCopiedArray5);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  row, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  column, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(span!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  span, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetSeparableFilter == NULL ) return;

		if(row!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, row, &isCopiedArray3);
		}
		if(column!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, column, &isCopiedArray4);
		}
		if(span!=NULL)
		{
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, span, &isCopiedArray5);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  row, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  column, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(span!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  span, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetSeparableFilter == NULL ) return;

		if(row!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, row, &isCopiedArray3);
		}
		if(column!=NULL)
		{
			ptr4 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, column, &isCopiedArray4);
		}
		if(span!=NULL)
		{
			ptr5 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, span, &isCopiedArray5);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  row, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  column, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(span!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  span, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetSeparableFilter == NULL ) return;

		if(row!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, row, &isCopiedArray3);
		}
		if(column!=NULL)
		{
			ptr4 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, column, &isCopiedArray4);
		}
		if(span!=NULL)
		{
			ptr5 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, span, &isCopiedArray5);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  row, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(column!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  column, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(span!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  span, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glActiveTexture ( GLenum texture ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glActiveTexture (
		JNIEnv *env, jobject obj,
		jint texture)
	{

		if ( disp__glActiveTexture == NULL ) return;

		disp__glActiveTexture (
			(GLenum) texture
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClientActiveTexture ( GLenum texture ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glClientActiveTexture (
		JNIEnv *env, jobject obj,
		jint texture)
	{

		if ( disp__glClientActiveTexture == NULL ) return;

		disp__glClientActiveTexture (
			(GLenum) texture
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage1D ( GLenum target , GLint level , GLenum internalformat , GLsizei width , GLint border , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage1D__IIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint border,
		jint imageSize,
		jbyteArray data)
	{
		jbyte *ptr6 = NULL;

		if ( disp__glCompressedTexImage1D == NULL ) return;

		if(data!=NULL)
		{
			ptr6 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage1D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage1D__IIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint border,
		jint imageSize,
		jshortArray data)
	{
		jshort *ptr6 = NULL;

		if ( disp__glCompressedTexImage1D == NULL ) return;

		if(data!=NULL)
		{
			ptr6 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage1D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage1D__IIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint border,
		jint imageSize,
		jintArray data)
	{
		jint *ptr6 = NULL;

		if ( disp__glCompressedTexImage1D == NULL ) return;

		if(data!=NULL)
		{
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage1D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage1D__IIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint border,
		jint imageSize,
		jfloatArray data)
	{
		jfloat *ptr6 = NULL;

		if ( disp__glCompressedTexImage1D == NULL ) return;

		if(data!=NULL)
		{
			ptr6 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage1D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage1D__IIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint border,
		jint imageSize,
		jdoubleArray data)
	{
		jdouble *ptr6 = NULL;

		if ( disp__glCompressedTexImage1D == NULL ) return;

		if(data!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage1D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage1D__IIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint border,
		jint imageSize,
		jbooleanArray data)
	{
		jboolean *ptr6 = NULL;

		if ( disp__glCompressedTexImage1D == NULL ) return;

		if(data!=NULL)
		{
			ptr6 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage1D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage1D__IIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint border,
		jint imageSize,
		jlongArray data)
	{
		jlong *ptr6 = NULL;

		if ( disp__glCompressedTexImage1D == NULL ) return;

		if(data!=NULL)
		{
			ptr6 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage1D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage2D ( GLenum target , GLint level , GLenum internalformat , GLsizei width , GLsizei height , GLint border , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage2D__IIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint height,
		jint border,
		jint imageSize,
		jbyteArray data)
	{
		jbyte *ptr7 = NULL;

		if ( disp__glCompressedTexImage2D == NULL ) return;

		if(data!=NULL)
		{
			ptr7 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage2D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr7
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage2D__IIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint height,
		jint border,
		jint imageSize,
		jshortArray data)
	{
		jshort *ptr7 = NULL;

		if ( disp__glCompressedTexImage2D == NULL ) return;

		if(data!=NULL)
		{
			ptr7 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage2D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr7
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage2D__IIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint height,
		jint border,
		jint imageSize,
		jintArray data)
	{
		jint *ptr7 = NULL;

		if ( disp__glCompressedTexImage2D == NULL ) return;

		if(data!=NULL)
		{
			ptr7 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage2D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr7
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage2D__IIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint height,
		jint border,
		jint imageSize,
		jfloatArray data)
	{
		jfloat *ptr7 = NULL;

		if ( disp__glCompressedTexImage2D == NULL ) return;

		if(data!=NULL)
		{
			ptr7 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage2D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr7
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage2D__IIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint height,
		jint border,
		jint imageSize,
		jdoubleArray data)
	{
		jdouble *ptr7 = NULL;

		if ( disp__glCompressedTexImage2D == NULL ) return;

		if(data!=NULL)
		{
			ptr7 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage2D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr7
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage2D__IIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint height,
		jint border,
		jint imageSize,
		jbooleanArray data)
	{
		jboolean *ptr7 = NULL;

		if ( disp__glCompressedTexImage2D == NULL ) return;

		if(data!=NULL)
		{
			ptr7 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage2D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr7
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage2D__IIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint height,
		jint border,
		jint imageSize,
		jlongArray data)
	{
		jlong *ptr7 = NULL;

		if ( disp__glCompressedTexImage2D == NULL ) return;

		if(data!=NULL)
		{
			ptr7 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage2D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr7
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr7, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage3D ( GLenum target , GLint level , GLenum internalformat , GLsizei width , GLsizei height , GLsizei depth , GLint border , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage3D__IIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint imageSize,
		jbyteArray data)
	{
		jbyte *ptr8 = NULL;

		if ( disp__glCompressedTexImage3D == NULL ) return;

		if(data!=NULL)
		{
			ptr8 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage3D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage3D__IIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint imageSize,
		jshortArray data)
	{
		jshort *ptr8 = NULL;

		if ( disp__glCompressedTexImage3D == NULL ) return;

		if(data!=NULL)
		{
			ptr8 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage3D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage3D__IIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint imageSize,
		jintArray data)
	{
		jint *ptr8 = NULL;

		if ( disp__glCompressedTexImage3D == NULL ) return;

		if(data!=NULL)
		{
			ptr8 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage3D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage3D__IIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint imageSize,
		jfloatArray data)
	{
		jfloat *ptr8 = NULL;

		if ( disp__glCompressedTexImage3D == NULL ) return;

		if(data!=NULL)
		{
			ptr8 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage3D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage3D__IIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint imageSize,
		jdoubleArray data)
	{
		jdouble *ptr8 = NULL;

		if ( disp__glCompressedTexImage3D == NULL ) return;

		if(data!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage3D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage3D__IIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint imageSize,
		jbooleanArray data)
	{
		jboolean *ptr8 = NULL;

		if ( disp__glCompressedTexImage3D == NULL ) return;

		if(data!=NULL)
		{
			ptr8 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage3D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage3D__IIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint internalformat,
		jint width,
		jint height,
		jint depth,
		jint border,
		jint imageSize,
		jlongArray data)
	{
		jlong *ptr8 = NULL;

		if ( disp__glCompressedTexImage3D == NULL ) return;

		if(data!=NULL)
		{
			ptr8 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexImage3D (
			(GLenum) target,
			(GLint) level,
			(GLenum) internalformat,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLint) border,
			(GLsizei) imageSize,
			(const GLvoid *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage1D ( GLenum target , GLint level , GLint xoffset , GLsizei width , GLenum format , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage1D__IIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint width,
		jint format,
		jint imageSize,
		jbyteArray data)
	{
		jbyte *ptr6 = NULL;

		if ( disp__glCompressedTexSubImage1D == NULL ) return;

		if(data!=NULL)
		{
			ptr6 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage1D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLsizei) width,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage1D__IIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint width,
		jint format,
		jint imageSize,
		jshortArray data)
	{
		jshort *ptr6 = NULL;

		if ( disp__glCompressedTexSubImage1D == NULL ) return;

		if(data!=NULL)
		{
			ptr6 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage1D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLsizei) width,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage1D__IIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint width,
		jint format,
		jint imageSize,
		jintArray data)
	{
		jint *ptr6 = NULL;

		if ( disp__glCompressedTexSubImage1D == NULL ) return;

		if(data!=NULL)
		{
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage1D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLsizei) width,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage1D__IIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint width,
		jint format,
		jint imageSize,
		jfloatArray data)
	{
		jfloat *ptr6 = NULL;

		if ( disp__glCompressedTexSubImage1D == NULL ) return;

		if(data!=NULL)
		{
			ptr6 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage1D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLsizei) width,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage1D__IIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint width,
		jint format,
		jint imageSize,
		jdoubleArray data)
	{
		jdouble *ptr6 = NULL;

		if ( disp__glCompressedTexSubImage1D == NULL ) return;

		if(data!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage1D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLsizei) width,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage1D__IIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint width,
		jint format,
		jint imageSize,
		jbooleanArray data)
	{
		jboolean *ptr6 = NULL;

		if ( disp__glCompressedTexSubImage1D == NULL ) return;

		if(data!=NULL)
		{
			ptr6 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage1D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLsizei) width,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage1D__IIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint width,
		jint format,
		jint imageSize,
		jlongArray data)
	{
		jlong *ptr6 = NULL;

		if ( disp__glCompressedTexSubImage1D == NULL ) return;

		if(data!=NULL)
		{
			ptr6 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage1D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLsizei) width,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr6
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr6, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage2D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLsizei width , GLsizei height , GLenum format , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage2D__IIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint width,
		jint height,
		jint format,
		jint imageSize,
		jbyteArray data)
	{
		jbyte *ptr8 = NULL;

		if ( disp__glCompressedTexSubImage2D == NULL ) return;

		if(data!=NULL)
		{
			ptr8 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage2D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage2D__IIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint width,
		jint height,
		jint format,
		jint imageSize,
		jshortArray data)
	{
		jshort *ptr8 = NULL;

		if ( disp__glCompressedTexSubImage2D == NULL ) return;

		if(data!=NULL)
		{
			ptr8 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage2D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage2D__IIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint width,
		jint height,
		jint format,
		jint imageSize,
		jintArray data)
	{
		jint *ptr8 = NULL;

		if ( disp__glCompressedTexSubImage2D == NULL ) return;

		if(data!=NULL)
		{
			ptr8 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage2D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage2D__IIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint width,
		jint height,
		jint format,
		jint imageSize,
		jfloatArray data)
	{
		jfloat *ptr8 = NULL;

		if ( disp__glCompressedTexSubImage2D == NULL ) return;

		if(data!=NULL)
		{
			ptr8 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage2D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage2D__IIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint width,
		jint height,
		jint format,
		jint imageSize,
		jdoubleArray data)
	{
		jdouble *ptr8 = NULL;

		if ( disp__glCompressedTexSubImage2D == NULL ) return;

		if(data!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage2D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage2D__IIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint width,
		jint height,
		jint format,
		jint imageSize,
		jbooleanArray data)
	{
		jboolean *ptr8 = NULL;

		if ( disp__glCompressedTexSubImage2D == NULL ) return;

		if(data!=NULL)
		{
			ptr8 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage2D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage2D__IIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint level,
		jint xoffset,
		jint yoffset,
		jint width,
		jint height,
		jint format,
		jint imageSize,
		jlongArray data)
	{
		jlong *ptr8 = NULL;

		if ( disp__glCompressedTexSubImage2D == NULL ) return;

		if(data!=NULL)
		{
			ptr8 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage2D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr8
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr8, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage3D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint zoffset , GLsizei width , GLsizei height , GLsizei depth , GLenum format , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage3D__IIIIIIIIII_3B (
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
		jint imageSize,
		jbyteArray data)
	{
		jbyte *ptr10 = NULL;

		if ( disp__glCompressedTexSubImage3D == NULL ) return;

		if(data!=NULL)
		{
			ptr10 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage3D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr10
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage3D__IIIIIIIIII_3S (
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
		jint imageSize,
		jshortArray data)
	{
		jshort *ptr10 = NULL;

		if ( disp__glCompressedTexSubImage3D == NULL ) return;

		if(data!=NULL)
		{
			ptr10 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage3D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr10
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage3D__IIIIIIIIII_3I (
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
		jint imageSize,
		jintArray data)
	{
		jint *ptr10 = NULL;

		if ( disp__glCompressedTexSubImage3D == NULL ) return;

		if(data!=NULL)
		{
			ptr10 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage3D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr10
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage3D__IIIIIIIIII_3F (
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
		jint imageSize,
		jfloatArray data)
	{
		jfloat *ptr10 = NULL;

		if ( disp__glCompressedTexSubImage3D == NULL ) return;

		if(data!=NULL)
		{
			ptr10 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage3D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr10
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage3D__IIIIIIIIII_3D (
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
		jint imageSize,
		jdoubleArray data)
	{
		jdouble *ptr10 = NULL;

		if ( disp__glCompressedTexSubImage3D == NULL ) return;

		if(data!=NULL)
		{
			ptr10 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage3D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr10
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage3D__IIIIIIIIII_3Z (
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
		jint imageSize,
		jbooleanArray data)
	{
		jboolean *ptr10 = NULL;

		if ( disp__glCompressedTexSubImage3D == NULL ) return;

		if(data!=NULL)
		{
			ptr10 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage3D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr10
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage3D__IIIIIIIIII_3J (
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
		jint imageSize,
		jlongArray data)
	{
		jlong *ptr10 = NULL;

		if ( disp__glCompressedTexSubImage3D == NULL ) return;

		if(data!=NULL)
		{
			ptr10 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
		}
		disp__glCompressedTexSubImage3D (
			(GLenum) target,
			(GLint) level,
			(GLint) xoffset,
			(GLint) yoffset,
			(GLint) zoffset,
			(GLsizei) width,
			(GLsizei) height,
			(GLsizei) depth,
			(GLenum) format,
			(GLsizei) imageSize,
			(const GLvoid *) ptr10
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr10, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCompressedTexImage ( GLenum target , GLint lod , GLvoid * img ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCompressedTexImage__II_3B (
		JNIEnv *env, jobject obj,
		jint target,
		jint lod,
		jbyteArray img)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jbyte *ptr2 = NULL;

		if ( disp__glGetCompressedTexImage == NULL ) return;

		if(img!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, img, &isCopiedArray2);
		}
		disp__glGetCompressedTexImage (
			(GLenum) target,
			(GLint) lod,
			(GLvoid *) ptr2
		);

		if(img!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  img, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCompressedTexImage__II_3S (
		JNIEnv *env, jobject obj,
		jint target,
		jint lod,
		jshortArray img)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jshort *ptr2 = NULL;

		if ( disp__glGetCompressedTexImage == NULL ) return;

		if(img!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, img, &isCopiedArray2);
		}
		disp__glGetCompressedTexImage (
			(GLenum) target,
			(GLint) lod,
			(GLvoid *) ptr2
		);

		if(img!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  img, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCompressedTexImage__II_3I (
		JNIEnv *env, jobject obj,
		jint target,
		jint lod,
		jintArray img)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetCompressedTexImage == NULL ) return;

		if(img!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, img, &isCopiedArray2);
		}
		disp__glGetCompressedTexImage (
			(GLenum) target,
			(GLint) lod,
			(GLvoid *) ptr2
		);

		if(img!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  img, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCompressedTexImage__II_3F (
		JNIEnv *env, jobject obj,
		jint target,
		jint lod,
		jfloatArray img)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetCompressedTexImage == NULL ) return;

		if(img!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, img, &isCopiedArray2);
		}
		disp__glGetCompressedTexImage (
			(GLenum) target,
			(GLint) lod,
			(GLvoid *) ptr2
		);

		if(img!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  img, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCompressedTexImage__II_3D (
		JNIEnv *env, jobject obj,
		jint target,
		jint lod,
		jdoubleArray img)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;

		if ( disp__glGetCompressedTexImage == NULL ) return;

		if(img!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, img, &isCopiedArray2);
		}
		disp__glGetCompressedTexImage (
			(GLenum) target,
			(GLint) lod,
			(GLvoid *) ptr2
		);

		if(img!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  img, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCompressedTexImage__II_3Z (
		JNIEnv *env, jobject obj,
		jint target,
		jint lod,
		jbooleanArray img)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jboolean *ptr2 = NULL;

		if ( disp__glGetCompressedTexImage == NULL ) return;

		if(img!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, img, &isCopiedArray2);
		}
		disp__glGetCompressedTexImage (
			(GLenum) target,
			(GLint) lod,
			(GLvoid *) ptr2
		);

		if(img!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  img, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCompressedTexImage__II_3J (
		JNIEnv *env, jobject obj,
		jint target,
		jint lod,
		jlongArray img)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jlong *ptr2 = NULL;

		if ( disp__glGetCompressedTexImage == NULL ) return;

		if(img!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, img, &isCopiedArray2);
		}
		disp__glGetCompressedTexImage (
			(GLenum) target,
			(GLint) lod,
			(GLvoid *) ptr2
		);

		if(img!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  img, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1d ( GLenum target , GLdouble s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord1d (
		JNIEnv *env, jobject obj,
		jint target,
		jdouble s)
	{

		if ( disp__glMultiTexCoord1d == NULL ) return;

		disp__glMultiTexCoord1d (
			(GLenum) target,
			(GLdouble) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1dv ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord1dv (
		JNIEnv *env, jobject obj,
		jint target,
		jdoubleArray v)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glMultiTexCoord1dv == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord1dv (
			(GLenum) target,
			(const GLdouble *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1f ( GLenum target , GLfloat s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord1f (
		JNIEnv *env, jobject obj,
		jint target,
		jfloat s)
	{

		if ( disp__glMultiTexCoord1f == NULL ) return;

		disp__glMultiTexCoord1f (
			(GLenum) target,
			(GLfloat) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1fv ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord1fv (
		JNIEnv *env, jobject obj,
		jint target,
		jfloatArray v)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glMultiTexCoord1fv == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord1fv (
			(GLenum) target,
			(const GLfloat *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1i ( GLenum target , GLint s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord1i (
		JNIEnv *env, jobject obj,
		jint target,
		jint s)
	{

		if ( disp__glMultiTexCoord1i == NULL ) return;

		disp__glMultiTexCoord1i (
			(GLenum) target,
			(GLint) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1iv ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord1iv (
		JNIEnv *env, jobject obj,
		jint target,
		jintArray v)
	{
		jint *ptr1 = NULL;

		if ( disp__glMultiTexCoord1iv == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord1iv (
			(GLenum) target,
			(const GLint *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1s ( GLenum target , GLshort s ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord1s (
		JNIEnv *env, jobject obj,
		jint target,
		jshort s)
	{

		if ( disp__glMultiTexCoord1s == NULL ) return;

		disp__glMultiTexCoord1s (
			(GLenum) target,
			(GLshort) s
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1sv ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord1sv (
		JNIEnv *env, jobject obj,
		jint target,
		jshortArray v)
	{
		jshort *ptr1 = NULL;

		if ( disp__glMultiTexCoord1sv == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord1sv (
			(GLenum) target,
			(const GLshort *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2d ( GLenum target , GLdouble s , GLdouble t ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord2d (
		JNIEnv *env, jobject obj,
		jint target,
		jdouble s,
		jdouble t)
	{

		if ( disp__glMultiTexCoord2d == NULL ) return;

		disp__glMultiTexCoord2d (
			(GLenum) target,
			(GLdouble) s,
			(GLdouble) t
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2dv ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord2dv (
		JNIEnv *env, jobject obj,
		jint target,
		jdoubleArray v)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glMultiTexCoord2dv == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord2dv (
			(GLenum) target,
			(const GLdouble *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2f ( GLenum target , GLfloat s , GLfloat t ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord2f (
		JNIEnv *env, jobject obj,
		jint target,
		jfloat s,
		jfloat t)
	{

		if ( disp__glMultiTexCoord2f == NULL ) return;

		disp__glMultiTexCoord2f (
			(GLenum) target,
			(GLfloat) s,
			(GLfloat) t
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2fv ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord2fv (
		JNIEnv *env, jobject obj,
		jint target,
		jfloatArray v)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glMultiTexCoord2fv == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord2fv (
			(GLenum) target,
			(const GLfloat *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2i ( GLenum target , GLint s , GLint t ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord2i (
		JNIEnv *env, jobject obj,
		jint target,
		jint s,
		jint t)
	{

		if ( disp__glMultiTexCoord2i == NULL ) return;

		disp__glMultiTexCoord2i (
			(GLenum) target,
			(GLint) s,
			(GLint) t
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2iv ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord2iv (
		JNIEnv *env, jobject obj,
		jint target,
		jintArray v)
	{
		jint *ptr1 = NULL;

		if ( disp__glMultiTexCoord2iv == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord2iv (
			(GLenum) target,
			(const GLint *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2s ( GLenum target , GLshort s , GLshort t ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord2s (
		JNIEnv *env, jobject obj,
		jint target,
		jshort s,
		jshort t)
	{

		if ( disp__glMultiTexCoord2s == NULL ) return;

		disp__glMultiTexCoord2s (
			(GLenum) target,
			(GLshort) s,
			(GLshort) t
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2sv ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord2sv (
		JNIEnv *env, jobject obj,
		jint target,
		jshortArray v)
	{
		jshort *ptr1 = NULL;

		if ( disp__glMultiTexCoord2sv == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord2sv (
			(GLenum) target,
			(const GLshort *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3d ( GLenum target , GLdouble s , GLdouble t , GLdouble r ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord3d (
		JNIEnv *env, jobject obj,
		jint target,
		jdouble s,
		jdouble t,
		jdouble r)
	{

		if ( disp__glMultiTexCoord3d == NULL ) return;

		disp__glMultiTexCoord3d (
			(GLenum) target,
			(GLdouble) s,
			(GLdouble) t,
			(GLdouble) r
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3dv ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord3dv (
		JNIEnv *env, jobject obj,
		jint target,
		jdoubleArray v)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glMultiTexCoord3dv == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord3dv (
			(GLenum) target,
			(const GLdouble *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3f ( GLenum target , GLfloat s , GLfloat t , GLfloat r ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord3f (
		JNIEnv *env, jobject obj,
		jint target,
		jfloat s,
		jfloat t,
		jfloat r)
	{

		if ( disp__glMultiTexCoord3f == NULL ) return;

		disp__glMultiTexCoord3f (
			(GLenum) target,
			(GLfloat) s,
			(GLfloat) t,
			(GLfloat) r
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3fv ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord3fv (
		JNIEnv *env, jobject obj,
		jint target,
		jfloatArray v)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glMultiTexCoord3fv == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord3fv (
			(GLenum) target,
			(const GLfloat *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3i ( GLenum target , GLint s , GLint t , GLint r ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord3i (
		JNIEnv *env, jobject obj,
		jint target,
		jint s,
		jint t,
		jint r)
	{

		if ( disp__glMultiTexCoord3i == NULL ) return;

		disp__glMultiTexCoord3i (
			(GLenum) target,
			(GLint) s,
			(GLint) t,
			(GLint) r
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3iv ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord3iv (
		JNIEnv *env, jobject obj,
		jint target,
		jintArray v)
	{
		jint *ptr1 = NULL;

		if ( disp__glMultiTexCoord3iv == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord3iv (
			(GLenum) target,
			(const GLint *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3s ( GLenum target , GLshort s , GLshort t , GLshort r ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord3s (
		JNIEnv *env, jobject obj,
		jint target,
		jshort s,
		jshort t,
		jshort r)
	{

		if ( disp__glMultiTexCoord3s == NULL ) return;

		disp__glMultiTexCoord3s (
			(GLenum) target,
			(GLshort) s,
			(GLshort) t,
			(GLshort) r
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3sv ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord3sv (
		JNIEnv *env, jobject obj,
		jint target,
		jshortArray v)
	{
		jshort *ptr1 = NULL;

		if ( disp__glMultiTexCoord3sv == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord3sv (
			(GLenum) target,
			(const GLshort *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4d ( GLenum target , GLdouble s , GLdouble t , GLdouble r , GLdouble q ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord4d (
		JNIEnv *env, jobject obj,
		jint target,
		jdouble s,
		jdouble t,
		jdouble r,
		jdouble q)
	{

		if ( disp__glMultiTexCoord4d == NULL ) return;

		disp__glMultiTexCoord4d (
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
   extern void glMultiTexCoord4dv ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord4dv (
		JNIEnv *env, jobject obj,
		jint target,
		jdoubleArray v)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glMultiTexCoord4dv == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord4dv (
			(GLenum) target,
			(const GLdouble *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4f ( GLenum target , GLfloat s , GLfloat t , GLfloat r , GLfloat q ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord4f (
		JNIEnv *env, jobject obj,
		jint target,
		jfloat s,
		jfloat t,
		jfloat r,
		jfloat q)
	{

		if ( disp__glMultiTexCoord4f == NULL ) return;

		disp__glMultiTexCoord4f (
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
   extern void glMultiTexCoord4fv ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord4fv (
		JNIEnv *env, jobject obj,
		jint target,
		jfloatArray v)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glMultiTexCoord4fv == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord4fv (
			(GLenum) target,
			(const GLfloat *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4i ( GLenum target , GLint s , GLint t , GLint r , GLint q ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord4i (
		JNIEnv *env, jobject obj,
		jint target,
		jint s,
		jint t,
		jint r,
		jint q)
	{

		if ( disp__glMultiTexCoord4i == NULL ) return;

		disp__glMultiTexCoord4i (
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
   extern void glMultiTexCoord4iv ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord4iv (
		JNIEnv *env, jobject obj,
		jint target,
		jintArray v)
	{
		jint *ptr1 = NULL;

		if ( disp__glMultiTexCoord4iv == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord4iv (
			(GLenum) target,
			(const GLint *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4s ( GLenum target , GLshort s , GLshort t , GLshort r , GLshort q ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord4s (
		JNIEnv *env, jobject obj,
		jint target,
		jshort s,
		jshort t,
		jshort r,
		jshort q)
	{

		if ( disp__glMultiTexCoord4s == NULL ) return;

		disp__glMultiTexCoord4s (
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
   extern void glMultiTexCoord4sv ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiTexCoord4sv (
		JNIEnv *env, jobject obj,
		jint target,
		jshortArray v)
	{
		jshort *ptr1 = NULL;

		if ( disp__glMultiTexCoord4sv == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord4sv (
			(GLenum) target,
			(const GLshort *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadTransposeMatrixd ( const GLdouble m [ 16 ] ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLoadTransposeMatrixd (
		JNIEnv *env, jobject obj,
		jdoubleArray m)
	{
		jdouble *ptr0 = NULL;

		if ( disp__glLoadTransposeMatrixd == NULL ) return;

		if(m!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, m, 0);
		}
		disp__glLoadTransposeMatrixd (
			(const GLdouble *) ptr0
		);

		if(m!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  m, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadTransposeMatrixf ( const GLfloat m [ 16 ] ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLoadTransposeMatrixf (
		JNIEnv *env, jobject obj,
		jfloatArray m)
	{
		jfloat *ptr0 = NULL;

		if ( disp__glLoadTransposeMatrixf == NULL ) return;

		if(m!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, m, 0);
		}
		disp__glLoadTransposeMatrixf (
			(const GLfloat *) ptr0
		);

		if(m!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  m, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultTransposeMatrixd ( const GLdouble m [ 16 ] ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultTransposeMatrixd (
		JNIEnv *env, jobject obj,
		jdoubleArray m)
	{
		jdouble *ptr0 = NULL;

		if ( disp__glMultTransposeMatrixd == NULL ) return;

		if(m!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, m, 0);
		}
		disp__glMultTransposeMatrixd (
			(const GLdouble *) ptr0
		);

		if(m!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  m, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultTransposeMatrixf ( const GLfloat m [ 16 ] ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultTransposeMatrixf (
		JNIEnv *env, jobject obj,
		jfloatArray m)
	{
		jfloat *ptr0 = NULL;

		if ( disp__glMultTransposeMatrixf == NULL ) return;

		if(m!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, m, 0);
		}
		disp__glMultTransposeMatrixf (
			(const GLfloat *) ptr0
		);

		if(m!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  m, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleCoverage ( GLclampf value , GLboolean invert ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSampleCoverage (
		JNIEnv *env, jobject obj,
		jfloat value,
		jboolean invert)
	{

		if ( disp__glSampleCoverage == NULL ) return;

		disp__glSampleCoverage (
			(GLclampf) value,
			(GLboolean) invert
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSamplePass ( GLenum pass ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSamplePass (
		JNIEnv *env, jobject obj,
		jint pass)
	{

		if ( disp__glSamplePass == NULL ) return;

		disp__glSamplePass (
			(GLenum) pass
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

		if ( disp__glActiveTextureARB == NULL ) return;

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

		if ( disp__glClientActiveTextureARB == NULL ) return;

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

		if ( disp__glMultiTexCoord1dARB == NULL ) return;

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

		if ( disp__glMultiTexCoord1dvARB == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord1dvARB (
			(GLenum) target,
			(const GLdouble *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
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

		if ( disp__glMultiTexCoord1fARB == NULL ) return;

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

		if ( disp__glMultiTexCoord1fvARB == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord1fvARB (
			(GLenum) target,
			(const GLfloat *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
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

		if ( disp__glMultiTexCoord1iARB == NULL ) return;

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

		if ( disp__glMultiTexCoord1ivARB == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord1ivARB (
			(GLenum) target,
			(const GLint *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
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

		if ( disp__glMultiTexCoord1sARB == NULL ) return;

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

		if ( disp__glMultiTexCoord1svARB == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord1svARB (
			(GLenum) target,
			(const GLshort *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
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

		if ( disp__glMultiTexCoord2dARB == NULL ) return;

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

		if ( disp__glMultiTexCoord2dvARB == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord2dvARB (
			(GLenum) target,
			(const GLdouble *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
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

		if ( disp__glMultiTexCoord2fARB == NULL ) return;

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

		if ( disp__glMultiTexCoord2fvARB == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord2fvARB (
			(GLenum) target,
			(const GLfloat *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
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

		if ( disp__glMultiTexCoord2iARB == NULL ) return;

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

		if ( disp__glMultiTexCoord2ivARB == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord2ivARB (
			(GLenum) target,
			(const GLint *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
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

		if ( disp__glMultiTexCoord2sARB == NULL ) return;

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

		if ( disp__glMultiTexCoord2svARB == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord2svARB (
			(GLenum) target,
			(const GLshort *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
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

		if ( disp__glMultiTexCoord3dARB == NULL ) return;

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

		if ( disp__glMultiTexCoord3dvARB == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord3dvARB (
			(GLenum) target,
			(const GLdouble *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
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

		if ( disp__glMultiTexCoord3fARB == NULL ) return;

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

		if ( disp__glMultiTexCoord3fvARB == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord3fvARB (
			(GLenum) target,
			(const GLfloat *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
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

		if ( disp__glMultiTexCoord3iARB == NULL ) return;

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

		if ( disp__glMultiTexCoord3ivARB == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord3ivARB (
			(GLenum) target,
			(const GLint *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
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

		if ( disp__glMultiTexCoord3sARB == NULL ) return;

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

		if ( disp__glMultiTexCoord3svARB == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord3svARB (
			(GLenum) target,
			(const GLshort *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
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

		if ( disp__glMultiTexCoord4dARB == NULL ) return;

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

		if ( disp__glMultiTexCoord4dvARB == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord4dvARB (
			(GLenum) target,
			(const GLdouble *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
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

		if ( disp__glMultiTexCoord4fARB == NULL ) return;

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

		if ( disp__glMultiTexCoord4fvARB == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord4fvARB (
			(GLenum) target,
			(const GLfloat *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
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

		if ( disp__glMultiTexCoord4iARB == NULL ) return;

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

		if ( disp__glMultiTexCoord4ivARB == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord4ivARB (
			(GLenum) target,
			(const GLint *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
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

		if ( disp__glMultiTexCoord4sARB == NULL ) return;

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

		if ( disp__glMultiTexCoord4svARB == NULL ) return;

		if(v!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, v, 0);
		}
		disp__glMultiTexCoord4svARB (
			(GLenum) target,
			(const GLshort *) ptr1
		);

		if(v!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  v, ptr1, JNI_ABORT);
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

		if ( disp__glBlendColorEXT == NULL ) return;

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

		if ( disp__glPolygonOffsetEXT == NULL ) return;

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

		if ( disp__glTexImage3DEXT == NULL ) return;

		if(pixels!=NULL)
		{
			ptr9 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr9, JNI_ABORT);
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

		if ( disp__glTexImage3DEXT == NULL ) return;

		if(pixels!=NULL)
		{
			ptr9 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr9, JNI_ABORT);
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

		if ( disp__glTexImage3DEXT == NULL ) return;

		if(pixels!=NULL)
		{
			ptr9 = (jint *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr9, JNI_ABORT);
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

		if ( disp__glTexImage3DEXT == NULL ) return;

		if(pixels!=NULL)
		{
			ptr9 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr9, JNI_ABORT);
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

		if ( disp__glTexImage3DEXT == NULL ) return;

		if(pixels!=NULL)
		{
			ptr9 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr9, JNI_ABORT);
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

		if ( disp__glTexImage3DEXT == NULL ) return;

		if(pixels!=NULL)
		{
			ptr9 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr9, JNI_ABORT);
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

		if ( disp__glTexImage3DEXT == NULL ) return;

		if(pixels!=NULL)
		{
			ptr9 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr9, JNI_ABORT);
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

		if ( disp__glTexSubImage3DEXT == NULL ) return;

		if(pixels!=NULL)
		{
			ptr10 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr10, JNI_ABORT);
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

		if ( disp__glTexSubImage3DEXT == NULL ) return;

		if(pixels!=NULL)
		{
			ptr10 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr10, JNI_ABORT);
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

		if ( disp__glTexSubImage3DEXT == NULL ) return;

		if(pixels!=NULL)
		{
			ptr10 = (jint *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr10, JNI_ABORT);
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

		if ( disp__glTexSubImage3DEXT == NULL ) return;

		if(pixels!=NULL)
		{
			ptr10 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr10, JNI_ABORT);
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

		if ( disp__glTexSubImage3DEXT == NULL ) return;

		if(pixels!=NULL)
		{
			ptr10 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr10, JNI_ABORT);
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

		if ( disp__glTexSubImage3DEXT == NULL ) return;

		if(pixels!=NULL)
		{
			ptr10 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr10, JNI_ABORT);
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

		if ( disp__glTexSubImage3DEXT == NULL ) return;

		if(pixels!=NULL)
		{
			ptr10 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, pixels, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  pixels, ptr10, JNI_ABORT);
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

		if ( disp__glCopyTexSubImage3DEXT == NULL ) return;

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

		if ( disp__glGenTexturesEXT == NULL ) return;

		if(textures!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, textures, &isCopiedArray1);
		}
		disp__glGenTexturesEXT (
			(GLsizei) n,
			(GLuint *) ptr1
		);

		if(textures!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  textures, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glDeleteTexturesEXT == NULL ) return;

		if(textures!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, textures, 0);
		}
		disp__glDeleteTexturesEXT (
			(GLsizei) n,
			(const GLuint *) ptr1
		);

		if(textures!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  textures, ptr1, JNI_ABORT);
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

		if ( disp__glBindTextureEXT == NULL ) return;

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

		if ( disp__glPrioritizeTexturesEXT == NULL ) return;

		if(textures!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, textures, 0);
		}
		if(priorities!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, priorities, 0);
		}
		disp__glPrioritizeTexturesEXT (
			(GLsizei) n,
			(const GLuint *) ptr1,
			(const GLclampf *) ptr2
		);

		if(textures!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  textures, ptr1, JNI_ABORT);
		}
		if(priorities!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  priorities, ptr2, JNI_ABORT);
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

		if ( disp__glAreTexturesResidentEXT == NULL ) return 0;

		if(textures!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, textures, 0);
		}
		if(residences!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, residences, &isCopiedArray2);
		}
		ret = (jboolean) disp__glAreTexturesResidentEXT (
			(GLsizei) n,
			(const GLuint *) ptr1,
			(GLboolean *) ptr2
		);

		if(textures!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  textures, ptr1, JNI_ABORT);
		}
		if(residences!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  residences, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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


		if ( disp__glIsTextureEXT == NULL ) return 0;

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

		if ( disp__glVertexPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glVertexPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glVertexPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glVertexPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glVertexPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glVertexPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glVertexPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glNormalPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glNormalPointerEXT (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glNormalPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glNormalPointerEXT (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glNormalPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glNormalPointerEXT (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glNormalPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glNormalPointerEXT (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glNormalPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glNormalPointerEXT (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glNormalPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glNormalPointerEXT (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glNormalPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glNormalPointerEXT (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glColorPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glColorPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glColorPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glColorPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glColorPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glColorPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glColorPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glIndexPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glIndexPointerEXT (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glIndexPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glIndexPointerEXT (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glIndexPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glIndexPointerEXT (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glIndexPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glIndexPointerEXT (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glIndexPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glIndexPointerEXT (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glIndexPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glIndexPointerEXT (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glIndexPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glIndexPointerEXT (
			(GLenum) type,
			(GLsizei) stride,
			(GLsizei) count,
			(const GLvoid *) ptr3
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr3, JNI_ABORT);
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

		if ( disp__glTexCoordPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glTexCoordPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glTexCoordPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glTexCoordPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glTexCoordPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glTexCoordPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glTexCoordPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr4 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr4, JNI_ABORT);
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

		if ( disp__glEdgeFlagPointerEXT == NULL ) return;

		if(ptr!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, ptr, 0);
		}
		disp__glEdgeFlagPointerEXT (
			(GLsizei) stride,
			(GLsizei) count,
			(const GLboolean *) ptr2
		);

		if(ptr!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  ptr, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPointervEXT ( GLenum pname , GLvoid * * params ) ;
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

		if ( disp__glGetPointervEXT == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetPointervEXT (
			(GLenum) pname,
			(GLvoid **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetPointervEXT == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetPointervEXT (
			(GLenum) pname,
			(GLvoid **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetPointervEXT == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetPointervEXT (
			(GLenum) pname,
			(GLvoid **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetPointervEXT == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetPointervEXT (
			(GLenum) pname,
			(GLvoid **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetPointervEXT == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetPointervEXT (
			(GLenum) pname,
			(GLvoid **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetPointervEXT == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetPointervEXT (
			(GLenum) pname,
			(GLvoid **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetPointervEXT == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray1);
		}
		disp__glGetPointervEXT (
			(GLenum) pname,
			(GLvoid **) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glArrayElementEXT == NULL ) return;

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

		if ( disp__glDrawArraysEXT == NULL ) return;

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

		if ( disp__glBlendEquationEXT == NULL ) return;

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

		if ( disp__glPointParameterfEXT == NULL ) return;

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

		if ( disp__glPointParameterfvEXT == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glPointParameterfvEXT (
			(GLenum) pname,
			(const GLfloat *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfSGIS ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPointParameterfSGIS (
		JNIEnv *env, jobject obj,
		jint pname,
		jfloat param)
	{

		if ( disp__glPointParameterfSGIS == NULL ) return;

		disp__glPointParameterfSGIS (
			(GLenum) pname,
			(GLfloat) param
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfvSGIS ( GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPointParameterfvSGIS (
		JNIEnv *env, jobject obj,
		jint pname,
		jfloatArray params)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glPointParameterfvSGIS == NULL ) return;

		if(params!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, 0);
		}
		disp__glPointParameterfvSGIS (
			(GLenum) pname,
			(const GLfloat *) ptr1
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr1, JNI_ABORT);
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

		if ( disp__glColorTableEXT == NULL ) return;

		if(table!=NULL)
		{
			ptr5 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, table, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr5, JNI_ABORT);
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

		if ( disp__glColorTableEXT == NULL ) return;

		if(table!=NULL)
		{
			ptr5 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, table, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr5, JNI_ABORT);
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

		if ( disp__glColorTableEXT == NULL ) return;

		if(table!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, table, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr5, JNI_ABORT);
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

		if ( disp__glColorTableEXT == NULL ) return;

		if(table!=NULL)
		{
			ptr5 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, table, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr5, JNI_ABORT);
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

		if ( disp__glColorTableEXT == NULL ) return;

		if(table!=NULL)
		{
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, table, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr5, JNI_ABORT);
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

		if ( disp__glColorTableEXT == NULL ) return;

		if(table!=NULL)
		{
			ptr5 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, table, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr5, JNI_ABORT);
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

		if ( disp__glColorTableEXT == NULL ) return;

		if(table!=NULL)
		{
			ptr5 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, table, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr5, JNI_ABORT);
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

		if ( disp__glColorSubTableEXT == NULL ) return;

		if(data!=NULL)
		{
			ptr5 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		if ( disp__glColorSubTableEXT == NULL ) return;

		if(data!=NULL)
		{
			ptr5 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		if ( disp__glColorSubTableEXT == NULL ) return;

		if(data!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		if ( disp__glColorSubTableEXT == NULL ) return;

		if(data!=NULL)
		{
			ptr5 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		if ( disp__glColorSubTableEXT == NULL ) return;

		if(data!=NULL)
		{
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		if ( disp__glColorSubTableEXT == NULL ) return;

		if(data!=NULL)
		{
			ptr5 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		if ( disp__glColorSubTableEXT == NULL ) return;

		if(data!=NULL)
		{
			ptr5 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, 0);
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
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr5, JNI_ABORT);
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

		if ( disp__glGetColorTableEXT == NULL ) return;

		if(table!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, table, &isCopiedArray3);
		}
		disp__glGetColorTableEXT (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetColorTableEXT == NULL ) return;

		if(table!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, table, &isCopiedArray3);
		}
		disp__glGetColorTableEXT (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetColorTableEXT == NULL ) return;

		if(table!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, table, &isCopiedArray3);
		}
		disp__glGetColorTableEXT (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetColorTableEXT == NULL ) return;

		if(table!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, table, &isCopiedArray3);
		}
		disp__glGetColorTableEXT (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetColorTableEXT == NULL ) return;

		if(table!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, table, &isCopiedArray3);
		}
		disp__glGetColorTableEXT (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetColorTableEXT == NULL ) return;

		if(table!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, table, &isCopiedArray3);
		}
		disp__glGetColorTableEXT (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetColorTableEXT == NULL ) return;

		if(table!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, table, &isCopiedArray3);
		}
		disp__glGetColorTableEXT (
			(GLenum) target,
			(GLenum) format,
			(GLenum) type,
			(GLvoid *) ptr3
		);

		if(table!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  table, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetColorTableParameterfvEXT == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetColorTableParameterfvEXT (
			(GLenum) target,
			(GLenum) pname,
			(GLfloat *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glGetColorTableParameterivEXT == NULL ) return;

		if(params!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, params, &isCopiedArray2);
		}
		disp__glGetColorTableParameterivEXT (
			(GLenum) target,
			(GLenum) pname,
			(GLint *) ptr2
		);

		if(params!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  params, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
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

		if ( disp__glLockArraysEXT == NULL ) return;

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

		if ( disp__glUnlockArraysEXT == NULL ) return;

		disp__glUnlockArraysEXT (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadTransposeMatrixfARB ( const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLoadTransposeMatrixfARB (
		JNIEnv *env, jobject obj,
		jfloatArray arg0)
	{
		jfloat *ptr0 = NULL;

		if ( disp__glLoadTransposeMatrixfARB == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glLoadTransposeMatrixfARB (
			(const GLfloat *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadTransposeMatrixdARB ( const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLoadTransposeMatrixdARB (
		JNIEnv *env, jobject obj,
		jdoubleArray arg0)
	{
		jdouble *ptr0 = NULL;

		if ( disp__glLoadTransposeMatrixdARB == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glLoadTransposeMatrixdARB (
			(const GLdouble *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultTransposeMatrixfARB ( const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultTransposeMatrixfARB (
		JNIEnv *env, jobject obj,
		jfloatArray arg0)
	{
		jfloat *ptr0 = NULL;

		if ( disp__glMultTransposeMatrixfARB == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glMultTransposeMatrixfARB (
			(const GLfloat *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultTransposeMatrixdARB ( const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultTransposeMatrixdARB (
		JNIEnv *env, jobject obj,
		jdoubleArray arg0)
	{
		jdouble *ptr0 = NULL;

		if ( disp__glMultTransposeMatrixdARB == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glMultTransposeMatrixdARB (
			(const GLdouble *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleCoverageARB ( GLclampf , GLboolean ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSampleCoverageARB (
		JNIEnv *env, jobject obj,
		jfloat arg0,
		jboolean arg1)
	{

		if ( disp__glSampleCoverageARB == NULL ) return;

		disp__glSampleCoverageARB (
			(GLclampf) arg0,
			(GLboolean) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage3DARB ( GLenum , GLint , GLenum , GLsizei , GLsizei , GLsizei , GLint , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage3DARB__IIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jbyteArray arg8)
	{
		jbyte *ptr8 = NULL;

		if ( disp__glCompressedTexImage3DARB == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glCompressedTexImage3DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLint) arg6,
			(GLsizei) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage3DARB__IIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jshortArray arg8)
	{
		jshort *ptr8 = NULL;

		if ( disp__glCompressedTexImage3DARB == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glCompressedTexImage3DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLint) arg6,
			(GLsizei) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage3DARB__IIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jintArray arg8)
	{
		jint *ptr8 = NULL;

		if ( disp__glCompressedTexImage3DARB == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glCompressedTexImage3DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLint) arg6,
			(GLsizei) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage3DARB__IIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jfloatArray arg8)
	{
		jfloat *ptr8 = NULL;

		if ( disp__glCompressedTexImage3DARB == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glCompressedTexImage3DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLint) arg6,
			(GLsizei) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage3DARB__IIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jdoubleArray arg8)
	{
		jdouble *ptr8 = NULL;

		if ( disp__glCompressedTexImage3DARB == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glCompressedTexImage3DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLint) arg6,
			(GLsizei) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage3DARB__IIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jbooleanArray arg8)
	{
		jboolean *ptr8 = NULL;

		if ( disp__glCompressedTexImage3DARB == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glCompressedTexImage3DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLint) arg6,
			(GLsizei) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage3DARB__IIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jlongArray arg8)
	{
		jlong *ptr8 = NULL;

		if ( disp__glCompressedTexImage3DARB == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glCompressedTexImage3DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLint) arg6,
			(GLsizei) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage2DARB ( GLenum , GLint , GLenum , GLsizei , GLsizei , GLint , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage2DARB__IIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jbyteArray arg7)
	{
		jbyte *ptr7 = NULL;

		if ( disp__glCompressedTexImage2DARB == NULL ) return;

		if(arg7!=NULL)
		{
			ptr7 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg7, 0);
		}
		disp__glCompressedTexImage2DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLint) arg5,
			(GLsizei) arg6,
			(const GLvoid *) ptr7
		);

		if(arg7!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg7, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage2DARB__IIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jshortArray arg7)
	{
		jshort *ptr7 = NULL;

		if ( disp__glCompressedTexImage2DARB == NULL ) return;

		if(arg7!=NULL)
		{
			ptr7 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg7, 0);
		}
		disp__glCompressedTexImage2DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLint) arg5,
			(GLsizei) arg6,
			(const GLvoid *) ptr7
		);

		if(arg7!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg7, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage2DARB__IIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jintArray arg7)
	{
		jint *ptr7 = NULL;

		if ( disp__glCompressedTexImage2DARB == NULL ) return;

		if(arg7!=NULL)
		{
			ptr7 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg7, 0);
		}
		disp__glCompressedTexImage2DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLint) arg5,
			(GLsizei) arg6,
			(const GLvoid *) ptr7
		);

		if(arg7!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg7, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage2DARB__IIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jfloatArray arg7)
	{
		jfloat *ptr7 = NULL;

		if ( disp__glCompressedTexImage2DARB == NULL ) return;

		if(arg7!=NULL)
		{
			ptr7 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg7, 0);
		}
		disp__glCompressedTexImage2DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLint) arg5,
			(GLsizei) arg6,
			(const GLvoid *) ptr7
		);

		if(arg7!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg7, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage2DARB__IIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jdoubleArray arg7)
	{
		jdouble *ptr7 = NULL;

		if ( disp__glCompressedTexImage2DARB == NULL ) return;

		if(arg7!=NULL)
		{
			ptr7 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg7, 0);
		}
		disp__glCompressedTexImage2DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLint) arg5,
			(GLsizei) arg6,
			(const GLvoid *) ptr7
		);

		if(arg7!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg7, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage2DARB__IIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jbooleanArray arg7)
	{
		jboolean *ptr7 = NULL;

		if ( disp__glCompressedTexImage2DARB == NULL ) return;

		if(arg7!=NULL)
		{
			ptr7 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg7, 0);
		}
		disp__glCompressedTexImage2DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLint) arg5,
			(GLsizei) arg6,
			(const GLvoid *) ptr7
		);

		if(arg7!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg7, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage2DARB__IIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jlongArray arg7)
	{
		jlong *ptr7 = NULL;

		if ( disp__glCompressedTexImage2DARB == NULL ) return;

		if(arg7!=NULL)
		{
			ptr7 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg7, 0);
		}
		disp__glCompressedTexImage2DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLint) arg5,
			(GLsizei) arg6,
			(const GLvoid *) ptr7
		);

		if(arg7!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg7, ptr7, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage1DARB ( GLenum , GLint , GLenum , GLsizei , GLint , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage1DARB__IIIIII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jbyteArray arg6)
	{
		jbyte *ptr6 = NULL;

		if ( disp__glCompressedTexImage1DARB == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glCompressedTexImage1DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLint) arg4,
			(GLsizei) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage1DARB__IIIIII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jshortArray arg6)
	{
		jshort *ptr6 = NULL;

		if ( disp__glCompressedTexImage1DARB == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glCompressedTexImage1DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLint) arg4,
			(GLsizei) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage1DARB__IIIIII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jintArray arg6)
	{
		jint *ptr6 = NULL;

		if ( disp__glCompressedTexImage1DARB == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glCompressedTexImage1DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLint) arg4,
			(GLsizei) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage1DARB__IIIIII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jfloatArray arg6)
	{
		jfloat *ptr6 = NULL;

		if ( disp__glCompressedTexImage1DARB == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glCompressedTexImage1DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLint) arg4,
			(GLsizei) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage1DARB__IIIIII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jdoubleArray arg6)
	{
		jdouble *ptr6 = NULL;

		if ( disp__glCompressedTexImage1DARB == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glCompressedTexImage1DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLint) arg4,
			(GLsizei) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage1DARB__IIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jbooleanArray arg6)
	{
		jboolean *ptr6 = NULL;

		if ( disp__glCompressedTexImage1DARB == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glCompressedTexImage1DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLint) arg4,
			(GLsizei) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexImage1DARB__IIIIII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jlongArray arg6)
	{
		jlong *ptr6 = NULL;

		if ( disp__glCompressedTexImage1DARB == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glCompressedTexImage1DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLint) arg4,
			(GLsizei) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage3DARB ( GLenum , GLint , GLint , GLint , GLint , GLsizei , GLsizei , GLsizei , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage3DARB__IIIIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jbyteArray arg10)
	{
		jbyte *ptr10 = NULL;

		if ( disp__glCompressedTexSubImage3DARB == NULL ) return;

		if(arg10!=NULL)
		{
			ptr10 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg10, 0);
		}
		disp__glCompressedTexSubImage3DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLsizei) arg5,
			(GLsizei) arg6,
			(GLsizei) arg7,
			(GLenum) arg8,
			(GLsizei) arg9,
			(const GLvoid *) ptr10
		);

		if(arg10!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg10, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage3DARB__IIIIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jshortArray arg10)
	{
		jshort *ptr10 = NULL;

		if ( disp__glCompressedTexSubImage3DARB == NULL ) return;

		if(arg10!=NULL)
		{
			ptr10 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg10, 0);
		}
		disp__glCompressedTexSubImage3DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLsizei) arg5,
			(GLsizei) arg6,
			(GLsizei) arg7,
			(GLenum) arg8,
			(GLsizei) arg9,
			(const GLvoid *) ptr10
		);

		if(arg10!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg10, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage3DARB__IIIIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jintArray arg10)
	{
		jint *ptr10 = NULL;

		if ( disp__glCompressedTexSubImage3DARB == NULL ) return;

		if(arg10!=NULL)
		{
			ptr10 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg10, 0);
		}
		disp__glCompressedTexSubImage3DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLsizei) arg5,
			(GLsizei) arg6,
			(GLsizei) arg7,
			(GLenum) arg8,
			(GLsizei) arg9,
			(const GLvoid *) ptr10
		);

		if(arg10!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg10, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage3DARB__IIIIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jfloatArray arg10)
	{
		jfloat *ptr10 = NULL;

		if ( disp__glCompressedTexSubImage3DARB == NULL ) return;

		if(arg10!=NULL)
		{
			ptr10 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg10, 0);
		}
		disp__glCompressedTexSubImage3DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLsizei) arg5,
			(GLsizei) arg6,
			(GLsizei) arg7,
			(GLenum) arg8,
			(GLsizei) arg9,
			(const GLvoid *) ptr10
		);

		if(arg10!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg10, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage3DARB__IIIIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jdoubleArray arg10)
	{
		jdouble *ptr10 = NULL;

		if ( disp__glCompressedTexSubImage3DARB == NULL ) return;

		if(arg10!=NULL)
		{
			ptr10 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg10, 0);
		}
		disp__glCompressedTexSubImage3DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLsizei) arg5,
			(GLsizei) arg6,
			(GLsizei) arg7,
			(GLenum) arg8,
			(GLsizei) arg9,
			(const GLvoid *) ptr10
		);

		if(arg10!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg10, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage3DARB__IIIIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jbooleanArray arg10)
	{
		jboolean *ptr10 = NULL;

		if ( disp__glCompressedTexSubImage3DARB == NULL ) return;

		if(arg10!=NULL)
		{
			ptr10 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg10, 0);
		}
		disp__glCompressedTexSubImage3DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLsizei) arg5,
			(GLsizei) arg6,
			(GLsizei) arg7,
			(GLenum) arg8,
			(GLsizei) arg9,
			(const GLvoid *) ptr10
		);

		if(arg10!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg10, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage3DARB__IIIIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jlongArray arg10)
	{
		jlong *ptr10 = NULL;

		if ( disp__glCompressedTexSubImage3DARB == NULL ) return;

		if(arg10!=NULL)
		{
			ptr10 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg10, 0);
		}
		disp__glCompressedTexSubImage3DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLsizei) arg5,
			(GLsizei) arg6,
			(GLsizei) arg7,
			(GLenum) arg8,
			(GLsizei) arg9,
			(const GLvoid *) ptr10
		);

		if(arg10!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg10, ptr10, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage2DARB ( GLenum , GLint , GLint , GLint , GLsizei , GLsizei , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage2DARB__IIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jbyteArray arg8)
	{
		jbyte *ptr8 = NULL;

		if ( disp__glCompressedTexSubImage2DARB == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glCompressedTexSubImage2DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLenum) arg6,
			(GLsizei) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage2DARB__IIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jshortArray arg8)
	{
		jshort *ptr8 = NULL;

		if ( disp__glCompressedTexSubImage2DARB == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glCompressedTexSubImage2DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLenum) arg6,
			(GLsizei) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage2DARB__IIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jintArray arg8)
	{
		jint *ptr8 = NULL;

		if ( disp__glCompressedTexSubImage2DARB == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glCompressedTexSubImage2DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLenum) arg6,
			(GLsizei) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage2DARB__IIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jfloatArray arg8)
	{
		jfloat *ptr8 = NULL;

		if ( disp__glCompressedTexSubImage2DARB == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glCompressedTexSubImage2DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLenum) arg6,
			(GLsizei) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage2DARB__IIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jdoubleArray arg8)
	{
		jdouble *ptr8 = NULL;

		if ( disp__glCompressedTexSubImage2DARB == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glCompressedTexSubImage2DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLenum) arg6,
			(GLsizei) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage2DARB__IIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jbooleanArray arg8)
	{
		jboolean *ptr8 = NULL;

		if ( disp__glCompressedTexSubImage2DARB == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glCompressedTexSubImage2DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLenum) arg6,
			(GLsizei) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage2DARB__IIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jlongArray arg8)
	{
		jlong *ptr8 = NULL;

		if ( disp__glCompressedTexSubImage2DARB == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glCompressedTexSubImage2DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLenum) arg6,
			(GLsizei) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage1DARB ( GLenum , GLint , GLint , GLsizei , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage1DARB__IIIIII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jbyteArray arg6)
	{
		jbyte *ptr6 = NULL;

		if ( disp__glCompressedTexSubImage1DARB == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glCompressedTexSubImage1DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLsizei) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage1DARB__IIIIII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jshortArray arg6)
	{
		jshort *ptr6 = NULL;

		if ( disp__glCompressedTexSubImage1DARB == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glCompressedTexSubImage1DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLsizei) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage1DARB__IIIIII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jintArray arg6)
	{
		jint *ptr6 = NULL;

		if ( disp__glCompressedTexSubImage1DARB == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glCompressedTexSubImage1DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLsizei) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage1DARB__IIIIII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jfloatArray arg6)
	{
		jfloat *ptr6 = NULL;

		if ( disp__glCompressedTexSubImage1DARB == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glCompressedTexSubImage1DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLsizei) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage1DARB__IIIIII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jdoubleArray arg6)
	{
		jdouble *ptr6 = NULL;

		if ( disp__glCompressedTexSubImage1DARB == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glCompressedTexSubImage1DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLsizei) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage1DARB__IIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jbooleanArray arg6)
	{
		jboolean *ptr6 = NULL;

		if ( disp__glCompressedTexSubImage1DARB == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glCompressedTexSubImage1DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLsizei) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCompressedTexSubImage1DARB__IIIIII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jlongArray arg6)
	{
		jlong *ptr6 = NULL;

		if ( disp__glCompressedTexSubImage1DARB == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glCompressedTexSubImage1DARB (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLsizei) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCompressedTexImageARB ( GLenum , GLint , void * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCompressedTexImageARB__II_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jbyte *ptr2 = NULL;

		if ( disp__glGetCompressedTexImageARB == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetCompressedTexImageARB (
			(GLenum) arg0,
			(GLint) arg1,
			(void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCompressedTexImageARB__II_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jshort *ptr2 = NULL;

		if ( disp__glGetCompressedTexImageARB == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetCompressedTexImageARB (
			(GLenum) arg0,
			(GLint) arg1,
			(void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCompressedTexImageARB__II_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetCompressedTexImageARB == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetCompressedTexImageARB (
			(GLenum) arg0,
			(GLint) arg1,
			(void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCompressedTexImageARB__II_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetCompressedTexImageARB == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetCompressedTexImageARB (
			(GLenum) arg0,
			(GLint) arg1,
			(void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCompressedTexImageARB__II_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;

		if ( disp__glGetCompressedTexImageARB == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetCompressedTexImageARB (
			(GLenum) arg0,
			(GLint) arg1,
			(void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCompressedTexImageARB__II_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jboolean *ptr2 = NULL;

		if ( disp__glGetCompressedTexImageARB == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetCompressedTexImageARB (
			(GLenum) arg0,
			(GLint) arg1,
			(void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCompressedTexImageARB__II_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jlongArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jlong *ptr2 = NULL;

		if ( disp__glGetCompressedTexImageARB == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetCompressedTexImageARB (
			(GLenum) arg0,
			(GLint) arg1,
			(void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightbvARB ( GLint , const GLbyte * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glWeightbvARB (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbyteArray arg1)
	{
		jbyte *ptr1 = NULL;

		if ( disp__glWeightbvARB == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glWeightbvARB (
			(GLint) arg0,
			(const GLbyte *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightsvARB ( GLint , const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glWeightsvARB (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glWeightsvARB == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glWeightsvARB (
			(GLint) arg0,
			(const GLshort *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightivARB ( GLint , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glWeightivARB (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glWeightivARB == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glWeightivARB (
			(GLint) arg0,
			(const GLint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightfvARB ( GLint , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glWeightfvARB (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glWeightfvARB == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glWeightfvARB (
			(GLint) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightdvARB ( GLint , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glWeightdvARB (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdoubleArray arg1)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glWeightdvARB == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glWeightdvARB (
			(GLint) arg0,
			(const GLdouble *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightubvARB ( GLint , const GLubyte * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glWeightubvARB (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbyteArray arg1)
	{
		jbyte *ptr1 = NULL;

		if ( disp__glWeightubvARB == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glWeightubvARB (
			(GLint) arg0,
			(const GLubyte *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightusvARB ( GLint , const GLushort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glWeightusvARB (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glWeightusvARB == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glWeightusvARB (
			(GLint) arg0,
			(const GLushort *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightuivARB ( GLint , const GLuint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glWeightuivARB (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glWeightuivARB == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glWeightuivARB (
			(GLint) arg0,
			(const GLuint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightPointerARB ( GLint , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glWeightPointerARB__III_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbyteArray arg3)
	{
		jbyte *ptr3 = NULL;

		if ( disp__glWeightPointerARB == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glWeightPointerARB (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glWeightPointerARB__III_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jshortArray arg3)
	{
		jshort *ptr3 = NULL;

		if ( disp__glWeightPointerARB == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glWeightPointerARB (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glWeightPointerARB__III_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jintArray arg3)
	{
		jint *ptr3 = NULL;

		if ( disp__glWeightPointerARB == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glWeightPointerARB (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glWeightPointerARB__III_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3)
	{
		jfloat *ptr3 = NULL;

		if ( disp__glWeightPointerARB == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glWeightPointerARB (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glWeightPointerARB__III_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jdoubleArray arg3)
	{
		jdouble *ptr3 = NULL;

		if ( disp__glWeightPointerARB == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glWeightPointerARB (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glWeightPointerARB__III_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbooleanArray arg3)
	{
		jboolean *ptr3 = NULL;

		if ( disp__glWeightPointerARB == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glWeightPointerARB (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glWeightPointerARB__III_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jlongArray arg3)
	{
		jlong *ptr3 = NULL;

		if ( disp__glWeightPointerARB == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glWeightPointerARB (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexBlendARB ( GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexBlendARB (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glVertexBlendARB == NULL ) return;

		disp__glVertexBlendARB (
			(GLint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCurrentPaletteMatrixARB ( GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCurrentPaletteMatrixARB (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glCurrentPaletteMatrixARB == NULL ) return;

		disp__glCurrentPaletteMatrixARB (
			(GLint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixIndexubvARB ( GLint , const GLubyte * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMatrixIndexubvARB (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbyteArray arg1)
	{
		jbyte *ptr1 = NULL;

		if ( disp__glMatrixIndexubvARB == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glMatrixIndexubvARB (
			(GLint) arg0,
			(const GLubyte *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixIndexusvARB ( GLint , const GLushort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMatrixIndexusvARB (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glMatrixIndexusvARB == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glMatrixIndexusvARB (
			(GLint) arg0,
			(const GLushort *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixIndexuivARB ( GLint , const GLuint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMatrixIndexuivARB (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glMatrixIndexuivARB == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glMatrixIndexuivARB (
			(GLint) arg0,
			(const GLuint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixIndexPointerARB ( GLint , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMatrixIndexPointerARB__III_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbyteArray arg3)
	{
		jbyte *ptr3 = NULL;

		if ( disp__glMatrixIndexPointerARB == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMatrixIndexPointerARB (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMatrixIndexPointerARB__III_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jshortArray arg3)
	{
		jshort *ptr3 = NULL;

		if ( disp__glMatrixIndexPointerARB == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMatrixIndexPointerARB (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMatrixIndexPointerARB__III_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jintArray arg3)
	{
		jint *ptr3 = NULL;

		if ( disp__glMatrixIndexPointerARB == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMatrixIndexPointerARB (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMatrixIndexPointerARB__III_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3)
	{
		jfloat *ptr3 = NULL;

		if ( disp__glMatrixIndexPointerARB == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMatrixIndexPointerARB (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMatrixIndexPointerARB__III_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jdoubleArray arg3)
	{
		jdouble *ptr3 = NULL;

		if ( disp__glMatrixIndexPointerARB == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMatrixIndexPointerARB (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMatrixIndexPointerARB__III_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbooleanArray arg3)
	{
		jboolean *ptr3 = NULL;

		if ( disp__glMatrixIndexPointerARB == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMatrixIndexPointerARB (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMatrixIndexPointerARB__III_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jlongArray arg3)
	{
		jlong *ptr3 = NULL;

		if ( disp__glMatrixIndexPointerARB == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMatrixIndexPointerARB (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexFilterFuncSGIS ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexFilterFuncSGIS (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetTexFilterFuncSGIS == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetTexFilterFuncSGIS (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexFilterFuncSGIS ( GLenum , GLenum , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexFilterFuncSGIS (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3)
	{
		jfloat *ptr3 = NULL;

		if ( disp__glTexFilterFuncSGIS == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glTexFilterFuncSGIS (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLfloat *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage1DEXT ( GLenum , GLint , GLint , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage1DEXT__IIIIII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jbyteArray arg6)
	{
		jbyte *ptr6 = NULL;

		if ( disp__glTexSubImage1DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glTexSubImage1DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage1DEXT__IIIIII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jshortArray arg6)
	{
		jshort *ptr6 = NULL;

		if ( disp__glTexSubImage1DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glTexSubImage1DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage1DEXT__IIIIII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jintArray arg6)
	{
		jint *ptr6 = NULL;

		if ( disp__glTexSubImage1DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glTexSubImage1DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage1DEXT__IIIIII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jfloatArray arg6)
	{
		jfloat *ptr6 = NULL;

		if ( disp__glTexSubImage1DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glTexSubImage1DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage1DEXT__IIIIII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jdoubleArray arg6)
	{
		jdouble *ptr6 = NULL;

		if ( disp__glTexSubImage1DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glTexSubImage1DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage1DEXT__IIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jbooleanArray arg6)
	{
		jboolean *ptr6 = NULL;

		if ( disp__glTexSubImage1DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glTexSubImage1DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage1DEXT__IIIIII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jlongArray arg6)
	{
		jlong *ptr6 = NULL;

		if ( disp__glTexSubImage1DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glTexSubImage1DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage2DEXT ( GLenum , GLint , GLint , GLint , GLsizei , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage2DEXT__IIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jbyteArray arg8)
	{
		jbyte *ptr8 = NULL;

		if ( disp__glTexSubImage2DEXT == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glTexSubImage2DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLenum) arg6,
			(GLenum) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage2DEXT__IIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jshortArray arg8)
	{
		jshort *ptr8 = NULL;

		if ( disp__glTexSubImage2DEXT == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glTexSubImage2DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLenum) arg6,
			(GLenum) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage2DEXT__IIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jintArray arg8)
	{
		jint *ptr8 = NULL;

		if ( disp__glTexSubImage2DEXT == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glTexSubImage2DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLenum) arg6,
			(GLenum) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage2DEXT__IIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jfloatArray arg8)
	{
		jfloat *ptr8 = NULL;

		if ( disp__glTexSubImage2DEXT == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glTexSubImage2DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLenum) arg6,
			(GLenum) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage2DEXT__IIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jdoubleArray arg8)
	{
		jdouble *ptr8 = NULL;

		if ( disp__glTexSubImage2DEXT == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glTexSubImage2DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLenum) arg6,
			(GLenum) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage2DEXT__IIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jbooleanArray arg8)
	{
		jboolean *ptr8 = NULL;

		if ( disp__glTexSubImage2DEXT == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glTexSubImage2DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLenum) arg6,
			(GLenum) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage2DEXT__IIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jlongArray arg8)
	{
		jlong *ptr8 = NULL;

		if ( disp__glTexSubImage2DEXT == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glTexSubImage2DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLenum) arg6,
			(GLenum) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexImage1DEXT ( GLenum , GLint , GLenum , GLint , GLint , GLsizei , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyTexImage1DEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6)
	{

		if ( disp__glCopyTexImage1DEXT == NULL ) return;

		disp__glCopyTexImage1DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLsizei) arg5,
			(GLint) arg6
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexImage2DEXT ( GLenum , GLint , GLenum , GLint , GLint , GLsizei , GLsizei , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyTexImage2DEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7)
	{

		if ( disp__glCopyTexImage2DEXT == NULL ) return;

		disp__glCopyTexImage2DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLsizei) arg5,
			(GLsizei) arg6,
			(GLint) arg7
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage1DEXT ( GLenum , GLint , GLint , GLint , GLint , GLsizei ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyTexSubImage1DEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5)
	{

		if ( disp__glCopyTexSubImage1DEXT == NULL ) return;

		disp__glCopyTexSubImage1DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLsizei) arg5
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage2DEXT ( GLenum , GLint , GLint , GLint , GLint , GLint , GLsizei , GLsizei ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyTexSubImage2DEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7)
	{

		if ( disp__glCopyTexSubImage2DEXT == NULL ) return;

		disp__glCopyTexSubImage2DEXT (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLint) arg5,
			(GLsizei) arg6,
			(GLsizei) arg7
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogramEXT ( GLenum , GLboolean , GLenum , GLenum , GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogramEXT__IZII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jboolean arg1,
		jint arg2,
		jint arg3,
		jbyteArray arg4)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jbyte *ptr4 = NULL;

		if ( disp__glGetHistogramEXT == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		disp__glGetHistogramEXT (
			(GLenum) arg0,
			(GLboolean) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogramEXT__IZII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jboolean arg1,
		jint arg2,
		jint arg3,
		jshortArray arg4)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jshort *ptr4 = NULL;

		if ( disp__glGetHistogramEXT == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		disp__glGetHistogramEXT (
			(GLenum) arg0,
			(GLboolean) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogramEXT__IZII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jboolean arg1,
		jint arg2,
		jint arg3,
		jintArray arg4)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jint *ptr4 = NULL;

		if ( disp__glGetHistogramEXT == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		disp__glGetHistogramEXT (
			(GLenum) arg0,
			(GLboolean) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogramEXT__IZII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jboolean arg1,
		jint arg2,
		jint arg3,
		jfloatArray arg4)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;

		if ( disp__glGetHistogramEXT == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		disp__glGetHistogramEXT (
			(GLenum) arg0,
			(GLboolean) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogramEXT__IZII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jboolean arg1,
		jint arg2,
		jint arg3,
		jdoubleArray arg4)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jdouble *ptr4 = NULL;

		if ( disp__glGetHistogramEXT == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		disp__glGetHistogramEXT (
			(GLenum) arg0,
			(GLboolean) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogramEXT__IZII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jboolean arg1,
		jint arg2,
		jint arg3,
		jbooleanArray arg4)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jboolean *ptr4 = NULL;

		if ( disp__glGetHistogramEXT == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		disp__glGetHistogramEXT (
			(GLenum) arg0,
			(GLboolean) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogramEXT__IZII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jboolean arg1,
		jint arg2,
		jint arg3,
		jlongArray arg4)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jlong *ptr4 = NULL;

		if ( disp__glGetHistogramEXT == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		disp__glGetHistogramEXT (
			(GLenum) arg0,
			(GLboolean) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogramParameterfvEXT ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogramParameterfvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetHistogramParameterfvEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetHistogramParameterfvEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogramParameterivEXT ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetHistogramParameterivEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetHistogramParameterivEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetHistogramParameterivEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmaxEXT ( GLenum , GLboolean , GLenum , GLenum , GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmaxEXT__IZII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jboolean arg1,
		jint arg2,
		jint arg3,
		jbyteArray arg4)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jbyte *ptr4 = NULL;

		if ( disp__glGetMinmaxEXT == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		disp__glGetMinmaxEXT (
			(GLenum) arg0,
			(GLboolean) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmaxEXT__IZII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jboolean arg1,
		jint arg2,
		jint arg3,
		jshortArray arg4)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jshort *ptr4 = NULL;

		if ( disp__glGetMinmaxEXT == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		disp__glGetMinmaxEXT (
			(GLenum) arg0,
			(GLboolean) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmaxEXT__IZII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jboolean arg1,
		jint arg2,
		jint arg3,
		jintArray arg4)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jint *ptr4 = NULL;

		if ( disp__glGetMinmaxEXT == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		disp__glGetMinmaxEXT (
			(GLenum) arg0,
			(GLboolean) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmaxEXT__IZII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jboolean arg1,
		jint arg2,
		jint arg3,
		jfloatArray arg4)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;

		if ( disp__glGetMinmaxEXT == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		disp__glGetMinmaxEXT (
			(GLenum) arg0,
			(GLboolean) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmaxEXT__IZII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jboolean arg1,
		jint arg2,
		jint arg3,
		jdoubleArray arg4)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jdouble *ptr4 = NULL;

		if ( disp__glGetMinmaxEXT == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		disp__glGetMinmaxEXT (
			(GLenum) arg0,
			(GLboolean) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmaxEXT__IZII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jboolean arg1,
		jint arg2,
		jint arg3,
		jbooleanArray arg4)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jboolean *ptr4 = NULL;

		if ( disp__glGetMinmaxEXT == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		disp__glGetMinmaxEXT (
			(GLenum) arg0,
			(GLboolean) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmaxEXT__IZII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jboolean arg1,
		jint arg2,
		jint arg3,
		jlongArray arg4)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jlong *ptr4 = NULL;

		if ( disp__glGetMinmaxEXT == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		disp__glGetMinmaxEXT (
			(GLenum) arg0,
			(GLboolean) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmaxParameterfvEXT ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmaxParameterfvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetMinmaxParameterfvEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetMinmaxParameterfvEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmaxParameterivEXT ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMinmaxParameterivEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetMinmaxParameterivEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetMinmaxParameterivEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glHistogramEXT ( GLenum , GLsizei , GLenum , GLboolean ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glHistogramEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jboolean arg3)
	{

		if ( disp__glHistogramEXT == NULL ) return;

		disp__glHistogramEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(GLenum) arg2,
			(GLboolean) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMinmaxEXT ( GLenum , GLenum , GLboolean ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMinmaxEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jboolean arg2)
	{

		if ( disp__glMinmaxEXT == NULL ) return;

		disp__glMinmaxEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLboolean) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glResetHistogramEXT ( GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glResetHistogramEXT (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glResetHistogramEXT == NULL ) return;

		disp__glResetHistogramEXT (
			(GLenum) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glResetMinmaxEXT ( GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glResetMinmaxEXT (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glResetMinmaxEXT == NULL ) return;

		disp__glResetMinmaxEXT (
			(GLenum) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionFilter1DEXT ( GLenum , GLenum , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter1DEXT__IIIII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jbyteArray arg5)
	{
		jbyte *ptr5 = NULL;

		if ( disp__glConvolutionFilter1DEXT == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glConvolutionFilter1DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter1DEXT__IIIII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jshortArray arg5)
	{
		jshort *ptr5 = NULL;

		if ( disp__glConvolutionFilter1DEXT == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glConvolutionFilter1DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter1DEXT__IIIII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jintArray arg5)
	{
		jint *ptr5 = NULL;

		if ( disp__glConvolutionFilter1DEXT == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glConvolutionFilter1DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter1DEXT__IIIII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jfloatArray arg5)
	{
		jfloat *ptr5 = NULL;

		if ( disp__glConvolutionFilter1DEXT == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glConvolutionFilter1DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter1DEXT__IIIII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jdoubleArray arg5)
	{
		jdouble *ptr5 = NULL;

		if ( disp__glConvolutionFilter1DEXT == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glConvolutionFilter1DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter1DEXT__IIIII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jbooleanArray arg5)
	{
		jboolean *ptr5 = NULL;

		if ( disp__glConvolutionFilter1DEXT == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glConvolutionFilter1DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter1DEXT__IIIII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jlongArray arg5)
	{
		jlong *ptr5 = NULL;

		if ( disp__glConvolutionFilter1DEXT == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glConvolutionFilter1DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionFilter2DEXT ( GLenum , GLenum , GLsizei , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter2DEXT__IIIIII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jbyteArray arg6)
	{
		jbyte *ptr6 = NULL;

		if ( disp__glConvolutionFilter2DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glConvolutionFilter2DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter2DEXT__IIIIII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jshortArray arg6)
	{
		jshort *ptr6 = NULL;

		if ( disp__glConvolutionFilter2DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glConvolutionFilter2DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter2DEXT__IIIIII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jintArray arg6)
	{
		jint *ptr6 = NULL;

		if ( disp__glConvolutionFilter2DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glConvolutionFilter2DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter2DEXT__IIIIII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jfloatArray arg6)
	{
		jfloat *ptr6 = NULL;

		if ( disp__glConvolutionFilter2DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glConvolutionFilter2DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter2DEXT__IIIIII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jdoubleArray arg6)
	{
		jdouble *ptr6 = NULL;

		if ( disp__glConvolutionFilter2DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glConvolutionFilter2DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter2DEXT__IIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jbooleanArray arg6)
	{
		jboolean *ptr6 = NULL;

		if ( disp__glConvolutionFilter2DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glConvolutionFilter2DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionFilter2DEXT__IIIIII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jlongArray arg6)
	{
		jlong *ptr6 = NULL;

		if ( disp__glConvolutionFilter2DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		disp__glConvolutionFilter2DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameterfEXT ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionParameterfEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloat arg2)
	{

		if ( disp__glConvolutionParameterfEXT == NULL ) return;

		disp__glConvolutionParameterfEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameterfvEXT ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionParameterfvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glConvolutionParameterfvEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glConvolutionParameterfvEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameteriEXT ( GLenum , GLenum , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionParameteriEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{

		if ( disp__glConvolutionParameteriEXT == NULL ) return;

		disp__glConvolutionParameteriEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameterivEXT ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glConvolutionParameterivEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glConvolutionParameterivEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glConvolutionParameterivEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(const GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyConvolutionFilter1DEXT ( GLenum , GLenum , GLint , GLint , GLsizei ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyConvolutionFilter1DEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4)
	{

		if ( disp__glCopyConvolutionFilter1DEXT == NULL ) return;

		disp__glCopyConvolutionFilter1DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyConvolutionFilter2DEXT ( GLenum , GLenum , GLint , GLint , GLsizei , GLsizei ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyConvolutionFilter2DEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5)
	{

		if ( disp__glCopyConvolutionFilter2DEXT == NULL ) return;

		disp__glCopyConvolutionFilter2DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionFilterEXT ( GLenum , GLenum , GLenum , GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionFilterEXT__III_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbyteArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jbyte *ptr3 = NULL;

		if ( disp__glGetConvolutionFilterEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetConvolutionFilterEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionFilterEXT__III_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jshortArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jshort *ptr3 = NULL;

		if ( disp__glGetConvolutionFilterEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetConvolutionFilterEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionFilterEXT__III_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jintArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;

		if ( disp__glGetConvolutionFilterEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetConvolutionFilterEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionFilterEXT__III_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;

		if ( disp__glGetConvolutionFilterEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetConvolutionFilterEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionFilterEXT__III_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jdoubleArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jdouble *ptr3 = NULL;

		if ( disp__glGetConvolutionFilterEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetConvolutionFilterEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionFilterEXT__III_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbooleanArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jboolean *ptr3 = NULL;

		if ( disp__glGetConvolutionFilterEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetConvolutionFilterEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionFilterEXT__III_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jlongArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jlong *ptr3 = NULL;

		if ( disp__glGetConvolutionFilterEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetConvolutionFilterEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionParameterfvEXT ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionParameterfvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetConvolutionParameterfvEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetConvolutionParameterfvEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionParameterivEXT ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetConvolutionParameterivEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetConvolutionParameterivEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetConvolutionParameterivEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetSeparableFilterEXT ( GLenum , GLenum , GLenum , GLvoid * , GLvoid * , GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetSeparableFilterEXT__III_3B_3B_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbyteArray arg3,
		jbyteArray arg4,
		jbyteArray arg5)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jbyte *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jbyte *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jbyte *ptr5 = NULL;

		if ( disp__glGetSeparableFilterEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		if(arg4!=NULL)
		{
			ptr4 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		if(arg5!=NULL)
		{
			ptr5 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg5, &isCopiedArray5);
		}
		disp__glGetSeparableFilterEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3,
			(GLvoid *) ptr4,
			(GLvoid *) ptr5
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetSeparableFilterEXT__III_3S_3S_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jshortArray arg3,
		jshortArray arg4,
		jshortArray arg5)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jshort *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jshort *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jshort *ptr5 = NULL;

		if ( disp__glGetSeparableFilterEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		if(arg4!=NULL)
		{
			ptr4 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		if(arg5!=NULL)
		{
			ptr5 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg5, &isCopiedArray5);
		}
		disp__glGetSeparableFilterEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3,
			(GLvoid *) ptr4,
			(GLvoid *) ptr5
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetSeparableFilterEXT__III_3I_3I_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jintArray arg3,
		jintArray arg4,
		jintArray arg5)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jint *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jint *ptr5 = NULL;

		if ( disp__glGetSeparableFilterEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		if(arg4!=NULL)
		{
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		if(arg5!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg5, &isCopiedArray5);
		}
		disp__glGetSeparableFilterEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3,
			(GLvoid *) ptr4,
			(GLvoid *) ptr5
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetSeparableFilterEXT__III_3F_3F_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3,
		jfloatArray arg4,
		jfloatArray arg5)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jfloat *ptr5 = NULL;

		if ( disp__glGetSeparableFilterEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		if(arg4!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		if(arg5!=NULL)
		{
			ptr5 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg5, &isCopiedArray5);
		}
		disp__glGetSeparableFilterEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3,
			(GLvoid *) ptr4,
			(GLvoid *) ptr5
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetSeparableFilterEXT__III_3D_3D_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jdoubleArray arg3,
		jdoubleArray arg4,
		jdoubleArray arg5)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jdouble *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jdouble *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jdouble *ptr5 = NULL;

		if ( disp__glGetSeparableFilterEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		if(arg4!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		if(arg5!=NULL)
		{
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg5, &isCopiedArray5);
		}
		disp__glGetSeparableFilterEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3,
			(GLvoid *) ptr4,
			(GLvoid *) ptr5
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetSeparableFilterEXT__III_3Z_3Z_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbooleanArray arg3,
		jbooleanArray arg4,
		jbooleanArray arg5)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jboolean *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jboolean *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jboolean *ptr5 = NULL;

		if ( disp__glGetSeparableFilterEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		if(arg4!=NULL)
		{
			ptr4 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		if(arg5!=NULL)
		{
			ptr5 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg5, &isCopiedArray5);
		}
		disp__glGetSeparableFilterEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3,
			(GLvoid *) ptr4,
			(GLvoid *) ptr5
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetSeparableFilterEXT__III_3J_3J_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jlongArray arg3,
		jlongArray arg4,
		jlongArray arg5)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jlong *ptr3 = NULL;
		jboolean isCopiedArray4 = JNI_FALSE;
		jlong *ptr4 = NULL;
		jboolean isCopiedArray5 = JNI_FALSE;
		jlong *ptr5 = NULL;

		if ( disp__glGetSeparableFilterEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		if(arg4!=NULL)
		{
			ptr4 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		if(arg5!=NULL)
		{
			ptr5 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg5, &isCopiedArray5);
		}
		disp__glGetSeparableFilterEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3,
			(GLvoid *) ptr4,
			(GLvoid *) ptr5
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, (isCopiedArray5 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSeparableFilter2DEXT ( GLenum , GLenum , GLsizei , GLsizei , GLenum , GLenum , const GLvoid * , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSeparableFilter2DEXT__IIIIII_3B_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jbyteArray arg6,
		jbyteArray arg7)
	{
		jbyte *ptr6 = NULL;
		jbyte *ptr7 = NULL;

		if ( disp__glSeparableFilter2DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		if(arg7!=NULL)
		{
			ptr7 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg7, 0);
		}
		disp__glSeparableFilter2DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6,
			(const GLvoid *) ptr7
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
		if(arg7!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg7, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSeparableFilter2DEXT__IIIIII_3S_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jshortArray arg6,
		jshortArray arg7)
	{
		jshort *ptr6 = NULL;
		jshort *ptr7 = NULL;

		if ( disp__glSeparableFilter2DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		if(arg7!=NULL)
		{
			ptr7 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg7, 0);
		}
		disp__glSeparableFilter2DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6,
			(const GLvoid *) ptr7
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
		if(arg7!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg7, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSeparableFilter2DEXT__IIIIII_3I_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jintArray arg6,
		jintArray arg7)
	{
		jint *ptr6 = NULL;
		jint *ptr7 = NULL;

		if ( disp__glSeparableFilter2DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		if(arg7!=NULL)
		{
			ptr7 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg7, 0);
		}
		disp__glSeparableFilter2DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6,
			(const GLvoid *) ptr7
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
		if(arg7!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg7, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSeparableFilter2DEXT__IIIIII_3F_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jfloatArray arg6,
		jfloatArray arg7)
	{
		jfloat *ptr6 = NULL;
		jfloat *ptr7 = NULL;

		if ( disp__glSeparableFilter2DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		if(arg7!=NULL)
		{
			ptr7 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg7, 0);
		}
		disp__glSeparableFilter2DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6,
			(const GLvoid *) ptr7
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
		if(arg7!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg7, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSeparableFilter2DEXT__IIIIII_3D_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jdoubleArray arg6,
		jdoubleArray arg7)
	{
		jdouble *ptr6 = NULL;
		jdouble *ptr7 = NULL;

		if ( disp__glSeparableFilter2DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		if(arg7!=NULL)
		{
			ptr7 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg7, 0);
		}
		disp__glSeparableFilter2DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6,
			(const GLvoid *) ptr7
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
		if(arg7!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg7, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSeparableFilter2DEXT__IIIIII_3Z_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jbooleanArray arg6,
		jbooleanArray arg7)
	{
		jboolean *ptr6 = NULL;
		jboolean *ptr7 = NULL;

		if ( disp__glSeparableFilter2DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		if(arg7!=NULL)
		{
			ptr7 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg7, 0);
		}
		disp__glSeparableFilter2DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6,
			(const GLvoid *) ptr7
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
		if(arg7!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg7, ptr7, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSeparableFilter2DEXT__IIIIII_3J_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jlongArray arg6,
		jlongArray arg7)
	{
		jlong *ptr6 = NULL;
		jlong *ptr7 = NULL;

		if ( disp__glSeparableFilter2DEXT == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg6, 0);
		}
		if(arg7!=NULL)
		{
			ptr7 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg7, 0);
		}
		disp__glSeparableFilter2DEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(const GLvoid *) ptr6,
			(const GLvoid *) ptr7
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, JNI_ABORT);
		}
		if(arg7!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg7, ptr7, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableSGI ( GLenum , GLenum , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableSGI__IIIII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jbyteArray arg5)
	{
		jbyte *ptr5 = NULL;

		if ( disp__glColorTableSGI == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glColorTableSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableSGI__IIIII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jshortArray arg5)
	{
		jshort *ptr5 = NULL;

		if ( disp__glColorTableSGI == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glColorTableSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableSGI__IIIII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jintArray arg5)
	{
		jint *ptr5 = NULL;

		if ( disp__glColorTableSGI == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glColorTableSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableSGI__IIIII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jfloatArray arg5)
	{
		jfloat *ptr5 = NULL;

		if ( disp__glColorTableSGI == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glColorTableSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableSGI__IIIII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jdoubleArray arg5)
	{
		jdouble *ptr5 = NULL;

		if ( disp__glColorTableSGI == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glColorTableSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableSGI__IIIII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jbooleanArray arg5)
	{
		jboolean *ptr5 = NULL;

		if ( disp__glColorTableSGI == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glColorTableSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableSGI__IIIII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jlongArray arg5)
	{
		jlong *ptr5 = NULL;

		if ( disp__glColorTableSGI == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glColorTableSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableParameterfvSGI ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableParameterfvSGI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glColorTableParameterfvSGI == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glColorTableParameterfvSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableParameterivSGI ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorTableParameterivSGI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glColorTableParameterivSGI == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glColorTableParameterivSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(const GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyColorTableSGI ( GLenum , GLenum , GLint , GLint , GLsizei ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyColorTableSGI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4)
	{

		if ( disp__glCopyColorTableSGI == NULL ) return;

		disp__glCopyColorTableSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableSGI ( GLenum , GLenum , GLenum , GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableSGI__III_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbyteArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jbyte *ptr3 = NULL;

		if ( disp__glGetColorTableSGI == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetColorTableSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableSGI__III_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jshortArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jshort *ptr3 = NULL;

		if ( disp__glGetColorTableSGI == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetColorTableSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableSGI__III_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jintArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;

		if ( disp__glGetColorTableSGI == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetColorTableSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableSGI__III_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;

		if ( disp__glGetColorTableSGI == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetColorTableSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableSGI__III_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jdoubleArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jdouble *ptr3 = NULL;

		if ( disp__glGetColorTableSGI == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetColorTableSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableSGI__III_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbooleanArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jboolean *ptr3 = NULL;

		if ( disp__glGetColorTableSGI == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetColorTableSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableSGI__III_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jlongArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jlong *ptr3 = NULL;

		if ( disp__glGetColorTableSGI == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetColorTableSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameterfvSGI ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableParameterfvSGI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetColorTableParameterfvSGI == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetColorTableParameterfvSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameterivSGI ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetColorTableParameterivSGI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetColorTableParameterivSGI == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetColorTableParameterivSGI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenSGIX ( GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelTexGenSGIX (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glPixelTexGenSGIX == NULL ) return;

		disp__glPixelTexGenSGIX (
			(GLenum) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenParameteriSGIS ( GLenum , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelTexGenParameteriSGIS (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{

		if ( disp__glPixelTexGenParameteriSGIS == NULL ) return;

		disp__glPixelTexGenParameteriSGIS (
			(GLenum) arg0,
			(GLint) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenParameterivSGIS ( GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelTexGenParameterivSGIS (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glPixelTexGenParameterivSGIS == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glPixelTexGenParameterivSGIS (
			(GLenum) arg0,
			(const GLint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenParameterfSGIS ( GLenum , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelTexGenParameterfSGIS (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1)
	{

		if ( disp__glPixelTexGenParameterfSGIS == NULL ) return;

		disp__glPixelTexGenParameterfSGIS (
			(GLenum) arg0,
			(GLfloat) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenParameterfvSGIS ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelTexGenParameterfvSGIS (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glPixelTexGenParameterfvSGIS == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glPixelTexGenParameterfvSGIS (
			(GLenum) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelTexGenParameterivSGIS ( GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPixelTexGenParameterivSGIS (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if ( disp__glGetPixelTexGenParameterivSGIS == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, &isCopiedArray1);
		}
		disp__glGetPixelTexGenParameterivSGIS (
			(GLenum) arg0,
			(GLint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelTexGenParameterfvSGIS ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetPixelTexGenParameterfvSGIS (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;

		if ( disp__glGetPixelTexGenParameterfvSGIS == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, &isCopiedArray1);
		}
		disp__glGetPixelTexGenParameterfvSGIS (
			(GLenum) arg0,
			(GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage4DSGIS ( GLenum , GLint , GLenum , GLsizei , GLsizei , GLsizei , GLsizei , GLint , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage4DSGIS__IIIIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jbyteArray arg10)
	{
		jbyte *ptr10 = NULL;

		if ( disp__glTexImage4DSGIS == NULL ) return;

		if(arg10!=NULL)
		{
			ptr10 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg10, 0);
		}
		disp__glTexImage4DSGIS (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLsizei) arg6,
			(GLint) arg7,
			(GLenum) arg8,
			(GLenum) arg9,
			(const GLvoid *) ptr10
		);

		if(arg10!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg10, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage4DSGIS__IIIIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jshortArray arg10)
	{
		jshort *ptr10 = NULL;

		if ( disp__glTexImage4DSGIS == NULL ) return;

		if(arg10!=NULL)
		{
			ptr10 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg10, 0);
		}
		disp__glTexImage4DSGIS (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLsizei) arg6,
			(GLint) arg7,
			(GLenum) arg8,
			(GLenum) arg9,
			(const GLvoid *) ptr10
		);

		if(arg10!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg10, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage4DSGIS__IIIIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jintArray arg10)
	{
		jint *ptr10 = NULL;

		if ( disp__glTexImage4DSGIS == NULL ) return;

		if(arg10!=NULL)
		{
			ptr10 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg10, 0);
		}
		disp__glTexImage4DSGIS (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLsizei) arg6,
			(GLint) arg7,
			(GLenum) arg8,
			(GLenum) arg9,
			(const GLvoid *) ptr10
		);

		if(arg10!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg10, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage4DSGIS__IIIIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jfloatArray arg10)
	{
		jfloat *ptr10 = NULL;

		if ( disp__glTexImage4DSGIS == NULL ) return;

		if(arg10!=NULL)
		{
			ptr10 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg10, 0);
		}
		disp__glTexImage4DSGIS (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLsizei) arg6,
			(GLint) arg7,
			(GLenum) arg8,
			(GLenum) arg9,
			(const GLvoid *) ptr10
		);

		if(arg10!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg10, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage4DSGIS__IIIIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jdoubleArray arg10)
	{
		jdouble *ptr10 = NULL;

		if ( disp__glTexImage4DSGIS == NULL ) return;

		if(arg10!=NULL)
		{
			ptr10 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg10, 0);
		}
		disp__glTexImage4DSGIS (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLsizei) arg6,
			(GLint) arg7,
			(GLenum) arg8,
			(GLenum) arg9,
			(const GLvoid *) ptr10
		);

		if(arg10!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg10, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage4DSGIS__IIIIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jbooleanArray arg10)
	{
		jboolean *ptr10 = NULL;

		if ( disp__glTexImage4DSGIS == NULL ) return;

		if(arg10!=NULL)
		{
			ptr10 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg10, 0);
		}
		disp__glTexImage4DSGIS (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLsizei) arg6,
			(GLint) arg7,
			(GLenum) arg8,
			(GLenum) arg9,
			(const GLvoid *) ptr10
		);

		if(arg10!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg10, ptr10, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexImage4DSGIS__IIIIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jlongArray arg10)
	{
		jlong *ptr10 = NULL;

		if ( disp__glTexImage4DSGIS == NULL ) return;

		if(arg10!=NULL)
		{
			ptr10 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg10, 0);
		}
		disp__glTexImage4DSGIS (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLsizei) arg5,
			(GLsizei) arg6,
			(GLint) arg7,
			(GLenum) arg8,
			(GLenum) arg9,
			(const GLvoid *) ptr10
		);

		if(arg10!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg10, ptr10, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage4DSGIS ( GLenum , GLint , GLint , GLint , GLint , GLint , GLsizei , GLsizei , GLsizei , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage4DSGIS__IIIIIIIIIIII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jint arg10,
		jint arg11,
		jbyteArray arg12)
	{
		jbyte *ptr12 = NULL;

		if ( disp__glTexSubImage4DSGIS == NULL ) return;

		if(arg12!=NULL)
		{
			ptr12 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg12, 0);
		}
		disp__glTexSubImage4DSGIS (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLint) arg5,
			(GLsizei) arg6,
			(GLsizei) arg7,
			(GLsizei) arg8,
			(GLsizei) arg9,
			(GLenum) arg10,
			(GLenum) arg11,
			(const GLvoid *) ptr12
		);

		if(arg12!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg12, ptr12, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage4DSGIS__IIIIIIIIIIII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jint arg10,
		jint arg11,
		jshortArray arg12)
	{
		jshort *ptr12 = NULL;

		if ( disp__glTexSubImage4DSGIS == NULL ) return;

		if(arg12!=NULL)
		{
			ptr12 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg12, 0);
		}
		disp__glTexSubImage4DSGIS (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLint) arg5,
			(GLsizei) arg6,
			(GLsizei) arg7,
			(GLsizei) arg8,
			(GLsizei) arg9,
			(GLenum) arg10,
			(GLenum) arg11,
			(const GLvoid *) ptr12
		);

		if(arg12!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg12, ptr12, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage4DSGIS__IIIIIIIIIIII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jint arg10,
		jint arg11,
		jintArray arg12)
	{
		jint *ptr12 = NULL;

		if ( disp__glTexSubImage4DSGIS == NULL ) return;

		if(arg12!=NULL)
		{
			ptr12 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg12, 0);
		}
		disp__glTexSubImage4DSGIS (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLint) arg5,
			(GLsizei) arg6,
			(GLsizei) arg7,
			(GLsizei) arg8,
			(GLsizei) arg9,
			(GLenum) arg10,
			(GLenum) arg11,
			(const GLvoid *) ptr12
		);

		if(arg12!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg12, ptr12, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage4DSGIS__IIIIIIIIIIII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jint arg10,
		jint arg11,
		jfloatArray arg12)
	{
		jfloat *ptr12 = NULL;

		if ( disp__glTexSubImage4DSGIS == NULL ) return;

		if(arg12!=NULL)
		{
			ptr12 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg12, 0);
		}
		disp__glTexSubImage4DSGIS (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLint) arg5,
			(GLsizei) arg6,
			(GLsizei) arg7,
			(GLsizei) arg8,
			(GLsizei) arg9,
			(GLenum) arg10,
			(GLenum) arg11,
			(const GLvoid *) ptr12
		);

		if(arg12!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg12, ptr12, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage4DSGIS__IIIIIIIIIIII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jint arg10,
		jint arg11,
		jdoubleArray arg12)
	{
		jdouble *ptr12 = NULL;

		if ( disp__glTexSubImage4DSGIS == NULL ) return;

		if(arg12!=NULL)
		{
			ptr12 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg12, 0);
		}
		disp__glTexSubImage4DSGIS (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLint) arg5,
			(GLsizei) arg6,
			(GLsizei) arg7,
			(GLsizei) arg8,
			(GLsizei) arg9,
			(GLenum) arg10,
			(GLenum) arg11,
			(const GLvoid *) ptr12
		);

		if(arg12!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg12, ptr12, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage4DSGIS__IIIIIIIIIIII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jint arg10,
		jint arg11,
		jbooleanArray arg12)
	{
		jboolean *ptr12 = NULL;

		if ( disp__glTexSubImage4DSGIS == NULL ) return;

		if(arg12!=NULL)
		{
			ptr12 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg12, 0);
		}
		disp__glTexSubImage4DSGIS (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLint) arg5,
			(GLsizei) arg6,
			(GLsizei) arg7,
			(GLsizei) arg8,
			(GLsizei) arg9,
			(GLenum) arg10,
			(GLenum) arg11,
			(const GLvoid *) ptr12
		);

		if(arg12!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg12, ptr12, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexSubImage4DSGIS__IIIIIIIIIIII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jint arg10,
		jint arg11,
		jlongArray arg12)
	{
		jlong *ptr12 = NULL;

		if ( disp__glTexSubImage4DSGIS == NULL ) return;

		if(arg12!=NULL)
		{
			ptr12 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg12, 0);
		}
		disp__glTexSubImage4DSGIS (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLint) arg5,
			(GLsizei) arg6,
			(GLsizei) arg7,
			(GLsizei) arg8,
			(GLsizei) arg9,
			(GLenum) arg10,
			(GLenum) arg11,
			(const GLvoid *) ptr12
		);

		if(arg12!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg12, ptr12, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDetailTexFuncSGIS ( GLenum , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDetailTexFuncSGIS (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glDetailTexFuncSGIS == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glDetailTexFuncSGIS (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetDetailTexFuncSGIS ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetDetailTexFuncSGIS (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;

		if ( disp__glGetDetailTexFuncSGIS == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, &isCopiedArray1);
		}
		disp__glGetDetailTexFuncSGIS (
			(GLenum) arg0,
			(GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSharpenTexFuncSGIS ( GLenum , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSharpenTexFuncSGIS (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glSharpenTexFuncSGIS == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glSharpenTexFuncSGIS (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetSharpenTexFuncSGIS ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetSharpenTexFuncSGIS (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;

		if ( disp__glGetSharpenTexFuncSGIS == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, &isCopiedArray1);
		}
		disp__glGetSharpenTexFuncSGIS (
			(GLenum) arg0,
			(GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleMaskSGIS ( GLclampf , GLboolean ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSampleMaskSGIS (
		JNIEnv *env, jobject obj,
		jfloat arg0,
		jboolean arg1)
	{

		if ( disp__glSampleMaskSGIS == NULL ) return;

		disp__glSampleMaskSGIS (
			(GLclampf) arg0,
			(GLboolean) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSamplePatternSGIS ( GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSamplePatternSGIS (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glSamplePatternSGIS == NULL ) return;

		disp__glSamplePatternSGIS (
			(GLenum) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSpriteParameterfSGIX ( GLenum , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSpriteParameterfSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1)
	{

		if ( disp__glSpriteParameterfSGIX == NULL ) return;

		disp__glSpriteParameterfSGIX (
			(GLenum) arg0,
			(GLfloat) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSpriteParameterfvSGIX ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSpriteParameterfvSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glSpriteParameterfvSGIX == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glSpriteParameterfvSGIX (
			(GLenum) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSpriteParameteriSGIX ( GLenum , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSpriteParameteriSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{

		if ( disp__glSpriteParameteriSGIX == NULL ) return;

		disp__glSpriteParameteriSGIX (
			(GLenum) arg0,
			(GLint) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSpriteParameterivSGIX ( GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSpriteParameterivSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glSpriteParameterivSGIX == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glSpriteParameterivSGIX (
			(GLenum) arg0,
			(const GLint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfARB ( GLenum , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPointParameterfARB (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1)
	{

		if ( disp__glPointParameterfARB == NULL ) return;

		disp__glPointParameterfARB (
			(GLenum) arg0,
			(GLfloat) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfvARB ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPointParameterfvARB (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glPointParameterfvARB == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glPointParameterfvARB (
			(GLenum) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glGetInstrumentsSGIX ( void ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glGetInstrumentsSGIX (
		JNIEnv *env, jobject obj)
	{
		jint ret;


		if ( disp__glGetInstrumentsSGIX == NULL ) return 0;

		ret = (jint) disp__glGetInstrumentsSGIX (
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glInstrumentsBufferSGIX ( GLsizei , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glInstrumentsBufferSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if ( disp__glInstrumentsBufferSGIX == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, &isCopiedArray1);
		}
		disp__glInstrumentsBufferSGIX (
			(GLsizei) arg0,
			(GLint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glPollInstrumentsSGIX ( GLint * ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glPollInstrumentsSGIX (
		JNIEnv *env, jobject obj,
		jintArray arg0)
	{
		jint ret;

		jboolean isCopiedArray0 = JNI_FALSE;
		jint *ptr0 = NULL;

		if ( disp__glPollInstrumentsSGIX == NULL ) return 0;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, &isCopiedArray0);
		}
		ret = (jint) disp__glPollInstrumentsSGIX (
			(GLint *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, (isCopiedArray0 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReadInstrumentsSGIX ( GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReadInstrumentsSGIX (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glReadInstrumentsSGIX == NULL ) return;

		disp__glReadInstrumentsSGIX (
			(GLint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStartInstrumentsSGIX ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glStartInstrumentsSGIX (
		JNIEnv *env, jobject obj)
	{

		if ( disp__glStartInstrumentsSGIX == NULL ) return;

		disp__glStartInstrumentsSGIX (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStopInstrumentsSGIX ( GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glStopInstrumentsSGIX (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glStopInstrumentsSGIX == NULL ) return;

		disp__glStopInstrumentsSGIX (
			(GLint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFrameZoomSGIX ( GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFrameZoomSGIX (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glFrameZoomSGIX == NULL ) return;

		disp__glFrameZoomSGIX (
			(GLint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTagSampleBufferSGIX ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTagSampleBufferSGIX (
		JNIEnv *env, jobject obj)
	{

		if ( disp__glTagSampleBufferSGIX == NULL ) return;

		disp__glTagSampleBufferSGIX (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeformationMap3dSGIX ( GLenum , GLdouble , GLdouble , GLint , GLint , GLdouble , GLdouble , GLint , GLint , GLdouble , GLdouble , GLint , GLint , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDeformationMap3dSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdouble arg1,
		jdouble arg2,
		jint arg3,
		jint arg4,
		jdouble arg5,
		jdouble arg6,
		jint arg7,
		jint arg8,
		jdouble arg9,
		jdouble arg10,
		jint arg11,
		jint arg12,
		jdoubleArray arg13)
	{
		jdouble *ptr13 = NULL;

		if ( disp__glDeformationMap3dSGIX == NULL ) return;

		if(arg13!=NULL)
		{
			ptr13 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg13, 0);
		}
		disp__glDeformationMap3dSGIX (
			(GLenum) arg0,
			(GLdouble) arg1,
			(GLdouble) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLdouble) arg5,
			(GLdouble) arg6,
			(GLint) arg7,
			(GLint) arg8,
			(GLdouble) arg9,
			(GLdouble) arg10,
			(GLint) arg11,
			(GLint) arg12,
			(const GLdouble *) ptr13
		);

		if(arg13!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg13, ptr13, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeformationMap3fSGIX ( GLenum , GLfloat , GLfloat , GLint , GLint , GLfloat , GLfloat , GLint , GLint , GLfloat , GLfloat , GLint , GLint , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDeformationMap3fSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1,
		jfloat arg2,
		jint arg3,
		jint arg4,
		jfloat arg5,
		jfloat arg6,
		jint arg7,
		jint arg8,
		jfloat arg9,
		jfloat arg10,
		jint arg11,
		jint arg12,
		jfloatArray arg13)
	{
		jfloat *ptr13 = NULL;

		if ( disp__glDeformationMap3fSGIX == NULL ) return;

		if(arg13!=NULL)
		{
			ptr13 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg13, 0);
		}
		disp__glDeformationMap3fSGIX (
			(GLenum) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLint) arg3,
			(GLint) arg4,
			(GLfloat) arg5,
			(GLfloat) arg6,
			(GLint) arg7,
			(GLint) arg8,
			(GLfloat) arg9,
			(GLfloat) arg10,
			(GLint) arg11,
			(GLint) arg12,
			(const GLfloat *) ptr13
		);

		if(arg13!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg13, ptr13, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeformSGIX ( GLbitfield ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDeformSGIX (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glDeformSGIX == NULL ) return;

		disp__glDeformSGIX (
			(GLbitfield) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadIdentityDeformationMapSGIX ( GLbitfield ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLoadIdentityDeformationMapSGIX (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glLoadIdentityDeformationMapSGIX == NULL ) return;

		disp__glLoadIdentityDeformationMapSGIX (
			(GLbitfield) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReferencePlaneSGIX ( const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReferencePlaneSGIX (
		JNIEnv *env, jobject obj,
		jdoubleArray arg0)
	{
		jdouble *ptr0 = NULL;

		if ( disp__glReferencePlaneSGIX == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glReferencePlaneSGIX (
			(const GLdouble *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFlushRasterSGIX ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFlushRasterSGIX (
		JNIEnv *env, jobject obj)
	{

		if ( disp__glFlushRasterSGIX == NULL ) return;

		disp__glFlushRasterSGIX (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogFuncSGIS ( GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogFuncSGIS (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glFogFuncSGIS == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glFogFuncSGIS (
			(GLsizei) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFogFuncSGIS ( GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetFogFuncSGIS (
		JNIEnv *env, jobject obj,
		jfloatArray arg0)
	{
		jboolean isCopiedArray0 = JNI_FALSE;
		jfloat *ptr0 = NULL;

		if ( disp__glGetFogFuncSGIS == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, &isCopiedArray0);
		}
		disp__glGetFogFuncSGIS (
			(GLfloat *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, (isCopiedArray0 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glImageTransformParameteriHP ( GLenum , GLenum , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glImageTransformParameteriHP (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{

		if ( disp__glImageTransformParameteriHP == NULL ) return;

		disp__glImageTransformParameteriHP (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glImageTransformParameterfHP ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glImageTransformParameterfHP (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloat arg2)
	{

		if ( disp__glImageTransformParameterfHP == NULL ) return;

		disp__glImageTransformParameterfHP (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glImageTransformParameterivHP ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glImageTransformParameterivHP (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glImageTransformParameterivHP == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glImageTransformParameterivHP (
			(GLenum) arg0,
			(GLenum) arg1,
			(const GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glImageTransformParameterfvHP ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glImageTransformParameterfvHP (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glImageTransformParameterfvHP == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glImageTransformParameterfvHP (
			(GLenum) arg0,
			(GLenum) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetImageTransformParameterivHP ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetImageTransformParameterivHP (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetImageTransformParameterivHP == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetImageTransformParameterivHP (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetImageTransformParameterfvHP ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetImageTransformParameterfvHP (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetImageTransformParameterfvHP == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetImageTransformParameterfvHP (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyColorSubTableEXT ( GLenum , GLsizei , GLint , GLint , GLsizei ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCopyColorSubTableEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4)
	{

		if ( disp__glCopyColorSubTableEXT == NULL ) return;

		disp__glCopyColorSubTableEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLsizei) arg4
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glHintPGI ( GLenum , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glHintPGI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{

		if ( disp__glHintPGI == NULL ) return;

		disp__glHintPGI (
			(GLenum) arg0,
			(GLint) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetListParameterfvSGIX ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetListParameterfvSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetListParameterfvSGIX == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetListParameterfvSGIX (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetListParameterivSGIX ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetListParameterivSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetListParameterivSGIX == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetListParameterivSGIX (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glListParameterfSGIX ( GLuint , GLenum , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glListParameterfSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloat arg2)
	{

		if ( disp__glListParameterfSGIX == NULL ) return;

		disp__glListParameterfSGIX (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLfloat) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glListParameterfvSGIX ( GLuint , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glListParameterfvSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glListParameterfvSGIX == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glListParameterfvSGIX (
			(GLuint) arg0,
			(GLenum) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glListParameteriSGIX ( GLuint , GLenum , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glListParameteriSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{

		if ( disp__glListParameteriSGIX == NULL ) return;

		disp__glListParameteriSGIX (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLint) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glListParameterivSGIX ( GLuint , GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glListParameterivSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glListParameterivSGIX == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glListParameterivSGIX (
			(GLuint) arg0,
			(GLenum) arg1,
			(const GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexMaterialEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexMaterialEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{

		if ( disp__glIndexMaterialEXT == NULL ) return;

		disp__glIndexMaterialEXT (
			(GLenum) arg0,
			(GLenum) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexFuncEXT ( GLenum , GLclampf ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexFuncEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1)
	{

		if ( disp__glIndexFuncEXT == NULL ) return;

		disp__glIndexFuncEXT (
			(GLenum) arg0,
			(GLclampf) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCullParameterdvEXT ( GLenum , GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCullParameterdvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdoubleArray arg1)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;

		if ( disp__glCullParameterdvEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg1, &isCopiedArray1);
		}
		disp__glCullParameterdvEXT (
			(GLenum) arg0,
			(GLdouble *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCullParameterfvEXT ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCullParameterfvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;

		if ( disp__glCullParameterfvEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, &isCopiedArray1);
		}
		disp__glCullParameterfvEXT (
			(GLenum) arg0,
			(GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentColorMaterialSGIX ( GLenum , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFragmentColorMaterialSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{

		if ( disp__glFragmentColorMaterialSGIX == NULL ) return;

		disp__glFragmentColorMaterialSGIX (
			(GLenum) arg0,
			(GLenum) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightfSGIX ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFragmentLightfSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloat arg2)
	{

		if ( disp__glFragmentLightfSGIX == NULL ) return;

		disp__glFragmentLightfSGIX (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightfvSGIX ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFragmentLightfvSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glFragmentLightfvSGIX == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFragmentLightfvSGIX (
			(GLenum) arg0,
			(GLenum) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightiSGIX ( GLenum , GLenum , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFragmentLightiSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{

		if ( disp__glFragmentLightiSGIX == NULL ) return;

		disp__glFragmentLightiSGIX (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightivSGIX ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFragmentLightivSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glFragmentLightivSGIX == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFragmentLightivSGIX (
			(GLenum) arg0,
			(GLenum) arg1,
			(const GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightModelfSGIX ( GLenum , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFragmentLightModelfSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1)
	{

		if ( disp__glFragmentLightModelfSGIX == NULL ) return;

		disp__glFragmentLightModelfSGIX (
			(GLenum) arg0,
			(GLfloat) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightModelfvSGIX ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFragmentLightModelfvSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glFragmentLightModelfvSGIX == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glFragmentLightModelfvSGIX (
			(GLenum) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightModeliSGIX ( GLenum , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFragmentLightModeliSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{

		if ( disp__glFragmentLightModeliSGIX == NULL ) return;

		disp__glFragmentLightModeliSGIX (
			(GLenum) arg0,
			(GLint) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightModelivSGIX ( GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFragmentLightModelivSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glFragmentLightModelivSGIX == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glFragmentLightModelivSGIX (
			(GLenum) arg0,
			(const GLint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentMaterialfSGIX ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFragmentMaterialfSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloat arg2)
	{

		if ( disp__glFragmentMaterialfSGIX == NULL ) return;

		disp__glFragmentMaterialfSGIX (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentMaterialfvSGIX ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFragmentMaterialfvSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glFragmentMaterialfvSGIX == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFragmentMaterialfvSGIX (
			(GLenum) arg0,
			(GLenum) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentMaterialiSGIX ( GLenum , GLenum , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFragmentMaterialiSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{

		if ( disp__glFragmentMaterialiSGIX == NULL ) return;

		disp__glFragmentMaterialiSGIX (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentMaterialivSGIX ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFragmentMaterialivSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glFragmentMaterialivSGIX == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFragmentMaterialivSGIX (
			(GLenum) arg0,
			(GLenum) arg1,
			(const GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFragmentLightfvSGIX ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetFragmentLightfvSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetFragmentLightfvSGIX == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetFragmentLightfvSGIX (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFragmentLightivSGIX ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetFragmentLightivSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetFragmentLightivSGIX == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetFragmentLightivSGIX (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFragmentMaterialfvSGIX ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetFragmentMaterialfvSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetFragmentMaterialfvSGIX == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetFragmentMaterialfvSGIX (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFragmentMaterialivSGIX ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetFragmentMaterialivSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetFragmentMaterialivSGIX == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetFragmentMaterialivSGIX (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightEnviSGIX ( GLenum , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLightEnviSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{

		if ( disp__glLightEnviSGIX == NULL ) return;

		disp__glLightEnviSGIX (
			(GLenum) arg0,
			(GLint) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawRangeElementsEXT ( GLenum , GLuint , GLuint , GLsizei , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawRangeElementsEXT__IIIII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jbyteArray arg5)
	{
		jbyte *ptr5 = NULL;

		if ( disp__glDrawRangeElementsEXT == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glDrawRangeElementsEXT (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawRangeElementsEXT__IIIII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jshortArray arg5)
	{
		jshort *ptr5 = NULL;

		if ( disp__glDrawRangeElementsEXT == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glDrawRangeElementsEXT (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawRangeElementsEXT__IIIII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jintArray arg5)
	{
		jint *ptr5 = NULL;

		if ( disp__glDrawRangeElementsEXT == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glDrawRangeElementsEXT (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawRangeElementsEXT__IIIII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jfloatArray arg5)
	{
		jfloat *ptr5 = NULL;

		if ( disp__glDrawRangeElementsEXT == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glDrawRangeElementsEXT (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawRangeElementsEXT__IIIII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jdoubleArray arg5)
	{
		jdouble *ptr5 = NULL;

		if ( disp__glDrawRangeElementsEXT == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glDrawRangeElementsEXT (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawRangeElementsEXT__IIIII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jbooleanArray arg5)
	{
		jboolean *ptr5 = NULL;

		if ( disp__glDrawRangeElementsEXT == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glDrawRangeElementsEXT (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDrawRangeElementsEXT__IIIII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jlongArray arg5)
	{
		jlong *ptr5 = NULL;

		if ( disp__glDrawRangeElementsEXT == NULL ) return;

		if(arg5!=NULL)
		{
			ptr5 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg5, 0);
		}
		disp__glDrawRangeElementsEXT (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(GLsizei) arg3,
			(GLenum) arg4,
			(const GLvoid *) ptr5
		);

		if(arg5!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg5, ptr5, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glApplyTextureEXT ( GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glApplyTextureEXT (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glApplyTextureEXT == NULL ) return;

		disp__glApplyTextureEXT (
			(GLenum) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTextureLightEXT ( GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTextureLightEXT (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glTextureLightEXT == NULL ) return;

		disp__glTextureLightEXT (
			(GLenum) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTextureMaterialEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTextureMaterialEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{

		if ( disp__glTextureMaterialEXT == NULL ) return;

		disp__glTextureMaterialEXT (
			(GLenum) arg0,
			(GLenum) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAsyncMarkerSGIX ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glAsyncMarkerSGIX (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glAsyncMarkerSGIX == NULL ) return;

		disp__glAsyncMarkerSGIX (
			(GLuint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glFinishAsyncSGIX ( GLuint * ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glFinishAsyncSGIX (
		JNIEnv *env, jobject obj,
		jintArray arg0)
	{
		jint ret;

		jboolean isCopiedArray0 = JNI_FALSE;
		jint *ptr0 = NULL;

		if ( disp__glFinishAsyncSGIX == NULL ) return 0;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, &isCopiedArray0);
		}
		ret = (jint) disp__glFinishAsyncSGIX (
			(GLuint *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, (isCopiedArray0 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glPollAsyncSGIX ( GLuint * ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glPollAsyncSGIX (
		JNIEnv *env, jobject obj,
		jintArray arg0)
	{
		jint ret;

		jboolean isCopiedArray0 = JNI_FALSE;
		jint *ptr0 = NULL;

		if ( disp__glPollAsyncSGIX == NULL ) return 0;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, &isCopiedArray0);
		}
		ret = (jint) disp__glPollAsyncSGIX (
			(GLuint *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, (isCopiedArray0 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenAsyncMarkersSGIX ( GLsizei ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glGenAsyncMarkersSGIX (
		JNIEnv *env, jobject obj,
		jint arg0)
	{
		jint ret;


		if ( disp__glGenAsyncMarkersSGIX == NULL ) return 0;

		ret = (jint) disp__glGenAsyncMarkersSGIX (
			(GLsizei) arg0
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteAsyncMarkersSGIX ( GLuint , GLsizei ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDeleteAsyncMarkersSGIX (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{

		if ( disp__glDeleteAsyncMarkersSGIX == NULL ) return;

		disp__glDeleteAsyncMarkersSGIX (
			(GLuint) arg0,
			(GLsizei) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsAsyncMarkerSGIX ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_GLFuncJauJNI_glIsAsyncMarkerSGIX (
		JNIEnv *env, jobject obj,
		jint arg0)
	{
		jboolean ret;


		if ( disp__glIsAsyncMarkerSGIX == NULL ) return 0;

		ret = (jboolean) disp__glIsAsyncMarkerSGIX (
			(GLuint) arg0
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexPointervINTEL ( GLint , GLenum , const GLvoid * * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointervINTEL__II_3_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2)
	{
		jbyte *ptr2 = NULL;

		if ( disp__glVertexPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointervINTEL__II_3_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2)
	{
		jshort *ptr2 = NULL;

		if ( disp__glVertexPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointervINTEL__II_3_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glVertexPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointervINTEL__II_3_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glVertexPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointervINTEL__II_3_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glVertexPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointervINTEL__II_3_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2)
	{
		jboolean *ptr2 = NULL;

		if ( disp__glVertexPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointervINTEL__II_3_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jlongArray arg2)
	{
		jlong *ptr2 = NULL;

		if ( disp__glVertexPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalPointervINTEL ( GLenum , const GLvoid * * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointervINTEL__I_3_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbyteArray arg1)
	{
		jbyte *ptr1 = NULL;

		if ( disp__glNormalPointervINTEL == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glNormalPointervINTEL (
			(GLenum) arg0,
			(const GLvoid **) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointervINTEL__I_3_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glNormalPointervINTEL == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glNormalPointervINTEL (
			(GLenum) arg0,
			(const GLvoid **) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointervINTEL__I_3_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glNormalPointervINTEL == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glNormalPointervINTEL (
			(GLenum) arg0,
			(const GLvoid **) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointervINTEL__I_3_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glNormalPointervINTEL == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glNormalPointervINTEL (
			(GLenum) arg0,
			(const GLvoid **) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointervINTEL__I_3_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdoubleArray arg1)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glNormalPointervINTEL == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glNormalPointervINTEL (
			(GLenum) arg0,
			(const GLvoid **) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointervINTEL__I_3_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbooleanArray arg1)
	{
		jboolean *ptr1 = NULL;

		if ( disp__glNormalPointervINTEL == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glNormalPointervINTEL (
			(GLenum) arg0,
			(const GLvoid **) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointervINTEL__I_3_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jlongArray arg1)
	{
		jlong *ptr1 = NULL;

		if ( disp__glNormalPointervINTEL == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glNormalPointervINTEL (
			(GLenum) arg0,
			(const GLvoid **) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorPointervINTEL ( GLint , GLenum , const GLvoid * * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointervINTEL__II_3_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2)
	{
		jbyte *ptr2 = NULL;

		if ( disp__glColorPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glColorPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointervINTEL__II_3_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2)
	{
		jshort *ptr2 = NULL;

		if ( disp__glColorPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glColorPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointervINTEL__II_3_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glColorPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glColorPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointervINTEL__II_3_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glColorPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glColorPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointervINTEL__II_3_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glColorPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glColorPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointervINTEL__II_3_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2)
	{
		jboolean *ptr2 = NULL;

		if ( disp__glColorPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glColorPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointervINTEL__II_3_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jlongArray arg2)
	{
		jlong *ptr2 = NULL;

		if ( disp__glColorPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glColorPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoordPointervINTEL ( GLint , GLenum , const GLvoid * * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointervINTEL__II_3_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2)
	{
		jbyte *ptr2 = NULL;

		if ( disp__glTexCoordPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTexCoordPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointervINTEL__II_3_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2)
	{
		jshort *ptr2 = NULL;

		if ( disp__glTexCoordPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTexCoordPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointervINTEL__II_3_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glTexCoordPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTexCoordPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointervINTEL__II_3_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glTexCoordPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTexCoordPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointervINTEL__II_3_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glTexCoordPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTexCoordPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointervINTEL__II_3_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2)
	{
		jboolean *ptr2 = NULL;

		if ( disp__glTexCoordPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTexCoordPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointervINTEL__II_3_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jlongArray arg2)
	{
		jlong *ptr2 = NULL;

		if ( disp__glTexCoordPointervINTEL == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTexCoordPointervINTEL (
			(GLint) arg0,
			(GLenum) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransformParameteriEXT ( GLenum , GLenum , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelTransformParameteriEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{

		if ( disp__glPixelTransformParameteriEXT == NULL ) return;

		disp__glPixelTransformParameteriEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransformParameterfEXT ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelTransformParameterfEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloat arg2)
	{

		if ( disp__glPixelTransformParameterfEXT == NULL ) return;

		disp__glPixelTransformParameterfEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransformParameterivEXT ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelTransformParameterivEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glPixelTransformParameterivEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glPixelTransformParameterivEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(const GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransformParameterfvEXT ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPixelTransformParameterfvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glPixelTransformParameterfvEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glPixelTransformParameterfvEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3bEXT ( GLbyte , GLbyte , GLbyte ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColor3bEXT (
		JNIEnv *env, jobject obj,
		jbyte arg0,
		jbyte arg1,
		jbyte arg2)
	{

		if ( disp__glSecondaryColor3bEXT == NULL ) return;

		disp__glSecondaryColor3bEXT (
			(GLbyte) arg0,
			(GLbyte) arg1,
			(GLbyte) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3bvEXT ( const GLbyte * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColor3bvEXT (
		JNIEnv *env, jobject obj,
		jbyteArray arg0)
	{
		jbyte *ptr0 = NULL;

		if ( disp__glSecondaryColor3bvEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glSecondaryColor3bvEXT (
			(const GLbyte *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3dEXT ( GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColor3dEXT (
		JNIEnv *env, jobject obj,
		jdouble arg0,
		jdouble arg1,
		jdouble arg2)
	{

		if ( disp__glSecondaryColor3dEXT == NULL ) return;

		disp__glSecondaryColor3dEXT (
			(GLdouble) arg0,
			(GLdouble) arg1,
			(GLdouble) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3dvEXT ( const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColor3dvEXT (
		JNIEnv *env, jobject obj,
		jdoubleArray arg0)
	{
		jdouble *ptr0 = NULL;

		if ( disp__glSecondaryColor3dvEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glSecondaryColor3dvEXT (
			(const GLdouble *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3fEXT ( GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColor3fEXT (
		JNIEnv *env, jobject obj,
		jfloat arg0,
		jfloat arg1,
		jfloat arg2)
	{

		if ( disp__glSecondaryColor3fEXT == NULL ) return;

		disp__glSecondaryColor3fEXT (
			(GLfloat) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3fvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColor3fvEXT (
		JNIEnv *env, jobject obj,
		jfloatArray arg0)
	{
		jfloat *ptr0 = NULL;

		if ( disp__glSecondaryColor3fvEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glSecondaryColor3fvEXT (
			(const GLfloat *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3iEXT ( GLint , GLint , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColor3iEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{

		if ( disp__glSecondaryColor3iEXT == NULL ) return;

		disp__glSecondaryColor3iEXT (
			(GLint) arg0,
			(GLint) arg1,
			(GLint) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3ivEXT ( const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColor3ivEXT (
		JNIEnv *env, jobject obj,
		jintArray arg0)
	{
		jint *ptr0 = NULL;

		if ( disp__glSecondaryColor3ivEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glSecondaryColor3ivEXT (
			(const GLint *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3sEXT ( GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColor3sEXT (
		JNIEnv *env, jobject obj,
		jshort arg0,
		jshort arg1,
		jshort arg2)
	{

		if ( disp__glSecondaryColor3sEXT == NULL ) return;

		disp__glSecondaryColor3sEXT (
			(GLshort) arg0,
			(GLshort) arg1,
			(GLshort) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3svEXT ( const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColor3svEXT (
		JNIEnv *env, jobject obj,
		jshortArray arg0)
	{
		jshort *ptr0 = NULL;

		if ( disp__glSecondaryColor3svEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glSecondaryColor3svEXT (
			(const GLshort *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3ubEXT ( GLubyte , GLubyte , GLubyte ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColor3ubEXT (
		JNIEnv *env, jobject obj,
		jbyte arg0,
		jbyte arg1,
		jbyte arg2)
	{

		if ( disp__glSecondaryColor3ubEXT == NULL ) return;

		disp__glSecondaryColor3ubEXT (
			(GLubyte) arg0,
			(GLubyte) arg1,
			(GLubyte) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3ubvEXT ( const GLubyte * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColor3ubvEXT (
		JNIEnv *env, jobject obj,
		jbyteArray arg0)
	{
		jbyte *ptr0 = NULL;

		if ( disp__glSecondaryColor3ubvEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glSecondaryColor3ubvEXT (
			(const GLubyte *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3uiEXT ( GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColor3uiEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{

		if ( disp__glSecondaryColor3uiEXT == NULL ) return;

		disp__glSecondaryColor3uiEXT (
			(GLuint) arg0,
			(GLuint) arg1,
			(GLuint) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3uivEXT ( const GLuint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColor3uivEXT (
		JNIEnv *env, jobject obj,
		jintArray arg0)
	{
		jint *ptr0 = NULL;

		if ( disp__glSecondaryColor3uivEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glSecondaryColor3uivEXT (
			(const GLuint *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3usEXT ( GLushort , GLushort , GLushort ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColor3usEXT (
		JNIEnv *env, jobject obj,
		jshort arg0,
		jshort arg1,
		jshort arg2)
	{

		if ( disp__glSecondaryColor3usEXT == NULL ) return;

		disp__glSecondaryColor3usEXT (
			(GLushort) arg0,
			(GLushort) arg1,
			(GLushort) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3usvEXT ( const GLushort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColor3usvEXT (
		JNIEnv *env, jobject obj,
		jshortArray arg0)
	{
		jshort *ptr0 = NULL;

		if ( disp__glSecondaryColor3usvEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glSecondaryColor3usvEXT (
			(const GLushort *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColorPointerEXT ( GLint , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColorPointerEXT__III_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbyteArray arg3)
	{
		jbyte *ptr3 = NULL;

		if ( disp__glSecondaryColorPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glSecondaryColorPointerEXT (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColorPointerEXT__III_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jshortArray arg3)
	{
		jshort *ptr3 = NULL;

		if ( disp__glSecondaryColorPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glSecondaryColorPointerEXT (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColorPointerEXT__III_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jintArray arg3)
	{
		jint *ptr3 = NULL;

		if ( disp__glSecondaryColorPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glSecondaryColorPointerEXT (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColorPointerEXT__III_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3)
	{
		jfloat *ptr3 = NULL;

		if ( disp__glSecondaryColorPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glSecondaryColorPointerEXT (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColorPointerEXT__III_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jdoubleArray arg3)
	{
		jdouble *ptr3 = NULL;

		if ( disp__glSecondaryColorPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glSecondaryColorPointerEXT (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColorPointerEXT__III_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbooleanArray arg3)
	{
		jboolean *ptr3 = NULL;

		if ( disp__glSecondaryColorPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glSecondaryColorPointerEXT (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColorPointerEXT__III_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jlongArray arg3)
	{
		jlong *ptr3 = NULL;

		if ( disp__glSecondaryColorPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glSecondaryColorPointerEXT (
			(GLint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTextureNormalEXT ( GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTextureNormalEXT (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glTextureNormalEXT == NULL ) return;

		disp__glTextureNormalEXT (
			(GLenum) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiDrawArraysEXT ( GLenum , GLint * , GLsizei * , GLsizei ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiDrawArraysEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1,
		jintArray arg2,
		jint arg3)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glMultiDrawArraysEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, &isCopiedArray1);
		}
		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glMultiDrawArraysEXT (
			(GLenum) arg0,
			(GLint *) ptr1,
			(GLsizei *) ptr2,
			(GLsizei) arg3
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiDrawElementsEXT ( GLenum , const GLsizei * , GLenum , const GLvoid * * , GLsizei ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiDrawElementsEXT__I_3II_3_3BI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1,
		jint arg2,
		jbyteArray arg3,
		jint arg4)
	{
		jint *ptr1 = NULL;
		jbyte *ptr3 = NULL;

		if ( disp__glMultiDrawElementsEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMultiDrawElementsEXT (
			(GLenum) arg0,
			(const GLsizei *) ptr1,
			(GLenum) arg2,
			(const GLvoid **) ptr3,
			(GLsizei) arg4
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiDrawElementsEXT__I_3II_3_3SI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1,
		jint arg2,
		jshortArray arg3,
		jint arg4)
	{
		jint *ptr1 = NULL;
		jshort *ptr3 = NULL;

		if ( disp__glMultiDrawElementsEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMultiDrawElementsEXT (
			(GLenum) arg0,
			(const GLsizei *) ptr1,
			(GLenum) arg2,
			(const GLvoid **) ptr3,
			(GLsizei) arg4
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiDrawElementsEXT__I_3II_3_3II (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1,
		jint arg2,
		jintArray arg3,
		jint arg4)
	{
		jint *ptr1 = NULL;
		jint *ptr3 = NULL;

		if ( disp__glMultiDrawElementsEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMultiDrawElementsEXT (
			(GLenum) arg0,
			(const GLsizei *) ptr1,
			(GLenum) arg2,
			(const GLvoid **) ptr3,
			(GLsizei) arg4
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiDrawElementsEXT__I_3II_3_3FI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1,
		jint arg2,
		jfloatArray arg3,
		jint arg4)
	{
		jint *ptr1 = NULL;
		jfloat *ptr3 = NULL;

		if ( disp__glMultiDrawElementsEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMultiDrawElementsEXT (
			(GLenum) arg0,
			(const GLsizei *) ptr1,
			(GLenum) arg2,
			(const GLvoid **) ptr3,
			(GLsizei) arg4
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiDrawElementsEXT__I_3II_3_3DI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1,
		jint arg2,
		jdoubleArray arg3,
		jint arg4)
	{
		jint *ptr1 = NULL;
		jdouble *ptr3 = NULL;

		if ( disp__glMultiDrawElementsEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMultiDrawElementsEXT (
			(GLenum) arg0,
			(const GLsizei *) ptr1,
			(GLenum) arg2,
			(const GLvoid **) ptr3,
			(GLsizei) arg4
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiDrawElementsEXT__I_3II_3_3ZI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1,
		jint arg2,
		jbooleanArray arg3,
		jint arg4)
	{
		jint *ptr1 = NULL;
		jboolean *ptr3 = NULL;

		if ( disp__glMultiDrawElementsEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMultiDrawElementsEXT (
			(GLenum) arg0,
			(const GLsizei *) ptr1,
			(GLenum) arg2,
			(const GLvoid **) ptr3,
			(GLsizei) arg4
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiDrawElementsEXT__I_3II_3_3JI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1,
		jint arg2,
		jlongArray arg3,
		jint arg4)
	{
		jint *ptr1 = NULL;
		jlong *ptr3 = NULL;

		if ( disp__glMultiDrawElementsEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMultiDrawElementsEXT (
			(GLenum) arg0,
			(const GLsizei *) ptr1,
			(GLenum) arg2,
			(const GLvoid **) ptr3,
			(GLsizei) arg4
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoordfEXT ( GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoordfEXT (
		JNIEnv *env, jobject obj,
		jfloat arg0)
	{

		if ( disp__glFogCoordfEXT == NULL ) return;

		disp__glFogCoordfEXT (
			(GLfloat) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoordfvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoordfvEXT (
		JNIEnv *env, jobject obj,
		jfloatArray arg0)
	{
		jfloat *ptr0 = NULL;

		if ( disp__glFogCoordfvEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glFogCoordfvEXT (
			(const GLfloat *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoorddEXT ( GLdouble ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoorddEXT (
		JNIEnv *env, jobject obj,
		jdouble arg0)
	{

		if ( disp__glFogCoorddEXT == NULL ) return;

		disp__glFogCoorddEXT (
			(GLdouble) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoorddvEXT ( const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoorddvEXT (
		JNIEnv *env, jobject obj,
		jdoubleArray arg0)
	{
		jdouble *ptr0 = NULL;

		if ( disp__glFogCoorddvEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glFogCoorddvEXT (
			(const GLdouble *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoordPointerEXT ( GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoordPointerEXT__II_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2)
	{
		jbyte *ptr2 = NULL;

		if ( disp__glFogCoordPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFogCoordPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoordPointerEXT__II_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2)
	{
		jshort *ptr2 = NULL;

		if ( disp__glFogCoordPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFogCoordPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoordPointerEXT__II_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glFogCoordPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFogCoordPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoordPointerEXT__II_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glFogCoordPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFogCoordPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoordPointerEXT__II_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glFogCoordPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFogCoordPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoordPointerEXT__II_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2)
	{
		jboolean *ptr2 = NULL;

		if ( disp__glFogCoordPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFogCoordPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoordPointerEXT__II_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jlongArray arg2)
	{
		jlong *ptr2 = NULL;

		if ( disp__glFogCoordPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFogCoordPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3bEXT ( GLbyte , GLbyte , GLbyte ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangent3bEXT (
		JNIEnv *env, jobject obj,
		jbyte arg0,
		jbyte arg1,
		jbyte arg2)
	{

		if ( disp__glTangent3bEXT == NULL ) return;

		disp__glTangent3bEXT (
			(GLbyte) arg0,
			(GLbyte) arg1,
			(GLbyte) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3bvEXT ( const GLbyte * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangent3bvEXT (
		JNIEnv *env, jobject obj,
		jbyteArray arg0)
	{
		jbyte *ptr0 = NULL;

		if ( disp__glTangent3bvEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glTangent3bvEXT (
			(const GLbyte *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3dEXT ( GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangent3dEXT (
		JNIEnv *env, jobject obj,
		jdouble arg0,
		jdouble arg1,
		jdouble arg2)
	{

		if ( disp__glTangent3dEXT == NULL ) return;

		disp__glTangent3dEXT (
			(GLdouble) arg0,
			(GLdouble) arg1,
			(GLdouble) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3dvEXT ( const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangent3dvEXT (
		JNIEnv *env, jobject obj,
		jdoubleArray arg0)
	{
		jdouble *ptr0 = NULL;

		if ( disp__glTangent3dvEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glTangent3dvEXT (
			(const GLdouble *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3fEXT ( GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangent3fEXT (
		JNIEnv *env, jobject obj,
		jfloat arg0,
		jfloat arg1,
		jfloat arg2)
	{

		if ( disp__glTangent3fEXT == NULL ) return;

		disp__glTangent3fEXT (
			(GLfloat) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3fvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangent3fvEXT (
		JNIEnv *env, jobject obj,
		jfloatArray arg0)
	{
		jfloat *ptr0 = NULL;

		if ( disp__glTangent3fvEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glTangent3fvEXT (
			(const GLfloat *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3iEXT ( GLint , GLint , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangent3iEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{

		if ( disp__glTangent3iEXT == NULL ) return;

		disp__glTangent3iEXT (
			(GLint) arg0,
			(GLint) arg1,
			(GLint) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3ivEXT ( const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangent3ivEXT (
		JNIEnv *env, jobject obj,
		jintArray arg0)
	{
		jint *ptr0 = NULL;

		if ( disp__glTangent3ivEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glTangent3ivEXT (
			(const GLint *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3sEXT ( GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangent3sEXT (
		JNIEnv *env, jobject obj,
		jshort arg0,
		jshort arg1,
		jshort arg2)
	{

		if ( disp__glTangent3sEXT == NULL ) return;

		disp__glTangent3sEXT (
			(GLshort) arg0,
			(GLshort) arg1,
			(GLshort) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3svEXT ( const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangent3svEXT (
		JNIEnv *env, jobject obj,
		jshortArray arg0)
	{
		jshort *ptr0 = NULL;

		if ( disp__glTangent3svEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glTangent3svEXT (
			(const GLshort *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3bEXT ( GLbyte , GLbyte , GLbyte ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormal3bEXT (
		JNIEnv *env, jobject obj,
		jbyte arg0,
		jbyte arg1,
		jbyte arg2)
	{

		if ( disp__glBinormal3bEXT == NULL ) return;

		disp__glBinormal3bEXT (
			(GLbyte) arg0,
			(GLbyte) arg1,
			(GLbyte) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3bvEXT ( const GLbyte * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormal3bvEXT (
		JNIEnv *env, jobject obj,
		jbyteArray arg0)
	{
		jbyte *ptr0 = NULL;

		if ( disp__glBinormal3bvEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glBinormal3bvEXT (
			(const GLbyte *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3dEXT ( GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormal3dEXT (
		JNIEnv *env, jobject obj,
		jdouble arg0,
		jdouble arg1,
		jdouble arg2)
	{

		if ( disp__glBinormal3dEXT == NULL ) return;

		disp__glBinormal3dEXT (
			(GLdouble) arg0,
			(GLdouble) arg1,
			(GLdouble) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3dvEXT ( const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormal3dvEXT (
		JNIEnv *env, jobject obj,
		jdoubleArray arg0)
	{
		jdouble *ptr0 = NULL;

		if ( disp__glBinormal3dvEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glBinormal3dvEXT (
			(const GLdouble *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3fEXT ( GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormal3fEXT (
		JNIEnv *env, jobject obj,
		jfloat arg0,
		jfloat arg1,
		jfloat arg2)
	{

		if ( disp__glBinormal3fEXT == NULL ) return;

		disp__glBinormal3fEXT (
			(GLfloat) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3fvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormal3fvEXT (
		JNIEnv *env, jobject obj,
		jfloatArray arg0)
	{
		jfloat *ptr0 = NULL;

		if ( disp__glBinormal3fvEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glBinormal3fvEXT (
			(const GLfloat *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3iEXT ( GLint , GLint , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormal3iEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{

		if ( disp__glBinormal3iEXT == NULL ) return;

		disp__glBinormal3iEXT (
			(GLint) arg0,
			(GLint) arg1,
			(GLint) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3ivEXT ( const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormal3ivEXT (
		JNIEnv *env, jobject obj,
		jintArray arg0)
	{
		jint *ptr0 = NULL;

		if ( disp__glBinormal3ivEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glBinormal3ivEXT (
			(const GLint *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3sEXT ( GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormal3sEXT (
		JNIEnv *env, jobject obj,
		jshort arg0,
		jshort arg1,
		jshort arg2)
	{

		if ( disp__glBinormal3sEXT == NULL ) return;

		disp__glBinormal3sEXT (
			(GLshort) arg0,
			(GLshort) arg1,
			(GLshort) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3svEXT ( const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormal3svEXT (
		JNIEnv *env, jobject obj,
		jshortArray arg0)
	{
		jshort *ptr0 = NULL;

		if ( disp__glBinormal3svEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glBinormal3svEXT (
			(const GLshort *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangentPointerEXT ( GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangentPointerEXT__II_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2)
	{
		jbyte *ptr2 = NULL;

		if ( disp__glTangentPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTangentPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangentPointerEXT__II_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2)
	{
		jshort *ptr2 = NULL;

		if ( disp__glTangentPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTangentPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangentPointerEXT__II_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glTangentPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTangentPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangentPointerEXT__II_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glTangentPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTangentPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangentPointerEXT__II_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glTangentPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTangentPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangentPointerEXT__II_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2)
	{
		jboolean *ptr2 = NULL;

		if ( disp__glTangentPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTangentPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTangentPointerEXT__II_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jlongArray arg2)
	{
		jlong *ptr2 = NULL;

		if ( disp__glTangentPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTangentPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormalPointerEXT ( GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormalPointerEXT__II_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2)
	{
		jbyte *ptr2 = NULL;

		if ( disp__glBinormalPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glBinormalPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormalPointerEXT__II_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2)
	{
		jshort *ptr2 = NULL;

		if ( disp__glBinormalPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glBinormalPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormalPointerEXT__II_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glBinormalPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glBinormalPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormalPointerEXT__II_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glBinormalPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glBinormalPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormalPointerEXT__II_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glBinormalPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glBinormalPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormalPointerEXT__II_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2)
	{
		jboolean *ptr2 = NULL;

		if ( disp__glBinormalPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glBinormalPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBinormalPointerEXT__II_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jlongArray arg2)
	{
		jlong *ptr2 = NULL;

		if ( disp__glBinormalPointerEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glBinormalPointerEXT (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFinishTextureSUNX ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFinishTextureSUNX (
		JNIEnv *env, jobject obj)
	{

		if ( disp__glFinishTextureSUNX == NULL ) return;

		disp__glFinishTextureSUNX (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorbSUN ( GLbyte ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGlobalAlphaFactorbSUN (
		JNIEnv *env, jobject obj,
		jbyte arg0)
	{

		if ( disp__glGlobalAlphaFactorbSUN == NULL ) return;

		disp__glGlobalAlphaFactorbSUN (
			(GLbyte) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorsSUN ( GLshort ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGlobalAlphaFactorsSUN (
		JNIEnv *env, jobject obj,
		jshort arg0)
	{

		if ( disp__glGlobalAlphaFactorsSUN == NULL ) return;

		disp__glGlobalAlphaFactorsSUN (
			(GLshort) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactoriSUN ( GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGlobalAlphaFactoriSUN (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glGlobalAlphaFactoriSUN == NULL ) return;

		disp__glGlobalAlphaFactoriSUN (
			(GLint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorfSUN ( GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGlobalAlphaFactorfSUN (
		JNIEnv *env, jobject obj,
		jfloat arg0)
	{

		if ( disp__glGlobalAlphaFactorfSUN == NULL ) return;

		disp__glGlobalAlphaFactorfSUN (
			(GLfloat) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactordSUN ( GLdouble ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGlobalAlphaFactordSUN (
		JNIEnv *env, jobject obj,
		jdouble arg0)
	{

		if ( disp__glGlobalAlphaFactordSUN == NULL ) return;

		disp__glGlobalAlphaFactordSUN (
			(GLdouble) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorubSUN ( GLubyte ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGlobalAlphaFactorubSUN (
		JNIEnv *env, jobject obj,
		jbyte arg0)
	{

		if ( disp__glGlobalAlphaFactorubSUN == NULL ) return;

		disp__glGlobalAlphaFactorubSUN (
			(GLubyte) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorusSUN ( GLushort ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGlobalAlphaFactorusSUN (
		JNIEnv *env, jobject obj,
		jshort arg0)
	{

		if ( disp__glGlobalAlphaFactorusSUN == NULL ) return;

		disp__glGlobalAlphaFactorusSUN (
			(GLushort) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactoruiSUN ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGlobalAlphaFactoruiSUN (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glGlobalAlphaFactoruiSUN == NULL ) return;

		disp__glGlobalAlphaFactoruiSUN (
			(GLuint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiSUN ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiSUN (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glReplacementCodeuiSUN == NULL ) return;

		disp__glReplacementCodeuiSUN (
			(GLuint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeusSUN ( GLushort ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeusSUN (
		JNIEnv *env, jobject obj,
		jshort arg0)
	{

		if ( disp__glReplacementCodeusSUN == NULL ) return;

		disp__glReplacementCodeusSUN (
			(GLushort) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeubSUN ( GLubyte ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeubSUN (
		JNIEnv *env, jobject obj,
		jbyte arg0)
	{

		if ( disp__glReplacementCodeubSUN == NULL ) return;

		disp__glReplacementCodeubSUN (
			(GLubyte) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuivSUN ( const GLuint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuivSUN (
		JNIEnv *env, jobject obj,
		jintArray arg0)
	{
		jint *ptr0 = NULL;

		if ( disp__glReplacementCodeuivSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glReplacementCodeuivSUN (
			(const GLuint *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeusvSUN ( const GLushort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeusvSUN (
		JNIEnv *env, jobject obj,
		jshortArray arg0)
	{
		jshort *ptr0 = NULL;

		if ( disp__glReplacementCodeusvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glReplacementCodeusvSUN (
			(const GLushort *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeubvSUN ( const GLubyte * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeubvSUN (
		JNIEnv *env, jobject obj,
		jbyteArray arg0)
	{
		jbyte *ptr0 = NULL;

		if ( disp__glReplacementCodeubvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glReplacementCodeubvSUN (
			(const GLubyte *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodePointerSUN ( GLenum , GLsizei , const GLvoid * * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodePointerSUN__II_3_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2)
	{
		jbyte *ptr2 = NULL;

		if ( disp__glReplacementCodePointerSUN == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glReplacementCodePointerSUN (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodePointerSUN__II_3_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2)
	{
		jshort *ptr2 = NULL;

		if ( disp__glReplacementCodePointerSUN == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glReplacementCodePointerSUN (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodePointerSUN__II_3_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glReplacementCodePointerSUN == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glReplacementCodePointerSUN (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodePointerSUN__II_3_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glReplacementCodePointerSUN == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glReplacementCodePointerSUN (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodePointerSUN__II_3_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glReplacementCodePointerSUN == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glReplacementCodePointerSUN (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodePointerSUN__II_3_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2)
	{
		jboolean *ptr2 = NULL;

		if ( disp__glReplacementCodePointerSUN == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glReplacementCodePointerSUN (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodePointerSUN__II_3_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jlongArray arg2)
	{
		jlong *ptr2 = NULL;

		if ( disp__glReplacementCodePointerSUN == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glReplacementCodePointerSUN (
			(GLenum) arg0,
			(GLsizei) arg1,
			(const GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubVertex2fSUN ( GLubyte , GLubyte , GLubyte , GLubyte , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4ubVertex2fSUN (
		JNIEnv *env, jobject obj,
		jbyte arg0,
		jbyte arg1,
		jbyte arg2,
		jbyte arg3,
		jfloat arg4,
		jfloat arg5)
	{

		if ( disp__glColor4ubVertex2fSUN == NULL ) return;

		disp__glColor4ubVertex2fSUN (
			(GLubyte) arg0,
			(GLubyte) arg1,
			(GLubyte) arg2,
			(GLubyte) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubVertex2fvSUN ( const GLubyte * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4ubVertex2fvSUN (
		JNIEnv *env, jobject obj,
		jbyteArray arg0,
		jfloatArray arg1)
	{
		jbyte *ptr0 = NULL;
		jfloat *ptr1 = NULL;

		if ( disp__glColor4ubVertex2fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glColor4ubVertex2fvSUN (
			(const GLubyte *) ptr0,
			(const GLfloat *) ptr1
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubVertex3fSUN ( GLubyte , GLubyte , GLubyte , GLubyte , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4ubVertex3fSUN (
		JNIEnv *env, jobject obj,
		jbyte arg0,
		jbyte arg1,
		jbyte arg2,
		jbyte arg3,
		jfloat arg4,
		jfloat arg5,
		jfloat arg6)
	{

		if ( disp__glColor4ubVertex3fSUN == NULL ) return;

		disp__glColor4ubVertex3fSUN (
			(GLubyte) arg0,
			(GLubyte) arg1,
			(GLubyte) arg2,
			(GLubyte) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5,
			(GLfloat) arg6
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubVertex3fvSUN ( const GLubyte * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4ubVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jbyteArray arg0,
		jfloatArray arg1)
	{
		jbyte *ptr0 = NULL;
		jfloat *ptr1 = NULL;

		if ( disp__glColor4ubVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glColor4ubVertex3fvSUN (
			(const GLubyte *) ptr0,
			(const GLfloat *) ptr1
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3fVertex3fSUN (
		JNIEnv *env, jobject obj,
		jfloat arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4,
		jfloat arg5)
	{

		if ( disp__glColor3fVertex3fSUN == NULL ) return;

		disp__glColor3fVertex3fSUN (
			(GLfloat) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3fVertex3fvSUN ( const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor3fVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jfloatArray arg0,
		jfloatArray arg1)
	{
		jfloat *ptr0 = NULL;
		jfloat *ptr1 = NULL;

		if ( disp__glColor3fVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glColor3fVertex3fvSUN (
			(const GLfloat *) ptr0,
			(const GLfloat *) ptr1
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormal3fVertex3fSUN (
		JNIEnv *env, jobject obj,
		jfloat arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4,
		jfloat arg5)
	{

		if ( disp__glNormal3fVertex3fSUN == NULL ) return;

		disp__glNormal3fVertex3fSUN (
			(GLfloat) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3fVertex3fvSUN ( const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormal3fVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jfloatArray arg0,
		jfloatArray arg1)
	{
		jfloat *ptr0 = NULL;
		jfloat *ptr1 = NULL;

		if ( disp__glNormal3fVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glNormal3fVertex3fvSUN (
			(const GLfloat *) ptr0,
			(const GLfloat *) ptr1
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4fNormal3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4fNormal3fVertex3fSUN (
		JNIEnv *env, jobject obj,
		jfloat arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4,
		jfloat arg5,
		jfloat arg6,
		jfloat arg7,
		jfloat arg8,
		jfloat arg9)
	{

		if ( disp__glColor4fNormal3fVertex3fSUN == NULL ) return;

		disp__glColor4fNormal3fVertex3fSUN (
			(GLfloat) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5,
			(GLfloat) arg6,
			(GLfloat) arg7,
			(GLfloat) arg8,
			(GLfloat) arg9
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4fNormal3fVertex3fvSUN ( const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColor4fNormal3fVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jfloatArray arg0,
		jfloatArray arg1,
		jfloatArray arg2)
	{
		jfloat *ptr0 = NULL;
		jfloat *ptr1 = NULL;
		jfloat *ptr2 = NULL;

		if ( disp__glColor4fNormal3fVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glColor4fNormal3fVertex3fvSUN (
			(const GLfloat *) ptr0,
			(const GLfloat *) ptr1,
			(const GLfloat *) ptr2
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2fVertex3fSUN (
		JNIEnv *env, jobject obj,
		jfloat arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4)
	{

		if ( disp__glTexCoord2fVertex3fSUN == NULL ) return;

		disp__glTexCoord2fVertex3fSUN (
			(GLfloat) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fVertex3fvSUN ( const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2fVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jfloatArray arg0,
		jfloatArray arg1)
	{
		jfloat *ptr0 = NULL;
		jfloat *ptr1 = NULL;

		if ( disp__glTexCoord2fVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glTexCoord2fVertex3fvSUN (
			(const GLfloat *) ptr0,
			(const GLfloat *) ptr1
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fVertex4fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord4fVertex4fSUN (
		JNIEnv *env, jobject obj,
		jfloat arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4,
		jfloat arg5,
		jfloat arg6,
		jfloat arg7)
	{

		if ( disp__glTexCoord4fVertex4fSUN == NULL ) return;

		disp__glTexCoord4fVertex4fSUN (
			(GLfloat) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5,
			(GLfloat) arg6,
			(GLfloat) arg7
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fVertex4fvSUN ( const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord4fVertex4fvSUN (
		JNIEnv *env, jobject obj,
		jfloatArray arg0,
		jfloatArray arg1)
	{
		jfloat *ptr0 = NULL;
		jfloat *ptr1 = NULL;

		if ( disp__glTexCoord4fVertex4fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glTexCoord4fVertex4fvSUN (
			(const GLfloat *) ptr0,
			(const GLfloat *) ptr1
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor4ubVertex3fSUN ( GLfloat , GLfloat , GLubyte , GLubyte , GLubyte , GLubyte , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2fColor4ubVertex3fSUN (
		JNIEnv *env, jobject obj,
		jfloat arg0,
		jfloat arg1,
		jbyte arg2,
		jbyte arg3,
		jbyte arg4,
		jbyte arg5,
		jfloat arg6,
		jfloat arg7,
		jfloat arg8)
	{

		if ( disp__glTexCoord2fColor4ubVertex3fSUN == NULL ) return;

		disp__glTexCoord2fColor4ubVertex3fSUN (
			(GLfloat) arg0,
			(GLfloat) arg1,
			(GLubyte) arg2,
			(GLubyte) arg3,
			(GLubyte) arg4,
			(GLubyte) arg5,
			(GLfloat) arg6,
			(GLfloat) arg7,
			(GLfloat) arg8
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor4ubVertex3fvSUN ( const GLfloat * , const GLubyte * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2fColor4ubVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jfloatArray arg0,
		jbyteArray arg1,
		jfloatArray arg2)
	{
		jfloat *ptr0 = NULL;
		jbyte *ptr1 = NULL;
		jfloat *ptr2 = NULL;

		if ( disp__glTexCoord2fColor4ubVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTexCoord2fColor4ubVertex3fvSUN (
			(const GLfloat *) ptr0,
			(const GLubyte *) ptr1,
			(const GLfloat *) ptr2
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2fColor3fVertex3fSUN (
		JNIEnv *env, jobject obj,
		jfloat arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4,
		jfloat arg5,
		jfloat arg6,
		jfloat arg7)
	{

		if ( disp__glTexCoord2fColor3fVertex3fSUN == NULL ) return;

		disp__glTexCoord2fColor3fVertex3fSUN (
			(GLfloat) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5,
			(GLfloat) arg6,
			(GLfloat) arg7
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor3fVertex3fvSUN ( const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2fColor3fVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jfloatArray arg0,
		jfloatArray arg1,
		jfloatArray arg2)
	{
		jfloat *ptr0 = NULL;
		jfloat *ptr1 = NULL;
		jfloat *ptr2 = NULL;

		if ( disp__glTexCoord2fColor3fVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTexCoord2fColor3fVertex3fvSUN (
			(const GLfloat *) ptr0,
			(const GLfloat *) ptr1,
			(const GLfloat *) ptr2
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fNormal3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2fNormal3fVertex3fSUN (
		JNIEnv *env, jobject obj,
		jfloat arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4,
		jfloat arg5,
		jfloat arg6,
		jfloat arg7)
	{

		if ( disp__glTexCoord2fNormal3fVertex3fSUN == NULL ) return;

		disp__glTexCoord2fNormal3fVertex3fSUN (
			(GLfloat) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5,
			(GLfloat) arg6,
			(GLfloat) arg7
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fNormal3fVertex3fvSUN ( const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2fNormal3fVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jfloatArray arg0,
		jfloatArray arg1,
		jfloatArray arg2)
	{
		jfloat *ptr0 = NULL;
		jfloat *ptr1 = NULL;
		jfloat *ptr2 = NULL;

		if ( disp__glTexCoord2fNormal3fVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glTexCoord2fNormal3fVertex3fvSUN (
			(const GLfloat *) ptr0,
			(const GLfloat *) ptr1,
			(const GLfloat *) ptr2
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor4fNormal3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2fColor4fNormal3fVertex3fSUN (
		JNIEnv *env, jobject obj,
		jfloat arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4,
		jfloat arg5,
		jfloat arg6,
		jfloat arg7,
		jfloat arg8,
		jfloat arg9,
		jfloat arg10,
		jfloat arg11)
	{

		if ( disp__glTexCoord2fColor4fNormal3fVertex3fSUN == NULL ) return;

		disp__glTexCoord2fColor4fNormal3fVertex3fSUN (
			(GLfloat) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5,
			(GLfloat) arg6,
			(GLfloat) arg7,
			(GLfloat) arg8,
			(GLfloat) arg9,
			(GLfloat) arg10,
			(GLfloat) arg11
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor4fNormal3fVertex3fvSUN ( const GLfloat * , const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord2fColor4fNormal3fVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jfloatArray arg0,
		jfloatArray arg1,
		jfloatArray arg2,
		jfloatArray arg3)
	{
		jfloat *ptr0 = NULL;
		jfloat *ptr1 = NULL;
		jfloat *ptr2 = NULL;
		jfloat *ptr3 = NULL;

		if ( disp__glTexCoord2fColor4fNormal3fVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glTexCoord2fColor4fNormal3fVertex3fvSUN (
			(const GLfloat *) ptr0,
			(const GLfloat *) ptr1,
			(const GLfloat *) ptr2,
			(const GLfloat *) ptr3
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fColor4fNormal3fVertex4fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord4fColor4fNormal3fVertex4fSUN (
		JNIEnv *env, jobject obj,
		jfloat arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4,
		jfloat arg5,
		jfloat arg6,
		jfloat arg7,
		jfloat arg8,
		jfloat arg9,
		jfloat arg10,
		jfloat arg11,
		jfloat arg12,
		jfloat arg13,
		jfloat arg14)
	{

		if ( disp__glTexCoord4fColor4fNormal3fVertex4fSUN == NULL ) return;

		disp__glTexCoord4fColor4fNormal3fVertex4fSUN (
			(GLfloat) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5,
			(GLfloat) arg6,
			(GLfloat) arg7,
			(GLfloat) arg8,
			(GLfloat) arg9,
			(GLfloat) arg10,
			(GLfloat) arg11,
			(GLfloat) arg12,
			(GLfloat) arg13,
			(GLfloat) arg14
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fColor4fNormal3fVertex4fvSUN ( const GLfloat * , const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoord4fColor4fNormal3fVertex4fvSUN (
		JNIEnv *env, jobject obj,
		jfloatArray arg0,
		jfloatArray arg1,
		jfloatArray arg2,
		jfloatArray arg3)
	{
		jfloat *ptr0 = NULL;
		jfloat *ptr1 = NULL;
		jfloat *ptr2 = NULL;
		jfloat *ptr3 = NULL;

		if ( disp__glTexCoord4fColor4fNormal3fVertex4fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glTexCoord4fColor4fNormal3fVertex4fvSUN (
			(const GLfloat *) ptr0,
			(const GLfloat *) ptr1,
			(const GLfloat *) ptr2,
			(const GLfloat *) ptr3
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiVertex3fSUN (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3)
	{

		if ( disp__glReplacementCodeuiVertex3fSUN == NULL ) return;

		disp__glReplacementCodeuiVertex3fSUN (
			(GLenum) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiVertex3fvSUN ( const GLenum * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jintArray arg0,
		jfloatArray arg1)
	{
		jint *ptr0 = NULL;
		jfloat *ptr1 = NULL;

		if ( disp__glReplacementCodeuiVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glReplacementCodeuiVertex3fvSUN (
			(const GLenum *) ptr0,
			(const GLfloat *) ptr1
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor4ubVertex3fSUN ( GLenum , GLubyte , GLubyte , GLubyte , GLubyte , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiColor4ubVertex3fSUN (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbyte arg1,
		jbyte arg2,
		jbyte arg3,
		jbyte arg4,
		jfloat arg5,
		jfloat arg6,
		jfloat arg7)
	{

		if ( disp__glReplacementCodeuiColor4ubVertex3fSUN == NULL ) return;

		disp__glReplacementCodeuiColor4ubVertex3fSUN (
			(GLenum) arg0,
			(GLubyte) arg1,
			(GLubyte) arg2,
			(GLubyte) arg3,
			(GLubyte) arg4,
			(GLfloat) arg5,
			(GLfloat) arg6,
			(GLfloat) arg7
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor4ubVertex3fvSUN ( const GLenum * , const GLubyte * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiColor4ubVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jintArray arg0,
		jbyteArray arg1,
		jfloatArray arg2)
	{
		jint *ptr0 = NULL;
		jbyte *ptr1 = NULL;
		jfloat *ptr2 = NULL;

		if ( disp__glReplacementCodeuiColor4ubVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glReplacementCodeuiColor4ubVertex3fvSUN (
			(const GLenum *) ptr0,
			(const GLubyte *) ptr1,
			(const GLfloat *) ptr2
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor3fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiColor3fVertex3fSUN (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4,
		jfloat arg5,
		jfloat arg6)
	{

		if ( disp__glReplacementCodeuiColor3fVertex3fSUN == NULL ) return;

		disp__glReplacementCodeuiColor3fVertex3fSUN (
			(GLenum) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5,
			(GLfloat) arg6
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor3fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiColor3fVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jintArray arg0,
		jfloatArray arg1,
		jfloatArray arg2)
	{
		jint *ptr0 = NULL;
		jfloat *ptr1 = NULL;
		jfloat *ptr2 = NULL;

		if ( disp__glReplacementCodeuiColor3fVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glReplacementCodeuiColor3fVertex3fvSUN (
			(const GLenum *) ptr0,
			(const GLfloat *) ptr1,
			(const GLfloat *) ptr2
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiNormal3fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiNormal3fVertex3fSUN (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4,
		jfloat arg5,
		jfloat arg6)
	{

		if ( disp__glReplacementCodeuiNormal3fVertex3fSUN == NULL ) return;

		disp__glReplacementCodeuiNormal3fVertex3fSUN (
			(GLenum) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5,
			(GLfloat) arg6
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiNormal3fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiNormal3fVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jintArray arg0,
		jfloatArray arg1,
		jfloatArray arg2)
	{
		jint *ptr0 = NULL;
		jfloat *ptr1 = NULL;
		jfloat *ptr2 = NULL;

		if ( disp__glReplacementCodeuiNormal3fVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glReplacementCodeuiNormal3fVertex3fvSUN (
			(const GLenum *) ptr0,
			(const GLfloat *) ptr1,
			(const GLfloat *) ptr2
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor4fNormal3fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiColor4fNormal3fVertex3fSUN (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4,
		jfloat arg5,
		jfloat arg6,
		jfloat arg7,
		jfloat arg8,
		jfloat arg9,
		jfloat arg10)
	{

		if ( disp__glReplacementCodeuiColor4fNormal3fVertex3fSUN == NULL ) return;

		disp__glReplacementCodeuiColor4fNormal3fVertex3fSUN (
			(GLenum) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5,
			(GLfloat) arg6,
			(GLfloat) arg7,
			(GLfloat) arg8,
			(GLfloat) arg9,
			(GLfloat) arg10
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor4fNormal3fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiColor4fNormal3fVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jintArray arg0,
		jfloatArray arg1,
		jfloatArray arg2,
		jfloatArray arg3)
	{
		jint *ptr0 = NULL;
		jfloat *ptr1 = NULL;
		jfloat *ptr2 = NULL;
		jfloat *ptr3 = NULL;

		if ( disp__glReplacementCodeuiColor4fNormal3fVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glReplacementCodeuiColor4fNormal3fVertex3fvSUN (
			(const GLenum *) ptr0,
			(const GLfloat *) ptr1,
			(const GLfloat *) ptr2,
			(const GLfloat *) ptr3
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiTexCoord2fVertex3fSUN (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4,
		jfloat arg5)
	{

		if ( disp__glReplacementCodeuiTexCoord2fVertex3fSUN == NULL ) return;

		disp__glReplacementCodeuiTexCoord2fVertex3fSUN (
			(GLenum) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiTexCoord2fVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jintArray arg0,
		jfloatArray arg1,
		jfloatArray arg2)
	{
		jint *ptr0 = NULL;
		jfloat *ptr1 = NULL;
		jfloat *ptr2 = NULL;

		if ( disp__glReplacementCodeuiTexCoord2fVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glReplacementCodeuiTexCoord2fVertex3fvSUN (
			(const GLenum *) ptr0,
			(const GLfloat *) ptr1,
			(const GLfloat *) ptr2
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4,
		jfloat arg5,
		jfloat arg6,
		jfloat arg7,
		jfloat arg8)
	{

		if ( disp__glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN == NULL ) return;

		disp__glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN (
			(GLenum) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5,
			(GLfloat) arg6,
			(GLfloat) arg7,
			(GLfloat) arg8
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jintArray arg0,
		jfloatArray arg1,
		jfloatArray arg2,
		jfloatArray arg3)
	{
		jint *ptr0 = NULL;
		jfloat *ptr1 = NULL;
		jfloat *ptr2 = NULL;
		jfloat *ptr3 = NULL;

		if ( disp__glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN (
			(const GLenum *) ptr0,
			(const GLfloat *) ptr1,
			(const GLfloat *) ptr2,
			(const GLfloat *) ptr3
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4,
		jfloat arg5,
		jfloat arg6,
		jfloat arg7,
		jfloat arg8,
		jfloat arg9,
		jfloat arg10,
		jfloat arg11,
		jfloat arg12)
	{

		if ( disp__glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN == NULL ) return;

		disp__glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN (
			(GLenum) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5,
			(GLfloat) arg6,
			(GLfloat) arg7,
			(GLfloat) arg8,
			(GLfloat) arg9,
			(GLfloat) arg10,
			(GLfloat) arg11,
			(GLfloat) arg12
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN (
		JNIEnv *env, jobject obj,
		jintArray arg0,
		jfloatArray arg1,
		jfloatArray arg2,
		jfloatArray arg3,
		jfloatArray arg4)
	{
		jint *ptr0 = NULL;
		jfloat *ptr1 = NULL;
		jfloat *ptr2 = NULL;
		jfloat *ptr3 = NULL;
		jfloat *ptr4 = NULL;

		if ( disp__glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		if(arg4!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg4, 0);
		}
		disp__glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN (
			(const GLenum *) ptr0,
			(const GLfloat *) ptr1,
			(const GLfloat *) ptr2,
			(const GLfloat *) ptr3,
			(const GLfloat *) ptr4
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendFuncSeparateEXT ( GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBlendFuncSeparateEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3)
	{

		if ( disp__glBlendFuncSeparateEXT == NULL ) return;

		disp__glBlendFuncSeparateEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLenum) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendFuncSeparateINGR ( GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBlendFuncSeparateINGR (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3)
	{

		if ( disp__glBlendFuncSeparateINGR == NULL ) return;

		disp__glBlendFuncSeparateINGR (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLenum) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexWeightfEXT ( GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexWeightfEXT (
		JNIEnv *env, jobject obj,
		jfloat arg0)
	{

		if ( disp__glVertexWeightfEXT == NULL ) return;

		disp__glVertexWeightfEXT (
			(GLfloat) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexWeightfvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexWeightfvEXT (
		JNIEnv *env, jobject obj,
		jfloatArray arg0)
	{
		jfloat *ptr0 = NULL;

		if ( disp__glVertexWeightfvEXT == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		disp__glVertexWeightfvEXT (
			(const GLfloat *) ptr0
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexWeightPointerEXT ( GLsizei , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexWeightPointerEXT__III_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbyteArray arg3)
	{
		jbyte *ptr3 = NULL;

		if ( disp__glVertexWeightPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVertexWeightPointerEXT (
			(GLsizei) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexWeightPointerEXT__III_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jshortArray arg3)
	{
		jshort *ptr3 = NULL;

		if ( disp__glVertexWeightPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVertexWeightPointerEXT (
			(GLsizei) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexWeightPointerEXT__III_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jintArray arg3)
	{
		jint *ptr3 = NULL;

		if ( disp__glVertexWeightPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVertexWeightPointerEXT (
			(GLsizei) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexWeightPointerEXT__III_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3)
	{
		jfloat *ptr3 = NULL;

		if ( disp__glVertexWeightPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVertexWeightPointerEXT (
			(GLsizei) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexWeightPointerEXT__III_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jdoubleArray arg3)
	{
		jdouble *ptr3 = NULL;

		if ( disp__glVertexWeightPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVertexWeightPointerEXT (
			(GLsizei) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexWeightPointerEXT__III_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbooleanArray arg3)
	{
		jboolean *ptr3 = NULL;

		if ( disp__glVertexWeightPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVertexWeightPointerEXT (
			(GLsizei) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexWeightPointerEXT__III_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jlongArray arg3)
	{
		jlong *ptr3 = NULL;

		if ( disp__glVertexWeightPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVertexWeightPointerEXT (
			(GLsizei) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFlushVertexArrayRangeNV ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFlushVertexArrayRangeNV (
		JNIEnv *env, jobject obj)
	{

		if ( disp__glFlushVertexArrayRangeNV == NULL ) return;

		disp__glFlushVertexArrayRangeNV (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexArrayRangeNV ( GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexArrayRangeNV__I_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbyteArray arg1)
	{
		jbyte *ptr1 = NULL;

		if ( disp__glVertexArrayRangeNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexArrayRangeNV (
			(GLsizei) arg0,
			(const GLvoid *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexArrayRangeNV__I_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glVertexArrayRangeNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexArrayRangeNV (
			(GLsizei) arg0,
			(const GLvoid *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexArrayRangeNV__I_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glVertexArrayRangeNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexArrayRangeNV (
			(GLsizei) arg0,
			(const GLvoid *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexArrayRangeNV__I_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glVertexArrayRangeNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexArrayRangeNV (
			(GLsizei) arg0,
			(const GLvoid *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexArrayRangeNV__I_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdoubleArray arg1)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glVertexArrayRangeNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexArrayRangeNV (
			(GLsizei) arg0,
			(const GLvoid *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexArrayRangeNV__I_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbooleanArray arg1)
	{
		jboolean *ptr1 = NULL;

		if ( disp__glVertexArrayRangeNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexArrayRangeNV (
			(GLsizei) arg0,
			(const GLvoid *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexArrayRangeNV__I_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jlongArray arg1)
	{
		jlong *ptr1 = NULL;

		if ( disp__glVertexArrayRangeNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexArrayRangeNV (
			(GLsizei) arg0,
			(const GLvoid *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerParameterfvNV ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCombinerParameterfvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glCombinerParameterfvNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glCombinerParameterfvNV (
			(GLenum) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerParameterfNV ( GLenum , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCombinerParameterfNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1)
	{

		if ( disp__glCombinerParameterfNV == NULL ) return;

		disp__glCombinerParameterfNV (
			(GLenum) arg0,
			(GLfloat) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerParameterivNV ( GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCombinerParameterivNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glCombinerParameterivNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glCombinerParameterivNV (
			(GLenum) arg0,
			(const GLint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerParameteriNV ( GLenum , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCombinerParameteriNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{

		if ( disp__glCombinerParameteriNV == NULL ) return;

		disp__glCombinerParameteriNV (
			(GLenum) arg0,
			(GLint) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerInputNV ( GLenum , GLenum , GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCombinerInputNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5)
	{

		if ( disp__glCombinerInputNV == NULL ) return;

		disp__glCombinerInputNV (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(GLenum) arg5
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerOutputNV ( GLenum , GLenum , GLenum , GLenum , GLenum , GLenum , GLenum , GLboolean , GLboolean , GLboolean ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCombinerOutputNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jboolean arg7,
		jboolean arg8,
		jboolean arg9)
	{

		if ( disp__glCombinerOutputNV == NULL ) return;

		disp__glCombinerOutputNV (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(GLenum) arg5,
			(GLenum) arg6,
			(GLboolean) arg7,
			(GLboolean) arg8,
			(GLboolean) arg9
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFinalCombinerInputNV ( GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFinalCombinerInputNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3)
	{

		if ( disp__glFinalCombinerInputNV == NULL ) return;

		disp__glFinalCombinerInputNV (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLenum) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCombinerInputParameterfvNV ( GLenum , GLenum , GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCombinerInputParameterfvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jfloatArray arg4)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jfloat *ptr4 = NULL;

		if ( disp__glGetCombinerInputParameterfvNV == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		disp__glGetCombinerInputParameterfvNV (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLfloat *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCombinerInputParameterivNV ( GLenum , GLenum , GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCombinerInputParameterivNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jintArray arg4)
	{
		jboolean isCopiedArray4 = JNI_FALSE;
		jint *ptr4 = NULL;

		if ( disp__glGetCombinerInputParameterivNV == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg4, &isCopiedArray4);
		}
		disp__glGetCombinerInputParameterivNV (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLint *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, (isCopiedArray4 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCombinerOutputParameterfvNV ( GLenum , GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCombinerOutputParameterfvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;

		if ( disp__glGetCombinerOutputParameterfvNV == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetCombinerOutputParameterfvNV (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLfloat *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCombinerOutputParameterivNV ( GLenum , GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCombinerOutputParameterivNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jintArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;

		if ( disp__glGetCombinerOutputParameterivNV == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetCombinerOutputParameterivNV (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLint *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFinalCombinerInputParameterfvNV ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetFinalCombinerInputParameterfvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetFinalCombinerInputParameterfvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetFinalCombinerInputParameterfvNV (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFinalCombinerInputParameterivNV ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetFinalCombinerInputParameterivNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetFinalCombinerInputParameterivNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetFinalCombinerInputParameterivNV (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiModeDrawArraysIBM ( GLenum , const GLint * , const GLsizei * , GLsizei , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiModeDrawArraysIBM (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1,
		jintArray arg2,
		jint arg3,
		jint arg4)
	{
		jint *ptr1 = NULL;
		jint *ptr2 = NULL;

		if ( disp__glMultiModeDrawArraysIBM == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glMultiModeDrawArraysIBM (
			(GLenum) arg0,
			(const GLint *) ptr1,
			(const GLsizei *) ptr2,
			(GLsizei) arg3,
			(GLint) arg4
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiModeDrawElementsIBM ( const GLenum * , const GLsizei * , GLenum , const GLvoid * * , GLsizei , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiModeDrawElementsIBM___3I_3II_3_3BII (
		JNIEnv *env, jobject obj,
		jintArray arg0,
		jintArray arg1,
		jint arg2,
		jbyteArray arg3,
		jint arg4,
		jint arg5)
	{
		jint *ptr0 = NULL;
		jint *ptr1 = NULL;
		jbyte *ptr3 = NULL;

		if ( disp__glMultiModeDrawElementsIBM == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMultiModeDrawElementsIBM (
			(const GLenum *) ptr0,
			(const GLsizei *) ptr1,
			(GLenum) arg2,
			(const GLvoid **) ptr3,
			(GLsizei) arg4,
			(GLint) arg5
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiModeDrawElementsIBM___3I_3II_3_3SII (
		JNIEnv *env, jobject obj,
		jintArray arg0,
		jintArray arg1,
		jint arg2,
		jshortArray arg3,
		jint arg4,
		jint arg5)
	{
		jint *ptr0 = NULL;
		jint *ptr1 = NULL;
		jshort *ptr3 = NULL;

		if ( disp__glMultiModeDrawElementsIBM == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMultiModeDrawElementsIBM (
			(const GLenum *) ptr0,
			(const GLsizei *) ptr1,
			(GLenum) arg2,
			(const GLvoid **) ptr3,
			(GLsizei) arg4,
			(GLint) arg5
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiModeDrawElementsIBM___3I_3II_3_3III (
		JNIEnv *env, jobject obj,
		jintArray arg0,
		jintArray arg1,
		jint arg2,
		jintArray arg3,
		jint arg4,
		jint arg5)
	{
		jint *ptr0 = NULL;
		jint *ptr1 = NULL;
		jint *ptr3 = NULL;

		if ( disp__glMultiModeDrawElementsIBM == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMultiModeDrawElementsIBM (
			(const GLenum *) ptr0,
			(const GLsizei *) ptr1,
			(GLenum) arg2,
			(const GLvoid **) ptr3,
			(GLsizei) arg4,
			(GLint) arg5
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiModeDrawElementsIBM___3I_3II_3_3FII (
		JNIEnv *env, jobject obj,
		jintArray arg0,
		jintArray arg1,
		jint arg2,
		jfloatArray arg3,
		jint arg4,
		jint arg5)
	{
		jint *ptr0 = NULL;
		jint *ptr1 = NULL;
		jfloat *ptr3 = NULL;

		if ( disp__glMultiModeDrawElementsIBM == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMultiModeDrawElementsIBM (
			(const GLenum *) ptr0,
			(const GLsizei *) ptr1,
			(GLenum) arg2,
			(const GLvoid **) ptr3,
			(GLsizei) arg4,
			(GLint) arg5
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiModeDrawElementsIBM___3I_3II_3_3DII (
		JNIEnv *env, jobject obj,
		jintArray arg0,
		jintArray arg1,
		jint arg2,
		jdoubleArray arg3,
		jint arg4,
		jint arg5)
	{
		jint *ptr0 = NULL;
		jint *ptr1 = NULL;
		jdouble *ptr3 = NULL;

		if ( disp__glMultiModeDrawElementsIBM == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMultiModeDrawElementsIBM (
			(const GLenum *) ptr0,
			(const GLsizei *) ptr1,
			(GLenum) arg2,
			(const GLvoid **) ptr3,
			(GLsizei) arg4,
			(GLint) arg5
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiModeDrawElementsIBM___3I_3II_3_3ZII (
		JNIEnv *env, jobject obj,
		jintArray arg0,
		jintArray arg1,
		jint arg2,
		jbooleanArray arg3,
		jint arg4,
		jint arg5)
	{
		jint *ptr0 = NULL;
		jint *ptr1 = NULL;
		jboolean *ptr3 = NULL;

		if ( disp__glMultiModeDrawElementsIBM == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMultiModeDrawElementsIBM (
			(const GLenum *) ptr0,
			(const GLsizei *) ptr1,
			(GLenum) arg2,
			(const GLvoid **) ptr3,
			(GLsizei) arg4,
			(GLint) arg5
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMultiModeDrawElementsIBM___3I_3II_3_3JII (
		JNIEnv *env, jobject obj,
		jintArray arg0,
		jintArray arg1,
		jint arg2,
		jlongArray arg3,
		jint arg4,
		jint arg5)
	{
		jint *ptr0 = NULL;
		jint *ptr1 = NULL;
		jlong *ptr3 = NULL;

		if ( disp__glMultiModeDrawElementsIBM == NULL ) return;

		if(arg0!=NULL)
		{
			ptr0 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg0, 0);
		}
		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg3!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glMultiModeDrawElementsIBM (
			(const GLenum *) ptr0,
			(const GLsizei *) ptr1,
			(GLenum) arg2,
			(const GLvoid **) ptr3,
			(GLsizei) arg4,
			(GLint) arg5
		);

		if(arg0!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg0, ptr0, JNI_ABORT);
		}
		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorPointerListIBM ( GLint , GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointerListIBM__III_3_3BI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbyteArray arg3,
		jint arg4)
	{
		jbyte *ptr3 = NULL;

		if ( disp__glColorPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glColorPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointerListIBM__III_3_3SI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jshortArray arg3,
		jint arg4)
	{
		jshort *ptr3 = NULL;

		if ( disp__glColorPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glColorPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointerListIBM__III_3_3II (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jintArray arg3,
		jint arg4)
	{
		jint *ptr3 = NULL;

		if ( disp__glColorPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glColorPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointerListIBM__III_3_3FI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3,
		jint arg4)
	{
		jfloat *ptr3 = NULL;

		if ( disp__glColorPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glColorPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointerListIBM__III_3_3DI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jdoubleArray arg3,
		jint arg4)
	{
		jdouble *ptr3 = NULL;

		if ( disp__glColorPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glColorPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointerListIBM__III_3_3ZI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbooleanArray arg3,
		jint arg4)
	{
		jboolean *ptr3 = NULL;

		if ( disp__glColorPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glColorPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorPointerListIBM__III_3_3JI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jlongArray arg3,
		jint arg4)
	{
		jlong *ptr3 = NULL;

		if ( disp__glColorPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glColorPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColorPointerListIBM ( GLint , GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColorPointerListIBM__III_3_3BI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbyteArray arg3,
		jint arg4)
	{
		jbyte *ptr3 = NULL;

		if ( disp__glSecondaryColorPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glSecondaryColorPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColorPointerListIBM__III_3_3SI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jshortArray arg3,
		jint arg4)
	{
		jshort *ptr3 = NULL;

		if ( disp__glSecondaryColorPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glSecondaryColorPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColorPointerListIBM__III_3_3II (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jintArray arg3,
		jint arg4)
	{
		jint *ptr3 = NULL;

		if ( disp__glSecondaryColorPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glSecondaryColorPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColorPointerListIBM__III_3_3FI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3,
		jint arg4)
	{
		jfloat *ptr3 = NULL;

		if ( disp__glSecondaryColorPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glSecondaryColorPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColorPointerListIBM__III_3_3DI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jdoubleArray arg3,
		jint arg4)
	{
		jdouble *ptr3 = NULL;

		if ( disp__glSecondaryColorPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glSecondaryColorPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColorPointerListIBM__III_3_3ZI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbooleanArray arg3,
		jint arg4)
	{
		jboolean *ptr3 = NULL;

		if ( disp__glSecondaryColorPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glSecondaryColorPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSecondaryColorPointerListIBM__III_3_3JI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jlongArray arg3,
		jint arg4)
	{
		jlong *ptr3 = NULL;

		if ( disp__glSecondaryColorPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glSecondaryColorPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlagPointerListIBM ( GLint , const GLboolean * * , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEdgeFlagPointerListIBM (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbooleanArray arg1,
		jint arg2)
	{
		jboolean *ptr1 = NULL;

		if ( disp__glEdgeFlagPointerListIBM == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glEdgeFlagPointerListIBM (
			(GLint) arg0,
			(const GLboolean **) ptr1,
			(GLint) arg2
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoordPointerListIBM ( GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoordPointerListIBM__II_3_3BI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2,
		jint arg3)
	{
		jbyte *ptr2 = NULL;

		if ( disp__glFogCoordPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFogCoordPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoordPointerListIBM__II_3_3SI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2,
		jint arg3)
	{
		jshort *ptr2 = NULL;

		if ( disp__glFogCoordPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFogCoordPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoordPointerListIBM__II_3_3II (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2,
		jint arg3)
	{
		jint *ptr2 = NULL;

		if ( disp__glFogCoordPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFogCoordPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoordPointerListIBM__II_3_3FI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2,
		jint arg3)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glFogCoordPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFogCoordPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoordPointerListIBM__II_3_3DI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2,
		jint arg3)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glFogCoordPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFogCoordPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoordPointerListIBM__II_3_3ZI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2,
		jint arg3)
	{
		jboolean *ptr2 = NULL;

		if ( disp__glFogCoordPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFogCoordPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFogCoordPointerListIBM__II_3_3JI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jlongArray arg2,
		jint arg3)
	{
		jlong *ptr2 = NULL;

		if ( disp__glFogCoordPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glFogCoordPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexPointerListIBM ( GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointerListIBM__II_3_3BI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2,
		jint arg3)
	{
		jbyte *ptr2 = NULL;

		if ( disp__glIndexPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glIndexPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointerListIBM__II_3_3SI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2,
		jint arg3)
	{
		jshort *ptr2 = NULL;

		if ( disp__glIndexPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glIndexPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointerListIBM__II_3_3II (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2,
		jint arg3)
	{
		jint *ptr2 = NULL;

		if ( disp__glIndexPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glIndexPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointerListIBM__II_3_3FI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2,
		jint arg3)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glIndexPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glIndexPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointerListIBM__II_3_3DI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2,
		jint arg3)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glIndexPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glIndexPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointerListIBM__II_3_3ZI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2,
		jint arg3)
	{
		jboolean *ptr2 = NULL;

		if ( disp__glIndexPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glIndexPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIndexPointerListIBM__II_3_3JI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jlongArray arg2,
		jint arg3)
	{
		jlong *ptr2 = NULL;

		if ( disp__glIndexPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glIndexPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalPointerListIBM ( GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointerListIBM__II_3_3BI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2,
		jint arg3)
	{
		jbyte *ptr2 = NULL;

		if ( disp__glNormalPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glNormalPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointerListIBM__II_3_3SI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2,
		jint arg3)
	{
		jshort *ptr2 = NULL;

		if ( disp__glNormalPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glNormalPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointerListIBM__II_3_3II (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2,
		jint arg3)
	{
		jint *ptr2 = NULL;

		if ( disp__glNormalPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glNormalPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointerListIBM__II_3_3FI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2,
		jint arg3)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glNormalPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glNormalPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointerListIBM__II_3_3DI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2,
		jint arg3)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glNormalPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glNormalPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointerListIBM__II_3_3ZI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2,
		jint arg3)
	{
		jboolean *ptr2 = NULL;

		if ( disp__glNormalPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glNormalPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalPointerListIBM__II_3_3JI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jlongArray arg2,
		jint arg3)
	{
		jlong *ptr2 = NULL;

		if ( disp__glNormalPointerListIBM == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glNormalPointerListIBM (
			(GLenum) arg0,
			(GLint) arg1,
			(const GLvoid **) ptr2,
			(GLint) arg3
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoordPointerListIBM ( GLint , GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointerListIBM__III_3_3BI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbyteArray arg3,
		jint arg4)
	{
		jbyte *ptr3 = NULL;

		if ( disp__glTexCoordPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glTexCoordPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointerListIBM__III_3_3SI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jshortArray arg3,
		jint arg4)
	{
		jshort *ptr3 = NULL;

		if ( disp__glTexCoordPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glTexCoordPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointerListIBM__III_3_3II (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jintArray arg3,
		jint arg4)
	{
		jint *ptr3 = NULL;

		if ( disp__glTexCoordPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glTexCoordPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointerListIBM__III_3_3FI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3,
		jint arg4)
	{
		jfloat *ptr3 = NULL;

		if ( disp__glTexCoordPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glTexCoordPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointerListIBM__III_3_3DI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jdoubleArray arg3,
		jint arg4)
	{
		jdouble *ptr3 = NULL;

		if ( disp__glTexCoordPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glTexCoordPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointerListIBM__III_3_3ZI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbooleanArray arg3,
		jint arg4)
	{
		jboolean *ptr3 = NULL;

		if ( disp__glTexCoordPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glTexCoordPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexCoordPointerListIBM__III_3_3JI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jlongArray arg3,
		jint arg4)
	{
		jlong *ptr3 = NULL;

		if ( disp__glTexCoordPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glTexCoordPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexPointerListIBM ( GLint , GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointerListIBM__III_3_3BI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbyteArray arg3,
		jint arg4)
	{
		jbyte *ptr3 = NULL;

		if ( disp__glVertexPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVertexPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointerListIBM__III_3_3SI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jshortArray arg3,
		jint arg4)
	{
		jshort *ptr3 = NULL;

		if ( disp__glVertexPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVertexPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointerListIBM__III_3_3II (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jintArray arg3,
		jint arg4)
	{
		jint *ptr3 = NULL;

		if ( disp__glVertexPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVertexPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointerListIBM__III_3_3FI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3,
		jint arg4)
	{
		jfloat *ptr3 = NULL;

		if ( disp__glVertexPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVertexPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointerListIBM__III_3_3DI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jdoubleArray arg3,
		jint arg4)
	{
		jdouble *ptr3 = NULL;

		if ( disp__glVertexPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVertexPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointerListIBM__III_3_3ZI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbooleanArray arg3,
		jint arg4)
	{
		jboolean *ptr3 = NULL;

		if ( disp__glVertexPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVertexPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexPointerListIBM__III_3_3JI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jlongArray arg3,
		jint arg4)
	{
		jlong *ptr3 = NULL;

		if ( disp__glVertexPointerListIBM == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVertexPointerListIBM (
			(GLint) arg0,
			(GLenum) arg1,
			(GLint) arg2,
			(const GLvoid **) ptr3,
			(GLint) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTbufferMask3DFX ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTbufferMask3DFX (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glTbufferMask3DFX == NULL ) return;

		disp__glTbufferMask3DFX (
			(GLuint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleMaskEXT ( GLclampf , GLboolean ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSampleMaskEXT (
		JNIEnv *env, jobject obj,
		jfloat arg0,
		jboolean arg1)
	{

		if ( disp__glSampleMaskEXT == NULL ) return;

		disp__glSampleMaskEXT (
			(GLclampf) arg0,
			(GLboolean) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSamplePatternEXT ( GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSamplePatternEXT (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glSamplePatternEXT == NULL ) return;

		disp__glSamplePatternEXT (
			(GLenum) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTextureColorMaskSGIS ( GLboolean , GLboolean , GLboolean , GLboolean ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTextureColorMaskSGIS (
		JNIEnv *env, jobject obj,
		jboolean arg0,
		jboolean arg1,
		jboolean arg2,
		jboolean arg3)
	{

		if ( disp__glTextureColorMaskSGIS == NULL ) return;

		disp__glTextureColorMaskSGIS (
			(GLboolean) arg0,
			(GLboolean) arg1,
			(GLboolean) arg2,
			(GLboolean) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIglooInterfaceSGIX ( GLenum , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIglooInterfaceSGIX__I_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbyteArray arg1)
	{
		jbyte *ptr1 = NULL;

		if ( disp__glIglooInterfaceSGIX == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glIglooInterfaceSGIX (
			(GLenum) arg0,
			(const GLvoid *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIglooInterfaceSGIX__I_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glIglooInterfaceSGIX == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glIglooInterfaceSGIX (
			(GLenum) arg0,
			(const GLvoid *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIglooInterfaceSGIX__I_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glIglooInterfaceSGIX == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glIglooInterfaceSGIX (
			(GLenum) arg0,
			(const GLvoid *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIglooInterfaceSGIX__I_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glIglooInterfaceSGIX == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glIglooInterfaceSGIX (
			(GLenum) arg0,
			(const GLvoid *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIglooInterfaceSGIX__I_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdoubleArray arg1)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glIglooInterfaceSGIX == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glIglooInterfaceSGIX (
			(GLenum) arg0,
			(const GLvoid *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIglooInterfaceSGIX__I_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbooleanArray arg1)
	{
		jboolean *ptr1 = NULL;

		if ( disp__glIglooInterfaceSGIX == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glIglooInterfaceSGIX (
			(GLenum) arg0,
			(const GLvoid *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glIglooInterfaceSGIX__I_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jlongArray arg1)
	{
		jlong *ptr1 = NULL;

		if ( disp__glIglooInterfaceSGIX == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glIglooInterfaceSGIX (
			(GLenum) arg0,
			(const GLvoid *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGenFencesNV ( GLsizei , GLuint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGenFencesNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if ( disp__glGenFencesNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, &isCopiedArray1);
		}
		disp__glGenFencesNV (
			(GLsizei) arg0,
			(GLuint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteFencesNV ( GLsizei , const GLuint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDeleteFencesNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glDeleteFencesNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glDeleteFencesNV (
			(GLsizei) arg0,
			(const GLuint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSetFenceNV ( GLuint , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSetFenceNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{

		if ( disp__glSetFenceNV == NULL ) return;

		disp__glSetFenceNV (
			(GLuint) arg0,
			(GLenum) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glTestFenceNV ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_GLFuncJauJNI_glTestFenceNV (
		JNIEnv *env, jobject obj,
		jint arg0)
	{
		jboolean ret;


		if ( disp__glTestFenceNV == NULL ) return 0;

		ret = (jboolean) disp__glTestFenceNV (
			(GLuint) arg0
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFinishFenceNV ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glFinishFenceNV (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glFinishFenceNV == NULL ) return;

		disp__glFinishFenceNV (
			(GLuint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsFenceNV ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_GLFuncJauJNI_glIsFenceNV (
		JNIEnv *env, jobject obj,
		jint arg0)
	{
		jboolean ret;


		if ( disp__glIsFenceNV == NULL ) return 0;

		ret = (jboolean) disp__glIsFenceNV (
			(GLuint) arg0
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFenceivNV ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetFenceivNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetFenceivNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetFenceivNV (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapControlPointsNV ( GLenum , GLuint , GLenum , GLsizei , GLsizei , GLint , GLint , GLboolean , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMapControlPointsNV__IIIIIIIZ_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jboolean arg7,
		jbyteArray arg8)
	{
		jbyte *ptr8 = NULL;

		if ( disp__glMapControlPointsNV == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glMapControlPointsNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLint) arg5,
			(GLint) arg6,
			(GLboolean) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMapControlPointsNV__IIIIIIIZ_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jboolean arg7,
		jshortArray arg8)
	{
		jshort *ptr8 = NULL;

		if ( disp__glMapControlPointsNV == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glMapControlPointsNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLint) arg5,
			(GLint) arg6,
			(GLboolean) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMapControlPointsNV__IIIIIIIZ_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jboolean arg7,
		jintArray arg8)
	{
		jint *ptr8 = NULL;

		if ( disp__glMapControlPointsNV == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glMapControlPointsNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLint) arg5,
			(GLint) arg6,
			(GLboolean) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMapControlPointsNV__IIIIIIIZ_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jboolean arg7,
		jfloatArray arg8)
	{
		jfloat *ptr8 = NULL;

		if ( disp__glMapControlPointsNV == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glMapControlPointsNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLint) arg5,
			(GLint) arg6,
			(GLboolean) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMapControlPointsNV__IIIIIIIZ_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jboolean arg7,
		jdoubleArray arg8)
	{
		jdouble *ptr8 = NULL;

		if ( disp__glMapControlPointsNV == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glMapControlPointsNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLint) arg5,
			(GLint) arg6,
			(GLboolean) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMapControlPointsNV__IIIIIIIZ_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jboolean arg7,
		jbooleanArray arg8)
	{
		jboolean *ptr8 = NULL;

		if ( disp__glMapControlPointsNV == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glMapControlPointsNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLint) arg5,
			(GLint) arg6,
			(GLboolean) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMapControlPointsNV__IIIIIIIZ_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jboolean arg7,
		jlongArray arg8)
	{
		jlong *ptr8 = NULL;

		if ( disp__glMapControlPointsNV == NULL ) return;

		if(arg8!=NULL)
		{
			ptr8 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg8, 0);
		}
		disp__glMapControlPointsNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLint) arg5,
			(GLint) arg6,
			(GLboolean) arg7,
			(const GLvoid *) ptr8
		);

		if(arg8!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg8, ptr8, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapParameterivNV ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMapParameterivNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glMapParameterivNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glMapParameterivNV (
			(GLenum) arg0,
			(GLenum) arg1,
			(const GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapParameterfvNV ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glMapParameterfvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glMapParameterfvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glMapParameterfvNV (
			(GLenum) arg0,
			(GLenum) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapControlPointsNV ( GLenum , GLuint , GLenum , GLsizei , GLsizei , GLboolean , GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMapControlPointsNV__IIIIIZ_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jboolean arg5,
		jbyteArray arg6)
	{
		jboolean isCopiedArray6 = JNI_FALSE;
		jbyte *ptr6 = NULL;

		if ( disp__glGetMapControlPointsNV == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg6, &isCopiedArray6);
		}
		disp__glGetMapControlPointsNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLboolean) arg5,
			(GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMapControlPointsNV__IIIIIZ_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jboolean arg5,
		jshortArray arg6)
	{
		jboolean isCopiedArray6 = JNI_FALSE;
		jshort *ptr6 = NULL;

		if ( disp__glGetMapControlPointsNV == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg6, &isCopiedArray6);
		}
		disp__glGetMapControlPointsNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLboolean) arg5,
			(GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMapControlPointsNV__IIIIIZ_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jboolean arg5,
		jintArray arg6)
	{
		jboolean isCopiedArray6 = JNI_FALSE;
		jint *ptr6 = NULL;

		if ( disp__glGetMapControlPointsNV == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg6, &isCopiedArray6);
		}
		disp__glGetMapControlPointsNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLboolean) arg5,
			(GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMapControlPointsNV__IIIIIZ_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jboolean arg5,
		jfloatArray arg6)
	{
		jboolean isCopiedArray6 = JNI_FALSE;
		jfloat *ptr6 = NULL;

		if ( disp__glGetMapControlPointsNV == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg6, &isCopiedArray6);
		}
		disp__glGetMapControlPointsNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLboolean) arg5,
			(GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMapControlPointsNV__IIIIIZ_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jboolean arg5,
		jdoubleArray arg6)
	{
		jboolean isCopiedArray6 = JNI_FALSE;
		jdouble *ptr6 = NULL;

		if ( disp__glGetMapControlPointsNV == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg6, &isCopiedArray6);
		}
		disp__glGetMapControlPointsNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLboolean) arg5,
			(GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMapControlPointsNV__IIIIIZ_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jboolean arg5,
		jbooleanArray arg6)
	{
		jboolean isCopiedArray6 = JNI_FALSE;
		jboolean *ptr6 = NULL;

		if ( disp__glGetMapControlPointsNV == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg6, &isCopiedArray6);
		}
		disp__glGetMapControlPointsNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLboolean) arg5,
			(GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMapControlPointsNV__IIIIIZ_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jboolean arg5,
		jlongArray arg6)
	{
		jboolean isCopiedArray6 = JNI_FALSE;
		jlong *ptr6 = NULL;

		if ( disp__glGetMapControlPointsNV == NULL ) return;

		if(arg6!=NULL)
		{
			ptr6 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg6, &isCopiedArray6);
		}
		disp__glGetMapControlPointsNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLsizei) arg4,
			(GLboolean) arg5,
			(GLvoid *) ptr6
		);

		if(arg6!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg6, ptr6, (isCopiedArray6 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapParameterivNV ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMapParameterivNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetMapParameterivNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetMapParameterivNV (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapParameterfvNV ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMapParameterfvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetMapParameterfvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetMapParameterfvNV (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapAttribParameterivNV ( GLenum , GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMapAttribParameterivNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jintArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;

		if ( disp__glGetMapAttribParameterivNV == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetMapAttribParameterivNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLint *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapAttribParameterfvNV ( GLenum , GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetMapAttribParameterfvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;

		if ( disp__glGetMapAttribParameterfvNV == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetMapAttribParameterfvNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLfloat *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalMapsNV ( GLenum , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEvalMapsNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{

		if ( disp__glEvalMapsNV == NULL ) return;

		disp__glEvalMapsNV (
			(GLenum) arg0,
			(GLenum) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerStageParameterfvNV ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glCombinerStageParameterfvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glCombinerStageParameterfvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glCombinerStageParameterfvNV (
			(GLenum) arg0,
			(GLenum) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCombinerStageParameterfvNV ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetCombinerStageParameterfvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetCombinerStageParameterfvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetCombinerStageParameterfvNV (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindProgramNV ( GLenum , GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBindProgramNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{

		if ( disp__glBindProgramNV == NULL ) return;

		disp__glBindProgramNV (
			(GLenum) arg0,
			(GLuint) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteProgramsNV ( GLsizei , const GLuint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDeleteProgramsNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glDeleteProgramsNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glDeleteProgramsNV (
			(GLsizei) arg0,
			(const GLuint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glExecuteProgramNV ( GLenum , GLuint , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glExecuteProgramNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glExecuteProgramNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glExecuteProgramNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGenProgramsNV ( GLsizei , GLuint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGenProgramsNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if ( disp__glGenProgramsNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, &isCopiedArray1);
		}
		disp__glGenProgramsNV (
			(GLsizei) arg0,
			(GLuint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glAreProgramsResidentNV ( GLsizei , const GLuint * , GLboolean * ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_GLFuncJauJNI_glAreProgramsResidentNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1,
		jbooleanArray arg2)
	{
		jboolean ret;

		jint *ptr1 = NULL;
		jboolean isCopiedArray2 = JNI_FALSE;
		jboolean *ptr2 = NULL;

		if ( disp__glAreProgramsResidentNV == NULL ) return 0;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		ret = (jboolean) disp__glAreProgramsResidentNV (
			(GLsizei) arg0,
			(const GLuint *) ptr1,
			(GLboolean *) ptr2
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRequestResidentProgramsNV ( GLsizei , const GLuint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glRequestResidentProgramsNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glRequestResidentProgramsNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glRequestResidentProgramsNV (
			(GLsizei) arg0,
			(const GLuint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetProgramParameterfvNV ( GLenum , GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetProgramParameterfvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jfloat *ptr3 = NULL;

		if ( disp__glGetProgramParameterfvNV == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetProgramParameterfvNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLfloat *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetProgramParameterdvNV ( GLenum , GLuint , GLenum , GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetProgramParameterdvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jdoubleArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jdouble *ptr3 = NULL;

		if ( disp__glGetProgramParameterdvNV == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetProgramParameterdvNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLdouble *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetProgramivNV ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetProgramivNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetProgramivNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetProgramivNV (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetProgramStringNV ( GLuint , GLenum , GLubyte * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetProgramStringNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jbyte *ptr2 = NULL;

		if ( disp__glGetProgramStringNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetProgramStringNV (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLubyte *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTrackMatrixivNV ( GLenum , GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTrackMatrixivNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jintArray arg3)
	{
		jboolean isCopiedArray3 = JNI_FALSE;
		jint *ptr3 = NULL;

		if ( disp__glGetTrackMatrixivNV == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, &isCopiedArray3);
		}
		disp__glGetTrackMatrixivNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLint *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, (isCopiedArray3 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVertexAttribdvNV ( GLuint , GLenum , GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVertexAttribdvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;

		if ( disp__glGetVertexAttribdvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVertexAttribdvNV (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLdouble *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVertexAttribfvNV ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVertexAttribfvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetVertexAttribfvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVertexAttribfvNV (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVertexAttribivNV ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVertexAttribivNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetVertexAttribivNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVertexAttribivNV (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVertexAttribPointervNV ( GLuint , GLenum , GLvoid * * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVertexAttribPointervNV__II_3_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jbyte *ptr2 = NULL;

		if ( disp__glGetVertexAttribPointervNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVertexAttribPointervNV (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVertexAttribPointervNV__II_3_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jshort *ptr2 = NULL;

		if ( disp__glGetVertexAttribPointervNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVertexAttribPointervNV (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVertexAttribPointervNV__II_3_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetVertexAttribPointervNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVertexAttribPointervNV (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVertexAttribPointervNV__II_3_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetVertexAttribPointervNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVertexAttribPointervNV (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVertexAttribPointervNV__II_3_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;

		if ( disp__glGetVertexAttribPointervNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVertexAttribPointervNV (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVertexAttribPointervNV__II_3_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jboolean *ptr2 = NULL;

		if ( disp__glGetVertexAttribPointervNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVertexAttribPointervNV (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVertexAttribPointervNV__II_3_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jlongArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jlong *ptr2 = NULL;

		if ( disp__glGetVertexAttribPointervNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVertexAttribPointervNV (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsProgramNV ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_GLFuncJauJNI_glIsProgramNV (
		JNIEnv *env, jobject obj,
		jint arg0)
	{
		jboolean ret;


		if ( disp__glIsProgramNV == NULL ) return 0;

		ret = (jboolean) disp__glIsProgramNV (
			(GLuint) arg0
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadProgramNV ( GLenum , GLuint , GLsizei , const GLubyte * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glLoadProgramNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbyteArray arg3)
	{
		jbyte *ptr3 = NULL;

		if ( disp__glLoadProgramNV == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glLoadProgramNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLsizei) arg2,
			(const GLubyte *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameter4fNV ( GLenum , GLuint , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glProgramParameter4fNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4,
		jfloat arg5)
	{

		if ( disp__glProgramParameter4fNV == NULL ) return;

		disp__glProgramParameter4fNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4,
			(GLfloat) arg5
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameter4dNV ( GLenum , GLuint , GLdouble , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glProgramParameter4dNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdouble arg2,
		jdouble arg3,
		jdouble arg4,
		jdouble arg5)
	{

		if ( disp__glProgramParameter4dNV == NULL ) return;

		disp__glProgramParameter4dNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLdouble) arg2,
			(GLdouble) arg3,
			(GLdouble) arg4,
			(GLdouble) arg5
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameter4dvNV ( GLenum , GLuint , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glProgramParameter4dvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glProgramParameter4dvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glProgramParameter4dvNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(const GLdouble *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameter4fvNV ( GLenum , GLuint , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glProgramParameter4fvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glProgramParameter4fvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glProgramParameter4fvNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameters4dvNV ( GLenum , GLuint , GLuint , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glProgramParameters4dvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jdoubleArray arg3)
	{
		jdouble *ptr3 = NULL;

		if ( disp__glProgramParameters4dvNV == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glProgramParameters4dvNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(const GLdouble *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameters4fvNV ( GLenum , GLuint , GLuint , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glProgramParameters4fvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3)
	{
		jfloat *ptr3 = NULL;

		if ( disp__glProgramParameters4fvNV == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glProgramParameters4fvNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(const GLfloat *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTrackMatrixNV ( GLenum , GLuint , GLenum , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTrackMatrixNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3)
	{

		if ( disp__glTrackMatrixNV == NULL ) return;

		disp__glTrackMatrixNV (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLenum) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribPointerNV ( GLuint , GLint , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribPointerNV__IIII_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jbyteArray arg4)
	{
		jbyte *ptr4 = NULL;

		if ( disp__glVertexAttribPointerNV == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg4, 0);
		}
		disp__glVertexAttribPointerNV (
			(GLuint) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(const GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribPointerNV__IIII_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jshortArray arg4)
	{
		jshort *ptr4 = NULL;

		if ( disp__glVertexAttribPointerNV == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg4, 0);
		}
		disp__glVertexAttribPointerNV (
			(GLuint) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(const GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribPointerNV__IIII_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jintArray arg4)
	{
		jint *ptr4 = NULL;

		if ( disp__glVertexAttribPointerNV == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg4, 0);
		}
		disp__glVertexAttribPointerNV (
			(GLuint) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(const GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribPointerNV__IIII_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jfloatArray arg4)
	{
		jfloat *ptr4 = NULL;

		if ( disp__glVertexAttribPointerNV == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg4, 0);
		}
		disp__glVertexAttribPointerNV (
			(GLuint) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(const GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribPointerNV__IIII_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jdoubleArray arg4)
	{
		jdouble *ptr4 = NULL;

		if ( disp__glVertexAttribPointerNV == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg4, 0);
		}
		disp__glVertexAttribPointerNV (
			(GLuint) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(const GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribPointerNV__IIII_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jbooleanArray arg4)
	{
		jboolean *ptr4 = NULL;

		if ( disp__glVertexAttribPointerNV == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg4, 0);
		}
		disp__glVertexAttribPointerNV (
			(GLuint) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(const GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribPointerNV__IIII_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jlongArray arg4)
	{
		jlong *ptr4 = NULL;

		if ( disp__glVertexAttribPointerNV == NULL ) return;

		if(arg4!=NULL)
		{
			ptr4 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg4, 0);
		}
		disp__glVertexAttribPointerNV (
			(GLuint) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(const GLvoid *) ptr4
		);

		if(arg4!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg4, ptr4, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1sNV ( GLuint , GLshort ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib1sNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshort arg1)
	{

		if ( disp__glVertexAttrib1sNV == NULL ) return;

		disp__glVertexAttrib1sNV (
			(GLuint) arg0,
			(GLshort) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1fNV ( GLuint , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib1fNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1)
	{

		if ( disp__glVertexAttrib1fNV == NULL ) return;

		disp__glVertexAttrib1fNV (
			(GLuint) arg0,
			(GLfloat) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1dNV ( GLuint , GLdouble ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib1dNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdouble arg1)
	{

		if ( disp__glVertexAttrib1dNV == NULL ) return;

		disp__glVertexAttrib1dNV (
			(GLuint) arg0,
			(GLdouble) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2sNV ( GLuint , GLshort , GLshort ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib2sNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshort arg1,
		jshort arg2)
	{

		if ( disp__glVertexAttrib2sNV == NULL ) return;

		disp__glVertexAttrib2sNV (
			(GLuint) arg0,
			(GLshort) arg1,
			(GLshort) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2fNV ( GLuint , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib2fNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1,
		jfloat arg2)
	{

		if ( disp__glVertexAttrib2fNV == NULL ) return;

		disp__glVertexAttrib2fNV (
			(GLuint) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2dNV ( GLuint , GLdouble , GLdouble ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib2dNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdouble arg1,
		jdouble arg2)
	{

		if ( disp__glVertexAttrib2dNV == NULL ) return;

		disp__glVertexAttrib2dNV (
			(GLuint) arg0,
			(GLdouble) arg1,
			(GLdouble) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3sNV ( GLuint , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib3sNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshort arg1,
		jshort arg2,
		jshort arg3)
	{

		if ( disp__glVertexAttrib3sNV == NULL ) return;

		disp__glVertexAttrib3sNV (
			(GLuint) arg0,
			(GLshort) arg1,
			(GLshort) arg2,
			(GLshort) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3fNV ( GLuint , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib3fNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3)
	{

		if ( disp__glVertexAttrib3fNV == NULL ) return;

		disp__glVertexAttrib3fNV (
			(GLuint) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3dNV ( GLuint , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib3dNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdouble arg1,
		jdouble arg2,
		jdouble arg3)
	{

		if ( disp__glVertexAttrib3dNV == NULL ) return;

		disp__glVertexAttrib3dNV (
			(GLuint) arg0,
			(GLdouble) arg1,
			(GLdouble) arg2,
			(GLdouble) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4sNV ( GLuint , GLshort , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib4sNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshort arg1,
		jshort arg2,
		jshort arg3,
		jshort arg4)
	{

		if ( disp__glVertexAttrib4sNV == NULL ) return;

		disp__glVertexAttrib4sNV (
			(GLuint) arg0,
			(GLshort) arg1,
			(GLshort) arg2,
			(GLshort) arg3,
			(GLshort) arg4
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4fNV ( GLuint , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib4fNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4)
	{

		if ( disp__glVertexAttrib4fNV == NULL ) return;

		disp__glVertexAttrib4fNV (
			(GLuint) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4dNV ( GLuint , GLdouble , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib4dNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdouble arg1,
		jdouble arg2,
		jdouble arg3,
		jdouble arg4)
	{

		if ( disp__glVertexAttrib4dNV == NULL ) return;

		disp__glVertexAttrib4dNV (
			(GLuint) arg0,
			(GLdouble) arg1,
			(GLdouble) arg2,
			(GLdouble) arg3,
			(GLdouble) arg4
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4ubNV ( GLuint , GLubyte , GLubyte , GLubyte , GLubyte ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib4ubNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbyte arg1,
		jbyte arg2,
		jbyte arg3,
		jbyte arg4)
	{

		if ( disp__glVertexAttrib4ubNV == NULL ) return;

		disp__glVertexAttrib4ubNV (
			(GLuint) arg0,
			(GLubyte) arg1,
			(GLubyte) arg2,
			(GLubyte) arg3,
			(GLubyte) arg4
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1svNV ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib1svNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glVertexAttrib1svNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexAttrib1svNV (
			(GLuint) arg0,
			(const GLshort *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1fvNV ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib1fvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glVertexAttrib1fvNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexAttrib1fvNV (
			(GLuint) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1dvNV ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib1dvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdoubleArray arg1)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glVertexAttrib1dvNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexAttrib1dvNV (
			(GLuint) arg0,
			(const GLdouble *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2svNV ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib2svNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glVertexAttrib2svNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexAttrib2svNV (
			(GLuint) arg0,
			(const GLshort *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2fvNV ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib2fvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glVertexAttrib2fvNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexAttrib2fvNV (
			(GLuint) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2dvNV ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib2dvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdoubleArray arg1)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glVertexAttrib2dvNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexAttrib2dvNV (
			(GLuint) arg0,
			(const GLdouble *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3svNV ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib3svNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glVertexAttrib3svNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexAttrib3svNV (
			(GLuint) arg0,
			(const GLshort *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3fvNV ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib3fvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glVertexAttrib3fvNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexAttrib3fvNV (
			(GLuint) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3dvNV ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib3dvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdoubleArray arg1)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glVertexAttrib3dvNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexAttrib3dvNV (
			(GLuint) arg0,
			(const GLdouble *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4svNV ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib4svNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glVertexAttrib4svNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexAttrib4svNV (
			(GLuint) arg0,
			(const GLshort *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4fvNV ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib4fvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glVertexAttrib4fvNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexAttrib4fvNV (
			(GLuint) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4dvNV ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib4dvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdoubleArray arg1)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glVertexAttrib4dvNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexAttrib4dvNV (
			(GLuint) arg0,
			(const GLdouble *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4ubvNV ( GLuint , const GLubyte * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttrib4ubvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbyteArray arg1)
	{
		jbyte *ptr1 = NULL;

		if ( disp__glVertexAttrib4ubvNV == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexAttrib4ubvNV (
			(GLuint) arg0,
			(const GLubyte *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs1svNV ( GLuint , GLsizei , const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribs1svNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2)
	{
		jshort *ptr2 = NULL;

		if ( disp__glVertexAttribs1svNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexAttribs1svNV (
			(GLuint) arg0,
			(GLsizei) arg1,
			(const GLshort *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs1fvNV ( GLuint , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribs1fvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glVertexAttribs1fvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexAttribs1fvNV (
			(GLuint) arg0,
			(GLsizei) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs1dvNV ( GLuint , GLsizei , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribs1dvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glVertexAttribs1dvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexAttribs1dvNV (
			(GLuint) arg0,
			(GLsizei) arg1,
			(const GLdouble *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs2svNV ( GLuint , GLsizei , const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribs2svNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2)
	{
		jshort *ptr2 = NULL;

		if ( disp__glVertexAttribs2svNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexAttribs2svNV (
			(GLuint) arg0,
			(GLsizei) arg1,
			(const GLshort *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs2fvNV ( GLuint , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribs2fvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glVertexAttribs2fvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexAttribs2fvNV (
			(GLuint) arg0,
			(GLsizei) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs2dvNV ( GLuint , GLsizei , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribs2dvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glVertexAttribs2dvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexAttribs2dvNV (
			(GLuint) arg0,
			(GLsizei) arg1,
			(const GLdouble *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs3svNV ( GLuint , GLsizei , const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribs3svNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2)
	{
		jshort *ptr2 = NULL;

		if ( disp__glVertexAttribs3svNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexAttribs3svNV (
			(GLuint) arg0,
			(GLsizei) arg1,
			(const GLshort *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs3fvNV ( GLuint , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribs3fvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glVertexAttribs3fvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexAttribs3fvNV (
			(GLuint) arg0,
			(GLsizei) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs3dvNV ( GLuint , GLsizei , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribs3dvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glVertexAttribs3dvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexAttribs3dvNV (
			(GLuint) arg0,
			(GLsizei) arg1,
			(const GLdouble *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs4svNV ( GLuint , GLsizei , const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribs4svNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2)
	{
		jshort *ptr2 = NULL;

		if ( disp__glVertexAttribs4svNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexAttribs4svNV (
			(GLuint) arg0,
			(GLsizei) arg1,
			(const GLshort *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs4fvNV ( GLuint , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribs4fvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glVertexAttribs4fvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexAttribs4fvNV (
			(GLuint) arg0,
			(GLsizei) arg1,
			(const GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs4dvNV ( GLuint , GLsizei , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribs4dvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glVertexAttribs4dvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexAttribs4dvNV (
			(GLuint) arg0,
			(GLsizei) arg1,
			(const GLdouble *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs4ubvNV ( GLuint , GLsizei , const GLubyte * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexAttribs4ubvNV (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2)
	{
		jbyte *ptr2 = NULL;

		if ( disp__glVertexAttribs4ubvNV == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glVertexAttribs4ubvNV (
			(GLuint) arg0,
			(GLsizei) arg1,
			(const GLubyte *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexBumpParameterivATI ( GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexBumpParameterivATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glTexBumpParameterivATI == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glTexBumpParameterivATI (
			(GLenum) arg0,
			(const GLint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexBumpParameterfvATI ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glTexBumpParameterfvATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glTexBumpParameterfvATI == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glTexBumpParameterfvATI (
			(GLenum) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexBumpParameterivATI ( GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexBumpParameterivATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if ( disp__glGetTexBumpParameterivATI == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, &isCopiedArray1);
		}
		disp__glGetTexBumpParameterivATI (
			(GLenum) arg0,
			(GLint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexBumpParameterfvATI ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetTexBumpParameterfvATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;

		if ( disp__glGetTexBumpParameterfvATI == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, &isCopiedArray1);
		}
		disp__glGetTexBumpParameterfvATI (
			(GLenum) arg0,
			(GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenFragmentShadersATI ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glGenFragmentShadersATI (
		JNIEnv *env, jobject obj,
		jint arg0)
	{
		jint ret;


		if ( disp__glGenFragmentShadersATI == NULL ) return 0;

		ret = (jint) disp__glGenFragmentShadersATI (
			(GLuint) arg0
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindFragmentShaderATI ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBindFragmentShaderATI (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glBindFragmentShaderATI == NULL ) return;

		disp__glBindFragmentShaderATI (
			(GLuint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteFragmentShaderATI ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDeleteFragmentShaderATI (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glDeleteFragmentShaderATI == NULL ) return;

		disp__glDeleteFragmentShaderATI (
			(GLuint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBeginFragmentShaderATI ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBeginFragmentShaderATI (
		JNIEnv *env, jobject obj)
	{

		if ( disp__glBeginFragmentShaderATI == NULL ) return;

		disp__glBeginFragmentShaderATI (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEndFragmentShaderATI ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEndFragmentShaderATI (
		JNIEnv *env, jobject obj)
	{

		if ( disp__glEndFragmentShaderATI == NULL ) return;

		disp__glEndFragmentShaderATI (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPassTexCoordATI ( GLuint , GLuint , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPassTexCoordATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{

		if ( disp__glPassTexCoordATI == NULL ) return;

		disp__glPassTexCoordATI (
			(GLuint) arg0,
			(GLuint) arg1,
			(GLenum) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleMapATI ( GLuint , GLuint , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSampleMapATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{

		if ( disp__glSampleMapATI == NULL ) return;

		disp__glSampleMapATI (
			(GLuint) arg0,
			(GLuint) arg1,
			(GLenum) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorFragmentOp1ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorFragmentOp1ATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6)
	{

		if ( disp__glColorFragmentOp1ATI == NULL ) return;

		disp__glColorFragmentOp1ATI (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(GLuint) arg3,
			(GLuint) arg4,
			(GLuint) arg5,
			(GLuint) arg6
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorFragmentOp2ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorFragmentOp2ATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9)
	{

		if ( disp__glColorFragmentOp2ATI == NULL ) return;

		disp__glColorFragmentOp2ATI (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(GLuint) arg3,
			(GLuint) arg4,
			(GLuint) arg5,
			(GLuint) arg6,
			(GLuint) arg7,
			(GLuint) arg8,
			(GLuint) arg9
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorFragmentOp3ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glColorFragmentOp3ATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jint arg10,
		jint arg11,
		jint arg12)
	{

		if ( disp__glColorFragmentOp3ATI == NULL ) return;

		disp__glColorFragmentOp3ATI (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(GLuint) arg3,
			(GLuint) arg4,
			(GLuint) arg5,
			(GLuint) arg6,
			(GLuint) arg7,
			(GLuint) arg8,
			(GLuint) arg9,
			(GLuint) arg10,
			(GLuint) arg11,
			(GLuint) arg12
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAlphaFragmentOp1ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glAlphaFragmentOp1ATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5)
	{

		if ( disp__glAlphaFragmentOp1ATI == NULL ) return;

		disp__glAlphaFragmentOp1ATI (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(GLuint) arg3,
			(GLuint) arg4,
			(GLuint) arg5
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAlphaFragmentOp2ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glAlphaFragmentOp2ATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8)
	{

		if ( disp__glAlphaFragmentOp2ATI == NULL ) return;

		disp__glAlphaFragmentOp2ATI (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(GLuint) arg3,
			(GLuint) arg4,
			(GLuint) arg5,
			(GLuint) arg6,
			(GLuint) arg7,
			(GLuint) arg8
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAlphaFragmentOp3ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glAlphaFragmentOp3ATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5,
		jint arg6,
		jint arg7,
		jint arg8,
		jint arg9,
		jint arg10,
		jint arg11)
	{

		if ( disp__glAlphaFragmentOp3ATI == NULL ) return;

		disp__glAlphaFragmentOp3ATI (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(GLuint) arg3,
			(GLuint) arg4,
			(GLuint) arg5,
			(GLuint) arg6,
			(GLuint) arg7,
			(GLuint) arg8,
			(GLuint) arg9,
			(GLuint) arg10,
			(GLuint) arg11
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSetFragmentShaderConstantATI ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSetFragmentShaderConstantATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glSetFragmentShaderConstantATI == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glSetFragmentShaderConstantATI (
			(GLuint) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPNTrianglesiATI ( GLenum , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPNTrianglesiATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{

		if ( disp__glPNTrianglesiATI == NULL ) return;

		disp__glPNTrianglesiATI (
			(GLenum) arg0,
			(GLint) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPNTrianglesfATI ( GLenum , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glPNTrianglesfATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1)
	{

		if ( disp__glPNTrianglesfATI == NULL ) return;

		disp__glPNTrianglesfATI (
			(GLenum) arg0,
			(GLfloat) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glNewObjectBufferATI ( GLsizei , const GLvoid * , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glNewObjectBufferATI__I_3BI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbyteArray arg1,
		jint arg2)
	{
		jint ret;

		jbyte *ptr1 = NULL;

		if ( disp__glNewObjectBufferATI == NULL ) return 0;

		if(arg1!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		ret = (jint) disp__glNewObjectBufferATI (
			(GLsizei) arg0,
			(const GLvoid *) ptr1,
			(GLenum) arg2
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glNewObjectBufferATI__I_3SI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1,
		jint arg2)
	{
		jint ret;

		jshort *ptr1 = NULL;

		if ( disp__glNewObjectBufferATI == NULL ) return 0;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		ret = (jint) disp__glNewObjectBufferATI (
			(GLsizei) arg0,
			(const GLvoid *) ptr1,
			(GLenum) arg2
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glNewObjectBufferATI__I_3II (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1,
		jint arg2)
	{
		jint ret;

		jint *ptr1 = NULL;

		if ( disp__glNewObjectBufferATI == NULL ) return 0;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		ret = (jint) disp__glNewObjectBufferATI (
			(GLsizei) arg0,
			(const GLvoid *) ptr1,
			(GLenum) arg2
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glNewObjectBufferATI__I_3FI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1,
		jint arg2)
	{
		jint ret;

		jfloat *ptr1 = NULL;

		if ( disp__glNewObjectBufferATI == NULL ) return 0;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		ret = (jint) disp__glNewObjectBufferATI (
			(GLsizei) arg0,
			(const GLvoid *) ptr1,
			(GLenum) arg2
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glNewObjectBufferATI__I_3DI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdoubleArray arg1,
		jint arg2)
	{
		jint ret;

		jdouble *ptr1 = NULL;

		if ( disp__glNewObjectBufferATI == NULL ) return 0;

		if(arg1!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		ret = (jint) disp__glNewObjectBufferATI (
			(GLsizei) arg0,
			(const GLvoid *) ptr1,
			(GLenum) arg2
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glNewObjectBufferATI__I_3ZI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbooleanArray arg1,
		jint arg2)
	{
		jint ret;

		jboolean *ptr1 = NULL;

		if ( disp__glNewObjectBufferATI == NULL ) return 0;

		if(arg1!=NULL)
		{
			ptr1 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		ret = (jint) disp__glNewObjectBufferATI (
			(GLsizei) arg0,
			(const GLvoid *) ptr1,
			(GLenum) arg2
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		return ret;
	}
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glNewObjectBufferATI__I_3JI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jlongArray arg1,
		jint arg2)
	{
		jint ret;

		jlong *ptr1 = NULL;

		if ( disp__glNewObjectBufferATI == NULL ) return 0;

		if(arg1!=NULL)
		{
			ptr1 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		ret = (jint) disp__glNewObjectBufferATI (
			(GLsizei) arg0,
			(const GLvoid *) ptr1,
			(GLenum) arg2
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsObjectBufferATI ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_GLFuncJauJNI_glIsObjectBufferATI (
		JNIEnv *env, jobject obj,
		jint arg0)
	{
		jboolean ret;


		if ( disp__glIsObjectBufferATI == NULL ) return 0;

		ret = (jboolean) disp__glIsObjectBufferATI (
			(GLuint) arg0
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glUpdateObjectBufferATI ( GLuint , GLuint , GLsizei , const GLvoid * , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glUpdateObjectBufferATI__III_3BI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbyteArray arg3,
		jint arg4)
	{
		jbyte *ptr3 = NULL;

		if ( disp__glUpdateObjectBufferATI == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glUpdateObjectBufferATI (
			(GLuint) arg0,
			(GLuint) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3,
			(GLenum) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glUpdateObjectBufferATI__III_3SI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jshortArray arg3,
		jint arg4)
	{
		jshort *ptr3 = NULL;

		if ( disp__glUpdateObjectBufferATI == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glUpdateObjectBufferATI (
			(GLuint) arg0,
			(GLuint) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3,
			(GLenum) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glUpdateObjectBufferATI__III_3II (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jintArray arg3,
		jint arg4)
	{
		jint *ptr3 = NULL;

		if ( disp__glUpdateObjectBufferATI == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glUpdateObjectBufferATI (
			(GLuint) arg0,
			(GLuint) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3,
			(GLenum) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glUpdateObjectBufferATI__III_3FI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3,
		jint arg4)
	{
		jfloat *ptr3 = NULL;

		if ( disp__glUpdateObjectBufferATI == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glUpdateObjectBufferATI (
			(GLuint) arg0,
			(GLuint) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3,
			(GLenum) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glUpdateObjectBufferATI__III_3DI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jdoubleArray arg3,
		jint arg4)
	{
		jdouble *ptr3 = NULL;

		if ( disp__glUpdateObjectBufferATI == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glUpdateObjectBufferATI (
			(GLuint) arg0,
			(GLuint) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3,
			(GLenum) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glUpdateObjectBufferATI__III_3ZI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbooleanArray arg3,
		jint arg4)
	{
		jboolean *ptr3 = NULL;

		if ( disp__glUpdateObjectBufferATI == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glUpdateObjectBufferATI (
			(GLuint) arg0,
			(GLuint) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3,
			(GLenum) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glUpdateObjectBufferATI__III_3JI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jlongArray arg3,
		jint arg4)
	{
		jlong *ptr3 = NULL;

		if ( disp__glUpdateObjectBufferATI == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glUpdateObjectBufferATI (
			(GLuint) arg0,
			(GLuint) arg1,
			(GLsizei) arg2,
			(const GLvoid *) ptr3,
			(GLenum) arg4
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetObjectBufferfvATI ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetObjectBufferfvATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetObjectBufferfvATI == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetObjectBufferfvATI (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetObjectBufferivATI ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetObjectBufferivATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetObjectBufferivATI == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetObjectBufferivATI (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteObjectBufferATI ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDeleteObjectBufferATI (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glDeleteObjectBufferATI == NULL ) return;

		disp__glDeleteObjectBufferATI (
			(GLuint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glArrayObjectATI ( GLenum , GLint , GLenum , GLsizei , GLuint , GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glArrayObjectATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5)
	{

		if ( disp__glArrayObjectATI == NULL ) return;

		disp__glArrayObjectATI (
			(GLenum) arg0,
			(GLint) arg1,
			(GLenum) arg2,
			(GLsizei) arg3,
			(GLuint) arg4,
			(GLuint) arg5
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetArrayObjectfvATI ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetArrayObjectfvATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetArrayObjectfvATI == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetArrayObjectfvATI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetArrayObjectivATI ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetArrayObjectivATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetArrayObjectivATI == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetArrayObjectivATI (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantArrayObjectATI ( GLuint , GLenum , GLsizei , GLuint , GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVariantArrayObjectATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4)
	{

		if ( disp__glVariantArrayObjectATI == NULL ) return;

		disp__glVariantArrayObjectATI (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLsizei) arg2,
			(GLuint) arg3,
			(GLuint) arg4
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantArrayObjectfvATI ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVariantArrayObjectfvATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetVariantArrayObjectfvATI == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVariantArrayObjectfvATI (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantArrayObjectivATI ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVariantArrayObjectivATI (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetVariantArrayObjectivATI == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVariantArrayObjectivATI (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBeginVertexShaderEXT ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBeginVertexShaderEXT (
		JNIEnv *env, jobject obj)
	{

		if ( disp__glBeginVertexShaderEXT == NULL ) return;

		disp__glBeginVertexShaderEXT (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEndVertexShaderEXT ( void ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEndVertexShaderEXT (
		JNIEnv *env, jobject obj)
	{

		if ( disp__glEndVertexShaderEXT == NULL ) return;

		disp__glEndVertexShaderEXT (
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindVertexShaderEXT ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glBindVertexShaderEXT (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glBindVertexShaderEXT == NULL ) return;

		disp__glBindVertexShaderEXT (
			(GLuint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenVertexShadersEXT ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glGenVertexShadersEXT (
		JNIEnv *env, jobject obj,
		jint arg0)
	{
		jint ret;


		if ( disp__glGenVertexShadersEXT == NULL ) return 0;

		ret = (jint) disp__glGenVertexShadersEXT (
			(GLuint) arg0
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteVertexShaderEXT ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDeleteVertexShaderEXT (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glDeleteVertexShaderEXT == NULL ) return;

		disp__glDeleteVertexShaderEXT (
			(GLuint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glShaderOp1EXT ( GLenum , GLuint , GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glShaderOp1EXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{

		if ( disp__glShaderOp1EXT == NULL ) return;

		disp__glShaderOp1EXT (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glShaderOp2EXT ( GLenum , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glShaderOp2EXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3)
	{

		if ( disp__glShaderOp2EXT == NULL ) return;

		disp__glShaderOp2EXT (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(GLuint) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glShaderOp3EXT ( GLenum , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glShaderOp3EXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4)
	{

		if ( disp__glShaderOp3EXT == NULL ) return;

		disp__glShaderOp3EXT (
			(GLenum) arg0,
			(GLuint) arg1,
			(GLuint) arg2,
			(GLuint) arg3,
			(GLuint) arg4
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSwizzleEXT ( GLuint , GLuint , GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSwizzleEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5)
	{

		if ( disp__glSwizzleEXT == NULL ) return;

		disp__glSwizzleEXT (
			(GLuint) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(GLenum) arg5
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWriteMaskEXT ( GLuint , GLuint , GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glWriteMaskEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4,
		jint arg5)
	{

		if ( disp__glWriteMaskEXT == NULL ) return;

		disp__glWriteMaskEXT (
			(GLuint) arg0,
			(GLuint) arg1,
			(GLenum) arg2,
			(GLenum) arg3,
			(GLenum) arg4,
			(GLenum) arg5
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glInsertComponentEXT ( GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glInsertComponentEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{

		if ( disp__glInsertComponentEXT == NULL ) return;

		disp__glInsertComponentEXT (
			(GLuint) arg0,
			(GLuint) arg1,
			(GLuint) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glExtractComponentEXT ( GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glExtractComponentEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{

		if ( disp__glExtractComponentEXT == NULL ) return;

		disp__glExtractComponentEXT (
			(GLuint) arg0,
			(GLuint) arg1,
			(GLuint) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenSymbolsEXT ( GLenum , GLenum , GLenum , GLuint ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glGenSymbolsEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3)
	{
		jint ret;


		if ( disp__glGenSymbolsEXT == NULL ) return 0;

		ret = (jint) disp__glGenSymbolsEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2,
			(GLuint) arg3
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSetInvariantEXT ( GLuint , GLenum , const void * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSetInvariantEXT__II_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2)
	{
		jbyte *ptr2 = NULL;

		if ( disp__glSetInvariantEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glSetInvariantEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(const void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSetInvariantEXT__II_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2)
	{
		jshort *ptr2 = NULL;

		if ( disp__glSetInvariantEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glSetInvariantEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(const void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSetInvariantEXT__II_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glSetInvariantEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glSetInvariantEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(const void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSetInvariantEXT__II_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glSetInvariantEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glSetInvariantEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(const void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSetInvariantEXT__II_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glSetInvariantEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glSetInvariantEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(const void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSetInvariantEXT__II_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2)
	{
		jboolean *ptr2 = NULL;

		if ( disp__glSetInvariantEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glSetInvariantEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(const void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSetInvariantEXT__II_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jlongArray arg2)
	{
		jlong *ptr2 = NULL;

		if ( disp__glSetInvariantEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glSetInvariantEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(const void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSetLocalConstantEXT ( GLuint , GLenum , const void * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSetLocalConstantEXT__II_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2)
	{
		jbyte *ptr2 = NULL;

		if ( disp__glSetLocalConstantEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glSetLocalConstantEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(const void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSetLocalConstantEXT__II_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2)
	{
		jshort *ptr2 = NULL;

		if ( disp__glSetLocalConstantEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glSetLocalConstantEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(const void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSetLocalConstantEXT__II_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jint *ptr2 = NULL;

		if ( disp__glSetLocalConstantEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glSetLocalConstantEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(const void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSetLocalConstantEXT__II_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jfloat *ptr2 = NULL;

		if ( disp__glSetLocalConstantEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glSetLocalConstantEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(const void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSetLocalConstantEXT__II_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jdouble *ptr2 = NULL;

		if ( disp__glSetLocalConstantEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glSetLocalConstantEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(const void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSetLocalConstantEXT__II_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2)
	{
		jboolean *ptr2 = NULL;

		if ( disp__glSetLocalConstantEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glSetLocalConstantEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(const void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glSetLocalConstantEXT__II_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jlongArray arg2)
	{
		jlong *ptr2 = NULL;

		if ( disp__glSetLocalConstantEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg2, 0);
		}
		disp__glSetLocalConstantEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(const void *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantbvEXT ( GLuint , const GLbyte * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVariantbvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbyteArray arg1)
	{
		jbyte *ptr1 = NULL;

		if ( disp__glVariantbvEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVariantbvEXT (
			(GLuint) arg0,
			(const GLbyte *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantsvEXT ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVariantsvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glVariantsvEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVariantsvEXT (
			(GLuint) arg0,
			(const GLshort *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantivEXT ( GLuint , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVariantivEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glVariantivEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVariantivEXT (
			(GLuint) arg0,
			(const GLint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantfvEXT ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVariantfvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glVariantfvEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVariantfvEXT (
			(GLuint) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantdvEXT ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVariantdvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdoubleArray arg1)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glVariantdvEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVariantdvEXT (
			(GLuint) arg0,
			(const GLdouble *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantubvEXT ( GLuint , const GLubyte * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVariantubvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbyteArray arg1)
	{
		jbyte *ptr1 = NULL;

		if ( disp__glVariantubvEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVariantubvEXT (
			(GLuint) arg0,
			(const GLubyte *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantusvEXT ( GLuint , const GLushort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVariantusvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glVariantusvEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVariantusvEXT (
			(GLuint) arg0,
			(const GLushort *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantuivEXT ( GLuint , const GLuint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVariantuivEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glVariantuivEXT == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVariantuivEXT (
			(GLuint) arg0,
			(const GLuint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantPointerEXT ( GLuint , GLenum , GLuint , const void * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVariantPointerEXT__III_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbyteArray arg3)
	{
		jbyte *ptr3 = NULL;

		if ( disp__glVariantPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVariantPointerEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLuint) arg2,
			(const void *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVariantPointerEXT__III_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jshortArray arg3)
	{
		jshort *ptr3 = NULL;

		if ( disp__glVariantPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVariantPointerEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLuint) arg2,
			(const void *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVariantPointerEXT__III_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jintArray arg3)
	{
		jint *ptr3 = NULL;

		if ( disp__glVariantPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVariantPointerEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLuint) arg2,
			(const void *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVariantPointerEXT__III_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jfloatArray arg3)
	{
		jfloat *ptr3 = NULL;

		if ( disp__glVariantPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVariantPointerEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLuint) arg2,
			(const void *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVariantPointerEXT__III_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jdoubleArray arg3)
	{
		jdouble *ptr3 = NULL;

		if ( disp__glVariantPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVariantPointerEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLuint) arg2,
			(const void *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVariantPointerEXT__III_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jbooleanArray arg3)
	{
		jboolean *ptr3 = NULL;

		if ( disp__glVariantPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVariantPointerEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLuint) arg2,
			(const void *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVariantPointerEXT__III_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jlongArray arg3)
	{
		jlong *ptr3 = NULL;

		if ( disp__glVariantPointerEXT == NULL ) return;

		if(arg3!=NULL)
		{
			ptr3 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg3, 0);
		}
		disp__glVariantPointerEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLuint) arg2,
			(const void *) ptr3
		);

		if(arg3!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg3, ptr3, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEnableVariantClientStateEXT ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glEnableVariantClientStateEXT (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glEnableVariantClientStateEXT == NULL ) return;

		disp__glEnableVariantClientStateEXT (
			(GLuint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDisableVariantClientStateEXT ( GLuint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glDisableVariantClientStateEXT (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glDisableVariantClientStateEXT == NULL ) return;

		disp__glDisableVariantClientStateEXT (
			(GLuint) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindLightParameterEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glBindLightParameterEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{
		jint ret;


		if ( disp__glBindLightParameterEXT == NULL ) return 0;

		ret = (jint) disp__glBindLightParameterEXT (
			(GLenum) arg0,
			(GLenum) arg1
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindMaterialParameterEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glBindMaterialParameterEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{
		jint ret;


		if ( disp__glBindMaterialParameterEXT == NULL ) return 0;

		ret = (jint) disp__glBindMaterialParameterEXT (
			(GLenum) arg0,
			(GLenum) arg1
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindTexGenParameterEXT ( GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glBindTexGenParameterEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{
		jint ret;


		if ( disp__glBindTexGenParameterEXT == NULL ) return 0;

		ret = (jint) disp__glBindTexGenParameterEXT (
			(GLenum) arg0,
			(GLenum) arg1,
			(GLenum) arg2
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindTextureUnitParameterEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glBindTextureUnitParameterEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{
		jint ret;


		if ( disp__glBindTextureUnitParameterEXT == NULL ) return 0;

		ret = (jint) disp__glBindTextureUnitParameterEXT (
			(GLenum) arg0,
			(GLenum) arg1
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindParameterEXT ( GLenum ) ;
 * </pre> 
 */
	JNIEXPORT jint JNICALL
	Java_gl4java_GLFuncJauJNI_glBindParameterEXT (
		JNIEnv *env, jobject obj,
		jint arg0)
	{
		jint ret;


		if ( disp__glBindParameterEXT == NULL ) return 0;

		ret = (jint) disp__glBindParameterEXT (
			(GLenum) arg0
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsVariantEnabledEXT ( GLuint , GLenum ) ;
 * </pre> 
 */
	JNIEXPORT jboolean JNICALL
	Java_gl4java_GLFuncJauJNI_glIsVariantEnabledEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{
		jboolean ret;


		if ( disp__glIsVariantEnabledEXT == NULL ) return 0;

		ret = (jboolean) disp__glIsVariantEnabledEXT (
			(GLuint) arg0,
			(GLenum) arg1
		);

		return ret;
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantBooleanvEXT ( GLuint , GLenum , GLboolean * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVariantBooleanvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jboolean *ptr2 = NULL;

		if ( disp__glGetVariantBooleanvEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVariantBooleanvEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLboolean *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantIntegervEXT ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVariantIntegervEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetVariantIntegervEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVariantIntegervEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantFloatvEXT ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVariantFloatvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetVariantFloatvEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVariantFloatvEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantPointervEXT ( GLuint , GLenum , GLvoid * * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVariantPointervEXT__II_3_3B (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbyteArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jbyte *ptr2 = NULL;

		if ( disp__glGetVariantPointervEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVariantPointervEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVariantPointervEXT__II_3_3S (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jshortArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jshort *ptr2 = NULL;

		if ( disp__glGetVariantPointervEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVariantPointervEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVariantPointervEXT__II_3_3I (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetVariantPointervEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVariantPointervEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVariantPointervEXT__II_3_3F (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetVariantPointervEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVariantPointervEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVariantPointervEXT__II_3_3D (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jdoubleArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jdouble *ptr2 = NULL;

		if ( disp__glGetVariantPointervEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVariantPointervEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVariantPointervEXT__II_3_3Z (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jboolean *ptr2 = NULL;

		if ( disp__glGetVariantPointervEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVariantPointervEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetVariantPointervEXT__II_3_3J (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jlongArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jlong *ptr2 = NULL;

		if ( disp__glGetVariantPointervEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetVariantPointervEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLvoid **) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetInvariantBooleanvEXT ( GLuint , GLenum , GLboolean * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetInvariantBooleanvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jboolean *ptr2 = NULL;

		if ( disp__glGetInvariantBooleanvEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetInvariantBooleanvEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLboolean *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetInvariantIntegervEXT ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetInvariantIntegervEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetInvariantIntegervEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetInvariantIntegervEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetInvariantFloatvEXT ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetInvariantFloatvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetInvariantFloatvEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetInvariantFloatvEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetLocalConstantBooleanvEXT ( GLuint , GLenum , GLboolean * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetLocalConstantBooleanvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jbooleanArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jboolean *ptr2 = NULL;

		if ( disp__glGetLocalConstantBooleanvEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetLocalConstantBooleanvEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLboolean *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetLocalConstantIntegervEXT ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetLocalConstantIntegervEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jintArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jint *ptr2 = NULL;

		if ( disp__glGetLocalConstantIntegervEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetLocalConstantIntegervEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLint *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetLocalConstantFloatvEXT ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glGetLocalConstantFloatvEXT (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jfloatArray arg2)
	{
		jboolean isCopiedArray2 = JNI_FALSE;
		jfloat *ptr2 = NULL;

		if ( disp__glGetLocalConstantFloatvEXT == NULL ) return;

		if(arg2!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg2, &isCopiedArray2);
		}
		disp__glGetLocalConstantFloatvEXT (
			(GLuint) arg0,
			(GLenum) arg1,
			(GLfloat *) ptr2
		);

		if(arg2!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg2, ptr2, (isCopiedArray2 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1s ( GLenum , GLshort ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream1s (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshort arg1)
	{

		if ( disp__glVertexStream1s == NULL ) return;

		disp__glVertexStream1s (
			(GLenum) arg0,
			(GLshort) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1sv ( GLenum , const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream1sv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glVertexStream1sv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexStream1sv (
			(GLenum) arg0,
			(const GLshort *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1i ( GLenum , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream1i (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{

		if ( disp__glVertexStream1i == NULL ) return;

		disp__glVertexStream1i (
			(GLenum) arg0,
			(GLint) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1iv ( GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream1iv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glVertexStream1iv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexStream1iv (
			(GLenum) arg0,
			(const GLint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1f ( GLenum , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream1f (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1)
	{

		if ( disp__glVertexStream1f == NULL ) return;

		disp__glVertexStream1f (
			(GLenum) arg0,
			(GLfloat) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1fv ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream1fv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glVertexStream1fv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexStream1fv (
			(GLenum) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1d ( GLenum , GLdouble ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream1d (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdouble arg1)
	{

		if ( disp__glVertexStream1d == NULL ) return;

		disp__glVertexStream1d (
			(GLenum) arg0,
			(GLdouble) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1dv ( GLenum , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream1dv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdoubleArray arg1)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glVertexStream1dv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexStream1dv (
			(GLenum) arg0,
			(const GLdouble *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2s ( GLenum , GLshort , GLshort ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream2s (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshort arg1,
		jshort arg2)
	{

		if ( disp__glVertexStream2s == NULL ) return;

		disp__glVertexStream2s (
			(GLenum) arg0,
			(GLshort) arg1,
			(GLshort) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2sv ( GLenum , const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream2sv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glVertexStream2sv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexStream2sv (
			(GLenum) arg0,
			(const GLshort *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2i ( GLenum , GLint , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream2i (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2)
	{

		if ( disp__glVertexStream2i == NULL ) return;

		disp__glVertexStream2i (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2iv ( GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream2iv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glVertexStream2iv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexStream2iv (
			(GLenum) arg0,
			(const GLint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2f ( GLenum , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream2f (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1,
		jfloat arg2)
	{

		if ( disp__glVertexStream2f == NULL ) return;

		disp__glVertexStream2f (
			(GLenum) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2fv ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream2fv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glVertexStream2fv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexStream2fv (
			(GLenum) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2d ( GLenum , GLdouble , GLdouble ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream2d (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdouble arg1,
		jdouble arg2)
	{

		if ( disp__glVertexStream2d == NULL ) return;

		disp__glVertexStream2d (
			(GLenum) arg0,
			(GLdouble) arg1,
			(GLdouble) arg2
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2dv ( GLenum , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream2dv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdoubleArray arg1)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glVertexStream2dv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexStream2dv (
			(GLenum) arg0,
			(const GLdouble *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3s ( GLenum , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream3s (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshort arg1,
		jshort arg2,
		jshort arg3)
	{

		if ( disp__glVertexStream3s == NULL ) return;

		disp__glVertexStream3s (
			(GLenum) arg0,
			(GLshort) arg1,
			(GLshort) arg2,
			(GLshort) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3sv ( GLenum , const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream3sv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glVertexStream3sv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexStream3sv (
			(GLenum) arg0,
			(const GLshort *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3i ( GLenum , GLint , GLint , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream3i (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3)
	{

		if ( disp__glVertexStream3i == NULL ) return;

		disp__glVertexStream3i (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3iv ( GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream3iv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glVertexStream3iv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexStream3iv (
			(GLenum) arg0,
			(const GLint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3f ( GLenum , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream3f (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3)
	{

		if ( disp__glVertexStream3f == NULL ) return;

		disp__glVertexStream3f (
			(GLenum) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3fv ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream3fv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glVertexStream3fv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexStream3fv (
			(GLenum) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3d ( GLenum , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream3d (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdouble arg1,
		jdouble arg2,
		jdouble arg3)
	{

		if ( disp__glVertexStream3d == NULL ) return;

		disp__glVertexStream3d (
			(GLenum) arg0,
			(GLdouble) arg1,
			(GLdouble) arg2,
			(GLdouble) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3dv ( GLenum , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream3dv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdoubleArray arg1)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glVertexStream3dv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexStream3dv (
			(GLenum) arg0,
			(const GLdouble *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4s ( GLenum , GLshort , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream4s (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshort arg1,
		jshort arg2,
		jshort arg3,
		jshort arg4)
	{

		if ( disp__glVertexStream4s == NULL ) return;

		disp__glVertexStream4s (
			(GLenum) arg0,
			(GLshort) arg1,
			(GLshort) arg2,
			(GLshort) arg3,
			(GLshort) arg4
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4sv ( GLenum , const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream4sv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glVertexStream4sv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexStream4sv (
			(GLenum) arg0,
			(const GLshort *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4i ( GLenum , GLint , GLint , GLint , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream4i (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3,
		jint arg4)
	{

		if ( disp__glVertexStream4i == NULL ) return;

		disp__glVertexStream4i (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3,
			(GLint) arg4
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4iv ( GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream4iv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glVertexStream4iv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexStream4iv (
			(GLenum) arg0,
			(const GLint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4f ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream4f (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3,
		jfloat arg4)
	{

		if ( disp__glVertexStream4f == NULL ) return;

		disp__glVertexStream4f (
			(GLenum) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3,
			(GLfloat) arg4
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4fv ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream4fv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glVertexStream4fv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexStream4fv (
			(GLenum) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4d ( GLenum , GLdouble , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream4d (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdouble arg1,
		jdouble arg2,
		jdouble arg3,
		jdouble arg4)
	{

		if ( disp__glVertexStream4d == NULL ) return;

		disp__glVertexStream4d (
			(GLenum) arg0,
			(GLdouble) arg1,
			(GLdouble) arg2,
			(GLdouble) arg3,
			(GLdouble) arg4
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4dv ( GLenum , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexStream4dv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdoubleArray arg1)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glVertexStream4dv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glVertexStream4dv (
			(GLenum) arg0,
			(const GLdouble *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3b ( GLenum , GLbyte , GLbyte , GLbyte ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalStream3b (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbyte arg1,
		jbyte arg2,
		jbyte arg3)
	{

		if ( disp__glNormalStream3b == NULL ) return;

		disp__glNormalStream3b (
			(GLenum) arg0,
			(GLbyte) arg1,
			(GLbyte) arg2,
			(GLbyte) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3bv ( GLenum , const GLbyte * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalStream3bv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jbyteArray arg1)
	{
		jbyte *ptr1 = NULL;

		if ( disp__glNormalStream3bv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glNormalStream3bv (
			(GLenum) arg0,
			(const GLbyte *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3s ( GLenum , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalStream3s (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshort arg1,
		jshort arg2,
		jshort arg3)
	{

		if ( disp__glNormalStream3s == NULL ) return;

		disp__glNormalStream3s (
			(GLenum) arg0,
			(GLshort) arg1,
			(GLshort) arg2,
			(GLshort) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3sv ( GLenum , const GLshort * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalStream3sv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jshortArray arg1)
	{
		jshort *ptr1 = NULL;

		if ( disp__glNormalStream3sv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glNormalStream3sv (
			(GLenum) arg0,
			(const GLshort *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3i ( GLenum , GLint , GLint , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalStream3i (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1,
		jint arg2,
		jint arg3)
	{

		if ( disp__glNormalStream3i == NULL ) return;

		disp__glNormalStream3i (
			(GLenum) arg0,
			(GLint) arg1,
			(GLint) arg2,
			(GLint) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3iv ( GLenum , const GLint * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalStream3iv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jintArray arg1)
	{
		jint *ptr1 = NULL;

		if ( disp__glNormalStream3iv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glNormalStream3iv (
			(GLenum) arg0,
			(const GLint *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3f ( GLenum , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalStream3f (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1,
		jfloat arg2,
		jfloat arg3)
	{

		if ( disp__glNormalStream3f == NULL ) return;

		disp__glNormalStream3f (
			(GLenum) arg0,
			(GLfloat) arg1,
			(GLfloat) arg2,
			(GLfloat) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3fv ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalStream3fv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloatArray arg1)
	{
		jfloat *ptr1 = NULL;

		if ( disp__glNormalStream3fv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glNormalStream3fv (
			(GLenum) arg0,
			(const GLfloat *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3d ( GLenum , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalStream3d (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdouble arg1,
		jdouble arg2,
		jdouble arg3)
	{

		if ( disp__glNormalStream3d == NULL ) return;

		disp__glNormalStream3d (
			(GLenum) arg0,
			(GLdouble) arg1,
			(GLdouble) arg2,
			(GLdouble) arg3
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3dv ( GLenum , const GLdouble * ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glNormalStream3dv (
		JNIEnv *env, jobject obj,
		jint arg0,
		jdoubleArray arg1)
	{
		jdouble *ptr1 = NULL;

		if ( disp__glNormalStream3dv == NULL ) return;

		if(arg1!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, arg1, 0);
		}
		disp__glNormalStream3dv (
			(GLenum) arg0,
			(const GLdouble *) ptr1
		);

		if(arg1!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  arg1, ptr1, JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClientActiveVertexStream ( GLenum ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glClientActiveVertexStream (
		JNIEnv *env, jobject obj,
		jint arg0)
	{

		if ( disp__glClientActiveVertexStream == NULL ) return;

		disp__glClientActiveVertexStream (
			(GLenum) arg0
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexBlendEnvi ( GLenum , GLint ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexBlendEnvi (
		JNIEnv *env, jobject obj,
		jint arg0,
		jint arg1)
	{

		if ( disp__glVertexBlendEnvi == NULL ) return;

		disp__glVertexBlendEnvi (
			(GLenum) arg0,
			(GLint) arg1
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexBlendEnvf ( GLenum , GLfloat ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLFuncJauJNI_glVertexBlendEnvf (
		JNIEnv *env, jobject obj,
		jint arg0,
		jfloat arg1)
	{

		if ( disp__glVertexBlendEnvf == NULL ) return;

		disp__glVertexBlendEnvf (
			(GLenum) arg0,
			(GLfloat) arg1
		);

	}

/* C2J Parser Version 3.0:  Java program parsed successfully. */ 
