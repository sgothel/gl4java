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
	public void glClearIndex (
		float c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearColor ( GLclampf red , GLclampf green , GLclampf blue , GLclampf alpha ) ;
 * </pre> 
 */
	public void glClearColor (
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
	public void glClear (
		int mask
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexMask ( GLuint mask ) ;
 * </pre> 
 */
	public void glIndexMask (
		int mask
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorMask ( GLboolean red , GLboolean green , GLboolean blue , GLboolean alpha ) ;
 * </pre> 
 */
	public void glColorMask (
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
	public void glAlphaFunc (
		int func,
		float ref
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendFunc ( GLenum sfactor , GLenum dfactor ) ;
 * </pre> 
 */
	public void glBlendFunc (
		int sfactor,
		int dfactor
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLogicOp ( GLenum opcode ) ;
 * </pre> 
 */
	public void glLogicOp (
		int opcode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCullFace ( GLenum mode ) ;
 * </pre> 
 */
	public void glCullFace (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFrontFace ( GLenum mode ) ;
 * </pre> 
 */
	public void glFrontFace (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointSize ( GLfloat size ) ;
 * </pre> 
 */
	public void glPointSize (
		float size
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLineWidth ( GLfloat width ) ;
 * </pre> 
 */
	public void glLineWidth (
		float width
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLineStipple ( GLint factor , GLushort pattern ) ;
 * </pre> 
 */
	public void glLineStipple (
		int factor,
		short pattern
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPolygonMode ( GLenum face , GLenum mode ) ;
 * </pre> 
 */
	public void glPolygonMode (
		int face,
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPolygonOffset ( GLfloat factor , GLfloat units ) ;
 * </pre> 
 */
	public void glPolygonOffset (
		float factor,
		float units
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPolygonStipple ( const GLubyte * mask ) ;
 * </pre> 
 */
	public void glPolygonStipple (
		byte[] mask
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPolygonStipple ( GLubyte * mask ) ;
 * </pre> 
 */
	public void glGetPolygonStipple (
		byte[] mask
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlag ( GLboolean flag ) ;
 * </pre> 
 */
	public void glEdgeFlag (
		boolean flag
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlagv ( const GLboolean * flag ) ;
 * </pre> 
 */
	public void glEdgeFlagv (
		boolean[] flag
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glScissor ( GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	public void glScissor (
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
	public void glClipPlane (
		int plane,
		double[] equation
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetClipPlane ( GLenum plane , GLdouble * equation ) ;
 * </pre> 
 */
	public void glGetClipPlane (
		int plane,
		double[] equation
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawBuffer ( GLenum mode ) ;
 * </pre> 
 */
	public void glDrawBuffer (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReadBuffer ( GLenum mode ) ;
 * </pre> 
 */
	public void glReadBuffer (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEnable ( GLenum cap ) ;
 * </pre> 
 */
	public void glEnable (
		int cap
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDisable ( GLenum cap ) ;
 * </pre> 
 */
	public void glDisable (
		int cap
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsEnabled ( GLenum cap ) ;
 * </pre> 
 */
	public boolean glIsEnabled (
		int cap
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEnableClientState ( GLenum cap ) ;
 * </pre> 
 */
	public void glEnableClientState (
		int cap
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDisableClientState ( GLenum cap ) ;
 * </pre> 
 */
	public void glDisableClientState (
		int cap
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetBooleanv ( GLenum pname , GLboolean * params ) ;
 * </pre> 
 */
	public void glGetBooleanv (
		int pname,
		boolean[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetDoublev ( GLenum pname , GLdouble * params ) ;
 * </pre> 
 */
	public void glGetDoublev (
		int pname,
		double[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFloatv ( GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	public void glGetFloatv (
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetIntegerv ( GLenum pname , GLint * params ) ;
 * </pre> 
 */
	public void glGetIntegerv (
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPushAttrib ( GLbitfield mask ) ;
 * </pre> 
 */
	public void glPushAttrib (
		int mask
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPopAttrib ( void ) ;
 * </pre> 
 */
	public void glPopAttrib (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPushClientAttrib ( GLbitfield mask ) ;
 * </pre> 
 */
	public void glPushClientAttrib (
		int mask
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPopClientAttrib ( void ) ;
 * </pre> 
 */
	public void glPopClientAttrib (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glRenderMode ( GLenum mode ) ;
 * </pre> 
 */
	public int glRenderMode (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLenum glGetError ( void ) ;
 * </pre> 
 */
	public int glGetError (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFinish ( void ) ;
 * </pre> 
 */
	public void glFinish (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFlush ( void ) ;
 * </pre> 
 */
	public void glFlush (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glHint ( GLenum target , GLenum mode ) ;
 * </pre> 
 */
	public void glHint (
		int target,
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearDepth ( GLclampd depth ) ;
 * </pre> 
 */
	public void glClearDepth (
		double depth
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDepthFunc ( GLenum func ) ;
 * </pre> 
 */
	public void glDepthFunc (
		int func
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDepthMask ( GLboolean flag ) ;
 * </pre> 
 */
	public void glDepthMask (
		boolean flag
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDepthRange ( GLclampd near_val , GLclampd far_val ) ;
 * </pre> 
 */
	public void glDepthRange (
		double near_val,
		double far_val
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearAccum ( GLfloat red , GLfloat green , GLfloat blue , GLfloat alpha ) ;
 * </pre> 
 */
	public void glClearAccum (
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
	public void glAccum (
		int op,
		float value
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixMode ( GLenum mode ) ;
 * </pre> 
 */
	public void glMatrixMode (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glOrtho ( GLdouble left , GLdouble right , GLdouble bottom , GLdouble top , GLdouble near_val , GLdouble far_val ) ;
 * </pre> 
 */
	public void glOrtho (
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
	public void glFrustum (
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
	public void glViewport (
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
	public void glPushMatrix (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPopMatrix ( void ) ;
 * </pre> 
 */
	public void glPopMatrix (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadIdentity ( void ) ;
 * </pre> 
 */
	public void glLoadIdentity (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadMatrixd ( const GLdouble * m ) ;
 * </pre> 
 */
	public void glLoadMatrixd (
		double[] m
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadMatrixf ( const GLfloat * m ) ;
 * </pre> 
 */
	public void glLoadMatrixf (
		float[] m
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultMatrixd ( const GLdouble * m ) ;
 * </pre> 
 */
	public void glMultMatrixd (
		double[] m
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultMatrixf ( const GLfloat * m ) ;
 * </pre> 
 */
	public void glMultMatrixf (
		float[] m
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRotated ( GLdouble angle , GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	public void glRotated (
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
	public void glRotatef (
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
	public void glScaled (
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
	public void glScalef (
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
	public void glTranslated (
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
	public void glTranslatef (
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
	public boolean glIsList (
		int list
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteLists ( GLuint list , GLsizei range ) ;
 * </pre> 
 */
	public void glDeleteLists (
		int list,
		int range
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenLists ( GLsizei range ) ;
 * </pre> 
 */
	public int glGenLists (
		int range
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNewList ( GLuint list , GLenum mode ) ;
 * </pre> 
 */
	public void glNewList (
		int list,
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEndList ( void ) ;
 * </pre> 
 */
	public void glEndList (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCallList ( GLuint list ) ;
 * </pre> 
 */
	public void glCallList (
		int list
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCallLists ( GLsizei n , GLenum type , const GLvoid * lists ) ;
 * </pre> 
 */
	public void glCallLists (
		int n,
		int type,
		byte[] lists
	) ;
	public void glCallLists (
		int n,
		int type,
		short[] lists
	) ;
	public void glCallLists (
		int n,
		int type,
		int[] lists
	) ;
	public void glCallLists (
		int n,
		int type,
		float[] lists
	) ;
	public void glCallLists (
		int n,
		int type,
		double[] lists
	) ;
	public void glCallLists (
		int n,
		int type,
		boolean[] lists
	) ;
	public void glCallLists (
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
	public void glListBase (
		int base
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBegin ( GLenum mode ) ;
 * </pre> 
 */
	public void glBegin (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEnd ( void ) ;
 * </pre> 
 */
	public void glEnd (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2d ( GLdouble x , GLdouble y ) ;
 * </pre> 
 */
	public void glVertex2d (
		double x,
		double y
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2f ( GLfloat x , GLfloat y ) ;
 * </pre> 
 */
	public void glVertex2f (
		float x,
		float y
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2i ( GLint x , GLint y ) ;
 * </pre> 
 */
	public void glVertex2i (
		int x,
		int y
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2s ( GLshort x , GLshort y ) ;
 * </pre> 
 */
	public void glVertex2s (
		short x,
		short y
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3d ( GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	public void glVertex3d (
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
	public void glVertex3f (
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
	public void glVertex3i (
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
	public void glVertex3s (
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
	public void glVertex4d (
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
	public void glVertex4f (
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
	public void glVertex4i (
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
	public void glVertex4s (
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
	public void glVertex2dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public void glVertex2fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2iv ( const GLint * v ) ;
 * </pre> 
 */
	public void glVertex2iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2sv ( const GLshort * v ) ;
 * </pre> 
 */
	public void glVertex2sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public void glVertex3dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public void glVertex3fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3iv ( const GLint * v ) ;
 * </pre> 
 */
	public void glVertex3iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3sv ( const GLshort * v ) ;
 * </pre> 
 */
	public void glVertex3sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public void glVertex4dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public void glVertex4fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4iv ( const GLint * v ) ;
 * </pre> 
 */
	public void glVertex4iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4sv ( const GLshort * v ) ;
 * </pre> 
 */
	public void glVertex4sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3b ( GLbyte nx , GLbyte ny , GLbyte nz ) ;
 * </pre> 
 */
	public void glNormal3b (
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
	public void glNormal3d (
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
	public void glNormal3f (
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
	public void glNormal3i (
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
	public void glNormal3s (
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
	public void glNormal3bv (
		byte[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public void glNormal3dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public void glNormal3fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3iv ( const GLint * v ) ;
 * </pre> 
 */
	public void glNormal3iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3sv ( const GLshort * v ) ;
 * </pre> 
 */
	public void glNormal3sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexd ( GLdouble c ) ;
 * </pre> 
 */
	public void glIndexd (
		double c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexf ( GLfloat c ) ;
 * </pre> 
 */
	public void glIndexf (
		float c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexi ( GLint c ) ;
 * </pre> 
 */
	public void glIndexi (
		int c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexs ( GLshort c ) ;
 * </pre> 
 */
	public void glIndexs (
		short c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexub ( GLubyte c ) ;
 * </pre> 
 */
	public void glIndexub (
		byte c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexdv ( const GLdouble * c ) ;
 * </pre> 
 */
	public void glIndexdv (
		double[] c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexfv ( const GLfloat * c ) ;
 * </pre> 
 */
	public void glIndexfv (
		float[] c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexiv ( const GLint * c ) ;
 * </pre> 
 */
	public void glIndexiv (
		int[] c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexsv ( const GLshort * c ) ;
 * </pre> 
 */
	public void glIndexsv (
		short[] c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexubv ( const GLubyte * c ) ;
 * </pre> 
 */
	public void glIndexubv (
		byte[] c
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3b ( GLbyte red , GLbyte green , GLbyte blue ) ;
 * </pre> 
 */
	public void glColor3b (
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
	public void glColor3d (
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
	public void glColor3f (
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
	public void glColor3i (
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
	public void glColor3s (
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
	public void glColor3ub (
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
	public void glColor3ui (
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
	public void glColor3us (
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
	public void glColor4b (
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
	public void glColor4d (
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
	public void glColor4f (
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
	public void glColor4i (
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
	public void glColor4s (
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
	public void glColor4ub (
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
	public void glColor4ui (
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
	public void glColor4us (
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
	public void glColor3bv (
		byte[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public void glColor3dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public void glColor3fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3iv ( const GLint * v ) ;
 * </pre> 
 */
	public void glColor3iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3sv ( const GLshort * v ) ;
 * </pre> 
 */
	public void glColor3sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3ubv ( const GLubyte * v ) ;
 * </pre> 
 */
	public void glColor3ubv (
		byte[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3uiv ( const GLuint * v ) ;
 * </pre> 
 */
	public void glColor3uiv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3usv ( const GLushort * v ) ;
 * </pre> 
 */
	public void glColor3usv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4bv ( const GLbyte * v ) ;
 * </pre> 
 */
	public void glColor4bv (
		byte[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public void glColor4dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public void glColor4fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4iv ( const GLint * v ) ;
 * </pre> 
 */
	public void glColor4iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4sv ( const GLshort * v ) ;
 * </pre> 
 */
	public void glColor4sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubv ( const GLubyte * v ) ;
 * </pre> 
 */
	public void glColor4ubv (
		byte[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4uiv ( const GLuint * v ) ;
 * </pre> 
 */
	public void glColor4uiv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4usv ( const GLushort * v ) ;
 * </pre> 
 */
	public void glColor4usv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1d ( GLdouble s ) ;
 * </pre> 
 */
	public void glTexCoord1d (
		double s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1f ( GLfloat s ) ;
 * </pre> 
 */
	public void glTexCoord1f (
		float s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1i ( GLint s ) ;
 * </pre> 
 */
	public void glTexCoord1i (
		int s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1s ( GLshort s ) ;
 * </pre> 
 */
	public void glTexCoord1s (
		short s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2d ( GLdouble s , GLdouble t ) ;
 * </pre> 
 */
	public void glTexCoord2d (
		double s,
		double t
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2f ( GLfloat s , GLfloat t ) ;
 * </pre> 
 */
	public void glTexCoord2f (
		float s,
		float t
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2i ( GLint s , GLint t ) ;
 * </pre> 
 */
	public void glTexCoord2i (
		int s,
		int t
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2s ( GLshort s , GLshort t ) ;
 * </pre> 
 */
	public void glTexCoord2s (
		short s,
		short t
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3d ( GLdouble s , GLdouble t , GLdouble r ) ;
 * </pre> 
 */
	public void glTexCoord3d (
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
	public void glTexCoord3f (
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
	public void glTexCoord3i (
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
	public void glTexCoord3s (
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
	public void glTexCoord4d (
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
	public void glTexCoord4f (
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
	public void glTexCoord4i (
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
	public void glTexCoord4s (
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
	public void glTexCoord1dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public void glTexCoord1fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1iv ( const GLint * v ) ;
 * </pre> 
 */
	public void glTexCoord1iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1sv ( const GLshort * v ) ;
 * </pre> 
 */
	public void glTexCoord1sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public void glTexCoord2dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public void glTexCoord2fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2iv ( const GLint * v ) ;
 * </pre> 
 */
	public void glTexCoord2iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2sv ( const GLshort * v ) ;
 * </pre> 
 */
	public void glTexCoord2sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public void glTexCoord3dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public void glTexCoord3fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3iv ( const GLint * v ) ;
 * </pre> 
 */
	public void glTexCoord3iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3sv ( const GLshort * v ) ;
 * </pre> 
 */
	public void glTexCoord3sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public void glTexCoord4dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public void glTexCoord4fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4iv ( const GLint * v ) ;
 * </pre> 
 */
	public void glTexCoord4iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4sv ( const GLshort * v ) ;
 * </pre> 
 */
	public void glTexCoord4sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2d ( GLdouble x , GLdouble y ) ;
 * </pre> 
 */
	public void glRasterPos2d (
		double x,
		double y
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2f ( GLfloat x , GLfloat y ) ;
 * </pre> 
 */
	public void glRasterPos2f (
		float x,
		float y
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2i ( GLint x , GLint y ) ;
 * </pre> 
 */
	public void glRasterPos2i (
		int x,
		int y
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2s ( GLshort x , GLshort y ) ;
 * </pre> 
 */
	public void glRasterPos2s (
		short x,
		short y
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3d ( GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	public void glRasterPos3d (
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
	public void glRasterPos3f (
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
	public void glRasterPos3i (
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
	public void glRasterPos3s (
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
	public void glRasterPos4d (
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
	public void glRasterPos4f (
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
	public void glRasterPos4i (
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
	public void glRasterPos4s (
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
	public void glRasterPos2dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public void glRasterPos2fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2iv ( const GLint * v ) ;
 * </pre> 
 */
	public void glRasterPos2iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2sv ( const GLshort * v ) ;
 * </pre> 
 */
	public void glRasterPos2sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public void glRasterPos3dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public void glRasterPos3fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3iv ( const GLint * v ) ;
 * </pre> 
 */
	public void glRasterPos3iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3sv ( const GLshort * v ) ;
 * </pre> 
 */
	public void glRasterPos3sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4dv ( const GLdouble * v ) ;
 * </pre> 
 */
	public void glRasterPos4dv (
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4fv ( const GLfloat * v ) ;
 * </pre> 
 */
	public void glRasterPos4fv (
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4iv ( const GLint * v ) ;
 * </pre> 
 */
	public void glRasterPos4iv (
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4sv ( const GLshort * v ) ;
 * </pre> 
 */
	public void glRasterPos4sv (
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectd ( GLdouble x1 , GLdouble y1 , GLdouble x2 , GLdouble y2 ) ;
 * </pre> 
 */
	public void glRectd (
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
	public void glRectf (
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
	public void glRecti (
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
	public void glRects (
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
	public void glRectdv (
		double[] v1,
		double[] v2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectfv ( const GLfloat * v1 , const GLfloat * v2 ) ;
 * </pre> 
 */
	public void glRectfv (
		float[] v1,
		float[] v2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectiv ( const GLint * v1 , const GLint * v2 ) ;
 * </pre> 
 */
	public void glRectiv (
		int[] v1,
		int[] v2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectsv ( const GLshort * v1 , const GLshort * v2 ) ;
 * </pre> 
 */
	public void glRectsv (
		short[] v1,
		short[] v2
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexPointer ( GLint size , GLenum type , GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	public void glVertexPointer (
		int size,
		int type,
		int stride,
		byte[] ptr
	) ;
	public void glVertexPointer (
		int size,
		int type,
		int stride,
		short[] ptr
	) ;
	public void glVertexPointer (
		int size,
		int type,
		int stride,
		int[] ptr
	) ;
	public void glVertexPointer (
		int size,
		int type,
		int stride,
		float[] ptr
	) ;
	public void glVertexPointer (
		int size,
		int type,
		int stride,
		double[] ptr
	) ;
	public void glVertexPointer (
		int size,
		int type,
		int stride,
		boolean[] ptr
	) ;
	public void glVertexPointer (
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
	public void glNormalPointer (
		int type,
		int stride,
		byte[] ptr
	) ;
	public void glNormalPointer (
		int type,
		int stride,
		short[] ptr
	) ;
	public void glNormalPointer (
		int type,
		int stride,
		int[] ptr
	) ;
	public void glNormalPointer (
		int type,
		int stride,
		float[] ptr
	) ;
	public void glNormalPointer (
		int type,
		int stride,
		double[] ptr
	) ;
	public void glNormalPointer (
		int type,
		int stride,
		boolean[] ptr
	) ;
	public void glNormalPointer (
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
	public void glColorPointer (
		int size,
		int type,
		int stride,
		byte[] ptr
	) ;
	public void glColorPointer (
		int size,
		int type,
		int stride,
		short[] ptr
	) ;
	public void glColorPointer (
		int size,
		int type,
		int stride,
		int[] ptr
	) ;
	public void glColorPointer (
		int size,
		int type,
		int stride,
		float[] ptr
	) ;
	public void glColorPointer (
		int size,
		int type,
		int stride,
		double[] ptr
	) ;
	public void glColorPointer (
		int size,
		int type,
		int stride,
		boolean[] ptr
	) ;
	public void glColorPointer (
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
	public void glIndexPointer (
		int type,
		int stride,
		byte[] ptr
	) ;
	public void glIndexPointer (
		int type,
		int stride,
		short[] ptr
	) ;
	public void glIndexPointer (
		int type,
		int stride,
		int[] ptr
	) ;
	public void glIndexPointer (
		int type,
		int stride,
		float[] ptr
	) ;
	public void glIndexPointer (
		int type,
		int stride,
		double[] ptr
	) ;
	public void glIndexPointer (
		int type,
		int stride,
		boolean[] ptr
	) ;
	public void glIndexPointer (
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
	public void glTexCoordPointer (
		int size,
		int type,
		int stride,
		byte[] ptr
	) ;
	public void glTexCoordPointer (
		int size,
		int type,
		int stride,
		short[] ptr
	) ;
	public void glTexCoordPointer (
		int size,
		int type,
		int stride,
		int[] ptr
	) ;
	public void glTexCoordPointer (
		int size,
		int type,
		int stride,
		float[] ptr
	) ;
	public void glTexCoordPointer (
		int size,
		int type,
		int stride,
		double[] ptr
	) ;
	public void glTexCoordPointer (
		int size,
		int type,
		int stride,
		boolean[] ptr
	) ;
	public void glTexCoordPointer (
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
	public void glEdgeFlagPointer (
		int stride,
		byte[] ptr
	) ;
	public void glEdgeFlagPointer (
		int stride,
		short[] ptr
	) ;
	public void glEdgeFlagPointer (
		int stride,
		int[] ptr
	) ;
	public void glEdgeFlagPointer (
		int stride,
		float[] ptr
	) ;
	public void glEdgeFlagPointer (
		int stride,
		double[] ptr
	) ;
	public void glEdgeFlagPointer (
		int stride,
		boolean[] ptr
	) ;
	public void glEdgeFlagPointer (
		int stride,
		long[] ptr
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPointerv ( GLenum pname , GLvoid * * params ) ;
 * </pre> 
 */
	public void glGetPointerv (
		int pname,
		byte[][] params
	) ;
	public void glGetPointerv (
		int pname,
		short[][] params
	) ;
	public void glGetPointerv (
		int pname,
		int[][] params
	) ;
	public void glGetPointerv (
		int pname,
		float[][] params
	) ;
	public void glGetPointerv (
		int pname,
		double[][] params
	) ;
	public void glGetPointerv (
		int pname,
		boolean[][] params
	) ;
	public void glGetPointerv (
		int pname,
		long[][] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glArrayElement ( GLint i ) ;
 * </pre> 
 */
	public void glArrayElement (
		int i
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawArrays ( GLenum mode , GLint first , GLsizei count ) ;
 * </pre> 
 */
	public void glDrawArrays (
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
	public void glDrawElements (
		int mode,
		int count,
		int type,
		byte[] indices
	) ;
	public void glDrawElements (
		int mode,
		int count,
		int type,
		short[] indices
	) ;
	public void glDrawElements (
		int mode,
		int count,
		int type,
		int[] indices
	) ;
	public void glDrawElements (
		int mode,
		int count,
		int type,
		float[] indices
	) ;
	public void glDrawElements (
		int mode,
		int count,
		int type,
		double[] indices
	) ;
	public void glDrawElements (
		int mode,
		int count,
		int type,
		boolean[] indices
	) ;
	public void glDrawElements (
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
	public void glInterleavedArrays (
		int format,
		int stride,
		byte[] pointer
	) ;
	public void glInterleavedArrays (
		int format,
		int stride,
		short[] pointer
	) ;
	public void glInterleavedArrays (
		int format,
		int stride,
		int[] pointer
	) ;
	public void glInterleavedArrays (
		int format,
		int stride,
		float[] pointer
	) ;
	public void glInterleavedArrays (
		int format,
		int stride,
		double[] pointer
	) ;
	public void glInterleavedArrays (
		int format,
		int stride,
		boolean[] pointer
	) ;
	public void glInterleavedArrays (
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
	public void glShadeModel (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightf ( GLenum light , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public void glLightf (
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
	public void glLighti (
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
	public void glLightfv (
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
	public void glLightiv (
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
	public void glGetLightfv (
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
	public void glGetLightiv (
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
	public void glLightModelf (
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightModeli ( GLenum pname , GLint param ) ;
 * </pre> 
 */
	public void glLightModeli (
		int pname,
		int param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightModelfv ( GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	public void glLightModelfv (
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightModeliv ( GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	public void glLightModeliv (
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMaterialf ( GLenum face , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public void glMaterialf (
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
	public void glMateriali (
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
	public void glMaterialfv (
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
	public void glMaterialiv (
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
	public void glGetMaterialfv (
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
	public void glGetMaterialiv (
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
	public void glColorMaterial (
		int face,
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelZoom ( GLfloat xfactor , GLfloat yfactor ) ;
 * </pre> 
 */
	public void glPixelZoom (
		float xfactor,
		float yfactor
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelStoref ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public void glPixelStoref (
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelStorei ( GLenum pname , GLint param ) ;
 * </pre> 
 */
	public void glPixelStorei (
		int pname,
		int param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransferf ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public void glPixelTransferf (
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransferi ( GLenum pname , GLint param ) ;
 * </pre> 
 */
	public void glPixelTransferi (
		int pname,
		int param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelMapfv ( GLenum map , GLint mapsize , const GLfloat * values ) ;
 * </pre> 
 */
	public void glPixelMapfv (
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
	public void glPixelMapuiv (
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
	public void glPixelMapusv (
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
	public void glGetPixelMapfv (
		int map,
		float[] values
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelMapuiv ( GLenum map , GLuint * values ) ;
 * </pre> 
 */
	public void glGetPixelMapuiv (
		int map,
		int[] values
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelMapusv ( GLenum map , GLushort * values ) ;
 * </pre> 
 */
	public void glGetPixelMapusv (
		int map,
		short[] values
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBitmap ( GLsizei width , GLsizei height , GLfloat xorig , GLfloat yorig , GLfloat xmove , GLfloat ymove , const GLubyte * bitmap ) ;
 * </pre> 
 */
	public void glBitmap (
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
	public void glReadPixels (
		int x,
		int y,
		int width,
		int height,
		int format,
		int type,
		byte[] pixels
	) ;
	public void glReadPixels (
		int x,
		int y,
		int width,
		int height,
		int format,
		int type,
		short[] pixels
	) ;
	public void glReadPixels (
		int x,
		int y,
		int width,
		int height,
		int format,
		int type,
		int[] pixels
	) ;
	public void glReadPixels (
		int x,
		int y,
		int width,
		int height,
		int format,
		int type,
		float[] pixels
	) ;
	public void glReadPixels (
		int x,
		int y,
		int width,
		int height,
		int format,
		int type,
		double[] pixels
	) ;
	public void glReadPixels (
		int x,
		int y,
		int width,
		int height,
		int format,
		int type,
		boolean[] pixels
	) ;
	public void glReadPixels (
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
	public void glDrawPixels (
		int width,
		int height,
		int format,
		int type,
		byte[] pixels
	) ;
	public void glDrawPixels (
		int width,
		int height,
		int format,
		int type,
		short[] pixels
	) ;
	public void glDrawPixels (
		int width,
		int height,
		int format,
		int type,
		int[] pixels
	) ;
	public void glDrawPixels (
		int width,
		int height,
		int format,
		int type,
		float[] pixels
	) ;
	public void glDrawPixels (
		int width,
		int height,
		int format,
		int type,
		double[] pixels
	) ;
	public void glDrawPixels (
		int width,
		int height,
		int format,
		int type,
		boolean[] pixels
	) ;
	public void glDrawPixels (
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
	public void glCopyPixels (
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
	public void glStencilFunc (
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
	public void glStencilMask (
		int mask
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStencilOp ( GLenum fail , GLenum zfail , GLenum zpass ) ;
 * </pre> 
 */
	public void glStencilOp (
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
	public void glClearStencil (
		int s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGend ( GLenum coord , GLenum pname , GLdouble param ) ;
 * </pre> 
 */
	public void glTexGend (
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
	public void glTexGenf (
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
	public void glTexGeni (
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
	public void glTexGendv (
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
	public void glTexGenfv (
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
	public void glTexGeniv (
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
	public void glGetTexGendv (
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
	public void glGetTexGenfv (
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
	public void glGetTexGeniv (
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
	public void glTexEnvf (
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
	public void glTexEnvi (
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
	public void glTexEnvfv (
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
	public void glTexEnviv (
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
	public void glGetTexEnvfv (
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
	public void glGetTexEnviv (
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
	public void glTexParameterf (
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
	public void glTexParameteri (
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
	public void glTexParameterfv (
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
	public void glTexParameteriv (
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
	public void glGetTexParameterfv (
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
	public void glGetTexParameteriv (
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
	public void glGetTexLevelParameterfv (
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
	public void glGetTexLevelParameteriv (
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
	public void glTexImage1D (
		int target,
		int level,
		int internalFormat,
		int width,
		int border,
		int format,
		int type,
		byte[] pixels
	) ;
	public void glTexImage1D (
		int target,
		int level,
		int internalFormat,
		int width,
		int border,
		int format,
		int type,
		short[] pixels
	) ;
	public void glTexImage1D (
		int target,
		int level,
		int internalFormat,
		int width,
		int border,
		int format,
		int type,
		int[] pixels
	) ;
	public void glTexImage1D (
		int target,
		int level,
		int internalFormat,
		int width,
		int border,
		int format,
		int type,
		float[] pixels
	) ;
	public void glTexImage1D (
		int target,
		int level,
		int internalFormat,
		int width,
		int border,
		int format,
		int type,
		double[] pixels
	) ;
	public void glTexImage1D (
		int target,
		int level,
		int internalFormat,
		int width,
		int border,
		int format,
		int type,
		boolean[] pixels
	) ;
	public void glTexImage1D (
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
	public void glTexImage2D (
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
	public void glTexImage2D (
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
	public void glTexImage2D (
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
	public void glTexImage2D (
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
	public void glTexImage2D (
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
	public void glTexImage2D (
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
	public void glTexImage2D (
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
	public void glGetTexImage (
		int target,
		int level,
		int format,
		int type,
		byte[] pixels
	) ;
	public void glGetTexImage (
		int target,
		int level,
		int format,
		int type,
		short[] pixels
	) ;
	public void glGetTexImage (
		int target,
		int level,
		int format,
		int type,
		int[] pixels
	) ;
	public void glGetTexImage (
		int target,
		int level,
		int format,
		int type,
		float[] pixels
	) ;
	public void glGetTexImage (
		int target,
		int level,
		int format,
		int type,
		double[] pixels
	) ;
	public void glGetTexImage (
		int target,
		int level,
		int format,
		int type,
		boolean[] pixels
	) ;
	public void glGetTexImage (
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
	public void glGenTextures (
		int n,
		int[] textures
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteTextures ( GLsizei n , const GLuint * textures ) ;
 * </pre> 
 */
	public void glDeleteTextures (
		int n,
		int[] textures
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindTexture ( GLenum target , GLuint texture ) ;
 * </pre> 
 */
	public void glBindTexture (
		int target,
		int texture
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPrioritizeTextures ( GLsizei n , const GLuint * textures , const GLclampf * priorities ) ;
 * </pre> 
 */
	public void glPrioritizeTextures (
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
	public boolean glAreTexturesResident (
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
	public boolean glIsTexture (
		int texture
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage1D ( GLenum target , GLint level , GLint xoffset , GLsizei width , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	public void glTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int type,
		byte[] pixels
	) ;
	public void glTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int type,
		short[] pixels
	) ;
	public void glTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int type,
		int[] pixels
	) ;
	public void glTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int type,
		float[] pixels
	) ;
	public void glTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int type,
		double[] pixels
	) ;
	public void glTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int type,
		boolean[] pixels
	) ;
	public void glTexSubImage1D (
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
	public void glTexSubImage2D (
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
	public void glTexSubImage2D (
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
	public void glTexSubImage2D (
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
	public void glTexSubImage2D (
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
	public void glTexSubImage2D (
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
	public void glTexSubImage2D (
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
	public void glTexSubImage2D (
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
	public void glCopyTexImage1D (
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
	public void glCopyTexImage2D (
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
	public void glCopyTexSubImage1D (
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
	public void glCopyTexSubImage2D (
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
	public void glMap1d (
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
	public void glMap1f (
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
	public void glMap2d (
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
	public void glMap2f (
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
	public void glGetMapdv (
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
	public void glGetMapfv (
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
	public void glGetMapiv (
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
	public void glEvalCoord1d (
		double u
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord1f ( GLfloat u ) ;
 * </pre> 
 */
	public void glEvalCoord1f (
		float u
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord1dv ( const GLdouble * u ) ;
 * </pre> 
 */
	public void glEvalCoord1dv (
		double[] u
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord1fv ( const GLfloat * u ) ;
 * </pre> 
 */
	public void glEvalCoord1fv (
		float[] u
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord2d ( GLdouble u , GLdouble v ) ;
 * </pre> 
 */
	public void glEvalCoord2d (
		double u,
		double v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord2f ( GLfloat u , GLfloat v ) ;
 * </pre> 
 */
	public void glEvalCoord2f (
		float u,
		float v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord2dv ( const GLdouble * u ) ;
 * </pre> 
 */
	public void glEvalCoord2dv (
		double[] u
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord2fv ( const GLfloat * u ) ;
 * </pre> 
 */
	public void glEvalCoord2fv (
		float[] u
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapGrid1d ( GLint un , GLdouble u1 , GLdouble u2 ) ;
 * </pre> 
 */
	public void glMapGrid1d (
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
	public void glMapGrid1f (
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
	public void glMapGrid2d (
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
	public void glMapGrid2f (
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
	public void glEvalPoint1 (
		int i
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalPoint2 ( GLint i , GLint j ) ;
 * </pre> 
 */
	public void glEvalPoint2 (
		int i,
		int j
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalMesh1 ( GLenum mode , GLint i1 , GLint i2 ) ;
 * </pre> 
 */
	public void glEvalMesh1 (
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
	public void glEvalMesh2 (
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
	public void glFogf (
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogi ( GLenum pname , GLint param ) ;
 * </pre> 
 */
	public void glFogi (
		int pname,
		int param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogfv ( GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	public void glFogfv (
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogiv ( GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	public void glFogiv (
		int pname,
		int[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFeedbackBuffer ( GLsizei size , GLenum type , GLfloat * buffer ) ;
 * </pre> 
 */
	public void glFeedbackBuffer (
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
	public void glPassThrough (
		float token
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSelectBuffer ( GLsizei size , GLuint * buffer ) ;
 * </pre> 
 */
	public void glSelectBuffer (
		int size,
		int[] buffer
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glInitNames ( void ) ;
 * </pre> 
 */
	public void glInitNames (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadName ( GLuint name ) ;
 * </pre> 
 */
	public void glLoadName (
		int name
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPushName ( GLuint name ) ;
 * </pre> 
 */
	public void glPushName (
		int name
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPopName ( void ) ;
 * </pre> 
 */
	public void glPopName (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawRangeElements ( GLenum mode , GLuint start , GLuint end , GLsizei count , GLenum type , const GLvoid * indices ) ;
 * </pre> 
 */
	public void glDrawRangeElements (
		int mode,
		int start,
		int end,
		int count,
		int type,
		byte[] indices
	) ;
	public void glDrawRangeElements (
		int mode,
		int start,
		int end,
		int count,
		int type,
		short[] indices
	) ;
	public void glDrawRangeElements (
		int mode,
		int start,
		int end,
		int count,
		int type,
		int[] indices
	) ;
	public void glDrawRangeElements (
		int mode,
		int start,
		int end,
		int count,
		int type,
		float[] indices
	) ;
	public void glDrawRangeElements (
		int mode,
		int start,
		int end,
		int count,
		int type,
		double[] indices
	) ;
	public void glDrawRangeElements (
		int mode,
		int start,
		int end,
		int count,
		int type,
		boolean[] indices
	) ;
	public void glDrawRangeElements (
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
	public void glTexImage3D (
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
	public void glTexImage3D (
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
	public void glTexImage3D (
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
	public void glTexImage3D (
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
	public void glTexImage3D (
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
	public void glTexImage3D (
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
	public void glTexImage3D (
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
	public void glTexSubImage3D (
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
	public void glTexSubImage3D (
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
	public void glTexSubImage3D (
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
	public void glTexSubImage3D (
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
	public void glTexSubImage3D (
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
	public void glTexSubImage3D (
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
	public void glTexSubImage3D (
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
	public void glCopyTexSubImage3D (
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
	public void glColorTable (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		byte[] table
	) ;
	public void glColorTable (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		short[] table
	) ;
	public void glColorTable (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		int[] table
	) ;
	public void glColorTable (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		float[] table
	) ;
	public void glColorTable (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		double[] table
	) ;
	public void glColorTable (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		boolean[] table
	) ;
	public void glColorTable (
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
	public void glColorSubTable (
		int target,
		int start,
		int count,
		int format,
		int type,
		byte[] data
	) ;
	public void glColorSubTable (
		int target,
		int start,
		int count,
		int format,
		int type,
		short[] data
	) ;
	public void glColorSubTable (
		int target,
		int start,
		int count,
		int format,
		int type,
		int[] data
	) ;
	public void glColorSubTable (
		int target,
		int start,
		int count,
		int format,
		int type,
		float[] data
	) ;
	public void glColorSubTable (
		int target,
		int start,
		int count,
		int format,
		int type,
		double[] data
	) ;
	public void glColorSubTable (
		int target,
		int start,
		int count,
		int format,
		int type,
		boolean[] data
	) ;
	public void glColorSubTable (
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
	public void glColorTableParameteriv (
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
	public void glColorTableParameterfv (
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
	public void glCopyColorSubTable (
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
	public void glCopyColorTable (
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
	public void glGetColorTable (
		int target,
		int format,
		int type,
		byte[] table
	) ;
	public void glGetColorTable (
		int target,
		int format,
		int type,
		short[] table
	) ;
	public void glGetColorTable (
		int target,
		int format,
		int type,
		int[] table
	) ;
	public void glGetColorTable (
		int target,
		int format,
		int type,
		float[] table
	) ;
	public void glGetColorTable (
		int target,
		int format,
		int type,
		double[] table
	) ;
	public void glGetColorTable (
		int target,
		int format,
		int type,
		boolean[] table
	) ;
	public void glGetColorTable (
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
	public void glGetColorTableParameterfv (
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
	public void glGetColorTableParameteriv (
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
	public void glBlendEquation (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendColor ( GLclampf red , GLclampf green , GLclampf blue , GLclampf alpha ) ;
 * </pre> 
 */
	public void glBlendColor (
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
	public void glHistogram (
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
	public void glResetHistogram (
		int target
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogram ( GLenum target , GLboolean reset , GLenum format , GLenum type , GLvoid * values ) ;
 * </pre> 
 */
	public void glGetHistogram (
		int target,
		boolean reset,
		int format,
		int type,
		byte[] values
	) ;
	public void glGetHistogram (
		int target,
		boolean reset,
		int format,
		int type,
		short[] values
	) ;
	public void glGetHistogram (
		int target,
		boolean reset,
		int format,
		int type,
		int[] values
	) ;
	public void glGetHistogram (
		int target,
		boolean reset,
		int format,
		int type,
		float[] values
	) ;
	public void glGetHistogram (
		int target,
		boolean reset,
		int format,
		int type,
		double[] values
	) ;
	public void glGetHistogram (
		int target,
		boolean reset,
		int format,
		int type,
		boolean[] values
	) ;
	public void glGetHistogram (
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
	public void glGetHistogramParameterfv (
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
	public void glGetHistogramParameteriv (
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
	public void glMinmax (
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
	public void glResetMinmax (
		int target
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmax ( GLenum target , GLboolean reset , GLenum format , GLenum types , GLvoid * values ) ;
 * </pre> 
 */
	public void glGetMinmax (
		int target,
		boolean reset,
		int format,
		int types,
		byte[] values
	) ;
	public void glGetMinmax (
		int target,
		boolean reset,
		int format,
		int types,
		short[] values
	) ;
	public void glGetMinmax (
		int target,
		boolean reset,
		int format,
		int types,
		int[] values
	) ;
	public void glGetMinmax (
		int target,
		boolean reset,
		int format,
		int types,
		float[] values
	) ;
	public void glGetMinmax (
		int target,
		boolean reset,
		int format,
		int types,
		double[] values
	) ;
	public void glGetMinmax (
		int target,
		boolean reset,
		int format,
		int types,
		boolean[] values
	) ;
	public void glGetMinmax (
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
	public void glGetMinmaxParameterfv (
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
	public void glGetMinmaxParameteriv (
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
	public void glConvolutionFilter1D (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		byte[] image
	) ;
	public void glConvolutionFilter1D (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		short[] image
	) ;
	public void glConvolutionFilter1D (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		int[] image
	) ;
	public void glConvolutionFilter1D (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		float[] image
	) ;
	public void glConvolutionFilter1D (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		double[] image
	) ;
	public void glConvolutionFilter1D (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		boolean[] image
	) ;
	public void glConvolutionFilter1D (
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
	public void glConvolutionFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		byte[] image
	) ;
	public void glConvolutionFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		short[] image
	) ;
	public void glConvolutionFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		int[] image
	) ;
	public void glConvolutionFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		float[] image
	) ;
	public void glConvolutionFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		double[] image
	) ;
	public void glConvolutionFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		boolean[] image
	) ;
	public void glConvolutionFilter2D (
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
	public void glConvolutionParameterf (
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
	public void glConvolutionParameterfv (
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
	public void glConvolutionParameteri (
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
	public void glConvolutionParameteriv (
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
	public void glCopyConvolutionFilter1D (
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
	public void glCopyConvolutionFilter2D (
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
	public void glGetConvolutionFilter (
		int target,
		int format,
		int type,
		byte[] image
	) ;
	public void glGetConvolutionFilter (
		int target,
		int format,
		int type,
		short[] image
	) ;
	public void glGetConvolutionFilter (
		int target,
		int format,
		int type,
		int[] image
	) ;
	public void glGetConvolutionFilter (
		int target,
		int format,
		int type,
		float[] image
	) ;
	public void glGetConvolutionFilter (
		int target,
		int format,
		int type,
		double[] image
	) ;
	public void glGetConvolutionFilter (
		int target,
		int format,
		int type,
		boolean[] image
	) ;
	public void glGetConvolutionFilter (
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
	public void glGetConvolutionParameterfv (
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
	public void glGetConvolutionParameteriv (
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
	public void glSeparableFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		byte[] row,
		byte[] column
	) ;
	public void glSeparableFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		short[] row,
		short[] column
	) ;
	public void glSeparableFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		int[] row,
		int[] column
	) ;
	public void glSeparableFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		float[] row,
		float[] column
	) ;
	public void glSeparableFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		double[] row,
		double[] column
	) ;
	public void glSeparableFilter2D (
		int target,
		int internalformat,
		int width,
		int height,
		int format,
		int type,
		boolean[] row,
		boolean[] column
	) ;
	public void glSeparableFilter2D (
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
	public void glGetSeparableFilter (
		int target,
		int format,
		int type,
		byte[] row,
		byte[] column,
		byte[] span
	) ;
	public void glGetSeparableFilter (
		int target,
		int format,
		int type,
		short[] row,
		short[] column,
		short[] span
	) ;
	public void glGetSeparableFilter (
		int target,
		int format,
		int type,
		int[] row,
		int[] column,
		int[] span
	) ;
	public void glGetSeparableFilter (
		int target,
		int format,
		int type,
		float[] row,
		float[] column,
		float[] span
	) ;
	public void glGetSeparableFilter (
		int target,
		int format,
		int type,
		double[] row,
		double[] column,
		double[] span
	) ;
	public void glGetSeparableFilter (
		int target,
		int format,
		int type,
		boolean[] row,
		boolean[] column,
		boolean[] span
	) ;
	public void glGetSeparableFilter (
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
	public void glActiveTexture (
		int texture
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClientActiveTexture ( GLenum texture ) ;
 * </pre> 
 */
	public void glClientActiveTexture (
		int texture
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage1D ( GLenum target , GLint level , GLenum internalformat , GLsizei width , GLint border , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	public void glCompressedTexImage1D (
		int target,
		int level,
		int internalformat,
		int width,
		int border,
		int imageSize,
		byte[] data
	) ;
	public void glCompressedTexImage1D (
		int target,
		int level,
		int internalformat,
		int width,
		int border,
		int imageSize,
		short[] data
	) ;
	public void glCompressedTexImage1D (
		int target,
		int level,
		int internalformat,
		int width,
		int border,
		int imageSize,
		int[] data
	) ;
	public void glCompressedTexImage1D (
		int target,
		int level,
		int internalformat,
		int width,
		int border,
		int imageSize,
		float[] data
	) ;
	public void glCompressedTexImage1D (
		int target,
		int level,
		int internalformat,
		int width,
		int border,
		int imageSize,
		double[] data
	) ;
	public void glCompressedTexImage1D (
		int target,
		int level,
		int internalformat,
		int width,
		int border,
		int imageSize,
		boolean[] data
	) ;
	public void glCompressedTexImage1D (
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
	public void glCompressedTexImage2D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int border,
		int imageSize,
		byte[] data
	) ;
	public void glCompressedTexImage2D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int border,
		int imageSize,
		short[] data
	) ;
	public void glCompressedTexImage2D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int border,
		int imageSize,
		int[] data
	) ;
	public void glCompressedTexImage2D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int border,
		int imageSize,
		float[] data
	) ;
	public void glCompressedTexImage2D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int border,
		int imageSize,
		double[] data
	) ;
	public void glCompressedTexImage2D (
		int target,
		int level,
		int internalformat,
		int width,
		int height,
		int border,
		int imageSize,
		boolean[] data
	) ;
	public void glCompressedTexImage2D (
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
	public void glCompressedTexImage3D (
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
	public void glCompressedTexImage3D (
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
	public void glCompressedTexImage3D (
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
	public void glCompressedTexImage3D (
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
	public void glCompressedTexImage3D (
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
	public void glCompressedTexImage3D (
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
	public void glCompressedTexImage3D (
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
	public void glCompressedTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int imageSize,
		byte[] data
	) ;
	public void glCompressedTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int imageSize,
		short[] data
	) ;
	public void glCompressedTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int imageSize,
		int[] data
	) ;
	public void glCompressedTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int imageSize,
		float[] data
	) ;
	public void glCompressedTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int imageSize,
		double[] data
	) ;
	public void glCompressedTexSubImage1D (
		int target,
		int level,
		int xoffset,
		int width,
		int format,
		int imageSize,
		boolean[] data
	) ;
	public void glCompressedTexSubImage1D (
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
	public void glCompressedTexSubImage2D (
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
	public void glCompressedTexSubImage2D (
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
	public void glCompressedTexSubImage2D (
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
	public void glCompressedTexSubImage2D (
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
	public void glCompressedTexSubImage2D (
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
	public void glCompressedTexSubImage2D (
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
	public void glCompressedTexSubImage2D (
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
	public void glCompressedTexSubImage3D (
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
	public void glCompressedTexSubImage3D (
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
	public void glCompressedTexSubImage3D (
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
	public void glCompressedTexSubImage3D (
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
	public void glCompressedTexSubImage3D (
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
	public void glCompressedTexSubImage3D (
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
	public void glCompressedTexSubImage3D (
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
	public void glGetCompressedTexImage (
		int target,
		int lod,
		byte[] img
	) ;
	public void glGetCompressedTexImage (
		int target,
		int lod,
		short[] img
	) ;
	public void glGetCompressedTexImage (
		int target,
		int lod,
		int[] img
	) ;
	public void glGetCompressedTexImage (
		int target,
		int lod,
		float[] img
	) ;
	public void glGetCompressedTexImage (
		int target,
		int lod,
		double[] img
	) ;
	public void glGetCompressedTexImage (
		int target,
		int lod,
		boolean[] img
	) ;
	public void glGetCompressedTexImage (
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
	public void glMultiTexCoord1d (
		int target,
		double s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1dv ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	public void glMultiTexCoord1dv (
		int target,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1f ( GLenum target , GLfloat s ) ;
 * </pre> 
 */
	public void glMultiTexCoord1f (
		int target,
		float s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1fv ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	public void glMultiTexCoord1fv (
		int target,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1i ( GLenum target , GLint s ) ;
 * </pre> 
 */
	public void glMultiTexCoord1i (
		int target,
		int s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1iv ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	public void glMultiTexCoord1iv (
		int target,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1s ( GLenum target , GLshort s ) ;
 * </pre> 
 */
	public void glMultiTexCoord1s (
		int target,
		short s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1sv ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	public void glMultiTexCoord1sv (
		int target,
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2d ( GLenum target , GLdouble s , GLdouble t ) ;
 * </pre> 
 */
	public void glMultiTexCoord2d (
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
	public void glMultiTexCoord2dv (
		int target,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2f ( GLenum target , GLfloat s , GLfloat t ) ;
 * </pre> 
 */
	public void glMultiTexCoord2f (
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
	public void glMultiTexCoord2fv (
		int target,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2i ( GLenum target , GLint s , GLint t ) ;
 * </pre> 
 */
	public void glMultiTexCoord2i (
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
	public void glMultiTexCoord2iv (
		int target,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2s ( GLenum target , GLshort s , GLshort t ) ;
 * </pre> 
 */
	public void glMultiTexCoord2s (
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
	public void glMultiTexCoord2sv (
		int target,
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3d ( GLenum target , GLdouble s , GLdouble t , GLdouble r ) ;
 * </pre> 
 */
	public void glMultiTexCoord3d (
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
	public void glMultiTexCoord3dv (
		int target,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3f ( GLenum target , GLfloat s , GLfloat t , GLfloat r ) ;
 * </pre> 
 */
	public void glMultiTexCoord3f (
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
	public void glMultiTexCoord3fv (
		int target,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3i ( GLenum target , GLint s , GLint t , GLint r ) ;
 * </pre> 
 */
	public void glMultiTexCoord3i (
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
	public void glMultiTexCoord3iv (
		int target,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3s ( GLenum target , GLshort s , GLshort t , GLshort r ) ;
 * </pre> 
 */
	public void glMultiTexCoord3s (
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
	public void glMultiTexCoord3sv (
		int target,
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4d ( GLenum target , GLdouble s , GLdouble t , GLdouble r , GLdouble q ) ;
 * </pre> 
 */
	public void glMultiTexCoord4d (
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
	public void glMultiTexCoord4dv (
		int target,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4f ( GLenum target , GLfloat s , GLfloat t , GLfloat r , GLfloat q ) ;
 * </pre> 
 */
	public void glMultiTexCoord4f (
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
	public void glMultiTexCoord4fv (
		int target,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4i ( GLenum target , GLint s , GLint t , GLint r , GLint q ) ;
 * </pre> 
 */
	public void glMultiTexCoord4i (
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
	public void glMultiTexCoord4iv (
		int target,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4s ( GLenum target , GLshort s , GLshort t , GLshort r , GLshort q ) ;
 * </pre> 
 */
	public void glMultiTexCoord4s (
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
	public void glMultiTexCoord4sv (
		int target,
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadTransposeMatrixd ( const GLdouble m [ 16 ] ) ;
 * </pre> 
 */
	public void glLoadTransposeMatrixd (
		double[] m
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadTransposeMatrixf ( const GLfloat m [ 16 ] ) ;
 * </pre> 
 */
	public void glLoadTransposeMatrixf (
		float[] m
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultTransposeMatrixd ( const GLdouble m [ 16 ] ) ;
 * </pre> 
 */
	public void glMultTransposeMatrixd (
		double[] m
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultTransposeMatrixf ( const GLfloat m [ 16 ] ) ;
 * </pre> 
 */
	public void glMultTransposeMatrixf (
		float[] m
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleCoverage ( GLclampf value , GLboolean invert ) ;
 * </pre> 
 */
	public void glSampleCoverage (
		float value,
		boolean invert
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSamplePass ( GLenum pass ) ;
 * </pre> 
 */
	public void glSamplePass (
		int pass
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glActiveTextureARB ( GLenum texture ) ;
 * </pre> 
 */
	public void glActiveTextureARB (
		int texture
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClientActiveTextureARB ( GLenum texture ) ;
 * </pre> 
 */
	public void glClientActiveTextureARB (
		int texture
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1dARB ( GLenum target , GLdouble s ) ;
 * </pre> 
 */
	public void glMultiTexCoord1dARB (
		int target,
		double s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1dvARB ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	public void glMultiTexCoord1dvARB (
		int target,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1fARB ( GLenum target , GLfloat s ) ;
 * </pre> 
 */
	public void glMultiTexCoord1fARB (
		int target,
		float s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1fvARB ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	public void glMultiTexCoord1fvARB (
		int target,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1iARB ( GLenum target , GLint s ) ;
 * </pre> 
 */
	public void glMultiTexCoord1iARB (
		int target,
		int s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1ivARB ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	public void glMultiTexCoord1ivARB (
		int target,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1sARB ( GLenum target , GLshort s ) ;
 * </pre> 
 */
	public void glMultiTexCoord1sARB (
		int target,
		short s
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1svARB ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	public void glMultiTexCoord1svARB (
		int target,
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2dARB ( GLenum target , GLdouble s , GLdouble t ) ;
 * </pre> 
 */
	public void glMultiTexCoord2dARB (
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
	public void glMultiTexCoord2dvARB (
		int target,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2fARB ( GLenum target , GLfloat s , GLfloat t ) ;
 * </pre> 
 */
	public void glMultiTexCoord2fARB (
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
	public void glMultiTexCoord2fvARB (
		int target,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2iARB ( GLenum target , GLint s , GLint t ) ;
 * </pre> 
 */
	public void glMultiTexCoord2iARB (
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
	public void glMultiTexCoord2ivARB (
		int target,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2sARB ( GLenum target , GLshort s , GLshort t ) ;
 * </pre> 
 */
	public void glMultiTexCoord2sARB (
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
	public void glMultiTexCoord2svARB (
		int target,
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3dARB ( GLenum target , GLdouble s , GLdouble t , GLdouble r ) ;
 * </pre> 
 */
	public void glMultiTexCoord3dARB (
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
	public void glMultiTexCoord3dvARB (
		int target,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3fARB ( GLenum target , GLfloat s , GLfloat t , GLfloat r ) ;
 * </pre> 
 */
	public void glMultiTexCoord3fARB (
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
	public void glMultiTexCoord3fvARB (
		int target,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3iARB ( GLenum target , GLint s , GLint t , GLint r ) ;
 * </pre> 
 */
	public void glMultiTexCoord3iARB (
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
	public void glMultiTexCoord3ivARB (
		int target,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3sARB ( GLenum target , GLshort s , GLshort t , GLshort r ) ;
 * </pre> 
 */
	public void glMultiTexCoord3sARB (
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
	public void glMultiTexCoord3svARB (
		int target,
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4dARB ( GLenum target , GLdouble s , GLdouble t , GLdouble r , GLdouble q ) ;
 * </pre> 
 */
	public void glMultiTexCoord4dARB (
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
	public void glMultiTexCoord4dvARB (
		int target,
		double[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4fARB ( GLenum target , GLfloat s , GLfloat t , GLfloat r , GLfloat q ) ;
 * </pre> 
 */
	public void glMultiTexCoord4fARB (
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
	public void glMultiTexCoord4fvARB (
		int target,
		float[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4iARB ( GLenum target , GLint s , GLint t , GLint r , GLint q ) ;
 * </pre> 
 */
	public void glMultiTexCoord4iARB (
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
	public void glMultiTexCoord4ivARB (
		int target,
		int[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4sARB ( GLenum target , GLshort s , GLshort t , GLshort r , GLshort q ) ;
 * </pre> 
 */
	public void glMultiTexCoord4sARB (
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
	public void glMultiTexCoord4svARB (
		int target,
		short[] v
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendColorEXT ( GLclampf red , GLclampf green , GLclampf blue , GLclampf alpha ) ;
 * </pre> 
 */
	public void glBlendColorEXT (
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
	public void glPolygonOffsetEXT (
		float factor,
		float bias
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage3DEXT ( GLenum target , GLint level , GLenum internalFormat , GLsizei width , GLsizei height , GLsizei depth , GLint border , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	public void glTexImage3DEXT (
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
	public void glTexImage3DEXT (
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
	public void glTexImage3DEXT (
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
	public void glTexImage3DEXT (
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
	public void glTexImage3DEXT (
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
	public void glTexImage3DEXT (
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
	public void glTexImage3DEXT (
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
	public void glTexSubImage3DEXT (
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
	public void glTexSubImage3DEXT (
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
	public void glTexSubImage3DEXT (
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
	public void glTexSubImage3DEXT (
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
	public void glTexSubImage3DEXT (
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
	public void glTexSubImage3DEXT (
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
	public void glTexSubImage3DEXT (
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
	public void glCopyTexSubImage3DEXT (
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
	public void glGenTexturesEXT (
		int n,
		int[] textures
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteTexturesEXT ( GLsizei n , const GLuint * textures ) ;
 * </pre> 
 */
	public void glDeleteTexturesEXT (
		int n,
		int[] textures
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindTextureEXT ( GLenum target , GLuint texture ) ;
 * </pre> 
 */
	public void glBindTextureEXT (
		int target,
		int texture
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPrioritizeTexturesEXT ( GLsizei n , const GLuint * textures , const GLclampf * priorities ) ;
 * </pre> 
 */
	public void glPrioritizeTexturesEXT (
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
	public boolean glAreTexturesResidentEXT (
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
	public boolean glIsTextureEXT (
		int texture
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexPointerEXT ( GLint size , GLenum type , GLsizei stride , GLsizei count , const GLvoid * ptr ) ;
 * </pre> 
 */
	public void glVertexPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		byte[] ptr
	) ;
	public void glVertexPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		short[] ptr
	) ;
	public void glVertexPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		int[] ptr
	) ;
	public void glVertexPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		float[] ptr
	) ;
	public void glVertexPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		double[] ptr
	) ;
	public void glVertexPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		boolean[] ptr
	) ;
	public void glVertexPointerEXT (
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
	public void glNormalPointerEXT (
		int type,
		int stride,
		int count,
		byte[] ptr
	) ;
	public void glNormalPointerEXT (
		int type,
		int stride,
		int count,
		short[] ptr
	) ;
	public void glNormalPointerEXT (
		int type,
		int stride,
		int count,
		int[] ptr
	) ;
	public void glNormalPointerEXT (
		int type,
		int stride,
		int count,
		float[] ptr
	) ;
	public void glNormalPointerEXT (
		int type,
		int stride,
		int count,
		double[] ptr
	) ;
	public void glNormalPointerEXT (
		int type,
		int stride,
		int count,
		boolean[] ptr
	) ;
	public void glNormalPointerEXT (
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
	public void glColorPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		byte[] ptr
	) ;
	public void glColorPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		short[] ptr
	) ;
	public void glColorPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		int[] ptr
	) ;
	public void glColorPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		float[] ptr
	) ;
	public void glColorPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		double[] ptr
	) ;
	public void glColorPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		boolean[] ptr
	) ;
	public void glColorPointerEXT (
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
	public void glIndexPointerEXT (
		int type,
		int stride,
		int count,
		byte[] ptr
	) ;
	public void glIndexPointerEXT (
		int type,
		int stride,
		int count,
		short[] ptr
	) ;
	public void glIndexPointerEXT (
		int type,
		int stride,
		int count,
		int[] ptr
	) ;
	public void glIndexPointerEXT (
		int type,
		int stride,
		int count,
		float[] ptr
	) ;
	public void glIndexPointerEXT (
		int type,
		int stride,
		int count,
		double[] ptr
	) ;
	public void glIndexPointerEXT (
		int type,
		int stride,
		int count,
		boolean[] ptr
	) ;
	public void glIndexPointerEXT (
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
	public void glTexCoordPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		byte[] ptr
	) ;
	public void glTexCoordPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		short[] ptr
	) ;
	public void glTexCoordPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		int[] ptr
	) ;
	public void glTexCoordPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		float[] ptr
	) ;
	public void glTexCoordPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		double[] ptr
	) ;
	public void glTexCoordPointerEXT (
		int size,
		int type,
		int stride,
		int count,
		boolean[] ptr
	) ;
	public void glTexCoordPointerEXT (
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
	public void glEdgeFlagPointerEXT (
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
	public void glGetPointervEXT (
		int pname,
		byte[][] params
	) ;
	public void glGetPointervEXT (
		int pname,
		short[][] params
	) ;
	public void glGetPointervEXT (
		int pname,
		int[][] params
	) ;
	public void glGetPointervEXT (
		int pname,
		float[][] params
	) ;
	public void glGetPointervEXT (
		int pname,
		double[][] params
	) ;
	public void glGetPointervEXT (
		int pname,
		boolean[][] params
	) ;
	public void glGetPointervEXT (
		int pname,
		long[][] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glArrayElementEXT ( GLint i ) ;
 * </pre> 
 */
	public void glArrayElementEXT (
		int i
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawArraysEXT ( GLenum mode , GLint first , GLsizei count ) ;
 * </pre> 
 */
	public void glDrawArraysEXT (
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
	public void glBlendEquationEXT (
		int mode
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfEXT ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public void glPointParameterfEXT (
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfvEXT ( GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	public void glPointParameterfvEXT (
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfSGIS ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	public void glPointParameterfSGIS (
		int pname,
		float param
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfvSGIS ( GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	public void glPointParameterfvSGIS (
		int pname,
		float[] params
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableEXT ( GLenum target , GLenum internalformat , GLsizei width , GLenum format , GLenum type , const GLvoid * table ) ;
 * </pre> 
 */
	public void glColorTableEXT (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		byte[] table
	) ;
	public void glColorTableEXT (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		short[] table
	) ;
	public void glColorTableEXT (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		int[] table
	) ;
	public void glColorTableEXT (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		float[] table
	) ;
	public void glColorTableEXT (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		double[] table
	) ;
	public void glColorTableEXT (
		int target,
		int internalformat,
		int width,
		int format,
		int type,
		boolean[] table
	) ;
	public void glColorTableEXT (
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
	public void glColorSubTableEXT (
		int target,
		int start,
		int count,
		int format,
		int type,
		byte[] data
	) ;
	public void glColorSubTableEXT (
		int target,
		int start,
		int count,
		int format,
		int type,
		short[] data
	) ;
	public void glColorSubTableEXT (
		int target,
		int start,
		int count,
		int format,
		int type,
		int[] data
	) ;
	public void glColorSubTableEXT (
		int target,
		int start,
		int count,
		int format,
		int type,
		float[] data
	) ;
	public void glColorSubTableEXT (
		int target,
		int start,
		int count,
		int format,
		int type,
		double[] data
	) ;
	public void glColorSubTableEXT (
		int target,
		int start,
		int count,
		int format,
		int type,
		boolean[] data
	) ;
	public void glColorSubTableEXT (
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
	public void glGetColorTableEXT (
		int target,
		int format,
		int type,
		byte[] table
	) ;
	public void glGetColorTableEXT (
		int target,
		int format,
		int type,
		short[] table
	) ;
	public void glGetColorTableEXT (
		int target,
		int format,
		int type,
		int[] table
	) ;
	public void glGetColorTableEXT (
		int target,
		int format,
		int type,
		float[] table
	) ;
	public void glGetColorTableEXT (
		int target,
		int format,
		int type,
		double[] table
	) ;
	public void glGetColorTableEXT (
		int target,
		int format,
		int type,
		boolean[] table
	) ;
	public void glGetColorTableEXT (
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
	public void glGetColorTableParameterfvEXT (
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
	public void glGetColorTableParameterivEXT (
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
	public void glLockArraysEXT (
		int first,
		int count
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glUnlockArraysEXT ( void ) ;
 * </pre> 
 */
	public void glUnlockArraysEXT (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadTransposeMatrixfARB ( const GLfloat * ) ;
 * </pre> 
 */
	public void glLoadTransposeMatrixfARB (
		float[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadTransposeMatrixdARB ( const GLdouble * ) ;
 * </pre> 
 */
	public void glLoadTransposeMatrixdARB (
		double[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultTransposeMatrixfARB ( const GLfloat * ) ;
 * </pre> 
 */
	public void glMultTransposeMatrixfARB (
		float[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultTransposeMatrixdARB ( const GLdouble * ) ;
 * </pre> 
 */
	public void glMultTransposeMatrixdARB (
		double[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleCoverageARB ( GLclampf , GLboolean ) ;
 * </pre> 
 */
	public void glSampleCoverageARB (
		float arg0,
		boolean arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage3DARB ( GLenum , GLint , GLenum , GLsizei , GLsizei , GLsizei , GLint , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public void glCompressedTexImage3DARB (
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
	public void glCompressedTexImage3DARB (
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
	public void glCompressedTexImage3DARB (
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
	public void glCompressedTexImage3DARB (
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
	public void glCompressedTexImage3DARB (
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
	public void glCompressedTexImage3DARB (
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
	public void glCompressedTexImage3DARB (
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
	public void glCompressedTexImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		byte[] arg7
	) ;
	public void glCompressedTexImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		short[] arg7
	) ;
	public void glCompressedTexImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		int[] arg7
	) ;
	public void glCompressedTexImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		float[] arg7
	) ;
	public void glCompressedTexImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		double[] arg7
	) ;
	public void glCompressedTexImage2DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int arg6,
		boolean[] arg7
	) ;
	public void glCompressedTexImage2DARB (
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
	public void glCompressedTexImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		byte[] arg6
	) ;
	public void glCompressedTexImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		short[] arg6
	) ;
	public void glCompressedTexImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int[] arg6
	) ;
	public void glCompressedTexImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		float[] arg6
	) ;
	public void glCompressedTexImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		double[] arg6
	) ;
	public void glCompressedTexImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		boolean[] arg6
	) ;
	public void glCompressedTexImage1DARB (
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
	public void glCompressedTexSubImage3DARB (
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
	public void glCompressedTexSubImage3DARB (
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
	public void glCompressedTexSubImage3DARB (
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
	public void glCompressedTexSubImage3DARB (
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
	public void glCompressedTexSubImage3DARB (
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
	public void glCompressedTexSubImage3DARB (
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
	public void glCompressedTexSubImage3DARB (
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
	public void glCompressedTexSubImage2DARB (
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
	public void glCompressedTexSubImage2DARB (
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
	public void glCompressedTexSubImage2DARB (
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
	public void glCompressedTexSubImage2DARB (
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
	public void glCompressedTexSubImage2DARB (
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
	public void glCompressedTexSubImage2DARB (
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
	public void glCompressedTexSubImage2DARB (
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
	public void glCompressedTexSubImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		byte[] arg6
	) ;
	public void glCompressedTexSubImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		short[] arg6
	) ;
	public void glCompressedTexSubImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int[] arg6
	) ;
	public void glCompressedTexSubImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		float[] arg6
	) ;
	public void glCompressedTexSubImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		double[] arg6
	) ;
	public void glCompressedTexSubImage1DARB (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		boolean[] arg6
	) ;
	public void glCompressedTexSubImage1DARB (
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
	public void glGetCompressedTexImageARB (
		int arg0,
		int arg1,
		byte[] arg2
	) ;
	public void glGetCompressedTexImageARB (
		int arg0,
		int arg1,
		short[] arg2
	) ;
	public void glGetCompressedTexImageARB (
		int arg0,
		int arg1,
		int[] arg2
	) ;
	public void glGetCompressedTexImageARB (
		int arg0,
		int arg1,
		float[] arg2
	) ;
	public void glGetCompressedTexImageARB (
		int arg0,
		int arg1,
		double[] arg2
	) ;
	public void glGetCompressedTexImageARB (
		int arg0,
		int arg1,
		boolean[] arg2
	) ;
	public void glGetCompressedTexImageARB (
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
	public void glWeightbvARB (
		int arg0,
		byte[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightsvARB ( GLint , const GLshort * ) ;
 * </pre> 
 */
	public void glWeightsvARB (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightivARB ( GLint , const GLint * ) ;
 * </pre> 
 */
	public void glWeightivARB (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightfvARB ( GLint , const GLfloat * ) ;
 * </pre> 
 */
	public void glWeightfvARB (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightdvARB ( GLint , const GLdouble * ) ;
 * </pre> 
 */
	public void glWeightdvARB (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightubvARB ( GLint , const GLubyte * ) ;
 * </pre> 
 */
	public void glWeightubvARB (
		int arg0,
		byte[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightusvARB ( GLint , const GLushort * ) ;
 * </pre> 
 */
	public void glWeightusvARB (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightuivARB ( GLint , const GLuint * ) ;
 * </pre> 
 */
	public void glWeightuivARB (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightPointerARB ( GLint , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public void glWeightPointerARB (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3
	) ;
	public void glWeightPointerARB (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3
	) ;
	public void glWeightPointerARB (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;
	public void glWeightPointerARB (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;
	public void glWeightPointerARB (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3
	) ;
	public void glWeightPointerARB (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3
	) ;
	public void glWeightPointerARB (
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
	public void glVertexBlendARB (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCurrentPaletteMatrixARB ( GLint ) ;
 * </pre> 
 */
	public void glCurrentPaletteMatrixARB (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixIndexubvARB ( GLint , const GLubyte * ) ;
 * </pre> 
 */
	public void glMatrixIndexubvARB (
		int arg0,
		byte[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixIndexusvARB ( GLint , const GLushort * ) ;
 * </pre> 
 */
	public void glMatrixIndexusvARB (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixIndexuivARB ( GLint , const GLuint * ) ;
 * </pre> 
 */
	public void glMatrixIndexuivARB (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixIndexPointerARB ( GLint , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public void glMatrixIndexPointerARB (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3
	) ;
	public void glMatrixIndexPointerARB (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3
	) ;
	public void glMatrixIndexPointerARB (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;
	public void glMatrixIndexPointerARB (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;
	public void glMatrixIndexPointerARB (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3
	) ;
	public void glMatrixIndexPointerARB (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3
	) ;
	public void glMatrixIndexPointerARB (
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
	public void glGetTexFilterFuncSGIS (
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
	public void glTexFilterFuncSGIS (
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
	public void glTexSubImage1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		byte[] arg6
	) ;
	public void glTexSubImage1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		short[] arg6
	) ;
	public void glTexSubImage1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int[] arg6
	) ;
	public void glTexSubImage1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		float[] arg6
	) ;
	public void glTexSubImage1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		double[] arg6
	) ;
	public void glTexSubImage1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		boolean[] arg6
	) ;
	public void glTexSubImage1DEXT (
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
	public void glTexSubImage2DEXT (
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
	public void glTexSubImage2DEXT (
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
	public void glTexSubImage2DEXT (
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
	public void glTexSubImage2DEXT (
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
	public void glTexSubImage2DEXT (
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
	public void glTexSubImage2DEXT (
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
	public void glTexSubImage2DEXT (
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
	public void glCopyTexImage1DEXT (
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
	public void glCopyTexImage2DEXT (
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
	public void glCopyTexSubImage1DEXT (
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
	public void glCopyTexSubImage2DEXT (
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
	public void glGetHistogramEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		byte[] arg4
	) ;
	public void glGetHistogramEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		short[] arg4
	) ;
	public void glGetHistogramEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		int[] arg4
	) ;
	public void glGetHistogramEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		float[] arg4
	) ;
	public void glGetHistogramEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		double[] arg4
	) ;
	public void glGetHistogramEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		boolean[] arg4
	) ;
	public void glGetHistogramEXT (
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
	public void glGetHistogramParameterfvEXT (
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
	public void glGetHistogramParameterivEXT (
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
	public void glGetMinmaxEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		byte[] arg4
	) ;
	public void glGetMinmaxEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		short[] arg4
	) ;
	public void glGetMinmaxEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		int[] arg4
	) ;
	public void glGetMinmaxEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		float[] arg4
	) ;
	public void glGetMinmaxEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		double[] arg4
	) ;
	public void glGetMinmaxEXT (
		int arg0,
		boolean arg1,
		int arg2,
		int arg3,
		boolean[] arg4
	) ;
	public void glGetMinmaxEXT (
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
	public void glGetMinmaxParameterfvEXT (
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
	public void glGetMinmaxParameterivEXT (
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
	public void glHistogramEXT (
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
	public void glMinmaxEXT (
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
	public void glResetHistogramEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glResetMinmaxEXT ( GLenum ) ;
 * </pre> 
 */
	public void glResetMinmaxEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionFilter1DEXT ( GLenum , GLenum , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	public void glConvolutionFilter1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		byte[] arg5
	) ;
	public void glConvolutionFilter1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		short[] arg5
	) ;
	public void glConvolutionFilter1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int[] arg5
	) ;
	public void glConvolutionFilter1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		float[] arg5
	) ;
	public void glConvolutionFilter1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		double[] arg5
	) ;
	public void glConvolutionFilter1DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean[] arg5
	) ;
	public void glConvolutionFilter1DEXT (
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
	public void glConvolutionFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		byte[] arg6
	) ;
	public void glConvolutionFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		short[] arg6
	) ;
	public void glConvolutionFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int[] arg6
	) ;
	public void glConvolutionFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		float[] arg6
	) ;
	public void glConvolutionFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		double[] arg6
	) ;
	public void glConvolutionFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		boolean[] arg6
	) ;
	public void glConvolutionFilter2DEXT (
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
	public void glConvolutionParameterfEXT (
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
	public void glConvolutionParameterfvEXT (
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
	public void glConvolutionParameteriEXT (
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
	public void glConvolutionParameterivEXT (
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
	public void glCopyConvolutionFilter1DEXT (
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
	public void glCopyConvolutionFilter2DEXT (
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
	public void glGetConvolutionFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3
	) ;
	public void glGetConvolutionFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3
	) ;
	public void glGetConvolutionFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;
	public void glGetConvolutionFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;
	public void glGetConvolutionFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3
	) ;
	public void glGetConvolutionFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3
	) ;
	public void glGetConvolutionFilterEXT (
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
	public void glGetConvolutionParameterfvEXT (
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
	public void glGetConvolutionParameterivEXT (
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
	public void glGetSeparableFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3,
		byte[] arg4,
		byte[] arg5
	) ;
	public void glGetSeparableFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3,
		short[] arg4,
		short[] arg5
	) ;
	public void glGetSeparableFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3,
		int[] arg4,
		int[] arg5
	) ;
	public void glGetSeparableFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3,
		float[] arg4,
		float[] arg5
	) ;
	public void glGetSeparableFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3,
		double[] arg4,
		double[] arg5
	) ;
	public void glGetSeparableFilterEXT (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3,
		boolean[] arg4,
		boolean[] arg5
	) ;
	public void glGetSeparableFilterEXT (
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
	public void glSeparableFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		byte[] arg6,
		byte[] arg7
	) ;
	public void glSeparableFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		short[] arg6,
		short[] arg7
	) ;
	public void glSeparableFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		int[] arg6,
		int[] arg7
	) ;
	public void glSeparableFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		float[] arg6,
		float[] arg7
	) ;
	public void glSeparableFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		double[] arg6,
		double[] arg7
	) ;
	public void glSeparableFilter2DEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int arg5,
		boolean[] arg6,
		boolean[] arg7
	) ;
	public void glSeparableFilter2DEXT (
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
	public void glColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		byte[] arg5
	) ;
	public void glColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		short[] arg5
	) ;
	public void glColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int[] arg5
	) ;
	public void glColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		float[] arg5
	) ;
	public void glColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		double[] arg5
	) ;
	public void glColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean[] arg5
	) ;
	public void glColorTableSGI (
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
	public void glColorTableParameterfvSGI (
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
	public void glColorTableParameterivSGI (
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
	public void glCopyColorTableSGI (
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
	public void glGetColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3
	) ;
	public void glGetColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3
	) ;
	public void glGetColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;
	public void glGetColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;
	public void glGetColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3
	) ;
	public void glGetColorTableSGI (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3
	) ;
	public void glGetColorTableSGI (
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
	public void glGetColorTableParameterfvSGI (
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
	public void glGetColorTableParameterivSGI (
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
	public void glPixelTexGenSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenParameteriSGIS ( GLenum , GLint ) ;
 * </pre> 
 */
	public void glPixelTexGenParameteriSGIS (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenParameterivSGIS ( GLenum , const GLint * ) ;
 * </pre> 
 */
	public void glPixelTexGenParameterivSGIS (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenParameterfSGIS ( GLenum , GLfloat ) ;
 * </pre> 
 */
	public void glPixelTexGenParameterfSGIS (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenParameterfvSGIS ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public void glPixelTexGenParameterfvSGIS (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelTexGenParameterivSGIS ( GLenum , GLint * ) ;
 * </pre> 
 */
	public void glGetPixelTexGenParameterivSGIS (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelTexGenParameterfvSGIS ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	public void glGetPixelTexGenParameterfvSGIS (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage4DSGIS ( GLenum , GLint , GLenum , GLsizei , GLsizei , GLsizei , GLsizei , GLint , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	public void glTexImage4DSGIS (
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
	public void glTexImage4DSGIS (
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
	public void glTexImage4DSGIS (
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
	public void glTexImage4DSGIS (
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
	public void glTexImage4DSGIS (
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
	public void glTexImage4DSGIS (
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
	public void glTexImage4DSGIS (
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
	public void glTexSubImage4DSGIS (
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
	public void glTexSubImage4DSGIS (
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
	public void glTexSubImage4DSGIS (
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
	public void glTexSubImage4DSGIS (
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
	public void glTexSubImage4DSGIS (
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
	public void glTexSubImage4DSGIS (
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
	public void glTexSubImage4DSGIS (
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
	public void glDetailTexFuncSGIS (
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
	public void glGetDetailTexFuncSGIS (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSharpenTexFuncSGIS ( GLenum , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	public void glSharpenTexFuncSGIS (
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
	public void glGetSharpenTexFuncSGIS (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleMaskSGIS ( GLclampf , GLboolean ) ;
 * </pre> 
 */
	public void glSampleMaskSGIS (
		float arg0,
		boolean arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSamplePatternSGIS ( GLenum ) ;
 * </pre> 
 */
	public void glSamplePatternSGIS (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSpriteParameterfSGIX ( GLenum , GLfloat ) ;
 * </pre> 
 */
	public void glSpriteParameterfSGIX (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSpriteParameterfvSGIX ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public void glSpriteParameterfvSGIX (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSpriteParameteriSGIX ( GLenum , GLint ) ;
 * </pre> 
 */
	public void glSpriteParameteriSGIX (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSpriteParameterivSGIX ( GLenum , const GLint * ) ;
 * </pre> 
 */
	public void glSpriteParameterivSGIX (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfARB ( GLenum , GLfloat ) ;
 * </pre> 
 */
	public void glPointParameterfARB (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfvARB ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public void glPointParameterfvARB (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glGetInstrumentsSGIX ( void ) ;
 * </pre> 
 */
	public int glGetInstrumentsSGIX (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glInstrumentsBufferSGIX ( GLsizei , GLint * ) ;
 * </pre> 
 */
	public void glInstrumentsBufferSGIX (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glPollInstrumentsSGIX ( GLint * ) ;
 * </pre> 
 */
	public int glPollInstrumentsSGIX (
		int[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReadInstrumentsSGIX ( GLint ) ;
 * </pre> 
 */
	public void glReadInstrumentsSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStartInstrumentsSGIX ( void ) ;
 * </pre> 
 */
	public void glStartInstrumentsSGIX (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStopInstrumentsSGIX ( GLint ) ;
 * </pre> 
 */
	public void glStopInstrumentsSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFrameZoomSGIX ( GLint ) ;
 * </pre> 
 */
	public void glFrameZoomSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTagSampleBufferSGIX ( void ) ;
 * </pre> 
 */
	public void glTagSampleBufferSGIX (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeformationMap3dSGIX ( GLenum , GLdouble , GLdouble , GLint , GLint , GLdouble , GLdouble , GLint , GLint , GLdouble , GLdouble , GLint , GLint , const GLdouble * ) ;
 * </pre> 
 */
	public void glDeformationMap3dSGIX (
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
	public void glDeformationMap3fSGIX (
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
	public void glDeformSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadIdentityDeformationMapSGIX ( GLbitfield ) ;
 * </pre> 
 */
	public void glLoadIdentityDeformationMapSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReferencePlaneSGIX ( const GLdouble * ) ;
 * </pre> 
 */
	public void glReferencePlaneSGIX (
		double[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFlushRasterSGIX ( void ) ;
 * </pre> 
 */
	public void glFlushRasterSGIX (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogFuncSGIS ( GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	public void glFogFuncSGIS (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFogFuncSGIS ( GLfloat * ) ;
 * </pre> 
 */
	public void glGetFogFuncSGIS (
		float[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glImageTransformParameteriHP ( GLenum , GLenum , GLint ) ;
 * </pre> 
 */
	public void glImageTransformParameteriHP (
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
	public void glImageTransformParameterfHP (
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
	public void glImageTransformParameterivHP (
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
	public void glImageTransformParameterfvHP (
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
	public void glGetImageTransformParameterivHP (
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
	public void glGetImageTransformParameterfvHP (
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
	public void glCopyColorSubTableEXT (
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
	public void glHintPGI (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetListParameterfvSGIX ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public void glGetListParameterfvSGIX (
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
	public void glGetListParameterivSGIX (
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
	public void glListParameterfSGIX (
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
	public void glListParameterfvSGIX (
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
	public void glListParameteriSGIX (
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
	public void glListParameterivSGIX (
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
	public void glIndexMaterialEXT (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexFuncEXT ( GLenum , GLclampf ) ;
 * </pre> 
 */
	public void glIndexFuncEXT (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCullParameterdvEXT ( GLenum , GLdouble * ) ;
 * </pre> 
 */
	public void glCullParameterdvEXT (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCullParameterfvEXT ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	public void glCullParameterfvEXT (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentColorMaterialSGIX ( GLenum , GLenum ) ;
 * </pre> 
 */
	public void glFragmentColorMaterialSGIX (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightfSGIX ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	public void glFragmentLightfSGIX (
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
	public void glFragmentLightfvSGIX (
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
	public void glFragmentLightiSGIX (
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
	public void glFragmentLightivSGIX (
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
	public void glFragmentLightModelfSGIX (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightModelfvSGIX ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public void glFragmentLightModelfvSGIX (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightModeliSGIX ( GLenum , GLint ) ;
 * </pre> 
 */
	public void glFragmentLightModeliSGIX (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightModelivSGIX ( GLenum , const GLint * ) ;
 * </pre> 
 */
	public void glFragmentLightModelivSGIX (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentMaterialfSGIX ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	public void glFragmentMaterialfSGIX (
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
	public void glFragmentMaterialfvSGIX (
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
	public void glFragmentMaterialiSGIX (
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
	public void glFragmentMaterialivSGIX (
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
	public void glGetFragmentLightfvSGIX (
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
	public void glGetFragmentLightivSGIX (
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
	public void glGetFragmentMaterialfvSGIX (
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
	public void glGetFragmentMaterialivSGIX (
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
	public void glLightEnviSGIX (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawRangeElementsEXT ( GLenum , GLuint , GLuint , GLsizei , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	public void glDrawRangeElementsEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		byte[] arg5
	) ;
	public void glDrawRangeElementsEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		short[] arg5
	) ;
	public void glDrawRangeElementsEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		int[] arg5
	) ;
	public void glDrawRangeElementsEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		float[] arg5
	) ;
	public void glDrawRangeElementsEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		double[] arg5
	) ;
	public void glDrawRangeElementsEXT (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean[] arg5
	) ;
	public void glDrawRangeElementsEXT (
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
	public void glApplyTextureEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTextureLightEXT ( GLenum ) ;
 * </pre> 
 */
	public void glTextureLightEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTextureMaterialEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	public void glTextureMaterialEXT (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAsyncMarkerSGIX ( GLuint ) ;
 * </pre> 
 */
	public void glAsyncMarkerSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glFinishAsyncSGIX ( GLuint * ) ;
 * </pre> 
 */
	public int glFinishAsyncSGIX (
		int[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glPollAsyncSGIX ( GLuint * ) ;
 * </pre> 
 */
	public int glPollAsyncSGIX (
		int[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenAsyncMarkersSGIX ( GLsizei ) ;
 * </pre> 
 */
	public int glGenAsyncMarkersSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteAsyncMarkersSGIX ( GLuint , GLsizei ) ;
 * </pre> 
 */
	public void glDeleteAsyncMarkersSGIX (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsAsyncMarkerSGIX ( GLuint ) ;
 * </pre> 
 */
	public boolean glIsAsyncMarkerSGIX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexPointervINTEL ( GLint , GLenum , const GLvoid * * ) ;
 * </pre> 
 */
	public void glVertexPointervINTEL (
		int arg0,
		int arg1,
		byte[][] arg2
	) ;
	public void glVertexPointervINTEL (
		int arg0,
		int arg1,
		short[][] arg2
	) ;
	public void glVertexPointervINTEL (
		int arg0,
		int arg1,
		int[][] arg2
	) ;
	public void glVertexPointervINTEL (
		int arg0,
		int arg1,
		float[][] arg2
	) ;
	public void glVertexPointervINTEL (
		int arg0,
		int arg1,
		double[][] arg2
	) ;
	public void glVertexPointervINTEL (
		int arg0,
		int arg1,
		boolean[][] arg2
	) ;
	public void glVertexPointervINTEL (
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
	public void glNormalPointervINTEL (
		int arg0,
		byte[][] arg1
	) ;
	public void glNormalPointervINTEL (
		int arg0,
		short[][] arg1
	) ;
	public void glNormalPointervINTEL (
		int arg0,
		int[][] arg1
	) ;
	public void glNormalPointervINTEL (
		int arg0,
		float[][] arg1
	) ;
	public void glNormalPointervINTEL (
		int arg0,
		double[][] arg1
	) ;
	public void glNormalPointervINTEL (
		int arg0,
		boolean[][] arg1
	) ;
	public void glNormalPointervINTEL (
		int arg0,
		long[][] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorPointervINTEL ( GLint , GLenum , const GLvoid * * ) ;
 * </pre> 
 */
	public void glColorPointervINTEL (
		int arg0,
		int arg1,
		byte[][] arg2
	) ;
	public void glColorPointervINTEL (
		int arg0,
		int arg1,
		short[][] arg2
	) ;
	public void glColorPointervINTEL (
		int arg0,
		int arg1,
		int[][] arg2
	) ;
	public void glColorPointervINTEL (
		int arg0,
		int arg1,
		float[][] arg2
	) ;
	public void glColorPointervINTEL (
		int arg0,
		int arg1,
		double[][] arg2
	) ;
	public void glColorPointervINTEL (
		int arg0,
		int arg1,
		boolean[][] arg2
	) ;
	public void glColorPointervINTEL (
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
	public void glTexCoordPointervINTEL (
		int arg0,
		int arg1,
		byte[][] arg2
	) ;
	public void glTexCoordPointervINTEL (
		int arg0,
		int arg1,
		short[][] arg2
	) ;
	public void glTexCoordPointervINTEL (
		int arg0,
		int arg1,
		int[][] arg2
	) ;
	public void glTexCoordPointervINTEL (
		int arg0,
		int arg1,
		float[][] arg2
	) ;
	public void glTexCoordPointervINTEL (
		int arg0,
		int arg1,
		double[][] arg2
	) ;
	public void glTexCoordPointervINTEL (
		int arg0,
		int arg1,
		boolean[][] arg2
	) ;
	public void glTexCoordPointervINTEL (
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
	public void glPixelTransformParameteriEXT (
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
	public void glPixelTransformParameterfEXT (
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
	public void glPixelTransformParameterivEXT (
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
	public void glPixelTransformParameterfvEXT (
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
	public void glSecondaryColor3bEXT (
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
	public void glSecondaryColor3bvEXT (
		byte[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3dEXT ( GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public void glSecondaryColor3dEXT (
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
	public void glSecondaryColor3dvEXT (
		double[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3fEXT ( GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public void glSecondaryColor3fEXT (
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
	public void glSecondaryColor3fvEXT (
		float[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3iEXT ( GLint , GLint , GLint ) ;
 * </pre> 
 */
	public void glSecondaryColor3iEXT (
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
	public void glSecondaryColor3ivEXT (
		int[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3sEXT ( GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	public void glSecondaryColor3sEXT (
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
	public void glSecondaryColor3svEXT (
		short[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3ubEXT ( GLubyte , GLubyte , GLubyte ) ;
 * </pre> 
 */
	public void glSecondaryColor3ubEXT (
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
	public void glSecondaryColor3ubvEXT (
		byte[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3uiEXT ( GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	public void glSecondaryColor3uiEXT (
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
	public void glSecondaryColor3uivEXT (
		int[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3usEXT ( GLushort , GLushort , GLushort ) ;
 * </pre> 
 */
	public void glSecondaryColor3usEXT (
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
	public void glSecondaryColor3usvEXT (
		short[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColorPointerEXT ( GLint , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public void glSecondaryColorPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3
	) ;
	public void glSecondaryColorPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3
	) ;
	public void glSecondaryColorPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;
	public void glSecondaryColorPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;
	public void glSecondaryColorPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3
	) ;
	public void glSecondaryColorPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3
	) ;
	public void glSecondaryColorPointerEXT (
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
	public void glTextureNormalEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiDrawArraysEXT ( GLenum , GLint * , GLsizei * , GLsizei ) ;
 * </pre> 
 */
	public void glMultiDrawArraysEXT (
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
	public void glMultiDrawElementsEXT (
		int arg0,
		int[] arg1,
		int arg2,
		byte[][] arg3,
		int arg4
	) ;
	public void glMultiDrawElementsEXT (
		int arg0,
		int[] arg1,
		int arg2,
		short[][] arg3,
		int arg4
	) ;
	public void glMultiDrawElementsEXT (
		int arg0,
		int[] arg1,
		int arg2,
		int[][] arg3,
		int arg4
	) ;
	public void glMultiDrawElementsEXT (
		int arg0,
		int[] arg1,
		int arg2,
		float[][] arg3,
		int arg4
	) ;
	public void glMultiDrawElementsEXT (
		int arg0,
		int[] arg1,
		int arg2,
		double[][] arg3,
		int arg4
	) ;
	public void glMultiDrawElementsEXT (
		int arg0,
		int[] arg1,
		int arg2,
		boolean[][] arg3,
		int arg4
	) ;
	public void glMultiDrawElementsEXT (
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
	public void glFogCoordfEXT (
		float arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoordfvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	public void glFogCoordfvEXT (
		float[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoorddEXT ( GLdouble ) ;
 * </pre> 
 */
	public void glFogCoorddEXT (
		double arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoorddvEXT ( const GLdouble * ) ;
 * </pre> 
 */
	public void glFogCoorddvEXT (
		double[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoordPointerEXT ( GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public void glFogCoordPointerEXT (
		int arg0,
		int arg1,
		byte[] arg2
	) ;
	public void glFogCoordPointerEXT (
		int arg0,
		int arg1,
		short[] arg2
	) ;
	public void glFogCoordPointerEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;
	public void glFogCoordPointerEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;
	public void glFogCoordPointerEXT (
		int arg0,
		int arg1,
		double[] arg2
	) ;
	public void glFogCoordPointerEXT (
		int arg0,
		int arg1,
		boolean[] arg2
	) ;
	public void glFogCoordPointerEXT (
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
	public void glTangent3bEXT (
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
	public void glTangent3bvEXT (
		byte[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3dEXT ( GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public void glTangent3dEXT (
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
	public void glTangent3dvEXT (
		double[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3fEXT ( GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public void glTangent3fEXT (
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
	public void glTangent3fvEXT (
		float[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3iEXT ( GLint , GLint , GLint ) ;
 * </pre> 
 */
	public void glTangent3iEXT (
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
	public void glTangent3ivEXT (
		int[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3sEXT ( GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	public void glTangent3sEXT (
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
	public void glTangent3svEXT (
		short[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3bEXT ( GLbyte , GLbyte , GLbyte ) ;
 * </pre> 
 */
	public void glBinormal3bEXT (
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
	public void glBinormal3bvEXT (
		byte[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3dEXT ( GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public void glBinormal3dEXT (
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
	public void glBinormal3dvEXT (
		double[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3fEXT ( GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public void glBinormal3fEXT (
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
	public void glBinormal3fvEXT (
		float[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3iEXT ( GLint , GLint , GLint ) ;
 * </pre> 
 */
	public void glBinormal3iEXT (
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
	public void glBinormal3ivEXT (
		int[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3sEXT ( GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	public void glBinormal3sEXT (
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
	public void glBinormal3svEXT (
		short[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangentPointerEXT ( GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public void glTangentPointerEXT (
		int arg0,
		int arg1,
		byte[] arg2
	) ;
	public void glTangentPointerEXT (
		int arg0,
		int arg1,
		short[] arg2
	) ;
	public void glTangentPointerEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;
	public void glTangentPointerEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;
	public void glTangentPointerEXT (
		int arg0,
		int arg1,
		double[] arg2
	) ;
	public void glTangentPointerEXT (
		int arg0,
		int arg1,
		boolean[] arg2
	) ;
	public void glTangentPointerEXT (
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
	public void glBinormalPointerEXT (
		int arg0,
		int arg1,
		byte[] arg2
	) ;
	public void glBinormalPointerEXT (
		int arg0,
		int arg1,
		short[] arg2
	) ;
	public void glBinormalPointerEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;
	public void glBinormalPointerEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;
	public void glBinormalPointerEXT (
		int arg0,
		int arg1,
		double[] arg2
	) ;
	public void glBinormalPointerEXT (
		int arg0,
		int arg1,
		boolean[] arg2
	) ;
	public void glBinormalPointerEXT (
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
	public void glFinishTextureSUNX (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorbSUN ( GLbyte ) ;
 * </pre> 
 */
	public void glGlobalAlphaFactorbSUN (
		byte arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorsSUN ( GLshort ) ;
 * </pre> 
 */
	public void glGlobalAlphaFactorsSUN (
		short arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactoriSUN ( GLint ) ;
 * </pre> 
 */
	public void glGlobalAlphaFactoriSUN (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorfSUN ( GLfloat ) ;
 * </pre> 
 */
	public void glGlobalAlphaFactorfSUN (
		float arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactordSUN ( GLdouble ) ;
 * </pre> 
 */
	public void glGlobalAlphaFactordSUN (
		double arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorubSUN ( GLubyte ) ;
 * </pre> 
 */
	public void glGlobalAlphaFactorubSUN (
		byte arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorusSUN ( GLushort ) ;
 * </pre> 
 */
	public void glGlobalAlphaFactorusSUN (
		short arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactoruiSUN ( GLuint ) ;
 * </pre> 
 */
	public void glGlobalAlphaFactoruiSUN (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiSUN ( GLuint ) ;
 * </pre> 
 */
	public void glReplacementCodeuiSUN (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeusSUN ( GLushort ) ;
 * </pre> 
 */
	public void glReplacementCodeusSUN (
		short arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeubSUN ( GLubyte ) ;
 * </pre> 
 */
	public void glReplacementCodeubSUN (
		byte arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuivSUN ( const GLuint * ) ;
 * </pre> 
 */
	public void glReplacementCodeuivSUN (
		int[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeusvSUN ( const GLushort * ) ;
 * </pre> 
 */
	public void glReplacementCodeusvSUN (
		short[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeubvSUN ( const GLubyte * ) ;
 * </pre> 
 */
	public void glReplacementCodeubvSUN (
		byte[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodePointerSUN ( GLenum , GLsizei , const GLvoid * * ) ;
 * </pre> 
 */
	public void glReplacementCodePointerSUN (
		int arg0,
		int arg1,
		byte[][] arg2
	) ;
	public void glReplacementCodePointerSUN (
		int arg0,
		int arg1,
		short[][] arg2
	) ;
	public void glReplacementCodePointerSUN (
		int arg0,
		int arg1,
		int[][] arg2
	) ;
	public void glReplacementCodePointerSUN (
		int arg0,
		int arg1,
		float[][] arg2
	) ;
	public void glReplacementCodePointerSUN (
		int arg0,
		int arg1,
		double[][] arg2
	) ;
	public void glReplacementCodePointerSUN (
		int arg0,
		int arg1,
		boolean[][] arg2
	) ;
	public void glReplacementCodePointerSUN (
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
	public void glColor4ubVertex2fSUN (
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
	public void glColor4ubVertex2fvSUN (
		byte[] arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubVertex3fSUN ( GLubyte , GLubyte , GLubyte , GLubyte , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public void glColor4ubVertex3fSUN (
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
	public void glColor4ubVertex3fvSUN (
		byte[] arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public void glColor3fVertex3fSUN (
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
	public void glColor3fVertex3fvSUN (
		float[] arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public void glNormal3fVertex3fSUN (
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
	public void glNormal3fVertex3fvSUN (
		float[] arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4fNormal3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public void glColor4fNormal3fVertex3fSUN (
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
	public void glColor4fNormal3fVertex3fvSUN (
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
	public void glTexCoord2fVertex3fSUN (
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
	public void glTexCoord2fVertex3fvSUN (
		float[] arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fVertex4fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public void glTexCoord4fVertex4fSUN (
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
	public void glTexCoord4fVertex4fvSUN (
		float[] arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor4ubVertex3fSUN ( GLfloat , GLfloat , GLubyte , GLubyte , GLubyte , GLubyte , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public void glTexCoord2fColor4ubVertex3fSUN (
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
	public void glTexCoord2fColor4ubVertex3fvSUN (
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
	public void glTexCoord2fColor3fVertex3fSUN (
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
	public void glTexCoord2fColor3fVertex3fvSUN (
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
	public void glTexCoord2fNormal3fVertex3fSUN (
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
	public void glTexCoord2fNormal3fVertex3fvSUN (
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
	public void glTexCoord2fColor4fNormal3fVertex3fSUN (
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
	public void glTexCoord2fColor4fNormal3fVertex3fvSUN (
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
	public void glTexCoord4fColor4fNormal3fVertex4fSUN (
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
	public void glTexCoord4fColor4fNormal3fVertex4fvSUN (
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
	public void glReplacementCodeuiVertex3fSUN (
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
	public void glReplacementCodeuiVertex3fvSUN (
		int[] arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor4ubVertex3fSUN ( GLenum , GLubyte , GLubyte , GLubyte , GLubyte , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public void glReplacementCodeuiColor4ubVertex3fSUN (
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
	public void glReplacementCodeuiColor4ubVertex3fvSUN (
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
	public void glReplacementCodeuiColor3fVertex3fSUN (
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
	public void glReplacementCodeuiColor3fVertex3fvSUN (
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
	public void glReplacementCodeuiNormal3fVertex3fSUN (
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
	public void glReplacementCodeuiNormal3fVertex3fvSUN (
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
	public void glReplacementCodeuiColor4fNormal3fVertex3fSUN (
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
	public void glReplacementCodeuiColor4fNormal3fVertex3fvSUN (
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
	public void glReplacementCodeuiTexCoord2fVertex3fSUN (
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
	public void glReplacementCodeuiTexCoord2fVertex3fvSUN (
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
	public void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN (
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
	public void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN (
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
	public void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN (
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
	public void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN (
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
	public void glBlendFuncSeparateEXT (
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
	public void glBlendFuncSeparateINGR (
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
	public void glVertexWeightfEXT (
		float arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexWeightfvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	public void glVertexWeightfvEXT (
		float[] arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexWeightPointerEXT ( GLsizei , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public void glVertexWeightPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3
	) ;
	public void glVertexWeightPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3
	) ;
	public void glVertexWeightPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;
	public void glVertexWeightPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;
	public void glVertexWeightPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3
	) ;
	public void glVertexWeightPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3
	) ;
	public void glVertexWeightPointerEXT (
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
	public void glFlushVertexArrayRangeNV (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexArrayRangeNV ( GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	public void glVertexArrayRangeNV (
		int arg0,
		byte[] arg1
	) ;
	public void glVertexArrayRangeNV (
		int arg0,
		short[] arg1
	) ;
	public void glVertexArrayRangeNV (
		int arg0,
		int[] arg1
	) ;
	public void glVertexArrayRangeNV (
		int arg0,
		float[] arg1
	) ;
	public void glVertexArrayRangeNV (
		int arg0,
		double[] arg1
	) ;
	public void glVertexArrayRangeNV (
		int arg0,
		boolean[] arg1
	) ;
	public void glVertexArrayRangeNV (
		int arg0,
		long[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerParameterfvNV ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public void glCombinerParameterfvNV (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerParameterfNV ( GLenum , GLfloat ) ;
 * </pre> 
 */
	public void glCombinerParameterfNV (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerParameterivNV ( GLenum , const GLint * ) ;
 * </pre> 
 */
	public void glCombinerParameterivNV (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerParameteriNV ( GLenum , GLint ) ;
 * </pre> 
 */
	public void glCombinerParameteriNV (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerInputNV ( GLenum , GLenum , GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	public void glCombinerInputNV (
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
	public void glCombinerOutputNV (
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
	public void glFinalCombinerInputNV (
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
	public void glGetCombinerInputParameterfvNV (
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
	public void glGetCombinerInputParameterivNV (
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
	public void glGetCombinerOutputParameterfvNV (
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
	public void glGetCombinerOutputParameterivNV (
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
	public void glGetFinalCombinerInputParameterfvNV (
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
	public void glGetFinalCombinerInputParameterivNV (
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
	public void glMultiModeDrawArraysIBM (
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
	public void glMultiModeDrawElementsIBM (
		int[] arg0,
		int[] arg1,
		int arg2,
		byte[][] arg3,
		int arg4,
		int arg5
	) ;
	public void glMultiModeDrawElementsIBM (
		int[] arg0,
		int[] arg1,
		int arg2,
		short[][] arg3,
		int arg4,
		int arg5
	) ;
	public void glMultiModeDrawElementsIBM (
		int[] arg0,
		int[] arg1,
		int arg2,
		int[][] arg3,
		int arg4,
		int arg5
	) ;
	public void glMultiModeDrawElementsIBM (
		int[] arg0,
		int[] arg1,
		int arg2,
		float[][] arg3,
		int arg4,
		int arg5
	) ;
	public void glMultiModeDrawElementsIBM (
		int[] arg0,
		int[] arg1,
		int arg2,
		double[][] arg3,
		int arg4,
		int arg5
	) ;
	public void glMultiModeDrawElementsIBM (
		int[] arg0,
		int[] arg1,
		int arg2,
		boolean[][] arg3,
		int arg4,
		int arg5
	) ;
	public void glMultiModeDrawElementsIBM (
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
	public void glColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		byte[][] arg3,
		int arg4
	) ;
	public void glColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		short[][] arg3,
		int arg4
	) ;
	public void glColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		int[][] arg3,
		int arg4
	) ;
	public void glColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		float[][] arg3,
		int arg4
	) ;
	public void glColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		double[][] arg3,
		int arg4
	) ;
	public void glColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		boolean[][] arg3,
		int arg4
	) ;
	public void glColorPointerListIBM (
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
	public void glSecondaryColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		byte[][] arg3,
		int arg4
	) ;
	public void glSecondaryColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		short[][] arg3,
		int arg4
	) ;
	public void glSecondaryColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		int[][] arg3,
		int arg4
	) ;
	public void glSecondaryColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		float[][] arg3,
		int arg4
	) ;
	public void glSecondaryColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		double[][] arg3,
		int arg4
	) ;
	public void glSecondaryColorPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		boolean[][] arg3,
		int arg4
	) ;
	public void glSecondaryColorPointerListIBM (
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
	public void glEdgeFlagPointerListIBM (
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
	public void glFogCoordPointerListIBM (
		int arg0,
		int arg1,
		byte[][] arg2,
		int arg3
	) ;
	public void glFogCoordPointerListIBM (
		int arg0,
		int arg1,
		short[][] arg2,
		int arg3
	) ;
	public void glFogCoordPointerListIBM (
		int arg0,
		int arg1,
		int[][] arg2,
		int arg3
	) ;
	public void glFogCoordPointerListIBM (
		int arg0,
		int arg1,
		float[][] arg2,
		int arg3
	) ;
	public void glFogCoordPointerListIBM (
		int arg0,
		int arg1,
		double[][] arg2,
		int arg3
	) ;
	public void glFogCoordPointerListIBM (
		int arg0,
		int arg1,
		boolean[][] arg2,
		int arg3
	) ;
	public void glFogCoordPointerListIBM (
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
	public void glIndexPointerListIBM (
		int arg0,
		int arg1,
		byte[][] arg2,
		int arg3
	) ;
	public void glIndexPointerListIBM (
		int arg0,
		int arg1,
		short[][] arg2,
		int arg3
	) ;
	public void glIndexPointerListIBM (
		int arg0,
		int arg1,
		int[][] arg2,
		int arg3
	) ;
	public void glIndexPointerListIBM (
		int arg0,
		int arg1,
		float[][] arg2,
		int arg3
	) ;
	public void glIndexPointerListIBM (
		int arg0,
		int arg1,
		double[][] arg2,
		int arg3
	) ;
	public void glIndexPointerListIBM (
		int arg0,
		int arg1,
		boolean[][] arg2,
		int arg3
	) ;
	public void glIndexPointerListIBM (
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
	public void glNormalPointerListIBM (
		int arg0,
		int arg1,
		byte[][] arg2,
		int arg3
	) ;
	public void glNormalPointerListIBM (
		int arg0,
		int arg1,
		short[][] arg2,
		int arg3
	) ;
	public void glNormalPointerListIBM (
		int arg0,
		int arg1,
		int[][] arg2,
		int arg3
	) ;
	public void glNormalPointerListIBM (
		int arg0,
		int arg1,
		float[][] arg2,
		int arg3
	) ;
	public void glNormalPointerListIBM (
		int arg0,
		int arg1,
		double[][] arg2,
		int arg3
	) ;
	public void glNormalPointerListIBM (
		int arg0,
		int arg1,
		boolean[][] arg2,
		int arg3
	) ;
	public void glNormalPointerListIBM (
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
	public void glTexCoordPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		byte[][] arg3,
		int arg4
	) ;
	public void glTexCoordPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		short[][] arg3,
		int arg4
	) ;
	public void glTexCoordPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		int[][] arg3,
		int arg4
	) ;
	public void glTexCoordPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		float[][] arg3,
		int arg4
	) ;
	public void glTexCoordPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		double[][] arg3,
		int arg4
	) ;
	public void glTexCoordPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		boolean[][] arg3,
		int arg4
	) ;
	public void glTexCoordPointerListIBM (
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
	public void glVertexPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		byte[][] arg3,
		int arg4
	) ;
	public void glVertexPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		short[][] arg3,
		int arg4
	) ;
	public void glVertexPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		int[][] arg3,
		int arg4
	) ;
	public void glVertexPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		float[][] arg3,
		int arg4
	) ;
	public void glVertexPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		double[][] arg3,
		int arg4
	) ;
	public void glVertexPointerListIBM (
		int arg0,
		int arg1,
		int arg2,
		boolean[][] arg3,
		int arg4
	) ;
	public void glVertexPointerListIBM (
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
	public void glTbufferMask3DFX (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleMaskEXT ( GLclampf , GLboolean ) ;
 * </pre> 
 */
	public void glSampleMaskEXT (
		float arg0,
		boolean arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSamplePatternEXT ( GLenum ) ;
 * </pre> 
 */
	public void glSamplePatternEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTextureColorMaskSGIS ( GLboolean , GLboolean , GLboolean , GLboolean ) ;
 * </pre> 
 */
	public void glTextureColorMaskSGIS (
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
	public void glIglooInterfaceSGIX (
		int arg0,
		byte[] arg1
	) ;
	public void glIglooInterfaceSGIX (
		int arg0,
		short[] arg1
	) ;
	public void glIglooInterfaceSGIX (
		int arg0,
		int[] arg1
	) ;
	public void glIglooInterfaceSGIX (
		int arg0,
		float[] arg1
	) ;
	public void glIglooInterfaceSGIX (
		int arg0,
		double[] arg1
	) ;
	public void glIglooInterfaceSGIX (
		int arg0,
		boolean[] arg1
	) ;
	public void glIglooInterfaceSGIX (
		int arg0,
		long[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGenFencesNV ( GLsizei , GLuint * ) ;
 * </pre> 
 */
	public void glGenFencesNV (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteFencesNV ( GLsizei , const GLuint * ) ;
 * </pre> 
 */
	public void glDeleteFencesNV (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSetFenceNV ( GLuint , GLenum ) ;
 * </pre> 
 */
	public void glSetFenceNV (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glTestFenceNV ( GLuint ) ;
 * </pre> 
 */
	public boolean glTestFenceNV (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFinishFenceNV ( GLuint ) ;
 * </pre> 
 */
	public void glFinishFenceNV (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsFenceNV ( GLuint ) ;
 * </pre> 
 */
	public boolean glIsFenceNV (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFenceivNV ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	public void glGetFenceivNV (
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
	public void glMapControlPointsNV (
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
	public void glMapControlPointsNV (
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
	public void glMapControlPointsNV (
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
	public void glMapControlPointsNV (
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
	public void glMapControlPointsNV (
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
	public void glMapControlPointsNV (
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
	public void glMapControlPointsNV (
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
	public void glMapParameterivNV (
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
	public void glMapParameterfvNV (
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
	public void glGetMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean arg5,
		byte[] arg6
	) ;
	public void glGetMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean arg5,
		short[] arg6
	) ;
	public void glGetMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean arg5,
		int[] arg6
	) ;
	public void glGetMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean arg5,
		float[] arg6
	) ;
	public void glGetMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean arg5,
		double[] arg6
	) ;
	public void glGetMapControlPointsNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int arg4,
		boolean arg5,
		boolean[] arg6
	) ;
	public void glGetMapControlPointsNV (
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
	public void glGetMapParameterivNV (
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
	public void glGetMapParameterfvNV (
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
	public void glGetMapAttribParameterivNV (
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
	public void glGetMapAttribParameterfvNV (
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
	public void glEvalMapsNV (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerStageParameterfvNV ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public void glCombinerStageParameterfvNV (
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
	public void glGetCombinerStageParameterfvNV (
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
	public void glBindProgramNV (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteProgramsNV ( GLsizei , const GLuint * ) ;
 * </pre> 
 */
	public void glDeleteProgramsNV (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glExecuteProgramNV ( GLenum , GLuint , const GLfloat * ) ;
 * </pre> 
 */
	public void glExecuteProgramNV (
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
	public void glGenProgramsNV (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glAreProgramsResidentNV ( GLsizei , const GLuint * , GLboolean * ) ;
 * </pre> 
 */
	public boolean glAreProgramsResidentNV (
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
	public void glRequestResidentProgramsNV (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetProgramParameterfvNV ( GLenum , GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	public void glGetProgramParameterfvNV (
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
	public void glGetProgramParameterdvNV (
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
	public void glGetProgramivNV (
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
	public void glGetProgramStringNV (
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
	public void glGetTrackMatrixivNV (
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
	public void glGetVertexAttribdvNV (
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
	public void glGetVertexAttribfvNV (
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
	public void glGetVertexAttribivNV (
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
	public void glGetVertexAttribPointervNV (
		int arg0,
		int arg1,
		byte[][] arg2
	) ;
	public void glGetVertexAttribPointervNV (
		int arg0,
		int arg1,
		short[][] arg2
	) ;
	public void glGetVertexAttribPointervNV (
		int arg0,
		int arg1,
		int[][] arg2
	) ;
	public void glGetVertexAttribPointervNV (
		int arg0,
		int arg1,
		float[][] arg2
	) ;
	public void glGetVertexAttribPointervNV (
		int arg0,
		int arg1,
		double[][] arg2
	) ;
	public void glGetVertexAttribPointervNV (
		int arg0,
		int arg1,
		boolean[][] arg2
	) ;
	public void glGetVertexAttribPointervNV (
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
	public boolean glIsProgramNV (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadProgramNV ( GLenum , GLuint , GLsizei , const GLubyte * ) ;
 * </pre> 
 */
	public void glLoadProgramNV (
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
	public void glProgramParameter4fNV (
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
	public void glProgramParameter4dNV (
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
	public void glProgramParameter4dvNV (
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
	public void glProgramParameter4fvNV (
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
	public void glProgramParameters4dvNV (
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
	public void glProgramParameters4fvNV (
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
	public void glTrackMatrixNV (
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
	public void glVertexAttribPointerNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		byte[] arg4
	) ;
	public void glVertexAttribPointerNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		short[] arg4
	) ;
	public void glVertexAttribPointerNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		int[] arg4
	) ;
	public void glVertexAttribPointerNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		float[] arg4
	) ;
	public void glVertexAttribPointerNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		double[] arg4
	) ;
	public void glVertexAttribPointerNV (
		int arg0,
		int arg1,
		int arg2,
		int arg3,
		boolean[] arg4
	) ;
	public void glVertexAttribPointerNV (
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
	public void glVertexAttrib1sNV (
		int arg0,
		short arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1fNV ( GLuint , GLfloat ) ;
 * </pre> 
 */
	public void glVertexAttrib1fNV (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1dNV ( GLuint , GLdouble ) ;
 * </pre> 
 */
	public void glVertexAttrib1dNV (
		int arg0,
		double arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2sNV ( GLuint , GLshort , GLshort ) ;
 * </pre> 
 */
	public void glVertexAttrib2sNV (
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
	public void glVertexAttrib2fNV (
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
	public void glVertexAttrib2dNV (
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
	public void glVertexAttrib3sNV (
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
	public void glVertexAttrib3fNV (
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
	public void glVertexAttrib3dNV (
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
	public void glVertexAttrib4sNV (
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
	public void glVertexAttrib4fNV (
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
	public void glVertexAttrib4dNV (
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
	public void glVertexAttrib4ubNV (
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
	public void glVertexAttrib1svNV (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1fvNV ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	public void glVertexAttrib1fvNV (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1dvNV ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	public void glVertexAttrib1dvNV (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2svNV ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	public void glVertexAttrib2svNV (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2fvNV ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	public void glVertexAttrib2fvNV (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2dvNV ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	public void glVertexAttrib2dvNV (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3svNV ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	public void glVertexAttrib3svNV (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3fvNV ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	public void glVertexAttrib3fvNV (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3dvNV ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	public void glVertexAttrib3dvNV (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4svNV ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	public void glVertexAttrib4svNV (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4fvNV ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	public void glVertexAttrib4fvNV (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4dvNV ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	public void glVertexAttrib4dvNV (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4ubvNV ( GLuint , const GLubyte * ) ;
 * </pre> 
 */
	public void glVertexAttrib4ubvNV (
		int arg0,
		byte[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs1svNV ( GLuint , GLsizei , const GLshort * ) ;
 * </pre> 
 */
	public void glVertexAttribs1svNV (
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
	public void glVertexAttribs1fvNV (
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
	public void glVertexAttribs1dvNV (
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
	public void glVertexAttribs2svNV (
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
	public void glVertexAttribs2fvNV (
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
	public void glVertexAttribs2dvNV (
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
	public void glVertexAttribs3svNV (
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
	public void glVertexAttribs3fvNV (
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
	public void glVertexAttribs3dvNV (
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
	public void glVertexAttribs4svNV (
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
	public void glVertexAttribs4fvNV (
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
	public void glVertexAttribs4dvNV (
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
	public void glVertexAttribs4ubvNV (
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
	public void glTexBumpParameterivATI (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexBumpParameterfvATI ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public void glTexBumpParameterfvATI (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexBumpParameterivATI ( GLenum , GLint * ) ;
 * </pre> 
 */
	public void glGetTexBumpParameterivATI (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexBumpParameterfvATI ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	public void glGetTexBumpParameterfvATI (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenFragmentShadersATI ( GLuint ) ;
 * </pre> 
 */
	public int glGenFragmentShadersATI (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindFragmentShaderATI ( GLuint ) ;
 * </pre> 
 */
	public void glBindFragmentShaderATI (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteFragmentShaderATI ( GLuint ) ;
 * </pre> 
 */
	public void glDeleteFragmentShaderATI (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBeginFragmentShaderATI ( void ) ;
 * </pre> 
 */
	public void glBeginFragmentShaderATI (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEndFragmentShaderATI ( void ) ;
 * </pre> 
 */
	public void glEndFragmentShaderATI (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPassTexCoordATI ( GLuint , GLuint , GLenum ) ;
 * </pre> 
 */
	public void glPassTexCoordATI (
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
	public void glSampleMapATI (
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
	public void glColorFragmentOp1ATI (
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
	public void glColorFragmentOp2ATI (
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
	public void glColorFragmentOp3ATI (
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
	public void glAlphaFragmentOp1ATI (
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
	public void glAlphaFragmentOp2ATI (
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
	public void glAlphaFragmentOp3ATI (
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
	public void glSetFragmentShaderConstantATI (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPNTrianglesiATI ( GLenum , GLint ) ;
 * </pre> 
 */
	public void glPNTrianglesiATI (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPNTrianglesfATI ( GLenum , GLfloat ) ;
 * </pre> 
 */
	public void glPNTrianglesfATI (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glNewObjectBufferATI ( GLsizei , const GLvoid * , GLenum ) ;
 * </pre> 
 */
	public int glNewObjectBufferATI (
		int arg0,
		byte[] arg1,
		int arg2
	) ;
	public int glNewObjectBufferATI (
		int arg0,
		short[] arg1,
		int arg2
	) ;
	public int glNewObjectBufferATI (
		int arg0,
		int[] arg1,
		int arg2
	) ;
	public int glNewObjectBufferATI (
		int arg0,
		float[] arg1,
		int arg2
	) ;
	public int glNewObjectBufferATI (
		int arg0,
		double[] arg1,
		int arg2
	) ;
	public int glNewObjectBufferATI (
		int arg0,
		boolean[] arg1,
		int arg2
	) ;
	public int glNewObjectBufferATI (
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
	public boolean glIsObjectBufferATI (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glUpdateObjectBufferATI ( GLuint , GLuint , GLsizei , const GLvoid * , GLenum ) ;
 * </pre> 
 */
	public void glUpdateObjectBufferATI (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3,
		int arg4
	) ;
	public void glUpdateObjectBufferATI (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3,
		int arg4
	) ;
	public void glUpdateObjectBufferATI (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3,
		int arg4
	) ;
	public void glUpdateObjectBufferATI (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3,
		int arg4
	) ;
	public void glUpdateObjectBufferATI (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3,
		int arg4
	) ;
	public void glUpdateObjectBufferATI (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3,
		int arg4
	) ;
	public void glUpdateObjectBufferATI (
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
	public void glGetObjectBufferfvATI (
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
	public void glGetObjectBufferivATI (
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
	public void glDeleteObjectBufferATI (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glArrayObjectATI ( GLenum , GLint , GLenum , GLsizei , GLuint , GLuint ) ;
 * </pre> 
 */
	public void glArrayObjectATI (
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
	public void glGetArrayObjectfvATI (
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
	public void glGetArrayObjectivATI (
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
	public void glVariantArrayObjectATI (
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
	public void glGetVariantArrayObjectfvATI (
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
	public void glGetVariantArrayObjectivATI (
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
	public void glBeginVertexShaderEXT (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEndVertexShaderEXT ( void ) ;
 * </pre> 
 */
	public void glEndVertexShaderEXT (
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindVertexShaderEXT ( GLuint ) ;
 * </pre> 
 */
	public void glBindVertexShaderEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenVertexShadersEXT ( GLuint ) ;
 * </pre> 
 */
	public int glGenVertexShadersEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteVertexShaderEXT ( GLuint ) ;
 * </pre> 
 */
	public void glDeleteVertexShaderEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glShaderOp1EXT ( GLenum , GLuint , GLuint ) ;
 * </pre> 
 */
	public void glShaderOp1EXT (
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
	public void glShaderOp2EXT (
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
	public void glShaderOp3EXT (
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
	public void glSwizzleEXT (
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
	public void glWriteMaskEXT (
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
	public void glInsertComponentEXT (
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
	public void glExtractComponentEXT (
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
	public int glGenSymbolsEXT (
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
	public void glSetInvariantEXT (
		int arg0,
		int arg1,
		byte[] arg2
	) ;
	public void glSetInvariantEXT (
		int arg0,
		int arg1,
		short[] arg2
	) ;
	public void glSetInvariantEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;
	public void glSetInvariantEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;
	public void glSetInvariantEXT (
		int arg0,
		int arg1,
		double[] arg2
	) ;
	public void glSetInvariantEXT (
		int arg0,
		int arg1,
		boolean[] arg2
	) ;
	public void glSetInvariantEXT (
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
	public void glSetLocalConstantEXT (
		int arg0,
		int arg1,
		byte[] arg2
	) ;
	public void glSetLocalConstantEXT (
		int arg0,
		int arg1,
		short[] arg2
	) ;
	public void glSetLocalConstantEXT (
		int arg0,
		int arg1,
		int[] arg2
	) ;
	public void glSetLocalConstantEXT (
		int arg0,
		int arg1,
		float[] arg2
	) ;
	public void glSetLocalConstantEXT (
		int arg0,
		int arg1,
		double[] arg2
	) ;
	public void glSetLocalConstantEXT (
		int arg0,
		int arg1,
		boolean[] arg2
	) ;
	public void glSetLocalConstantEXT (
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
	public void glVariantbvEXT (
		int arg0,
		byte[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantsvEXT ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	public void glVariantsvEXT (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantivEXT ( GLuint , const GLint * ) ;
 * </pre> 
 */
	public void glVariantivEXT (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantfvEXT ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	public void glVariantfvEXT (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantdvEXT ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	public void glVariantdvEXT (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantubvEXT ( GLuint , const GLubyte * ) ;
 * </pre> 
 */
	public void glVariantubvEXT (
		int arg0,
		byte[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantusvEXT ( GLuint , const GLushort * ) ;
 * </pre> 
 */
	public void glVariantusvEXT (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantuivEXT ( GLuint , const GLuint * ) ;
 * </pre> 
 */
	public void glVariantuivEXT (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantPointerEXT ( GLuint , GLenum , GLuint , const void * ) ;
 * </pre> 
 */
	public void glVariantPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		byte[] arg3
	) ;
	public void glVariantPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		short[] arg3
	) ;
	public void glVariantPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		int[] arg3
	) ;
	public void glVariantPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		float[] arg3
	) ;
	public void glVariantPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		double[] arg3
	) ;
	public void glVariantPointerEXT (
		int arg0,
		int arg1,
		int arg2,
		boolean[] arg3
	) ;
	public void glVariantPointerEXT (
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
	public void glEnableVariantClientStateEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDisableVariantClientStateEXT ( GLuint ) ;
 * </pre> 
 */
	public void glDisableVariantClientStateEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindLightParameterEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	public int glBindLightParameterEXT (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindMaterialParameterEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	public int glBindMaterialParameterEXT (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindTexGenParameterEXT ( GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	public int glBindTexGenParameterEXT (
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
	public int glBindTextureUnitParameterEXT (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindParameterEXT ( GLenum ) ;
 * </pre> 
 */
	public int glBindParameterEXT (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsVariantEnabledEXT ( GLuint , GLenum ) ;
 * </pre> 
 */
	public boolean glIsVariantEnabledEXT (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantBooleanvEXT ( GLuint , GLenum , GLboolean * ) ;
 * </pre> 
 */
	public void glGetVariantBooleanvEXT (
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
	public void glGetVariantIntegervEXT (
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
	public void glGetVariantFloatvEXT (
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
	public void glGetVariantPointervEXT (
		int arg0,
		int arg1,
		byte[][] arg2
	) ;
	public void glGetVariantPointervEXT (
		int arg0,
		int arg1,
		short[][] arg2
	) ;
	public void glGetVariantPointervEXT (
		int arg0,
		int arg1,
		int[][] arg2
	) ;
	public void glGetVariantPointervEXT (
		int arg0,
		int arg1,
		float[][] arg2
	) ;
	public void glGetVariantPointervEXT (
		int arg0,
		int arg1,
		double[][] arg2
	) ;
	public void glGetVariantPointervEXT (
		int arg0,
		int arg1,
		boolean[][] arg2
	) ;
	public void glGetVariantPointervEXT (
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
	public void glGetInvariantBooleanvEXT (
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
	public void glGetInvariantIntegervEXT (
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
	public void glGetInvariantFloatvEXT (
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
	public void glGetLocalConstantBooleanvEXT (
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
	public void glGetLocalConstantIntegervEXT (
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
	public void glGetLocalConstantFloatvEXT (
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
	public void glVertexStream1s (
		int arg0,
		short arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1sv ( GLenum , const GLshort * ) ;
 * </pre> 
 */
	public void glVertexStream1sv (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1i ( GLenum , GLint ) ;
 * </pre> 
 */
	public void glVertexStream1i (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1iv ( GLenum , const GLint * ) ;
 * </pre> 
 */
	public void glVertexStream1iv (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1f ( GLenum , GLfloat ) ;
 * </pre> 
 */
	public void glVertexStream1f (
		int arg0,
		float arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1fv ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	public void glVertexStream1fv (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1d ( GLenum , GLdouble ) ;
 * </pre> 
 */
	public void glVertexStream1d (
		int arg0,
		double arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1dv ( GLenum , const GLdouble * ) ;
 * </pre> 
 */
	public void glVertexStream1dv (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2s ( GLenum , GLshort , GLshort ) ;
 * </pre> 
 */
	public void glVertexStream2s (
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
	public void glVertexStream2sv (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2i ( GLenum , GLint , GLint ) ;
 * </pre> 
 */
	public void glVertexStream2i (
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
	public void glVertexStream2iv (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2f ( GLenum , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public void glVertexStream2f (
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
	public void glVertexStream2fv (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2d ( GLenum , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public void glVertexStream2d (
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
	public void glVertexStream2dv (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3s ( GLenum , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	public void glVertexStream3s (
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
	public void glVertexStream3sv (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3i ( GLenum , GLint , GLint , GLint ) ;
 * </pre> 
 */
	public void glVertexStream3i (
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
	public void glVertexStream3iv (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3f ( GLenum , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public void glVertexStream3f (
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
	public void glVertexStream3fv (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3d ( GLenum , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public void glVertexStream3d (
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
	public void glVertexStream3dv (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4s ( GLenum , GLshort , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	public void glVertexStream4s (
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
	public void glVertexStream4sv (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4i ( GLenum , GLint , GLint , GLint , GLint ) ;
 * </pre> 
 */
	public void glVertexStream4i (
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
	public void glVertexStream4iv (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4f ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public void glVertexStream4f (
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
	public void glVertexStream4fv (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4d ( GLenum , GLdouble , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public void glVertexStream4d (
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
	public void glVertexStream4dv (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3b ( GLenum , GLbyte , GLbyte , GLbyte ) ;
 * </pre> 
 */
	public void glNormalStream3b (
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
	public void glNormalStream3bv (
		int arg0,
		byte[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3s ( GLenum , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	public void glNormalStream3s (
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
	public void glNormalStream3sv (
		int arg0,
		short[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3i ( GLenum , GLint , GLint , GLint ) ;
 * </pre> 
 */
	public void glNormalStream3i (
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
	public void glNormalStream3iv (
		int arg0,
		int[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3f ( GLenum , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	public void glNormalStream3f (
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
	public void glNormalStream3fv (
		int arg0,
		float[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3d ( GLenum , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	public void glNormalStream3d (
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
	public void glNormalStream3dv (
		int arg0,
		double[] arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClientActiveVertexStream ( GLenum ) ;
 * </pre> 
 */
	public void glClientActiveVertexStream (
		int arg0
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexBlendEnvi ( GLenum , GLint ) ;
 * </pre> 
 */
	public void glVertexBlendEnvi (
		int arg0,
		int arg1
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexBlendEnvf ( GLenum , GLfloat ) ;
 * </pre> 
 */
	public void glVertexBlendEnvf (
		int arg0,
		float arg1
	) ;

/* C2J Parser Version 3.0:  Java program parsed successfully. */ 
