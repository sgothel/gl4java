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
   extern void glGetPointerv ( GLenum pname , void * * params ) ;
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
   extern void glTexImage3D ( GLenum target , GLint level , GLint internalFormat , GLsizei width , GLsizei height , GLsizei depth , GLint border , GLenum format , GLenum type , const GLvoid * pixels ) ;
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
   extern void glGetPointervEXT ( GLenum pname , void * * params ) ;
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

/* C2J Parser Version 1.5 Beta:  Java program parsed successfully. */ 
