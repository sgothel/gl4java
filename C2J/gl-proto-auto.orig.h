extern void  glClearIndex( GLfloat c );
extern void  glClearColor( GLclampf red,
			  GLclampf green,
			  GLclampf blue,
			  GLclampf alpha );
extern void  glClear( GLbitfield mask );
extern void  glIndexMask( GLuint mask );
extern void  glColorMask( GLboolean red, GLboolean green,
			 GLboolean blue, GLboolean alpha );
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
extern void  glScissor( GLint x, GLint y,
                                   GLsizei width, GLsizei height);
extern void  glClipPlane( GLenum plane, const GLdouble *equation );
extern void  glGetClipPlane( GLenum plane, GLdouble *equation );
extern void  glDrawBuffer( GLenum mode );
extern void  glReadBuffer( GLenum mode );
extern void  glEnable( GLenum cap );
extern void  glDisable( GLenum cap );
extern GLboolean  glIsEnabled( GLenum cap );
extern void  glEnableClientState( GLenum cap );   
extern void  glDisableClientState( GLenum cap );   
extern void  glGetBooleanv( GLenum pname, GLboolean *params );
extern void  glGetDoublev( GLenum pname, GLdouble *params );
extern void  glGetFloatv( GLenum pname, GLfloat *params );
extern void  glGetIntegerv( GLenum pname, GLint *params );
extern void  glPushAttrib( GLbitfield mask );
extern void  glPopAttrib( void );
extern void  glPushClientAttrib( GLbitfield mask );   
extern void  glPopClientAttrib( void );   
extern GLint  glRenderMode( GLenum mode );
extern GLenum  glGetError( void );
extern void  glFinish( void );
extern void  glFlush( void );
extern void  glHint( GLenum target, GLenum mode );
extern void  glClearDepth( GLclampd depth );
extern void  glDepthFunc( GLenum func );
extern void  glDepthMask( GLboolean flag );
extern void  glDepthRange( GLclampd near_val, GLclampd far_val );
extern void  glClearAccum( GLfloat red, GLfloat green,
                                      GLfloat blue, GLfloat alpha );
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
extern void  glIndexub( GLubyte c );   
extern void  glIndexdv( const GLdouble *c );
extern void  glIndexfv( const GLfloat *c );
extern void  glIndexiv( const GLint *c );
extern void  glIndexsv( const GLshort *c );
extern void  glIndexubv( const GLubyte *c );   
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
extern void  glGetPointerv( GLenum pname, void **params );
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
                                      GLint internalFormat,
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
extern void  glGetPointervEXT( GLenum pname, void **params );
extern void  glArrayElementEXT( GLint i );
extern void  glDrawArraysEXT( GLenum mode, GLint first, GLsizei count );
extern void  glBlendEquationEXT( GLenum mode );
extern void  glPointParameterfEXT( GLenum pname, GLfloat param );
extern void  glPointParameterfvEXT( GLenum pname, const GLfloat *params );
extern void  glColorTableEXT( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table );
extern void  glColorSubTableEXT( GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data );
extern void  glGetColorTableEXT( GLenum target, GLenum format, GLenum type, GLvoid *table );
extern void  glGetColorTableParameterfvEXT( GLenum target, GLenum pname, GLfloat *params );
extern void  glGetColorTableParameterivEXT( GLenum target, GLenum pname, GLint *params );
extern void  glLockArraysEXT( GLint first, GLsizei count );
extern void  glUnlockArraysEXT( void );
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
