/**
 * C2J Parser Version 2.0
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
   extern void glGetPointerv ( GLenum pname , void * * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetPointerv )(GLenum, void **);

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
   extern void glTexImage3D ( GLenum target , GLint level , GLint internalFormat , GLsizei width , GLsizei height , GLsizei depth , GLint border , GLenum format , GLenum type , const GLvoid * pixels ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glTexImage3D )(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *);

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
   extern void glGetPointervEXT ( GLenum pname , void * * params ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__glGetPointervEXT )(GLenum, void **);

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

/* C2J Parser Version 2.0:  Java program parsed successfully. */ 
