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
	public final native void glClearIndex (
		float c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearColor ( GLclampf red , GLclampf green , GLclampf blue , GLclampf alpha ) ;
 * </pre> 
 */
	public final native void glClearColor (
		float red,
		float green,
		float blue,
		float alpha
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClear ( GLbitfield mask ) ;
 * </pre> 
 */
	public final native void glClear (
		int mask
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexMask ( GLuint mask ) ;
 * </pre> 
 */
	public final native void glIndexMask (
		int mask
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorMask ( GLboolean red , GLboolean green , GLboolean blue , GLboolean alpha ) ;
 * </pre> 
 */
	public final native void glColorMask (
		boolean red,
		boolean green,
		boolean blue,
		boolean alpha
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAlphaFunc ( GLenum func , GLclampf ref ) ;
 * </pre> 
 */
	public final native void glAlphaFunc (
		int func,
		float ref
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendFunc ( GLenum sfactor , GLenum dfactor ) ;
 * </pre> 
 */
	public final native void glBlendFunc (
		int sfactor,
		int dfactor
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLogicOp ( GLenum opcode ) ;
 * </pre> 
 */
	public final native void glLogicOp (
		int opcode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCullFace ( GLenum mode ) ;
 * </pre> 
 */
	public final native void glCullFace (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFrontFace ( GLenum mode ) ;
 * </pre> 
 */
	public final native void glFrontFace (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointSize ( GLfloat size ) ;
 * </pre> 
 */
	public final native void glPointSize (
		float size
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLineWidth ( GLfloat width ) ;
 * </pre> 
 */
	public final native void glLineWidth (
		float width
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLineStipple ( GLint factor , GLushort pattern ) ;
 * </pre> 
 */
	public final native void glLineStipple (
		int factor,
		short pattern
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPolygonMode ( GLenum face , GLenum mode ) ;
 * </pre> 
 */
	public final native void glPolygonMode (
		int face,
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPolygonOffset ( GLfloat factor , GLfloat units ) ;
 * </pre> 
 */
	public final native void glPolygonOffset (
		float factor,
		float units
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPolygonStipple ( const GLubyte * mask ) ;
 * </pre> 
 */
	public final native void glPolygonStipple (
		byte[] mask
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPolygonStipple ( GLubyte * mask ) ;
 * </pre> 
 */
	public final native void glGetPolygonStipple (
		byte[] mask
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlag ( GLboolean flag ) ;
 * </pre> 
 */
	public final native void glEdgeFlag (
		boolean flag
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlagv ( const GLboolean * flag ) ;
 * </pre> 
 */
	public final native void glEdgeFlagv (
		boolean[] flag
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glScissor ( GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	public final native void glScissor (
		int x,
		int y,
		int width,
		int height
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClipPlane ( GLenum plane , const GLdouble * equation ) ;
 * </pre> 
 */
	public final native void glClipPlane (
		int plane,
		double[] equation
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetClipPlane ( GLenum plane , GLdouble * equation ) ;
 * </pre> 
 */
	public final native void glGetClipPlane (
		int plane,
		double[] equation
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawBuffer ( GLenum mode ) ;
 * </pre> 
 */
	public final native void glDrawBuffer (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReadBuffer ( GLenum mode ) ;
 * </pre> 
 */
	public final native void glReadBuffer (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEnable ( GLenum cap ) ;
 * </pre> 
 */
	public final native void glEnable (
		int cap
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDisable ( GLenum cap ) ;
 * </pre> 
 */
	public final native void glDisable (
		int cap
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsEnabled ( GLenum cap ) ;
 * </pre> 
 */
	public final native boolean glIsEnabled (
		int cap
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEnableClientState ( GLenum cap ) ;
 * </pre> 
 */
	public final native void glEnableClientState (
		int cap
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDisableClientState ( GLenum cap ) ;
 * </pre> 
 */
	public final native void glDisableClientState (
		int cap
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetBooleanv ( GLenum pname , GLboolean * params ) ;
 * </pre> 
 */
	public final native void glGetBooleanv (
		int pname,
		boolean[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetDoublev ( GLenum pname , GLdouble * params ) ;
 * </pre> 
 */
	public final native void glGetDoublev (
		int pname,
		double[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFloatv ( GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	public final native void glGetFloatv (
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetIntegerv ( GLenum pname , GLint * params ) ;
 * </pre> 
 */
	public final native void glGetIntegerv (
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPushAttrib ( GLbitfield mask ) ;
 * </pre> 
 */
	public final native void glPushAttrib (
		int mask
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPopAttrib ( void ) ;
 * </pre> 
 */
	public final native void glPopAttrib (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPushClientAttrib ( GLbitfield mask ) ;
 * </pre> 
 */
	public final native void glPushClientAttrib (
		int mask
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPopClientAttrib ( void ) ;
 * </pre> 
 */
	public final native void glPopClientAttrib (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glRenderMode ( GLenum mode ) ;
 * </pre> 
 */
	public final native int glRenderMode (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLenum glGetError ( void ) ;
 * </pre> 
 */
	public final native int glGetError (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFinish ( void ) ;
 * </pre> 
 */
	public final native void glFinish (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFlush ( void ) ;
 * </pre> 
 */
	public final native void glFlush (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glHint ( GLenum target , GLenum mode ) ;
 * </pre> 
 */
	public final native void glHint (
		int target,
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearDepth ( GLclampd depth ) ;
 * </pre> 
 */
	public final native void glClearDepth (
		double depth
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDepthFunc ( GLenum func ) ;
 * </pre> 
 */
	public final native void glDepthFunc (
		int func
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDepthMask ( GLboolean flag ) ;
 * </pre> 
 */
	public final native void glDepthMask (
		boolean flag
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDepthRange ( GLclampd near_val , GLclampd far_val ) ;
 * </pre> 
 */
	public final native void glDepthRange (
		double near_val,
		double far_val
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearAccum ( GLfloat red , GLfloat green , GLfloat blue , GLfloat alpha ) ;
 * </pre> 
 */
	public final native void glClearAccum (
		float red,
		float green,
		float blue,
		float alpha
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAccum ( GLenum op , GLfloat value ) ;
 * </pre> 
 */
	public final native void glAccum (
		int op,
		float value
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixMode ( GLenum mode ) ;
 * </pre> 
 */
	public final native void glMatrixMode (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glOrtho ( GLdouble left , GLdouble right , GLdouble bottom , GLdouble top , GLdouble near_val , GLdouble far_val ) ;
 * </pre> 
 */
	public final native void glOrtho (
		double left,
		double right,
		double bottom,
		double top,
		double near_val,
		double far_val
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFrustum ( GLdouble left , GLdouble right , GLdouble bottom , GLdouble top , GLdouble near_val , GLdouble far_val ) ;
 * </pre> 
 */
	public final native void glFrustum (
		double left,
		double right,
		double bottom,
		double top,
		double near_val,
		double far_val
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glViewport ( GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	public final native void glViewport (
		int x,
		int y,
		int width,
		int height
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPushMatrix ( void ) ;
 * </pre> 
 */
	public final native void glPushMatrix (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPopMatrix ( void ) ;
 * </pre> 
 */
	public final native void glPopMatrix (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadIdentity ( void ) ;
 * </pre> 
 */
	public final native void glLoadIdentity (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadMatrixd ( const GLdouble * m ) ;
 * </pre> 
 */
	public final native void glLoadMatrixd (
		double[] m
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadMatrixf ( const GLfloat * m ) ;
 * </pre> 
 */
	public final native void glLoadMatrixf (
		float[] m
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultMatrixd ( const GLdouble * m ) ;
 * </pre> 
 */
	public final native void glMultMatrixd (
		double[] m
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultMatrixf ( const GLfloat * m ) ;
 * </pre> 
 */
	public final native void glMultMatrixf (
		float[] m
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRotated ( GLdouble angle , GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	public final native void glRotated (
		double angle,
		double x,
		double y,
		double z
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRotatef ( GLfloat angle , GLfloat x , GLfloat y , GLfloat z ) ;
 * </pre> 
 */
	public final native void glRotatef (
		float angle,
		float x,
		float y,
		float z
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glScaled ( GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	public final native void glScaled (
		double x,
		double y,
		double z
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glScalef ( GLfloat x , GLfloat y , GLfloat z ) ;
 * </pre> 
 */
	public final native void glScalef (
		float x,
		float y,
		float z
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTranslated ( GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	public final native void glTranslated (
		double x,
		double y,
		double z
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTranslatef ( GLfloat x , GLfloat y , GLfloat z ) ;
 * </pre> 
 */
	public final native void glTranslatef (
		float x,
		float y,
		float z
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsList ( GLuint list ) ;
 * </pre> 
 */
	public final native boolean glIsList (
		int list
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteLists ( GLuint list , GLsizei range ) ;
 * </pre> 
 */
	public final native void glDeleteLists (
		int list,
		int range
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenLists ( GLsizei range ) ;
 * </pre> 
 */
	public final native int glGenLists (
		int range
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNewList ( GLuint list , GLenum mode ) ;
 * </pre> 
 */
	public final native void glNewList (
		int list,
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEndList ( void ) ;
 * </pre> 
 */
	public final native void glEndList (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCallList ( GLuint list ) ;
 * </pre> 
 */
	public final native void glCallList (
		int list
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCallLists ( GLsizei n , GLenum type , const GLvoid * lists ) ;
 * </pre> 
 */
	public final native void glCallLists (
		int n,
		int type,
		byte[] lists
	) ;
	public final native void glCallLists (
		int n,
		int type,
		short[] lists
	) ;
	public final native void glCallLists (
		int n,
		int type,
		int[] lists
	) ;
	public final native void glCallLists (
		int n,
		int type,
		float[] lists
	) ;
	public final native void glCallLists (
		int n,
		int type,
		double[] lists
	) ;
	public final native void glCallLists (
		int n,
		int type,
		boolean[] lists
	) ;
	public final native void glCallLists (
		int n,
		int type,
		long[] lists
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glListBase ( GLuint base ) ;
 * </pre> 
 */
	public final native void glListBase (
		int base
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBegin ( GLenum mode ) ;
 * </pre> 
 */
	public final native void glBegin (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEnd ( void ) ;
 * </pre> 
 */
	public final native void glEnd (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2d ( GLdouble x , GLdouble y ) ;
 * </pre> 
 */
	public final native void glVertex2d (
		double x,
		double y
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2f ( GLfloat x , GLfloat y ) ;
 * </pre> 
 */
	public final native void glVertex2f (
		float x,
		float y
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2i ( GLint x , GLint y ) ;
 * </pre> 
 */
	public final native void glVertex2i (
		int x,
		int y
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2s ( GLshort x , GLshort y ) ;
 * </pre> 
 */
	public final native void glVertex2s (
		short x,
		short y
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3d ( GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	public final native void glVertex3d (
		double x,
		double y,
		double z
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3f ( GLfloat x , GLfloat y , GLfloat z ) ;
 * </pre> 
 */
	public final native void glVertex3f (
		float x,
		float y,
		float z
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3i ( GLint x , GLint y , GLint z ) ;
 * </pre> 
 */
	public final native void glVertex3i (
		int x,
		int y,
		int z
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3s ( GLshort x , GLshort y , GLshort z ) ;
 * </pre> 
 */
	public final native void glVertex3s (
		short x,
		short y,
		short z
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4d ( GLdouble x , GLdouble y , GLdouble z , GLdouble w ) ;
 * </pre> 
 */
	public final native void glVertex4d (
		double x,
		double y,
		double z,
		double w
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4f ( GLfloat x , GLfloat y , GLfloat z , GLfloat w ) ;
 * </pre> 
 */
	public final native void glVertex4f (
		float x,
		float y,
		float z,
		float w
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4i ( GLint x , GLint y , GLint z , GLint w ) ;
 * </pre> 
 */
	public final native void glVertex4i (
		int x,
		int y,
		int z,
		int w
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4s ( GLshort x , GLshort y , GLshort z , GLshort w ) ;
 * </pre> 
 */
	public final native void glVertex4s (
		short x,
		short y,
		short z,
		short w
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glVertex2dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glVertex2fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2iv ( const GLint * v ) ;
 * </pre> 
 */
	public final native void glVertex2iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2sv ( const GLshort * v ) ;
 * </pre> 
 */
	public final native void glVertex2sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glVertex3dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glVertex3fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3iv ( const GLint * v ) ;
 * </pre> 
 */
	public final native void glVertex3iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3sv ( const GLshort * v ) ;
 * </pre> 
 */
	public final native void glVertex3sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glVertex4dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glVertex4fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4iv ( const GLint * v ) ;
 * </pre> 
 */
	public final native void glVertex4iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4sv ( const GLshort * v ) ;
 * </pre> 
 */
	public final native void glVertex4sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3b ( GLbyte nx , GLbyte ny , GLbyte nz ) ;
 * </pre> 
 */
	public final native void glNormal3b (
		byte nx,
		byte ny,
		byte nz
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3d ( GLdouble nx , GLdouble ny , GLdouble nz ) ;
 * </pre> 
 */
	public final native void glNormal3d (
		double nx,
		double ny,
		double nz
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3f ( GLfloat nx , GLfloat ny , GLfloat nz ) ;
 * </pre> 
 */
	public final native void glNormal3f (
		float nx,
		float ny,
		float nz
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3i ( GLint nx , GLint ny , GLint nz ) ;
 * </pre> 
 */
	public final native void glNormal3i (
		int nx,
		int ny,
		int nz
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3s ( GLshort nx , GLshort ny , GLshort nz ) ;
 * </pre> 
 */
	public final native void glNormal3s (
		short nx,
		short ny,
		short nz
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3bv ( const GLbyte * v ) ;
 * </pre> 
 */
	public final native void glNormal3bv (
		byte[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glNormal3dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glNormal3fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3iv ( const GLint * v ) ;
 * </pre> 
 */
	public final native void glNormal3iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3sv ( const GLshort * v ) ;
 * </pre> 
 */
	public final native void glNormal3sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexd ( GLdouble c ) ;
 * </pre> 
 */
	public final native void glIndexd (
		double c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexf ( GLfloat c ) ;
 * </pre> 
 */
	public final native void glIndexf (
		float c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexi ( GLint c ) ;
 * </pre> 
 */
	public final native void glIndexi (
		int c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexs ( GLshort c ) ;
 * </pre> 
 */
	public final native void glIndexs (
		short c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexub ( GLubyte c ) ;
 * </pre> 
 */
	public final native void glIndexub (
		byte c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexdv ( const GLdouble * c ) ;
 * </pre> 
 */
	public final native void glIndexdv (
		double[] c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexfv ( const GLfloat * c ) ;
 * </pre> 
 */
	public final native void glIndexfv (
		float[] c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexiv ( const GLint * c ) ;
 * </pre> 
 */
	public final native void glIndexiv (
		int[] c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexsv ( const GLshort * c ) ;
 * </pre> 
 */
	public final native void glIndexsv (
		short[] c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexubv ( const GLubyte * c ) ;
 * </pre> 
 */
	public final native void glIndexubv (
		byte[] c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3b ( GLbyte red , GLbyte green , GLbyte blue ) ;
 * </pre> 
 */
	public final native void glColor3b (
		byte red,
		byte green,
		byte blue
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3d ( GLdouble red , GLdouble green , GLdouble blue ) ;
 * </pre> 
 */
	public final native void glColor3d (
		double red,
		double green,
		double blue
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3f ( GLfloat red , GLfloat green , GLfloat blue ) ;
 * </pre> 
 */
	public final native void glColor3f (
		float red,
		float green,
		float blue
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3i ( GLint red , GLint green , GLint blue ) ;
 * </pre> 
 */
	public final native void glColor3i (
		int red,
		int green,
		int blue
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3s ( GLshort red , GLshort green , GLshort blue ) ;
 * </pre> 
 */
	public final native void glColor3s (
		short red,
		short green,
		short blue
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3ub ( GLubyte red , GLubyte green , GLubyte blue ) ;
 * </pre> 
 */
	public final native void glColor3ub (
		byte red,
		byte green,
		byte blue
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3ui ( GLuint red , GLuint green , GLuint blue ) ;
 * </pre> 
 */
	public final native void glColor3ui (
		int red,
		int green,
		int blue
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3us ( GLushort red , GLushort green , GLushort blue ) ;
 * </pre> 
 */
	public final native void glColor3us (
		short red,
		short green,
		short blue
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4b ( GLbyte red , GLbyte green , GLbyte blue , GLbyte alpha ) ;
 * </pre> 
 */
	public final native void glColor4b (
		byte red,
		byte green,
		byte blue,
		byte alpha
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4d ( GLdouble red , GLdouble green , GLdouble blue , GLdouble alpha ) ;
 * </pre> 
 */
	public final native void glColor4d (
		double red,
		double green,
		double blue,
		double alpha
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4f ( GLfloat red , GLfloat green , GLfloat blue , GLfloat alpha ) ;
 * </pre> 
 */
	public final native void glColor4f (
		float red,
		float green,
		float blue,
		float alpha
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4i ( GLint red , GLint green , GLint blue , GLint alpha ) ;
 * </pre> 
 */
	public final native void glColor4i (
		int red,
		int green,
		int blue,
		int alpha
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4s ( GLshort red , GLshort green , GLshort blue , GLshort alpha ) ;
 * </pre> 
 */
	public final native void glColor4s (
		short red,
		short green,
		short blue,
		short alpha
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ub ( GLubyte red , GLubyte green , GLubyte blue , GLubyte alpha ) ;
 * </pre> 
 */
	public final native void glColor4ub (
		byte red,
		byte green,
		byte blue,
		byte alpha
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ui ( GLuint red , GLuint green , GLuint blue , GLuint alpha ) ;
 * </pre> 
 */
	public final native void glColor4ui (
		int red,
		int green,
		int blue,
		int alpha
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4us ( GLushort red , GLushort green , GLushort blue , GLushort alpha ) ;
 * </pre> 
 */
	public final native void glColor4us (
		short red,
		short green,
		short blue,
		short alpha
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3bv ( const GLbyte * v ) ;
 * </pre> 
 */
	public final native void glColor3bv (
		byte[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glColor3dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glColor3fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3iv ( const GLint * v ) ;
 * </pre> 
 */
	public final native void glColor3iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3sv ( const GLshort * v ) ;
 * </pre> 
 */
	public final native void glColor3sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3ubv ( const GLubyte * v ) ;
 * </pre> 
 */
	public final native void glColor3ubv (
		byte[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3uiv ( const GLuint * v ) ;
 * </pre> 
 */
	public final native void glColor3uiv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3usv ( const GLushort * v ) ;
 * </pre> 
 */
	public final native void glColor3usv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4bv ( const GLbyte * v ) ;
 * </pre> 
 */
	public final native void glColor4bv (
		byte[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glColor4dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glColor4fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4iv ( const GLint * v ) ;
 * </pre> 
 */
	public final native void glColor4iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4sv ( const GLshort * v ) ;
 * </pre> 
 */
	public final native void glColor4sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubv ( const GLubyte * v ) ;
 * </pre> 
 */
	public final native void glColor4ubv (
		byte[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4uiv ( const GLuint * v ) ;
 * </pre> 
 */
	public final native void glColor4uiv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4usv ( const GLushort * v ) ;
 * </pre> 
 */
	public final native void glColor4usv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1d ( GLdouble s ) ;
 * </pre> 
 */
	public final native void glTexCoord1d (
		double s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1f ( GLfloat s ) ;
 * </pre> 
 */
	public final native void glTexCoord1f (
		float s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1i ( GLint s ) ;
 * </pre> 
 */
	public final native void glTexCoord1i (
		int s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1s ( GLshort s ) ;
 * </pre> 
 */
	public final native void glTexCoord1s (
		short s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2d ( GLdouble s , GLdouble t ) ;
 * </pre> 
 */
	public final native void glTexCoord2d (
		double s,
		double t
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2f ( GLfloat s , GLfloat t ) ;
 * </pre> 
 */
	public final native void glTexCoord2f (
		float s,
		float t
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2i ( GLint s , GLint t ) ;
 * </pre> 
 */
	public final native void glTexCoord2i (
		int s,
		int t
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2s ( GLshort s , GLshort t ) ;
 * </pre> 
 */
	public final native void glTexCoord2s (
		short s,
		short t
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3d ( GLdouble s , GLdouble t , GLdouble r ) ;
 * </pre> 
 */
	public final native void glTexCoord3d (
		double s,
		double t,
		double r
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3f ( GLfloat s , GLfloat t , GLfloat r ) ;
 * </pre> 
 */
	public final native void glTexCoord3f (
		float s,
		float t,
		float r
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3i ( GLint s , GLint t , GLint r ) ;
 * </pre> 
 */
	public final native void glTexCoord3i (
		int s,
		int t,
		int r
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3s ( GLshort s , GLshort t , GLshort r ) ;
 * </pre> 
 */
	public final native void glTexCoord3s (
		short s,
		short t,
		short r
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4d ( GLdouble s , GLdouble t , GLdouble r , GLdouble q ) ;
 * </pre> 
 */
	public final native void glTexCoord4d (
		double s,
		double t,
		double r,
		double q
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4f ( GLfloat s , GLfloat t , GLfloat r , GLfloat q ) ;
 * </pre> 
 */
	public final native void glTexCoord4f (
		float s,
		float t,
		float r,
		float q
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4i ( GLint s , GLint t , GLint r , GLint q ) ;
 * </pre> 
 */
	public final native void glTexCoord4i (
		int s,
		int t,
		int r,
		int q
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4s ( GLshort s , GLshort t , GLshort r , GLshort q ) ;
 * </pre> 
 */
	public final native void glTexCoord4s (
		short s,
		short t,
		short r,
		short q
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glTexCoord1dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glTexCoord1fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1iv ( const GLint * v ) ;
 * </pre> 
 */
	public final native void glTexCoord1iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1sv ( const GLshort * v ) ;
 * </pre> 
 */
	public final native void glTexCoord1sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glTexCoord2dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glTexCoord2fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2iv ( const GLint * v ) ;
 * </pre> 
 */
	public final native void glTexCoord2iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2sv ( const GLshort * v ) ;
 * </pre> 
 */
	public final native void glTexCoord2sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glTexCoord3dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glTexCoord3fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3iv ( const GLint * v ) ;
 * </pre> 
 */
	public final native void glTexCoord3iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3sv ( const GLshort * v ) ;
 * </pre> 
 */
	public final native void glTexCoord3sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glTexCoord4dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glTexCoord4fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4iv ( const GLint * v ) ;
 * </pre> 
 */
	public final native void glTexCoord4iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4sv ( const GLshort * v ) ;
 * </pre> 
 */
	public final native void glTexCoord4sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2d ( GLdouble x , GLdouble y ) ;
 * </pre> 
 */
	public final native void glRasterPos2d (
		double x,
		double y
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2f ( GLfloat x , GLfloat y ) ;
 * </pre> 
 */
	public final native void glRasterPos2f (
		float x,
		float y
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2i ( GLint x , GLint y ) ;
 * </pre> 
 */
	public final native void glRasterPos2i (
		int x,
		int y
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2s ( GLshort x , GLshort y ) ;
 * </pre> 
 */
	public final native void glRasterPos2s (
		short x,
		short y
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3d ( GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	public final native void glRasterPos3d (
		double x,
		double y,
		double z
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3f ( GLfloat x , GLfloat y , GLfloat z ) ;
 * </pre> 
 */
	public final native void glRasterPos3f (
		float x,
		float y,
		float z
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3i ( GLint x , GLint y , GLint z ) ;
 * </pre> 
 */
	public final native void glRasterPos3i (
		int x,
		int y,
		int z
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3s ( GLshort x , GLshort y , GLshort z ) ;
 * </pre> 
 */
	public final native void glRasterPos3s (
		short x,
		short y,
		short z
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4d ( GLdouble x , GLdouble y , GLdouble z , GLdouble w ) ;
 * </pre> 
 */
	public final native void glRasterPos4d (
		double x,
		double y,
		double z,
		double w
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4f ( GLfloat x , GLfloat y , GLfloat z , GLfloat w ) ;
 * </pre> 
 */
	public final native void glRasterPos4f (
		float x,
		float y,
		float z,
		float w
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4i ( GLint x , GLint y , GLint z , GLint w ) ;
 * </pre> 
 */
	public final native void glRasterPos4i (
		int x,
		int y,
		int z,
		int w
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4s ( GLshort x , GLshort y , GLshort z , GLshort w ) ;
 * </pre> 
 */
	public final native void glRasterPos4s (
		short x,
		short y,
		short z,
		short w
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glRasterPos2dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glRasterPos2fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2iv ( const GLint * v ) ;
 * </pre> 
 */
	public final native void glRasterPos2iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2sv ( const GLshort * v ) ;
 * </pre> 
 */
	public final native void glRasterPos2sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glRasterPos3dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glRasterPos3fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3iv ( const GLint * v ) ;
 * </pre> 
 */
	public final native void glRasterPos3iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3sv ( const GLshort * v ) ;
 * </pre> 
 */
	public final native void glRasterPos3sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glRasterPos4dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glRasterPos4fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4iv ( const GLint * v ) ;
 * </pre> 
 */
	public final native void glRasterPos4iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4sv ( const GLshort * v ) ;
 * </pre> 
 */
	public final native void glRasterPos4sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectd ( GLdouble x1 , GLdouble y1 , GLdouble x2 , GLdouble y2 ) ;
 * </pre> 
 */
	public final native void glRectd (
		double x1,
		double y1,
		double x2,
		double y2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectf ( GLfloat x1 , GLfloat y1 , GLfloat x2 , GLfloat y2 ) ;
 * </pre> 
 */
	public final native void glRectf (
		float x1,
		float y1,
		float x2,
		float y2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRecti ( GLint x1 , GLint y1 , GLint x2 , GLint y2 ) ;
 * </pre> 
 */
	public final native void glRecti (
		int x1,
		int y1,
		int x2,
		int y2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRects ( GLshort x1 , GLshort y1 , GLshort x2 , GLshort y2 ) ;
 * </pre> 
 */
	public final native void glRects (
		short x1,
		short y1,
		short x2,
		short y2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectdv ( const GLdouble * v1 , const GLdouble * v2 ) ;
 * </pre> 
 */
	public final native void glRectdv (
		double[] v1,
		double[] v2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectfv ( const GLfloat * v1 , const GLfloat * v2 ) ;
 * </pre> 
 */
	public final native void glRectfv (
		float[] v1,
		float[] v2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectiv ( const GLint * v1 , const GLint * v2 ) ;
 * </pre> 
 */
	public final native void glRectiv (
		int[] v1,
		int[] v2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectsv ( const GLshort * v1 , const GLshort * v2 ) ;
 * </pre> 
 */
	public final native void glRectsv (
		short[] v1,
		short[] v2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexPointer ( GLint size , GLenum type , GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	public final native void glVertexPointer (
		int size,
		int type,
		int stride,
		byte[] ptr
	) ;
	public final native void glVertexPointer (
		int size,
		int type,
		int stride,
		short[] ptr
	) ;
	public final native void glVertexPointer (
		int size,
		int type,
		int stride,
		int[] ptr
	) ;
	public final native void glVertexPointer (
		int size,
		int type,
		int stride,
		float[] ptr
	) ;
	public final native void glVertexPointer (
		int size,
		int type,
		int stride,
		double[] ptr
	) ;
	public final native void glVertexPointer (
		int size,
		int type,
		int stride,
		boolean[] ptr
	) ;
	public final native void glVertexPointer (
		int size,
		int type,
		int stride,
		long[] ptr
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalPointer ( GLenum type , GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	public final native void glNormalPointer (
		int type,
		int stride,
		byte[] ptr
	) ;
	public final native void glNormalPointer (
		int type,
		int stride,
		short[] ptr
	) ;
	public final native void glNormalPointer (
		int type,
		int stride,
		int[] ptr
	) ;
	public final native void glNormalPointer (
		int type,
		int stride,
		float[] ptr
	) ;
	public final native void glNormalPointer (
		int type,
		int stride,
		double[] ptr
	) ;
	public final native void glNormalPointer (
		int type,
		int stride,
		boolean[] ptr
	) ;
	public final native void glNormalPointer (
		int type,
		int stride,
		long[] ptr
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorPointer ( GLint size , GLenum type , GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	public final native void glColorPointer (
		int size,
		int type,
		int stride,
		byte[] ptr
	) ;
	public final native void glColorPointer (
		int size,
		int type,
		int stride,
		short[] ptr
	) ;
	public final native void glColorPointer (
		int size,
		int type,
		int stride,
		int[] ptr
	) ;
	public final native void glColorPointer (
		int size,
		int type,
		int stride,
		float[] ptr
	) ;
	public final native void glColorPointer (
		int size,
		int type,
		int stride,
		double[] ptr
	) ;
	public final native void glColorPointer (
		int size,
		int type,
		int stride,
		boolean[] ptr
	) ;
	public final native void glColorPointer (
		int size,
		int type,
		int stride,
		long[] ptr
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexPointer ( GLenum type , GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	public final native void glIndexPointer (
		int type,
		int stride,
		byte[] ptr
	) ;
	public final native void glIndexPointer (
		int type,
		int stride,
		short[] ptr
	) ;
	public final native void glIndexPointer (
		int type,
		int stride,
		int[] ptr
	) ;
	public final native void glIndexPointer (
		int type,
		int stride,
		float[] ptr
	) ;
	public final native void glIndexPointer (
		int type,
		int stride,
		double[] ptr
	) ;
	public final native void glIndexPointer (
		int type,
		int stride,
		boolean[] ptr
	) ;
	public final native void glIndexPointer (
		int type,
		int stride,
		long[] ptr
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoordPointer ( GLint size , GLenum type , GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	public final native void glTexCoordPointer (
		int size,
		int type,
		int stride,
		byte[] ptr
	) ;
	public final native void glTexCoordPointer (
		int size,
		int type,
		int stride,
		short[] ptr
	) ;
	public final native void glTexCoordPointer (
		int size,
		int type,
		int stride,
		int[] ptr
	) ;
	public final native void glTexCoordPointer (
		int size,
		int type,
		int stride,
		float[] ptr
	) ;
	public final native void glTexCoordPointer (
		int size,
		int type,
		int stride,
		double[] ptr
	) ;
	public final native void glTexCoordPointer (
		int size,
		int type,
		int stride,
		boolean[] ptr
	) ;
	public final native void glTexCoordPointer (
		int size,
		int type,
		int stride,
		long[] ptr
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlagPointer ( GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	public final native void glEdgeFlagPointer (
		int stride,
		byte[] ptr
	) ;
	public final native void glEdgeFlagPointer (
		int stride,
		short[] ptr
	) ;
	public final native void glEdgeFlagPointer (
		int stride,
		int[] ptr
	) ;
	public final native void glEdgeFlagPointer (
		int stride,
		float[] ptr
	) ;
	public final native void glEdgeFlagPointer (
		int stride,
		double[] ptr
	) ;
	public final native void glEdgeFlagPointer (
		int stride,
		boolean[] ptr
	) ;
	public final native void glEdgeFlagPointer (
		int stride,
		long[] ptr
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPointerv ( GLenum pname , GLvoid * * params ) ;
 * </pre> 
 */
	public final native void glGetPointerv (
		int pname,
		byte[][] params
	) ;
	public final native void glGetPointerv (
		int pname,
		short[][] params
	) ;
	public final native void glGetPointerv (
		int pname,
		int[][] params
	) ;
	public final native void glGetPointerv (
		int pname,
		float[][] params
	) ;
	public final native void glGetPointerv (
		int pname,
		double[][] params
	) ;
	public final native void glGetPointerv (
		int pname,
		boolean[][] params
	) ;
	public final native void glGetPointerv (
		int pname,
		long[][] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glArrayElement ( GLint i ) ;
 * </pre> 
 */
	public final native void glArrayElement (
		int i
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawArrays ( GLenum mode , GLint first , GLsizei count ) ;
 * </pre> 
 */
	public final native void glDrawArrays (
		int mode,
		int first,
		int count
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawElements ( GLenum mode , GLsizei count , GLenum type , const GLvoid * indices ) ;
 * </pre> 
 */
	public final native void glDrawElements (
		int mode,
		int count,
		int type,
		byte[] indices
	) ;
	public final native void glDrawElements (
		int mode,
		int count,
		int type,
		short[] indices
	) ;
	public final native void glDrawElements (
		int mode,
		int count,
		int type,
		int[] indices
	) ;
	public final native void glDrawElements (
		int mode,
		int count,
		int type,
		float[] indices
	) ;
	public final native void glDrawElements (
		int mode,
		int count,
		int type,
		double[] indices
	) ;
	public final native void glDrawElements (
		int mode,
		int count,
		int type,
		boolean[] indices
	) ;
	public final native void glDrawElements (
		int mode,
		int count,
		int type,
		long[] indices
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glInterleavedArrays ( GLenum format , GLsizei stride , const GLvoid * pointer ) ;
 * </pre> 
 */
	public final native void glInterleavedArrays (
		int format,
		int stride,
		byte[] pointer
	) ;
	public final native void glInterleavedArrays (
		int format,
		int stride,
		short[] pointer
	) ;
	public final native void glInterleavedArrays (
		int format,
		int stride,
		int[] pointer
	) ;
	public final native void glInterleavedArrays (
		int format,
		int stride,
		float[] pointer
	) ;
	public final native void glInterleavedArrays (
		int format,
		int stride,
		double[] pointer
	) ;
	public final native void glInterleavedArrays (
		int format,
		int stride,
		boolean[] pointer
	) ;
	public final native void glInterleavedArrays (
		int format,
		int stride,
		long[] pointer
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glShadeModel ( GLenum mode ) ;
 * </pre> 
 */
	public final native void glShadeModel (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightf ( GLenum light , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public final native void glLightf (
		int light,
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLighti ( GLenum light , GLenum pname , GLint param ) ;
 * </pre> 
 */
	public final native void glLighti (
		int light,
		int pname,
		int param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightfv ( GLenum light , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	public final native void glLightfv (
		int light,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightiv ( GLenum light , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	public final native void glLightiv (
		int light,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetLightfv ( GLenum light , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	public final native void glGetLightfv (
		int light,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetLightiv ( GLenum light , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	public final native void glGetLightiv (
		int light,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightModelf ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public final native void glLightModelf (
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightModeli ( GLenum pname , GLint param ) ;
 * </pre> 
 */
	public final native void glLightModeli (
		int pname,
		int param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightModelfv ( GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	public final native void glLightModelfv (
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightModeliv ( GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	public final native void glLightModeliv (
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMaterialf ( GLenum face , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public final native void glMaterialf (
		int face,
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMateriali ( GLenum face , GLenum pname , GLint param ) ;
 * </pre> 
 */
	public final native void glMateriali (
		int face,
		int pname,
		int param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMaterialfv ( GLenum face , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	public final native void glMaterialfv (
		int face,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMaterialiv ( GLenum face , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	public final native void glMaterialiv (
		int face,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMaterialfv ( GLenum face , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	public final native void glGetMaterialfv (
		int face,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMaterialiv ( GLenum face , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	public final native void glGetMaterialiv (
		int face,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorMaterial ( GLenum face , GLenum mode ) ;
 * </pre> 
 */
	public final native void glColorMaterial (
		int face,
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelZoom ( GLfloat xfactor , GLfloat yfactor ) ;
 * </pre> 
 */
	public final native void glPixelZoom (
		float xfactor,
		float yfactor
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelStoref ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public final native void glPixelStoref (
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelStorei ( GLenum pname , GLint param ) ;
 * </pre> 
 */
	public final native void glPixelStorei (
		int pname,
		int param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransferf ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public final native void glPixelTransferf (
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransferi ( GLenum pname , GLint param ) ;
 * </pre> 
 */
	public final native void glPixelTransferi (
		int pname,
		int param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelMapfv ( GLenum map , GLint mapsize , const GLfloat * values ) ;
 * </pre> 
 */
	public final native void glPixelMapfv (
		int map,
		int mapsize,
		float[] values
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelMapuiv ( GLenum map , GLint mapsize , const GLuint * values ) ;
 * </pre> 
 */
	public final native void glPixelMapuiv (
		int map,
		int mapsize,
		int[] values
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelMapusv ( GLenum map , GLint mapsize , const GLushort * values ) ;
 * </pre> 
 */
	public final native void glPixelMapusv (
		int map,
		int mapsize,
		short[] values
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelMapfv ( GLenum map , GLfloat * values ) ;
 * </pre> 
 */
	public final native void glGetPixelMapfv (
		int map,
		float[] values
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelMapuiv ( GLenum map , GLuint * values ) ;
 * </pre> 
 */
	public final native void glGetPixelMapuiv (
		int map,
		int[] values
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelMapusv ( GLenum map , GLushort * values ) ;
 * </pre> 
 */
	public final native void glGetPixelMapusv (
		int map,
		short[] values
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBitmap ( GLsizei width , GLsizei height , GLfloat xorig , GLfloat yorig , GLfloat xmove , GLfloat ymove , const GLubyte * bitmap ) ;
 * </pre> 
 */
	public final native void glBitmap (
		int width,
		int height,
		float xorig,
		float yorig,
		float xmove,
		float ymove,
		byte[] bitmap
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReadPixels ( GLint x , GLint y , GLsizei width , GLsizei height , GLenum format , GLenum type , GLvoid * pixels ) ;
 * </pre> 
 */
	public final native void glReadPixels (
		int x,
		int y,
		int width,
		int height,
		int format,
		int type,
		byte[] pixels
	) ;
	public final native void glReadPixels (
		int x,
		int y,
		int width,
		int height,
		int format,
		int type,
		short[] pixels
	) ;
	public final native void glReadPixels (
		int x,
		int y,
		int width,
		int height,
		int format,
		int type,
		int[] pixels
	) ;
	public final native void glReadPixels (
		int x,
		int y,
		int width,
		int height,
		int format,
		int type,
		float[] pixels
	) ;
	public final native void glReadPixels (
		int x,
		int y,
		int width,
		int height,
		int format,
		int type,
		double[] pixels
	) ;
	public final native void glReadPixels (
		int x,
		int y,
		int width,
		int height,
		int format,
		int type,
		boolean[] pixels
	) ;
	public final native void glReadPixels (
		int x,
		int y,
		int width,
		int height,
		int format,
		int type,
		long[] pixels
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawPixels ( GLsizei width , GLsizei height , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	public final native void glDrawPixels (
		int width,
		int height,
		int format,
		int type,
		byte[] pixels
	) ;
	public final native void glDrawPixels (
		int width,
		int height,
		int format,
		int type,
		short[] pixels
	) ;
	public final native void glDrawPixels (
		int width,
		int height,
		int format,
		int type,
		int[] pixels
	) ;
	public final native void glDrawPixels (
		int width,
		int height,
		int format,
		int type,
		float[] pixels
	) ;
	public final native void glDrawPixels (
		int width,
		int height,
		int format,
		int type,
		double[] pixels
	) ;
	public final native void glDrawPixels (
		int width,
		int height,
		int format,
		int type,
		boolean[] pixels
	) ;
	public final native void glDrawPixels (
		int width,
		int height,
		int format,
		int type,
		long[] pixels
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyPixels ( GLint x , GLint y , GLsizei width , GLsizei height , GLenum type ) ;
 * </pre> 
 */
	public final native void glCopyPixels (
		int x,
		int y,
		int width,
		int height,
		int type
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStencilFunc ( GLenum func , GLint ref , GLuint mask ) ;
 * </pre> 
 */
	public final native void glStencilFunc (
		int func,
		int ref,
		int mask
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStencilMask ( GLuint mask ) ;
 * </pre> 
 */
	public final native void glStencilMask (
		int mask
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStencilOp ( GLenum fail , GLenum zfail , GLenum zpass ) ;
 * </pre> 
 */
	public final native void glStencilOp (
		int fail,
		int zfail,
		int zpass
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearStencil ( GLint s ) ;
 * </pre> 
 */
	public final native void glClearStencil (
		int s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGend ( GLenum coord , GLenum pname , GLdouble param ) ;
 * </pre> 
 */
	public final native void glTexGend (
		int coord,
		int pname,
		double param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGenf ( GLenum coord , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public final native void glTexGenf (
		int coord,
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGeni ( GLenum coord , GLenum pname , GLint param ) ;
 * </pre> 
 */
	public final native void glTexGeni (
		int coord,
		int pname,
		int param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGendv ( GLenum coord , GLenum pname , const GLdouble * params ) ;
 * </pre> 
 */
	public final native void glTexGendv (
		int coord,
		int pname,
		double[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGenfv ( GLenum coord , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	public final native void glTexGenfv (
		int coord,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGeniv ( GLenum coord , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	public final native void glTexGeniv (
		int coord,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexGendv ( GLenum coord , GLenum pname , GLdouble * params ) ;
 * </pre> 
 */
	public final native void glGetTexGendv (
		int coord,
		int pname,
		double[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexGenfv ( GLenum coord , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	public final native void glGetTexGenfv (
		int coord,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexGeniv ( GLenum coord , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	public final native void glGetTexGeniv (
		int coord,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexEnvf ( GLenum target , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public final native void glTexEnvf (
		int target,
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexEnvi ( GLenum target , GLenum pname , GLint param ) ;
 * </pre> 
 */
	public final native void glTexEnvi (
		int target,
		int pname,
		int param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexEnvfv ( GLenum target , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	public final native void glTexEnvfv (
		int target,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexEnviv ( GLenum target , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	public final native void glTexEnviv (
		int target,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexEnvfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	public final native void glGetTexEnvfv (
		int target,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexEnviv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	public final native void glGetTexEnviv (
		int target,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexParameterf ( GLenum target , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public final native void glTexParameterf (
		int target,
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexParameteri ( GLenum target , GLenum pname , GLint param ) ;
 * </pre> 
 */
	public final native void glTexParameteri (
		int target,
		int pname,
		int param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexParameterfv ( GLenum target , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	public final native void glTexParameterfv (
		int target,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexParameteriv ( GLenum target , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	public final native void glTexParameteriv (
		int target,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexParameterfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	public final native void glGetTexParameterfv (
		int target,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexParameteriv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	public final native void glGetTexParameteriv (
		int target,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexLevelParameterfv ( GLenum target , GLint level , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	public final native void glGetTexLevelParameterfv (
		int target,
		int level,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexLevelParameteriv ( GLenum target , GLint level , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	public final native void glGetTexLevelParameteriv (
		int target,
		int level,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage1D ( GLenum target , GLint level , GLint internalFormat , GLsizei width , GLint border , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	public final native void glTexImage1D (
		int target,
		int level,
		int internalFormat,
		int width,
		int border,
		int format,
		int type,
		byte[] pixels
	) ;
	public final native void glTexImage1D (
		int target,
		int level,
		int internalFormat,
		int width,
		int border,
		int format,
		int type,
		short[] pixels
	) ;
	public final native void glTexImage1D (
		int target,
		int level,
		int internalFormat,
		int width,
		int border,
		int format,
		int type,
		int[] pixels
	) ;
	public final native void glTexImage1D (
		int target,
		int level,
		int internalFormat,
		int width,
		int border,
		int format,
		int type,
		float[] pixels
	) ;
	public final native void glTexImage1D (
		int target,
		int level,
		int internalFormat,
		int width,
		int border,
		int format,
		int type,
		double[] pixels
	) ;
	public final native void glTexImage1D (
		int target,
		int level,
		int internalFormat,
		int width,
		int border,
		int format,
		int type,
		boolean[] pixels
	) ;
	public final native void glTexImage1D (
		int target,
		int level,
		int internalFormat,
		int width,
		int border,
		int format,
		int type,
		long[] pixels
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage2D ( GLenum target , GLint level , GLint internalFormat , GLsizei width , GLsizei height , GLint border , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	public final native void glTexImage2D (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int border,
		int format,
		int type,
		byte[] pixels
	) ;
	public final native void glTexImage2D (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int border,
		int format,
		int type,
		short[] pixels
	) ;
	public final native void glTexImage2D (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int border,
		int format,
		int type,
		int[] pixels
	) ;
	public final native void glTexImage2D (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int border,
		int format,
		int type,
		float[] pixels
	) ;
	public final native void glTexImage2D (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int border,
		int format,
		int type,
		double[] pixels
	) ;
	public final native void glTexImage2D (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int border,
		int format,
		int type,
		boolean[] pixels
	) ;
	public final native void glTexImage2D (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int border,
		int format,
		int type,
		long[] pixels
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexImage ( GLenum target , GLint level , GLenum format , GLenum type , GLvoid * pixels ) ;
 * </pre> 
 */
	public final native void glGetTexImage (
		int target,
		int level,
		int format,
		int type,
		byte[] pixels
	) ;
	public final native void glGetTexImage (
		int target,
		int level,
		int format,
		int type,
		short[] pixels
	) ;
	public final native void glGetTexImage (
		int target,
		int level,
		int format,
		int type,
		int[] pixels
	) ;
	public final native void glGetTexImage (
		int target,
		int level,
		int format,
		int type,
		float[] pixels
	) ;
	public final native void glGetTexImage (
		int target,
		int level,
		int format,
		int type,
		double[] pixels
	) ;
	public final native void glGetTexImage (
		int target,
		int level,
		int format,
		int type,
		boolean[] pixels
	) ;
	public final native void glGetTexImage (
		int target,
		int level,
		int format,
		int type,
		long[] pixels
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGenTextures ( GLsizei n , GLuint * textures ) ;
 * </pre> 
 */
	public final native void glGenTextures (
		int n,
		int[] textures
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteTextures ( GLsizei n , const GLuint * textures ) ;
 * </pre> 
 */
	public final native void glDeleteTextures (
		int n,
		int[] textures
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindTexture ( GLenum target , GLuint texture ) ;
 * </pre> 
 */
	public final native void glBindTexture (
		int target,
		int texture
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPrioritizeTextures ( GLsizei n , const GLuint * textures , const GLclampf * priorities ) ;
 * </pre> 
 */
	public final native void glPrioritizeTextures (
		int n,
		int[] textures,
		float[] priorities
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glAreTexturesResident ( GLsizei n , const GLuint * textures , GLboolean * residences ) ;
 * </pre> 
 */
	public final native boolean glAreTexturesResident (
		int n,
		int[] textures,
		boolean[] residences
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsTexture ( GLuint texture ) ;
 * </pre> 
 */
	public final native boolean glIsTexture (
		int texture
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage1D ( GLenum target , GLint level , GLint xoffset , GLsizei width , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	public final native void glTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int type,
		byte[] pixels
	) ;
	public final native void glTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int type,
		short[] pixels
	) ;
	public final native void glTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int type,
		int[] pixels
	) ;
	public final native void glTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int type,
		float[] pixels
	) ;
	public final native void glTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int type,
		double[] pixels
	) ;
	public final native void glTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int type,
		boolean[] pixels
	) ;
	public final native void glTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int type,
		long[] pixels
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage2D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLsizei width , GLsizei height , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	public final native void glTexSubImage2D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int width,
		int height,
		int format,
		int type,
		byte[] pixels
	) ;
	public final native void glTexSubImage2D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int width,
		int height,
		int format,
		int type,
		short[] pixels
	) ;
	public final native void glTexSubImage2D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int width,
		int height,
		int format,
		int type,
		int[] pixels
	) ;
	public final native void glTexSubImage2D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int width,
		int height,
		int format,
		int type,
		float[] pixels
	) ;
	public final native void glTexSubImage2D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int width,
		int height,
		int format,
		int type,
		double[] pixels
	) ;
	public final native void glTexSubImage2D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int width,
		int height,
		int format,
		int type,
		boolean[] pixels
	) ;
	public final native void glTexSubImage2D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int width,
		int height,
		int format,
		int type,
		long[] pixels
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexImage1D ( GLenum target , GLint level , GLenum internalformat , GLint x , GLint y , GLsizei width , GLint border ) ;
 * </pre> 
 */
	public final native void glCopyTexImage1D (
		int target,
		int level,
		int internalformat,
		int x,
		int y,
		int width,
		int border
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexImage2D ( GLenum target , GLint level , GLenum internalformat , GLint x , GLint y , GLsizei width , GLsizei height , GLint border ) ;
 * </pre> 
 */
	public final native void glCopyTexImage2D (
		int target,
		int level,
		int internalformat,
		int x,
		int y,
		int width,
		int height,
		int border
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage1D ( GLenum target , GLint level , GLint xoffset , GLint x , GLint y , GLsizei width ) ;
 * </pre> 
 */
	public final native void glCopyTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int x,
		int y,
		int width
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage2D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	public final native void glCopyTexSubImage2D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int x,
		int y,
		int width,
		int height
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMap1d ( GLenum target , GLdouble u1 , GLdouble u2 , GLint stride , GLint order , const GLdouble * points ) ;
 * </pre> 
 */
	public final native void glMap1d (
		int target,
		double u1,
		double u2,
		int stride,
		int order,
		double[] points
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMap1f ( GLenum target , GLfloat u1 , GLfloat u2 , GLint stride , GLint order , const GLfloat * points ) ;
 * </pre> 
 */
	public final native void glMap1f (
		int target,
		float u1,
		float u2,
		int stride,
		int order,
		float[] points
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMap2d ( GLenum target , GLdouble u1 , GLdouble u2 , GLint ustride , GLint uorder , GLdouble v1 , GLdouble v2 , GLint vstride , GLint vorder , const GLdouble * points ) ;
 * </pre> 
 */
	public final native void glMap2d (
		int target,
		double u1,
		double u2,
		int ustride,
		int uorder,
		double v1,
		double v2,
		int vstride,
		int vorder,
		double[] points
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMap2f ( GLenum target , GLfloat u1 , GLfloat u2 , GLint ustride , GLint uorder , GLfloat v1 , GLfloat v2 , GLint vstride , GLint vorder , const GLfloat * points ) ;
 * </pre> 
 */
	public final native void glMap2f (
		int target,
		float u1,
		float u2,
		int ustride,
		int uorder,
		float v1,
		float v2,
		int vstride,
		int vorder,
		float[] points
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapdv ( GLenum target , GLenum query , GLdouble * v ) ;
 * </pre> 
 */
	public final native void glGetMapdv (
		int target,
		int query,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapfv ( GLenum target , GLenum query , GLfloat * v ) ;
 * </pre> 
 */
	public final native void glGetMapfv (
		int target,
		int query,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapiv ( GLenum target , GLenum query , GLint * v ) ;
 * </pre> 
 */
	public final native void glGetMapiv (
		int target,
		int query,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord1d ( GLdouble u ) ;
 * </pre> 
 */
	public final native void glEvalCoord1d (
		double u
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord1f ( GLfloat u ) ;
 * </pre> 
 */
	public final native void glEvalCoord1f (
		float u
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord1dv ( const GLdouble * u ) ;
 * </pre> 
 */
	public final native void glEvalCoord1dv (
		double[] u
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord1fv ( const GLfloat * u ) ;
 * </pre> 
 */
	public final native void glEvalCoord1fv (
		float[] u
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord2d ( GLdouble u , GLdouble v ) ;
 * </pre> 
 */
	public final native void glEvalCoord2d (
		double u,
		double v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord2f ( GLfloat u , GLfloat v ) ;
 * </pre> 
 */
	public final native void glEvalCoord2f (
		float u,
		float v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord2dv ( const GLdouble * u ) ;
 * </pre> 
 */
	public final native void glEvalCoord2dv (
		double[] u
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord2fv ( const GLfloat * u ) ;
 * </pre> 
 */
	public final native void glEvalCoord2fv (
		float[] u
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapGrid1d ( GLint un , GLdouble u1 , GLdouble u2 ) ;
 * </pre> 
 */
	public final native void glMapGrid1d (
		int un,
		double u1,
		double u2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapGrid1f ( GLint un , GLfloat u1 , GLfloat u2 ) ;
 * </pre> 
 */
	public final native void glMapGrid1f (
		int un,
		float u1,
		float u2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapGrid2d ( GLint un , GLdouble u1 , GLdouble u2 , GLint vn , GLdouble v1 , GLdouble v2 ) ;
 * </pre> 
 */
	public final native void glMapGrid2d (
		int un,
		double u1,
		double u2,
		int vn,
		double v1,
		double v2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapGrid2f ( GLint un , GLfloat u1 , GLfloat u2 , GLint vn , GLfloat v1 , GLfloat v2 ) ;
 * </pre> 
 */
	public final native void glMapGrid2f (
		int un,
		float u1,
		float u2,
		int vn,
		float v1,
		float v2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalPoint1 ( GLint i ) ;
 * </pre> 
 */
	public final native void glEvalPoint1 (
		int i
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalPoint2 ( GLint i , GLint j ) ;
 * </pre> 
 */
	public final native void glEvalPoint2 (
		int i,
		int j
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalMesh1 ( GLenum mode , GLint i1 , GLint i2 ) ;
 * </pre> 
 */
	public final native void glEvalMesh1 (
		int mode,
		int i1,
		int i2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalMesh2 ( GLenum mode , GLint i1 , GLint i2 , GLint j1 , GLint j2 ) ;
 * </pre> 
 */
	public final native void glEvalMesh2 (
		int mode,
		int i1,
		int i2,
		int j1,
		int j2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogf ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public final native void glFogf (
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogi ( GLenum pname , GLint param ) ;
 * </pre> 
 */
	public final native void glFogi (
		int pname,
		int param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogfv ( GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	public final native void glFogfv (
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogiv ( GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	public final native void glFogiv (
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFeedbackBuffer ( GLsizei size , GLenum type , GLfloat * buffer ) ;
 * </pre> 
 */
	public final native void glFeedbackBuffer (
		int size,
		int type,
		float[] buffer
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPassThrough ( GLfloat token ) ;
 * </pre> 
 */
	public final native void glPassThrough (
		float token
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSelectBuffer ( GLsizei size , GLuint * buffer ) ;
 * </pre> 
 */
	public final native void glSelectBuffer (
		int size,
		int[] buffer
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glInitNames ( void ) ;
 * </pre> 
 */
	public final native void glInitNames (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadName ( GLuint name ) ;
 * </pre> 
 */
	public final native void glLoadName (
		int name
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPushName ( GLuint name ) ;
 * </pre> 
 */
	public final native void glPushName (
		int name
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPopName ( void ) ;
 * </pre> 
 */
	public final native void glPopName (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawRangeElements ( GLenum mode , GLuint start , GLuint end , GLsizei count , GLenum type , const GLvoid * indices ) ;
 * </pre> 
 */
	public final native void glDrawRangeElements (
		int mode,
		int start,
		int end,
		int count,
		int type,
		byte[] indices
	) ;
	public final native void glDrawRangeElements (
		int mode,
		int start,
		int end,
		int count,
		int type,
		short[] indices
	) ;
	public final native void glDrawRangeElements (
		int mode,
		int start,
		int end,
		int count,
		int type,
		int[] indices
	) ;
	public final native void glDrawRangeElements (
		int mode,
		int start,
		int end,
		int count,
		int type,
		float[] indices
	) ;
	public final native void glDrawRangeElements (
		int mode,
		int start,
		int end,
		int count,
		int type,
		double[] indices
	) ;
	public final native void glDrawRangeElements (
		int mode,
		int start,
		int end,
		int count,
		int type,
		boolean[] indices
	) ;
	public final native void glDrawRangeElements (
		int mode,
		int start,
		int end,
		int count,
		int type,
		long[] indices
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage3D ( GLenum target , GLint level , GLenum internalFormat , GLsizei width , GLsizei height , GLsizei depth , GLint border , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	public final native void glTexImage3D (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int depth,
		int border,
		int format,
		int type,
		byte[] pixels
	) ;
	public final native void glTexImage3D (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int depth,
		int border,
		int format,
		int type,
		short[] pixels
	) ;
	public final native void glTexImage3D (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int depth,
		int border,
		int format,
		int type,
		int[] pixels
	) ;
	public final native void glTexImage3D (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int depth,
		int border,
		int format,
		int type,
		float[] pixels
	) ;
	public final native void glTexImage3D (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int depth,
		int border,
		int format,
		int type,
		double[] pixels
	) ;
	public final native void glTexImage3D (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int depth,
		int border,
		int format,
		int type,
		boolean[] pixels
	) ;
	public final native void glTexImage3D (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int depth,
		int border,
		int format,
		int type,
		long[] pixels
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage3D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint zoffset , GLsizei width , GLsizei height , GLsizei depth , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	public final native void glTexSubImage3D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int type,
		byte[] pixels
	) ;
	public final native void glTexSubImage3D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int type,
		short[] pixels
	) ;
	public final native void glTexSubImage3D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int type,
		int[] pixels
	) ;
	public final native void glTexSubImage3D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int type,
		float[] pixels
	) ;
	public final native void glTexSubImage3D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int type,
		double[] pixels
	) ;
	public final native void glTexSubImage3D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int type,
		boolean[] pixels
	) ;
	public final native void glTexSubImage3D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int type,
		long[] pixels
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage3D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint zoffset , GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	public final native void glCopyTexSubImage3D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int x,
		int y,
		int width,
		int height
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTable ( GLenum target , GLenum internalformat , GLsizei width , GLenum format , GLenum type , const GLvoid * table ) ;
 * </pre> 
 */
	public final native void glColorTable (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		byte[] table
	) ;
	public final native void glColorTable (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		short[] table
	) ;
	public final native void glColorTable (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		int[] table
	) ;
	public final native void glColorTable (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		float[] table
	) ;
	public final native void glColorTable (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		double[] table
	) ;
	public final native void glColorTable (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		boolean[] table
	) ;
	public final native void glColorTable (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		long[] table
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorSubTable ( GLenum target , GLsizei start , GLsizei count , GLenum format , GLenum type , const GLvoid * data ) ;
 * </pre> 
 */
	public final native void glColorSubTable (
		int target,
		int start,
		int count,
		int format,
		int type,
		byte[] data
	) ;
	public final native void glColorSubTable (
		int target,
		int start,
		int count,
		int format,
		int type,
		short[] data
	) ;
	public final native void glColorSubTable (
		int target,
		int start,
		int count,
		int format,
		int type,
		int[] data
	) ;
	public final native void glColorSubTable (
		int target,
		int start,
		int count,
		int format,
		int type,
		float[] data
	) ;
	public final native void glColorSubTable (
		int target,
		int start,
		int count,
		int format,
		int type,
		double[] data
	) ;
	public final native void glColorSubTable (
		int target,
		int start,
		int count,
		int format,
		int type,
		boolean[] data
	) ;
	public final native void glColorSubTable (
		int target,
		int start,
		int count,
		int format,
		int type,
		long[] data
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableParameteriv ( GLenum target , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	public final native void glColorTableParameteriv (
		int target,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableParameterfv ( GLenum target , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	public final native void glColorTableParameterfv (
		int target,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyColorSubTable ( GLenum target , GLsizei start , GLint x , GLint y , GLsizei width ) ;
 * </pre> 
 */
	public final native void glCopyColorSubTable (
		int target,
		int start,
		int x,
		int y,
		int width
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyColorTable ( GLenum target , GLenum internalformat , GLint x , GLint y , GLsizei width ) ;
 * </pre> 
 */
	public final native void glCopyColorTable (
		int target,
		int internalformat,
		int x,
		int y,
		int width
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTable ( GLenum target , GLenum format , GLenum type , GLvoid * table ) ;
 * </pre> 
 */
	public final native void glGetColorTable (
		int target,
		int format,
		int type,
		byte[] table
	) ;
	public final native void glGetColorTable (
		int target,
		int format,
		int type,
		short[] table
	) ;
	public final native void glGetColorTable (
		int target,
		int format,
		int type,
		int[] table
	) ;
	public final native void glGetColorTable (
		int target,
		int format,
		int type,
		float[] table
	) ;
	public final native void glGetColorTable (
		int target,
		int format,
		int type,
		double[] table
	) ;
	public final native void glGetColorTable (
		int target,
		int format,
		int type,
		boolean[] table
	) ;
	public final native void glGetColorTable (
		int target,
		int format,
		int type,
		long[] table
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameterfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	public final native void glGetColorTableParameterfv (
		int target,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameteriv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	public final native void glGetColorTableParameteriv (
		int target,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendEquation ( GLenum mode ) ;
 * </pre> 
 */
	public final native void glBlendEquation (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendColor ( GLclampf red , GLclampf green , GLclampf blue , GLclampf alpha ) ;
 * </pre> 
 */
	public final native void glBlendColor (
		float red,
		float green,
		float blue,
		float alpha
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glHistogram ( GLenum target , GLsizei width , GLenum internalformat , GLboolean sink ) ;
 * </pre> 
 */
	public final native void glHistogram (
		int target,
		int width,
		int internalformat,
		boolean sink
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glResetHistogram ( GLenum target ) ;
 * </pre> 
 */
	public final native void glResetHistogram (
		int target
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogram ( GLenum target , GLboolean reset , GLenum format , GLenum type , GLvoid * values ) ;
 * </pre> 
 */
	public final native void glGetHistogram (
		int target,
		boolean reset,
		int format,
		int type,
		byte[] values
	) ;
	public final native void glGetHistogram (
		int target,
		boolean reset,
		int format,
		int type,
		short[] values
	) ;
	public final native void glGetHistogram (
		int target,
		boolean reset,
		int format,
		int type,
		int[] values
	) ;
	public final native void glGetHistogram (
		int target,
		boolean reset,
		int format,
		int type,
		float[] values
	) ;
	public final native void glGetHistogram (
		int target,
		boolean reset,
		int format,
		int type,
		double[] values
	) ;
	public final native void glGetHistogram (
		int target,
		boolean reset,
		int format,
		int type,
		boolean[] values
	) ;
	public final native void glGetHistogram (
		int target,
		boolean reset,
		int format,
		int type,
		long[] values
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogramParameterfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	public final native void glGetHistogramParameterfv (
		int target,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogramParameteriv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	public final native void glGetHistogramParameteriv (
		int target,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMinmax ( GLenum target , GLenum internalformat , GLboolean sink ) ;
 * </pre> 
 */
	public final native void glMinmax (
		int target,
		int internalformat,
		boolean sink
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glResetMinmax ( GLenum target ) ;
 * </pre> 
 */
	public final native void glResetMinmax (
		int target
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmax ( GLenum target , GLboolean reset , GLenum format , GLenum types , GLvoid * values ) ;
 * </pre> 
 */
	public final native void glGetMinmax (
		int target,
		boolean reset,
		int format,
		int types,
		byte[] values
	) ;
	public final native void glGetMinmax (
		int target,
		boolean reset,
		int format,
		int types,
		short[] values
	) ;
	public final native void glGetMinmax (
		int target,
		boolean reset,
		int format,
		int types,
		int[] values
	) ;
	public final native void glGetMinmax (
		int target,
		boolean reset,
		int format,
		int types,
		float[] values
	) ;
	public final native void glGetMinmax (
		int target,
		boolean reset,
		int format,
		int types,
		double[] values
	) ;
	public final native void glGetMinmax (
		int target,
		boolean reset,
		int format,
		int types,
		boolean[] values
	) ;
	public final native void glGetMinmax (
		int target,
		boolean reset,
		int format,
		int types,
		long[] values
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmaxParameterfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	public final native void glGetMinmaxParameterfv (
		int target,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmaxParameteriv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	public final native void glGetMinmaxParameteriv (
		int target,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionFilter1D ( GLenum target , GLenum internalformat , GLsizei width , GLenum format , GLenum type , const GLvoid * image ) ;
 * </pre> 
 */
	public final native void glConvolutionFilter1D (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		byte[] image
	) ;
	public final native void glConvolutionFilter1D (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		short[] image
	) ;
	public final native void glConvolutionFilter1D (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		int[] image
	) ;
	public final native void glConvolutionFilter1D (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		float[] image
	) ;
	public final native void glConvolutionFilter1D (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		double[] image
	) ;
	public final native void glConvolutionFilter1D (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		boolean[] image
	) ;
	public final native void glConvolutionFilter1D (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		long[] image
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionFilter2D ( GLenum target , GLenum internalformat , GLsizei width , GLsizei height , GLenum format , GLenum type , const GLvoid * image ) ;
 * </pre> 
 */
	public final native void glConvolutionFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		byte[] image
	) ;
	public final native void glConvolutionFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		short[] image
	) ;
	public final native void glConvolutionFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		int[] image
	) ;
	public final native void glConvolutionFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		float[] image
	) ;
	public final native void glConvolutionFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		double[] image
	) ;
	public final native void glConvolutionFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		boolean[] image
	) ;
	public final native void glConvolutionFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		long[] image
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameterf ( GLenum target , GLenum pname , GLfloat params ) ;
 * </pre> 
 */
	public final native void glConvolutionParameterf (
		int target,
		int pname,
		float params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameterfv ( GLenum target , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	public final native void glConvolutionParameterfv (
		int target,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameteri ( GLenum target , GLenum pname , GLint params ) ;
 * </pre> 
 */
	public final native void glConvolutionParameteri (
		int target,
		int pname,
		int params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameteriv ( GLenum target , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	public final native void glConvolutionParameteriv (
		int target,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyConvolutionFilter1D ( GLenum target , GLenum internalformat , GLint x , GLint y , GLsizei width ) ;
 * </pre> 
 */
	public final native void glCopyConvolutionFilter1D (
		int target,
		int internalformat,
		int x,
		int y,
		int width
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyConvolutionFilter2D ( GLenum target , GLenum internalformat , GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	public final native void glCopyConvolutionFilter2D (
		int target,
		int internalformat,
		int x,
		int y,
		int width,
		int height
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionFilter ( GLenum target , GLenum format , GLenum type , GLvoid * image ) ;
 * </pre> 
 */
	public final native void glGetConvolutionFilter (
		int target,
		int format,
		int type,
		byte[] image
	) ;
	public final native void glGetConvolutionFilter (
		int target,
		int format,
		int type,
		short[] image
	) ;
	public final native void glGetConvolutionFilter (
		int target,
		int format,
		int type,
		int[] image
	) ;
	public final native void glGetConvolutionFilter (
		int target,
		int format,
		int type,
		float[] image
	) ;
	public final native void glGetConvolutionFilter (
		int target,
		int format,
		int type,
		double[] image
	) ;
	public final native void glGetConvolutionFilter (
		int target,
		int format,
		int type,
		boolean[] image
	) ;
	public final native void glGetConvolutionFilter (
		int target,
		int format,
		int type,
		long[] image
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionParameterfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	public final native void glGetConvolutionParameterfv (
		int target,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionParameteriv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	public final native void glGetConvolutionParameteriv (
		int target,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSeparableFilter2D ( GLenum target , GLenum internalformat , GLsizei width , GLsizei height , GLenum format , GLenum type , const GLvoid * row , const GLvoid * column ) ;
 * </pre> 
 */
	public final native void glSeparableFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		byte[] row,
		byte[] column
	) ;
	public final native void glSeparableFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		short[] row,
		short[] column
	) ;
	public final native void glSeparableFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		int[] row,
		int[] column
	) ;
	public final native void glSeparableFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		float[] row,
		float[] column
	) ;
	public final native void glSeparableFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		double[] row,
		double[] column
	) ;
	public final native void glSeparableFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		boolean[] row,
		boolean[] column
	) ;
	public final native void glSeparableFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		long[] row,
		long[] column
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetSeparableFilter ( GLenum target , GLenum format , GLenum type , GLvoid * row , GLvoid * column , GLvoid * span ) ;
 * </pre> 
 */
	public final native void glGetSeparableFilter (
		int target,
		int format,
		int type,
		byte[] row,
		byte[] column,
		byte[] span
	) ;
	public final native void glGetSeparableFilter (
		int target,
		int format,
		int type,
		short[] row,
		short[] column,
		short[] span
	) ;
	public final native void glGetSeparableFilter (
		int target,
		int format,
		int type,
		int[] row,
		int[] column,
		int[] span
	) ;
	public final native void glGetSeparableFilter (
		int target,
		int format,
		int type,
		float[] row,
		float[] column,
		float[] span
	) ;
	public final native void glGetSeparableFilter (
		int target,
		int format,
		int type,
		double[] row,
		double[] column,
		double[] span
	) ;
	public final native void glGetSeparableFilter (
		int target,
		int format,
		int type,
		boolean[] row,
		boolean[] column,
		boolean[] span
	) ;
	public final native void glGetSeparableFilter (
		int target,
		int format,
		int type,
		long[] row,
		long[] column,
		long[] span
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glActiveTexture ( GLenum texture ) ;
 * </pre> 
 */
	public final native void glActiveTexture (
		int texture
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClientActiveTexture ( GLenum texture ) ;
 * </pre> 
 */
	public final native void glClientActiveTexture (
		int texture
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage1D ( GLenum target , GLint level , GLenum internalformat , GLsizei width , GLint border , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	public final native void glCompressedTexImage1D (
		int target,
		int level,
		int internalformat,
		int width,
		int border,
		int imageSize,
		byte[] data
	) ;
	public final native void glCompressedTexImage1D (
		int target,
		int level,
		int internalformat,
		int width,
		int border,
		int imageSize,
		short[] data
	) ;
	public final native void glCompressedTexImage1D (
		int target,
		int level,
		int internalformat,
		int width,
		int border,
		int imageSize,
		int[] data
	) ;
	public final native void glCompressedTexImage1D (
		int target,
		int level,
		int internalformat,
		int width,
		int border,
		int imageSize,
		float[] data
	) ;
	public final native void glCompressedTexImage1D (
		int target,
		int level,
		int internalformat,
		int width,
		int border,
		int imageSize,
		double[] data
	) ;
	public final native void glCompressedTexImage1D (
		int target,
		int level,
		int internalformat,
		int width,
		int border,
		int imageSize,
		boolean[] data
	) ;
	public final native void glCompressedTexImage1D (
		int target,
		int level,
		int internalformat,
		int width,
		int border,
		int imageSize,
		long[] data
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage2D ( GLenum target , GLint level , GLenum internalformat , GLsizei width , GLsizei height , GLint border , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	public final native void glCompressedTexImage2D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int border,
		int imageSize,
		byte[] data
	) ;
	public final native void glCompressedTexImage2D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int border,
		int imageSize,
		short[] data
	) ;
	public final native void glCompressedTexImage2D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int border,
		int imageSize,
		int[] data
	) ;
	public final native void glCompressedTexImage2D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int border,
		int imageSize,
		float[] data
	) ;
	public final native void glCompressedTexImage2D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int border,
		int imageSize,
		double[] data
	) ;
	public final native void glCompressedTexImage2D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int border,
		int imageSize,
		boolean[] data
	) ;
	public final native void glCompressedTexImage2D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int border,
		int imageSize,
		long[] data
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage3D ( GLenum target , GLint level , GLenum internalformat , GLsizei width , GLsizei height , GLsizei depth , GLint border , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	public final native void glCompressedTexImage3D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int depth,
		int border,
		int imageSize,
		byte[] data
	) ;
	public final native void glCompressedTexImage3D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int depth,
		int border,
		int imageSize,
		short[] data
	) ;
	public final native void glCompressedTexImage3D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int depth,
		int border,
		int imageSize,
		int[] data
	) ;
	public final native void glCompressedTexImage3D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int depth,
		int border,
		int imageSize,
		float[] data
	) ;
	public final native void glCompressedTexImage3D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int depth,
		int border,
		int imageSize,
		double[] data
	) ;
	public final native void glCompressedTexImage3D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int depth,
		int border,
		int imageSize,
		boolean[] data
	) ;
	public final native void glCompressedTexImage3D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int depth,
		int border,
		int imageSize,
		long[] data
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage1D ( GLenum target , GLint level , GLint xoffset , GLsizei width , GLenum format , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	public final native void glCompressedTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int imageSize,
		byte[] data
	) ;
	public final native void glCompressedTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int imageSize,
		short[] data
	) ;
	public final native void glCompressedTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int imageSize,
		int[] data
	) ;
	public final native void glCompressedTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int imageSize,
		float[] data
	) ;
	public final native void glCompressedTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int imageSize,
		double[] data
	) ;
	public final native void glCompressedTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int imageSize,
		boolean[] data
	) ;
	public final native void glCompressedTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int imageSize,
		long[] data
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage2D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLsizei width , GLsizei height , GLenum format , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	public final native void glCompressedTexSubImage2D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int width,
		int height,
		int format,
		int imageSize,
		byte[] data
	) ;
	public final native void glCompressedTexSubImage2D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int width,
		int height,
		int format,
		int imageSize,
		short[] data
	) ;
	public final native void glCompressedTexSubImage2D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int width,
		int height,
		int format,
		int imageSize,
		int[] data
	) ;
	public final native void glCompressedTexSubImage2D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int width,
		int height,
		int format,
		int imageSize,
		float[] data
	) ;
	public final native void glCompressedTexSubImage2D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int width,
		int height,
		int format,
		int imageSize,
		double[] data
	) ;
	public final native void glCompressedTexSubImage2D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int width,
		int height,
		int format,
		int imageSize,
		boolean[] data
	) ;
	public final native void glCompressedTexSubImage2D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int width,
		int height,
		int format,
		int imageSize,
		long[] data
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage3D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint zoffset , GLsizei width , GLsizei height , GLsizei depth , GLenum format , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	public final native void glCompressedTexSubImage3D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int imageSize,
		byte[] data
	) ;
	public final native void glCompressedTexSubImage3D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int imageSize,
		short[] data
	) ;
	public final native void glCompressedTexSubImage3D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int imageSize,
		int[] data
	) ;
	public final native void glCompressedTexSubImage3D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int imageSize,
		float[] data
	) ;
	public final native void glCompressedTexSubImage3D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int imageSize,
		double[] data
	) ;
	public final native void glCompressedTexSubImage3D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int imageSize,
		boolean[] data
	) ;
	public final native void glCompressedTexSubImage3D (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int imageSize,
		long[] data
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCompressedTexImage ( GLenum target , GLint lod , GLvoid * img ) ;
 * </pre> 
 */
	public final native void glGetCompressedTexImage (
		int target,
		int lod,
		byte[] img
	) ;
	public final native void glGetCompressedTexImage (
		int target,
		int lod,
		short[] img
	) ;
	public final native void glGetCompressedTexImage (
		int target,
		int lod,
		int[] img
	) ;
	public final native void glGetCompressedTexImage (
		int target,
		int lod,
		float[] img
	) ;
	public final native void glGetCompressedTexImage (
		int target,
		int lod,
		double[] img
	) ;
	public final native void glGetCompressedTexImage (
		int target,
		int lod,
		boolean[] img
	) ;
	public final native void glGetCompressedTexImage (
		int target,
		int lod,
		long[] img
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1d ( GLenum target , GLdouble s ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord1d (
		int target,
		double s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1dv ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord1dv (
		int target,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1f ( GLenum target , GLfloat s ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord1f (
		int target,
		float s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1fv ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord1fv (
		int target,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1i ( GLenum target , GLint s ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord1i (
		int target,
		int s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1iv ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord1iv (
		int target,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1s ( GLenum target , GLshort s ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord1s (
		int target,
		short s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1sv ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord1sv (
		int target,
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2d ( GLenum target , GLdouble s , GLdouble t ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord2d (
		int target,
		double s,
		double t
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2dv ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord2dv (
		int target,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2f ( GLenum target , GLfloat s , GLfloat t ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord2f (
		int target,
		float s,
		float t
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2fv ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord2fv (
		int target,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2i ( GLenum target , GLint s , GLint t ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord2i (
		int target,
		int s,
		int t
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2iv ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord2iv (
		int target,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2s ( GLenum target , GLshort s , GLshort t ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord2s (
		int target,
		short s,
		short t
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2sv ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord2sv (
		int target,
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3d ( GLenum target , GLdouble s , GLdouble t , GLdouble r ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord3d (
		int target,
		double s,
		double t,
		double r
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3dv ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord3dv (
		int target,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3f ( GLenum target , GLfloat s , GLfloat t , GLfloat r ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord3f (
		int target,
		float s,
		float t,
		float r
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3fv ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord3fv (
		int target,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3i ( GLenum target , GLint s , GLint t , GLint r ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord3i (
		int target,
		int s,
		int t,
		int r
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3iv ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord3iv (
		int target,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3s ( GLenum target , GLshort s , GLshort t , GLshort r ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord3s (
		int target,
		short s,
		short t,
		short r
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3sv ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord3sv (
		int target,
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4d ( GLenum target , GLdouble s , GLdouble t , GLdouble r , GLdouble q ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord4d (
		int target,
		double s,
		double t,
		double r,
		double q
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4dv ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord4dv (
		int target,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4f ( GLenum target , GLfloat s , GLfloat t , GLfloat r , GLfloat q ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord4f (
		int target,
		float s,
		float t,
		float r,
		float q
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4fv ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord4fv (
		int target,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4i ( GLenum target , GLint s , GLint t , GLint r , GLint q ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord4i (
		int target,
		int s,
		int t,
		int r,
		int q
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4iv ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord4iv (
		int target,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4s ( GLenum target , GLshort s , GLshort t , GLshort r , GLshort q ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord4s (
		int target,
		short s,
		short t,
		short r,
		short q
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4sv ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord4sv (
		int target,
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadTransposeMatrixd ( const GLdouble m [ 16 ] ) ;
 * </pre> 
 */
	public final native void glLoadTransposeMatrixd (
		double[] m
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadTransposeMatrixf ( const GLfloat m [ 16 ] ) ;
 * </pre> 
 */
	public final native void glLoadTransposeMatrixf (
		float[] m
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultTransposeMatrixd ( const GLdouble m [ 16 ] ) ;
 * </pre> 
 */
	public final native void glMultTransposeMatrixd (
		double[] m
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultTransposeMatrixf ( const GLfloat m [ 16 ] ) ;
 * </pre> 
 */
	public final native void glMultTransposeMatrixf (
		float[] m
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleCoverage ( GLclampf value , GLboolean invert ) ;
 * </pre> 
 */
	public final native void glSampleCoverage (
		float value,
		boolean invert
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSamplePass ( GLenum pass ) ;
 * </pre> 
 */
	public final native void glSamplePass (
		int pass
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glActiveTextureARB ( GLenum texture ) ;
 * </pre> 
 */
	public final native void glActiveTextureARB (
		int texture
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClientActiveTextureARB ( GLenum texture ) ;
 * </pre> 
 */
	public final native void glClientActiveTextureARB (
		int texture
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1dARB ( GLenum target , GLdouble s ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord1dARB (
		int target,
		double s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1dvARB ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord1dvARB (
		int target,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1fARB ( GLenum target , GLfloat s ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord1fARB (
		int target,
		float s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1fvARB ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord1fvARB (
		int target,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1iARB ( GLenum target , GLint s ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord1iARB (
		int target,
		int s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1ivARB ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord1ivARB (
		int target,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1sARB ( GLenum target , GLshort s ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord1sARB (
		int target,
		short s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1svARB ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord1svARB (
		int target,
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2dARB ( GLenum target , GLdouble s , GLdouble t ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord2dARB (
		int target,
		double s,
		double t
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2dvARB ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord2dvARB (
		int target,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2fARB ( GLenum target , GLfloat s , GLfloat t ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord2fARB (
		int target,
		float s,
		float t
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2fvARB ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord2fvARB (
		int target,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2iARB ( GLenum target , GLint s , GLint t ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord2iARB (
		int target,
		int s,
		int t
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2ivARB ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord2ivARB (
		int target,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2sARB ( GLenum target , GLshort s , GLshort t ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord2sARB (
		int target,
		short s,
		short t
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2svARB ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord2svARB (
		int target,
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3dARB ( GLenum target , GLdouble s , GLdouble t , GLdouble r ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord3dARB (
		int target,
		double s,
		double t,
		double r
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3dvARB ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord3dvARB (
		int target,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3fARB ( GLenum target , GLfloat s , GLfloat t , GLfloat r ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord3fARB (
		int target,
		float s,
		float t,
		float r
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3fvARB ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord3fvARB (
		int target,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3iARB ( GLenum target , GLint s , GLint t , GLint r ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord3iARB (
		int target,
		int s,
		int t,
		int r
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3ivARB ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord3ivARB (
		int target,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3sARB ( GLenum target , GLshort s , GLshort t , GLshort r ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord3sARB (
		int target,
		short s,
		short t,
		short r
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3svARB ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord3svARB (
		int target,
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4dARB ( GLenum target , GLdouble s , GLdouble t , GLdouble r , GLdouble q ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord4dARB (
		int target,
		double s,
		double t,
		double r,
		double q
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4dvARB ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord4dvARB (
		int target,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4fARB ( GLenum target , GLfloat s , GLfloat t , GLfloat r , GLfloat q ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord4fARB (
		int target,
		float s,
		float t,
		float r,
		float q
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4fvARB ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord4fvARB (
		int target,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4iARB ( GLenum target , GLint s , GLint t , GLint r , GLint q ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord4iARB (
		int target,
		int s,
		int t,
		int r,
		int q
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4ivARB ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord4ivARB (
		int target,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4sARB ( GLenum target , GLshort s , GLshort t , GLshort r , GLshort q ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord4sARB (
		int target,
		short s,
		short t,
		short r,
		short q
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4svARB ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	public final native void glMultiTexCoord4svARB (
		int target,
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendColorEXT ( GLclampf red , GLclampf green , GLclampf blue , GLclampf alpha ) ;
 * </pre> 
 */
	public final native void glBlendColorEXT (
		float red,
		float green,
		float blue,
		float alpha
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPolygonOffsetEXT ( GLfloat factor , GLfloat bias ) ;
 * </pre> 
 */
	public final native void glPolygonOffsetEXT (
		float factor,
		float bias
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage3DEXT ( GLenum target , GLint level , GLenum internalFormat , GLsizei width , GLsizei height , GLsizei depth , GLint border , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	public final native void glTexImage3DEXT (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int depth,
		int border,
		int format,
		int type,
		byte[] pixels
	) ;
	public final native void glTexImage3DEXT (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int depth,
		int border,
		int format,
		int type,
		short[] pixels
	) ;
	public final native void glTexImage3DEXT (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int depth,
		int border,
		int format,
		int type,
		int[] pixels
	) ;
	public final native void glTexImage3DEXT (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int depth,
		int border,
		int format,
		int type,
		float[] pixels
	) ;
	public final native void glTexImage3DEXT (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int depth,
		int border,
		int format,
		int type,
		double[] pixels
	) ;
	public final native void glTexImage3DEXT (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int depth,
		int border,
		int format,
		int type,
		boolean[] pixels
	) ;
	public final native void glTexImage3DEXT (
		int target,
		int level,
		int internalFormat,
		int width,
		int height,
		int depth,
		int border,
		int format,
		int type,
		long[] pixels
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage3DEXT ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint zoffset , GLsizei width , GLsizei height , GLsizei depth , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	public final native void glTexSubImage3DEXT (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int type,
		byte[] pixels
	) ;
	public final native void glTexSubImage3DEXT (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int type,
		short[] pixels
	) ;
	public final native void glTexSubImage3DEXT (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int type,
		int[] pixels
	) ;
	public final native void glTexSubImage3DEXT (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int type,
		float[] pixels
	) ;
	public final native void glTexSubImage3DEXT (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int type,
		double[] pixels
	) ;
	public final native void glTexSubImage3DEXT (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int type,
		boolean[] pixels
	) ;
	public final native void glTexSubImage3DEXT (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int width,
		int height,
		int depth,
		int format,
		int type,
		long[] pixels
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage3DEXT ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint zoffset , GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	public final native void glCopyTexSubImage3DEXT (
		int target,
		int level,
		int xoffset,
		int yoffset,
		int zoffset,
		int x,
		int y,
		int width,
		int height
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGenTexturesEXT ( GLsizei n , GLuint * textures ) ;
 * </pre> 
 */
	public final native void glGenTexturesEXT (
		int n,
		int[] textures
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteTexturesEXT ( GLsizei n , const GLuint * textures ) ;
 * </pre> 
 */
	public final native void glDeleteTexturesEXT (
		int n,
		int[] textures
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindTextureEXT ( GLenum target , GLuint texture ) ;
 * </pre> 
 */
	public final native void glBindTextureEXT (
		int target,
		int texture
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPrioritizeTexturesEXT ( GLsizei n , const GLuint * textures , const GLclampf * priorities ) ;
 * </pre> 
 */
	public final native void glPrioritizeTexturesEXT (
		int n,
		int[] textures,
		float[] priorities
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glAreTexturesResidentEXT ( GLsizei n , const GLuint * textures , GLboolean * residences ) ;
 * </pre> 
 */
	public final native boolean glAreTexturesResidentEXT (
		int n,
		int[] textures,
		boolean[] residences
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsTextureEXT ( GLuint texture ) ;
 * </pre> 
 */
	public final native boolean glIsTextureEXT (
		int texture
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexPointerEXT ( GLint size , GLenum type , GLsizei stride , GLsizei count , const GLvoid * ptr ) ;
 * </pre> 
 */
	public final native void glVertexPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		byte[] ptr
	) ;
	public final native void glVertexPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		short[] ptr
	) ;
	public final native void glVertexPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		int[] ptr
	) ;
	public final native void glVertexPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		float[] ptr
	) ;
	public final native void glVertexPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		double[] ptr
	) ;
	public final native void glVertexPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		boolean[] ptr
	) ;
	public final native void glVertexPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		long[] ptr
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalPointerEXT ( GLenum type , GLsizei stride , GLsizei count , const GLvoid * ptr ) ;
 * </pre> 
 */
	public final native void glNormalPointerEXT (
		int type,
		int stride,
		int count,
		byte[] ptr
	) ;
	public final native void glNormalPointerEXT (
		int type,
		int stride,
		int count,
		short[] ptr
	) ;
	public final native void glNormalPointerEXT (
		int type,
		int stride,
		int count,
		int[] ptr
	) ;
	public final native void glNormalPointerEXT (
		int type,
		int stride,
		int count,
		float[] ptr
	) ;
	public final native void glNormalPointerEXT (
		int type,
		int stride,
		int count,
		double[] ptr
	) ;
	public final native void glNormalPointerEXT (
		int type,
		int stride,
		int count,
		boolean[] ptr
	) ;
	public final native void glNormalPointerEXT (
		int type,
		int stride,
		int count,
		long[] ptr
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorPointerEXT ( GLint size , GLenum type , GLsizei stride , GLsizei count , const GLvoid * ptr ) ;
 * </pre> 
 */
	public final native void glColorPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		byte[] ptr
	) ;
	public final native void glColorPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		short[] ptr
	) ;
	public final native void glColorPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		int[] ptr
	) ;
	public final native void glColorPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		float[] ptr
	) ;
	public final native void glColorPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		double[] ptr
	) ;
	public final native void glColorPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		boolean[] ptr
	) ;
	public final native void glColorPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		long[] ptr
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexPointerEXT ( GLenum type , GLsizei stride , GLsizei count , const GLvoid * ptr ) ;
 * </pre> 
 */
	public final native void glIndexPointerEXT (
		int type,
		int stride,
		int count,
		byte[] ptr
	) ;
	public final native void glIndexPointerEXT (
		int type,
		int stride,
		int count,
		short[] ptr
	) ;
	public final native void glIndexPointerEXT (
		int type,
		int stride,
		int count,
		int[] ptr
	) ;
	public final native void glIndexPointerEXT (
		int type,
		int stride,
		int count,
		float[] ptr
	) ;
	public final native void glIndexPointerEXT (
		int type,
		int stride,
		int count,
		double[] ptr
	) ;
	public final native void glIndexPointerEXT (
		int type,
		int stride,
		int count,
		boolean[] ptr
	) ;
	public final native void glIndexPointerEXT (
		int type,
		int stride,
		int count,
		long[] ptr
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoordPointerEXT ( GLint size , GLenum type , GLsizei stride , GLsizei count , const GLvoid * ptr ) ;
 * </pre> 
 */
	public final native void glTexCoordPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		byte[] ptr
	) ;
	public final native void glTexCoordPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		short[] ptr
	) ;
	public final native void glTexCoordPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		int[] ptr
	) ;
	public final native void glTexCoordPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		float[] ptr
	) ;
	public final native void glTexCoordPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		double[] ptr
	) ;
	public final native void glTexCoordPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		boolean[] ptr
	) ;
	public final native void glTexCoordPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		long[] ptr
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlagPointerEXT ( GLsizei stride , GLsizei count , const GLboolean * ptr ) ;
 * </pre> 
 */
	public final native void glEdgeFlagPointerEXT (
		int stride,
		int count,
		boolean[] ptr
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPointervEXT ( GLenum pname , GLvoid * * params ) ;
 * </pre> 
 */
	public final native void glGetPointervEXT (
		int pname,
		byte[][] params
	) ;
	public final native void glGetPointervEXT (
		int pname,
		short[][] params
	) ;
	public final native void glGetPointervEXT (
		int pname,
		int[][] params
	) ;
	public final native void glGetPointervEXT (
		int pname,
		float[][] params
	) ;
	public final native void glGetPointervEXT (
		int pname,
		double[][] params
	) ;
	public final native void glGetPointervEXT (
		int pname,
		boolean[][] params
	) ;
	public final native void glGetPointervEXT (
		int pname,
		long[][] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glArrayElementEXT ( GLint i ) ;
 * </pre> 
 */
	public final native void glArrayElementEXT (
		int i
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawArraysEXT ( GLenum mode , GLint first , GLsizei count ) ;
 * </pre> 
 */
	public final native void glDrawArraysEXT (
		int mode,
		int first,
		int count
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendEquationEXT ( GLenum mode ) ;
 * </pre> 
 */
	public final native void glBlendEquationEXT (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfEXT ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public final native void glPointParameterfEXT (
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfvEXT ( GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	public final native void glPointParameterfvEXT (
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfSGIS ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public final native void glPointParameterfSGIS (
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfvSGIS ( GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	public final native void glPointParameterfvSGIS (
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableEXT ( GLenum target , GLenum internalformat , GLsizei width , GLenum format , GLenum type , const GLvoid * table ) ;
 * </pre> 
 */
	public final native void glColorTableEXT (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		byte[] table
	) ;
	public final native void glColorTableEXT (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		short[] table
	) ;
	public final native void glColorTableEXT (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		int[] table
	) ;
	public final native void glColorTableEXT (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		float[] table
	) ;
	public final native void glColorTableEXT (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		double[] table
	) ;
	public final native void glColorTableEXT (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		boolean[] table
	) ;
	public final native void glColorTableEXT (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		long[] table
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorSubTableEXT ( GLenum target , GLsizei start , GLsizei count , GLenum format , GLenum type , const GLvoid * data ) ;
 * </pre> 
 */
	public final native void glColorSubTableEXT (
		int target,
		int start,
		int count,
		int format,
		int type,
		byte[] data
	) ;
	public final native void glColorSubTableEXT (
		int target,
		int start,
		int count,
		int format,
		int type,
		short[] data
	) ;
	public final native void glColorSubTableEXT (
		int target,
		int start,
		int count,
		int format,
		int type,
		int[] data
	) ;
	public final native void glColorSubTableEXT (
		int target,
		int start,
		int count,
		int format,
		int type,
		float[] data
	) ;
	public final native void glColorSubTableEXT (
		int target,
		int start,
		int count,
		int format,
		int type,
		double[] data
	) ;
	public final native void glColorSubTableEXT (
		int target,
		int start,
		int count,
		int format,
		int type,
		boolean[] data
	) ;
	public final native void glColorSubTableEXT (
		int target,
		int start,
		int count,
		int format,
		int type,
		long[] data
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableEXT ( GLenum target , GLenum format , GLenum type , GLvoid * table ) ;
 * </pre> 
 */
	public final native void glGetColorTableEXT (
		int target,
		int format,
		int type,
		byte[] table
	) ;
	public final native void glGetColorTableEXT (
		int target,
		int format,
		int type,
		short[] table
	) ;
	public final native void glGetColorTableEXT (
		int target,
		int format,
		int type,
		int[] table
	) ;
	public final native void glGetColorTableEXT (
		int target,
		int format,
		int type,
		float[] table
	) ;
	public final native void glGetColorTableEXT (
		int target,
		int format,
		int type,
		double[] table
	) ;
	public final native void glGetColorTableEXT (
		int target,
		int format,
		int type,
		boolean[] table
	) ;
	public final native void glGetColorTableEXT (
		int target,
		int format,
		int type,
		long[] table
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameterfvEXT ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	public final native void glGetColorTableParameterfvEXT (
		int target,
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameterivEXT ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	public final native void glGetColorTableParameterivEXT (
		int target,
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLockArraysEXT ( GLint first , GLsizei count ) ;
 * </pre> 
 */
	public final native void glLockArraysEXT (
		int first,
		int count
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glUnlockArraysEXT ( void ) ;
 * </pre> 
 */
	public final native void glUnlockArraysEXT (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadTransposeMatrixfARB ( const GLfloat * ) ;
 * </pre> 
 */
	public final native void glLoadTransposeMatrixfARB (
		float[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadTransposeMatrixdARB ( const GLdouble * ) ;
 * </pre> 
 */
	public final native void glLoadTransposeMatrixdARB (
		double[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultTransposeMatrixfARB ( const GLfloat * ) ;
 * </pre> 
 */
	public final native void glMultTransposeMatrixfARB (
		float[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultTransposeMatrixdARB ( const GLdouble * ) ;
 * </pre> 
 */
	public final native void glMultTransposeMatrixdARB (
		double[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleCoverageARB ( GLclampf , GLboolean ) ;
 * </pre> 
 */
	public final native void glSampleCoverageARB (
		float arg0,
		boolean arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage3DARB ( GLenum , GLint , GLenum , GLsizei , GLsizei , GLsizei , GLint , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glCompressedTexImage3DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		byte[] arg8
	) ;
	public final native void glCompressedTexImage3DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		short[] arg8
	) ;
	public final native void glCompressedTexImage3DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int[] arg8
	) ;
	public final native void glCompressedTexImage3DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		float[] arg8
	) ;
	public final native void glCompressedTexImage3DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		double[] arg8
	) ;
	public final native void glCompressedTexImage3DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		boolean[] arg8
	) ;
	public final native void glCompressedTexImage3DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		long[] arg8
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage2DARB ( GLenum , GLint , GLenum , GLsizei , GLsizei , GLint , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glCompressedTexImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		byte[] arg7
	) ;
	public final native void glCompressedTexImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		short[] arg7
	) ;
	public final native void glCompressedTexImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int[] arg7
	) ;
	public final native void glCompressedTexImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		float[] arg7
	) ;
	public final native void glCompressedTexImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		double[] arg7
	) ;
	public final native void glCompressedTexImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		boolean[] arg7
	) ;
	public final native void glCompressedTexImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		long[] arg7
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage1DARB ( GLenum , GLint , GLenum , GLsizei , GLint , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glCompressedTexImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		byte[] arg6
	) ;
	public final native void glCompressedTexImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		short[] arg6
	) ;
	public final native void glCompressedTexImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int[] arg6
	) ;
	public final native void glCompressedTexImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		float[] arg6
	) ;
	public final native void glCompressedTexImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		double[] arg6
	) ;
	public final native void glCompressedTexImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		boolean[] arg6
	) ;
	public final native void glCompressedTexImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		long[] arg6
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage3DARB ( GLenum , GLint , GLint , GLint , GLint , GLsizei , GLsizei , GLsizei , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glCompressedTexSubImage3DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		byte[] arg10
	) ;
	public final native void glCompressedTexSubImage3DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		short[] arg10
	) ;
	public final native void glCompressedTexSubImage3DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		int[] arg10
	) ;
	public final native void glCompressedTexSubImage3DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		float[] arg10
	) ;
	public final native void glCompressedTexSubImage3DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		double[] arg10
	) ;
	public final native void glCompressedTexSubImage3DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		boolean[] arg10
	) ;
	public final native void glCompressedTexSubImage3DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		long[] arg10
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage2DARB ( GLenum , GLint , GLint , GLint , GLsizei , GLsizei , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glCompressedTexSubImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		byte[] arg8
	) ;
	public final native void glCompressedTexSubImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		short[] arg8
	) ;
	public final native void glCompressedTexSubImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int[] arg8
	) ;
	public final native void glCompressedTexSubImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		float[] arg8
	) ;
	public final native void glCompressedTexSubImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		double[] arg8
	) ;
	public final native void glCompressedTexSubImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		boolean[] arg8
	) ;
	public final native void glCompressedTexSubImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		long[] arg8
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage1DARB ( GLenum , GLint , GLint , GLsizei , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glCompressedTexSubImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		byte[] arg6
	) ;
	public final native void glCompressedTexSubImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		short[] arg6
	) ;
	public final native void glCompressedTexSubImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int[] arg6
	) ;
	public final native void glCompressedTexSubImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		float[] arg6
	) ;
	public final native void glCompressedTexSubImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		double[] arg6
	) ;
	public final native void glCompressedTexSubImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		boolean[] arg6
	) ;
	public final native void glCompressedTexSubImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		long[] arg6
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCompressedTexImageARB ( GLenum , GLint , void * ) ;
 * </pre> 
 */
	public final native void glGetCompressedTexImageARB (
		int arg0,
		int arg1,
		byte[] arg2
	) ;
	public final native void glGetCompressedTexImageARB (
		int arg0,
		int arg1,
		short[] arg2
	) ;
	public final native void glGetCompressedTexImageARB (
		int arg0,
		int arg1,
		int[] arg2
	) ;
	public final native void glGetCompressedTexImageARB (
		int arg0,
		int arg1,
		float[] arg2
	) ;
	public final native void glGetCompressedTexImageARB (
		int arg0,
		int arg1,
		double[] arg2
	) ;
	public final native void glGetCompressedTexImageARB (
		int arg0,
		int arg1,
		boolean[] arg2
	) ;
	public final native void glGetCompressedTexImageARB (
		int arg0,
		int arg1,
		long[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightbvARB ( GLint , const GLbyte * ) ;
 * </pre> 
 */
	public final native void glWeightbvARB (
		int arg0,
		byte[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightsvARB ( GLint , const GLshort * ) ;
 * </pre> 
 */
	public final native void glWeightsvARB (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightivARB ( GLint , const GLint * ) ;
 * </pre> 
 */
	public final native void glWeightivARB (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightfvARB ( GLint , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glWeightfvARB (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightdvARB ( GLint , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glWeightdvARB (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightubvARB ( GLint , const GLubyte * ) ;
 * </pre> 
 */
	public final native void glWeightubvARB (
		int arg0,
		byte[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightusvARB ( GLint , const GLushort * ) ;
 * </pre> 
 */
	public final native void glWeightusvARB (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightuivARB ( GLint , const GLuint * ) ;
 * </pre> 
 */
	public final native void glWeightuivARB (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightPointerARB ( GLint , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glWeightPointerARB (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3
	) ;
	public final native void glWeightPointerARB (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3
	) ;
	public final native void glWeightPointerARB (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;
	public final native void glWeightPointerARB (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;
	public final native void glWeightPointerARB (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3
	) ;
	public final native void glWeightPointerARB (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3
	) ;
	public final native void glWeightPointerARB (
		int arg0,
		int arg1,
		int arg2,
		long[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexBlendARB ( GLint ) ;
 * </pre> 
 */
	public final native void glVertexBlendARB (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCurrentPaletteMatrixARB ( GLint ) ;
 * </pre> 
 */
	public final native void glCurrentPaletteMatrixARB (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixIndexubvARB ( GLint , const GLubyte * ) ;
 * </pre> 
 */
	public final native void glMatrixIndexubvARB (
		int arg0,
		byte[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixIndexusvARB ( GLint , const GLushort * ) ;
 * </pre> 
 */
	public final native void glMatrixIndexusvARB (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixIndexuivARB ( GLint , const GLuint * ) ;
 * </pre> 
 */
	public final native void glMatrixIndexuivARB (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixIndexPointerARB ( GLint , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glMatrixIndexPointerARB (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3
	) ;
	public final native void glMatrixIndexPointerARB (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3
	) ;
	public final native void glMatrixIndexPointerARB (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;
	public final native void glMatrixIndexPointerARB (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;
	public final native void glMatrixIndexPointerARB (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3
	) ;
	public final native void glMatrixIndexPointerARB (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3
	) ;
	public final native void glMatrixIndexPointerARB (
		int arg0,
		int arg1,
		int arg2,
		long[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexFilterFuncSGIS ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetTexFilterFuncSGIS (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexFilterFuncSGIS ( GLenum , GLenum , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glTexFilterFuncSGIS (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage1DEXT ( GLenum , GLint , GLint , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glTexSubImage1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		byte[] arg6
	) ;
	public final native void glTexSubImage1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		short[] arg6
	) ;
	public final native void glTexSubImage1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int[] arg6
	) ;
	public final native void glTexSubImage1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		float[] arg6
	) ;
	public final native void glTexSubImage1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		double[] arg6
	) ;
	public final native void glTexSubImage1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		boolean[] arg6
	) ;
	public final native void glTexSubImage1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		long[] arg6
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage2DEXT ( GLenum , GLint , GLint , GLint , GLsizei , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glTexSubImage2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		byte[] arg8
	) ;
	public final native void glTexSubImage2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		short[] arg8
	) ;
	public final native void glTexSubImage2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int[] arg8
	) ;
	public final native void glTexSubImage2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		float[] arg8
	) ;
	public final native void glTexSubImage2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		double[] arg8
	) ;
	public final native void glTexSubImage2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		boolean[] arg8
	) ;
	public final native void glTexSubImage2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		long[] arg8
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexImage1DEXT ( GLenum , GLint , GLenum , GLint , GLint , GLsizei , GLint ) ;
 * </pre> 
 */
	public final native void glCopyTexImage1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexImage2DEXT ( GLenum , GLint , GLenum , GLint , GLint , GLsizei , GLsizei , GLint ) ;
 * </pre> 
 */
	public final native void glCopyTexImage2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage1DEXT ( GLenum , GLint , GLint , GLint , GLint , GLsizei ) ;
 * </pre> 
 */
	public final native void glCopyTexSubImage1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage2DEXT ( GLenum , GLint , GLint , GLint , GLint , GLint , GLsizei , GLsizei ) ;
 * </pre> 
 */
	public final native void glCopyTexSubImage2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogramEXT ( GLenum , GLboolean , GLenum , GLenum , GLvoid * ) ;
 * </pre> 
 */
	public final native void glGetHistogramEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		byte[] arg4
	) ;
	public final native void glGetHistogramEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		short[] arg4
	) ;
	public final native void glGetHistogramEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		int[] arg4
	) ;
	public final native void glGetHistogramEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		float[] arg4
	) ;
	public final native void glGetHistogramEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		double[] arg4
	) ;
	public final native void glGetHistogramEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		boolean[] arg4
	) ;
	public final native void glGetHistogramEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		long[] arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogramParameterfvEXT ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetHistogramParameterfvEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogramParameterivEXT ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetHistogramParameterivEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmaxEXT ( GLenum , GLboolean , GLenum , GLenum , GLvoid * ) ;
 * </pre> 
 */
	public final native void glGetMinmaxEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		byte[] arg4
	) ;
	public final native void glGetMinmaxEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		short[] arg4
	) ;
	public final native void glGetMinmaxEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		int[] arg4
	) ;
	public final native void glGetMinmaxEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		float[] arg4
	) ;
	public final native void glGetMinmaxEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		double[] arg4
	) ;
	public final native void glGetMinmaxEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		boolean[] arg4
	) ;
	public final native void glGetMinmaxEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		long[] arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmaxParameterfvEXT ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetMinmaxParameterfvEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmaxParameterivEXT ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetMinmaxParameterivEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glHistogramEXT ( GLenum , GLsizei , GLenum , GLboolean ) ;
 * </pre> 
 */
	public final native void glHistogramEXT (
		int arg0,
		int arg1,
		int arg2,
		boolean arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMinmaxEXT ( GLenum , GLenum , GLboolean ) ;
 * </pre> 
 */
	public final native void glMinmaxEXT (
		int arg0,
		int arg1,
		boolean arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glResetHistogramEXT ( GLenum ) ;
 * </pre> 
 */
	public final native void glResetHistogramEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glResetMinmaxEXT ( GLenum ) ;
 * </pre> 
 */
	public final native void glResetMinmaxEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionFilter1DEXT ( GLenum , GLenum , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glConvolutionFilter1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		byte[] arg5
	) ;
	public final native void glConvolutionFilter1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		short[] arg5
	) ;
	public final native void glConvolutionFilter1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int[] arg5
	) ;
	public final native void glConvolutionFilter1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		float[] arg5
	) ;
	public final native void glConvolutionFilter1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		double[] arg5
	) ;
	public final native void glConvolutionFilter1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean[] arg5
	) ;
	public final native void glConvolutionFilter1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		long[] arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionFilter2DEXT ( GLenum , GLenum , GLsizei , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glConvolutionFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		byte[] arg6
	) ;
	public final native void glConvolutionFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		short[] arg6
	) ;
	public final native void glConvolutionFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int[] arg6
	) ;
	public final native void glConvolutionFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		float[] arg6
	) ;
	public final native void glConvolutionFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		double[] arg6
	) ;
	public final native void glConvolutionFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		boolean[] arg6
	) ;
	public final native void glConvolutionFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		long[] arg6
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameterfEXT ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	public final native void glConvolutionParameterfEXT (
		int arg0,
		int arg1,
		float arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameterfvEXT ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glConvolutionParameterfvEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameteriEXT ( GLenum , GLenum , GLint ) ;
 * </pre> 
 */
	public final native void glConvolutionParameteriEXT (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameterivEXT ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glConvolutionParameterivEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyConvolutionFilter1DEXT ( GLenum , GLenum , GLint , GLint , GLsizei ) ;
 * </pre> 
 */
	public final native void glCopyConvolutionFilter1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyConvolutionFilter2DEXT ( GLenum , GLenum , GLint , GLint , GLsizei , GLsizei ) ;
 * </pre> 
 */
	public final native void glCopyConvolutionFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionFilterEXT ( GLenum , GLenum , GLenum , GLvoid * ) ;
 * </pre> 
 */
	public final native void glGetConvolutionFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3
	) ;
	public final native void glGetConvolutionFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3
	) ;
	public final native void glGetConvolutionFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;
	public final native void glGetConvolutionFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;
	public final native void glGetConvolutionFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3
	) ;
	public final native void glGetConvolutionFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3
	) ;
	public final native void glGetConvolutionFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		long[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionParameterfvEXT ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetConvolutionParameterfvEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionParameterivEXT ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetConvolutionParameterivEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetSeparableFilterEXT ( GLenum , GLenum , GLenum , GLvoid * , GLvoid * , GLvoid * ) ;
 * </pre> 
 */
	public final native void glGetSeparableFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3,
		byte[] arg4,
		byte[] arg5
	) ;
	public final native void glGetSeparableFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3,
		short[] arg4,
		short[] arg5
	) ;
	public final native void glGetSeparableFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3,
		int[] arg4,
		int[] arg5
	) ;
	public final native void glGetSeparableFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3,
		float[] arg4,
		float[] arg5
	) ;
	public final native void glGetSeparableFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3,
		double[] arg4,
		double[] arg5
	) ;
	public final native void glGetSeparableFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3,
		boolean[] arg4,
		boolean[] arg5
	) ;
	public final native void glGetSeparableFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		long[] arg3,
		long[] arg4,
		long[] arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSeparableFilter2DEXT ( GLenum , GLenum , GLsizei , GLsizei , GLenum , GLenum , const GLvoid * , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glSeparableFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		byte[] arg6,
		byte[] arg7
	) ;
	public final native void glSeparableFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		short[] arg6,
		short[] arg7
	) ;
	public final native void glSeparableFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int[] arg6,
		int[] arg7
	) ;
	public final native void glSeparableFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		float[] arg6,
		float[] arg7
	) ;
	public final native void glSeparableFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		double[] arg6,
		double[] arg7
	) ;
	public final native void glSeparableFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		boolean[] arg6,
		boolean[] arg7
	) ;
	public final native void glSeparableFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		long[] arg6,
		long[] arg7
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableSGI ( GLenum , GLenum , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		byte[] arg5
	) ;
	public final native void glColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		short[] arg5
	) ;
	public final native void glColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int[] arg5
	) ;
	public final native void glColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		float[] arg5
	) ;
	public final native void glColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		double[] arg5
	) ;
	public final native void glColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean[] arg5
	) ;
	public final native void glColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		long[] arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableParameterfvSGI ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glColorTableParameterfvSGI (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableParameterivSGI ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glColorTableParameterivSGI (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyColorTableSGI ( GLenum , GLenum , GLint , GLint , GLsizei ) ;
 * </pre> 
 */
	public final native void glCopyColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableSGI ( GLenum , GLenum , GLenum , GLvoid * ) ;
 * </pre> 
 */
	public final native void glGetColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3
	) ;
	public final native void glGetColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3
	) ;
	public final native void glGetColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;
	public final native void glGetColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;
	public final native void glGetColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3
	) ;
	public final native void glGetColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3
	) ;
	public final native void glGetColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		long[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameterfvSGI ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetColorTableParameterfvSGI (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameterivSGI ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetColorTableParameterivSGI (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenSGIX ( GLenum ) ;
 * </pre> 
 */
	public final native void glPixelTexGenSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenParameteriSGIS ( GLenum , GLint ) ;
 * </pre> 
 */
	public final native void glPixelTexGenParameteriSGIS (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenParameterivSGIS ( GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glPixelTexGenParameterivSGIS (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenParameterfSGIS ( GLenum , GLfloat ) ;
 * </pre> 
 */
	public final native void glPixelTexGenParameterfSGIS (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenParameterfvSGIS ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glPixelTexGenParameterfvSGIS (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelTexGenParameterivSGIS ( GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetPixelTexGenParameterivSGIS (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelTexGenParameterfvSGIS ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetPixelTexGenParameterfvSGIS (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage4DSGIS ( GLenum , GLint , GLenum , GLsizei , GLsizei , GLsizei , GLsizei , GLint , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glTexImage4DSGIS (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		byte[] arg10
	) ;
	public final native void glTexImage4DSGIS (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		short[] arg10
	) ;
	public final native void glTexImage4DSGIS (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		int[] arg10
	) ;
	public final native void glTexImage4DSGIS (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		float[] arg10
	) ;
	public final native void glTexImage4DSGIS (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		double[] arg10
	) ;
	public final native void glTexImage4DSGIS (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		boolean[] arg10
	) ;
	public final native void glTexImage4DSGIS (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		long[] arg10
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage4DSGIS ( GLenum , GLint , GLint , GLint , GLint , GLint , GLsizei , GLsizei , GLsizei , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glTexSubImage4DSGIS (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		int arg10,
		int arg11,
		byte[] arg12
	) ;
	public final native void glTexSubImage4DSGIS (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		int arg10,
		int arg11,
		short[] arg12
	) ;
	public final native void glTexSubImage4DSGIS (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		int arg10,
		int arg11,
		int[] arg12
	) ;
	public final native void glTexSubImage4DSGIS (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		int arg10,
		int arg11,
		float[] arg12
	) ;
	public final native void glTexSubImage4DSGIS (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		int arg10,
		int arg11,
		double[] arg12
	) ;
	public final native void glTexSubImage4DSGIS (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		int arg10,
		int arg11,
		boolean[] arg12
	) ;
	public final native void glTexSubImage4DSGIS (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		int arg10,
		int arg11,
		long[] arg12
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDetailTexFuncSGIS ( GLenum , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glDetailTexFuncSGIS (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetDetailTexFuncSGIS ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetDetailTexFuncSGIS (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSharpenTexFuncSGIS ( GLenum , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glSharpenTexFuncSGIS (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetSharpenTexFuncSGIS ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetSharpenTexFuncSGIS (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleMaskSGIS ( GLclampf , GLboolean ) ;
 * </pre> 
 */
	public final native void glSampleMaskSGIS (
		float arg0,
		boolean arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSamplePatternSGIS ( GLenum ) ;
 * </pre> 
 */
	public final native void glSamplePatternSGIS (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSpriteParameterfSGIX ( GLenum , GLfloat ) ;
 * </pre> 
 */
	public final native void glSpriteParameterfSGIX (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSpriteParameterfvSGIX ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glSpriteParameterfvSGIX (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSpriteParameteriSGIX ( GLenum , GLint ) ;
 * </pre> 
 */
	public final native void glSpriteParameteriSGIX (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSpriteParameterivSGIX ( GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glSpriteParameterivSGIX (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfARB ( GLenum , GLfloat ) ;
 * </pre> 
 */
	public final native void glPointParameterfARB (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfvARB ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glPointParameterfvARB (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glGetInstrumentsSGIX ( void ) ;
 * </pre> 
 */
	public final native int glGetInstrumentsSGIX (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glInstrumentsBufferSGIX ( GLsizei , GLint * ) ;
 * </pre> 
 */
	public final native void glInstrumentsBufferSGIX (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glPollInstrumentsSGIX ( GLint * ) ;
 * </pre> 
 */
	public final native int glPollInstrumentsSGIX (
		int[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReadInstrumentsSGIX ( GLint ) ;
 * </pre> 
 */
	public final native void glReadInstrumentsSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStartInstrumentsSGIX ( void ) ;
 * </pre> 
 */
	public final native void glStartInstrumentsSGIX (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStopInstrumentsSGIX ( GLint ) ;
 * </pre> 
 */
	public final native void glStopInstrumentsSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFrameZoomSGIX ( GLint ) ;
 * </pre> 
 */
	public final native void glFrameZoomSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTagSampleBufferSGIX ( void ) ;
 * </pre> 
 */
	public final native void glTagSampleBufferSGIX (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeformationMap3dSGIX ( GLenum , GLdouble , GLdouble , GLint , GLint , GLdouble , GLdouble , GLint , GLint , GLdouble , GLdouble , GLint , GLint , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glDeformationMap3dSGIX (
		int arg0,
		double arg1,
		double arg2,
		int arg3,
		int arg4,
		double arg5,
		double arg6,
		int arg7,
		int arg8,
		double arg9,
		double arg10,
		int arg11,
		int arg12,
		double[] arg13
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeformationMap3fSGIX ( GLenum , GLfloat , GLfloat , GLint , GLint , GLfloat , GLfloat , GLint , GLint , GLfloat , GLfloat , GLint , GLint , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glDeformationMap3fSGIX (
		int arg0,
		float arg1,
		float arg2,
		int arg3,
		int arg4,
		float arg5,
		float arg6,
		int arg7,
		int arg8,
		float arg9,
		float arg10,
		int arg11,
		int arg12,
		float[] arg13
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeformSGIX ( GLbitfield ) ;
 * </pre> 
 */
	public final native void glDeformSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadIdentityDeformationMapSGIX ( GLbitfield ) ;
 * </pre> 
 */
	public final native void glLoadIdentityDeformationMapSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReferencePlaneSGIX ( const GLdouble * ) ;
 * </pre> 
 */
	public final native void glReferencePlaneSGIX (
		double[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFlushRasterSGIX ( void ) ;
 * </pre> 
 */
	public final native void glFlushRasterSGIX (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogFuncSGIS ( GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glFogFuncSGIS (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFogFuncSGIS ( GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetFogFuncSGIS (
		float[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glImageTransformParameteriHP ( GLenum , GLenum , GLint ) ;
 * </pre> 
 */
	public final native void glImageTransformParameteriHP (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glImageTransformParameterfHP ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	public final native void glImageTransformParameterfHP (
		int arg0,
		int arg1,
		float arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glImageTransformParameterivHP ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glImageTransformParameterivHP (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glImageTransformParameterfvHP ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glImageTransformParameterfvHP (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetImageTransformParameterivHP ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetImageTransformParameterivHP (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetImageTransformParameterfvHP ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetImageTransformParameterfvHP (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyColorSubTableEXT ( GLenum , GLsizei , GLint , GLint , GLsizei ) ;
 * </pre> 
 */
	public final native void glCopyColorSubTableEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glHintPGI ( GLenum , GLint ) ;
 * </pre> 
 */
	public final native void glHintPGI (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetListParameterfvSGIX ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetListParameterfvSGIX (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetListParameterivSGIX ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetListParameterivSGIX (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glListParameterfSGIX ( GLuint , GLenum , GLfloat ) ;
 * </pre> 
 */
	public final native void glListParameterfSGIX (
		int arg0,
		int arg1,
		float arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glListParameterfvSGIX ( GLuint , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glListParameterfvSGIX (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glListParameteriSGIX ( GLuint , GLenum , GLint ) ;
 * </pre> 
 */
	public final native void glListParameteriSGIX (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glListParameterivSGIX ( GLuint , GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glListParameterivSGIX (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexMaterialEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	public final native void glIndexMaterialEXT (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexFuncEXT ( GLenum , GLclampf ) ;
 * </pre> 
 */
	public final native void glIndexFuncEXT (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCullParameterdvEXT ( GLenum , GLdouble * ) ;
 * </pre> 
 */
	public final native void glCullParameterdvEXT (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCullParameterfvEXT ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glCullParameterfvEXT (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentColorMaterialSGIX ( GLenum , GLenum ) ;
 * </pre> 
 */
	public final native void glFragmentColorMaterialSGIX (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightfSGIX ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	public final native void glFragmentLightfSGIX (
		int arg0,
		int arg1,
		float arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightfvSGIX ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glFragmentLightfvSGIX (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightiSGIX ( GLenum , GLenum , GLint ) ;
 * </pre> 
 */
	public final native void glFragmentLightiSGIX (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightivSGIX ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glFragmentLightivSGIX (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightModelfSGIX ( GLenum , GLfloat ) ;
 * </pre> 
 */
	public final native void glFragmentLightModelfSGIX (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightModelfvSGIX ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glFragmentLightModelfvSGIX (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightModeliSGIX ( GLenum , GLint ) ;
 * </pre> 
 */
	public final native void glFragmentLightModeliSGIX (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightModelivSGIX ( GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glFragmentLightModelivSGIX (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentMaterialfSGIX ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	public final native void glFragmentMaterialfSGIX (
		int arg0,
		int arg1,
		float arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentMaterialfvSGIX ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glFragmentMaterialfvSGIX (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentMaterialiSGIX ( GLenum , GLenum , GLint ) ;
 * </pre> 
 */
	public final native void glFragmentMaterialiSGIX (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentMaterialivSGIX ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glFragmentMaterialivSGIX (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFragmentLightfvSGIX ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetFragmentLightfvSGIX (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFragmentLightivSGIX ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetFragmentLightivSGIX (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFragmentMaterialfvSGIX ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetFragmentMaterialfvSGIX (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFragmentMaterialivSGIX ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetFragmentMaterialivSGIX (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightEnviSGIX ( GLenum , GLint ) ;
 * </pre> 
 */
	public final native void glLightEnviSGIX (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawRangeElementsEXT ( GLenum , GLuint , GLuint , GLsizei , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glDrawRangeElementsEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		byte[] arg5
	) ;
	public final native void glDrawRangeElementsEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		short[] arg5
	) ;
	public final native void glDrawRangeElementsEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int[] arg5
	) ;
	public final native void glDrawRangeElementsEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		float[] arg5
	) ;
	public final native void glDrawRangeElementsEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		double[] arg5
	) ;
	public final native void glDrawRangeElementsEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean[] arg5
	) ;
	public final native void glDrawRangeElementsEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		long[] arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glApplyTextureEXT ( GLenum ) ;
 * </pre> 
 */
	public final native void glApplyTextureEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTextureLightEXT ( GLenum ) ;
 * </pre> 
 */
	public final native void glTextureLightEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTextureMaterialEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	public final native void glTextureMaterialEXT (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAsyncMarkerSGIX ( GLuint ) ;
 * </pre> 
 */
	public final native void glAsyncMarkerSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glFinishAsyncSGIX ( GLuint * ) ;
 * </pre> 
 */
	public final native int glFinishAsyncSGIX (
		int[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glPollAsyncSGIX ( GLuint * ) ;
 * </pre> 
 */
	public final native int glPollAsyncSGIX (
		int[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenAsyncMarkersSGIX ( GLsizei ) ;
 * </pre> 
 */
	public final native int glGenAsyncMarkersSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteAsyncMarkersSGIX ( GLuint , GLsizei ) ;
 * </pre> 
 */
	public final native void glDeleteAsyncMarkersSGIX (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsAsyncMarkerSGIX ( GLuint ) ;
 * </pre> 
 */
	public final native boolean glIsAsyncMarkerSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexPointervINTEL ( GLint , GLenum , const GLvoid * * ) ;
 * </pre> 
 */
	public final native void glVertexPointervINTEL (
		int arg0,
		int arg1,
		byte[][] arg2
	) ;
	public final native void glVertexPointervINTEL (
		int arg0,
		int arg1,
		short[][] arg2
	) ;
	public final native void glVertexPointervINTEL (
		int arg0,
		int arg1,
		int[][] arg2
	) ;
	public final native void glVertexPointervINTEL (
		int arg0,
		int arg1,
		float[][] arg2
	) ;
	public final native void glVertexPointervINTEL (
		int arg0,
		int arg1,
		double[][] arg2
	) ;
	public final native void glVertexPointervINTEL (
		int arg0,
		int arg1,
		boolean[][] arg2
	) ;
	public final native void glVertexPointervINTEL (
		int arg0,
		int arg1,
		long[][] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalPointervINTEL ( GLenum , const GLvoid * * ) ;
 * </pre> 
 */
	public final native void glNormalPointervINTEL (
		int arg0,
		byte[][] arg1
	) ;
	public final native void glNormalPointervINTEL (
		int arg0,
		short[][] arg1
	) ;
	public final native void glNormalPointervINTEL (
		int arg0,
		int[][] arg1
	) ;
	public final native void glNormalPointervINTEL (
		int arg0,
		float[][] arg1
	) ;
	public final native void glNormalPointervINTEL (
		int arg0,
		double[][] arg1
	) ;
	public final native void glNormalPointervINTEL (
		int arg0,
		boolean[][] arg1
	) ;
	public final native void glNormalPointervINTEL (
		int arg0,
		long[][] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorPointervINTEL ( GLint , GLenum , const GLvoid * * ) ;
 * </pre> 
 */
	public final native void glColorPointervINTEL (
		int arg0,
		int arg1,
		byte[][] arg2
	) ;
	public final native void glColorPointervINTEL (
		int arg0,
		int arg1,
		short[][] arg2
	) ;
	public final native void glColorPointervINTEL (
		int arg0,
		int arg1,
		int[][] arg2
	) ;
	public final native void glColorPointervINTEL (
		int arg0,
		int arg1,
		float[][] arg2
	) ;
	public final native void glColorPointervINTEL (
		int arg0,
		int arg1,
		double[][] arg2
	) ;
	public final native void glColorPointervINTEL (
		int arg0,
		int arg1,
		boolean[][] arg2
	) ;
	public final native void glColorPointervINTEL (
		int arg0,
		int arg1,
		long[][] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoordPointervINTEL ( GLint , GLenum , const GLvoid * * ) ;
 * </pre> 
 */
	public final native void glTexCoordPointervINTEL (
		int arg0,
		int arg1,
		byte[][] arg2
	) ;
	public final native void glTexCoordPointervINTEL (
		int arg0,
		int arg1,
		short[][] arg2
	) ;
	public final native void glTexCoordPointervINTEL (
		int arg0,
		int arg1,
		int[][] arg2
	) ;
	public final native void glTexCoordPointervINTEL (
		int arg0,
		int arg1,
		float[][] arg2
	) ;
	public final native void glTexCoordPointervINTEL (
		int arg0,
		int arg1,
		double[][] arg2
	) ;
	public final native void glTexCoordPointervINTEL (
		int arg0,
		int arg1,
		boolean[][] arg2
	) ;
	public final native void glTexCoordPointervINTEL (
		int arg0,
		int arg1,
		long[][] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransformParameteriEXT ( GLenum , GLenum , GLint ) ;
 * </pre> 
 */
	public final native void glPixelTransformParameteriEXT (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransformParameterfEXT ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	public final native void glPixelTransformParameterfEXT (
		int arg0,
		int arg1,
		float arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransformParameterivEXT ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glPixelTransformParameterivEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransformParameterfvEXT ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glPixelTransformParameterfvEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3bEXT ( GLbyte , GLbyte , GLbyte ) ;
 * </pre> 
 */
	public final native void glSecondaryColor3bEXT (
		byte arg0,
		byte arg1,
		byte arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3bvEXT ( const GLbyte * ) ;
 * </pre> 
 */
	public final native void glSecondaryColor3bvEXT (
		byte[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3dEXT ( GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public final native void glSecondaryColor3dEXT (
		double arg0,
		double arg1,
		double arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3dvEXT ( const GLdouble * ) ;
 * </pre> 
 */
	public final native void glSecondaryColor3dvEXT (
		double[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3fEXT ( GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glSecondaryColor3fEXT (
		float arg0,
		float arg1,
		float arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3fvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	public final native void glSecondaryColor3fvEXT (
		float[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3iEXT ( GLint , GLint , GLint ) ;
 * </pre> 
 */
	public final native void glSecondaryColor3iEXT (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3ivEXT ( const GLint * ) ;
 * </pre> 
 */
	public final native void glSecondaryColor3ivEXT (
		int[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3sEXT ( GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	public final native void glSecondaryColor3sEXT (
		short arg0,
		short arg1,
		short arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3svEXT ( const GLshort * ) ;
 * </pre> 
 */
	public final native void glSecondaryColor3svEXT (
		short[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3ubEXT ( GLubyte , GLubyte , GLubyte ) ;
 * </pre> 
 */
	public final native void glSecondaryColor3ubEXT (
		byte arg0,
		byte arg1,
		byte arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3ubvEXT ( const GLubyte * ) ;
 * </pre> 
 */
	public final native void glSecondaryColor3ubvEXT (
		byte[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3uiEXT ( GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	public final native void glSecondaryColor3uiEXT (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3uivEXT ( const GLuint * ) ;
 * </pre> 
 */
	public final native void glSecondaryColor3uivEXT (
		int[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3usEXT ( GLushort , GLushort , GLushort ) ;
 * </pre> 
 */
	public final native void glSecondaryColor3usEXT (
		short arg0,
		short arg1,
		short arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3usvEXT ( const GLushort * ) ;
 * </pre> 
 */
	public final native void glSecondaryColor3usvEXT (
		short[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColorPointerEXT ( GLint , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glSecondaryColorPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3
	) ;
	public final native void glSecondaryColorPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3
	) ;
	public final native void glSecondaryColorPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;
	public final native void glSecondaryColorPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;
	public final native void glSecondaryColorPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3
	) ;
	public final native void glSecondaryColorPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3
	) ;
	public final native void glSecondaryColorPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		long[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTextureNormalEXT ( GLenum ) ;
 * </pre> 
 */
	public final native void glTextureNormalEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiDrawArraysEXT ( GLenum , GLint * , GLsizei * , GLsizei ) ;
 * </pre> 
 */
	public final native void glMultiDrawArraysEXT (
		int arg0,
		int[] arg1,
		int[] arg2,
		int arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiDrawElementsEXT ( GLenum , const GLsizei * , GLenum , const GLvoid * * , GLsizei ) ;
 * </pre> 
 */
	public final native void glMultiDrawElementsEXT (
		int arg0,
		int[] arg1,
		int arg2,
		byte[][] arg3,
		int arg4
	) ;
	public final native void glMultiDrawElementsEXT (
		int arg0,
		int[] arg1,
		int arg2,
		short[][] arg3,
		int arg4
	) ;
	public final native void glMultiDrawElementsEXT (
		int arg0,
		int[] arg1,
		int arg2,
		int[][] arg3,
		int arg4
	) ;
	public final native void glMultiDrawElementsEXT (
		int arg0,
		int[] arg1,
		int arg2,
		float[][] arg3,
		int arg4
	) ;
	public final native void glMultiDrawElementsEXT (
		int arg0,
		int[] arg1,
		int arg2,
		double[][] arg3,
		int arg4
	) ;
	public final native void glMultiDrawElementsEXT (
		int arg0,
		int[] arg1,
		int arg2,
		boolean[][] arg3,
		int arg4
	) ;
	public final native void glMultiDrawElementsEXT (
		int arg0,
		int[] arg1,
		int arg2,
		long[][] arg3,
		int arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoordfEXT ( GLfloat ) ;
 * </pre> 
 */
	public final native void glFogCoordfEXT (
		float arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoordfvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	public final native void glFogCoordfvEXT (
		float[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoorddEXT ( GLdouble ) ;
 * </pre> 
 */
	public final native void glFogCoorddEXT (
		double arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoorddvEXT ( const GLdouble * ) ;
 * </pre> 
 */
	public final native void glFogCoorddvEXT (
		double[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoordPointerEXT ( GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glFogCoordPointerEXT (
		int arg0,
		int arg1,
		byte[] arg2
	) ;
	public final native void glFogCoordPointerEXT (
		int arg0,
		int arg1,
		short[] arg2
	) ;
	public final native void glFogCoordPointerEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;
	public final native void glFogCoordPointerEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;
	public final native void glFogCoordPointerEXT (
		int arg0,
		int arg1,
		double[] arg2
	) ;
	public final native void glFogCoordPointerEXT (
		int arg0,
		int arg1,
		boolean[] arg2
	) ;
	public final native void glFogCoordPointerEXT (
		int arg0,
		int arg1,
		long[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3bEXT ( GLbyte , GLbyte , GLbyte ) ;
 * </pre> 
 */
	public final native void glTangent3bEXT (
		byte arg0,
		byte arg1,
		byte arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3bvEXT ( const GLbyte * ) ;
 * </pre> 
 */
	public final native void glTangent3bvEXT (
		byte[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3dEXT ( GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public final native void glTangent3dEXT (
		double arg0,
		double arg1,
		double arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3dvEXT ( const GLdouble * ) ;
 * </pre> 
 */
	public final native void glTangent3dvEXT (
		double[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3fEXT ( GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glTangent3fEXT (
		float arg0,
		float arg1,
		float arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3fvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	public final native void glTangent3fvEXT (
		float[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3iEXT ( GLint , GLint , GLint ) ;
 * </pre> 
 */
	public final native void glTangent3iEXT (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3ivEXT ( const GLint * ) ;
 * </pre> 
 */
	public final native void glTangent3ivEXT (
		int[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3sEXT ( GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	public final native void glTangent3sEXT (
		short arg0,
		short arg1,
		short arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3svEXT ( const GLshort * ) ;
 * </pre> 
 */
	public final native void glTangent3svEXT (
		short[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3bEXT ( GLbyte , GLbyte , GLbyte ) ;
 * </pre> 
 */
	public final native void glBinormal3bEXT (
		byte arg0,
		byte arg1,
		byte arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3bvEXT ( const GLbyte * ) ;
 * </pre> 
 */
	public final native void glBinormal3bvEXT (
		byte[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3dEXT ( GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public final native void glBinormal3dEXT (
		double arg0,
		double arg1,
		double arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3dvEXT ( const GLdouble * ) ;
 * </pre> 
 */
	public final native void glBinormal3dvEXT (
		double[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3fEXT ( GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glBinormal3fEXT (
		float arg0,
		float arg1,
		float arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3fvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	public final native void glBinormal3fvEXT (
		float[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3iEXT ( GLint , GLint , GLint ) ;
 * </pre> 
 */
	public final native void glBinormal3iEXT (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3ivEXT ( const GLint * ) ;
 * </pre> 
 */
	public final native void glBinormal3ivEXT (
		int[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3sEXT ( GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	public final native void glBinormal3sEXT (
		short arg0,
		short arg1,
		short arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3svEXT ( const GLshort * ) ;
 * </pre> 
 */
	public final native void glBinormal3svEXT (
		short[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangentPointerEXT ( GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glTangentPointerEXT (
		int arg0,
		int arg1,
		byte[] arg2
	) ;
	public final native void glTangentPointerEXT (
		int arg0,
		int arg1,
		short[] arg2
	) ;
	public final native void glTangentPointerEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;
	public final native void glTangentPointerEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;
	public final native void glTangentPointerEXT (
		int arg0,
		int arg1,
		double[] arg2
	) ;
	public final native void glTangentPointerEXT (
		int arg0,
		int arg1,
		boolean[] arg2
	) ;
	public final native void glTangentPointerEXT (
		int arg0,
		int arg1,
		long[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormalPointerEXT ( GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glBinormalPointerEXT (
		int arg0,
		int arg1,
		byte[] arg2
	) ;
	public final native void glBinormalPointerEXT (
		int arg0,
		int arg1,
		short[] arg2
	) ;
	public final native void glBinormalPointerEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;
	public final native void glBinormalPointerEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;
	public final native void glBinormalPointerEXT (
		int arg0,
		int arg1,
		double[] arg2
	) ;
	public final native void glBinormalPointerEXT (
		int arg0,
		int arg1,
		boolean[] arg2
	) ;
	public final native void glBinormalPointerEXT (
		int arg0,
		int arg1,
		long[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFinishTextureSUNX ( void ) ;
 * </pre> 
 */
	public final native void glFinishTextureSUNX (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorbSUN ( GLbyte ) ;
 * </pre> 
 */
	public final native void glGlobalAlphaFactorbSUN (
		byte arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorsSUN ( GLshort ) ;
 * </pre> 
 */
	public final native void glGlobalAlphaFactorsSUN (
		short arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactoriSUN ( GLint ) ;
 * </pre> 
 */
	public final native void glGlobalAlphaFactoriSUN (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorfSUN ( GLfloat ) ;
 * </pre> 
 */
	public final native void glGlobalAlphaFactorfSUN (
		float arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactordSUN ( GLdouble ) ;
 * </pre> 
 */
	public final native void glGlobalAlphaFactordSUN (
		double arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorubSUN ( GLubyte ) ;
 * </pre> 
 */
	public final native void glGlobalAlphaFactorubSUN (
		byte arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorusSUN ( GLushort ) ;
 * </pre> 
 */
	public final native void glGlobalAlphaFactorusSUN (
		short arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactoruiSUN ( GLuint ) ;
 * </pre> 
 */
	public final native void glGlobalAlphaFactoruiSUN (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiSUN ( GLuint ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiSUN (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeusSUN ( GLushort ) ;
 * </pre> 
 */
	public final native void glReplacementCodeusSUN (
		short arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeubSUN ( GLubyte ) ;
 * </pre> 
 */
	public final native void glReplacementCodeubSUN (
		byte arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuivSUN ( const GLuint * ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuivSUN (
		int[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeusvSUN ( const GLushort * ) ;
 * </pre> 
 */
	public final native void glReplacementCodeusvSUN (
		short[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeubvSUN ( const GLubyte * ) ;
 * </pre> 
 */
	public final native void glReplacementCodeubvSUN (
		byte[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodePointerSUN ( GLenum , GLsizei , const GLvoid * * ) ;
 * </pre> 
 */
	public final native void glReplacementCodePointerSUN (
		int arg0,
		int arg1,
		byte[][] arg2
	) ;
	public final native void glReplacementCodePointerSUN (
		int arg0,
		int arg1,
		short[][] arg2
	) ;
	public final native void glReplacementCodePointerSUN (
		int arg0,
		int arg1,
		int[][] arg2
	) ;
	public final native void glReplacementCodePointerSUN (
		int arg0,
		int arg1,
		float[][] arg2
	) ;
	public final native void glReplacementCodePointerSUN (
		int arg0,
		int arg1,
		double[][] arg2
	) ;
	public final native void glReplacementCodePointerSUN (
		int arg0,
		int arg1,
		boolean[][] arg2
	) ;
	public final native void glReplacementCodePointerSUN (
		int arg0,
		int arg1,
		long[][] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubVertex2fSUN ( GLubyte , GLubyte , GLubyte , GLubyte , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glColor4ubVertex2fSUN (
		byte arg0,
		byte arg1,
		byte arg2,
		byte arg3,
		float arg4,
		float arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubVertex2fvSUN ( const GLubyte * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glColor4ubVertex2fvSUN (
		byte[] arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubVertex3fSUN ( GLubyte , GLubyte , GLubyte , GLubyte , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glColor4ubVertex3fSUN (
		byte arg0,
		byte arg1,
		byte arg2,
		byte arg3,
		float arg4,
		float arg5,
		float arg6
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubVertex3fvSUN ( const GLubyte * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glColor4ubVertex3fvSUN (
		byte[] arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glColor3fVertex3fSUN (
		float arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4,
		float arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3fVertex3fvSUN ( const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glColor3fVertex3fvSUN (
		float[] arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glNormal3fVertex3fSUN (
		float arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4,
		float arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3fVertex3fvSUN ( const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glNormal3fVertex3fvSUN (
		float[] arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4fNormal3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glColor4fNormal3fVertex3fSUN (
		float arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4,
		float arg5,
		float arg6,
		float arg7,
		float arg8,
		float arg9
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4fNormal3fVertex3fvSUN ( const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glColor4fNormal3fVertex3fvSUN (
		float[] arg0,
		float[] arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glTexCoord2fVertex3fSUN (
		float arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fVertex3fvSUN ( const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glTexCoord2fVertex3fvSUN (
		float[] arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fVertex4fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glTexCoord4fVertex4fSUN (
		float arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4,
		float arg5,
		float arg6,
		float arg7
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fVertex4fvSUN ( const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glTexCoord4fVertex4fvSUN (
		float[] arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor4ubVertex3fSUN ( GLfloat , GLfloat , GLubyte , GLubyte , GLubyte , GLubyte , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glTexCoord2fColor4ubVertex3fSUN (
		float arg0,
		float arg1,
		byte arg2,
		byte arg3,
		byte arg4,
		byte arg5,
		float arg6,
		float arg7,
		float arg8
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor4ubVertex3fvSUN ( const GLfloat * , const GLubyte * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glTexCoord2fColor4ubVertex3fvSUN (
		float[] arg0,
		byte[] arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glTexCoord2fColor3fVertex3fSUN (
		float arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4,
		float arg5,
		float arg6,
		float arg7
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor3fVertex3fvSUN ( const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glTexCoord2fColor3fVertex3fvSUN (
		float[] arg0,
		float[] arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fNormal3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glTexCoord2fNormal3fVertex3fSUN (
		float arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4,
		float arg5,
		float arg6,
		float arg7
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fNormal3fVertex3fvSUN ( const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glTexCoord2fNormal3fVertex3fvSUN (
		float[] arg0,
		float[] arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor4fNormal3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glTexCoord2fColor4fNormal3fVertex3fSUN (
		float arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4,
		float arg5,
		float arg6,
		float arg7,
		float arg8,
		float arg9,
		float arg10,
		float arg11
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor4fNormal3fVertex3fvSUN ( const GLfloat * , const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glTexCoord2fColor4fNormal3fVertex3fvSUN (
		float[] arg0,
		float[] arg1,
		float[] arg2,
		float[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fColor4fNormal3fVertex4fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glTexCoord4fColor4fNormal3fVertex4fSUN (
		float arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4,
		float arg5,
		float arg6,
		float arg7,
		float arg8,
		float arg9,
		float arg10,
		float arg11,
		float arg12,
		float arg13,
		float arg14
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fColor4fNormal3fVertex4fvSUN ( const GLfloat * , const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glTexCoord4fColor4fNormal3fVertex4fvSUN (
		float[] arg0,
		float[] arg1,
		float[] arg2,
		float[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiVertex3fSUN (
		int arg0,
		float arg1,
		float arg2,
		float arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiVertex3fvSUN ( const GLenum * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiVertex3fvSUN (
		int[] arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor4ubVertex3fSUN ( GLenum , GLubyte , GLubyte , GLubyte , GLubyte , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiColor4ubVertex3fSUN (
		int arg0,
		byte arg1,
		byte arg2,
		byte arg3,
		byte arg4,
		float arg5,
		float arg6,
		float arg7
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor4ubVertex3fvSUN ( const GLenum * , const GLubyte * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiColor4ubVertex3fvSUN (
		int[] arg0,
		byte[] arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor3fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiColor3fVertex3fSUN (
		int arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4,
		float arg5,
		float arg6
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor3fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiColor3fVertex3fvSUN (
		int[] arg0,
		float[] arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiNormal3fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiNormal3fVertex3fSUN (
		int arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4,
		float arg5,
		float arg6
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiNormal3fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiNormal3fVertex3fvSUN (
		int[] arg0,
		float[] arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor4fNormal3fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiColor4fNormal3fVertex3fSUN (
		int arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4,
		float arg5,
		float arg6,
		float arg7,
		float arg8,
		float arg9,
		float arg10
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor4fNormal3fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiColor4fNormal3fVertex3fvSUN (
		int[] arg0,
		float[] arg1,
		float[] arg2,
		float[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiTexCoord2fVertex3fSUN (
		int arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4,
		float arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiTexCoord2fVertex3fvSUN (
		int[] arg0,
		float[] arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN (
		int arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4,
		float arg5,
		float arg6,
		float arg7,
		float arg8
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN (
		int[] arg0,
		float[] arg1,
		float[] arg2,
		float[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN (
		int arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4,
		float arg5,
		float arg6,
		float arg7,
		float arg8,
		float arg9,
		float arg10,
		float arg11,
		float arg12
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN (
		int[] arg0,
		float[] arg1,
		float[] arg2,
		float[] arg3,
		float[] arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendFuncSeparateEXT ( GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	public final native void glBlendFuncSeparateEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendFuncSeparateINGR ( GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	public final native void glBlendFuncSeparateINGR (
		int arg0,
		int arg1,
		int arg2,
		int arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexWeightfEXT ( GLfloat ) ;
 * </pre> 
 */
	public final native void glVertexWeightfEXT (
		float arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexWeightfvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	public final native void glVertexWeightfvEXT (
		float[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexWeightPointerEXT ( GLsizei , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glVertexWeightPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3
	) ;
	public final native void glVertexWeightPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3
	) ;
	public final native void glVertexWeightPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;
	public final native void glVertexWeightPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;
	public final native void glVertexWeightPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3
	) ;
	public final native void glVertexWeightPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3
	) ;
	public final native void glVertexWeightPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		long[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFlushVertexArrayRangeNV ( void ) ;
 * </pre> 
 */
	public final native void glFlushVertexArrayRangeNV (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexArrayRangeNV ( GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glVertexArrayRangeNV (
		int arg0,
		byte[] arg1
	) ;
	public final native void glVertexArrayRangeNV (
		int arg0,
		short[] arg1
	) ;
	public final native void glVertexArrayRangeNV (
		int arg0,
		int[] arg1
	) ;
	public final native void glVertexArrayRangeNV (
		int arg0,
		float[] arg1
	) ;
	public final native void glVertexArrayRangeNV (
		int arg0,
		double[] arg1
	) ;
	public final native void glVertexArrayRangeNV (
		int arg0,
		boolean[] arg1
	) ;
	public final native void glVertexArrayRangeNV (
		int arg0,
		long[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerParameterfvNV ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glCombinerParameterfvNV (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerParameterfNV ( GLenum , GLfloat ) ;
 * </pre> 
 */
	public final native void glCombinerParameterfNV (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerParameterivNV ( GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glCombinerParameterivNV (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerParameteriNV ( GLenum , GLint ) ;
 * </pre> 
 */
	public final native void glCombinerParameteriNV (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerInputNV ( GLenum , GLenum , GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	public final native void glCombinerInputNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerOutputNV ( GLenum , GLenum , GLenum , GLenum , GLenum , GLenum , GLenum , GLboolean , GLboolean , GLboolean ) ;
 * </pre> 
 */
	public final native void glCombinerOutputNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		boolean arg7,
		boolean arg8,
		boolean arg9
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFinalCombinerInputNV ( GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	public final native void glFinalCombinerInputNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCombinerInputParameterfvNV ( GLenum , GLenum , GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetCombinerInputParameterfvNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		float[] arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCombinerInputParameterivNV ( GLenum , GLenum , GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetCombinerInputParameterivNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int[] arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCombinerOutputParameterfvNV ( GLenum , GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetCombinerOutputParameterfvNV (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCombinerOutputParameterivNV ( GLenum , GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetCombinerOutputParameterivNV (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFinalCombinerInputParameterfvNV ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetFinalCombinerInputParameterfvNV (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFinalCombinerInputParameterivNV ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetFinalCombinerInputParameterivNV (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiModeDrawArraysIBM ( GLenum , const GLint * , const GLsizei * , GLsizei , GLint ) ;
 * </pre> 
 */
	public final native void glMultiModeDrawArraysIBM (
		int arg0,
		int[] arg1,
		int[] arg2,
		int arg3,
		int arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiModeDrawElementsIBM ( const GLenum * , const GLsizei * , GLenum , const GLvoid * * , GLsizei , GLint ) ;
 * </pre> 
 */
	public final native void glMultiModeDrawElementsIBM (
		int[] arg0,
		int[] arg1,
		int arg2,
		byte[][] arg3,
		int arg4,
		int arg5
	) ;
	public final native void glMultiModeDrawElementsIBM (
		int[] arg0,
		int[] arg1,
		int arg2,
		short[][] arg3,
		int arg4,
		int arg5
	) ;
	public final native void glMultiModeDrawElementsIBM (
		int[] arg0,
		int[] arg1,
		int arg2,
		int[][] arg3,
		int arg4,
		int arg5
	) ;
	public final native void glMultiModeDrawElementsIBM (
		int[] arg0,
		int[] arg1,
		int arg2,
		float[][] arg3,
		int arg4,
		int arg5
	) ;
	public final native void glMultiModeDrawElementsIBM (
		int[] arg0,
		int[] arg1,
		int arg2,
		double[][] arg3,
		int arg4,
		int arg5
	) ;
	public final native void glMultiModeDrawElementsIBM (
		int[] arg0,
		int[] arg1,
		int arg2,
		boolean[][] arg3,
		int arg4,
		int arg5
	) ;
	public final native void glMultiModeDrawElementsIBM (
		int[] arg0,
		int[] arg1,
		int arg2,
		long[][] arg3,
		int arg4,
		int arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorPointerListIBM ( GLint , GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	public final native void glColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		byte[][] arg3,
		int arg4
	) ;
	public final native void glColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		short[][] arg3,
		int arg4
	) ;
	public final native void glColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		int[][] arg3,
		int arg4
	) ;
	public final native void glColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		float[][] arg3,
		int arg4
	) ;
	public final native void glColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		double[][] arg3,
		int arg4
	) ;
	public final native void glColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		boolean[][] arg3,
		int arg4
	) ;
	public final native void glColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		long[][] arg3,
		int arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColorPointerListIBM ( GLint , GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	public final native void glSecondaryColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		byte[][] arg3,
		int arg4
	) ;
	public final native void glSecondaryColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		short[][] arg3,
		int arg4
	) ;
	public final native void glSecondaryColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		int[][] arg3,
		int arg4
	) ;
	public final native void glSecondaryColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		float[][] arg3,
		int arg4
	) ;
	public final native void glSecondaryColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		double[][] arg3,
		int arg4
	) ;
	public final native void glSecondaryColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		boolean[][] arg3,
		int arg4
	) ;
	public final native void glSecondaryColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		long[][] arg3,
		int arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlagPointerListIBM ( GLint , const GLboolean * * , GLint ) ;
 * </pre> 
 */
	public final native void glEdgeFlagPointerListIBM (
		int arg0,
		boolean[][] arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoordPointerListIBM ( GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	public final native void glFogCoordPointerListIBM (
		int arg0,
		int arg1,
		byte[][] arg2,
		int arg3
	) ;
	public final native void glFogCoordPointerListIBM (
		int arg0,
		int arg1,
		short[][] arg2,
		int arg3
	) ;
	public final native void glFogCoordPointerListIBM (
		int arg0,
		int arg1,
		int[][] arg2,
		int arg3
	) ;
	public final native void glFogCoordPointerListIBM (
		int arg0,
		int arg1,
		float[][] arg2,
		int arg3
	) ;
	public final native void glFogCoordPointerListIBM (
		int arg0,
		int arg1,
		double[][] arg2,
		int arg3
	) ;
	public final native void glFogCoordPointerListIBM (
		int arg0,
		int arg1,
		boolean[][] arg2,
		int arg3
	) ;
	public final native void glFogCoordPointerListIBM (
		int arg0,
		int arg1,
		long[][] arg2,
		int arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexPointerListIBM ( GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	public final native void glIndexPointerListIBM (
		int arg0,
		int arg1,
		byte[][] arg2,
		int arg3
	) ;
	public final native void glIndexPointerListIBM (
		int arg0,
		int arg1,
		short[][] arg2,
		int arg3
	) ;
	public final native void glIndexPointerListIBM (
		int arg0,
		int arg1,
		int[][] arg2,
		int arg3
	) ;
	public final native void glIndexPointerListIBM (
		int arg0,
		int arg1,
		float[][] arg2,
		int arg3
	) ;
	public final native void glIndexPointerListIBM (
		int arg0,
		int arg1,
		double[][] arg2,
		int arg3
	) ;
	public final native void glIndexPointerListIBM (
		int arg0,
		int arg1,
		boolean[][] arg2,
		int arg3
	) ;
	public final native void glIndexPointerListIBM (
		int arg0,
		int arg1,
		long[][] arg2,
		int arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalPointerListIBM ( GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	public final native void glNormalPointerListIBM (
		int arg0,
		int arg1,
		byte[][] arg2,
		int arg3
	) ;
	public final native void glNormalPointerListIBM (
		int arg0,
		int arg1,
		short[][] arg2,
		int arg3
	) ;
	public final native void glNormalPointerListIBM (
		int arg0,
		int arg1,
		int[][] arg2,
		int arg3
	) ;
	public final native void glNormalPointerListIBM (
		int arg0,
		int arg1,
		float[][] arg2,
		int arg3
	) ;
	public final native void glNormalPointerListIBM (
		int arg0,
		int arg1,
		double[][] arg2,
		int arg3
	) ;
	public final native void glNormalPointerListIBM (
		int arg0,
		int arg1,
		boolean[][] arg2,
		int arg3
	) ;
	public final native void glNormalPointerListIBM (
		int arg0,
		int arg1,
		long[][] arg2,
		int arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoordPointerListIBM ( GLint , GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	public final native void glTexCoordPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		byte[][] arg3,
		int arg4
	) ;
	public final native void glTexCoordPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		short[][] arg3,
		int arg4
	) ;
	public final native void glTexCoordPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		int[][] arg3,
		int arg4
	) ;
	public final native void glTexCoordPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		float[][] arg3,
		int arg4
	) ;
	public final native void glTexCoordPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		double[][] arg3,
		int arg4
	) ;
	public final native void glTexCoordPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		boolean[][] arg3,
		int arg4
	) ;
	public final native void glTexCoordPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		long[][] arg3,
		int arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexPointerListIBM ( GLint , GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	public final native void glVertexPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		byte[][] arg3,
		int arg4
	) ;
	public final native void glVertexPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		short[][] arg3,
		int arg4
	) ;
	public final native void glVertexPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		int[][] arg3,
		int arg4
	) ;
	public final native void glVertexPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		float[][] arg3,
		int arg4
	) ;
	public final native void glVertexPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		double[][] arg3,
		int arg4
	) ;
	public final native void glVertexPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		boolean[][] arg3,
		int arg4
	) ;
	public final native void glVertexPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		long[][] arg3,
		int arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTbufferMask3DFX ( GLuint ) ;
 * </pre> 
 */
	public final native void glTbufferMask3DFX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleMaskEXT ( GLclampf , GLboolean ) ;
 * </pre> 
 */
	public final native void glSampleMaskEXT (
		float arg0,
		boolean arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSamplePatternEXT ( GLenum ) ;
 * </pre> 
 */
	public final native void glSamplePatternEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTextureColorMaskSGIS ( GLboolean , GLboolean , GLboolean , GLboolean ) ;
 * </pre> 
 */
	public final native void glTextureColorMaskSGIS (
		boolean arg0,
		boolean arg1,
		boolean arg2,
		boolean arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIglooInterfaceSGIX ( GLenum , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glIglooInterfaceSGIX (
		int arg0,
		byte[] arg1
	) ;
	public final native void glIglooInterfaceSGIX (
		int arg0,
		short[] arg1
	) ;
	public final native void glIglooInterfaceSGIX (
		int arg0,
		int[] arg1
	) ;
	public final native void glIglooInterfaceSGIX (
		int arg0,
		float[] arg1
	) ;
	public final native void glIglooInterfaceSGIX (
		int arg0,
		double[] arg1
	) ;
	public final native void glIglooInterfaceSGIX (
		int arg0,
		boolean[] arg1
	) ;
	public final native void glIglooInterfaceSGIX (
		int arg0,
		long[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGenFencesNV ( GLsizei , GLuint * ) ;
 * </pre> 
 */
	public final native void glGenFencesNV (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteFencesNV ( GLsizei , const GLuint * ) ;
 * </pre> 
 */
	public final native void glDeleteFencesNV (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSetFenceNV ( GLuint , GLenum ) ;
 * </pre> 
 */
	public final native void glSetFenceNV (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glTestFenceNV ( GLuint ) ;
 * </pre> 
 */
	public final native boolean glTestFenceNV (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFinishFenceNV ( GLuint ) ;
 * </pre> 
 */
	public final native void glFinishFenceNV (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsFenceNV ( GLuint ) ;
 * </pre> 
 */
	public final native boolean glIsFenceNV (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFenceivNV ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetFenceivNV (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapControlPointsNV ( GLenum , GLuint , GLenum , GLsizei , GLsizei , GLint , GLint , GLboolean , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		boolean arg7,
		byte[] arg8
	) ;
	public final native void glMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		boolean arg7,
		short[] arg8
	) ;
	public final native void glMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		boolean arg7,
		int[] arg8
	) ;
	public final native void glMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		boolean arg7,
		float[] arg8
	) ;
	public final native void glMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		boolean arg7,
		double[] arg8
	) ;
	public final native void glMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		boolean arg7,
		boolean[] arg8
	) ;
	public final native void glMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		boolean arg7,
		long[] arg8
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapParameterivNV ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glMapParameterivNV (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapParameterfvNV ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glMapParameterfvNV (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapControlPointsNV ( GLenum , GLuint , GLenum , GLsizei , GLsizei , GLboolean , GLvoid * ) ;
 * </pre> 
 */
	public final native void glGetMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean arg5,
		byte[] arg6
	) ;
	public final native void glGetMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean arg5,
		short[] arg6
	) ;
	public final native void glGetMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean arg5,
		int[] arg6
	) ;
	public final native void glGetMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean arg5,
		float[] arg6
	) ;
	public final native void glGetMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean arg5,
		double[] arg6
	) ;
	public final native void glGetMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean arg5,
		boolean[] arg6
	) ;
	public final native void glGetMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean arg5,
		long[] arg6
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapParameterivNV ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetMapParameterivNV (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapParameterfvNV ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetMapParameterfvNV (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapAttribParameterivNV ( GLenum , GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetMapAttribParameterivNV (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapAttribParameterfvNV ( GLenum , GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetMapAttribParameterfvNV (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalMapsNV ( GLenum , GLenum ) ;
 * </pre> 
 */
	public final native void glEvalMapsNV (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerStageParameterfvNV ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glCombinerStageParameterfvNV (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCombinerStageParameterfvNV ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetCombinerStageParameterfvNV (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindProgramNV ( GLenum , GLuint ) ;
 * </pre> 
 */
	public final native void glBindProgramNV (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteProgramsNV ( GLsizei , const GLuint * ) ;
 * </pre> 
 */
	public final native void glDeleteProgramsNV (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glExecuteProgramNV ( GLenum , GLuint , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glExecuteProgramNV (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGenProgramsNV ( GLsizei , GLuint * ) ;
 * </pre> 
 */
	public final native void glGenProgramsNV (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glAreProgramsResidentNV ( GLsizei , const GLuint * , GLboolean * ) ;
 * </pre> 
 */
	public final native boolean glAreProgramsResidentNV (
		int arg0,
		int[] arg1,
		boolean[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRequestResidentProgramsNV ( GLsizei , const GLuint * ) ;
 * </pre> 
 */
	public final native void glRequestResidentProgramsNV (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetProgramParameterfvNV ( GLenum , GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetProgramParameterfvNV (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetProgramParameterdvNV ( GLenum , GLuint , GLenum , GLdouble * ) ;
 * </pre> 
 */
	public final native void glGetProgramParameterdvNV (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetProgramivNV ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetProgramivNV (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetProgramStringNV ( GLuint , GLenum , GLubyte * ) ;
 * </pre> 
 */
	public final native void glGetProgramStringNV (
		int arg0,
		int arg1,
		byte[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTrackMatrixivNV ( GLenum , GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetTrackMatrixivNV (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVertexAttribdvNV ( GLuint , GLenum , GLdouble * ) ;
 * </pre> 
 */
	public final native void glGetVertexAttribdvNV (
		int arg0,
		int arg1,
		double[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVertexAttribfvNV ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetVertexAttribfvNV (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVertexAttribivNV ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetVertexAttribivNV (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVertexAttribPointervNV ( GLuint , GLenum , GLvoid * * ) ;
 * </pre> 
 */
	public final native void glGetVertexAttribPointervNV (
		int arg0,
		int arg1,
		byte[][] arg2
	) ;
	public final native void glGetVertexAttribPointervNV (
		int arg0,
		int arg1,
		short[][] arg2
	) ;
	public final native void glGetVertexAttribPointervNV (
		int arg0,
		int arg1,
		int[][] arg2
	) ;
	public final native void glGetVertexAttribPointervNV (
		int arg0,
		int arg1,
		float[][] arg2
	) ;
	public final native void glGetVertexAttribPointervNV (
		int arg0,
		int arg1,
		double[][] arg2
	) ;
	public final native void glGetVertexAttribPointervNV (
		int arg0,
		int arg1,
		boolean[][] arg2
	) ;
	public final native void glGetVertexAttribPointervNV (
		int arg0,
		int arg1,
		long[][] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsProgramNV ( GLuint ) ;
 * </pre> 
 */
	public final native boolean glIsProgramNV (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadProgramNV ( GLenum , GLuint , GLsizei , const GLubyte * ) ;
 * </pre> 
 */
	public final native void glLoadProgramNV (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameter4fNV ( GLenum , GLuint , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glProgramParameter4fNV (
		int arg0,
		int arg1,
		float arg2,
		float arg3,
		float arg4,
		float arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameter4dNV ( GLenum , GLuint , GLdouble , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public final native void glProgramParameter4dNV (
		int arg0,
		int arg1,
		double arg2,
		double arg3,
		double arg4,
		double arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameter4dvNV ( GLenum , GLuint , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glProgramParameter4dvNV (
		int arg0,
		int arg1,
		double[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameter4fvNV ( GLenum , GLuint , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glProgramParameter4fvNV (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameters4dvNV ( GLenum , GLuint , GLuint , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glProgramParameters4dvNV (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameters4fvNV ( GLenum , GLuint , GLuint , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glProgramParameters4fvNV (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTrackMatrixNV ( GLenum , GLuint , GLenum , GLenum ) ;
 * </pre> 
 */
	public final native void glTrackMatrixNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribPointerNV ( GLuint , GLint , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public final native void glVertexAttribPointerNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		byte[] arg4
	) ;
	public final native void glVertexAttribPointerNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		short[] arg4
	) ;
	public final native void glVertexAttribPointerNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int[] arg4
	) ;
	public final native void glVertexAttribPointerNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		float[] arg4
	) ;
	public final native void glVertexAttribPointerNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		double[] arg4
	) ;
	public final native void glVertexAttribPointerNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		boolean[] arg4
	) ;
	public final native void glVertexAttribPointerNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		long[] arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1sNV ( GLuint , GLshort ) ;
 * </pre> 
 */
	public final native void glVertexAttrib1sNV (
		int arg0,
		short arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1fNV ( GLuint , GLfloat ) ;
 * </pre> 
 */
	public final native void glVertexAttrib1fNV (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1dNV ( GLuint , GLdouble ) ;
 * </pre> 
 */
	public final native void glVertexAttrib1dNV (
		int arg0,
		double arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2sNV ( GLuint , GLshort , GLshort ) ;
 * </pre> 
 */
	public final native void glVertexAttrib2sNV (
		int arg0,
		short arg1,
		short arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2fNV ( GLuint , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glVertexAttrib2fNV (
		int arg0,
		float arg1,
		float arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2dNV ( GLuint , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public final native void glVertexAttrib2dNV (
		int arg0,
		double arg1,
		double arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3sNV ( GLuint , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	public final native void glVertexAttrib3sNV (
		int arg0,
		short arg1,
		short arg2,
		short arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3fNV ( GLuint , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glVertexAttrib3fNV (
		int arg0,
		float arg1,
		float arg2,
		float arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3dNV ( GLuint , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public final native void glVertexAttrib3dNV (
		int arg0,
		double arg1,
		double arg2,
		double arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4sNV ( GLuint , GLshort , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	public final native void glVertexAttrib4sNV (
		int arg0,
		short arg1,
		short arg2,
		short arg3,
		short arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4fNV ( GLuint , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glVertexAttrib4fNV (
		int arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4dNV ( GLuint , GLdouble , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public final native void glVertexAttrib4dNV (
		int arg0,
		double arg1,
		double arg2,
		double arg3,
		double arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4ubNV ( GLuint , GLubyte , GLubyte , GLubyte , GLubyte ) ;
 * </pre> 
 */
	public final native void glVertexAttrib4ubNV (
		int arg0,
		byte arg1,
		byte arg2,
		byte arg3,
		byte arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1svNV ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	public final native void glVertexAttrib1svNV (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1fvNV ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glVertexAttrib1fvNV (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1dvNV ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glVertexAttrib1dvNV (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2svNV ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	public final native void glVertexAttrib2svNV (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2fvNV ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glVertexAttrib2fvNV (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2dvNV ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glVertexAttrib2dvNV (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3svNV ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	public final native void glVertexAttrib3svNV (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3fvNV ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glVertexAttrib3fvNV (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3dvNV ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glVertexAttrib3dvNV (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4svNV ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	public final native void glVertexAttrib4svNV (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4fvNV ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glVertexAttrib4fvNV (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4dvNV ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glVertexAttrib4dvNV (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4ubvNV ( GLuint , const GLubyte * ) ;
 * </pre> 
 */
	public final native void glVertexAttrib4ubvNV (
		int arg0,
		byte[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs1svNV ( GLuint , GLsizei , const GLshort * ) ;
 * </pre> 
 */
	public final native void glVertexAttribs1svNV (
		int arg0,
		int arg1,
		short[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs1fvNV ( GLuint , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glVertexAttribs1fvNV (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs1dvNV ( GLuint , GLsizei , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glVertexAttribs1dvNV (
		int arg0,
		int arg1,
		double[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs2svNV ( GLuint , GLsizei , const GLshort * ) ;
 * </pre> 
 */
	public final native void glVertexAttribs2svNV (
		int arg0,
		int arg1,
		short[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs2fvNV ( GLuint , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glVertexAttribs2fvNV (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs2dvNV ( GLuint , GLsizei , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glVertexAttribs2dvNV (
		int arg0,
		int arg1,
		double[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs3svNV ( GLuint , GLsizei , const GLshort * ) ;
 * </pre> 
 */
	public final native void glVertexAttribs3svNV (
		int arg0,
		int arg1,
		short[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs3fvNV ( GLuint , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glVertexAttribs3fvNV (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs3dvNV ( GLuint , GLsizei , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glVertexAttribs3dvNV (
		int arg0,
		int arg1,
		double[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs4svNV ( GLuint , GLsizei , const GLshort * ) ;
 * </pre> 
 */
	public final native void glVertexAttribs4svNV (
		int arg0,
		int arg1,
		short[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs4fvNV ( GLuint , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glVertexAttribs4fvNV (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs4dvNV ( GLuint , GLsizei , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glVertexAttribs4dvNV (
		int arg0,
		int arg1,
		double[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs4ubvNV ( GLuint , GLsizei , const GLubyte * ) ;
 * </pre> 
 */
	public final native void glVertexAttribs4ubvNV (
		int arg0,
		int arg1,
		byte[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexBumpParameterivATI ( GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glTexBumpParameterivATI (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexBumpParameterfvATI ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glTexBumpParameterfvATI (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexBumpParameterivATI ( GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetTexBumpParameterivATI (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexBumpParameterfvATI ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetTexBumpParameterfvATI (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenFragmentShadersATI ( GLuint ) ;
 * </pre> 
 */
	public final native int glGenFragmentShadersATI (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindFragmentShaderATI ( GLuint ) ;
 * </pre> 
 */
	public final native void glBindFragmentShaderATI (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteFragmentShaderATI ( GLuint ) ;
 * </pre> 
 */
	public final native void glDeleteFragmentShaderATI (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBeginFragmentShaderATI ( void ) ;
 * </pre> 
 */
	public final native void glBeginFragmentShaderATI (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEndFragmentShaderATI ( void ) ;
 * </pre> 
 */
	public final native void glEndFragmentShaderATI (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPassTexCoordATI ( GLuint , GLuint , GLenum ) ;
 * </pre> 
 */
	public final native void glPassTexCoordATI (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleMapATI ( GLuint , GLuint , GLenum ) ;
 * </pre> 
 */
	public final native void glSampleMapATI (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorFragmentOp1ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	public final native void glColorFragmentOp1ATI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorFragmentOp2ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	public final native void glColorFragmentOp2ATI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorFragmentOp3ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	public final native void glColorFragmentOp3ATI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		int arg10,
		int arg11,
		int arg12
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAlphaFragmentOp1ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	public final native void glAlphaFragmentOp1ATI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAlphaFragmentOp2ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	public final native void glAlphaFragmentOp2ATI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAlphaFragmentOp3ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	public final native void glAlphaFragmentOp3ATI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int arg7,
		int arg8,
		int arg9,
		int arg10,
		int arg11
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSetFragmentShaderConstantATI ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glSetFragmentShaderConstantATI (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPNTrianglesiATI ( GLenum , GLint ) ;
 * </pre> 
 */
	public final native void glPNTrianglesiATI (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPNTrianglesfATI ( GLenum , GLfloat ) ;
 * </pre> 
 */
	public final native void glPNTrianglesfATI (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glNewObjectBufferATI ( GLsizei , const GLvoid * , GLenum ) ;
 * </pre> 
 */
	public final native int glNewObjectBufferATI (
		int arg0,
		byte[] arg1,
		int arg2
	) ;
	public final native int glNewObjectBufferATI (
		int arg0,
		short[] arg1,
		int arg2
	) ;
	public final native int glNewObjectBufferATI (
		int arg0,
		int[] arg1,
		int arg2
	) ;
	public final native int glNewObjectBufferATI (
		int arg0,
		float[] arg1,
		int arg2
	) ;
	public final native int glNewObjectBufferATI (
		int arg0,
		double[] arg1,
		int arg2
	) ;
	public final native int glNewObjectBufferATI (
		int arg0,
		boolean[] arg1,
		int arg2
	) ;
	public final native int glNewObjectBufferATI (
		int arg0,
		long[] arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsObjectBufferATI ( GLuint ) ;
 * </pre> 
 */
	public final native boolean glIsObjectBufferATI (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glUpdateObjectBufferATI ( GLuint , GLuint , GLsizei , const GLvoid * , GLenum ) ;
 * </pre> 
 */
	public final native void glUpdateObjectBufferATI (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3,
		int arg4
	) ;
	public final native void glUpdateObjectBufferATI (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3,
		int arg4
	) ;
	public final native void glUpdateObjectBufferATI (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3,
		int arg4
	) ;
	public final native void glUpdateObjectBufferATI (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3,
		int arg4
	) ;
	public final native void glUpdateObjectBufferATI (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3,
		int arg4
	) ;
	public final native void glUpdateObjectBufferATI (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3,
		int arg4
	) ;
	public final native void glUpdateObjectBufferATI (
		int arg0,
		int arg1,
		int arg2,
		long[] arg3,
		int arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetObjectBufferfvATI ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetObjectBufferfvATI (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetObjectBufferivATI ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetObjectBufferivATI (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteObjectBufferATI ( GLuint ) ;
 * </pre> 
 */
	public final native void glDeleteObjectBufferATI (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glArrayObjectATI ( GLenum , GLint , GLenum , GLsizei , GLuint , GLuint ) ;
 * </pre> 
 */
	public final native void glArrayObjectATI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetArrayObjectfvATI ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetArrayObjectfvATI (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetArrayObjectivATI ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetArrayObjectivATI (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantArrayObjectATI ( GLuint , GLenum , GLsizei , GLuint , GLuint ) ;
 * </pre> 
 */
	public final native void glVariantArrayObjectATI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantArrayObjectfvATI ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetVariantArrayObjectfvATI (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantArrayObjectivATI ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetVariantArrayObjectivATI (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBeginVertexShaderEXT ( void ) ;
 * </pre> 
 */
	public final native void glBeginVertexShaderEXT (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEndVertexShaderEXT ( void ) ;
 * </pre> 
 */
	public final native void glEndVertexShaderEXT (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindVertexShaderEXT ( GLuint ) ;
 * </pre> 
 */
	public final native void glBindVertexShaderEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenVertexShadersEXT ( GLuint ) ;
 * </pre> 
 */
	public final native int glGenVertexShadersEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteVertexShaderEXT ( GLuint ) ;
 * </pre> 
 */
	public final native void glDeleteVertexShaderEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glShaderOp1EXT ( GLenum , GLuint , GLuint ) ;
 * </pre> 
 */
	public final native void glShaderOp1EXT (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glShaderOp2EXT ( GLenum , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	public final native void glShaderOp2EXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glShaderOp3EXT ( GLenum , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	public final native void glShaderOp3EXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSwizzleEXT ( GLuint , GLuint , GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	public final native void glSwizzleEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWriteMaskEXT ( GLuint , GLuint , GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	public final native void glWriteMaskEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glInsertComponentEXT ( GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	public final native void glInsertComponentEXT (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glExtractComponentEXT ( GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	public final native void glExtractComponentEXT (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenSymbolsEXT ( GLenum , GLenum , GLenum , GLuint ) ;
 * </pre> 
 */
	public final native int glGenSymbolsEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSetInvariantEXT ( GLuint , GLenum , const void * ) ;
 * </pre> 
 */
	public final native void glSetInvariantEXT (
		int arg0,
		int arg1,
		byte[] arg2
	) ;
	public final native void glSetInvariantEXT (
		int arg0,
		int arg1,
		short[] arg2
	) ;
	public final native void glSetInvariantEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;
	public final native void glSetInvariantEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;
	public final native void glSetInvariantEXT (
		int arg0,
		int arg1,
		double[] arg2
	) ;
	public final native void glSetInvariantEXT (
		int arg0,
		int arg1,
		boolean[] arg2
	) ;
	public final native void glSetInvariantEXT (
		int arg0,
		int arg1,
		long[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSetLocalConstantEXT ( GLuint , GLenum , const void * ) ;
 * </pre> 
 */
	public final native void glSetLocalConstantEXT (
		int arg0,
		int arg1,
		byte[] arg2
	) ;
	public final native void glSetLocalConstantEXT (
		int arg0,
		int arg1,
		short[] arg2
	) ;
	public final native void glSetLocalConstantEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;
	public final native void glSetLocalConstantEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;
	public final native void glSetLocalConstantEXT (
		int arg0,
		int arg1,
		double[] arg2
	) ;
	public final native void glSetLocalConstantEXT (
		int arg0,
		int arg1,
		boolean[] arg2
	) ;
	public final native void glSetLocalConstantEXT (
		int arg0,
		int arg1,
		long[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantbvEXT ( GLuint , const GLbyte * ) ;
 * </pre> 
 */
	public final native void glVariantbvEXT (
		int arg0,
		byte[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantsvEXT ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	public final native void glVariantsvEXT (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantivEXT ( GLuint , const GLint * ) ;
 * </pre> 
 */
	public final native void glVariantivEXT (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantfvEXT ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glVariantfvEXT (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantdvEXT ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glVariantdvEXT (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantubvEXT ( GLuint , const GLubyte * ) ;
 * </pre> 
 */
	public final native void glVariantubvEXT (
		int arg0,
		byte[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantusvEXT ( GLuint , const GLushort * ) ;
 * </pre> 
 */
	public final native void glVariantusvEXT (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantuivEXT ( GLuint , const GLuint * ) ;
 * </pre> 
 */
	public final native void glVariantuivEXT (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantPointerEXT ( GLuint , GLenum , GLuint , const void * ) ;
 * </pre> 
 */
	public final native void glVariantPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3
	) ;
	public final native void glVariantPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3
	) ;
	public final native void glVariantPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;
	public final native void glVariantPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;
	public final native void glVariantPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3
	) ;
	public final native void glVariantPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3
	) ;
	public final native void glVariantPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		long[] arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEnableVariantClientStateEXT ( GLuint ) ;
 * </pre> 
 */
	public final native void glEnableVariantClientStateEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDisableVariantClientStateEXT ( GLuint ) ;
 * </pre> 
 */
	public final native void glDisableVariantClientStateEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindLightParameterEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	public final native int glBindLightParameterEXT (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindMaterialParameterEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	public final native int glBindMaterialParameterEXT (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindTexGenParameterEXT ( GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	public final native int glBindTexGenParameterEXT (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindTextureUnitParameterEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	public final native int glBindTextureUnitParameterEXT (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindParameterEXT ( GLenum ) ;
 * </pre> 
 */
	public final native int glBindParameterEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsVariantEnabledEXT ( GLuint , GLenum ) ;
 * </pre> 
 */
	public final native boolean glIsVariantEnabledEXT (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantBooleanvEXT ( GLuint , GLenum , GLboolean * ) ;
 * </pre> 
 */
	public final native void glGetVariantBooleanvEXT (
		int arg0,
		int arg1,
		boolean[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantIntegervEXT ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetVariantIntegervEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantFloatvEXT ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetVariantFloatvEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantPointervEXT ( GLuint , GLenum , GLvoid * * ) ;
 * </pre> 
 */
	public final native void glGetVariantPointervEXT (
		int arg0,
		int arg1,
		byte[][] arg2
	) ;
	public final native void glGetVariantPointervEXT (
		int arg0,
		int arg1,
		short[][] arg2
	) ;
	public final native void glGetVariantPointervEXT (
		int arg0,
		int arg1,
		int[][] arg2
	) ;
	public final native void glGetVariantPointervEXT (
		int arg0,
		int arg1,
		float[][] arg2
	) ;
	public final native void glGetVariantPointervEXT (
		int arg0,
		int arg1,
		double[][] arg2
	) ;
	public final native void glGetVariantPointervEXT (
		int arg0,
		int arg1,
		boolean[][] arg2
	) ;
	public final native void glGetVariantPointervEXT (
		int arg0,
		int arg1,
		long[][] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetInvariantBooleanvEXT ( GLuint , GLenum , GLboolean * ) ;
 * </pre> 
 */
	public final native void glGetInvariantBooleanvEXT (
		int arg0,
		int arg1,
		boolean[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetInvariantIntegervEXT ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetInvariantIntegervEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetInvariantFloatvEXT ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetInvariantFloatvEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetLocalConstantBooleanvEXT ( GLuint , GLenum , GLboolean * ) ;
 * </pre> 
 */
	public final native void glGetLocalConstantBooleanvEXT (
		int arg0,
		int arg1,
		boolean[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetLocalConstantIntegervEXT ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	public final native void glGetLocalConstantIntegervEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetLocalConstantFloatvEXT ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public final native void glGetLocalConstantFloatvEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1s ( GLenum , GLshort ) ;
 * </pre> 
 */
	public final native void glVertexStream1s (
		int arg0,
		short arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1sv ( GLenum , const GLshort * ) ;
 * </pre> 
 */
	public final native void glVertexStream1sv (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1i ( GLenum , GLint ) ;
 * </pre> 
 */
	public final native void glVertexStream1i (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1iv ( GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glVertexStream1iv (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1f ( GLenum , GLfloat ) ;
 * </pre> 
 */
	public final native void glVertexStream1f (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1fv ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glVertexStream1fv (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1d ( GLenum , GLdouble ) ;
 * </pre> 
 */
	public final native void glVertexStream1d (
		int arg0,
		double arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1dv ( GLenum , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glVertexStream1dv (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2s ( GLenum , GLshort , GLshort ) ;
 * </pre> 
 */
	public final native void glVertexStream2s (
		int arg0,
		short arg1,
		short arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2sv ( GLenum , const GLshort * ) ;
 * </pre> 
 */
	public final native void glVertexStream2sv (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2i ( GLenum , GLint , GLint ) ;
 * </pre> 
 */
	public final native void glVertexStream2i (
		int arg0,
		int arg1,
		int arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2iv ( GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glVertexStream2iv (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2f ( GLenum , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glVertexStream2f (
		int arg0,
		float arg1,
		float arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2fv ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glVertexStream2fv (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2d ( GLenum , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public final native void glVertexStream2d (
		int arg0,
		double arg1,
		double arg2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2dv ( GLenum , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glVertexStream2dv (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3s ( GLenum , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	public final native void glVertexStream3s (
		int arg0,
		short arg1,
		short arg2,
		short arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3sv ( GLenum , const GLshort * ) ;
 * </pre> 
 */
	public final native void glVertexStream3sv (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3i ( GLenum , GLint , GLint , GLint ) ;
 * </pre> 
 */
	public final native void glVertexStream3i (
		int arg0,
		int arg1,
		int arg2,
		int arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3iv ( GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glVertexStream3iv (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3f ( GLenum , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glVertexStream3f (
		int arg0,
		float arg1,
		float arg2,
		float arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3fv ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glVertexStream3fv (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3d ( GLenum , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public final native void glVertexStream3d (
		int arg0,
		double arg1,
		double arg2,
		double arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3dv ( GLenum , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glVertexStream3dv (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4s ( GLenum , GLshort , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	public final native void glVertexStream4s (
		int arg0,
		short arg1,
		short arg2,
		short arg3,
		short arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4sv ( GLenum , const GLshort * ) ;
 * </pre> 
 */
	public final native void glVertexStream4sv (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4i ( GLenum , GLint , GLint , GLint , GLint ) ;
 * </pre> 
 */
	public final native void glVertexStream4i (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4iv ( GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glVertexStream4iv (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4f ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glVertexStream4f (
		int arg0,
		float arg1,
		float arg2,
		float arg3,
		float arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4fv ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glVertexStream4fv (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4d ( GLenum , GLdouble , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public final native void glVertexStream4d (
		int arg0,
		double arg1,
		double arg2,
		double arg3,
		double arg4
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4dv ( GLenum , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glVertexStream4dv (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3b ( GLenum , GLbyte , GLbyte , GLbyte ) ;
 * </pre> 
 */
	public final native void glNormalStream3b (
		int arg0,
		byte arg1,
		byte arg2,
		byte arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3bv ( GLenum , const GLbyte * ) ;
 * </pre> 
 */
	public final native void glNormalStream3bv (
		int arg0,
		byte[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3s ( GLenum , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	public final native void glNormalStream3s (
		int arg0,
		short arg1,
		short arg2,
		short arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3sv ( GLenum , const GLshort * ) ;
 * </pre> 
 */
	public final native void glNormalStream3sv (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3i ( GLenum , GLint , GLint , GLint ) ;
 * </pre> 
 */
	public final native void glNormalStream3i (
		int arg0,
		int arg1,
		int arg2,
		int arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3iv ( GLenum , const GLint * ) ;
 * </pre> 
 */
	public final native void glNormalStream3iv (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3f ( GLenum , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public final native void glNormalStream3f (
		int arg0,
		float arg1,
		float arg2,
		float arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3fv ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public final native void glNormalStream3fv (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3d ( GLenum , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public final native void glNormalStream3d (
		int arg0,
		double arg1,
		double arg2,
		double arg3
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3dv ( GLenum , const GLdouble * ) ;
 * </pre> 
 */
	public final native void glNormalStream3dv (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClientActiveVertexStream ( GLenum ) ;
 * </pre> 
 */
	public final native void glClientActiveVertexStream (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexBlendEnvi ( GLenum , GLint ) ;
 * </pre> 
 */
	public final native void glVertexBlendEnvi (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexBlendEnvf ( GLenum , GLfloat ) ;
 * </pre> 
 */
	public final native void glVertexBlendEnvf (
		int arg0,
		float arg1
	) ;

/* C2J Parser Version 3.0:  Java program parsed successfully. */ 
