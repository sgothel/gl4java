/**
 * C2J Parser Version 3.0
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

	void (CALLBACK * disp__glGetPointerv )(GLenum, GLvoid **) = NULL;

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

	void (CALLBACK * disp__glTexImage3D )(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;

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

	void (CALLBACK * disp__glActiveTexture )(GLenum) = NULL;

	void (CALLBACK * disp__glClientActiveTexture )(GLenum) = NULL;

	void (CALLBACK * disp__glCompressedTexImage1D )(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glCompressedTexImage2D )(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glCompressedTexImage3D )(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glCompressedTexSubImage1D )(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glCompressedTexSubImage2D )(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glCompressedTexSubImage3D )(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glGetCompressedTexImage )(GLenum, GLint, GLvoid *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord1d )(GLenum, GLdouble) = NULL;

	void (CALLBACK * disp__glMultiTexCoord1dv )(GLenum, const GLdouble *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord1f )(GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glMultiTexCoord1fv )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord1i )(GLenum, GLint) = NULL;

	void (CALLBACK * disp__glMultiTexCoord1iv )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord1s )(GLenum, GLshort) = NULL;

	void (CALLBACK * disp__glMultiTexCoord1sv )(GLenum, const GLshort *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord2d )(GLenum, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glMultiTexCoord2dv )(GLenum, const GLdouble *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord2f )(GLenum, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glMultiTexCoord2fv )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord2i )(GLenum, GLint, GLint) = NULL;

	void (CALLBACK * disp__glMultiTexCoord2iv )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord2s )(GLenum, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glMultiTexCoord2sv )(GLenum, const GLshort *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord3d )(GLenum, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glMultiTexCoord3dv )(GLenum, const GLdouble *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord3f )(GLenum, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glMultiTexCoord3fv )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord3i )(GLenum, GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glMultiTexCoord3iv )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord3s )(GLenum, GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glMultiTexCoord3sv )(GLenum, const GLshort *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord4d )(GLenum, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glMultiTexCoord4dv )(GLenum, const GLdouble *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord4f )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glMultiTexCoord4fv )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord4i )(GLenum, GLint, GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glMultiTexCoord4iv )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glMultiTexCoord4s )(GLenum, GLshort, GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glMultiTexCoord4sv )(GLenum, const GLshort *) = NULL;

	void (CALLBACK * disp__glLoadTransposeMatrixd )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glLoadTransposeMatrixf )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glMultTransposeMatrixd )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glMultTransposeMatrixf )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glSampleCoverage )(GLclampf, GLboolean) = NULL;

	void (CALLBACK * disp__glSamplePass )(GLenum) = NULL;

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

	void (CALLBACK * disp__glGetPointervEXT )(GLenum, GLvoid **) = NULL;

	void (CALLBACK * disp__glArrayElementEXT )(GLint) = NULL;

	void (CALLBACK * disp__glDrawArraysEXT )(GLenum, GLint, GLsizei) = NULL;

	void (CALLBACK * disp__glBlendEquationEXT )(GLenum) = NULL;

	void (CALLBACK * disp__glPointParameterfEXT )(GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glPointParameterfvEXT )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glPointParameterfSGIS )(GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glPointParameterfvSGIS )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glColorTableEXT )(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glColorSubTableEXT )(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glGetColorTableEXT )(GLenum, GLenum, GLenum, GLvoid *) = NULL;

	void (CALLBACK * disp__glGetColorTableParameterfvEXT )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetColorTableParameterivEXT )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glLockArraysEXT )(GLint, GLsizei) = NULL;

	void (CALLBACK * disp__glUnlockArraysEXT )(void) = NULL;

	void (CALLBACK * disp__glLoadTransposeMatrixfARB )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glLoadTransposeMatrixdARB )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glMultTransposeMatrixfARB )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glMultTransposeMatrixdARB )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glSampleCoverageARB )(GLclampf, GLboolean) = NULL;

	void (CALLBACK * disp__glCompressedTexImage3DARB )(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glCompressedTexImage2DARB )(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glCompressedTexImage1DARB )(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glCompressedTexSubImage3DARB )(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glCompressedTexSubImage2DARB )(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glCompressedTexSubImage1DARB )(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glGetCompressedTexImageARB )(GLenum, GLint, void *) = NULL;

	void (CALLBACK * disp__glWeightbvARB )(GLint, const GLbyte *) = NULL;

	void (CALLBACK * disp__glWeightsvARB )(GLint, const GLshort *) = NULL;

	void (CALLBACK * disp__glWeightivARB )(GLint, const GLint *) = NULL;

	void (CALLBACK * disp__glWeightfvARB )(GLint, const GLfloat *) = NULL;

	void (CALLBACK * disp__glWeightdvARB )(GLint, const GLdouble *) = NULL;

	void (CALLBACK * disp__glWeightubvARB )(GLint, const GLubyte *) = NULL;

	void (CALLBACK * disp__glWeightusvARB )(GLint, const GLushort *) = NULL;

	void (CALLBACK * disp__glWeightuivARB )(GLint, const GLuint *) = NULL;

	void (CALLBACK * disp__glWeightPointerARB )(GLint, GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glVertexBlendARB )(GLint) = NULL;

	void (CALLBACK * disp__glCurrentPaletteMatrixARB )(GLint) = NULL;

	void (CALLBACK * disp__glMatrixIndexubvARB )(GLint, const GLubyte *) = NULL;

	void (CALLBACK * disp__glMatrixIndexusvARB )(GLint, const GLushort *) = NULL;

	void (CALLBACK * disp__glMatrixIndexuivARB )(GLint, const GLuint *) = NULL;

	void (CALLBACK * disp__glMatrixIndexPointerARB )(GLint, GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glGetTexFilterFuncSGIS )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glTexFilterFuncSGIS )(GLenum, GLenum, GLsizei, const GLfloat *) = NULL;

	void (CALLBACK * disp__glTexSubImage1DEXT )(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glTexSubImage2DEXT )(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glCopyTexImage1DEXT )(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint) = NULL;

	void (CALLBACK * disp__glCopyTexImage2DEXT )(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) = NULL;

	void (CALLBACK * disp__glCopyTexSubImage1DEXT )(GLenum, GLint, GLint, GLint, GLint, GLsizei) = NULL;

	void (CALLBACK * disp__glCopyTexSubImage2DEXT )(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) = NULL;

	void (CALLBACK * disp__glGetHistogramEXT )(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;

	void (CALLBACK * disp__glGetHistogramParameterfvEXT )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetHistogramParameterivEXT )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetMinmaxEXT )(GLenum, GLboolean, GLenum, GLenum, GLvoid *) = NULL;

	void (CALLBACK * disp__glGetMinmaxParameterfvEXT )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetMinmaxParameterivEXT )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glHistogramEXT )(GLenum, GLsizei, GLenum, GLboolean) = NULL;

	void (CALLBACK * disp__glMinmaxEXT )(GLenum, GLenum, GLboolean) = NULL;

	void (CALLBACK * disp__glResetHistogramEXT )(GLenum) = NULL;

	void (CALLBACK * disp__glResetMinmaxEXT )(GLenum) = NULL;

	void (CALLBACK * disp__glConvolutionFilter1DEXT )(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glConvolutionFilter2DEXT )(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glConvolutionParameterfEXT )(GLenum, GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glConvolutionParameterfvEXT )(GLenum, GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glConvolutionParameteriEXT )(GLenum, GLenum, GLint) = NULL;

	void (CALLBACK * disp__glConvolutionParameterivEXT )(GLenum, GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glCopyConvolutionFilter1DEXT )(GLenum, GLenum, GLint, GLint, GLsizei) = NULL;

	void (CALLBACK * disp__glCopyConvolutionFilter2DEXT )(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei) = NULL;

	void (CALLBACK * disp__glGetConvolutionFilterEXT )(GLenum, GLenum, GLenum, GLvoid *) = NULL;

	void (CALLBACK * disp__glGetConvolutionParameterfvEXT )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetConvolutionParameterivEXT )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetSeparableFilterEXT )(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *) = NULL;

	void (CALLBACK * disp__glSeparableFilter2DEXT )(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *) = NULL;

	void (CALLBACK * disp__glColorTableSGI )(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glColorTableParameterfvSGI )(GLenum, GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glColorTableParameterivSGI )(GLenum, GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glCopyColorTableSGI )(GLenum, GLenum, GLint, GLint, GLsizei) = NULL;

	void (CALLBACK * disp__glGetColorTableSGI )(GLenum, GLenum, GLenum, GLvoid *) = NULL;

	void (CALLBACK * disp__glGetColorTableParameterfvSGI )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetColorTableParameterivSGI )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glPixelTexGenSGIX )(GLenum) = NULL;

	void (CALLBACK * disp__glPixelTexGenParameteriSGIS )(GLenum, GLint) = NULL;

	void (CALLBACK * disp__glPixelTexGenParameterivSGIS )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glPixelTexGenParameterfSGIS )(GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glPixelTexGenParameterfvSGIS )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glGetPixelTexGenParameterivSGIS )(GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetPixelTexGenParameterfvSGIS )(GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glTexImage4DSGIS )(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glTexSubImage4DSGIS )(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glDetailTexFuncSGIS )(GLenum, GLsizei, const GLfloat *) = NULL;

	void (CALLBACK * disp__glGetDetailTexFuncSGIS )(GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glSharpenTexFuncSGIS )(GLenum, GLsizei, const GLfloat *) = NULL;

	void (CALLBACK * disp__glGetSharpenTexFuncSGIS )(GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glSampleMaskSGIS )(GLclampf, GLboolean) = NULL;

	void (CALLBACK * disp__glSamplePatternSGIS )(GLenum) = NULL;

	void (CALLBACK * disp__glSpriteParameterfSGIX )(GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glSpriteParameterfvSGIX )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glSpriteParameteriSGIX )(GLenum, GLint) = NULL;

	void (CALLBACK * disp__glSpriteParameterivSGIX )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glPointParameterfARB )(GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glPointParameterfvARB )(GLenum, const GLfloat *) = NULL;

	GLint (CALLBACK * disp__glGetInstrumentsSGIX )(void) = NULL;

	void (CALLBACK * disp__glInstrumentsBufferSGIX )(GLsizei, GLint *) = NULL;

	GLint (CALLBACK * disp__glPollInstrumentsSGIX )(GLint *) = NULL;

	void (CALLBACK * disp__glReadInstrumentsSGIX )(GLint) = NULL;

	void (CALLBACK * disp__glStartInstrumentsSGIX )(void) = NULL;

	void (CALLBACK * disp__glStopInstrumentsSGIX )(GLint) = NULL;

	void (CALLBACK * disp__glFrameZoomSGIX )(GLint) = NULL;

	void (CALLBACK * disp__glTagSampleBufferSGIX )(void) = NULL;

	void (CALLBACK * disp__glDeformationMap3dSGIX )(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *) = NULL;

	void (CALLBACK * disp__glDeformationMap3fSGIX )(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *) = NULL;

	void (CALLBACK * disp__glDeformSGIX )(GLbitfield) = NULL;

	void (CALLBACK * disp__glLoadIdentityDeformationMapSGIX )(GLbitfield) = NULL;

	void (CALLBACK * disp__glReferencePlaneSGIX )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glFlushRasterSGIX )(void) = NULL;

	void (CALLBACK * disp__glFogFuncSGIS )(GLsizei, const GLfloat *) = NULL;

	void (CALLBACK * disp__glGetFogFuncSGIS )(GLfloat *) = NULL;

	void (CALLBACK * disp__glImageTransformParameteriHP )(GLenum, GLenum, GLint) = NULL;

	void (CALLBACK * disp__glImageTransformParameterfHP )(GLenum, GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glImageTransformParameterivHP )(GLenum, GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glImageTransformParameterfvHP )(GLenum, GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glGetImageTransformParameterivHP )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetImageTransformParameterfvHP )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glCopyColorSubTableEXT )(GLenum, GLsizei, GLint, GLint, GLsizei) = NULL;

	void (CALLBACK * disp__glHintPGI )(GLenum, GLint) = NULL;

	void (CALLBACK * disp__glGetListParameterfvSGIX )(GLuint, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetListParameterivSGIX )(GLuint, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glListParameterfSGIX )(GLuint, GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glListParameterfvSGIX )(GLuint, GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glListParameteriSGIX )(GLuint, GLenum, GLint) = NULL;

	void (CALLBACK * disp__glListParameterivSGIX )(GLuint, GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glIndexMaterialEXT )(GLenum, GLenum) = NULL;

	void (CALLBACK * disp__glIndexFuncEXT )(GLenum, GLclampf) = NULL;

	void (CALLBACK * disp__glCullParameterdvEXT )(GLenum, GLdouble *) = NULL;

	void (CALLBACK * disp__glCullParameterfvEXT )(GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glFragmentColorMaterialSGIX )(GLenum, GLenum) = NULL;

	void (CALLBACK * disp__glFragmentLightfSGIX )(GLenum, GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glFragmentLightfvSGIX )(GLenum, GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glFragmentLightiSGIX )(GLenum, GLenum, GLint) = NULL;

	void (CALLBACK * disp__glFragmentLightivSGIX )(GLenum, GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glFragmentLightModelfSGIX )(GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glFragmentLightModelfvSGIX )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glFragmentLightModeliSGIX )(GLenum, GLint) = NULL;

	void (CALLBACK * disp__glFragmentLightModelivSGIX )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glFragmentMaterialfSGIX )(GLenum, GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glFragmentMaterialfvSGIX )(GLenum, GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glFragmentMaterialiSGIX )(GLenum, GLenum, GLint) = NULL;

	void (CALLBACK * disp__glFragmentMaterialivSGIX )(GLenum, GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glGetFragmentLightfvSGIX )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetFragmentLightivSGIX )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetFragmentMaterialfvSGIX )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetFragmentMaterialivSGIX )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glLightEnviSGIX )(GLenum, GLint) = NULL;

	void (CALLBACK * disp__glDrawRangeElementsEXT )(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glApplyTextureEXT )(GLenum) = NULL;

	void (CALLBACK * disp__glTextureLightEXT )(GLenum) = NULL;

	void (CALLBACK * disp__glTextureMaterialEXT )(GLenum, GLenum) = NULL;

	void (CALLBACK * disp__glAsyncMarkerSGIX )(GLuint) = NULL;

	GLint (CALLBACK * disp__glFinishAsyncSGIX )(GLuint *) = NULL;

	GLint (CALLBACK * disp__glPollAsyncSGIX )(GLuint *) = NULL;

	GLuint (CALLBACK * disp__glGenAsyncMarkersSGIX )(GLsizei) = NULL;

	void (CALLBACK * disp__glDeleteAsyncMarkersSGIX )(GLuint, GLsizei) = NULL;

	GLboolean (CALLBACK * disp__glIsAsyncMarkerSGIX )(GLuint) = NULL;

	void (CALLBACK * disp__glVertexPointervINTEL )(GLint, GLenum, const GLvoid **) = NULL;

	void (CALLBACK * disp__glNormalPointervINTEL )(GLenum, const GLvoid **) = NULL;

	void (CALLBACK * disp__glColorPointervINTEL )(GLint, GLenum, const GLvoid **) = NULL;

	void (CALLBACK * disp__glTexCoordPointervINTEL )(GLint, GLenum, const GLvoid **) = NULL;

	void (CALLBACK * disp__glPixelTransformParameteriEXT )(GLenum, GLenum, GLint) = NULL;

	void (CALLBACK * disp__glPixelTransformParameterfEXT )(GLenum, GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glPixelTransformParameterivEXT )(GLenum, GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glPixelTransformParameterfvEXT )(GLenum, GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glSecondaryColor3bEXT )(GLbyte, GLbyte, GLbyte) = NULL;

	void (CALLBACK * disp__glSecondaryColor3bvEXT )(const GLbyte *) = NULL;

	void (CALLBACK * disp__glSecondaryColor3dEXT )(GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glSecondaryColor3dvEXT )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glSecondaryColor3fEXT )(GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glSecondaryColor3fvEXT )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glSecondaryColor3iEXT )(GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glSecondaryColor3ivEXT )(const GLint *) = NULL;

	void (CALLBACK * disp__glSecondaryColor3sEXT )(GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glSecondaryColor3svEXT )(const GLshort *) = NULL;

	void (CALLBACK * disp__glSecondaryColor3ubEXT )(GLubyte, GLubyte, GLubyte) = NULL;

	void (CALLBACK * disp__glSecondaryColor3ubvEXT )(const GLubyte *) = NULL;

	void (CALLBACK * disp__glSecondaryColor3uiEXT )(GLuint, GLuint, GLuint) = NULL;

	void (CALLBACK * disp__glSecondaryColor3uivEXT )(const GLuint *) = NULL;

	void (CALLBACK * disp__glSecondaryColor3usEXT )(GLushort, GLushort, GLushort) = NULL;

	void (CALLBACK * disp__glSecondaryColor3usvEXT )(const GLushort *) = NULL;

	void (CALLBACK * disp__glSecondaryColorPointerEXT )(GLint, GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glTextureNormalEXT )(GLenum) = NULL;

	void (CALLBACK * disp__glMultiDrawArraysEXT )(GLenum, GLint *, GLsizei *, GLsizei) = NULL;

	void (CALLBACK * disp__glMultiDrawElementsEXT )(GLenum, const GLsizei *, GLenum, const GLvoid **, GLsizei) = NULL;

	void (CALLBACK * disp__glFogCoordfEXT )(GLfloat) = NULL;

	void (CALLBACK * disp__glFogCoordfvEXT )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glFogCoorddEXT )(GLdouble) = NULL;

	void (CALLBACK * disp__glFogCoorddvEXT )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glFogCoordPointerEXT )(GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glTangent3bEXT )(GLbyte, GLbyte, GLbyte) = NULL;

	void (CALLBACK * disp__glTangent3bvEXT )(const GLbyte *) = NULL;

	void (CALLBACK * disp__glTangent3dEXT )(GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glTangent3dvEXT )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glTangent3fEXT )(GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glTangent3fvEXT )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glTangent3iEXT )(GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glTangent3ivEXT )(const GLint *) = NULL;

	void (CALLBACK * disp__glTangent3sEXT )(GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glTangent3svEXT )(const GLshort *) = NULL;

	void (CALLBACK * disp__glBinormal3bEXT )(GLbyte, GLbyte, GLbyte) = NULL;

	void (CALLBACK * disp__glBinormal3bvEXT )(const GLbyte *) = NULL;

	void (CALLBACK * disp__glBinormal3dEXT )(GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glBinormal3dvEXT )(const GLdouble *) = NULL;

	void (CALLBACK * disp__glBinormal3fEXT )(GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glBinormal3fvEXT )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glBinormal3iEXT )(GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glBinormal3ivEXT )(const GLint *) = NULL;

	void (CALLBACK * disp__glBinormal3sEXT )(GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glBinormal3svEXT )(const GLshort *) = NULL;

	void (CALLBACK * disp__glTangentPointerEXT )(GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glBinormalPointerEXT )(GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glFinishTextureSUNX )(void) = NULL;

	void (CALLBACK * disp__glGlobalAlphaFactorbSUN )(GLbyte) = NULL;

	void (CALLBACK * disp__glGlobalAlphaFactorsSUN )(GLshort) = NULL;

	void (CALLBACK * disp__glGlobalAlphaFactoriSUN )(GLint) = NULL;

	void (CALLBACK * disp__glGlobalAlphaFactorfSUN )(GLfloat) = NULL;

	void (CALLBACK * disp__glGlobalAlphaFactordSUN )(GLdouble) = NULL;

	void (CALLBACK * disp__glGlobalAlphaFactorubSUN )(GLubyte) = NULL;

	void (CALLBACK * disp__glGlobalAlphaFactorusSUN )(GLushort) = NULL;

	void (CALLBACK * disp__glGlobalAlphaFactoruiSUN )(GLuint) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiSUN )(GLuint) = NULL;

	void (CALLBACK * disp__glReplacementCodeusSUN )(GLushort) = NULL;

	void (CALLBACK * disp__glReplacementCodeubSUN )(GLubyte) = NULL;

	void (CALLBACK * disp__glReplacementCodeuivSUN )(const GLuint *) = NULL;

	void (CALLBACK * disp__glReplacementCodeusvSUN )(const GLushort *) = NULL;

	void (CALLBACK * disp__glReplacementCodeubvSUN )(const GLubyte *) = NULL;

	void (CALLBACK * disp__glReplacementCodePointerSUN )(GLenum, GLsizei, const GLvoid **) = NULL;

	void (CALLBACK * disp__glColor4ubVertex2fSUN )(GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glColor4ubVertex2fvSUN )(const GLubyte *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glColor4ubVertex3fSUN )(GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glColor4ubVertex3fvSUN )(const GLubyte *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glColor3fVertex3fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glColor3fVertex3fvSUN )(const GLfloat *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glNormal3fVertex3fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glNormal3fVertex3fvSUN )(const GLfloat *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glColor4fNormal3fVertex3fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glColor4fNormal3fVertex3fvSUN )(const GLfloat *, const GLfloat *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glTexCoord2fVertex3fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glTexCoord2fVertex3fvSUN )(const GLfloat *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glTexCoord4fVertex4fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glTexCoord4fVertex4fvSUN )(const GLfloat *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glTexCoord2fColor4ubVertex3fSUN )(GLfloat, GLfloat, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glTexCoord2fColor4ubVertex3fvSUN )(const GLfloat *, const GLubyte *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glTexCoord2fColor3fVertex3fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glTexCoord2fColor3fVertex3fvSUN )(const GLfloat *, const GLfloat *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glTexCoord2fNormal3fVertex3fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glTexCoord2fNormal3fVertex3fvSUN )(const GLfloat *, const GLfloat *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glTexCoord2fColor4fNormal3fVertex3fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glTexCoord2fColor4fNormal3fVertex3fvSUN )(const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glTexCoord4fColor4fNormal3fVertex4fSUN )(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glTexCoord4fColor4fNormal3fVertex4fvSUN )(const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiVertex3fSUN )(GLenum, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiVertex3fvSUN )(const GLenum *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiColor4ubVertex3fSUN )(GLenum, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiColor4ubVertex3fvSUN )(const GLenum *, const GLubyte *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiColor3fVertex3fSUN )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiColor3fVertex3fvSUN )(const GLenum *, const GLfloat *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiNormal3fVertex3fSUN )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiNormal3fVertex3fvSUN )(const GLenum *, const GLfloat *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiColor4fNormal3fVertex3fSUN )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiColor4fNormal3fVertex3fvSUN )(const GLenum *, const GLfloat *, const GLfloat *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiTexCoord2fVertex3fSUN )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiTexCoord2fVertex3fvSUN )(const GLenum *, const GLfloat *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN )(const GLenum *, const GLfloat *, const GLfloat *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN )(const GLenum *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *) = NULL;

	void (CALLBACK * disp__glBlendFuncSeparateEXT )(GLenum, GLenum, GLenum, GLenum) = NULL;

	void (CALLBACK * disp__glBlendFuncSeparateINGR )(GLenum, GLenum, GLenum, GLenum) = NULL;

	void (CALLBACK * disp__glVertexWeightfEXT )(GLfloat) = NULL;

	void (CALLBACK * disp__glVertexWeightfvEXT )(const GLfloat *) = NULL;

	void (CALLBACK * disp__glVertexWeightPointerEXT )(GLsizei, GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glFlushVertexArrayRangeNV )(void) = NULL;

	void (CALLBACK * disp__glVertexArrayRangeNV )(GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glCombinerParameterfvNV )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glCombinerParameterfNV )(GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glCombinerParameterivNV )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glCombinerParameteriNV )(GLenum, GLint) = NULL;

	void (CALLBACK * disp__glCombinerInputNV )(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum) = NULL;

	void (CALLBACK * disp__glCombinerOutputNV )(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean) = NULL;

	void (CALLBACK * disp__glFinalCombinerInputNV )(GLenum, GLenum, GLenum, GLenum) = NULL;

	void (CALLBACK * disp__glGetCombinerInputParameterfvNV )(GLenum, GLenum, GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetCombinerInputParameterivNV )(GLenum, GLenum, GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetCombinerOutputParameterfvNV )(GLenum, GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetCombinerOutputParameterivNV )(GLenum, GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetFinalCombinerInputParameterfvNV )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetFinalCombinerInputParameterivNV )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glMultiModeDrawArraysIBM )(GLenum, const GLint *, const GLsizei *, GLsizei, GLint) = NULL;

	void (CALLBACK * disp__glMultiModeDrawElementsIBM )(const GLenum *, const GLsizei *, GLenum, const GLvoid **, GLsizei, GLint) = NULL;

	void (CALLBACK * disp__glColorPointerListIBM )(GLint, GLenum, GLint, const GLvoid **, GLint) = NULL;

	void (CALLBACK * disp__glSecondaryColorPointerListIBM )(GLint, GLenum, GLint, const GLvoid **, GLint) = NULL;

	void (CALLBACK * disp__glEdgeFlagPointerListIBM )(GLint, const GLboolean **, GLint) = NULL;

	void (CALLBACK * disp__glFogCoordPointerListIBM )(GLenum, GLint, const GLvoid **, GLint) = NULL;

	void (CALLBACK * disp__glIndexPointerListIBM )(GLenum, GLint, const GLvoid **, GLint) = NULL;

	void (CALLBACK * disp__glNormalPointerListIBM )(GLenum, GLint, const GLvoid **, GLint) = NULL;

	void (CALLBACK * disp__glTexCoordPointerListIBM )(GLint, GLenum, GLint, const GLvoid **, GLint) = NULL;

	void (CALLBACK * disp__glVertexPointerListIBM )(GLint, GLenum, GLint, const GLvoid **, GLint) = NULL;

	void (CALLBACK * disp__glTbufferMask3DFX )(GLuint) = NULL;

	void (CALLBACK * disp__glSampleMaskEXT )(GLclampf, GLboolean) = NULL;

	void (CALLBACK * disp__glSamplePatternEXT )(GLenum) = NULL;

	void (CALLBACK * disp__glTextureColorMaskSGIS )(GLboolean, GLboolean, GLboolean, GLboolean) = NULL;

	void (CALLBACK * disp__glIglooInterfaceSGIX )(GLenum, const GLvoid *) = NULL;

	void (CALLBACK * disp__glGenFencesNV )(GLsizei, GLuint *) = NULL;

	void (CALLBACK * disp__glDeleteFencesNV )(GLsizei, const GLuint *) = NULL;

	void (CALLBACK * disp__glSetFenceNV )(GLuint, GLenum) = NULL;

	GLboolean (CALLBACK * disp__glTestFenceNV )(GLuint) = NULL;

	void (CALLBACK * disp__glFinishFenceNV )(GLuint) = NULL;

	GLboolean (CALLBACK * disp__glIsFenceNV )(GLuint) = NULL;

	void (CALLBACK * disp__glGetFenceivNV )(GLuint, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glMapControlPointsNV )(GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, const GLvoid *) = NULL;

	void (CALLBACK * disp__glMapParameterivNV )(GLenum, GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glMapParameterfvNV )(GLenum, GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glGetMapControlPointsNV )(GLenum, GLuint, GLenum, GLsizei, GLsizei, GLboolean, GLvoid *) = NULL;

	void (CALLBACK * disp__glGetMapParameterivNV )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetMapParameterfvNV )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetMapAttribParameterivNV )(GLenum, GLuint, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetMapAttribParameterfvNV )(GLenum, GLuint, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glEvalMapsNV )(GLenum, GLenum) = NULL;

	void (CALLBACK * disp__glCombinerStageParameterfvNV )(GLenum, GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glGetCombinerStageParameterfvNV )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glBindProgramNV )(GLenum, GLuint) = NULL;

	void (CALLBACK * disp__glDeleteProgramsNV )(GLsizei, const GLuint *) = NULL;

	void (CALLBACK * disp__glExecuteProgramNV )(GLenum, GLuint, const GLfloat *) = NULL;

	void (CALLBACK * disp__glGenProgramsNV )(GLsizei, GLuint *) = NULL;

	GLboolean (CALLBACK * disp__glAreProgramsResidentNV )(GLsizei, const GLuint *, GLboolean *) = NULL;

	void (CALLBACK * disp__glRequestResidentProgramsNV )(GLsizei, const GLuint *) = NULL;

	void (CALLBACK * disp__glGetProgramParameterfvNV )(GLenum, GLuint, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetProgramParameterdvNV )(GLenum, GLuint, GLenum, GLdouble *) = NULL;

	void (CALLBACK * disp__glGetProgramivNV )(GLuint, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetProgramStringNV )(GLuint, GLenum, GLubyte *) = NULL;

	void (CALLBACK * disp__glGetTrackMatrixivNV )(GLenum, GLuint, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetVertexAttribdvNV )(GLuint, GLenum, GLdouble *) = NULL;

	void (CALLBACK * disp__glGetVertexAttribfvNV )(GLuint, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetVertexAttribivNV )(GLuint, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetVertexAttribPointervNV )(GLuint, GLenum, GLvoid **) = NULL;

	GLboolean (CALLBACK * disp__glIsProgramNV )(GLuint) = NULL;

	void (CALLBACK * disp__glLoadProgramNV )(GLenum, GLuint, GLsizei, const GLubyte *) = NULL;

	void (CALLBACK * disp__glProgramParameter4fNV )(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glProgramParameter4dNV )(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glProgramParameter4dvNV )(GLenum, GLuint, const GLdouble *) = NULL;

	void (CALLBACK * disp__glProgramParameter4fvNV )(GLenum, GLuint, const GLfloat *) = NULL;

	void (CALLBACK * disp__glProgramParameters4dvNV )(GLenum, GLuint, GLuint, const GLdouble *) = NULL;

	void (CALLBACK * disp__glProgramParameters4fvNV )(GLenum, GLuint, GLuint, const GLfloat *) = NULL;

	void (CALLBACK * disp__glTrackMatrixNV )(GLenum, GLuint, GLenum, GLenum) = NULL;

	void (CALLBACK * disp__glVertexAttribPointerNV )(GLuint, GLint, GLenum, GLsizei, const GLvoid *) = NULL;

	void (CALLBACK * disp__glVertexAttrib1sNV )(GLuint, GLshort) = NULL;

	void (CALLBACK * disp__glVertexAttrib1fNV )(GLuint, GLfloat) = NULL;

	void (CALLBACK * disp__glVertexAttrib1dNV )(GLuint, GLdouble) = NULL;

	void (CALLBACK * disp__glVertexAttrib2sNV )(GLuint, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glVertexAttrib2fNV )(GLuint, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glVertexAttrib2dNV )(GLuint, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glVertexAttrib3sNV )(GLuint, GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glVertexAttrib3fNV )(GLuint, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glVertexAttrib3dNV )(GLuint, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glVertexAttrib4sNV )(GLuint, GLshort, GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glVertexAttrib4fNV )(GLuint, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glVertexAttrib4dNV )(GLuint, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glVertexAttrib4ubNV )(GLuint, GLubyte, GLubyte, GLubyte, GLubyte) = NULL;

	void (CALLBACK * disp__glVertexAttrib1svNV )(GLuint, const GLshort *) = NULL;

	void (CALLBACK * disp__glVertexAttrib1fvNV )(GLuint, const GLfloat *) = NULL;

	void (CALLBACK * disp__glVertexAttrib1dvNV )(GLuint, const GLdouble *) = NULL;

	void (CALLBACK * disp__glVertexAttrib2svNV )(GLuint, const GLshort *) = NULL;

	void (CALLBACK * disp__glVertexAttrib2fvNV )(GLuint, const GLfloat *) = NULL;

	void (CALLBACK * disp__glVertexAttrib2dvNV )(GLuint, const GLdouble *) = NULL;

	void (CALLBACK * disp__glVertexAttrib3svNV )(GLuint, const GLshort *) = NULL;

	void (CALLBACK * disp__glVertexAttrib3fvNV )(GLuint, const GLfloat *) = NULL;

	void (CALLBACK * disp__glVertexAttrib3dvNV )(GLuint, const GLdouble *) = NULL;

	void (CALLBACK * disp__glVertexAttrib4svNV )(GLuint, const GLshort *) = NULL;

	void (CALLBACK * disp__glVertexAttrib4fvNV )(GLuint, const GLfloat *) = NULL;

	void (CALLBACK * disp__glVertexAttrib4dvNV )(GLuint, const GLdouble *) = NULL;

	void (CALLBACK * disp__glVertexAttrib4ubvNV )(GLuint, const GLubyte *) = NULL;

	void (CALLBACK * disp__glVertexAttribs1svNV )(GLuint, GLsizei, const GLshort *) = NULL;

	void (CALLBACK * disp__glVertexAttribs1fvNV )(GLuint, GLsizei, const GLfloat *) = NULL;

	void (CALLBACK * disp__glVertexAttribs1dvNV )(GLuint, GLsizei, const GLdouble *) = NULL;

	void (CALLBACK * disp__glVertexAttribs2svNV )(GLuint, GLsizei, const GLshort *) = NULL;

	void (CALLBACK * disp__glVertexAttribs2fvNV )(GLuint, GLsizei, const GLfloat *) = NULL;

	void (CALLBACK * disp__glVertexAttribs2dvNV )(GLuint, GLsizei, const GLdouble *) = NULL;

	void (CALLBACK * disp__glVertexAttribs3svNV )(GLuint, GLsizei, const GLshort *) = NULL;

	void (CALLBACK * disp__glVertexAttribs3fvNV )(GLuint, GLsizei, const GLfloat *) = NULL;

	void (CALLBACK * disp__glVertexAttribs3dvNV )(GLuint, GLsizei, const GLdouble *) = NULL;

	void (CALLBACK * disp__glVertexAttribs4svNV )(GLuint, GLsizei, const GLshort *) = NULL;

	void (CALLBACK * disp__glVertexAttribs4fvNV )(GLuint, GLsizei, const GLfloat *) = NULL;

	void (CALLBACK * disp__glVertexAttribs4dvNV )(GLuint, GLsizei, const GLdouble *) = NULL;

	void (CALLBACK * disp__glVertexAttribs4ubvNV )(GLuint, GLsizei, const GLubyte *) = NULL;

	void (CALLBACK * disp__glTexBumpParameterivATI )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glTexBumpParameterfvATI )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glGetTexBumpParameterivATI )(GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetTexBumpParameterfvATI )(GLenum, GLfloat *) = NULL;

	GLuint (CALLBACK * disp__glGenFragmentShadersATI )(GLuint) = NULL;

	void (CALLBACK * disp__glBindFragmentShaderATI )(GLuint) = NULL;

	void (CALLBACK * disp__glDeleteFragmentShaderATI )(GLuint) = NULL;

	void (CALLBACK * disp__glBeginFragmentShaderATI )(void) = NULL;

	void (CALLBACK * disp__glEndFragmentShaderATI )(void) = NULL;

	void (CALLBACK * disp__glPassTexCoordATI )(GLuint, GLuint, GLenum) = NULL;

	void (CALLBACK * disp__glSampleMapATI )(GLuint, GLuint, GLenum) = NULL;

	void (CALLBACK * disp__glColorFragmentOp1ATI )(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) = NULL;

	void (CALLBACK * disp__glColorFragmentOp2ATI )(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) = NULL;

	void (CALLBACK * disp__glColorFragmentOp3ATI )(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) = NULL;

	void (CALLBACK * disp__glAlphaFragmentOp1ATI )(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint) = NULL;

	void (CALLBACK * disp__glAlphaFragmentOp2ATI )(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) = NULL;

	void (CALLBACK * disp__glAlphaFragmentOp3ATI )(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) = NULL;

	void (CALLBACK * disp__glSetFragmentShaderConstantATI )(GLuint, const GLfloat *) = NULL;

	void (CALLBACK * disp__glPNTrianglesiATI )(GLenum, GLint) = NULL;

	void (CALLBACK * disp__glPNTrianglesfATI )(GLenum, GLfloat) = NULL;

	GLuint (CALLBACK * disp__glNewObjectBufferATI )(GLsizei, const GLvoid *, GLenum) = NULL;

	GLboolean (CALLBACK * disp__glIsObjectBufferATI )(GLuint) = NULL;

	void (CALLBACK * disp__glUpdateObjectBufferATI )(GLuint, GLuint, GLsizei, const GLvoid *, GLenum) = NULL;

	void (CALLBACK * disp__glGetObjectBufferfvATI )(GLuint, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetObjectBufferivATI )(GLuint, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glDeleteObjectBufferATI )(GLuint) = NULL;

	void (CALLBACK * disp__glArrayObjectATI )(GLenum, GLint, GLenum, GLsizei, GLuint, GLuint) = NULL;

	void (CALLBACK * disp__glGetArrayObjectfvATI )(GLenum, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetArrayObjectivATI )(GLenum, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glVariantArrayObjectATI )(GLuint, GLenum, GLsizei, GLuint, GLuint) = NULL;

	void (CALLBACK * disp__glGetVariantArrayObjectfvATI )(GLuint, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetVariantArrayObjectivATI )(GLuint, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glBeginVertexShaderEXT )(void) = NULL;

	void (CALLBACK * disp__glEndVertexShaderEXT )(void) = NULL;

	void (CALLBACK * disp__glBindVertexShaderEXT )(GLuint) = NULL;

	GLuint (CALLBACK * disp__glGenVertexShadersEXT )(GLuint) = NULL;

	void (CALLBACK * disp__glDeleteVertexShaderEXT )(GLuint) = NULL;

	void (CALLBACK * disp__glShaderOp1EXT )(GLenum, GLuint, GLuint) = NULL;

	void (CALLBACK * disp__glShaderOp2EXT )(GLenum, GLuint, GLuint, GLuint) = NULL;

	void (CALLBACK * disp__glShaderOp3EXT )(GLenum, GLuint, GLuint, GLuint, GLuint) = NULL;

	void (CALLBACK * disp__glSwizzleEXT )(GLuint, GLuint, GLenum, GLenum, GLenum, GLenum) = NULL;

	void (CALLBACK * disp__glWriteMaskEXT )(GLuint, GLuint, GLenum, GLenum, GLenum, GLenum) = NULL;

	void (CALLBACK * disp__glInsertComponentEXT )(GLuint, GLuint, GLuint) = NULL;

	void (CALLBACK * disp__glExtractComponentEXT )(GLuint, GLuint, GLuint) = NULL;

	GLuint (CALLBACK * disp__glGenSymbolsEXT )(GLenum, GLenum, GLenum, GLuint) = NULL;

	void (CALLBACK * disp__glSetInvariantEXT )(GLuint, GLenum, const void *) = NULL;

	void (CALLBACK * disp__glSetLocalConstantEXT )(GLuint, GLenum, const void *) = NULL;

	void (CALLBACK * disp__glVariantbvEXT )(GLuint, const GLbyte *) = NULL;

	void (CALLBACK * disp__glVariantsvEXT )(GLuint, const GLshort *) = NULL;

	void (CALLBACK * disp__glVariantivEXT )(GLuint, const GLint *) = NULL;

	void (CALLBACK * disp__glVariantfvEXT )(GLuint, const GLfloat *) = NULL;

	void (CALLBACK * disp__glVariantdvEXT )(GLuint, const GLdouble *) = NULL;

	void (CALLBACK * disp__glVariantubvEXT )(GLuint, const GLubyte *) = NULL;

	void (CALLBACK * disp__glVariantusvEXT )(GLuint, const GLushort *) = NULL;

	void (CALLBACK * disp__glVariantuivEXT )(GLuint, const GLuint *) = NULL;

	void (CALLBACK * disp__glVariantPointerEXT )(GLuint, GLenum, GLuint, const void *) = NULL;

	void (CALLBACK * disp__glEnableVariantClientStateEXT )(GLuint) = NULL;

	void (CALLBACK * disp__glDisableVariantClientStateEXT )(GLuint) = NULL;

	GLuint (CALLBACK * disp__glBindLightParameterEXT )(GLenum, GLenum) = NULL;

	GLuint (CALLBACK * disp__glBindMaterialParameterEXT )(GLenum, GLenum) = NULL;

	GLuint (CALLBACK * disp__glBindTexGenParameterEXT )(GLenum, GLenum, GLenum) = NULL;

	GLuint (CALLBACK * disp__glBindTextureUnitParameterEXT )(GLenum, GLenum) = NULL;

	GLuint (CALLBACK * disp__glBindParameterEXT )(GLenum) = NULL;

	GLboolean (CALLBACK * disp__glIsVariantEnabledEXT )(GLuint, GLenum) = NULL;

	void (CALLBACK * disp__glGetVariantBooleanvEXT )(GLuint, GLenum, GLboolean *) = NULL;

	void (CALLBACK * disp__glGetVariantIntegervEXT )(GLuint, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetVariantFloatvEXT )(GLuint, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetVariantPointervEXT )(GLuint, GLenum, GLvoid **) = NULL;

	void (CALLBACK * disp__glGetInvariantBooleanvEXT )(GLuint, GLenum, GLboolean *) = NULL;

	void (CALLBACK * disp__glGetInvariantIntegervEXT )(GLuint, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetInvariantFloatvEXT )(GLuint, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glGetLocalConstantBooleanvEXT )(GLuint, GLenum, GLboolean *) = NULL;

	void (CALLBACK * disp__glGetLocalConstantIntegervEXT )(GLuint, GLenum, GLint *) = NULL;

	void (CALLBACK * disp__glGetLocalConstantFloatvEXT )(GLuint, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__glVertexStream1s )(GLenum, GLshort) = NULL;

	void (CALLBACK * disp__glVertexStream1sv )(GLenum, const GLshort *) = NULL;

	void (CALLBACK * disp__glVertexStream1i )(GLenum, GLint) = NULL;

	void (CALLBACK * disp__glVertexStream1iv )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glVertexStream1f )(GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__glVertexStream1fv )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glVertexStream1d )(GLenum, GLdouble) = NULL;

	void (CALLBACK * disp__glVertexStream1dv )(GLenum, const GLdouble *) = NULL;

	void (CALLBACK * disp__glVertexStream2s )(GLenum, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glVertexStream2sv )(GLenum, const GLshort *) = NULL;

	void (CALLBACK * disp__glVertexStream2i )(GLenum, GLint, GLint) = NULL;

	void (CALLBACK * disp__glVertexStream2iv )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glVertexStream2f )(GLenum, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glVertexStream2fv )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glVertexStream2d )(GLenum, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glVertexStream2dv )(GLenum, const GLdouble *) = NULL;

	void (CALLBACK * disp__glVertexStream3s )(GLenum, GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glVertexStream3sv )(GLenum, const GLshort *) = NULL;

	void (CALLBACK * disp__glVertexStream3i )(GLenum, GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glVertexStream3iv )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glVertexStream3f )(GLenum, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glVertexStream3fv )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glVertexStream3d )(GLenum, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glVertexStream3dv )(GLenum, const GLdouble *) = NULL;

	void (CALLBACK * disp__glVertexStream4s )(GLenum, GLshort, GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glVertexStream4sv )(GLenum, const GLshort *) = NULL;

	void (CALLBACK * disp__glVertexStream4i )(GLenum, GLint, GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glVertexStream4iv )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glVertexStream4f )(GLenum, GLfloat, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glVertexStream4fv )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glVertexStream4d )(GLenum, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glVertexStream4dv )(GLenum, const GLdouble *) = NULL;

	void (CALLBACK * disp__glNormalStream3b )(GLenum, GLbyte, GLbyte, GLbyte) = NULL;

	void (CALLBACK * disp__glNormalStream3bv )(GLenum, const GLbyte *) = NULL;

	void (CALLBACK * disp__glNormalStream3s )(GLenum, GLshort, GLshort, GLshort) = NULL;

	void (CALLBACK * disp__glNormalStream3sv )(GLenum, const GLshort *) = NULL;

	void (CALLBACK * disp__glNormalStream3i )(GLenum, GLint, GLint, GLint) = NULL;

	void (CALLBACK * disp__glNormalStream3iv )(GLenum, const GLint *) = NULL;

	void (CALLBACK * disp__glNormalStream3f )(GLenum, GLfloat, GLfloat, GLfloat) = NULL;

	void (CALLBACK * disp__glNormalStream3fv )(GLenum, const GLfloat *) = NULL;

	void (CALLBACK * disp__glNormalStream3d )(GLenum, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__glNormalStream3dv )(GLenum, const GLdouble *) = NULL;

	void (CALLBACK * disp__glClientActiveVertexStream )(GLenum) = NULL;

	void (CALLBACK * disp__glVertexBlendEnvi )(GLenum, GLint) = NULL;

	void (CALLBACK * disp__glVertexBlendEnvf )(GLenum, GLfloat) = NULL;

/* C2J Parser Version 3.0:  Java program parsed successfully. */ 
