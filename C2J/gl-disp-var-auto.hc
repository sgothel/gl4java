/**
 * C2J Parser Version 2.2
 * Jausoft - Sven Goethel Software Development
 * Reading from file: gl-proto-auto.orig.h . . .
 * Destination-Class: gl4java_GLUFuncJauJNI ! 
 */

	void (CALLBACK * disp__glClearIndex )(GLfloat) = NULL;

	void (CALLBACK * disp__glClearColor )(GLclampf, GLclampf, GLclampf, GLclampf) = NULL;

	void (CALLBACK * disp__glClear )(GLbitfield) = NULL;

	void (CALLBACK * disp__glIndexMask )(GLuint) = NULL;

	void (CALLBACK * disp__glColorMask )(GLboolean, GLboolean, GLboolean, GLboolean) = NULL;

	void (CALLBACK * disp__glAlphaFunc )(GLenum, GLclampf) = NULL;

	void (CALLBACK * disp__glBlendFunc )(GLenum, GLenum) = NULL;

	void (CALLBACK * disp__glLogicOp )(GLenum) = NULL;

	void (CALLBACK * disp__glCullFace )(GLenum) = NULL;

	void (CALLBACK * disp__glFrontFace )(GLenum) = NULL;

	void (CALLBACK * disp__glPointSize )(GLfloat) = NULL;

	void (CALLBACK * disp__glLineWidth )(GLfloat) = NULL;

	void (CALLBACK * disp__glLineStipple )(GLint, GLushort) = NULL;

	void (CALLBACK * disp__glPolygonMode )(GLenum, GLenum) = NULL;

	void (CALLBACK * disp__glPolygonOffset )(GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glPolygonStipple )(const GLubyte *) = NULL;

	void (CALLBACK * disp__glGetPolygonStipple )(GLubyte *) = NULL;

	void (CALLBACK * disp__glEdgeFlag )(GLboolean) = NULL;

	void (CALLBACK * disp__glEdgeFlagv )(const GLboolean *) = NULL;

	void (CALLBACK * disp__glScissor )(GLint, GLint, GLsizei, GLsizei) = NULL;

	void (CALLBACK * disp__glClipPlane )(GLenum, const GLdouble *) = NULL;

	void (CALLBACK * disp__glGetClipPlane )(GLenum, GLdouble *) = NULL;

	void (CALLBACK * disp__glDrawBuffer )(GLenum) = NULL;

	void (CALLBACK * disp__glReadBuffer )(GLenum) = NULL;

	void (CALLBACK * disp__glEnable )(GLenum) = NULL;

	void (CALLBACK * disp__glDisable )(GLenum) = NULL;

	GLboolean (CALLBACK * disp__glIsEnabled )(GLenum) = NULL;

	void (CALLBACK * disp__glEnableClientState )(GLenum) = NULL;

	void (CALLBACK * disp__glDisableClientState )(GLenum) = NULL;

	void (CALLBACK * disp__glGetBooleanv )(GLenum, GLboolean *) = NULL;

	void (CALLBACK * disp__glGetDoublev )(GLenum, GLdouble *) = NULL;

	void (CALLBACK * disp__glGetFloatv )(GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetIntegerv )(GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glPushAttrib )(GLbitfield) = NULL;

	void (CALLBACK * disp__glPopAttrib )(void) = NULL;

	void (CALLBACK * disp__glPushClientAttrib )(GLbitfield) = NULL;

	void (CALLBACK * disp__glPopClientAttrib )(void) = NULL;

	GLint (CALLBACK * disp__glRenderMode )(GLenum) = NULL;

	GLenum (CALLBACK * disp__glGetError )(void) = NULL;

	void (CALLBACK * disp__glFinish )(void) = NULL;

	void (CALLBACK * disp__glFlush )(void) = NULL;

	void (CALLBACK * disp__glHint )(GLenum, GLenum) = NULL;

	void (CALLBACK * disp__glClearDepth )(GLclampd) = NULL;

	void (CALLBACK * disp__glDepthFunc )(GLenum) = NULL;

	void (CALLBACK * disp__glDepthMask )(GLboolean) = NULL;

	void (CALLBACK * disp__glDepthRange )(GLclampd, GLclampd) = NULL;

	void (CALLBACK * disp__glClearAccum )(GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glAccum )(GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glMatrixMode )(GLenum) = NULL;

	void (CALLBACK * disp__glOrtho )(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glFrustum )(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glViewport )(GLint, GLint, GLsizei, GLsizei) = NULL;

	void (CALLBACK * disp__glPushMatrix )(void) = NULL;

	void (CALLBACK * disp__glPopMatrix )(void) = NULL;

	void (CALLBACK * disp__glLoadIdentity )(void) = NULL;

	void (CALLBACK * disp__glLoadMatrixd )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glLoadMatrixf )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glMultMatrixd )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glMultMatrixf )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glRotated )(GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glRotatef )(GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glScaled )(GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glScalef )(GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glTranslated )(GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glTranslatef )(GLfloat, GLfloat, GLfloat) = NULL;

	GLboolean (CALLBACK * disp__glIsList )(GLuint) = NULL;

	void (CALLBACK * disp__glDeleteLists )(GLuint, GLsizei) = NULL;

	GLuint (CALLBACK * disp__glGenLists )(GLsizei) = NULL;

	void (CALLBACK * disp__glNewList )(GLuint, GLenum) = NULL;

	void (CALLBACK * disp__glEndList )(void) = NULL;

	void (CALLBACK * disp__glCallList )(GLuint) = NULL;

	void (CALLBACK * disp__glCallLists )(GLsizei, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glListBase )(GLuint) = NULL;

	void (CALLBACK * disp__glBegin )(GLenum) = NULL;

	void (CALLBACK * disp__glEnd )(void) = NULL;

	void (CALLBACK * disp__glVertex2d )(GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glVertex2f )(GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glVertex2i )(GLint, GLint) = NULL;

	void (CALLBACK * disp__glVertex2s )(GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glVertex3d )(GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glVertex3f )(GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glVertex3i )(GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glVertex3s )(GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glVertex4d )(GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glVertex4f )(GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glVertex4i )(GLint, GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glVertex4s )(GLshort, GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glVertex2dv )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glVertex2fv )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glVertex2iv )(const GLint *) = NULL;

	void (CALLBACK * disp__glVertex2sv )(const GLshort *) = NULL;

	void (CALLBACK * disp__glVertex3dv )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glVertex3fv )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glVertex3iv )(const GLint *) = NULL;

	void (CALLBACK * disp__glVertex3sv )(const GLshort *) = NULL;

	void (CALLBACK * disp__glVertex4dv )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glVertex4fv )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glVertex4iv )(const GLint *) = NULL;

	void (CALLBACK * disp__glVertex4sv )(const GLshort *) = NULL;

	void (CALLBACK * disp__glNormal3b )(GLbyte, GLbyte, GLbyte) = NULL;

	void (CALLBACK * disp__glNormal3d )(GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glNormal3f )(GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glNormal3i )(GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glNormal3s )(GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glNormal3bv )(const GLbyte *) = NULL;

	void (CALLBACK * disp__glNormal3dv )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glNormal3fv )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glNormal3iv )(const GLint *) = NULL;

	void (CALLBACK * disp__glNormal3sv )(const GLshort *) = NULL;

	void (CALLBACK * disp__glIndexd )(GLdouble) = NULL;

	void (CALLBACK * disp__glIndexf )(GLfloat) = NULL;

	void (CALLBACK * disp__glIndexi )(GLint) = NULL;

	void (CALLBACK * disp__glIndexs )(GLshort) = NULL;

	void (CALLBACK * disp__glIndexub )(GLubyte) = NULL;

	void (CALLBACK * disp__glIndexdv )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glIndexfv )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glIndexiv )(const GLint *) = NULL;

	void (CALLBACK * disp__glIndexsv )(const GLshort *) = NULL;

	void (CALLBACK * disp__glIndexubv )(const GLubyte *) = NULL;

	void (CALLBACK * disp__glColor3b )(GLbyte, GLbyte, GLbyte) = NULL;

	void (CALLBACK * disp__glColor3d )(GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glColor3f )(GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glColor3i )(GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glColor3s )(GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glColor3ub )(GLubyte, GLubyte, GLubyte) = NULL;

	void (CALLBACK * disp__glColor3ui )(GLuint, GLuint, GLuint) = NULL;

	void (CALLBACK * disp__glColor3us )(GLushort, GLushort, GLushort) = NULL;

	void (CALLBACK * disp__glColor4b )(GLbyte, GLbyte, GLbyte, GLbyte) = NULL;

	void (CALLBACK * disp__glColor4d )(GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glColor4f )(GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glColor4i )(GLint, GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glColor4s )(GLshort, GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glColor4ub )(GLubyte, GLubyte, GLubyte, GLubyte) = NULL;

	void (CALLBACK * disp__glColor4ui )(GLuint, GLuint, GLuint, GLuint) = NULL;

	void (CALLBACK * disp__glColor4us )(GLushort, GLushort, GLushort, GLushort) = NULL;

	void (CALLBACK * disp__glColor3bv )(const GLbyte *) = NULL;

	void (CALLBACK * disp__glColor3dv )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glColor3fv )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glColor3iv )(const GLint *) = NULL;

	void (CALLBACK * disp__glColor3sv )(const GLshort *) = NULL;

	void (CALLBACK * disp__glColor3ubv )(const GLubyte *) = NULL;

	void (CALLBACK * disp__glColor3uiv )(const GLuint *) = NULL;

	void (CALLBACK * disp__glColor3usv )(const GLushort *) = NULL;

	void (CALLBACK * disp__glColor4bv )(const GLbyte *) = NULL;

	void (CALLBACK * disp__glColor4dv )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glColor4fv )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glColor4iv )(const GLint *) = NULL;

	void (CALLBACK * disp__glColor4sv )(const GLshort *) = NULL;

	void (CALLBACK * disp__glColor4ubv )(const GLubyte *) = NULL;

	void (CALLBACK * disp__glColor4uiv )(const GLuint *) = NULL;

	void (CALLBACK * disp__glColor4usv )(const GLushort *) = NULL;

	void (CALLBACK * disp__glTexCoord1d )(GLdouble) = NULL;

	void (CALLBACK * disp__glTexCoord1f )(GLfloat) = NULL;

	void (CALLBACK * disp__glTexCoord1i )(GLint) = NULL;

	void (CALLBACK * disp__glTexCoord1s )(GLshort) = NULL;

	void (CALLBACK * disp__glTexCoord2d )(GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glTexCoord2f )(GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glTexCoord2i )(GLint, GLint) = NULL;

	void (CALLBACK * disp__glTexCoord2s )(GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glTexCoord3d )(GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glTexCoord3f )(GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glTexCoord3i )(GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glTexCoord3s )(GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glTexCoord4d )(GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glTexCoord4f )(GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glTexCoord4i )(GLint, GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glTexCoord4s )(GLshort, GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glTexCoord1dv )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glTexCoord1fv )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glTexCoord1iv )(const GLint *) = NULL;

	void (CALLBACK * disp__glTexCoord1sv )(const GLshort *) = NULL;

	void (CALLBACK * disp__glTexCoord2dv )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glTexCoord2fv )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glTexCoord2iv )(const GLint *) = NULL;

	void (CALLBACK * disp__glTexCoord2sv )(const GLshort *) = NULL;

	void (CALLBACK * disp__glTexCoord3dv )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glTexCoord3fv )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glTexCoord3iv )(const GLint *) = NULL;

	void (CALLBACK * disp__glTexCoord3sv )(const GLshort *) = NULL;

	void (CALLBACK * disp__glTexCoord4dv )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glTexCoord4fv )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glTexCoord4iv )(const GLint *) = NULL;

	void (CALLBACK * disp__glTexCoord4sv )(const GLshort *) = NULL;

	void (CALLBACK * disp__glRasterPos2d )(GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glRasterPos2f )(GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glRasterPos2i )(GLint, GLint) = NULL;

	void (CALLBACK * disp__glRasterPos2s )(GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glRasterPos3d )(GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glRasterPos3f )(GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glRasterPos3i )(GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glRasterPos3s )(GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glRasterPos4d )(GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glRasterPos4f )(GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glRasterPos4i )(GLint, GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glRasterPos4s )(GLshort, GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glRasterPos2dv )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glRasterPos2fv )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glRasterPos2iv )(const GLint *) = NULL;

	void (CALLBACK * disp__glRasterPos2sv )(const GLshort *) = NULL;

	void (CALLBACK * disp__glRasterPos3dv )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glRasterPos3fv )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glRasterPos3iv )(const GLint *) = NULL;

	void (CALLBACK * disp__glRasterPos3sv )(const GLshort *) = NULL;

	void (CALLBACK * disp__glRasterPos4dv )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glRasterPos4fv )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glRasterPos4iv )(const GLint *) = NULL;

	void (CALLBACK * disp__glRasterPos4sv )(const GLshort *) = NULL;

	void (CALLBACK * disp__glRectd )(GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glRectf )(GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glRecti )(GLint, GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glRects )(GLshort, GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glRectdv )(const GLdouble *, const GLdouble *) = NULL;

	void (CALLBACK * disp__glRectfv )(const GLfloat *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glRectiv )(const GLint *, const GLint *) = NULL;

	void (CALLBACK * disp__glRectsv )(const GLshort *, const GLshort *) = NULL;

	void (CALLBACK * disp__glVertexPointer )(GLint, GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glNormalPointer )(GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glColorPointer )(GLint, GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glIndexPointer )(GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glTexCoordPointer )(GLint, GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glEdgeFlagPointer )(GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glGetPointerv )(GLenum, void **) = NULL;

	void (CALLBACK * disp__glArrayElement )(GLint) = NULL;

	void (CALLBACK * disp__glDrawArrays )(GLenum, GLint, GLsizei) = NULL;

	void (CALLBACK * disp__glDrawElements )(GLenum, GLsizei, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glInterleavedArrays )(GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glShadeModel )(GLenum) = NULL;

	void (CALLBACK * disp__glLightf )(GLenum, GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glLighti )(GLenum, GLenum, GLint) = NULL;

	void (CALLBACK * disp__glLightfv )(GLenum, GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glLightiv )(GLenum, GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glGetLightfv )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetLightiv )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glLightModelf )(GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glLightModeli )(GLenum, GLint) = NULL;

	void (CALLBACK * disp__glLightModelfv )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glLightModeliv )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glMaterialf )(GLenum, GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glMateriali )(GLenum, GLenum, GLint) = NULL;

	void (CALLBACK * disp__glMaterialfv )(GLenum, GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glMaterialiv )(GLenum, GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glGetMaterialfv )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetMaterialiv )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glColorMaterial )(GLenum, GLenum) = NULL;

	void (CALLBACK * disp__glPixelZoom )(GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glPixelStoref )(GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glPixelStorei )(GLenum, GLint) = NULL;

	void (CALLBACK * disp__glPixelTransferf )(GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glPixelTransferi )(GLenum, GLint) = NULL;

	void (CALLBACK * disp__glPixelMapfv )(GLenum, GLint, const GLfloat *) = NULL;

	void (CALLBACK * disp__glPixelMapuiv )(GLenum, GLint, const GLuint *) = NULL;

	void (CALLBACK * disp__glPixelMapusv )(GLenum, GLint, const GLushort *) = NULL;

	void (CALLBACK * disp__glGetPixelMapfv )(GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetPixelMapuiv )(GLenum, GLuint *) = NULL;

	void (CALLBACK * disp__glGetPixelMapusv )(GLenum, GLushort *) = NULL;

	void (CALLBACK * disp__glBitmap )(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *) = NULL;

	void (CALLBACK * disp__glReadPixels )(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *) = NULL;

	void (CALLBACK * disp__glDrawPixels )(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glCopyPixels )(GLint, GLint, GLsizei, GLsizei, GLenum) = NULL;

	void (CALLBACK * disp__glStencilFunc )(GLenum, GLint, GLuint) = NULL;

	void (CALLBACK * disp__glStencilMask )(GLuint) = NULL;

	void (CALLBACK * disp__glStencilOp )(GLenum, GLenum, GLenum) = NULL;

	void (CALLBACK * disp__glClearStencil )(GLint) = NULL;

	void (CALLBACK * disp__glTexGend )(GLenum, GLenum, GLdouble) = NULL;

	void (CALLBACK * disp__glTexGenf )(GLenum, GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glTexGeni )(GLenum, GLenum, GLint) = NULL;

	void (CALLBACK * disp__glTexGendv )(GLenum, GLenum, const GLdouble *) = NULL;

	void (CALLBACK * disp__glTexGenfv )(GLenum, GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glTexGeniv )(GLenum, GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glGetTexGendv )(GLenum, GLenum, GLdouble *) = NULL;

	void (CALLBACK * disp__glGetTexGenfv )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetTexGeniv )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glTexEnvf )(GLenum, GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glTexEnvi )(GLenum, GLenum, GLint) = NULL;

	void (CALLBACK * disp__glTexEnvfv )(GLenum, GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glTexEnviv )(GLenum, GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glGetTexEnvfv )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetTexEnviv )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glTexParameterf )(GLenum, GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glTexParameteri )(GLenum, GLenum, GLint) = NULL;

	void (CALLBACK * disp__glTexParameterfv )(GLenum, GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glTexParameteriv )(GLenum, GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glGetTexParameterfv )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetTexParameteriv )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetTexLevelParameterfv )(GLenum, GLint, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetTexLevelParameteriv )(GLenum, GLint, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glTexImage1D )(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glTexImage2D )(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glGetTexImage )(GLenum, GLint, GLenum, GLenum, GLvoid *) = NULL;

	void (CALLBACK * disp__glGenTextures )(GLsizei, GLuint *) = NULL;

	void (CALLBACK * disp__glDeleteTextures )(GLsizei, const GLuint *) = NULL;

	void (CALLBACK * disp__glBindTexture )(GLenum, GLuint) = NULL;

	void (CALLBACK * disp__glPrioritizeTextures )(GLsizei, const GLuint *, const GLclampf *) = NULL;

	GLboolean (CALLBACK * disp__glAreTexturesResident )(GLsizei, const GLuint *, GLboolean *) = NULL;

	GLboolean (CALLBACK * disp__glIsTexture )(GLuint) = NULL;

	void (CALLBACK * disp__glTexSubImage1D )(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glTexSubImage2D )(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glCopyTexImage1D )(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint) = NULL;

	void (CALLBACK * disp__glCopyTexImage2D )(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) = NULL;

	void (CALLBACK * disp__glCopyTexSubImage1D )(GLenum, GLint, GLint, GLint, GLint, GLsizei) = NULL;

	void (CALLBACK * disp__glCopyTexSubImage2D )(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = NULL;

	void (CALLBACK * disp__glMap1d )(GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *) = NULL;

	void (CALLBACK * disp__glMap1f )(GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *) = NULL;

	void (CALLBACK * disp__glMap2d )(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *) = NULL;

	void (CALLBACK * disp__glMap2f )(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *) = NULL;

	void (CALLBACK * disp__glGetMapdv )(GLenum, GLenum, GLdouble *) = NULL;

	void (CALLBACK * disp__glGetMapfv )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetMapiv )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glEvalCoord1d )(GLdouble) = NULL;

	void (CALLBACK * disp__glEvalCoord1f )(GLfloat) = NULL;

	void (CALLBACK * disp__glEvalCoord1dv )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glEvalCoord1fv )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glEvalCoord2d )(GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glEvalCoord2f )(GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glEvalCoord2dv )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glEvalCoord2fv )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glMapGrid1d )(GLint, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glMapGrid1f )(GLint, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glMapGrid2d )(GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glMapGrid2f )(GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glEvalPoint1 )(GLint) = NULL;

	void (CALLBACK * disp__glEvalPoint2 )(GLint, GLint) = NULL;

	void (CALLBACK * disp__glEvalMesh1 )(GLenum, GLint, GLint) = NULL;

	void (CALLBACK * disp__glEvalMesh2 )(GLenum, GLint, GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glFogf )(GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glFogi )(GLenum, GLint) = NULL;

	void (CALLBACK * disp__glFogfv )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glFogiv )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glFeedbackBuffer )(GLsizei, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glPassThrough )(GLfloat) = NULL;

	void (CALLBACK * disp__glSelectBuffer )(GLsizei, GLuint *) = NULL;

	void (CALLBACK * disp__glInitNames )(void) = NULL;

	void (CALLBACK * disp__glLoadName )(GLuint) = NULL;

	void (CALLBACK * disp__glPushName )(GLuint) = NULL;

	void (CALLBACK * disp__glPopName )(void) = NULL;

	void (CALLBACK * disp__glDrawRangeElements )(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glTexImage3D )(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glTexSubImage3D )(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glCopyTexSubImage3D )(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = NULL;

	void (CALLBACK * disp__glColorTable )(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glColorSubTable )(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glColorTableParameteriv )(GLenum, GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glColorTableParameterfv )(GLenum, GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glCopyColorSubTable )(GLenum, GLsizei, GLint, GLint, GLsizei) = NULL;

	void (CALLBACK * disp__glCopyColorTable )(GLenum, GLenum, GLint, GLint, GLsizei) = NULL;

	void (CALLBACK * disp__glGetColorTable )(GLenum, GLenum, GLenum, GLvoid *) = NULL;

	void (CALLBACK * disp__glGetColorTableParameterfv )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetColorTableParameteriv )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glBlendEquation )(GLenum) = NULL;

	void (CALLBACK * disp__glBlendColor )(GLclampf, GLclampf, GLclampf, GLclampf) = NULL;

	void (CALLBACK * disp__glHistogram )(GLenum, GLsizei, GLenum, GLboolean) = NULL;

	void (CALLBACK * disp__glResetHistogram )(GLenum) = NULL;

	void (CALLBACK * disp__glGetHistogram )(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;

	void (CALLBACK * disp__glGetHistogramParameterfv )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetHistogramParameteriv )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glMinmax )(GLenum, GLenum, GLboolean) = NULL;

	void (CALLBACK * disp__glResetMinmax )(GLenum) = NULL;

	void (CALLBACK * disp__glGetMinmax )(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;

	void (CALLBACK * disp__glGetMinmaxParameterfv )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetMinmaxParameteriv )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glConvolutionFilter1D )(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glConvolutionFilter2D )(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glConvolutionParameterf )(GLenum, GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glConvolutionParameterfv )(GLenum, GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glConvolutionParameteri )(GLenum, GLenum, GLint) = NULL;

	void (CALLBACK * disp__glConvolutionParameteriv )(GLenum, GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glCopyConvolutionFilter1D )(GLenum, GLenum, GLint, GLint, GLsizei) = NULL;

	void (CALLBACK * disp__glCopyConvolutionFilter2D )(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei) = NULL;

	void (CALLBACK * disp__glGetConvolutionFilter )(GLenum, GLenum, GLenum, GLvoid *) = NULL;

	void (CALLBACK * disp__glGetConvolutionParameterfv )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetConvolutionParameteriv )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glSeparableFilter2D )(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *) = NULL;

	void (CALLBACK * disp__glGetSeparableFilter )(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *) = NULL;

	void (CALLBACK * disp__glBlendColorEXT )(GLclampf, GLclampf, GLclampf, GLclampf) = NULL;

	void (CALLBACK * disp__glPolygonOffsetEXT )(GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glTexImage3DEXT )(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glTexSubImage3DEXT )(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glCopyTexSubImage3DEXT )(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = NULL;

	void (CALLBACK * disp__glGenTexturesEXT )(GLsizei, GLuint *) = NULL;

	void (CALLBACK * disp__glDeleteTexturesEXT )(GLsizei, const GLuint *) = NULL;

	void (CALLBACK * disp__glBindTextureEXT )(GLenum, GLuint) = NULL;

	void (CALLBACK * disp__glPrioritizeTexturesEXT )(GLsizei, const GLuint *, const GLclampf *) = NULL;

	GLboolean (CALLBACK * disp__glAreTexturesResidentEXT )(GLsizei, const GLuint *, GLboolean *) = NULL;

	GLboolean (CALLBACK * disp__glIsTextureEXT )(GLuint) = NULL;

	void (CALLBACK * disp__glVertexPointerEXT )(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glNormalPointerEXT )(GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glColorPointerEXT )(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glIndexPointerEXT )(GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glTexCoordPointerEXT )(GLint, GLenum, GLsizei, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glEdgeFlagPointerEXT )(GLsizei, GLsizei, const GLboolean *) = NULL;

	void (CALLBACK * disp__glGetPointervEXT )(GLenum, void **) = NULL;

	void (CALLBACK * disp__glArrayElementEXT )(GLint) = NULL;

	void (CALLBACK * disp__glDrawArraysEXT )(GLenum, GLint, GLsizei) = NULL;

	void (CALLBACK * disp__glBlendEquationEXT )(GLenum) = NULL;

	void (CALLBACK * disp__glPointParameterfEXT )(GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glPointParameterfvEXT )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glColorTableEXT )(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glColorSubTableEXT )(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glGetColorTableEXT )(GLenum, GLenum, GLenum, GLvoid *) = NULL;

	void (CALLBACK * disp__glGetColorTableParameterfvEXT )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetColorTableParameterivEXT )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glLockArraysEXT )(GLint, GLsizei) = NULL;

	void (CALLBACK * disp__glUnlockArraysEXT )(void) = NULL;

	void (CALLBACK * disp__glActiveTextureARB )(GLenum) = NULL;

	void (CALLBACK * disp__glClientActiveTextureARB )(GLenum) = NULL;

	void (CALLBACK * disp__glMultiTexCoord1dARB )(GLenum, GLdouble) = NULL;

	void (CALLBACK * disp__glMultiTexCoord1dvARB )(GLenum, const GLdouble *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord1fARB )(GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glMultiTexCoord1fvARB )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord1iARB )(GLenum, GLint) = NULL;

	void (CALLBACK * disp__glMultiTexCoord1ivARB )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord1sARB )(GLenum, GLshort) = NULL;

	void (CALLBACK * disp__glMultiTexCoord1svARB )(GLenum, const GLshort *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord2dARB )(GLenum, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glMultiTexCoord2dvARB )(GLenum, const GLdouble *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord2fARB )(GLenum, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glMultiTexCoord2fvARB )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord2iARB )(GLenum, GLint, GLint) = NULL;

	void (CALLBACK * disp__glMultiTexCoord2ivARB )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord2sARB )(GLenum, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glMultiTexCoord2svARB )(GLenum, const GLshort *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord3dARB )(GLenum, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glMultiTexCoord3dvARB )(GLenum, const GLdouble *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord3fARB )(GLenum, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glMultiTexCoord3fvARB )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord3iARB )(GLenum, GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glMultiTexCoord3ivARB )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord3sARB )(GLenum, GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glMultiTexCoord3svARB )(GLenum, const GLshort *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord4dARB )(GLenum, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glMultiTexCoord4dvARB )(GLenum, const GLdouble *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord4fARB )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glMultiTexCoord4fvARB )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord4iARB )(GLenum, GLint, GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glMultiTexCoord4ivARB )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord4sARB )(GLenum, GLshort, GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glMultiTexCoord4svARB )(GLenum, const GLshort *) = NULL;

/* C2J Parser Version 2.2:  Java program parsed successfully. */ 
