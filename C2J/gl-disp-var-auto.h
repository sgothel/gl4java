/**
 * C2J Parser Version 3.0
 * Jausoft - Sven Goethel Software Development
 * Reading from file: gl-proto-auto.orig.h . . .
 * Destination-Class: gl4java_GLUFuncJauJNI ! 
 */

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearIndex ( GLfloat c ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glClearIndex )(GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearColor ( GLclampf red , GLclampf green , GLclampf blue , GLclampf alpha ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glClearColor )(GLclampf, GLclampf, GLclampf, GLclampf);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClear ( GLbitfield mask ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glClear )(GLbitfield);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexMask ( GLuint mask ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIndexMask )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorMask ( GLboolean red , GLboolean green , GLboolean blue , GLboolean alpha ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorMask )(GLboolean, GLboolean, GLboolean, GLboolean);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAlphaFunc ( GLenum func , GLclampf ref ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glAlphaFunc )(GLenum, GLclampf);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendFunc ( GLenum sfactor , GLenum dfactor ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBlendFunc )(GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLogicOp ( GLenum opcode ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLogicOp )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCullFace ( GLenum mode ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCullFace )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFrontFace ( GLenum mode ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFrontFace )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointSize ( GLfloat size ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPointSize )(GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLineWidth ( GLfloat width ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLineWidth )(GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLineStipple ( GLint factor , GLushort pattern ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLineStipple )(GLint, GLushort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPolygonMode ( GLenum face , GLenum mode ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPolygonMode )(GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPolygonOffset ( GLfloat factor , GLfloat units ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPolygonOffset )(GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPolygonStipple ( const GLubyte * mask ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPolygonStipple )(const GLubyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPolygonStipple ( GLubyte * mask ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetPolygonStipple )(GLubyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlag ( GLboolean flag ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEdgeFlag )(GLboolean);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlagv ( const GLboolean * flag ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEdgeFlagv )(const GLboolean *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glScissor ( GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glScissor )(GLint, GLint, GLsizei, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClipPlane ( GLenum plane , const GLdouble * equation ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glClipPlane )(GLenum, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetClipPlane ( GLenum plane , GLdouble * equation ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetClipPlane )(GLenum, GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawBuffer ( GLenum mode ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDrawBuffer )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReadBuffer ( GLenum mode ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReadBuffer )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEnable ( GLenum cap ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEnable )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDisable ( GLenum cap ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDisable )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsEnabled ( GLenum cap ) ;
 * </pre> 
 */
	LIBAPI GLboolean (CALLBACK * disp__glIsEnabled )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEnableClientState ( GLenum cap ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEnableClientState )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDisableClientState ( GLenum cap ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDisableClientState )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetBooleanv ( GLenum pname , GLboolean * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetBooleanv )(GLenum, GLboolean *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetDoublev ( GLenum pname , GLdouble * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetDoublev )(GLenum, GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFloatv ( GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetFloatv )(GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetIntegerv ( GLenum pname , GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetIntegerv )(GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPushAttrib ( GLbitfield mask ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPushAttrib )(GLbitfield);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPopAttrib ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPopAttrib )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPushClientAttrib ( GLbitfield mask ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPushClientAttrib )(GLbitfield);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPopClientAttrib ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPopClientAttrib )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glRenderMode ( GLenum mode ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__glRenderMode )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLenum glGetError ( void ) ;
 * </pre> 
 */
	LIBAPI GLenum (CALLBACK * disp__glGetError )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFinish ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFinish )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFlush ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFlush )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glHint ( GLenum target , GLenum mode ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glHint )(GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearDepth ( GLclampd depth ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glClearDepth )(GLclampd);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDepthFunc ( GLenum func ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDepthFunc )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDepthMask ( GLboolean flag ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDepthMask )(GLboolean);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDepthRange ( GLclampd near_val , GLclampd far_val ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDepthRange )(GLclampd, GLclampd);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearAccum ( GLfloat red , GLfloat green , GLfloat blue , GLfloat alpha ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glClearAccum )(GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAccum ( GLenum op , GLfloat value ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glAccum )(GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixMode ( GLenum mode ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMatrixMode )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glOrtho ( GLdouble left , GLdouble right , GLdouble bottom , GLdouble top , GLdouble near_val , GLdouble far_val ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glOrtho )(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFrustum ( GLdouble left , GLdouble right , GLdouble bottom , GLdouble top , GLdouble near_val , GLdouble far_val ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFrustum )(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glViewport ( GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glViewport )(GLint, GLint, GLsizei, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPushMatrix ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPushMatrix )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPopMatrix ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPopMatrix )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadIdentity ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLoadIdentity )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadMatrixd ( const GLdouble * m ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLoadMatrixd )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadMatrixf ( const GLfloat * m ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLoadMatrixf )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultMatrixd ( const GLdouble * m ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultMatrixd )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultMatrixf ( const GLfloat * m ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultMatrixf )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRotated ( GLdouble angle , GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRotated )(GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRotatef ( GLfloat angle , GLfloat x , GLfloat y , GLfloat z ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRotatef )(GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glScaled ( GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glScaled )(GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glScalef ( GLfloat x , GLfloat y , GLfloat z ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glScalef )(GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTranslated ( GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTranslated )(GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTranslatef ( GLfloat x , GLfloat y , GLfloat z ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTranslatef )(GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsList ( GLuint list ) ;
 * </pre> 
 */
	LIBAPI GLboolean (CALLBACK * disp__glIsList )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteLists ( GLuint list , GLsizei range ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDeleteLists )(GLuint, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenLists ( GLsizei range ) ;
 * </pre> 
 */
	LIBAPI GLuint (CALLBACK * disp__glGenLists )(GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNewList ( GLuint list , GLenum mode ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNewList )(GLuint, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEndList ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEndList )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCallList ( GLuint list ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCallList )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCallLists ( GLsizei n , GLenum type , const GLvoid * lists ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCallLists )(GLsizei, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glListBase ( GLuint base ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glListBase )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBegin ( GLenum mode ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBegin )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEnd ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEnd )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2d ( GLdouble x , GLdouble y ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex2d )(GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2f ( GLfloat x , GLfloat y ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex2f )(GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2i ( GLint x , GLint y ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex2i )(GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2s ( GLshort x , GLshort y ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex2s )(GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3d ( GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex3d )(GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3f ( GLfloat x , GLfloat y , GLfloat z ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex3f )(GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3i ( GLint x , GLint y , GLint z ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex3i )(GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3s ( GLshort x , GLshort y , GLshort z ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex3s )(GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4d ( GLdouble x , GLdouble y , GLdouble z , GLdouble w ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex4d )(GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4f ( GLfloat x , GLfloat y , GLfloat z , GLfloat w ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex4f )(GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4i ( GLint x , GLint y , GLint z , GLint w ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex4i )(GLint, GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4s ( GLshort x , GLshort y , GLshort z , GLshort w ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex4s )(GLshort, GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2dv ( const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex2dv )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2fv ( const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex2fv )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2iv ( const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex2iv )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex2sv ( const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex2sv )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex3dv )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex3fv )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3iv ( const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex3iv )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex3sv ( const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex3sv )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4dv ( const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex4dv )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4fv ( const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex4fv )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4iv ( const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex4iv )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertex4sv ( const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertex4sv )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3b ( GLbyte nx , GLbyte ny , GLbyte nz ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormal3b )(GLbyte, GLbyte, GLbyte);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3d ( GLdouble nx , GLdouble ny , GLdouble nz ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormal3d )(GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3f ( GLfloat nx , GLfloat ny , GLfloat nz ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormal3f )(GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3i ( GLint nx , GLint ny , GLint nz ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormal3i )(GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3s ( GLshort nx , GLshort ny , GLshort nz ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormal3s )(GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3bv ( const GLbyte * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormal3bv )(const GLbyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormal3dv )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormal3fv )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3iv ( const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormal3iv )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3sv ( const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormal3sv )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexd ( GLdouble c ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIndexd )(GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexf ( GLfloat c ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIndexf )(GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexi ( GLint c ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIndexi )(GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexs ( GLshort c ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIndexs )(GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexub ( GLubyte c ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIndexub )(GLubyte);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexdv ( const GLdouble * c ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIndexdv )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexfv ( const GLfloat * c ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIndexfv )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexiv ( const GLint * c ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIndexiv )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexsv ( const GLshort * c ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIndexsv )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexubv ( const GLubyte * c ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIndexubv )(const GLubyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3b ( GLbyte red , GLbyte green , GLbyte blue ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3b )(GLbyte, GLbyte, GLbyte);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3d ( GLdouble red , GLdouble green , GLdouble blue ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3d )(GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3f ( GLfloat red , GLfloat green , GLfloat blue ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3f )(GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3i ( GLint red , GLint green , GLint blue ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3i )(GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3s ( GLshort red , GLshort green , GLshort blue ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3s )(GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3ub ( GLubyte red , GLubyte green , GLubyte blue ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3ub )(GLubyte, GLubyte, GLubyte);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3ui ( GLuint red , GLuint green , GLuint blue ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3ui )(GLuint, GLuint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3us ( GLushort red , GLushort green , GLushort blue ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3us )(GLushort, GLushort, GLushort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4b ( GLbyte red , GLbyte green , GLbyte blue , GLbyte alpha ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4b )(GLbyte, GLbyte, GLbyte, GLbyte);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4d ( GLdouble red , GLdouble green , GLdouble blue , GLdouble alpha ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4d )(GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4f ( GLfloat red , GLfloat green , GLfloat blue , GLfloat alpha ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4f )(GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4i ( GLint red , GLint green , GLint blue , GLint alpha ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4i )(GLint, GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4s ( GLshort red , GLshort green , GLshort blue , GLshort alpha ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4s )(GLshort, GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ub ( GLubyte red , GLubyte green , GLubyte blue , GLubyte alpha ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4ub )(GLubyte, GLubyte, GLubyte, GLubyte);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ui ( GLuint red , GLuint green , GLuint blue , GLuint alpha ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4ui )(GLuint, GLuint, GLuint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4us ( GLushort red , GLushort green , GLushort blue , GLushort alpha ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4us )(GLushort, GLushort, GLushort, GLushort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3bv ( const GLbyte * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3bv )(const GLbyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3dv )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3fv )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3iv ( const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3iv )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3sv ( const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3sv )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3ubv ( const GLubyte * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3ubv )(const GLubyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3uiv ( const GLuint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3uiv )(const GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3usv ( const GLushort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3usv )(const GLushort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4bv ( const GLbyte * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4bv )(const GLbyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4dv ( const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4dv )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4fv ( const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4fv )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4iv ( const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4iv )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4sv ( const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4sv )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubv ( const GLubyte * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4ubv )(const GLubyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4uiv ( const GLuint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4uiv )(const GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4usv ( const GLushort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4usv )(const GLushort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1d ( GLdouble s ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord1d )(GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1f ( GLfloat s ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord1f )(GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1i ( GLint s ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord1i )(GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1s ( GLshort s ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord1s )(GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2d ( GLdouble s , GLdouble t ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2d )(GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2f ( GLfloat s , GLfloat t ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2f )(GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2i ( GLint s , GLint t ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2i )(GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2s ( GLshort s , GLshort t ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2s )(GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3d ( GLdouble s , GLdouble t , GLdouble r ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord3d )(GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3f ( GLfloat s , GLfloat t , GLfloat r ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord3f )(GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3i ( GLint s , GLint t , GLint r ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord3i )(GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3s ( GLshort s , GLshort t , GLshort r ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord3s )(GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4d ( GLdouble s , GLdouble t , GLdouble r , GLdouble q ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord4d )(GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4f ( GLfloat s , GLfloat t , GLfloat r , GLfloat q ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord4f )(GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4i ( GLint s , GLint t , GLint r , GLint q ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord4i )(GLint, GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4s ( GLshort s , GLshort t , GLshort r , GLshort q ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord4s )(GLshort, GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1dv ( const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord1dv )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1fv ( const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord1fv )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1iv ( const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord1iv )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord1sv ( const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord1sv )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2dv ( const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2dv )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fv ( const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2fv )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2iv ( const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2iv )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2sv ( const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2sv )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord3dv )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord3fv )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3iv ( const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord3iv )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord3sv ( const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord3sv )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4dv ( const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord4dv )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fv ( const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord4fv )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4iv ( const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord4iv )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4sv ( const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord4sv )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2d ( GLdouble x , GLdouble y ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos2d )(GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2f ( GLfloat x , GLfloat y ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos2f )(GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2i ( GLint x , GLint y ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos2i )(GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2s ( GLshort x , GLshort y ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos2s )(GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3d ( GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos3d )(GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3f ( GLfloat x , GLfloat y , GLfloat z ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos3f )(GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3i ( GLint x , GLint y , GLint z ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos3i )(GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3s ( GLshort x , GLshort y , GLshort z ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos3s )(GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4d ( GLdouble x , GLdouble y , GLdouble z , GLdouble w ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos4d )(GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4f ( GLfloat x , GLfloat y , GLfloat z , GLfloat w ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos4f )(GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4i ( GLint x , GLint y , GLint z , GLint w ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos4i )(GLint, GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4s ( GLshort x , GLshort y , GLshort z , GLshort w ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos4s )(GLshort, GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2dv ( const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos2dv )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2fv ( const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos2fv )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2iv ( const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos2iv )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos2sv ( const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos2sv )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3dv ( const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos3dv )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3fv ( const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos3fv )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3iv ( const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos3iv )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos3sv ( const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos3sv )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4dv ( const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos4dv )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4fv ( const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos4fv )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4iv ( const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos4iv )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRasterPos4sv ( const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRasterPos4sv )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectd ( GLdouble x1 , GLdouble y1 , GLdouble x2 , GLdouble y2 ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRectd )(GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectf ( GLfloat x1 , GLfloat y1 , GLfloat x2 , GLfloat y2 ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRectf )(GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRecti ( GLint x1 , GLint y1 , GLint x2 , GLint y2 ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRecti )(GLint, GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRects ( GLshort x1 , GLshort y1 , GLshort x2 , GLshort y2 ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRects )(GLshort, GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectdv ( const GLdouble * v1 , const GLdouble * v2 ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRectdv )(const GLdouble *, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectfv ( const GLfloat * v1 , const GLfloat * v2 ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRectfv )(const GLfloat *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectiv ( const GLint * v1 , const GLint * v2 ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRectiv )(const GLint *, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRectsv ( const GLshort * v1 , const GLshort * v2 ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRectsv )(const GLshort *, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexPointer ( GLint size , GLenum type , GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexPointer )(GLint, GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalPointer ( GLenum type , GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormalPointer )(GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorPointer ( GLint size , GLenum type , GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorPointer )(GLint, GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexPointer ( GLenum type , GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIndexPointer )(GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoordPointer ( GLint size , GLenum type , GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoordPointer )(GLint, GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlagPointer ( GLsizei stride , const GLvoid * ptr ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEdgeFlagPointer )(GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPointerv ( GLenum pname , GLvoid * * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetPointerv )(GLenum, GLvoid **);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glArrayElement ( GLint i ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glArrayElement )(GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawArrays ( GLenum mode , GLint first , GLsizei count ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDrawArrays )(GLenum, GLint, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawElements ( GLenum mode , GLsizei count , GLenum type , const GLvoid * indices ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDrawElements )(GLenum, GLsizei, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glInterleavedArrays ( GLenum format , GLsizei stride , const GLvoid * pointer ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glInterleavedArrays )(GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glShadeModel ( GLenum mode ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glShadeModel )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightf ( GLenum light , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLightf )(GLenum, GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLighti ( GLenum light , GLenum pname , GLint param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLighti )(GLenum, GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightfv ( GLenum light , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLightfv )(GLenum, GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightiv ( GLenum light , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLightiv )(GLenum, GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetLightfv ( GLenum light , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetLightfv )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetLightiv ( GLenum light , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetLightiv )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightModelf ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLightModelf )(GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightModeli ( GLenum pname , GLint param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLightModeli )(GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightModelfv ( GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLightModelfv )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightModeliv ( GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLightModeliv )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMaterialf ( GLenum face , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMaterialf )(GLenum, GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMateriali ( GLenum face , GLenum pname , GLint param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMateriali )(GLenum, GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMaterialfv ( GLenum face , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMaterialfv )(GLenum, GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMaterialiv ( GLenum face , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMaterialiv )(GLenum, GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMaterialfv ( GLenum face , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetMaterialfv )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMaterialiv ( GLenum face , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetMaterialiv )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorMaterial ( GLenum face , GLenum mode ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorMaterial )(GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelZoom ( GLfloat xfactor , GLfloat yfactor ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelZoom )(GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelStoref ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelStoref )(GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelStorei ( GLenum pname , GLint param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelStorei )(GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransferf ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelTransferf )(GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransferi ( GLenum pname , GLint param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelTransferi )(GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelMapfv ( GLenum map , GLint mapsize , const GLfloat * values ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelMapfv )(GLenum, GLint, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelMapuiv ( GLenum map , GLint mapsize , const GLuint * values ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelMapuiv )(GLenum, GLint, const GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelMapusv ( GLenum map , GLint mapsize , const GLushort * values ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelMapusv )(GLenum, GLint, const GLushort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelMapfv ( GLenum map , GLfloat * values ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetPixelMapfv )(GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelMapuiv ( GLenum map , GLuint * values ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetPixelMapuiv )(GLenum, GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelMapusv ( GLenum map , GLushort * values ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetPixelMapusv )(GLenum, GLushort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBitmap ( GLsizei width , GLsizei height , GLfloat xorig , GLfloat yorig , GLfloat xmove , GLfloat ymove , const GLubyte * bitmap ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBitmap )(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReadPixels ( GLint x , GLint y , GLsizei width , GLsizei height , GLenum format , GLenum type , GLvoid * pixels ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReadPixels )(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawPixels ( GLsizei width , GLsizei height , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDrawPixels )(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyPixels ( GLint x , GLint y , GLsizei width , GLsizei height , GLenum type ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyPixels )(GLint, GLint, GLsizei, GLsizei, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStencilFunc ( GLenum func , GLint ref , GLuint mask ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glStencilFunc )(GLenum, GLint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStencilMask ( GLuint mask ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glStencilMask )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStencilOp ( GLenum fail , GLenum zfail , GLenum zpass ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glStencilOp )(GLenum, GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClearStencil ( GLint s ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glClearStencil )(GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGend ( GLenum coord , GLenum pname , GLdouble param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexGend )(GLenum, GLenum, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGenf ( GLenum coord , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexGenf )(GLenum, GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGeni ( GLenum coord , GLenum pname , GLint param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexGeni )(GLenum, GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGendv ( GLenum coord , GLenum pname , const GLdouble * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexGendv )(GLenum, GLenum, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGenfv ( GLenum coord , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexGenfv )(GLenum, GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexGeniv ( GLenum coord , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexGeniv )(GLenum, GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexGendv ( GLenum coord , GLenum pname , GLdouble * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetTexGendv )(GLenum, GLenum, GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexGenfv ( GLenum coord , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetTexGenfv )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexGeniv ( GLenum coord , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetTexGeniv )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexEnvf ( GLenum target , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexEnvf )(GLenum, GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexEnvi ( GLenum target , GLenum pname , GLint param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexEnvi )(GLenum, GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexEnvfv ( GLenum target , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexEnvfv )(GLenum, GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexEnviv ( GLenum target , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexEnviv )(GLenum, GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexEnvfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetTexEnvfv )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexEnviv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetTexEnviv )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexParameterf ( GLenum target , GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexParameterf )(GLenum, GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexParameteri ( GLenum target , GLenum pname , GLint param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexParameteri )(GLenum, GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexParameterfv ( GLenum target , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexParameterfv )(GLenum, GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexParameteriv ( GLenum target , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexParameteriv )(GLenum, GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexParameterfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetTexParameterfv )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexParameteriv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetTexParameteriv )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexLevelParameterfv ( GLenum target , GLint level , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetTexLevelParameterfv )(GLenum, GLint, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexLevelParameteriv ( GLenum target , GLint level , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetTexLevelParameteriv )(GLenum, GLint, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage1D ( GLenum target , GLint level , GLint internalFormat , GLsizei width , GLint border , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexImage1D )(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage2D ( GLenum target , GLint level , GLint internalFormat , GLsizei width , GLsizei height , GLint border , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexImage2D )(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexImage ( GLenum target , GLint level , GLenum format , GLenum type , GLvoid * pixels ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetTexImage )(GLenum, GLint, GLenum, GLenum, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGenTextures ( GLsizei n , GLuint * textures ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGenTextures )(GLsizei, GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteTextures ( GLsizei n , const GLuint * textures ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDeleteTextures )(GLsizei, const GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindTexture ( GLenum target , GLuint texture ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBindTexture )(GLenum, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPrioritizeTextures ( GLsizei n , const GLuint * textures , const GLclampf * priorities ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPrioritizeTextures )(GLsizei, const GLuint *, const GLclampf *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glAreTexturesResident ( GLsizei n , const GLuint * textures , GLboolean * residences ) ;
 * </pre> 
 */
	LIBAPI GLboolean (CALLBACK * disp__glAreTexturesResident )(GLsizei, const GLuint *, GLboolean *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsTexture ( GLuint texture ) ;
 * </pre> 
 */
	LIBAPI GLboolean (CALLBACK * disp__glIsTexture )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage1D ( GLenum target , GLint level , GLint xoffset , GLsizei width , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexSubImage1D )(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage2D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLsizei width , GLsizei height , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexSubImage2D )(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexImage1D ( GLenum target , GLint level , GLenum internalformat , GLint x , GLint y , GLsizei width , GLint border ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyTexImage1D )(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexImage2D ( GLenum target , GLint level , GLenum internalformat , GLint x , GLint y , GLsizei width , GLsizei height , GLint border ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyTexImage2D )(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage1D ( GLenum target , GLint level , GLint xoffset , GLint x , GLint y , GLsizei width ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyTexSubImage1D )(GLenum, GLint, GLint, GLint, GLint, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage2D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyTexSubImage2D )(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMap1d ( GLenum target , GLdouble u1 , GLdouble u2 , GLint stride , GLint order , const GLdouble * points ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMap1d )(GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMap1f ( GLenum target , GLfloat u1 , GLfloat u2 , GLint stride , GLint order , const GLfloat * points ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMap1f )(GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMap2d ( GLenum target , GLdouble u1 , GLdouble u2 , GLint ustride , GLint uorder , GLdouble v1 , GLdouble v2 , GLint vstride , GLint vorder , const GLdouble * points ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMap2d )(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMap2f ( GLenum target , GLfloat u1 , GLfloat u2 , GLint ustride , GLint uorder , GLfloat v1 , GLfloat v2 , GLint vstride , GLint vorder , const GLfloat * points ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMap2f )(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapdv ( GLenum target , GLenum query , GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetMapdv )(GLenum, GLenum, GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapfv ( GLenum target , GLenum query , GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetMapfv )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapiv ( GLenum target , GLenum query , GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetMapiv )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord1d ( GLdouble u ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEvalCoord1d )(GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord1f ( GLfloat u ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEvalCoord1f )(GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord1dv ( const GLdouble * u ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEvalCoord1dv )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord1fv ( const GLfloat * u ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEvalCoord1fv )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord2d ( GLdouble u , GLdouble v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEvalCoord2d )(GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord2f ( GLfloat u , GLfloat v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEvalCoord2f )(GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord2dv ( const GLdouble * u ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEvalCoord2dv )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalCoord2fv ( const GLfloat * u ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEvalCoord2fv )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapGrid1d ( GLint un , GLdouble u1 , GLdouble u2 ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMapGrid1d )(GLint, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapGrid1f ( GLint un , GLfloat u1 , GLfloat u2 ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMapGrid1f )(GLint, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapGrid2d ( GLint un , GLdouble u1 , GLdouble u2 , GLint vn , GLdouble v1 , GLdouble v2 ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMapGrid2d )(GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapGrid2f ( GLint un , GLfloat u1 , GLfloat u2 , GLint vn , GLfloat v1 , GLfloat v2 ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMapGrid2f )(GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalPoint1 ( GLint i ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEvalPoint1 )(GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalPoint2 ( GLint i , GLint j ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEvalPoint2 )(GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalMesh1 ( GLenum mode , GLint i1 , GLint i2 ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEvalMesh1 )(GLenum, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalMesh2 ( GLenum mode , GLint i1 , GLint i2 , GLint j1 , GLint j2 ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEvalMesh2 )(GLenum, GLint, GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogf ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFogf )(GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogi ( GLenum pname , GLint param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFogi )(GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogfv ( GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFogfv )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogiv ( GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFogiv )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFeedbackBuffer ( GLsizei size , GLenum type , GLfloat * buffer ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFeedbackBuffer )(GLsizei, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPassThrough ( GLfloat token ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPassThrough )(GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSelectBuffer ( GLsizei size , GLuint * buffer ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSelectBuffer )(GLsizei, GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glInitNames ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glInitNames )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadName ( GLuint name ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLoadName )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPushName ( GLuint name ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPushName )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPopName ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPopName )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawRangeElements ( GLenum mode , GLuint start , GLuint end , GLsizei count , GLenum type , const GLvoid * indices ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDrawRangeElements )(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage3D ( GLenum target , GLint level , GLenum internalFormat , GLsizei width , GLsizei height , GLsizei depth , GLint border , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexImage3D )(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage3D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint zoffset , GLsizei width , GLsizei height , GLsizei depth , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexSubImage3D )(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage3D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint zoffset , GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyTexSubImage3D )(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTable ( GLenum target , GLenum internalformat , GLsizei width , GLenum format , GLenum type , const GLvoid * table ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorTable )(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorSubTable ( GLenum target , GLsizei start , GLsizei count , GLenum format , GLenum type , const GLvoid * data ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorSubTable )(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableParameteriv ( GLenum target , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorTableParameteriv )(GLenum, GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableParameterfv ( GLenum target , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorTableParameterfv )(GLenum, GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyColorSubTable ( GLenum target , GLsizei start , GLint x , GLint y , GLsizei width ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyColorSubTable )(GLenum, GLsizei, GLint, GLint, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyColorTable ( GLenum target , GLenum internalformat , GLint x , GLint y , GLsizei width ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyColorTable )(GLenum, GLenum, GLint, GLint, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTable ( GLenum target , GLenum format , GLenum type , GLvoid * table ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetColorTable )(GLenum, GLenum, GLenum, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameterfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetColorTableParameterfv )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameteriv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetColorTableParameteriv )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendEquation ( GLenum mode ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBlendEquation )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendColor ( GLclampf red , GLclampf green , GLclampf blue , GLclampf alpha ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBlendColor )(GLclampf, GLclampf, GLclampf, GLclampf);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glHistogram ( GLenum target , GLsizei width , GLenum internalformat , GLboolean sink ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glHistogram )(GLenum, GLsizei, GLenum, GLboolean);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glResetHistogram ( GLenum target ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glResetHistogram )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogram ( GLenum target , GLboolean reset , GLenum format , GLenum type , GLvoid * values ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetHistogram )(GLenum, GLboolean, GLenum, GLenum, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogramParameterfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetHistogramParameterfv )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogramParameteriv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetHistogramParameteriv )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMinmax ( GLenum target , GLenum internalformat , GLboolean sink ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMinmax )(GLenum, GLenum, GLboolean);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glResetMinmax ( GLenum target ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glResetMinmax )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmax ( GLenum target , GLboolean reset , GLenum format , GLenum types , GLvoid * values ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetMinmax )(GLenum, GLboolean, GLenum, GLenum, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmaxParameterfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetMinmaxParameterfv )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmaxParameteriv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetMinmaxParameteriv )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionFilter1D ( GLenum target , GLenum internalformat , GLsizei width , GLenum format , GLenum type , const GLvoid * image ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glConvolutionFilter1D )(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionFilter2D ( GLenum target , GLenum internalformat , GLsizei width , GLsizei height , GLenum format , GLenum type , const GLvoid * image ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glConvolutionFilter2D )(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameterf ( GLenum target , GLenum pname , GLfloat params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glConvolutionParameterf )(GLenum, GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameterfv ( GLenum target , GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glConvolutionParameterfv )(GLenum, GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameteri ( GLenum target , GLenum pname , GLint params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glConvolutionParameteri )(GLenum, GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameteriv ( GLenum target , GLenum pname , const GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glConvolutionParameteriv )(GLenum, GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyConvolutionFilter1D ( GLenum target , GLenum internalformat , GLint x , GLint y , GLsizei width ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyConvolutionFilter1D )(GLenum, GLenum, GLint, GLint, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyConvolutionFilter2D ( GLenum target , GLenum internalformat , GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyConvolutionFilter2D )(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionFilter ( GLenum target , GLenum format , GLenum type , GLvoid * image ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetConvolutionFilter )(GLenum, GLenum, GLenum, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionParameterfv ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetConvolutionParameterfv )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionParameteriv ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetConvolutionParameteriv )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSeparableFilter2D ( GLenum target , GLenum internalformat , GLsizei width , GLsizei height , GLenum format , GLenum type , const GLvoid * row , const GLvoid * column ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSeparableFilter2D )(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetSeparableFilter ( GLenum target , GLenum format , GLenum type , GLvoid * row , GLvoid * column , GLvoid * span ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetSeparableFilter )(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glActiveTexture ( GLenum texture ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glActiveTexture )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClientActiveTexture ( GLenum texture ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glClientActiveTexture )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage1D ( GLenum target , GLint level , GLenum internalformat , GLsizei width , GLint border , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCompressedTexImage1D )(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage2D ( GLenum target , GLint level , GLenum internalformat , GLsizei width , GLsizei height , GLint border , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCompressedTexImage2D )(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage3D ( GLenum target , GLint level , GLenum internalformat , GLsizei width , GLsizei height , GLsizei depth , GLint border , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCompressedTexImage3D )(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage1D ( GLenum target , GLint level , GLint xoffset , GLsizei width , GLenum format , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCompressedTexSubImage1D )(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage2D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLsizei width , GLsizei height , GLenum format , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCompressedTexSubImage2D )(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage3D ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint zoffset , GLsizei width , GLsizei height , GLsizei depth , GLenum format , GLsizei imageSize , const GLvoid * data ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCompressedTexSubImage3D )(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCompressedTexImage ( GLenum target , GLint lod , GLvoid * img ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetCompressedTexImage )(GLenum, GLint, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1d ( GLenum target , GLdouble s ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord1d )(GLenum, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1dv ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord1dv )(GLenum, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1f ( GLenum target , GLfloat s ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord1f )(GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1fv ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord1fv )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1i ( GLenum target , GLint s ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord1i )(GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1iv ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord1iv )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1s ( GLenum target , GLshort s ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord1s )(GLenum, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1sv ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord1sv )(GLenum, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2d ( GLenum target , GLdouble s , GLdouble t ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord2d )(GLenum, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2dv ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord2dv )(GLenum, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2f ( GLenum target , GLfloat s , GLfloat t ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord2f )(GLenum, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2fv ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord2fv )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2i ( GLenum target , GLint s , GLint t ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord2i )(GLenum, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2iv ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord2iv )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2s ( GLenum target , GLshort s , GLshort t ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord2s )(GLenum, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2sv ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord2sv )(GLenum, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3d ( GLenum target , GLdouble s , GLdouble t , GLdouble r ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord3d )(GLenum, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3dv ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord3dv )(GLenum, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3f ( GLenum target , GLfloat s , GLfloat t , GLfloat r ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord3f )(GLenum, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3fv ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord3fv )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3i ( GLenum target , GLint s , GLint t , GLint r ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord3i )(GLenum, GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3iv ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord3iv )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3s ( GLenum target , GLshort s , GLshort t , GLshort r ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord3s )(GLenum, GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3sv ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord3sv )(GLenum, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4d ( GLenum target , GLdouble s , GLdouble t , GLdouble r , GLdouble q ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord4d )(GLenum, GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4dv ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord4dv )(GLenum, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4f ( GLenum target , GLfloat s , GLfloat t , GLfloat r , GLfloat q ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord4f )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4fv ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord4fv )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4i ( GLenum target , GLint s , GLint t , GLint r , GLint q ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord4i )(GLenum, GLint, GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4iv ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord4iv )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4s ( GLenum target , GLshort s , GLshort t , GLshort r , GLshort q ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord4s )(GLenum, GLshort, GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4sv ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord4sv )(GLenum, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadTransposeMatrixd ( const GLdouble m [ 16 ] ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLoadTransposeMatrixd )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadTransposeMatrixf ( const GLfloat m [ 16 ] ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLoadTransposeMatrixf )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultTransposeMatrixd ( const GLdouble m [ 16 ] ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultTransposeMatrixd )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultTransposeMatrixf ( const GLfloat m [ 16 ] ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultTransposeMatrixf )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleCoverage ( GLclampf value , GLboolean invert ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSampleCoverage )(GLclampf, GLboolean);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSamplePass ( GLenum pass ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSamplePass )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glActiveTextureARB ( GLenum texture ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glActiveTextureARB )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClientActiveTextureARB ( GLenum texture ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glClientActiveTextureARB )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1dARB ( GLenum target , GLdouble s ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord1dARB )(GLenum, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1dvARB ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord1dvARB )(GLenum, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1fARB ( GLenum target , GLfloat s ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord1fARB )(GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1fvARB ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord1fvARB )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1iARB ( GLenum target , GLint s ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord1iARB )(GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1ivARB ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord1ivARB )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1sARB ( GLenum target , GLshort s ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord1sARB )(GLenum, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord1svARB ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord1svARB )(GLenum, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2dARB ( GLenum target , GLdouble s , GLdouble t ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord2dARB )(GLenum, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2dvARB ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord2dvARB )(GLenum, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2fARB ( GLenum target , GLfloat s , GLfloat t ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord2fARB )(GLenum, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2fvARB ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord2fvARB )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2iARB ( GLenum target , GLint s , GLint t ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord2iARB )(GLenum, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2ivARB ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord2ivARB )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2sARB ( GLenum target , GLshort s , GLshort t ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord2sARB )(GLenum, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord2svARB ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord2svARB )(GLenum, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3dARB ( GLenum target , GLdouble s , GLdouble t , GLdouble r ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord3dARB )(GLenum, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3dvARB ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord3dvARB )(GLenum, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3fARB ( GLenum target , GLfloat s , GLfloat t , GLfloat r ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord3fARB )(GLenum, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3fvARB ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord3fvARB )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3iARB ( GLenum target , GLint s , GLint t , GLint r ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord3iARB )(GLenum, GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3ivARB ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord3ivARB )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3sARB ( GLenum target , GLshort s , GLshort t , GLshort r ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord3sARB )(GLenum, GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord3svARB ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord3svARB )(GLenum, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4dARB ( GLenum target , GLdouble s , GLdouble t , GLdouble r , GLdouble q ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord4dARB )(GLenum, GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4dvARB ( GLenum target , const GLdouble * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord4dvARB )(GLenum, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4fARB ( GLenum target , GLfloat s , GLfloat t , GLfloat r , GLfloat q ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord4fARB )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4fvARB ( GLenum target , const GLfloat * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord4fvARB )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4iARB ( GLenum target , GLint s , GLint t , GLint r , GLint q ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord4iARB )(GLenum, GLint, GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4ivARB ( GLenum target , const GLint * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord4ivARB )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4sARB ( GLenum target , GLshort s , GLshort t , GLshort r , GLshort q ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord4sARB )(GLenum, GLshort, GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiTexCoord4svARB ( GLenum target , const GLshort * v ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiTexCoord4svARB )(GLenum, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendColorEXT ( GLclampf red , GLclampf green , GLclampf blue , GLclampf alpha ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBlendColorEXT )(GLclampf, GLclampf, GLclampf, GLclampf);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPolygonOffsetEXT ( GLfloat factor , GLfloat bias ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPolygonOffsetEXT )(GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage3DEXT ( GLenum target , GLint level , GLenum internalFormat , GLsizei width , GLsizei height , GLsizei depth , GLint border , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexImage3DEXT )(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage3DEXT ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint zoffset , GLsizei width , GLsizei height , GLsizei depth , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexSubImage3DEXT )(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage3DEXT ( GLenum target , GLint level , GLint xoffset , GLint yoffset , GLint zoffset , GLint x , GLint y , GLsizei width , GLsizei height ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyTexSubImage3DEXT )(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGenTexturesEXT ( GLsizei n , GLuint * textures ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGenTexturesEXT )(GLsizei, GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteTexturesEXT ( GLsizei n , const GLuint * textures ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDeleteTexturesEXT )(GLsizei, const GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindTextureEXT ( GLenum target , GLuint texture ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBindTextureEXT )(GLenum, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPrioritizeTexturesEXT ( GLsizei n , const GLuint * textures , const GLclampf * priorities ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPrioritizeTexturesEXT )(GLsizei, const GLuint *, const GLclampf *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glAreTexturesResidentEXT ( GLsizei n , const GLuint * textures , GLboolean * residences ) ;
 * </pre> 
 */
	LIBAPI GLboolean (CALLBACK * disp__glAreTexturesResidentEXT )(GLsizei, const GLuint *, GLboolean *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsTextureEXT ( GLuint texture ) ;
 * </pre> 
 */
	LIBAPI GLboolean (CALLBACK * disp__glIsTextureEXT )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexPointerEXT ( GLint size , GLenum type , GLsizei stride , GLsizei count , const GLvoid * ptr ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexPointerEXT )(GLint, GLenum, GLsizei, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalPointerEXT ( GLenum type , GLsizei stride , GLsizei count , const GLvoid * ptr ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormalPointerEXT )(GLenum, GLsizei, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorPointerEXT ( GLint size , GLenum type , GLsizei stride , GLsizei count , const GLvoid * ptr ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorPointerEXT )(GLint, GLenum, GLsizei, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexPointerEXT ( GLenum type , GLsizei stride , GLsizei count , const GLvoid * ptr ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIndexPointerEXT )(GLenum, GLsizei, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoordPointerEXT ( GLint size , GLenum type , GLsizei stride , GLsizei count , const GLvoid * ptr ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoordPointerEXT )(GLint, GLenum, GLsizei, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlagPointerEXT ( GLsizei stride , GLsizei count , const GLboolean * ptr ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEdgeFlagPointerEXT )(GLsizei, GLsizei, const GLboolean *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPointervEXT ( GLenum pname , GLvoid * * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetPointervEXT )(GLenum, GLvoid **);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glArrayElementEXT ( GLint i ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glArrayElementEXT )(GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawArraysEXT ( GLenum mode , GLint first , GLsizei count ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDrawArraysEXT )(GLenum, GLint, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendEquationEXT ( GLenum mode ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBlendEquationEXT )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfEXT ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPointParameterfEXT )(GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfvEXT ( GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPointParameterfvEXT )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfSGIS ( GLenum pname , GLfloat param ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPointParameterfSGIS )(GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfvSGIS ( GLenum pname , const GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPointParameterfvSGIS )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableEXT ( GLenum target , GLenum internalformat , GLsizei width , GLenum format , GLenum type , const GLvoid * table ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorTableEXT )(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorSubTableEXT ( GLenum target , GLsizei start , GLsizei count , GLenum format , GLenum type , const GLvoid * data ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorSubTableEXT )(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableEXT ( GLenum target , GLenum format , GLenum type , GLvoid * table ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetColorTableEXT )(GLenum, GLenum, GLenum, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameterfvEXT ( GLenum target , GLenum pname , GLfloat * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetColorTableParameterfvEXT )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameterivEXT ( GLenum target , GLenum pname , GLint * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetColorTableParameterivEXT )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLockArraysEXT ( GLint first , GLsizei count ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLockArraysEXT )(GLint, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glUnlockArraysEXT ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glUnlockArraysEXT )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadTransposeMatrixfARB ( const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLoadTransposeMatrixfARB )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadTransposeMatrixdARB ( const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLoadTransposeMatrixdARB )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultTransposeMatrixfARB ( const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultTransposeMatrixfARB )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultTransposeMatrixdARB ( const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultTransposeMatrixdARB )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleCoverageARB ( GLclampf , GLboolean ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSampleCoverageARB )(GLclampf, GLboolean);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage3DARB ( GLenum , GLint , GLenum , GLsizei , GLsizei , GLsizei , GLint , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCompressedTexImage3DARB )(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage2DARB ( GLenum , GLint , GLenum , GLsizei , GLsizei , GLint , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCompressedTexImage2DARB )(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexImage1DARB ( GLenum , GLint , GLenum , GLsizei , GLint , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCompressedTexImage1DARB )(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage3DARB ( GLenum , GLint , GLint , GLint , GLint , GLsizei , GLsizei , GLsizei , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCompressedTexSubImage3DARB )(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage2DARB ( GLenum , GLint , GLint , GLint , GLsizei , GLsizei , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCompressedTexSubImage2DARB )(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCompressedTexSubImage1DARB ( GLenum , GLint , GLint , GLsizei , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCompressedTexSubImage1DARB )(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCompressedTexImageARB ( GLenum , GLint , void * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetCompressedTexImageARB )(GLenum, GLint, void *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightbvARB ( GLint , const GLbyte * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glWeightbvARB )(GLint, const GLbyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightsvARB ( GLint , const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glWeightsvARB )(GLint, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightivARB ( GLint , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glWeightivARB )(GLint, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightfvARB ( GLint , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glWeightfvARB )(GLint, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightdvARB ( GLint , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glWeightdvARB )(GLint, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightubvARB ( GLint , const GLubyte * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glWeightubvARB )(GLint, const GLubyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightusvARB ( GLint , const GLushort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glWeightusvARB )(GLint, const GLushort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightuivARB ( GLint , const GLuint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glWeightuivARB )(GLint, const GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWeightPointerARB ( GLint , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glWeightPointerARB )(GLint, GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexBlendARB ( GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexBlendARB )(GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCurrentPaletteMatrixARB ( GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCurrentPaletteMatrixARB )(GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixIndexubvARB ( GLint , const GLubyte * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMatrixIndexubvARB )(GLint, const GLubyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixIndexusvARB ( GLint , const GLushort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMatrixIndexusvARB )(GLint, const GLushort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixIndexuivARB ( GLint , const GLuint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMatrixIndexuivARB )(GLint, const GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMatrixIndexPointerARB ( GLint , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMatrixIndexPointerARB )(GLint, GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexFilterFuncSGIS ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetTexFilterFuncSGIS )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexFilterFuncSGIS ( GLenum , GLenum , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexFilterFuncSGIS )(GLenum, GLenum, GLsizei, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage1DEXT ( GLenum , GLint , GLint , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexSubImage1DEXT )(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage2DEXT ( GLenum , GLint , GLint , GLint , GLsizei , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexSubImage2DEXT )(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexImage1DEXT ( GLenum , GLint , GLenum , GLint , GLint , GLsizei , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyTexImage1DEXT )(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexImage2DEXT ( GLenum , GLint , GLenum , GLint , GLint , GLsizei , GLsizei , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyTexImage2DEXT )(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage1DEXT ( GLenum , GLint , GLint , GLint , GLint , GLsizei ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyTexSubImage1DEXT )(GLenum, GLint, GLint, GLint, GLint, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyTexSubImage2DEXT ( GLenum , GLint , GLint , GLint , GLint , GLint , GLsizei , GLsizei ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyTexSubImage2DEXT )(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogramEXT ( GLenum , GLboolean , GLenum , GLenum , GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetHistogramEXT )(GLenum, GLboolean, GLenum, GLenum, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogramParameterfvEXT ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetHistogramParameterfvEXT )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetHistogramParameterivEXT ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetHistogramParameterivEXT )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmaxEXT ( GLenum , GLboolean , GLenum , GLenum , GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetMinmaxEXT )(GLenum, GLboolean, GLenum, GLenum, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmaxParameterfvEXT ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetMinmaxParameterfvEXT )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMinmaxParameterivEXT ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetMinmaxParameterivEXT )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glHistogramEXT ( GLenum , GLsizei , GLenum , GLboolean ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glHistogramEXT )(GLenum, GLsizei, GLenum, GLboolean);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMinmaxEXT ( GLenum , GLenum , GLboolean ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMinmaxEXT )(GLenum, GLenum, GLboolean);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glResetHistogramEXT ( GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glResetHistogramEXT )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glResetMinmaxEXT ( GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glResetMinmaxEXT )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionFilter1DEXT ( GLenum , GLenum , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glConvolutionFilter1DEXT )(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionFilter2DEXT ( GLenum , GLenum , GLsizei , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glConvolutionFilter2DEXT )(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameterfEXT ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glConvolutionParameterfEXT )(GLenum, GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameterfvEXT ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glConvolutionParameterfvEXT )(GLenum, GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameteriEXT ( GLenum , GLenum , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glConvolutionParameteriEXT )(GLenum, GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glConvolutionParameterivEXT ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glConvolutionParameterivEXT )(GLenum, GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyConvolutionFilter1DEXT ( GLenum , GLenum , GLint , GLint , GLsizei ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyConvolutionFilter1DEXT )(GLenum, GLenum, GLint, GLint, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyConvolutionFilter2DEXT ( GLenum , GLenum , GLint , GLint , GLsizei , GLsizei ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyConvolutionFilter2DEXT )(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionFilterEXT ( GLenum , GLenum , GLenum , GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetConvolutionFilterEXT )(GLenum, GLenum, GLenum, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionParameterfvEXT ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetConvolutionParameterfvEXT )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetConvolutionParameterivEXT ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetConvolutionParameterivEXT )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetSeparableFilterEXT ( GLenum , GLenum , GLenum , GLvoid * , GLvoid * , GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetSeparableFilterEXT )(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSeparableFilter2DEXT ( GLenum , GLenum , GLsizei , GLsizei , GLenum , GLenum , const GLvoid * , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSeparableFilter2DEXT )(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableSGI ( GLenum , GLenum , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorTableSGI )(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableParameterfvSGI ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorTableParameterfvSGI )(GLenum, GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorTableParameterivSGI ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorTableParameterivSGI )(GLenum, GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyColorTableSGI ( GLenum , GLenum , GLint , GLint , GLsizei ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyColorTableSGI )(GLenum, GLenum, GLint, GLint, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableSGI ( GLenum , GLenum , GLenum , GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetColorTableSGI )(GLenum, GLenum, GLenum, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameterfvSGI ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetColorTableParameterfvSGI )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetColorTableParameterivSGI ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetColorTableParameterivSGI )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenSGIX ( GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelTexGenSGIX )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenParameteriSGIS ( GLenum , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelTexGenParameteriSGIS )(GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenParameterivSGIS ( GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelTexGenParameterivSGIS )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenParameterfSGIS ( GLenum , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelTexGenParameterfSGIS )(GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTexGenParameterfvSGIS ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelTexGenParameterfvSGIS )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelTexGenParameterivSGIS ( GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetPixelTexGenParameterivSGIS )(GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetPixelTexGenParameterfvSGIS ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetPixelTexGenParameterfvSGIS )(GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexImage4DSGIS ( GLenum , GLint , GLenum , GLsizei , GLsizei , GLsizei , GLsizei , GLint , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexImage4DSGIS )(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexSubImage4DSGIS ( GLenum , GLint , GLint , GLint , GLint , GLint , GLsizei , GLsizei , GLsizei , GLsizei , GLenum , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexSubImage4DSGIS )(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDetailTexFuncSGIS ( GLenum , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDetailTexFuncSGIS )(GLenum, GLsizei, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetDetailTexFuncSGIS ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetDetailTexFuncSGIS )(GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSharpenTexFuncSGIS ( GLenum , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSharpenTexFuncSGIS )(GLenum, GLsizei, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetSharpenTexFuncSGIS ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetSharpenTexFuncSGIS )(GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleMaskSGIS ( GLclampf , GLboolean ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSampleMaskSGIS )(GLclampf, GLboolean);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSamplePatternSGIS ( GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSamplePatternSGIS )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSpriteParameterfSGIX ( GLenum , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSpriteParameterfSGIX )(GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSpriteParameterfvSGIX ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSpriteParameterfvSGIX )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSpriteParameteriSGIX ( GLenum , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSpriteParameteriSGIX )(GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSpriteParameterivSGIX ( GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSpriteParameterivSGIX )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfARB ( GLenum , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPointParameterfARB )(GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPointParameterfvARB ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPointParameterfvARB )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glGetInstrumentsSGIX ( void ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__glGetInstrumentsSGIX )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glInstrumentsBufferSGIX ( GLsizei , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glInstrumentsBufferSGIX )(GLsizei, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glPollInstrumentsSGIX ( GLint * ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__glPollInstrumentsSGIX )(GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReadInstrumentsSGIX ( GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReadInstrumentsSGIX )(GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStartInstrumentsSGIX ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glStartInstrumentsSGIX )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glStopInstrumentsSGIX ( GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glStopInstrumentsSGIX )(GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFrameZoomSGIX ( GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFrameZoomSGIX )(GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTagSampleBufferSGIX ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTagSampleBufferSGIX )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeformationMap3dSGIX ( GLenum , GLdouble , GLdouble , GLint , GLint , GLdouble , GLdouble , GLint , GLint , GLdouble , GLdouble , GLint , GLint , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDeformationMap3dSGIX )(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeformationMap3fSGIX ( GLenum , GLfloat , GLfloat , GLint , GLint , GLfloat , GLfloat , GLint , GLint , GLfloat , GLfloat , GLint , GLint , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDeformationMap3fSGIX )(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeformSGIX ( GLbitfield ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDeformSGIX )(GLbitfield);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadIdentityDeformationMapSGIX ( GLbitfield ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLoadIdentityDeformationMapSGIX )(GLbitfield);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReferencePlaneSGIX ( const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReferencePlaneSGIX )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFlushRasterSGIX ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFlushRasterSGIX )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogFuncSGIS ( GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFogFuncSGIS )(GLsizei, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFogFuncSGIS ( GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetFogFuncSGIS )(GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glImageTransformParameteriHP ( GLenum , GLenum , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glImageTransformParameteriHP )(GLenum, GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glImageTransformParameterfHP ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glImageTransformParameterfHP )(GLenum, GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glImageTransformParameterivHP ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glImageTransformParameterivHP )(GLenum, GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glImageTransformParameterfvHP ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glImageTransformParameterfvHP )(GLenum, GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetImageTransformParameterivHP ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetImageTransformParameterivHP )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetImageTransformParameterfvHP ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetImageTransformParameterfvHP )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCopyColorSubTableEXT ( GLenum , GLsizei , GLint , GLint , GLsizei ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCopyColorSubTableEXT )(GLenum, GLsizei, GLint, GLint, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glHintPGI ( GLenum , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glHintPGI )(GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetListParameterfvSGIX ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetListParameterfvSGIX )(GLuint, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetListParameterivSGIX ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetListParameterivSGIX )(GLuint, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glListParameterfSGIX ( GLuint , GLenum , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glListParameterfSGIX )(GLuint, GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glListParameterfvSGIX ( GLuint , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glListParameterfvSGIX )(GLuint, GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glListParameteriSGIX ( GLuint , GLenum , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glListParameteriSGIX )(GLuint, GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glListParameterivSGIX ( GLuint , GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glListParameterivSGIX )(GLuint, GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexMaterialEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIndexMaterialEXT )(GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexFuncEXT ( GLenum , GLclampf ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIndexFuncEXT )(GLenum, GLclampf);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCullParameterdvEXT ( GLenum , GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCullParameterdvEXT )(GLenum, GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCullParameterfvEXT ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCullParameterfvEXT )(GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentColorMaterialSGIX ( GLenum , GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFragmentColorMaterialSGIX )(GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightfSGIX ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFragmentLightfSGIX )(GLenum, GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightfvSGIX ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFragmentLightfvSGIX )(GLenum, GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightiSGIX ( GLenum , GLenum , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFragmentLightiSGIX )(GLenum, GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightivSGIX ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFragmentLightivSGIX )(GLenum, GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightModelfSGIX ( GLenum , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFragmentLightModelfSGIX )(GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightModelfvSGIX ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFragmentLightModelfvSGIX )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightModeliSGIX ( GLenum , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFragmentLightModeliSGIX )(GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentLightModelivSGIX ( GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFragmentLightModelivSGIX )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentMaterialfSGIX ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFragmentMaterialfSGIX )(GLenum, GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentMaterialfvSGIX ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFragmentMaterialfvSGIX )(GLenum, GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentMaterialiSGIX ( GLenum , GLenum , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFragmentMaterialiSGIX )(GLenum, GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFragmentMaterialivSGIX ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFragmentMaterialivSGIX )(GLenum, GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFragmentLightfvSGIX ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetFragmentLightfvSGIX )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFragmentLightivSGIX ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetFragmentLightivSGIX )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFragmentMaterialfvSGIX ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetFragmentMaterialfvSGIX )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFragmentMaterialivSGIX ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetFragmentMaterialivSGIX )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLightEnviSGIX ( GLenum , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLightEnviSGIX )(GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDrawRangeElementsEXT ( GLenum , GLuint , GLuint , GLsizei , GLenum , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDrawRangeElementsEXT )(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glApplyTextureEXT ( GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glApplyTextureEXT )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTextureLightEXT ( GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTextureLightEXT )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTextureMaterialEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTextureMaterialEXT )(GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAsyncMarkerSGIX ( GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glAsyncMarkerSGIX )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glFinishAsyncSGIX ( GLuint * ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__glFinishAsyncSGIX )(GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint glPollAsyncSGIX ( GLuint * ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__glPollAsyncSGIX )(GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenAsyncMarkersSGIX ( GLsizei ) ;
 * </pre> 
 */
	LIBAPI GLuint (CALLBACK * disp__glGenAsyncMarkersSGIX )(GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteAsyncMarkersSGIX ( GLuint , GLsizei ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDeleteAsyncMarkersSGIX )(GLuint, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsAsyncMarkerSGIX ( GLuint ) ;
 * </pre> 
 */
	LIBAPI GLboolean (CALLBACK * disp__glIsAsyncMarkerSGIX )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexPointervINTEL ( GLint , GLenum , const GLvoid * * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexPointervINTEL )(GLint, GLenum, const GLvoid **);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalPointervINTEL ( GLenum , const GLvoid * * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormalPointervINTEL )(GLenum, const GLvoid **);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorPointervINTEL ( GLint , GLenum , const GLvoid * * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorPointervINTEL )(GLint, GLenum, const GLvoid **);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoordPointervINTEL ( GLint , GLenum , const GLvoid * * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoordPointervINTEL )(GLint, GLenum, const GLvoid **);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransformParameteriEXT ( GLenum , GLenum , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelTransformParameteriEXT )(GLenum, GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransformParameterfEXT ( GLenum , GLenum , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelTransformParameterfEXT )(GLenum, GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransformParameterivEXT ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelTransformParameterivEXT )(GLenum, GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPixelTransformParameterfvEXT ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPixelTransformParameterfvEXT )(GLenum, GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3bEXT ( GLbyte , GLbyte , GLbyte ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColor3bEXT )(GLbyte, GLbyte, GLbyte);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3bvEXT ( const GLbyte * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColor3bvEXT )(const GLbyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3dEXT ( GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColor3dEXT )(GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3dvEXT ( const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColor3dvEXT )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3fEXT ( GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColor3fEXT )(GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3fvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColor3fvEXT )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3iEXT ( GLint , GLint , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColor3iEXT )(GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3ivEXT ( const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColor3ivEXT )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3sEXT ( GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColor3sEXT )(GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3svEXT ( const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColor3svEXT )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3ubEXT ( GLubyte , GLubyte , GLubyte ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColor3ubEXT )(GLubyte, GLubyte, GLubyte);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3ubvEXT ( const GLubyte * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColor3ubvEXT )(const GLubyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3uiEXT ( GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColor3uiEXT )(GLuint, GLuint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3uivEXT ( const GLuint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColor3uivEXT )(const GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3usEXT ( GLushort , GLushort , GLushort ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColor3usEXT )(GLushort, GLushort, GLushort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColor3usvEXT ( const GLushort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColor3usvEXT )(const GLushort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColorPointerEXT ( GLint , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColorPointerEXT )(GLint, GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTextureNormalEXT ( GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTextureNormalEXT )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiDrawArraysEXT ( GLenum , GLint * , GLsizei * , GLsizei ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiDrawArraysEXT )(GLenum, GLint *, GLsizei *, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiDrawElementsEXT ( GLenum , const GLsizei * , GLenum , const GLvoid * * , GLsizei ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiDrawElementsEXT )(GLenum, const GLsizei *, GLenum, const GLvoid **, GLsizei);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoordfEXT ( GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFogCoordfEXT )(GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoordfvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFogCoordfvEXT )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoorddEXT ( GLdouble ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFogCoorddEXT )(GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoorddvEXT ( const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFogCoorddvEXT )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoordPointerEXT ( GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFogCoordPointerEXT )(GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3bEXT ( GLbyte , GLbyte , GLbyte ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTangent3bEXT )(GLbyte, GLbyte, GLbyte);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3bvEXT ( const GLbyte * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTangent3bvEXT )(const GLbyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3dEXT ( GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTangent3dEXT )(GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3dvEXT ( const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTangent3dvEXT )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3fEXT ( GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTangent3fEXT )(GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3fvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTangent3fvEXT )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3iEXT ( GLint , GLint , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTangent3iEXT )(GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3ivEXT ( const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTangent3ivEXT )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3sEXT ( GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTangent3sEXT )(GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangent3svEXT ( const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTangent3svEXT )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3bEXT ( GLbyte , GLbyte , GLbyte ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBinormal3bEXT )(GLbyte, GLbyte, GLbyte);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3bvEXT ( const GLbyte * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBinormal3bvEXT )(const GLbyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3dEXT ( GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBinormal3dEXT )(GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3dvEXT ( const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBinormal3dvEXT )(const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3fEXT ( GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBinormal3fEXT )(GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3fvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBinormal3fvEXT )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3iEXT ( GLint , GLint , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBinormal3iEXT )(GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3ivEXT ( const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBinormal3ivEXT )(const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3sEXT ( GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBinormal3sEXT )(GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormal3svEXT ( const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBinormal3svEXT )(const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTangentPointerEXT ( GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTangentPointerEXT )(GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBinormalPointerEXT ( GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBinormalPointerEXT )(GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFinishTextureSUNX ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFinishTextureSUNX )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorbSUN ( GLbyte ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGlobalAlphaFactorbSUN )(GLbyte);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorsSUN ( GLshort ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGlobalAlphaFactorsSUN )(GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactoriSUN ( GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGlobalAlphaFactoriSUN )(GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorfSUN ( GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGlobalAlphaFactorfSUN )(GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactordSUN ( GLdouble ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGlobalAlphaFactordSUN )(GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorubSUN ( GLubyte ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGlobalAlphaFactorubSUN )(GLubyte);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactorusSUN ( GLushort ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGlobalAlphaFactorusSUN )(GLushort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGlobalAlphaFactoruiSUN ( GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGlobalAlphaFactoruiSUN )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiSUN ( GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiSUN )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeusSUN ( GLushort ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeusSUN )(GLushort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeubSUN ( GLubyte ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeubSUN )(GLubyte);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuivSUN ( const GLuint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuivSUN )(const GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeusvSUN ( const GLushort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeusvSUN )(const GLushort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeubvSUN ( const GLubyte * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeubvSUN )(const GLubyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodePointerSUN ( GLenum , GLsizei , const GLvoid * * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodePointerSUN )(GLenum, GLsizei, const GLvoid **);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubVertex2fSUN ( GLubyte , GLubyte , GLubyte , GLubyte , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4ubVertex2fSUN )(GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubVertex2fvSUN ( const GLubyte * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4ubVertex2fvSUN )(const GLubyte *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubVertex3fSUN ( GLubyte , GLubyte , GLubyte , GLubyte , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4ubVertex3fSUN )(GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4ubVertex3fvSUN ( const GLubyte * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4ubVertex3fvSUN )(const GLubyte *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3fVertex3fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor3fVertex3fvSUN ( const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor3fVertex3fvSUN )(const GLfloat *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormal3fVertex3fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormal3fVertex3fvSUN ( const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormal3fVertex3fvSUN )(const GLfloat *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4fNormal3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4fNormal3fVertex3fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColor4fNormal3fVertex3fvSUN ( const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColor4fNormal3fVertex3fvSUN )(const GLfloat *, const GLfloat *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2fVertex3fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fVertex3fvSUN ( const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2fVertex3fvSUN )(const GLfloat *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fVertex4fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord4fVertex4fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fVertex4fvSUN ( const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord4fVertex4fvSUN )(const GLfloat *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor4ubVertex3fSUN ( GLfloat , GLfloat , GLubyte , GLubyte , GLubyte , GLubyte , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2fColor4ubVertex3fSUN )(GLfloat, GLfloat, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor4ubVertex3fvSUN ( const GLfloat * , const GLubyte * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2fColor4ubVertex3fvSUN )(const GLfloat *, const GLubyte *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2fColor3fVertex3fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor3fVertex3fvSUN ( const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2fColor3fVertex3fvSUN )(const GLfloat *, const GLfloat *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fNormal3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2fNormal3fVertex3fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fNormal3fVertex3fvSUN ( const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2fNormal3fVertex3fvSUN )(const GLfloat *, const GLfloat *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor4fNormal3fVertex3fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2fColor4fNormal3fVertex3fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord2fColor4fNormal3fVertex3fvSUN ( const GLfloat * , const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord2fColor4fNormal3fVertex3fvSUN )(const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fColor4fNormal3fVertex4fSUN ( GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord4fColor4fNormal3fVertex4fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoord4fColor4fNormal3fVertex4fvSUN ( const GLfloat * , const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoord4fColor4fNormal3fVertex4fvSUN )(const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiVertex3fSUN )(GLenum, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiVertex3fvSUN ( const GLenum * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiVertex3fvSUN )(const GLenum *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor4ubVertex3fSUN ( GLenum , GLubyte , GLubyte , GLubyte , GLubyte , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiColor4ubVertex3fSUN )(GLenum, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor4ubVertex3fvSUN ( const GLenum * , const GLubyte * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiColor4ubVertex3fvSUN )(const GLenum *, const GLubyte *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor3fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiColor3fVertex3fSUN )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor3fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiColor3fVertex3fvSUN )(const GLenum *, const GLfloat *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiNormal3fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiNormal3fVertex3fSUN )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiNormal3fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiNormal3fVertex3fvSUN )(const GLenum *, const GLfloat *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor4fNormal3fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiColor4fNormal3fVertex3fSUN )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiColor4fNormal3fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiColor4fNormal3fVertex3fvSUN )(const GLenum *, const GLfloat *, const GLfloat *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiTexCoord2fVertex3fSUN )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiTexCoord2fVertex3fvSUN )(const GLenum *, const GLfloat *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN )(const GLenum *, const GLfloat *, const GLfloat *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN ( const GLenum * , const GLfloat * , const GLfloat * , const GLfloat * , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN )(const GLenum *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendFuncSeparateEXT ( GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBlendFuncSeparateEXT )(GLenum, GLenum, GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBlendFuncSeparateINGR ( GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBlendFuncSeparateINGR )(GLenum, GLenum, GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexWeightfEXT ( GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexWeightfEXT )(GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexWeightfvEXT ( const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexWeightfvEXT )(const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexWeightPointerEXT ( GLsizei , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexWeightPointerEXT )(GLsizei, GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFlushVertexArrayRangeNV ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFlushVertexArrayRangeNV )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexArrayRangeNV ( GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexArrayRangeNV )(GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerParameterfvNV ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCombinerParameterfvNV )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerParameterfNV ( GLenum , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCombinerParameterfNV )(GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerParameterivNV ( GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCombinerParameterivNV )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerParameteriNV ( GLenum , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCombinerParameteriNV )(GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerInputNV ( GLenum , GLenum , GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCombinerInputNV )(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerOutputNV ( GLenum , GLenum , GLenum , GLenum , GLenum , GLenum , GLenum , GLboolean , GLboolean , GLboolean ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCombinerOutputNV )(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFinalCombinerInputNV ( GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFinalCombinerInputNV )(GLenum, GLenum, GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCombinerInputParameterfvNV ( GLenum , GLenum , GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetCombinerInputParameterfvNV )(GLenum, GLenum, GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCombinerInputParameterivNV ( GLenum , GLenum , GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetCombinerInputParameterivNV )(GLenum, GLenum, GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCombinerOutputParameterfvNV ( GLenum , GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetCombinerOutputParameterfvNV )(GLenum, GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCombinerOutputParameterivNV ( GLenum , GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetCombinerOutputParameterivNV )(GLenum, GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFinalCombinerInputParameterfvNV ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetFinalCombinerInputParameterfvNV )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFinalCombinerInputParameterivNV ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetFinalCombinerInputParameterivNV )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiModeDrawArraysIBM ( GLenum , const GLint * , const GLsizei * , GLsizei , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiModeDrawArraysIBM )(GLenum, const GLint *, const GLsizei *, GLsizei, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMultiModeDrawElementsIBM ( const GLenum * , const GLsizei * , GLenum , const GLvoid * * , GLsizei , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMultiModeDrawElementsIBM )(const GLenum *, const GLsizei *, GLenum, const GLvoid **, GLsizei, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorPointerListIBM ( GLint , GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorPointerListIBM )(GLint, GLenum, GLint, const GLvoid **, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSecondaryColorPointerListIBM ( GLint , GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSecondaryColorPointerListIBM )(GLint, GLenum, GLint, const GLvoid **, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEdgeFlagPointerListIBM ( GLint , const GLboolean * * , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEdgeFlagPointerListIBM )(GLint, const GLboolean **, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFogCoordPointerListIBM ( GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFogCoordPointerListIBM )(GLenum, GLint, const GLvoid **, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIndexPointerListIBM ( GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIndexPointerListIBM )(GLenum, GLint, const GLvoid **, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalPointerListIBM ( GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormalPointerListIBM )(GLenum, GLint, const GLvoid **, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexCoordPointerListIBM ( GLint , GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexCoordPointerListIBM )(GLint, GLenum, GLint, const GLvoid **, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexPointerListIBM ( GLint , GLenum , GLint , const GLvoid * * , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexPointerListIBM )(GLint, GLenum, GLint, const GLvoid **, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTbufferMask3DFX ( GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTbufferMask3DFX )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleMaskEXT ( GLclampf , GLboolean ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSampleMaskEXT )(GLclampf, GLboolean);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSamplePatternEXT ( GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSamplePatternEXT )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTextureColorMaskSGIS ( GLboolean , GLboolean , GLboolean , GLboolean ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTextureColorMaskSGIS )(GLboolean, GLboolean, GLboolean, GLboolean);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glIglooInterfaceSGIX ( GLenum , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glIglooInterfaceSGIX )(GLenum, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGenFencesNV ( GLsizei , GLuint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGenFencesNV )(GLsizei, GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteFencesNV ( GLsizei , const GLuint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDeleteFencesNV )(GLsizei, const GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSetFenceNV ( GLuint , GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSetFenceNV )(GLuint, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glTestFenceNV ( GLuint ) ;
 * </pre> 
 */
	LIBAPI GLboolean (CALLBACK * disp__glTestFenceNV )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glFinishFenceNV ( GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glFinishFenceNV )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsFenceNV ( GLuint ) ;
 * </pre> 
 */
	LIBAPI GLboolean (CALLBACK * disp__glIsFenceNV )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetFenceivNV ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetFenceivNV )(GLuint, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapControlPointsNV ( GLenum , GLuint , GLenum , GLsizei , GLsizei , GLint , GLint , GLboolean , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMapControlPointsNV )(GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapParameterivNV ( GLenum , GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMapParameterivNV )(GLenum, GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glMapParameterfvNV ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glMapParameterfvNV )(GLenum, GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapControlPointsNV ( GLenum , GLuint , GLenum , GLsizei , GLsizei , GLboolean , GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetMapControlPointsNV )(GLenum, GLuint, GLenum, GLsizei, GLsizei, GLboolean, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapParameterivNV ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetMapParameterivNV )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapParameterfvNV ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetMapParameterfvNV )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapAttribParameterivNV ( GLenum , GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetMapAttribParameterivNV )(GLenum, GLuint, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetMapAttribParameterfvNV ( GLenum , GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetMapAttribParameterfvNV )(GLenum, GLuint, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEvalMapsNV ( GLenum , GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEvalMapsNV )(GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glCombinerStageParameterfvNV ( GLenum , GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glCombinerStageParameterfvNV )(GLenum, GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetCombinerStageParameterfvNV ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetCombinerStageParameterfvNV )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindProgramNV ( GLenum , GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBindProgramNV )(GLenum, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteProgramsNV ( GLsizei , const GLuint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDeleteProgramsNV )(GLsizei, const GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glExecuteProgramNV ( GLenum , GLuint , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glExecuteProgramNV )(GLenum, GLuint, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGenProgramsNV ( GLsizei , GLuint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGenProgramsNV )(GLsizei, GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glAreProgramsResidentNV ( GLsizei , const GLuint * , GLboolean * ) ;
 * </pre> 
 */
	LIBAPI GLboolean (CALLBACK * disp__glAreProgramsResidentNV )(GLsizei, const GLuint *, GLboolean *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glRequestResidentProgramsNV ( GLsizei , const GLuint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glRequestResidentProgramsNV )(GLsizei, const GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetProgramParameterfvNV ( GLenum , GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetProgramParameterfvNV )(GLenum, GLuint, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetProgramParameterdvNV ( GLenum , GLuint , GLenum , GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetProgramParameterdvNV )(GLenum, GLuint, GLenum, GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetProgramivNV ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetProgramivNV )(GLuint, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetProgramStringNV ( GLuint , GLenum , GLubyte * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetProgramStringNV )(GLuint, GLenum, GLubyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTrackMatrixivNV ( GLenum , GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetTrackMatrixivNV )(GLenum, GLuint, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVertexAttribdvNV ( GLuint , GLenum , GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetVertexAttribdvNV )(GLuint, GLenum, GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVertexAttribfvNV ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetVertexAttribfvNV )(GLuint, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVertexAttribivNV ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetVertexAttribivNV )(GLuint, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVertexAttribPointervNV ( GLuint , GLenum , GLvoid * * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetVertexAttribPointervNV )(GLuint, GLenum, GLvoid **);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsProgramNV ( GLuint ) ;
 * </pre> 
 */
	LIBAPI GLboolean (CALLBACK * disp__glIsProgramNV )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glLoadProgramNV ( GLenum , GLuint , GLsizei , const GLubyte * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glLoadProgramNV )(GLenum, GLuint, GLsizei, const GLubyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameter4fNV ( GLenum , GLuint , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glProgramParameter4fNV )(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameter4dNV ( GLenum , GLuint , GLdouble , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glProgramParameter4dNV )(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameter4dvNV ( GLenum , GLuint , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glProgramParameter4dvNV )(GLenum, GLuint, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameter4fvNV ( GLenum , GLuint , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glProgramParameter4fvNV )(GLenum, GLuint, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameters4dvNV ( GLenum , GLuint , GLuint , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glProgramParameters4dvNV )(GLenum, GLuint, GLuint, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glProgramParameters4fvNV ( GLenum , GLuint , GLuint , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glProgramParameters4fvNV )(GLenum, GLuint, GLuint, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTrackMatrixNV ( GLenum , GLuint , GLenum , GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTrackMatrixNV )(GLenum, GLuint, GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribPointerNV ( GLuint , GLint , GLenum , GLsizei , const GLvoid * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttribPointerNV )(GLuint, GLint, GLenum, GLsizei, const GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1sNV ( GLuint , GLshort ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib1sNV )(GLuint, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1fNV ( GLuint , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib1fNV )(GLuint, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1dNV ( GLuint , GLdouble ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib1dNV )(GLuint, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2sNV ( GLuint , GLshort , GLshort ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib2sNV )(GLuint, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2fNV ( GLuint , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib2fNV )(GLuint, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2dNV ( GLuint , GLdouble , GLdouble ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib2dNV )(GLuint, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3sNV ( GLuint , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib3sNV )(GLuint, GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3fNV ( GLuint , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib3fNV )(GLuint, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3dNV ( GLuint , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib3dNV )(GLuint, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4sNV ( GLuint , GLshort , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib4sNV )(GLuint, GLshort, GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4fNV ( GLuint , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib4fNV )(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4dNV ( GLuint , GLdouble , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib4dNV )(GLuint, GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4ubNV ( GLuint , GLubyte , GLubyte , GLubyte , GLubyte ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib4ubNV )(GLuint, GLubyte, GLubyte, GLubyte, GLubyte);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1svNV ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib1svNV )(GLuint, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1fvNV ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib1fvNV )(GLuint, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib1dvNV ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib1dvNV )(GLuint, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2svNV ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib2svNV )(GLuint, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2fvNV ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib2fvNV )(GLuint, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib2dvNV ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib2dvNV )(GLuint, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3svNV ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib3svNV )(GLuint, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3fvNV ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib3fvNV )(GLuint, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib3dvNV ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib3dvNV )(GLuint, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4svNV ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib4svNV )(GLuint, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4fvNV ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib4fvNV )(GLuint, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4dvNV ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib4dvNV )(GLuint, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttrib4ubvNV ( GLuint , const GLubyte * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttrib4ubvNV )(GLuint, const GLubyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs1svNV ( GLuint , GLsizei , const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttribs1svNV )(GLuint, GLsizei, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs1fvNV ( GLuint , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttribs1fvNV )(GLuint, GLsizei, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs1dvNV ( GLuint , GLsizei , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttribs1dvNV )(GLuint, GLsizei, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs2svNV ( GLuint , GLsizei , const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttribs2svNV )(GLuint, GLsizei, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs2fvNV ( GLuint , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttribs2fvNV )(GLuint, GLsizei, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs2dvNV ( GLuint , GLsizei , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttribs2dvNV )(GLuint, GLsizei, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs3svNV ( GLuint , GLsizei , const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttribs3svNV )(GLuint, GLsizei, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs3fvNV ( GLuint , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttribs3fvNV )(GLuint, GLsizei, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs3dvNV ( GLuint , GLsizei , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttribs3dvNV )(GLuint, GLsizei, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs4svNV ( GLuint , GLsizei , const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttribs4svNV )(GLuint, GLsizei, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs4fvNV ( GLuint , GLsizei , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttribs4fvNV )(GLuint, GLsizei, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs4dvNV ( GLuint , GLsizei , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttribs4dvNV )(GLuint, GLsizei, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexAttribs4ubvNV ( GLuint , GLsizei , const GLubyte * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexAttribs4ubvNV )(GLuint, GLsizei, const GLubyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexBumpParameterivATI ( GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexBumpParameterivATI )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glTexBumpParameterfvATI ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexBumpParameterfvATI )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexBumpParameterivATI ( GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetTexBumpParameterivATI )(GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetTexBumpParameterfvATI ( GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetTexBumpParameterfvATI )(GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenFragmentShadersATI ( GLuint ) ;
 * </pre> 
 */
	LIBAPI GLuint (CALLBACK * disp__glGenFragmentShadersATI )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindFragmentShaderATI ( GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBindFragmentShaderATI )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteFragmentShaderATI ( GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDeleteFragmentShaderATI )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBeginFragmentShaderATI ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBeginFragmentShaderATI )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEndFragmentShaderATI ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEndFragmentShaderATI )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPassTexCoordATI ( GLuint , GLuint , GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPassTexCoordATI )(GLuint, GLuint, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSampleMapATI ( GLuint , GLuint , GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSampleMapATI )(GLuint, GLuint, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorFragmentOp1ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorFragmentOp1ATI )(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorFragmentOp2ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorFragmentOp2ATI )(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glColorFragmentOp3ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glColorFragmentOp3ATI )(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAlphaFragmentOp1ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glAlphaFragmentOp1ATI )(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAlphaFragmentOp2ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glAlphaFragmentOp2ATI )(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glAlphaFragmentOp3ATI ( GLenum , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glAlphaFragmentOp3ATI )(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSetFragmentShaderConstantATI ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSetFragmentShaderConstantATI )(GLuint, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPNTrianglesiATI ( GLenum , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPNTrianglesiATI )(GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glPNTrianglesfATI ( GLenum , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glPNTrianglesfATI )(GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glNewObjectBufferATI ( GLsizei , const GLvoid * , GLenum ) ;
 * </pre> 
 */
	LIBAPI GLuint (CALLBACK * disp__glNewObjectBufferATI )(GLsizei, const GLvoid *, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsObjectBufferATI ( GLuint ) ;
 * </pre> 
 */
	LIBAPI GLboolean (CALLBACK * disp__glIsObjectBufferATI )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glUpdateObjectBufferATI ( GLuint , GLuint , GLsizei , const GLvoid * , GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glUpdateObjectBufferATI )(GLuint, GLuint, GLsizei, const GLvoid *, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetObjectBufferfvATI ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetObjectBufferfvATI )(GLuint, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetObjectBufferivATI ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetObjectBufferivATI )(GLuint, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteObjectBufferATI ( GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDeleteObjectBufferATI )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glArrayObjectATI ( GLenum , GLint , GLenum , GLsizei , GLuint , GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glArrayObjectATI )(GLenum, GLint, GLenum, GLsizei, GLuint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetArrayObjectfvATI ( GLenum , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetArrayObjectfvATI )(GLenum, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetArrayObjectivATI ( GLenum , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetArrayObjectivATI )(GLenum, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantArrayObjectATI ( GLuint , GLenum , GLsizei , GLuint , GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVariantArrayObjectATI )(GLuint, GLenum, GLsizei, GLuint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantArrayObjectfvATI ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetVariantArrayObjectfvATI )(GLuint, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantArrayObjectivATI ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetVariantArrayObjectivATI )(GLuint, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBeginVertexShaderEXT ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBeginVertexShaderEXT )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEndVertexShaderEXT ( void ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEndVertexShaderEXT )(void);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glBindVertexShaderEXT ( GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glBindVertexShaderEXT )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenVertexShadersEXT ( GLuint ) ;
 * </pre> 
 */
	LIBAPI GLuint (CALLBACK * disp__glGenVertexShadersEXT )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDeleteVertexShaderEXT ( GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDeleteVertexShaderEXT )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glShaderOp1EXT ( GLenum , GLuint , GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glShaderOp1EXT )(GLenum, GLuint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glShaderOp2EXT ( GLenum , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glShaderOp2EXT )(GLenum, GLuint, GLuint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glShaderOp3EXT ( GLenum , GLuint , GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glShaderOp3EXT )(GLenum, GLuint, GLuint, GLuint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSwizzleEXT ( GLuint , GLuint , GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSwizzleEXT )(GLuint, GLuint, GLenum, GLenum, GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glWriteMaskEXT ( GLuint , GLuint , GLenum , GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glWriteMaskEXT )(GLuint, GLuint, GLenum, GLenum, GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glInsertComponentEXT ( GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glInsertComponentEXT )(GLuint, GLuint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glExtractComponentEXT ( GLuint , GLuint , GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glExtractComponentEXT )(GLuint, GLuint, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glGenSymbolsEXT ( GLenum , GLenum , GLenum , GLuint ) ;
 * </pre> 
 */
	LIBAPI GLuint (CALLBACK * disp__glGenSymbolsEXT )(GLenum, GLenum, GLenum, GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSetInvariantEXT ( GLuint , GLenum , const void * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSetInvariantEXT )(GLuint, GLenum, const void *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glSetLocalConstantEXT ( GLuint , GLenum , const void * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glSetLocalConstantEXT )(GLuint, GLenum, const void *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantbvEXT ( GLuint , const GLbyte * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVariantbvEXT )(GLuint, const GLbyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantsvEXT ( GLuint , const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVariantsvEXT )(GLuint, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantivEXT ( GLuint , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVariantivEXT )(GLuint, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantfvEXT ( GLuint , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVariantfvEXT )(GLuint, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantdvEXT ( GLuint , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVariantdvEXT )(GLuint, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantubvEXT ( GLuint , const GLubyte * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVariantubvEXT )(GLuint, const GLubyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantusvEXT ( GLuint , const GLushort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVariantusvEXT )(GLuint, const GLushort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantuivEXT ( GLuint , const GLuint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVariantuivEXT )(GLuint, const GLuint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVariantPointerEXT ( GLuint , GLenum , GLuint , const void * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVariantPointerEXT )(GLuint, GLenum, GLuint, const void *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glEnableVariantClientStateEXT ( GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glEnableVariantClientStateEXT )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glDisableVariantClientStateEXT ( GLuint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glDisableVariantClientStateEXT )(GLuint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindLightParameterEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	LIBAPI GLuint (CALLBACK * disp__glBindLightParameterEXT )(GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindMaterialParameterEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	LIBAPI GLuint (CALLBACK * disp__glBindMaterialParameterEXT )(GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindTexGenParameterEXT ( GLenum , GLenum , GLenum ) ;
 * </pre> 
 */
	LIBAPI GLuint (CALLBACK * disp__glBindTexGenParameterEXT )(GLenum, GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindTextureUnitParameterEXT ( GLenum , GLenum ) ;
 * </pre> 
 */
	LIBAPI GLuint (CALLBACK * disp__glBindTextureUnitParameterEXT )(GLenum, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLuint glBindParameterEXT ( GLenum ) ;
 * </pre> 
 */
	LIBAPI GLuint (CALLBACK * disp__glBindParameterEXT )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean glIsVariantEnabledEXT ( GLuint , GLenum ) ;
 * </pre> 
 */
	LIBAPI GLboolean (CALLBACK * disp__glIsVariantEnabledEXT )(GLuint, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantBooleanvEXT ( GLuint , GLenum , GLboolean * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetVariantBooleanvEXT )(GLuint, GLenum, GLboolean *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantIntegervEXT ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetVariantIntegervEXT )(GLuint, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantFloatvEXT ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetVariantFloatvEXT )(GLuint, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetVariantPointervEXT ( GLuint , GLenum , GLvoid * * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetVariantPointervEXT )(GLuint, GLenum, GLvoid **);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetInvariantBooleanvEXT ( GLuint , GLenum , GLboolean * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetInvariantBooleanvEXT )(GLuint, GLenum, GLboolean *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetInvariantIntegervEXT ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetInvariantIntegervEXT )(GLuint, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetInvariantFloatvEXT ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetInvariantFloatvEXT )(GLuint, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetLocalConstantBooleanvEXT ( GLuint , GLenum , GLboolean * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetLocalConstantBooleanvEXT )(GLuint, GLenum, GLboolean *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetLocalConstantIntegervEXT ( GLuint , GLenum , GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetLocalConstantIntegervEXT )(GLuint, GLenum, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glGetLocalConstantFloatvEXT ( GLuint , GLenum , GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetLocalConstantFloatvEXT )(GLuint, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1s ( GLenum , GLshort ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream1s )(GLenum, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1sv ( GLenum , const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream1sv )(GLenum, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1i ( GLenum , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream1i )(GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1iv ( GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream1iv )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1f ( GLenum , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream1f )(GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1fv ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream1fv )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1d ( GLenum , GLdouble ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream1d )(GLenum, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream1dv ( GLenum , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream1dv )(GLenum, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2s ( GLenum , GLshort , GLshort ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream2s )(GLenum, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2sv ( GLenum , const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream2sv )(GLenum, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2i ( GLenum , GLint , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream2i )(GLenum, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2iv ( GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream2iv )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2f ( GLenum , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream2f )(GLenum, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2fv ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream2fv )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2d ( GLenum , GLdouble , GLdouble ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream2d )(GLenum, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream2dv ( GLenum , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream2dv )(GLenum, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3s ( GLenum , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream3s )(GLenum, GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3sv ( GLenum , const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream3sv )(GLenum, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3i ( GLenum , GLint , GLint , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream3i )(GLenum, GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3iv ( GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream3iv )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3f ( GLenum , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream3f )(GLenum, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3fv ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream3fv )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3d ( GLenum , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream3d )(GLenum, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream3dv ( GLenum , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream3dv )(GLenum, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4s ( GLenum , GLshort , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream4s )(GLenum, GLshort, GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4sv ( GLenum , const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream4sv )(GLenum, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4i ( GLenum , GLint , GLint , GLint , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream4i )(GLenum, GLint, GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4iv ( GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream4iv )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4f ( GLenum , GLfloat , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream4f )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4fv ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream4fv )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4d ( GLenum , GLdouble , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream4d )(GLenum, GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexStream4dv ( GLenum , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexStream4dv )(GLenum, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3b ( GLenum , GLbyte , GLbyte , GLbyte ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormalStream3b )(GLenum, GLbyte, GLbyte, GLbyte);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3bv ( GLenum , const GLbyte * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormalStream3bv )(GLenum, const GLbyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3s ( GLenum , GLshort , GLshort , GLshort ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormalStream3s )(GLenum, GLshort, GLshort, GLshort);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3sv ( GLenum , const GLshort * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormalStream3sv )(GLenum, const GLshort *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3i ( GLenum , GLint , GLint , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormalStream3i )(GLenum, GLint, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3iv ( GLenum , const GLint * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormalStream3iv )(GLenum, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3f ( GLenum , GLfloat , GLfloat , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormalStream3f )(GLenum, GLfloat, GLfloat, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3fv ( GLenum , const GLfloat * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormalStream3fv )(GLenum, const GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3d ( GLenum , GLdouble , GLdouble , GLdouble ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormalStream3d )(GLenum, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glNormalStream3dv ( GLenum , const GLdouble * ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glNormalStream3dv )(GLenum, const GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glClientActiveVertexStream ( GLenum ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glClientActiveVertexStream )(GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexBlendEnvi ( GLenum , GLint ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexBlendEnvi )(GLenum, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void glVertexBlendEnvf ( GLenum , GLfloat ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glVertexBlendEnvf )(GLenum, GLfloat);

/* C2J Parser Version 3.0:  Java program parsed successfully. */ 
