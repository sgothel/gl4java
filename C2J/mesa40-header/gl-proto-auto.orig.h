extern void  glClearIndex( GLfloat c );
extern void  glClearColor( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha );
extern void  glClear( GLbitfield mask );
extern void  glIndexMask( GLuint mask );
extern void  glColorMask( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha );
extern void  glAlphaFunc( GLenum func, GLclampf ref );
extern void  glBlendFunc( GLenum sfactor, GLenum dfactor );
extern void  glLogicOp( GLenum opcode );
extern void  glCullFace( GLenum mode );
extern void  glFrontFace( GLenum mode );
extern void  glPointSize( GLfloat size );
extern void  glLineWidth( GLfloat width );
extern void  glLineStipple( GLint factor, GLushort pattern );
extern void  glPolygonMode( GLenum face, GLenum mode );
extern void  glPolygonOffset( GLfloat factor, GLfloat units );
extern void  glPolygonStipple( const GLubyte *mask );
extern void  glGetPolygonStipple( GLubyte *mask );
extern void  glEdgeFlag( GLboolean flag );
extern void  glEdgeFlagv( const GLboolean *flag );
extern void  glScissor( GLint x, GLint y, GLsizei width, GLsizei height);
extern void  glClipPlane( GLenum plane, const GLdouble *equation );
extern void  glGetClipPlane( GLenum plane, GLdouble *equation );
extern void  glDrawBuffer( GLenum mode );
extern void  glReadBuffer( GLenum mode );
extern void  glEnable( GLenum cap );
extern void  glDisable( GLenum cap );
extern GLboolean  glIsEnabled( GLenum cap );
extern void  glEnableClientState( GLenum cap );  /* 1.1 */
extern void  glDisableClientState( GLenum cap );  /* 1.1 */
extern void  glGetBooleanv( GLenum pname, GLboolean *params );
extern void  glGetDoublev( GLenum pname, GLdouble *params );
extern void  glGetFloatv( GLenum pname, GLfloat *params );
extern void  glGetIntegerv( GLenum pname, GLint *params );
extern void  glPushAttrib( GLbitfield mask );
extern void  glPopAttrib( void );
extern void  glPushClientAttrib( GLbitfield mask );  /* 1.1 */
extern void  glPopClientAttrib( void );  /* 1.1 */
extern GLint  glRenderMode( GLenum mode );
extern GLenum  glGetError( void );
extern void  glFinish( void );
extern void  glFlush( void );
extern void  glHint( GLenum target, GLenum mode );
extern void  glClearDepth( GLclampd depth );
extern void  glDepthFunc( GLenum func );
extern void  glDepthMask( GLboolean flag );
extern void  glDepthRange( GLclampd near_val, GLclampd far_val );
extern void  glClearAccum( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha );
extern void  glAccum( GLenum op, GLfloat value );
extern void  glMatrixMode( GLenum mode );
extern void  glOrtho( GLdouble left, GLdouble right,
                                 GLdouble bottom, GLdouble top,
                                 GLdouble near_val, GLdouble far_val );
extern void  glFrustum( GLdouble left, GLdouble right,
                                   GLdouble bottom, GLdouble top,
                                   GLdouble near_val, GLdouble far_val );
extern void  glViewport( GLint x, GLint y,
                                    GLsizei width, GLsizei height );
extern void  glPushMatrix( void );
extern void  glPopMatrix( void );
extern void  glLoadIdentity( void );
extern void  glLoadMatrixd( const GLdouble *m );
extern void  glLoadMatrixf( const GLfloat *m );
extern void  glMultMatrixd( const GLdouble *m );
extern void  glMultMatrixf( const GLfloat *m );
extern void  glRotated( GLdouble angle,
                                   GLdouble x, GLdouble y, GLdouble z );
extern void  glRotatef( GLfloat angle,
                                   GLfloat x, GLfloat y, GLfloat z );
extern void  glScaled( GLdouble x, GLdouble y, GLdouble z );
extern void  glScalef( GLfloat x, GLfloat y, GLfloat z );
extern void  glTranslated( GLdouble x, GLdouble y, GLdouble z );
extern void  glTranslatef( GLfloat x, GLfloat y, GLfloat z );
extern GLboolean  glIsList( GLuint list );
extern void  glDeleteLists( GLuint list, GLsizei range );
extern GLuint  glGenLists( GLsizei range );
extern void  glNewList( GLuint list, GLenum mode );
extern void  glEndList( void );
extern void  glCallList( GLuint list );
extern void  glCallLists( GLsizei n, GLenum type,
                                     const GLvoid *lists );
extern void  glListBase( GLuint base );
extern void  glBegin( GLenum mode );
extern void  glEnd( void );
extern void  glVertex2d( GLdouble x, GLdouble y );
extern void  glVertex2f( GLfloat x, GLfloat y );
extern void  glVertex2i( GLint x, GLint y );
extern void  glVertex2s( GLshort x, GLshort y );
extern void  glVertex3d( GLdouble x, GLdouble y, GLdouble z );
extern void  glVertex3f( GLfloat x, GLfloat y, GLfloat z );
extern void  glVertex3i( GLint x, GLint y, GLint z );
extern void  glVertex3s( GLshort x, GLshort y, GLshort z );
extern void  glVertex4d( GLdouble x, GLdouble y, GLdouble z, GLdouble w );
extern void  glVertex4f( GLfloat x, GLfloat y, GLfloat z, GLfloat w );
extern void  glVertex4i( GLint x, GLint y, GLint z, GLint w );
extern void  glVertex4s( GLshort x, GLshort y, GLshort z, GLshort w );
extern void  glVertex2dv( const GLdouble *v );
extern void  glVertex2fv( const GLfloat *v );
extern void  glVertex2iv( const GLint *v );
extern void  glVertex2sv( const GLshort *v );
extern void  glVertex3dv( const GLdouble *v );
extern void  glVertex3fv( const GLfloat *v );
extern void  glVertex3iv( const GLint *v );
extern void  glVertex3sv( const GLshort *v );
extern void  glVertex4dv( const GLdouble *v );
extern void  glVertex4fv( const GLfloat *v );
extern void  glVertex4iv( const GLint *v );
extern void  glVertex4sv( const GLshort *v );
extern void  glNormal3b( GLbyte nx, GLbyte ny, GLbyte nz );
extern void  glNormal3d( GLdouble nx, GLdouble ny, GLdouble nz );
extern void  glNormal3f( GLfloat nx, GLfloat ny, GLfloat nz );
extern void  glNormal3i( GLint nx, GLint ny, GLint nz );
extern void  glNormal3s( GLshort nx, GLshort ny, GLshort nz );
extern void  glNormal3bv( const GLbyte *v );
extern void  glNormal3dv( const GLdouble *v );
extern void  glNormal3fv( const GLfloat *v );
extern void  glNormal3iv( const GLint *v );
extern void  glNormal3sv( const GLshort *v );
extern void  glIndexd( GLdouble c );
extern void  glIndexf( GLfloat c );
extern void  glIndexi( GLint c );
extern void  glIndexs( GLshort c );
extern void  glIndexub( GLubyte c );  /* 1.1 */
extern void  glIndexdv( const GLdouble *c );
extern void  glIndexfv( const GLfloat *c );
extern void  glIndexiv( const GLint *c );
extern void  glIndexsv( const GLshort *c );
extern void  glIndexubv( const GLubyte *c );  /* 1.1 */
extern void  glColor3b( GLbyte red, GLbyte green, GLbyte blue );
extern void  glColor3d( GLdouble red, GLdouble green, GLdouble blue );
extern void  glColor3f( GLfloat red, GLfloat green, GLfloat blue );
extern void  glColor3i( GLint red, GLint green, GLint blue );
extern void  glColor3s( GLshort red, GLshort green, GLshort blue );
extern void  glColor3ub( GLubyte red, GLubyte green, GLubyte blue );
extern void  glColor3ui( GLuint red, GLuint green, GLuint blue );
extern void  glColor3us( GLushort red, GLushort green, GLushort blue );
extern void  glColor4b( GLbyte red, GLbyte green,
                                   GLbyte blue, GLbyte alpha );
extern void  glColor4d( GLdouble red, GLdouble green,
                                   GLdouble blue, GLdouble alpha );
extern void  glColor4f( GLfloat red, GLfloat green,
                                   GLfloat blue, GLfloat alpha );
extern void  glColor4i( GLint red, GLint green,
                                   GLint blue, GLint alpha );
extern void  glColor4s( GLshort red, GLshort green,
                                   GLshort blue, GLshort alpha );
extern void  glColor4ub( GLubyte red, GLubyte green,
                                    GLubyte blue, GLubyte alpha );
extern void  glColor4ui( GLuint red, GLuint green,
                                    GLuint blue, GLuint alpha );
extern void  glColor4us( GLushort red, GLushort green,
                                    GLushort blue, GLushort alpha );
extern void  glColor3bv( const GLbyte *v );
extern void  glColor3dv( const GLdouble *v );
extern void  glColor3fv( const GLfloat *v );
extern void  glColor3iv( const GLint *v );
extern void  glColor3sv( const GLshort *v );
extern void  glColor3ubv( const GLubyte *v );
extern void  glColor3uiv( const GLuint *v );
extern void  glColor3usv( const GLushort *v );
extern void  glColor4bv( const GLbyte *v );
extern void  glColor4dv( const GLdouble *v );
extern void  glColor4fv( const GLfloat *v );
extern void  glColor4iv( const GLint *v );
extern void  glColor4sv( const GLshort *v );
extern void  glColor4ubv( const GLubyte *v );
extern void  glColor4uiv( const GLuint *v );
extern void  glColor4usv( const GLushort *v );
extern void  glTexCoord1d( GLdouble s );
extern void  glTexCoord1f( GLfloat s );
extern void  glTexCoord1i( GLint s );
extern void  glTexCoord1s( GLshort s );
extern void  glTexCoord2d( GLdouble s, GLdouble t );
extern void  glTexCoord2f( GLfloat s, GLfloat t );
extern void  glTexCoord2i( GLint s, GLint t );
extern void  glTexCoord2s( GLshort s, GLshort t );
extern void  glTexCoord3d( GLdouble s, GLdouble t, GLdouble r );
extern void  glTexCoord3f( GLfloat s, GLfloat t, GLfloat r );
extern void  glTexCoord3i( GLint s, GLint t, GLint r );
extern void  glTexCoord3s( GLshort s, GLshort t, GLshort r );
extern void  glTexCoord4d( GLdouble s, GLdouble t, GLdouble r, GLdouble q );
extern void  glTexCoord4f( GLfloat s, GLfloat t, GLfloat r, GLfloat q );
extern void  glTexCoord4i( GLint s, GLint t, GLint r, GLint q );
extern void  glTexCoord4s( GLshort s, GLshort t, GLshort r, GLshort q );
extern void  glTexCoord1dv( const GLdouble *v );
extern void  glTexCoord1fv( const GLfloat *v );
extern void  glTexCoord1iv( const GLint *v );
extern void  glTexCoord1sv( const GLshort *v );
extern void  glTexCoord2dv( const GLdouble *v );
extern void  glTexCoord2fv( const GLfloat *v );
extern void  glTexCoord2iv( const GLint *v );
extern void  glTexCoord2sv( const GLshort *v );
extern void  glTexCoord3dv( const GLdouble *v );
extern void  glTexCoord3fv( const GLfloat *v );
extern void  glTexCoord3iv( const GLint *v );
extern void  glTexCoord3sv( const GLshort *v );
extern void  glTexCoord4dv( const GLdouble *v );
extern void  glTexCoord4fv( const GLfloat *v );
extern void  glTexCoord4iv( const GLint *v );
extern void  glTexCoord4sv( const GLshort *v );
extern void  glRasterPos2d( GLdouble x, GLdouble y );
extern void  glRasterPos2f( GLfloat x, GLfloat y );
extern void  glRasterPos2i( GLint x, GLint y );
extern void  glRasterPos2s( GLshort x, GLshort y );
extern void  glRasterPos3d( GLdouble x, GLdouble y, GLdouble z );
extern void  glRasterPos3f( GLfloat x, GLfloat y, GLfloat z );
extern void  glRasterPos3i( GLint x, GLint y, GLint z );
extern void  glRasterPos3s( GLshort x, GLshort y, GLshort z );
extern void  glRasterPos4d( GLdouble x, GLdouble y, GLdouble z, GLdouble w );
extern void  glRasterPos4f( GLfloat x, GLfloat y, GLfloat z, GLfloat w );
extern void  glRasterPos4i( GLint x, GLint y, GLint z, GLint w );
extern void  glRasterPos4s( GLshort x, GLshort y, GLshort z, GLshort w );
extern void  glRasterPos2dv( const GLdouble *v );
extern void  glRasterPos2fv( const GLfloat *v );
extern void  glRasterPos2iv( const GLint *v );
extern void  glRasterPos2sv( const GLshort *v );
extern void  glRasterPos3dv( const GLdouble *v );
extern void  glRasterPos3fv( const GLfloat *v );
extern void  glRasterPos3iv( const GLint *v );
extern void  glRasterPos3sv( const GLshort *v );
extern void  glRasterPos4dv( const GLdouble *v );
extern void  glRasterPos4fv( const GLfloat *v );
extern void  glRasterPos4iv( const GLint *v );
extern void  glRasterPos4sv( const GLshort *v );
extern void  glRectd( GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2 );
extern void  glRectf( GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2 );
extern void  glRecti( GLint x1, GLint y1, GLint x2, GLint y2 );
extern void  glRects( GLshort x1, GLshort y1, GLshort x2, GLshort y2 );
extern void  glRectdv( const GLdouble *v1, const GLdouble *v2 );
extern void  glRectfv( const GLfloat *v1, const GLfloat *v2 );
extern void  glRectiv( const GLint *v1, const GLint *v2 );
extern void  glRectsv( const GLshort *v1, const GLshort *v2 );
extern void  glVertexPointer( GLint size, GLenum type,
                                       GLsizei stride, const GLvoid *ptr );
extern void  glNormalPointer( GLenum type, GLsizei stride,
                                       const GLvoid *ptr );
extern void  glColorPointer( GLint size, GLenum type,
                                      GLsizei stride, const GLvoid *ptr );
extern void  glIndexPointer( GLenum type, GLsizei stride,
                                      const GLvoid *ptr );
extern void  glTexCoordPointer( GLint size, GLenum type,
                                         GLsizei stride, const GLvoid *ptr );
extern void  glEdgeFlagPointer( GLsizei stride, const GLvoid *ptr );
extern void  glGetPointerv( GLenum pname, GLvoid **params );
extern void  glArrayElement( GLint i );
extern void  glDrawArrays( GLenum mode, GLint first, GLsizei count );
extern void  glDrawElements( GLenum mode, GLsizei count,
                                      GLenum type, const GLvoid *indices );
extern void  glInterleavedArrays( GLenum format, GLsizei stride,
                                           const GLvoid *pointer );
extern void  glShadeModel( GLenum mode );
extern void  glLightf( GLenum light, GLenum pname, GLfloat param );
extern void  glLighti( GLenum light, GLenum pname, GLint param );
extern void  glLightfv( GLenum light, GLenum pname,
                                 const GLfloat *params );
extern void  glLightiv( GLenum light, GLenum pname,
                                 const GLint *params );
extern void  glGetLightfv( GLenum light, GLenum pname,
                                    GLfloat *params );
extern void  glGetLightiv( GLenum light, GLenum pname,
                                    GLint *params );
extern void  glLightModelf( GLenum pname, GLfloat param );
extern void  glLightModeli( GLenum pname, GLint param );
extern void  glLightModelfv( GLenum pname, const GLfloat *params );
extern void  glLightModeliv( GLenum pname, const GLint *params );
extern void  glMaterialf( GLenum face, GLenum pname, GLfloat param );
extern void  glMateriali( GLenum face, GLenum pname, GLint param );
extern void  glMaterialfv( GLenum face, GLenum pname, const GLfloat *params );
extern void  glMaterialiv( GLenum face, GLenum pname, const GLint *params );
extern void  glGetMaterialfv( GLenum face, GLenum pname, GLfloat *params );
extern void  glGetMaterialiv( GLenum face, GLenum pname, GLint *params );
extern void  glColorMaterial( GLenum face, GLenum mode );
extern void  glPixelZoom( GLfloat xfactor, GLfloat yfactor );
extern void  glPixelStoref( GLenum pname, GLfloat param );
extern void  glPixelStorei( GLenum pname, GLint param );
extern void  glPixelTransferf( GLenum pname, GLfloat param );
extern void  glPixelTransferi( GLenum pname, GLint param );
extern void  glPixelMapfv( GLenum map, GLint mapsize,
                                    const GLfloat *values );
extern void  glPixelMapuiv( GLenum map, GLint mapsize,
                                     const GLuint *values );
extern void  glPixelMapusv( GLenum map, GLint mapsize,
                                     const GLushort *values );
extern void  glGetPixelMapfv( GLenum map, GLfloat *values );
extern void  glGetPixelMapuiv( GLenum map, GLuint *values );
extern void  glGetPixelMapusv( GLenum map, GLushort *values );
extern void  glBitmap( GLsizei width, GLsizei height,
                                GLfloat xorig, GLfloat yorig,
                                GLfloat xmove, GLfloat ymove,
                                const GLubyte *bitmap );
extern void  glReadPixels( GLint x, GLint y,
                                    GLsizei width, GLsizei height,
                                    GLenum format, GLenum type,
                                    GLvoid *pixels );
extern void  glDrawPixels( GLsizei width, GLsizei height,
                                    GLenum format, GLenum type,
                                    const GLvoid *pixels );
extern void  glCopyPixels( GLint x, GLint y,
                                    GLsizei width, GLsizei height,
                                    GLenum type );
extern void  glStencilFunc( GLenum func, GLint ref, GLuint mask );
extern void  glStencilMask( GLuint mask );
extern void  glStencilOp( GLenum fail, GLenum zfail, GLenum zpass );
extern void  glClearStencil( GLint s );
extern void  glTexGend( GLenum coord, GLenum pname, GLdouble param );
extern void  glTexGenf( GLenum coord, GLenum pname, GLfloat param );
extern void  glTexGeni( GLenum coord, GLenum pname, GLint param );
extern void  glTexGendv( GLenum coord, GLenum pname, const GLdouble *params );
extern void  glTexGenfv( GLenum coord, GLenum pname, const GLfloat *params );
extern void  glTexGeniv( GLenum coord, GLenum pname, const GLint *params );
extern void  glGetTexGendv( GLenum coord, GLenum pname, GLdouble *params );
extern void  glGetTexGenfv( GLenum coord, GLenum pname, GLfloat *params );
extern void  glGetTexGeniv( GLenum coord, GLenum pname, GLint *params );
extern void  glTexEnvf( GLenum target, GLenum pname, GLfloat param );
extern void  glTexEnvi( GLenum target, GLenum pname, GLint param );
extern void  glTexEnvfv( GLenum target, GLenum pname, const GLfloat *params );
extern void  glTexEnviv( GLenum target, GLenum pname, const GLint *params );
extern void  glGetTexEnvfv( GLenum target, GLenum pname, GLfloat *params );
extern void  glGetTexEnviv( GLenum target, GLenum pname, GLint *params );
extern void  glTexParameterf( GLenum target, GLenum pname, GLfloat param );
extern void  glTexParameteri( GLenum target, GLenum pname, GLint param );
extern void  glTexParameterfv( GLenum target, GLenum pname,
                                          const GLfloat *params );
extern void  glTexParameteriv( GLenum target, GLenum pname,
                                          const GLint *params );
extern void  glGetTexParameterfv( GLenum target,
                                           GLenum pname, GLfloat *params);
extern void  glGetTexParameteriv( GLenum target,
                                           GLenum pname, GLint *params );
extern void  glGetTexLevelParameterfv( GLenum target, GLint level,
                                                GLenum pname, GLfloat *params );
extern void  glGetTexLevelParameteriv( GLenum target, GLint level,
                                                GLenum pname, GLint *params );
extern void  glTexImage1D( GLenum target, GLint level,
                                    GLint internalFormat,
                                    GLsizei width, GLint border,
                                    GLenum format, GLenum type,
                                    const GLvoid *pixels );
extern void  glTexImage2D( GLenum target, GLint level,
                                    GLint internalFormat,
                                    GLsizei width, GLsizei height,
                                    GLint border, GLenum format, GLenum type,
                                    const GLvoid *pixels );
extern void  glGetTexImage( GLenum target, GLint level,
                                     GLenum format, GLenum type,
                                     GLvoid *pixels );
extern void  glGenTextures( GLsizei n, GLuint *textures );
extern void  glDeleteTextures( GLsizei n, const GLuint *textures);
extern void  glBindTexture( GLenum target, GLuint texture );
extern void  glPrioritizeTextures( GLsizei n,
                                            const GLuint *textures,
                                            const GLclampf *priorities );
extern GLboolean  glAreTexturesResident( GLsizei n,
                                                  const GLuint *textures,
                                                  GLboolean *residences );
extern GLboolean  glIsTexture( GLuint texture );
extern void  glTexSubImage1D( GLenum target, GLint level,
                                       GLint xoffset,
                                       GLsizei width, GLenum format,
                                       GLenum type, const GLvoid *pixels );
extern void  glTexSubImage2D( GLenum target, GLint level,
                                       GLint xoffset, GLint yoffset,
                                       GLsizei width, GLsizei height,
                                       GLenum format, GLenum type,
                                       const GLvoid *pixels );
extern void  glCopyTexImage1D( GLenum target, GLint level,
                                        GLenum internalformat,
                                        GLint x, GLint y,
                                        GLsizei width, GLint border );
extern void  glCopyTexImage2D( GLenum target, GLint level,
                                        GLenum internalformat,
                                        GLint x, GLint y,
                                        GLsizei width, GLsizei height,
                                        GLint border );
extern void  glCopyTexSubImage1D( GLenum target, GLint level,
                                           GLint xoffset, GLint x, GLint y,
                                           GLsizei width );
extern void  glCopyTexSubImage2D( GLenum target, GLint level,
                                           GLint xoffset, GLint yoffset,
                                           GLint x, GLint y,
                                           GLsizei width, GLsizei height );
extern void  glMap1d( GLenum target, GLdouble u1, GLdouble u2,
                               GLint stride,
                               GLint order, const GLdouble *points );
extern void  glMap1f( GLenum target, GLfloat u1, GLfloat u2,
                               GLint stride,
                               GLint order, const GLfloat *points );
extern void  glMap2d( GLenum target,
		     GLdouble u1, GLdouble u2, GLint ustride, GLint uorder,
		     GLdouble v1, GLdouble v2, GLint vstride, GLint vorder,
		     const GLdouble *points );
extern void  glMap2f( GLenum target,
		     GLfloat u1, GLfloat u2, GLint ustride, GLint uorder,
		     GLfloat v1, GLfloat v2, GLint vstride, GLint vorder,
		     const GLfloat *points );
extern void  glGetMapdv( GLenum target, GLenum query, GLdouble *v );
extern void  glGetMapfv( GLenum target, GLenum query, GLfloat *v );
extern void  glGetMapiv( GLenum target, GLenum query, GLint *v );
extern void  glEvalCoord1d( GLdouble u );
extern void  glEvalCoord1f( GLfloat u );
extern void  glEvalCoord1dv( const GLdouble *u );
extern void  glEvalCoord1fv( const GLfloat *u );
extern void  glEvalCoord2d( GLdouble u, GLdouble v );
extern void  glEvalCoord2f( GLfloat u, GLfloat v );
extern void  glEvalCoord2dv( const GLdouble *u );
extern void  glEvalCoord2fv( const GLfloat *u );
extern void  glMapGrid1d( GLint un, GLdouble u1, GLdouble u2 );
extern void  glMapGrid1f( GLint un, GLfloat u1, GLfloat u2 );
extern void  glMapGrid2d( GLint un, GLdouble u1, GLdouble u2,
                                   GLint vn, GLdouble v1, GLdouble v2 );
extern void  glMapGrid2f( GLint un, GLfloat u1, GLfloat u2,
                                   GLint vn, GLfloat v1, GLfloat v2 );
extern void  glEvalPoint1( GLint i );
extern void  glEvalPoint2( GLint i, GLint j );
extern void  glEvalMesh1( GLenum mode, GLint i1, GLint i2 );
extern void  glEvalMesh2( GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2 );
extern void  glFogf( GLenum pname, GLfloat param );
extern void  glFogi( GLenum pname, GLint param );
extern void  glFogfv( GLenum pname, const GLfloat *params );
extern void  glFogiv( GLenum pname, const GLint *params );
extern void  glFeedbackBuffer( GLsizei size, GLenum type, GLfloat *buffer );
extern void  glPassThrough( GLfloat token );
extern void  glSelectBuffer( GLsizei size, GLuint *buffer );
extern void  glInitNames( void );
extern void  glLoadName( GLuint name );
extern void  glPushName( GLuint name );
extern void  glPopName( void );
extern void  glDrawRangeElements( GLenum mode, GLuint start,
	GLuint end, GLsizei count, GLenum type, const GLvoid *indices );
extern void  glTexImage3D( GLenum target, GLint level,
                                      GLenum internalFormat,
                                      GLsizei width, GLsizei height,
                                      GLsizei depth, GLint border,
                                      GLenum format, GLenum type,
                                      const GLvoid *pixels );
extern void  glTexSubImage3D( GLenum target, GLint level,
                                         GLint xoffset, GLint yoffset,
                                         GLint zoffset, GLsizei width,
                                         GLsizei height, GLsizei depth,
                                         GLenum format,
                                         GLenum type, const GLvoid *pixels);
extern void  glCopyTexSubImage3D( GLenum target, GLint level,
                                             GLint xoffset, GLint yoffset,
                                             GLint zoffset, GLint x,
                                             GLint y, GLsizei width,
                                             GLsizei height );
extern void  glColorTable( GLenum target, GLenum internalformat,
                                    GLsizei width, GLenum format,
                                    GLenum type, const GLvoid *table );
extern void  glColorSubTable( GLenum target,
                                       GLsizei start, GLsizei count,
                                       GLenum format, GLenum type,
                                       const GLvoid *data );
extern void  glColorTableParameteriv(GLenum target, GLenum pname,
                                              const GLint *params);
extern void  glColorTableParameterfv(GLenum target, GLenum pname,
                                              const GLfloat *params);
extern void  glCopyColorSubTable( GLenum target, GLsizei start,
                                           GLint x, GLint y, GLsizei width );
extern void  glCopyColorTable( GLenum target, GLenum internalformat,
                                        GLint x, GLint y, GLsizei width );
extern void  glGetColorTable( GLenum target, GLenum format,
                                       GLenum type, GLvoid *table );
extern void  glGetColorTableParameterfv( GLenum target, GLenum pname,
                                                  GLfloat *params );
extern void  glGetColorTableParameteriv( GLenum target, GLenum pname,
                                                  GLint *params );
extern void  glBlendEquation( GLenum mode );
extern void  glBlendColor( GLclampf red, GLclampf green,
                                    GLclampf blue, GLclampf alpha );
extern void  glHistogram( GLenum target, GLsizei width,
				   GLenum internalformat, GLboolean sink );
extern void  glResetHistogram( GLenum target );
extern void  glGetHistogram( GLenum target, GLboolean reset,
				      GLenum format, GLenum type,
				      GLvoid *values );
extern void  glGetHistogramParameterfv( GLenum target, GLenum pname,
						 GLfloat *params );
extern void  glGetHistogramParameteriv( GLenum target, GLenum pname,
						 GLint *params );
extern void  glMinmax( GLenum target, GLenum internalformat,
				GLboolean sink );
extern void  glResetMinmax( GLenum target );
extern void  glGetMinmax( GLenum target, GLboolean reset,
                                   GLenum format, GLenum types,
                                   GLvoid *values );
extern void  glGetMinmaxParameterfv( GLenum target, GLenum pname,
					      GLfloat *params );
extern void  glGetMinmaxParameteriv( GLenum target, GLenum pname,
					      GLint *params );
extern void  glConvolutionFilter1D( GLenum target,
	GLenum internalformat, GLsizei width, GLenum format, GLenum type,
	const GLvoid *image );
extern void  glConvolutionFilter2D( GLenum target,
	GLenum internalformat, GLsizei width, GLsizei height, GLenum format,
	GLenum type, const GLvoid *image );
extern void  glConvolutionParameterf( GLenum target, GLenum pname,
	GLfloat params );
extern void  glConvolutionParameterfv( GLenum target, GLenum pname,
	const GLfloat *params );
extern void  glConvolutionParameteri( GLenum target, GLenum pname,
	GLint params );
extern void  glConvolutionParameteriv( GLenum target, GLenum pname,
	const GLint *params );
extern void  glCopyConvolutionFilter1D( GLenum target,
	GLenum internalformat, GLint x, GLint y, GLsizei width );
extern void  glCopyConvolutionFilter2D( GLenum target,
	GLenum internalformat, GLint x, GLint y, GLsizei width,
	GLsizei height);
extern void  glGetConvolutionFilter( GLenum target, GLenum format,
	GLenum type, GLvoid *image );
extern void  glGetConvolutionParameterfv( GLenum target, GLenum pname,
	GLfloat *params );
extern void  glGetConvolutionParameteriv( GLenum target, GLenum pname,
	GLint *params );
extern void  glSeparableFilter2D( GLenum target,
	GLenum internalformat, GLsizei width, GLsizei height, GLenum format,
	GLenum type, const GLvoid *row, const GLvoid *column );
extern void  glGetSeparableFilter( GLenum target, GLenum format,
	GLenum type, GLvoid *row, GLvoid *column, GLvoid *span );
extern void  glActiveTexture( GLenum texture );
extern void  glClientActiveTexture( GLenum texture );
extern void  glCompressedTexImage1D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data );
extern void  glCompressedTexImage2D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data );
extern void  glCompressedTexImage3D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data );
extern void  glCompressedTexSubImage1D( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data );
extern void  glCompressedTexSubImage2D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data );
extern void  glCompressedTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data );
extern void  glGetCompressedTexImage( GLenum target, GLint lod, GLvoid *img );
extern void  glMultiTexCoord1d( GLenum target, GLdouble s );
extern void  glMultiTexCoord1dv( GLenum target, const GLdouble *v );
extern void  glMultiTexCoord1f( GLenum target, GLfloat s );
extern void  glMultiTexCoord1fv( GLenum target, const GLfloat *v );
extern void  glMultiTexCoord1i( GLenum target, GLint s );
extern void  glMultiTexCoord1iv( GLenum target, const GLint *v );
extern void  glMultiTexCoord1s( GLenum target, GLshort s );
extern void  glMultiTexCoord1sv( GLenum target, const GLshort *v );
extern void  glMultiTexCoord2d( GLenum target, GLdouble s, GLdouble t );
extern void  glMultiTexCoord2dv( GLenum target, const GLdouble *v );
extern void  glMultiTexCoord2f( GLenum target, GLfloat s, GLfloat t );
extern void  glMultiTexCoord2fv( GLenum target, const GLfloat *v );
extern void  glMultiTexCoord2i( GLenum target, GLint s, GLint t );
extern void  glMultiTexCoord2iv( GLenum target, const GLint *v );
extern void  glMultiTexCoord2s( GLenum target, GLshort s, GLshort t );
extern void  glMultiTexCoord2sv( GLenum target, const GLshort *v );
extern void  glMultiTexCoord3d( GLenum target, GLdouble s, GLdouble t, GLdouble r );
extern void  glMultiTexCoord3dv( GLenum target, const GLdouble *v );
extern void  glMultiTexCoord3f( GLenum target, GLfloat s, GLfloat t, GLfloat r );
extern void  glMultiTexCoord3fv( GLenum target, const GLfloat *v );
extern void  glMultiTexCoord3i( GLenum target, GLint s, GLint t, GLint r );
extern void  glMultiTexCoord3iv( GLenum target, const GLint *v );
extern void  glMultiTexCoord3s( GLenum target, GLshort s, GLshort t, GLshort r );
extern void  glMultiTexCoord3sv( GLenum target, const GLshort *v );
extern void  glMultiTexCoord4d( GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q );
extern void  glMultiTexCoord4dv( GLenum target, const GLdouble *v );
extern void  glMultiTexCoord4f( GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q );
extern void  glMultiTexCoord4fv( GLenum target, const GLfloat *v );
extern void  glMultiTexCoord4i( GLenum target, GLint s, GLint t, GLint r, GLint q );
extern void  glMultiTexCoord4iv( GLenum target, const GLint *v );
extern void  glMultiTexCoord4s( GLenum target, GLshort s, GLshort t, GLshort r, GLshort q );
extern void  glMultiTexCoord4sv( GLenum target, const GLshort *v );
extern void  glLoadTransposeMatrixd( const GLdouble m[16] );
extern void  glLoadTransposeMatrixf( const GLfloat m[16] );
extern void  glMultTransposeMatrixd( const GLdouble m[16] );
extern void  glMultTransposeMatrixf( const GLfloat m[16] );
extern void  glSampleCoverage( GLclampf value, GLboolean invert );
extern void  glSamplePass( GLenum pass );
extern void  glActiveTextureARB(GLenum texture);
extern void  glClientActiveTextureARB(GLenum texture);
extern void  glMultiTexCoord1dARB(GLenum target, GLdouble s);
extern void  glMultiTexCoord1dvARB(GLenum target, const GLdouble *v);
extern void  glMultiTexCoord1fARB(GLenum target, GLfloat s);
extern void  glMultiTexCoord1fvARB(GLenum target, const GLfloat *v);
extern void  glMultiTexCoord1iARB(GLenum target, GLint s);
extern void  glMultiTexCoord1ivARB(GLenum target, const GLint *v);
extern void  glMultiTexCoord1sARB(GLenum target, GLshort s);
extern void  glMultiTexCoord1svARB(GLenum target, const GLshort *v);
extern void  glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t);
extern void  glMultiTexCoord2dvARB(GLenum target, const GLdouble *v);
extern void  glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t);
extern void  glMultiTexCoord2fvARB(GLenum target, const GLfloat *v);
extern void  glMultiTexCoord2iARB(GLenum target, GLint s, GLint t);
extern void  glMultiTexCoord2ivARB(GLenum target, const GLint *v);
extern void  glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t);
extern void  glMultiTexCoord2svARB(GLenum target, const GLshort *v);
extern void  glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r);
extern void  glMultiTexCoord3dvARB(GLenum target, const GLdouble *v);
extern void  glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r);
extern void  glMultiTexCoord3fvARB(GLenum target, const GLfloat *v);
extern void  glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r);
extern void  glMultiTexCoord3ivARB(GLenum target, const GLint *v);
extern void  glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r);
extern void  glMultiTexCoord3svARB(GLenum target, const GLshort *v);
extern void  glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
extern void  glMultiTexCoord4dvARB(GLenum target, const GLdouble *v);
extern void  glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
extern void  glMultiTexCoord4fvARB(GLenum target, const GLfloat *v);
extern void  glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q);
extern void  glMultiTexCoord4ivARB(GLenum target, const GLint *v);
extern void  glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
extern void  glMultiTexCoord4svARB(GLenum target, const GLshort *v);
extern void  glBlendColorEXT( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha );
extern void  glPolygonOffsetEXT( GLfloat factor, GLfloat bias );
extern void  glTexImage3DEXT( GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
extern void  glTexSubImage3DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
extern void  glCopyTexSubImage3DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height );
extern void  glGenTexturesEXT( GLsizei n, GLuint *textures );
extern void  glDeleteTexturesEXT( GLsizei n, const GLuint *textures);
extern void  glBindTextureEXT( GLenum target, GLuint texture );
extern void  glPrioritizeTexturesEXT( GLsizei n, const GLuint *textures, const GLclampf *priorities );
extern GLboolean  glAreTexturesResidentEXT( GLsizei n, const GLuint *textures, GLboolean *residences );
extern GLboolean  glIsTextureEXT( GLuint texture );
extern void  glVertexPointerEXT( GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *ptr );
extern void  glNormalPointerEXT( GLenum type, GLsizei stride, GLsizei count, const GLvoid *ptr );
extern void  glColorPointerEXT( GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *ptr );
extern void  glIndexPointerEXT( GLenum type, GLsizei stride, GLsizei count, const GLvoid *ptr );
extern void  glTexCoordPointerEXT( GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *ptr );
extern void  glEdgeFlagPointerEXT( GLsizei stride, GLsizei count, const GLboolean *ptr );
extern void  glGetPointervEXT( GLenum pname, GLvoid **params );
extern void  glArrayElementEXT( GLint i );
extern void  glDrawArraysEXT( GLenum mode, GLint first, GLsizei count );
extern void  glBlendEquationEXT( GLenum mode );
extern void  glPointParameterfEXT( GLenum pname, GLfloat param );
extern void  glPointParameterfvEXT( GLenum pname, const GLfloat *params );
extern void  glPointParameterfSGIS(GLenum pname, GLfloat param);
extern void  glPointParameterfvSGIS(GLenum pname, const GLfloat *params);
extern void  glColorTableEXT( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table );
extern void  glColorSubTableEXT( GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data );
extern void  glGetColorTableEXT( GLenum target, GLenum format, GLenum type, GLvoid *table );
extern void  glGetColorTableParameterfvEXT( GLenum target, GLenum pname, GLfloat *params );
extern void  glGetColorTableParameterivEXT( GLenum target, GLenum pname, GLint *params );
extern void  glLockArraysEXT( GLint first, GLsizei count );
extern void  glUnlockArraysEXT( void );
extern void  glBlendColor (GLclampf, GLclampf, GLclampf, GLclampf);
extern void  glBlendEquation (GLenum);
extern void  glDrawRangeElements (GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *);
extern void  glColorTable (GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *);
extern void  glColorTableParameterfv (GLenum, GLenum, const GLfloat *);
extern void  glColorTableParameteriv (GLenum, GLenum, const GLint *);
extern void  glCopyColorTable (GLenum, GLenum, GLint, GLint, GLsizei);
extern void  glGetColorTable (GLenum, GLenum, GLenum, GLvoid *);
extern void  glGetColorTableParameterfv (GLenum, GLenum, GLfloat *);
extern void  glGetColorTableParameteriv (GLenum, GLenum, GLint *);
extern void  glColorSubTable (GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
extern void  glCopyColorSubTable (GLenum, GLsizei, GLint, GLint, GLsizei);
extern void  glConvolutionFilter1D (GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *);
extern void  glConvolutionFilter2D (GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
extern void  glConvolutionParameterf (GLenum, GLenum, GLfloat);
extern void  glConvolutionParameterfv (GLenum, GLenum, const GLfloat *);
extern void  glConvolutionParameteri (GLenum, GLenum, GLint);
extern void  glConvolutionParameteriv (GLenum, GLenum, const GLint *);
extern void  glCopyConvolutionFilter1D (GLenum, GLenum, GLint, GLint, GLsizei);
extern void  glCopyConvolutionFilter2D (GLenum, GLenum, GLint, GLint, GLsizei, GLsizei);
extern void  glGetConvolutionFilter (GLenum, GLenum, GLenum, GLvoid *);
extern void  glGetConvolutionParameterfv (GLenum, GLenum, GLfloat *);
extern void  glGetConvolutionParameteriv (GLenum, GLenum, GLint *);
extern void  glGetSeparableFilter (GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *);
extern void  glSeparableFilter2D (GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *);
extern void  glGetHistogram (GLenum, GLboolean, GLenum, GLenum, GLvoid *);
extern void  glGetHistogramParameterfv (GLenum, GLenum, GLfloat *);
extern void  glGetHistogramParameteriv (GLenum, GLenum, GLint *);
extern void  glGetMinmax (GLenum, GLboolean, GLenum, GLenum, GLvoid *);
extern void  glGetMinmaxParameterfv (GLenum, GLenum, GLfloat *);
extern void  glGetMinmaxParameteriv (GLenum, GLenum, GLint *);
extern void  glHistogram (GLenum, GLsizei, GLenum, GLboolean);
extern void  glMinmax (GLenum, GLenum, GLboolean);
extern void  glResetHistogram (GLenum);
extern void  glResetMinmax (GLenum);
extern void  glTexImage3D (GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *);
extern void  glTexSubImage3D (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
extern void  glCopyTexSubImage3D (GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
extern void  glActiveTexture (GLenum);
extern void  glClientActiveTexture (GLenum);
extern void  glMultiTexCoord1d (GLenum, GLdouble);
extern void  glMultiTexCoord1dv (GLenum, const GLdouble *);
extern void  glMultiTexCoord1f (GLenum, GLfloat);
extern void  glMultiTexCoord1fv (GLenum, const GLfloat *);
extern void  glMultiTexCoord1i (GLenum, GLint);
extern void  glMultiTexCoord1iv (GLenum, const GLint *);
extern void  glMultiTexCoord1s (GLenum, GLshort);
extern void  glMultiTexCoord1sv (GLenum, const GLshort *);
extern void  glMultiTexCoord2d (GLenum, GLdouble, GLdouble);
extern void  glMultiTexCoord2dv (GLenum, const GLdouble *);
extern void  glMultiTexCoord2f (GLenum, GLfloat, GLfloat);
extern void  glMultiTexCoord2fv (GLenum, const GLfloat *);
extern void  glMultiTexCoord2i (GLenum, GLint, GLint);
extern void  glMultiTexCoord2iv (GLenum, const GLint *);
extern void  glMultiTexCoord2s (GLenum, GLshort, GLshort);
extern void  glMultiTexCoord2sv (GLenum, const GLshort *);
extern void  glMultiTexCoord3d (GLenum, GLdouble, GLdouble, GLdouble);
extern void  glMultiTexCoord3dv (GLenum, const GLdouble *);
extern void  glMultiTexCoord3f (GLenum, GLfloat, GLfloat, GLfloat);
extern void  glMultiTexCoord3fv (GLenum, const GLfloat *);
extern void  glMultiTexCoord3i (GLenum, GLint, GLint, GLint);
extern void  glMultiTexCoord3iv (GLenum, const GLint *);
extern void  glMultiTexCoord3s (GLenum, GLshort, GLshort, GLshort);
extern void  glMultiTexCoord3sv (GLenum, const GLshort *);
extern void  glMultiTexCoord4d (GLenum, GLdouble, GLdouble, GLdouble, GLdouble);
extern void  glMultiTexCoord4dv (GLenum, const GLdouble *);
extern void  glMultiTexCoord4f (GLenum, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glMultiTexCoord4fv (GLenum, const GLfloat *);
extern void  glMultiTexCoord4i (GLenum, GLint, GLint, GLint, GLint);
extern void  glMultiTexCoord4iv (GLenum, const GLint *);
extern void  glMultiTexCoord4s (GLenum, GLshort, GLshort, GLshort, GLshort);
extern void  glMultiTexCoord4sv (GLenum, const GLshort *);
extern void  glLoadTransposeMatrixf (const GLfloat *);
extern void  glLoadTransposeMatrixd (const GLdouble *);
extern void  glMultTransposeMatrixf (const GLfloat *);
extern void  glMultTransposeMatrixd (const GLdouble *);
extern void  glSampleCoverage (GLclampf, GLboolean);
extern void  glCompressedTexImage3D (GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *);
extern void  glCompressedTexImage2D (GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *);
extern void  glCompressedTexImage1D (GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *);
extern void  glCompressedTexSubImage3D (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);
extern void  glCompressedTexSubImage2D (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);
extern void  glCompressedTexSubImage1D (GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *);
extern void  glGetCompressedTexImage (GLenum, GLint, void *);
extern void  glActiveTextureARB (GLenum);
extern void  glClientActiveTextureARB (GLenum);
extern void  glMultiTexCoord1dARB (GLenum, GLdouble);
extern void  glMultiTexCoord1dvARB (GLenum, const GLdouble *);
extern void  glMultiTexCoord1fARB (GLenum, GLfloat);
extern void  glMultiTexCoord1fvARB (GLenum, const GLfloat *);
extern void  glMultiTexCoord1iARB (GLenum, GLint);
extern void  glMultiTexCoord1ivARB (GLenum, const GLint *);
extern void  glMultiTexCoord1sARB (GLenum, GLshort);
extern void  glMultiTexCoord1svARB (GLenum, const GLshort *);
extern void  glMultiTexCoord2dARB (GLenum, GLdouble, GLdouble);
extern void  glMultiTexCoord2dvARB (GLenum, const GLdouble *);
extern void  glMultiTexCoord2fARB (GLenum, GLfloat, GLfloat);
extern void  glMultiTexCoord2fvARB (GLenum, const GLfloat *);
extern void  glMultiTexCoord2iARB (GLenum, GLint, GLint);
extern void  glMultiTexCoord2ivARB (GLenum, const GLint *);
extern void  glMultiTexCoord2sARB (GLenum, GLshort, GLshort);
extern void  glMultiTexCoord2svARB (GLenum, const GLshort *);
extern void  glMultiTexCoord3dARB (GLenum, GLdouble, GLdouble, GLdouble);
extern void  glMultiTexCoord3dvARB (GLenum, const GLdouble *);
extern void  glMultiTexCoord3fARB (GLenum, GLfloat, GLfloat, GLfloat);
extern void  glMultiTexCoord3fvARB (GLenum, const GLfloat *);
extern void  glMultiTexCoord3iARB (GLenum, GLint, GLint, GLint);
extern void  glMultiTexCoord3ivARB (GLenum, const GLint *);
extern void  glMultiTexCoord3sARB (GLenum, GLshort, GLshort, GLshort);
extern void  glMultiTexCoord3svARB (GLenum, const GLshort *);
extern void  glMultiTexCoord4dARB (GLenum, GLdouble, GLdouble, GLdouble, GLdouble);
extern void  glMultiTexCoord4dvARB (GLenum, const GLdouble *);
extern void  glMultiTexCoord4fARB (GLenum, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glMultiTexCoord4fvARB (GLenum, const GLfloat *);
extern void  glMultiTexCoord4iARB (GLenum, GLint, GLint, GLint, GLint);
extern void  glMultiTexCoord4ivARB (GLenum, const GLint *);
extern void  glMultiTexCoord4sARB (GLenum, GLshort, GLshort, GLshort, GLshort);
extern void  glMultiTexCoord4svARB (GLenum, const GLshort *);
extern void  glLoadTransposeMatrixfARB (const GLfloat *);
extern void  glLoadTransposeMatrixdARB (const GLdouble *);
extern void  glMultTransposeMatrixfARB (const GLfloat *);
extern void  glMultTransposeMatrixdARB (const GLdouble *);
extern void  glSampleCoverageARB (GLclampf, GLboolean);
extern void  glCompressedTexImage3DARB (GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *);
extern void  glCompressedTexImage2DARB (GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *);
extern void  glCompressedTexImage1DARB (GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *);
extern void  glCompressedTexSubImage3DARB (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);
extern void  glCompressedTexSubImage2DARB (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *);
extern void  glCompressedTexSubImage1DARB (GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *);
extern void  glGetCompressedTexImageARB (GLenum, GLint, void *);
extern void  glWeightbvARB (GLint, const GLbyte *);
extern void  glWeightsvARB (GLint, const GLshort *);
extern void  glWeightivARB (GLint, const GLint *);
extern void  glWeightfvARB (GLint, const GLfloat *);
extern void  glWeightdvARB (GLint, const GLdouble *);
extern void  glWeightubvARB (GLint, const GLubyte *);
extern void  glWeightusvARB (GLint, const GLushort *);
extern void  glWeightuivARB (GLint, const GLuint *);
extern void  glWeightPointerARB (GLint, GLenum, GLsizei, const GLvoid *);
extern void  glVertexBlendARB (GLint);
extern void  glCurrentPaletteMatrixARB (GLint);
extern void  glMatrixIndexubvARB (GLint, const GLubyte *);
extern void  glMatrixIndexusvARB (GLint, const GLushort *);
extern void  glMatrixIndexuivARB (GLint, const GLuint *);
extern void  glMatrixIndexPointerARB (GLint, GLenum, GLsizei, const GLvoid *);
extern void  glBlendColorEXT (GLclampf, GLclampf, GLclampf, GLclampf);
extern void  glPolygonOffsetEXT (GLfloat, GLfloat);
extern void  glTexImage3DEXT (GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *);
extern void  glTexSubImage3DEXT (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
extern void  glGetTexFilterFuncSGIS (GLenum, GLenum, GLfloat *);
extern void  glTexFilterFuncSGIS (GLenum, GLenum, GLsizei, const GLfloat *);
extern void  glTexSubImage1DEXT (GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *);
extern void  glTexSubImage2DEXT (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
extern void  glCopyTexImage1DEXT (GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint);
extern void  glCopyTexImage2DEXT (GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
extern void  glCopyTexSubImage1DEXT (GLenum, GLint, GLint, GLint, GLint, GLsizei);
extern void  glCopyTexSubImage2DEXT (GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
extern void  glCopyTexSubImage3DEXT (GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
extern void  glGetHistogramEXT (GLenum, GLboolean, GLenum, GLenum, GLvoid *);
extern void  glGetHistogramParameterfvEXT (GLenum, GLenum, GLfloat *);
extern void  glGetHistogramParameterivEXT (GLenum, GLenum, GLint *);
extern void  glGetMinmaxEXT (GLenum, GLboolean, GLenum, GLenum, GLvoid *);
extern void  glGetMinmaxParameterfvEXT (GLenum, GLenum, GLfloat *);
extern void  glGetMinmaxParameterivEXT (GLenum, GLenum, GLint *);
extern void  glHistogramEXT (GLenum, GLsizei, GLenum, GLboolean);
extern void  glMinmaxEXT (GLenum, GLenum, GLboolean);
extern void  glResetHistogramEXT (GLenum);
extern void  glResetMinmaxEXT (GLenum);
extern void  glConvolutionFilter1DEXT (GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *);
extern void  glConvolutionFilter2DEXT (GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
extern void  glConvolutionParameterfEXT (GLenum, GLenum, GLfloat);
extern void  glConvolutionParameterfvEXT (GLenum, GLenum, const GLfloat *);
extern void  glConvolutionParameteriEXT (GLenum, GLenum, GLint);
extern void  glConvolutionParameterivEXT (GLenum, GLenum, const GLint *);
extern void  glCopyConvolutionFilter1DEXT (GLenum, GLenum, GLint, GLint, GLsizei);
extern void  glCopyConvolutionFilter2DEXT (GLenum, GLenum, GLint, GLint, GLsizei, GLsizei);
extern void  glGetConvolutionFilterEXT (GLenum, GLenum, GLenum, GLvoid *);
extern void  glGetConvolutionParameterfvEXT (GLenum, GLenum, GLfloat *);
extern void  glGetConvolutionParameterivEXT (GLenum, GLenum, GLint *);
extern void  glGetSeparableFilterEXT (GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *);
extern void  glSeparableFilter2DEXT (GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *);
extern void  glColorTableSGI (GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *);
extern void  glColorTableParameterfvSGI (GLenum, GLenum, const GLfloat *);
extern void  glColorTableParameterivSGI (GLenum, GLenum, const GLint *);
extern void  glCopyColorTableSGI (GLenum, GLenum, GLint, GLint, GLsizei);
extern void  glGetColorTableSGI (GLenum, GLenum, GLenum, GLvoid *);
extern void  glGetColorTableParameterfvSGI (GLenum, GLenum, GLfloat *);
extern void  glGetColorTableParameterivSGI (GLenum, GLenum, GLint *);
extern void  glPixelTexGenSGIX (GLenum);
extern void  glPixelTexGenParameteriSGIS (GLenum, GLint);
extern void  glPixelTexGenParameterivSGIS (GLenum, const GLint *);
extern void  glPixelTexGenParameterfSGIS (GLenum, GLfloat);
extern void  glPixelTexGenParameterfvSGIS (GLenum, const GLfloat *);
extern void  glGetPixelTexGenParameterivSGIS (GLenum, GLint *);
extern void  glGetPixelTexGenParameterfvSGIS (GLenum, GLfloat *);
extern void  glTexImage4DSGIS (GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *);
extern void  glTexSubImage4DSGIS (GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
extern GLboolean  glAreTexturesResidentEXT (GLsizei, const GLuint *, GLboolean *);
extern void  glBindTextureEXT (GLenum, GLuint);
extern void  glDeleteTexturesEXT (GLsizei, const GLuint *);
extern void  glGenTexturesEXT (GLsizei, GLuint *);
extern GLboolean  glIsTextureEXT (GLuint);
extern void  glPrioritizeTexturesEXT (GLsizei, const GLuint *, const GLclampf *);
extern void  glDetailTexFuncSGIS (GLenum, GLsizei, const GLfloat *);
extern void  glGetDetailTexFuncSGIS (GLenum, GLfloat *);
extern void  glSharpenTexFuncSGIS (GLenum, GLsizei, const GLfloat *);
extern void  glGetSharpenTexFuncSGIS (GLenum, GLfloat *);
extern void  glSampleMaskSGIS (GLclampf, GLboolean);
extern void  glSamplePatternSGIS (GLenum);
extern void  glArrayElementEXT (GLint);
extern void  glColorPointerEXT (GLint, GLenum, GLsizei, GLsizei, const GLvoid *);
extern void  glDrawArraysEXT (GLenum, GLint, GLsizei);
extern void  glEdgeFlagPointerEXT (GLsizei, GLsizei, const GLboolean *);
extern void  glGetPointervEXT (GLenum, GLvoid* *);
extern void  glIndexPointerEXT (GLenum, GLsizei, GLsizei, const GLvoid *);
extern void  glNormalPointerEXT (GLenum, GLsizei, GLsizei, const GLvoid *);
extern void  glTexCoordPointerEXT (GLint, GLenum, GLsizei, GLsizei, const GLvoid *);
extern void  glVertexPointerEXT (GLint, GLenum, GLsizei, GLsizei, const GLvoid *);
extern void  glBlendEquationEXT (GLenum);
extern void  glSpriteParameterfSGIX (GLenum, GLfloat);
extern void  glSpriteParameterfvSGIX (GLenum, const GLfloat *);
extern void  glSpriteParameteriSGIX (GLenum, GLint);
extern void  glSpriteParameterivSGIX (GLenum, const GLint *);
extern void  glPointParameterfARB (GLenum, GLfloat);
extern void  glPointParameterfvARB (GLenum, const GLfloat *);
extern void  glPointParameterfEXT (GLenum, GLfloat);
extern void  glPointParameterfvEXT (GLenum, const GLfloat *);
extern void  glPointParameterfSGIS (GLenum, GLfloat);
extern void  glPointParameterfvSGIS (GLenum, const GLfloat *);
extern GLint  glGetInstrumentsSGIX (void);
extern void  glInstrumentsBufferSGIX (GLsizei, GLint *);
extern GLint  glPollInstrumentsSGIX (GLint *);
extern void  glReadInstrumentsSGIX (GLint);
extern void  glStartInstrumentsSGIX (void);
extern void  glStopInstrumentsSGIX (GLint);
extern void  glFrameZoomSGIX (GLint);
extern void  glTagSampleBufferSGIX (void);
extern void  glDeformationMap3dSGIX (GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *);
extern void  glDeformationMap3fSGIX (GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *);
extern void  glDeformSGIX (GLbitfield);
extern void  glLoadIdentityDeformationMapSGIX (GLbitfield);
extern void  glReferencePlaneSGIX (const GLdouble *);
extern void  glFlushRasterSGIX (void);
extern void  glFogFuncSGIS (GLsizei, const GLfloat *);
extern void  glGetFogFuncSGIS (GLfloat *);
extern void  glImageTransformParameteriHP (GLenum, GLenum, GLint);
extern void  glImageTransformParameterfHP (GLenum, GLenum, GLfloat);
extern void  glImageTransformParameterivHP (GLenum, GLenum, const GLint *);
extern void  glImageTransformParameterfvHP (GLenum, GLenum, const GLfloat *);
extern void  glGetImageTransformParameterivHP (GLenum, GLenum, GLint *);
extern void  glGetImageTransformParameterfvHP (GLenum, GLenum, GLfloat *);
extern void  glColorSubTableEXT (GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
extern void  glCopyColorSubTableEXT (GLenum, GLsizei, GLint, GLint, GLsizei);
extern void  glHintPGI (GLenum, GLint);
extern void  glColorTableEXT (GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *);
extern void  glGetColorTableEXT (GLenum, GLenum, GLenum, GLvoid *);
extern void  glGetColorTableParameterivEXT (GLenum, GLenum, GLint *);
extern void  glGetColorTableParameterfvEXT (GLenum, GLenum, GLfloat *);
extern void  glGetListParameterfvSGIX (GLuint, GLenum, GLfloat *);
extern void  glGetListParameterivSGIX (GLuint, GLenum, GLint *);
extern void  glListParameterfSGIX (GLuint, GLenum, GLfloat);
extern void  glListParameterfvSGIX (GLuint, GLenum, const GLfloat *);
extern void  glListParameteriSGIX (GLuint, GLenum, GLint);
extern void  glListParameterivSGIX (GLuint, GLenum, const GLint *);
extern void  glIndexMaterialEXT (GLenum, GLenum);
extern void  glIndexFuncEXT (GLenum, GLclampf);
extern void  glLockArraysEXT (GLint, GLsizei);
extern void  glUnlockArraysEXT (void);
extern void  glCullParameterdvEXT (GLenum, GLdouble *);
extern void  glCullParameterfvEXT (GLenum, GLfloat *);
extern void  glFragmentColorMaterialSGIX (GLenum, GLenum);
extern void  glFragmentLightfSGIX (GLenum, GLenum, GLfloat);
extern void  glFragmentLightfvSGIX (GLenum, GLenum, const GLfloat *);
extern void  glFragmentLightiSGIX (GLenum, GLenum, GLint);
extern void  glFragmentLightivSGIX (GLenum, GLenum, const GLint *);
extern void  glFragmentLightModelfSGIX (GLenum, GLfloat);
extern void  glFragmentLightModelfvSGIX (GLenum, const GLfloat *);
extern void  glFragmentLightModeliSGIX (GLenum, GLint);
extern void  glFragmentLightModelivSGIX (GLenum, const GLint *);
extern void  glFragmentMaterialfSGIX (GLenum, GLenum, GLfloat);
extern void  glFragmentMaterialfvSGIX (GLenum, GLenum, const GLfloat *);
extern void  glFragmentMaterialiSGIX (GLenum, GLenum, GLint);
extern void  glFragmentMaterialivSGIX (GLenum, GLenum, const GLint *);
extern void  glGetFragmentLightfvSGIX (GLenum, GLenum, GLfloat *);
extern void  glGetFragmentLightivSGIX (GLenum, GLenum, GLint *);
extern void  glGetFragmentMaterialfvSGIX (GLenum, GLenum, GLfloat *);
extern void  glGetFragmentMaterialivSGIX (GLenum, GLenum, GLint *);
extern void  glLightEnviSGIX (GLenum, GLint);
extern void  glDrawRangeElementsEXT (GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *);
extern void  glApplyTextureEXT (GLenum);
extern void  glTextureLightEXT (GLenum);
extern void  glTextureMaterialEXT (GLenum, GLenum);
extern void  glAsyncMarkerSGIX (GLuint);
extern GLint  glFinishAsyncSGIX (GLuint *);
extern GLint  glPollAsyncSGIX (GLuint *);
extern GLuint  glGenAsyncMarkersSGIX (GLsizei);
extern void  glDeleteAsyncMarkersSGIX (GLuint, GLsizei);
extern GLboolean  glIsAsyncMarkerSGIX (GLuint);
extern void  glVertexPointervINTEL (GLint, GLenum, const GLvoid* *);
extern void  glNormalPointervINTEL (GLenum, const GLvoid* *);
extern void  glColorPointervINTEL (GLint, GLenum, const GLvoid* *);
extern void  glTexCoordPointervINTEL (GLint, GLenum, const GLvoid* *);
extern void  glPixelTransformParameteriEXT (GLenum, GLenum, GLint);
extern void  glPixelTransformParameterfEXT (GLenum, GLenum, GLfloat);
extern void  glPixelTransformParameterivEXT (GLenum, GLenum, const GLint *);
extern void  glPixelTransformParameterfvEXT (GLenum, GLenum, const GLfloat *);
extern void  glSecondaryColor3bEXT (GLbyte, GLbyte, GLbyte);
extern void  glSecondaryColor3bvEXT (const GLbyte *);
extern void  glSecondaryColor3dEXT (GLdouble, GLdouble, GLdouble);
extern void  glSecondaryColor3dvEXT (const GLdouble *);
extern void  glSecondaryColor3fEXT (GLfloat, GLfloat, GLfloat);
extern void  glSecondaryColor3fvEXT (const GLfloat *);
extern void  glSecondaryColor3iEXT (GLint, GLint, GLint);
extern void  glSecondaryColor3ivEXT (const GLint *);
extern void  glSecondaryColor3sEXT (GLshort, GLshort, GLshort);
extern void  glSecondaryColor3svEXT (const GLshort *);
extern void  glSecondaryColor3ubEXT (GLubyte, GLubyte, GLubyte);
extern void  glSecondaryColor3ubvEXT (const GLubyte *);
extern void  glSecondaryColor3uiEXT (GLuint, GLuint, GLuint);
extern void  glSecondaryColor3uivEXT (const GLuint *);
extern void  glSecondaryColor3usEXT (GLushort, GLushort, GLushort);
extern void  glSecondaryColor3usvEXT (const GLushort *);
extern void  glSecondaryColorPointerEXT (GLint, GLenum, GLsizei, const GLvoid *);
extern void  glTextureNormalEXT (GLenum);
extern void  glMultiDrawArraysEXT (GLenum, GLint *, GLsizei *, GLsizei);
extern void  glMultiDrawElementsEXT (GLenum, const GLsizei *, GLenum, const GLvoid* *, GLsizei);
extern void  glFogCoordfEXT (GLfloat);
extern void  glFogCoordfvEXT (const GLfloat *);
extern void  glFogCoorddEXT (GLdouble);
extern void  glFogCoorddvEXT (const GLdouble *);
extern void  glFogCoordPointerEXT (GLenum, GLsizei, const GLvoid *);
extern void  glTangent3bEXT (GLbyte, GLbyte, GLbyte);
extern void  glTangent3bvEXT (const GLbyte *);
extern void  glTangent3dEXT (GLdouble, GLdouble, GLdouble);
extern void  glTangent3dvEXT (const GLdouble *);
extern void  glTangent3fEXT (GLfloat, GLfloat, GLfloat);
extern void  glTangent3fvEXT (const GLfloat *);
extern void  glTangent3iEXT (GLint, GLint, GLint);
extern void  glTangent3ivEXT (const GLint *);
extern void  glTangent3sEXT (GLshort, GLshort, GLshort);
extern void  glTangent3svEXT (const GLshort *);
extern void  glBinormal3bEXT (GLbyte, GLbyte, GLbyte);
extern void  glBinormal3bvEXT (const GLbyte *);
extern void  glBinormal3dEXT (GLdouble, GLdouble, GLdouble);
extern void  glBinormal3dvEXT (const GLdouble *);
extern void  glBinormal3fEXT (GLfloat, GLfloat, GLfloat);
extern void  glBinormal3fvEXT (const GLfloat *);
extern void  glBinormal3iEXT (GLint, GLint, GLint);
extern void  glBinormal3ivEXT (const GLint *);
extern void  glBinormal3sEXT (GLshort, GLshort, GLshort);
extern void  glBinormal3svEXT (const GLshort *);
extern void  glTangentPointerEXT (GLenum, GLsizei, const GLvoid *);
extern void  glBinormalPointerEXT (GLenum, GLsizei, const GLvoid *);
extern void  glFinishTextureSUNX (void);
extern void  glGlobalAlphaFactorbSUN (GLbyte);
extern void  glGlobalAlphaFactorsSUN (GLshort);
extern void  glGlobalAlphaFactoriSUN (GLint);
extern void  glGlobalAlphaFactorfSUN (GLfloat);
extern void  glGlobalAlphaFactordSUN (GLdouble);
extern void  glGlobalAlphaFactorubSUN (GLubyte);
extern void  glGlobalAlphaFactorusSUN (GLushort);
extern void  glGlobalAlphaFactoruiSUN (GLuint);
extern void  glReplacementCodeuiSUN (GLuint);
extern void  glReplacementCodeusSUN (GLushort);
extern void  glReplacementCodeubSUN (GLubyte);
extern void  glReplacementCodeuivSUN (const GLuint *);
extern void  glReplacementCodeusvSUN (const GLushort *);
extern void  glReplacementCodeubvSUN (const GLubyte *);
extern void  glReplacementCodePointerSUN (GLenum, GLsizei, const GLvoid* *);
extern void  glColor4ubVertex2fSUN (GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat);
extern void  glColor4ubVertex2fvSUN (const GLubyte *, const GLfloat *);
extern void  glColor4ubVertex3fSUN (GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat);
extern void  glColor4ubVertex3fvSUN (const GLubyte *, const GLfloat *);
extern void  glColor3fVertex3fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glColor3fVertex3fvSUN (const GLfloat *, const GLfloat *);
extern void  glNormal3fVertex3fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glNormal3fVertex3fvSUN (const GLfloat *, const GLfloat *);
extern void  glColor4fNormal3fVertex3fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glColor4fNormal3fVertex3fvSUN (const GLfloat *, const GLfloat *, const GLfloat *);
extern void  glTexCoord2fVertex3fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glTexCoord2fVertex3fvSUN (const GLfloat *, const GLfloat *);
extern void  glTexCoord4fVertex4fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glTexCoord4fVertex4fvSUN (const GLfloat *, const GLfloat *);
extern void  glTexCoord2fColor4ubVertex3fSUN (GLfloat, GLfloat, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat);
extern void  glTexCoord2fColor4ubVertex3fvSUN (const GLfloat *, const GLubyte *, const GLfloat *);
extern void  glTexCoord2fColor3fVertex3fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glTexCoord2fColor3fVertex3fvSUN (const GLfloat *, const GLfloat *, const GLfloat *);
extern void  glTexCoord2fNormal3fVertex3fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glTexCoord2fNormal3fVertex3fvSUN (const GLfloat *, const GLfloat *, const GLfloat *);
extern void  glTexCoord2fColor4fNormal3fVertex3fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glTexCoord2fColor4fNormal3fVertex3fvSUN (const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *);
extern void  glTexCoord4fColor4fNormal3fVertex4fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glTexCoord4fColor4fNormal3fVertex4fvSUN (const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *);
extern void  glReplacementCodeuiVertex3fSUN (GLenum, GLfloat, GLfloat, GLfloat);
extern void  glReplacementCodeuiVertex3fvSUN (const GLenum *, const GLfloat *);
extern void  glReplacementCodeuiColor4ubVertex3fSUN (GLenum, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat);
extern void  glReplacementCodeuiColor4ubVertex3fvSUN (const GLenum *, const GLubyte *, const GLfloat *);
extern void  glReplacementCodeuiColor3fVertex3fSUN (GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glReplacementCodeuiColor3fVertex3fvSUN (const GLenum *, const GLfloat *, const GLfloat *);
extern void  glReplacementCodeuiNormal3fVertex3fSUN (GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glReplacementCodeuiNormal3fVertex3fvSUN (const GLenum *, const GLfloat *, const GLfloat *);
extern void  glReplacementCodeuiColor4fNormal3fVertex3fSUN (GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glReplacementCodeuiColor4fNormal3fVertex3fvSUN (const GLenum *, const GLfloat *, const GLfloat *, const GLfloat *);
extern void  glReplacementCodeuiTexCoord2fVertex3fSUN (GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glReplacementCodeuiTexCoord2fVertex3fvSUN (const GLenum *, const GLfloat *, const GLfloat *);
extern void  glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN (GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN (const GLenum *, const GLfloat *, const GLfloat *, const GLfloat *);
extern void  glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN (GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN (const GLenum *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *);
extern void  glBlendFuncSeparateEXT (GLenum, GLenum, GLenum, GLenum);
extern void  glBlendFuncSeparateINGR (GLenum, GLenum, GLenum, GLenum);
extern void  glVertexWeightfEXT (GLfloat);
extern void  glVertexWeightfvEXT (const GLfloat *);
extern void  glVertexWeightPointerEXT (GLsizei, GLenum, GLsizei, const GLvoid *);
extern void  glFlushVertexArrayRangeNV (void);
extern void  glVertexArrayRangeNV (GLsizei, const GLvoid *);
extern void  glCombinerParameterfvNV (GLenum, const GLfloat *);
extern void  glCombinerParameterfNV (GLenum, GLfloat);
extern void  glCombinerParameterivNV (GLenum, const GLint *);
extern void  glCombinerParameteriNV (GLenum, GLint);
extern void  glCombinerInputNV (GLenum, GLenum, GLenum, GLenum, GLenum, GLenum);
extern void  glCombinerOutputNV (GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean);
extern void  glFinalCombinerInputNV (GLenum, GLenum, GLenum, GLenum);
extern void  glGetCombinerInputParameterfvNV (GLenum, GLenum, GLenum, GLenum, GLfloat *);
extern void  glGetCombinerInputParameterivNV (GLenum, GLenum, GLenum, GLenum, GLint *);
extern void  glGetCombinerOutputParameterfvNV (GLenum, GLenum, GLenum, GLfloat *);
extern void  glGetCombinerOutputParameterivNV (GLenum, GLenum, GLenum, GLint *);
extern void  glGetFinalCombinerInputParameterfvNV (GLenum, GLenum, GLfloat *);
extern void  glGetFinalCombinerInputParameterivNV (GLenum, GLenum, GLint *);
extern void  glMultiModeDrawArraysIBM (GLenum, const GLint *, const GLsizei *, GLsizei, GLint);
extern void  glMultiModeDrawElementsIBM (const GLenum *, const GLsizei *, GLenum, const GLvoid* *, GLsizei, GLint);
extern void  glColorPointerListIBM (GLint, GLenum, GLint, const GLvoid* *, GLint);
extern void  glSecondaryColorPointerListIBM (GLint, GLenum, GLint, const GLvoid* *, GLint);
extern void  glEdgeFlagPointerListIBM (GLint, const GLboolean* *, GLint);
extern void  glFogCoordPointerListIBM (GLenum, GLint, const GLvoid* *, GLint);
extern void  glIndexPointerListIBM (GLenum, GLint, const GLvoid* *, GLint);
extern void  glNormalPointerListIBM (GLenum, GLint, const GLvoid* *, GLint);
extern void  glTexCoordPointerListIBM (GLint, GLenum, GLint, const GLvoid* *, GLint);
extern void  glVertexPointerListIBM (GLint, GLenum, GLint, const GLvoid* *, GLint);
extern void  glTbufferMask3DFX (GLuint);
extern void  glSampleMaskEXT (GLclampf, GLboolean);
extern void  glSamplePatternEXT (GLenum);
extern void  glTextureColorMaskSGIS (GLboolean, GLboolean, GLboolean, GLboolean);
extern void  glIglooInterfaceSGIX (GLenum, const GLvoid *);
extern void  glGenFencesNV (GLsizei, GLuint *);
extern void  glDeleteFencesNV (GLsizei, const GLuint *);
extern void  glSetFenceNV (GLuint, GLenum);
extern GLboolean  glTestFenceNV (GLuint);
extern void  glFinishFenceNV (GLuint);
extern GLboolean  glIsFenceNV (GLuint);
extern void  glGetFenceivNV (GLuint, GLenum, GLint *);
extern void  glMapControlPointsNV (GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, const GLvoid *);
extern void  glMapParameterivNV (GLenum, GLenum, const GLint *);
extern void  glMapParameterfvNV (GLenum, GLenum, const GLfloat *);
extern void  glGetMapControlPointsNV (GLenum, GLuint, GLenum, GLsizei, GLsizei, GLboolean, GLvoid *);
extern void  glGetMapParameterivNV (GLenum, GLenum, GLint *);
extern void  glGetMapParameterfvNV (GLenum, GLenum, GLfloat *);
extern void  glGetMapAttribParameterivNV (GLenum, GLuint, GLenum, GLint *);
extern void  glGetMapAttribParameterfvNV (GLenum, GLuint, GLenum, GLfloat *);
extern void  glEvalMapsNV (GLenum, GLenum);
extern void  glCombinerStageParameterfvNV (GLenum, GLenum, const GLfloat *);
extern void  glGetCombinerStageParameterfvNV (GLenum, GLenum, GLfloat *);
extern void  glBindProgramNV (GLenum, GLuint);
extern void  glDeleteProgramsNV (GLsizei, const GLuint *);
extern void  glExecuteProgramNV (GLenum, GLuint, const GLfloat *);
extern void  glGenProgramsNV (GLsizei, GLuint *);
extern GLboolean  glAreProgramsResidentNV (GLsizei, const GLuint *, GLboolean *);
extern void  glRequestResidentProgramsNV (GLsizei, const GLuint *);
extern void  glGetProgramParameterfvNV (GLenum, GLuint, GLenum, GLfloat *);
extern void  glGetProgramParameterdvNV (GLenum, GLuint, GLenum, GLdouble *);
extern void  glGetProgramivNV (GLuint, GLenum, GLint *);
extern void  glGetProgramStringNV (GLuint, GLenum, GLubyte *);
extern void  glGetTrackMatrixivNV (GLenum, GLuint, GLenum, GLint *);
extern void  glGetVertexAttribdvNV (GLuint, GLenum, GLdouble *);
extern void  glGetVertexAttribfvNV (GLuint, GLenum, GLfloat *);
extern void  glGetVertexAttribivNV (GLuint, GLenum, GLint *);
extern void  glGetVertexAttribPointervNV (GLuint, GLenum, GLvoid* *);
extern GLboolean  glIsProgramNV (GLuint);
extern void  glLoadProgramNV (GLenum, GLuint, GLsizei, const GLubyte *);
extern void  glProgramParameter4fNV (GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glProgramParameter4dNV (GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble);
extern void  glProgramParameter4dvNV (GLenum, GLuint, const GLdouble *);
extern void  glProgramParameter4fvNV (GLenum, GLuint, const GLfloat *);
extern void  glProgramParameters4dvNV (GLenum, GLuint, GLuint, const GLdouble *);
extern void  glProgramParameters4fvNV (GLenum, GLuint, GLuint, const GLfloat *);
extern void  glTrackMatrixNV (GLenum, GLuint, GLenum, GLenum);
extern void  glVertexAttribPointerNV (GLuint, GLint, GLenum, GLsizei, const GLvoid *);
extern void  glVertexAttrib1sNV (GLuint, GLshort);
extern void  glVertexAttrib1fNV (GLuint, GLfloat);
extern void  glVertexAttrib1dNV (GLuint, GLdouble);
extern void  glVertexAttrib2sNV (GLuint, GLshort, GLshort);
extern void  glVertexAttrib2fNV (GLuint, GLfloat, GLfloat);
extern void  glVertexAttrib2dNV (GLuint, GLdouble, GLdouble);
extern void  glVertexAttrib3sNV (GLuint, GLshort, GLshort, GLshort);
extern void  glVertexAttrib3fNV (GLuint, GLfloat, GLfloat, GLfloat);
extern void  glVertexAttrib3dNV (GLuint, GLdouble, GLdouble, GLdouble);
extern void  glVertexAttrib4sNV (GLuint, GLshort, GLshort, GLshort, GLshort);
extern void  glVertexAttrib4fNV (GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glVertexAttrib4dNV (GLuint, GLdouble, GLdouble, GLdouble, GLdouble);
extern void  glVertexAttrib4ubNV (GLuint, GLubyte, GLubyte, GLubyte, GLubyte);
extern void  glVertexAttrib1svNV (GLuint, const GLshort *);
extern void  glVertexAttrib1fvNV (GLuint, const GLfloat *);
extern void  glVertexAttrib1dvNV (GLuint, const GLdouble *);
extern void  glVertexAttrib2svNV (GLuint, const GLshort *);
extern void  glVertexAttrib2fvNV (GLuint, const GLfloat *);
extern void  glVertexAttrib2dvNV (GLuint, const GLdouble *);
extern void  glVertexAttrib3svNV (GLuint, const GLshort *);
extern void  glVertexAttrib3fvNV (GLuint, const GLfloat *);
extern void  glVertexAttrib3dvNV (GLuint, const GLdouble *);
extern void  glVertexAttrib4svNV (GLuint, const GLshort *);
extern void  glVertexAttrib4fvNV (GLuint, const GLfloat *);
extern void  glVertexAttrib4dvNV (GLuint, const GLdouble *);
extern void  glVertexAttrib4ubvNV (GLuint, const GLubyte *);
extern void  glVertexAttribs1svNV (GLuint, GLsizei, const GLshort *);
extern void  glVertexAttribs1fvNV (GLuint, GLsizei, const GLfloat *);
extern void  glVertexAttribs1dvNV (GLuint, GLsizei, const GLdouble *);
extern void  glVertexAttribs2svNV (GLuint, GLsizei, const GLshort *);
extern void  glVertexAttribs2fvNV (GLuint, GLsizei, const GLfloat *);
extern void  glVertexAttribs2dvNV (GLuint, GLsizei, const GLdouble *);
extern void  glVertexAttribs3svNV (GLuint, GLsizei, const GLshort *);
extern void  glVertexAttribs3fvNV (GLuint, GLsizei, const GLfloat *);
extern void  glVertexAttribs3dvNV (GLuint, GLsizei, const GLdouble *);
extern void  glVertexAttribs4svNV (GLuint, GLsizei, const GLshort *);
extern void  glVertexAttribs4fvNV (GLuint, GLsizei, const GLfloat *);
extern void  glVertexAttribs4dvNV (GLuint, GLsizei, const GLdouble *);
extern void  glVertexAttribs4ubvNV (GLuint, GLsizei, const GLubyte *);
extern void  glTexBumpParameterivATI (GLenum, const GLint *);
extern void  glTexBumpParameterfvATI (GLenum, const GLfloat *);
extern void  glGetTexBumpParameterivATI (GLenum, GLint *);
extern void  glGetTexBumpParameterfvATI (GLenum, GLfloat *);
extern GLuint  glGenFragmentShadersATI (GLuint);
extern void  glBindFragmentShaderATI (GLuint);
extern void  glDeleteFragmentShaderATI (GLuint);
extern void  glBeginFragmentShaderATI (void);
extern void  glEndFragmentShaderATI (void);
extern void  glPassTexCoordATI (GLuint, GLuint, GLenum);
extern void  glSampleMapATI (GLuint, GLuint, GLenum);
extern void  glColorFragmentOp1ATI (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint);
extern void  glColorFragmentOp2ATI (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint);
extern void  glColorFragmentOp3ATI (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint);
extern void  glAlphaFragmentOp1ATI (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint);
extern void  glAlphaFragmentOp2ATI (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint);
extern void  glAlphaFragmentOp3ATI (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint);
extern void  glSetFragmentShaderConstantATI (GLuint, const GLfloat *);
extern void  glPNTrianglesiATI (GLenum, GLint);
extern void  glPNTrianglesfATI (GLenum, GLfloat);
extern GLuint  glNewObjectBufferATI (GLsizei, const GLvoid *, GLenum);
extern GLboolean  glIsObjectBufferATI (GLuint);
extern void  glUpdateObjectBufferATI (GLuint, GLuint, GLsizei, const GLvoid *, GLenum);
extern void  glGetObjectBufferfvATI (GLuint, GLenum, GLfloat *);
extern void  glGetObjectBufferivATI (GLuint, GLenum, GLint *);
extern void  glDeleteObjectBufferATI (GLuint);
extern void  glArrayObjectATI (GLenum, GLint, GLenum, GLsizei, GLuint, GLuint);
extern void  glGetArrayObjectfvATI (GLenum, GLenum, GLfloat *);
extern void  glGetArrayObjectivATI (GLenum, GLenum, GLint *);
extern void  glVariantArrayObjectATI (GLuint, GLenum, GLsizei, GLuint, GLuint);
extern void  glGetVariantArrayObjectfvATI (GLuint, GLenum, GLfloat *);
extern void  glGetVariantArrayObjectivATI (GLuint, GLenum, GLint *);
extern void  glBeginVertexShaderEXT (void);
extern void  glEndVertexShaderEXT (void);
extern void  glBindVertexShaderEXT (GLuint);
extern GLuint  glGenVertexShadersEXT (GLuint);
extern void  glDeleteVertexShaderEXT (GLuint);
extern void  glShaderOp1EXT (GLenum, GLuint, GLuint);
extern void  glShaderOp2EXT (GLenum, GLuint, GLuint, GLuint);
extern void  glShaderOp3EXT (GLenum, GLuint, GLuint, GLuint, GLuint);
extern void  glSwizzleEXT (GLuint, GLuint, GLenum, GLenum, GLenum, GLenum);
extern void  glWriteMaskEXT (GLuint, GLuint, GLenum, GLenum, GLenum, GLenum);
extern void  glInsertComponentEXT (GLuint, GLuint, GLuint);
extern void  glExtractComponentEXT (GLuint, GLuint, GLuint);
extern GLuint  glGenSymbolsEXT (GLenum, GLenum, GLenum, GLuint);
extern void  glSetInvariantEXT (GLuint, GLenum, const void *);
extern void  glSetLocalConstantEXT (GLuint, GLenum, const void *);
extern void  glVariantbvEXT (GLuint, const GLbyte *);
extern void  glVariantsvEXT (GLuint, const GLshort *);
extern void  glVariantivEXT (GLuint, const GLint *);
extern void  glVariantfvEXT (GLuint, const GLfloat *);
extern void  glVariantdvEXT (GLuint, const GLdouble *);
extern void  glVariantubvEXT (GLuint, const GLubyte *);
extern void  glVariantusvEXT (GLuint, const GLushort *);
extern void  glVariantuivEXT (GLuint, const GLuint *);
extern void  glVariantPointerEXT (GLuint, GLenum, GLuint, const void *);
extern void  glEnableVariantClientStateEXT (GLuint);
extern void  glDisableVariantClientStateEXT (GLuint);
extern GLuint  glBindLightParameterEXT (GLenum, GLenum);
extern GLuint  glBindMaterialParameterEXT (GLenum, GLenum);
extern GLuint  glBindTexGenParameterEXT (GLenum, GLenum, GLenum);
extern GLuint  glBindTextureUnitParameterEXT (GLenum, GLenum);
extern GLuint  glBindParameterEXT (GLenum);
extern GLboolean  glIsVariantEnabledEXT (GLuint, GLenum);
extern void  glGetVariantBooleanvEXT (GLuint, GLenum, GLboolean *);
extern void  glGetVariantIntegervEXT (GLuint, GLenum, GLint *);
extern void  glGetVariantFloatvEXT (GLuint, GLenum, GLfloat *);
extern void  glGetVariantPointervEXT (GLuint, GLenum, GLvoid* *);
extern void  glGetInvariantBooleanvEXT (GLuint, GLenum, GLboolean *);
extern void  glGetInvariantIntegervEXT (GLuint, GLenum, GLint *);
extern void  glGetInvariantFloatvEXT (GLuint, GLenum, GLfloat *);
extern void  glGetLocalConstantBooleanvEXT (GLuint, GLenum, GLboolean *);
extern void  glGetLocalConstantIntegervEXT (GLuint, GLenum, GLint *);
extern void  glGetLocalConstantFloatvEXT (GLuint, GLenum, GLfloat *);
extern void  glVertexStream1s (GLenum, GLshort);
extern void  glVertexStream1sv (GLenum, const GLshort *);
extern void  glVertexStream1i (GLenum, GLint);
extern void  glVertexStream1iv (GLenum, const GLint *);
extern void  glVertexStream1f (GLenum, GLfloat);
extern void  glVertexStream1fv (GLenum, const GLfloat *);
extern void  glVertexStream1d (GLenum, GLdouble);
extern void  glVertexStream1dv (GLenum, const GLdouble *);
extern void  glVertexStream2s (GLenum, GLshort, GLshort);
extern void  glVertexStream2sv (GLenum, const GLshort *);
extern void  glVertexStream2i (GLenum, GLint, GLint);
extern void  glVertexStream2iv (GLenum, const GLint *);
extern void  glVertexStream2f (GLenum, GLfloat, GLfloat);
extern void  glVertexStream2fv (GLenum, const GLfloat *);
extern void  glVertexStream2d (GLenum, GLdouble, GLdouble);
extern void  glVertexStream2dv (GLenum, const GLdouble *);
extern void  glVertexStream3s (GLenum, GLshort, GLshort, GLshort);
extern void  glVertexStream3sv (GLenum, const GLshort *);
extern void  glVertexStream3i (GLenum, GLint, GLint, GLint);
extern void  glVertexStream3iv (GLenum, const GLint *);
extern void  glVertexStream3f (GLenum, GLfloat, GLfloat, GLfloat);
extern void  glVertexStream3fv (GLenum, const GLfloat *);
extern void  glVertexStream3d (GLenum, GLdouble, GLdouble, GLdouble);
extern void  glVertexStream3dv (GLenum, const GLdouble *);
extern void  glVertexStream4s (GLenum, GLshort, GLshort, GLshort, GLshort);
extern void  glVertexStream4sv (GLenum, const GLshort *);
extern void  glVertexStream4i (GLenum, GLint, GLint, GLint, GLint);
extern void  glVertexStream4iv (GLenum, const GLint *);
extern void  glVertexStream4f (GLenum, GLfloat, GLfloat, GLfloat, GLfloat);
extern void  glVertexStream4fv (GLenum, const GLfloat *);
extern void  glVertexStream4d (GLenum, GLdouble, GLdouble, GLdouble, GLdouble);
extern void  glVertexStream4dv (GLenum, const GLdouble *);
extern void  glNormalStream3b (GLenum, GLbyte, GLbyte, GLbyte);
extern void  glNormalStream3bv (GLenum, const GLbyte *);
extern void  glNormalStream3s (GLenum, GLshort, GLshort, GLshort);
extern void  glNormalStream3sv (GLenum, const GLshort *);
extern void  glNormalStream3i (GLenum, GLint, GLint, GLint);
extern void  glNormalStream3iv (GLenum, const GLint *);
extern void  glNormalStream3f (GLenum, GLfloat, GLfloat, GLfloat);
extern void  glNormalStream3fv (GLenum, const GLfloat *);
extern void  glNormalStream3d (GLenum, GLdouble, GLdouble, GLdouble);
extern void  glNormalStream3dv (GLenum, const GLdouble *);
extern void  glClientActiveVertexStream (GLenum);
extern void  glVertexBlendEnvi (GLenum, GLint);
extern void  glVertexBlendEnvf (GLenum, GLfloat);
