/**
 * C2J Parser Version 2.0
 * Jausoft - Sven Goethel Software Development
 * Reading from file: gl-proto-auto.orig.h . . .
 * Destination-Class: gl4java_GLUFuncJauJNI ! 
 */

	disp__glClearIndex = (void (CALLBACK *)(GLfloat))
	  GET_GL_PROCADDRESS ("glClearIndex");

	disp__glClearColor = (void (CALLBACK *)(GLclampf, GLclampf, GLclampf, GLclampf))
	  GET_GL_PROCADDRESS ("glClearColor");

	disp__glClear = (void (CALLBACK *)(GLbitfield))
	  GET_GL_PROCADDRESS ("glClear");

	disp__glIndexMask = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glIndexMask");

	disp__glColorMask = (void (CALLBACK *)(GLboolean, GLboolean, GLboolean, GLboolean))
	  GET_GL_PROCADDRESS ("glColorMask");

	disp__glAlphaFunc = (void (CALLBACK *)(GLenum, GLclampf))
	  GET_GL_PROCADDRESS ("glAlphaFunc");

	disp__glBlendFunc = (void (CALLBACK *)(GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glBlendFunc");

	disp__glLogicOp = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glLogicOp");

	disp__glCullFace = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glCullFace");

	disp__glFrontFace = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glFrontFace");

	disp__glPointSize = (void (CALLBACK *)(GLfloat))
	  GET_GL_PROCADDRESS ("glPointSize");

	disp__glLineWidth = (void (CALLBACK *)(GLfloat))
	  GET_GL_PROCADDRESS ("glLineWidth");

	disp__glLineStipple = (void (CALLBACK *)(GLint, GLushort))
	  GET_GL_PROCADDRESS ("glLineStipple");

	disp__glPolygonMode = (void (CALLBACK *)(GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glPolygonMode");

	disp__glPolygonOffset = (void (CALLBACK *)(GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glPolygonOffset");

	disp__glPolygonStipple = (void (CALLBACK *)(const GLubyte *))
	  GET_GL_PROCADDRESS ("glPolygonStipple");

	disp__glGetPolygonStipple = (void (CALLBACK *)(GLubyte *))
	  GET_GL_PROCADDRESS ("glGetPolygonStipple");

	disp__glEdgeFlag = (void (CALLBACK *)(GLboolean))
	  GET_GL_PROCADDRESS ("glEdgeFlag");

	disp__glEdgeFlagv = (void (CALLBACK *)(const GLboolean *))
	  GET_GL_PROCADDRESS ("glEdgeFlagv");

	disp__glScissor = (void (CALLBACK *)(GLint, GLint, GLsizei, GLsizei))
	  GET_GL_PROCADDRESS ("glScissor");

	disp__glClipPlane = (void (CALLBACK *)(GLenum, const GLdouble *))
	  GET_GL_PROCADDRESS ("glClipPlane");

	disp__glGetClipPlane = (void (CALLBACK *)(GLenum, GLdouble *))
	  GET_GL_PROCADDRESS ("glGetClipPlane");

	disp__glDrawBuffer = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glDrawBuffer");

	disp__glReadBuffer = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glReadBuffer");

	disp__glEnable = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glEnable");

	disp__glDisable = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glDisable");

	disp__glIsEnabled = (GLboolean (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glIsEnabled");

	disp__glEnableClientState = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glEnableClientState");

	disp__glDisableClientState = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glDisableClientState");

	disp__glGetBooleanv = (void (CALLBACK *)(GLenum, GLboolean *))
	  GET_GL_PROCADDRESS ("glGetBooleanv");

	disp__glGetDoublev = (void (CALLBACK *)(GLenum, GLdouble *))
	  GET_GL_PROCADDRESS ("glGetDoublev");

	disp__glGetFloatv = (void (CALLBACK *)(GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetFloatv");

	disp__glGetIntegerv = (void (CALLBACK *)(GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetIntegerv");

	disp__glPushAttrib = (void (CALLBACK *)(GLbitfield))
	  GET_GL_PROCADDRESS ("glPushAttrib");

	disp__glPopAttrib = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glPopAttrib");

	disp__glPushClientAttrib = (void (CALLBACK *)(GLbitfield))
	  GET_GL_PROCADDRESS ("glPushClientAttrib");

	disp__glPopClientAttrib = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glPopClientAttrib");

	disp__glRenderMode = (GLint (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glRenderMode");

	disp__glGetError = (GLenum (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glGetError");

	disp__glFinish = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glFinish");

	disp__glFlush = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glFlush");

	disp__glHint = (void (CALLBACK *)(GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glHint");

	disp__glClearDepth = (void (CALLBACK *)(GLclampd))
	  GET_GL_PROCADDRESS ("glClearDepth");

	disp__glDepthFunc = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glDepthFunc");

	disp__glDepthMask = (void (CALLBACK *)(GLboolean))
	  GET_GL_PROCADDRESS ("glDepthMask");

	disp__glDepthRange = (void (CALLBACK *)(GLclampd, GLclampd))
	  GET_GL_PROCADDRESS ("glDepthRange");

	disp__glClearAccum = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glClearAccum");

	disp__glAccum = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glAccum");

	disp__glMatrixMode = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glMatrixMode");

	disp__glOrtho = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glOrtho");

	disp__glFrustum = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glFrustum");

	disp__glViewport = (void (CALLBACK *)(GLint, GLint, GLsizei, GLsizei))
	  GET_GL_PROCADDRESS ("glViewport");

	disp__glPushMatrix = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glPushMatrix");

	disp__glPopMatrix = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glPopMatrix");

	disp__glLoadIdentity = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glLoadIdentity");

	disp__glLoadMatrixd = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glLoadMatrixd");

	disp__glLoadMatrixf = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glLoadMatrixf");

	disp__glMultMatrixd = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glMultMatrixd");

	disp__glMultMatrixf = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glMultMatrixf");

	disp__glRotated = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glRotated");

	disp__glRotatef = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glRotatef");

	disp__glScaled = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glScaled");

	disp__glScalef = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glScalef");

	disp__glTranslated = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glTranslated");

	disp__glTranslatef = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glTranslatef");

	disp__glIsList = (GLboolean (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glIsList");

	disp__glDeleteLists = (void (CALLBACK *)(GLuint, GLsizei))
	  GET_GL_PROCADDRESS ("glDeleteLists");

	disp__glGenLists = (GLuint (CALLBACK *)(GLsizei))
	  GET_GL_PROCADDRESS ("glGenLists");

	disp__glNewList = (void (CALLBACK *)(GLuint, GLenum))
	  GET_GL_PROCADDRESS ("glNewList");

	disp__glEndList = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glEndList");

	disp__glCallList = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glCallList");

	disp__glCallLists = (void (CALLBACK *)(GLsizei, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glCallLists");

	disp__glListBase = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glListBase");

	disp__glBegin = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glBegin");

	disp__glEnd = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glEnd");

	disp__glVertex2d = (void (CALLBACK *)(GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glVertex2d");

	disp__glVertex2f = (void (CALLBACK *)(GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glVertex2f");

	disp__glVertex2i = (void (CALLBACK *)(GLint, GLint))
	  GET_GL_PROCADDRESS ("glVertex2i");

	disp__glVertex2s = (void (CALLBACK *)(GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glVertex2s");

	disp__glVertex3d = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glVertex3d");

	disp__glVertex3f = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glVertex3f");

	disp__glVertex3i = (void (CALLBACK *)(GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glVertex3i");

	disp__glVertex3s = (void (CALLBACK *)(GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glVertex3s");

	disp__glVertex4d = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glVertex4d");

	disp__glVertex4f = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glVertex4f");

	disp__glVertex4i = (void (CALLBACK *)(GLint, GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glVertex4i");

	disp__glVertex4s = (void (CALLBACK *)(GLshort, GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glVertex4s");

	disp__glVertex2dv = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glVertex2dv");

	disp__glVertex2fv = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glVertex2fv");

	disp__glVertex2iv = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glVertex2iv");

	disp__glVertex2sv = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glVertex2sv");

	disp__glVertex3dv = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glVertex3dv");

	disp__glVertex3fv = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glVertex3fv");

	disp__glVertex3iv = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glVertex3iv");

	disp__glVertex3sv = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glVertex3sv");

	disp__glVertex4dv = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glVertex4dv");

	disp__glVertex4fv = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glVertex4fv");

	disp__glVertex4iv = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glVertex4iv");

	disp__glVertex4sv = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glVertex4sv");

	disp__glNormal3b = (void (CALLBACK *)(GLbyte, GLbyte, GLbyte))
	  GET_GL_PROCADDRESS ("glNormal3b");

	disp__glNormal3d = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glNormal3d");

	disp__glNormal3f = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glNormal3f");

	disp__glNormal3i = (void (CALLBACK *)(GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glNormal3i");

	disp__glNormal3s = (void (CALLBACK *)(GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glNormal3s");

	disp__glNormal3bv = (void (CALLBACK *)(const GLbyte *))
	  GET_GL_PROCADDRESS ("glNormal3bv");

	disp__glNormal3dv = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glNormal3dv");

	disp__glNormal3fv = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glNormal3fv");

	disp__glNormal3iv = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glNormal3iv");

	disp__glNormal3sv = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glNormal3sv");

	disp__glIndexd = (void (CALLBACK *)(GLdouble))
	  GET_GL_PROCADDRESS ("glIndexd");

	disp__glIndexf = (void (CALLBACK *)(GLfloat))
	  GET_GL_PROCADDRESS ("glIndexf");

	disp__glIndexi = (void (CALLBACK *)(GLint))
	  GET_GL_PROCADDRESS ("glIndexi");

	disp__glIndexs = (void (CALLBACK *)(GLshort))
	  GET_GL_PROCADDRESS ("glIndexs");

	disp__glIndexub = (void (CALLBACK *)(GLubyte))
	  GET_GL_PROCADDRESS ("glIndexub");

	disp__glIndexdv = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glIndexdv");

	disp__glIndexfv = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glIndexfv");

	disp__glIndexiv = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glIndexiv");

	disp__glIndexsv = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glIndexsv");

	disp__glIndexubv = (void (CALLBACK *)(const GLubyte *))
	  GET_GL_PROCADDRESS ("glIndexubv");

	disp__glColor3b = (void (CALLBACK *)(GLbyte, GLbyte, GLbyte))
	  GET_GL_PROCADDRESS ("glColor3b");

	disp__glColor3d = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glColor3d");

	disp__glColor3f = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glColor3f");

	disp__glColor3i = (void (CALLBACK *)(GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glColor3i");

	disp__glColor3s = (void (CALLBACK *)(GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glColor3s");

	disp__glColor3ub = (void (CALLBACK *)(GLubyte, GLubyte, GLubyte))
	  GET_GL_PROCADDRESS ("glColor3ub");

	disp__glColor3ui = (void (CALLBACK *)(GLuint, GLuint, GLuint))
	  GET_GL_PROCADDRESS ("glColor3ui");

	disp__glColor3us = (void (CALLBACK *)(GLushort, GLushort, GLushort))
	  GET_GL_PROCADDRESS ("glColor3us");

	disp__glColor4b = (void (CALLBACK *)(GLbyte, GLbyte, GLbyte, GLbyte))
	  GET_GL_PROCADDRESS ("glColor4b");

	disp__glColor4d = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glColor4d");

	disp__glColor4f = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glColor4f");

	disp__glColor4i = (void (CALLBACK *)(GLint, GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glColor4i");

	disp__glColor4s = (void (CALLBACK *)(GLshort, GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glColor4s");

	disp__glColor4ub = (void (CALLBACK *)(GLubyte, GLubyte, GLubyte, GLubyte))
	  GET_GL_PROCADDRESS ("glColor4ub");

	disp__glColor4ui = (void (CALLBACK *)(GLuint, GLuint, GLuint, GLuint))
	  GET_GL_PROCADDRESS ("glColor4ui");

	disp__glColor4us = (void (CALLBACK *)(GLushort, GLushort, GLushort, GLushort))
	  GET_GL_PROCADDRESS ("glColor4us");

	disp__glColor3bv = (void (CALLBACK *)(const GLbyte *))
	  GET_GL_PROCADDRESS ("glColor3bv");

	disp__glColor3dv = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glColor3dv");

	disp__glColor3fv = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glColor3fv");

	disp__glColor3iv = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glColor3iv");

	disp__glColor3sv = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glColor3sv");

	disp__glColor3ubv = (void (CALLBACK *)(const GLubyte *))
	  GET_GL_PROCADDRESS ("glColor3ubv");

	disp__glColor3uiv = (void (CALLBACK *)(const GLuint *))
	  GET_GL_PROCADDRESS ("glColor3uiv");

	disp__glColor3usv = (void (CALLBACK *)(const GLushort *))
	  GET_GL_PROCADDRESS ("glColor3usv");

	disp__glColor4bv = (void (CALLBACK *)(const GLbyte *))
	  GET_GL_PROCADDRESS ("glColor4bv");

	disp__glColor4dv = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glColor4dv");

	disp__glColor4fv = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glColor4fv");

	disp__glColor4iv = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glColor4iv");

	disp__glColor4sv = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glColor4sv");

	disp__glColor4ubv = (void (CALLBACK *)(const GLubyte *))
	  GET_GL_PROCADDRESS ("glColor4ubv");

	disp__glColor4uiv = (void (CALLBACK *)(const GLuint *))
	  GET_GL_PROCADDRESS ("glColor4uiv");

	disp__glColor4usv = (void (CALLBACK *)(const GLushort *))
	  GET_GL_PROCADDRESS ("glColor4usv");

	disp__glTexCoord1d = (void (CALLBACK *)(GLdouble))
	  GET_GL_PROCADDRESS ("glTexCoord1d");

	disp__glTexCoord1f = (void (CALLBACK *)(GLfloat))
	  GET_GL_PROCADDRESS ("glTexCoord1f");

	disp__glTexCoord1i = (void (CALLBACK *)(GLint))
	  GET_GL_PROCADDRESS ("glTexCoord1i");

	disp__glTexCoord1s = (void (CALLBACK *)(GLshort))
	  GET_GL_PROCADDRESS ("glTexCoord1s");

	disp__glTexCoord2d = (void (CALLBACK *)(GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glTexCoord2d");

	disp__glTexCoord2f = (void (CALLBACK *)(GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glTexCoord2f");

	disp__glTexCoord2i = (void (CALLBACK *)(GLint, GLint))
	  GET_GL_PROCADDRESS ("glTexCoord2i");

	disp__glTexCoord2s = (void (CALLBACK *)(GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glTexCoord2s");

	disp__glTexCoord3d = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glTexCoord3d");

	disp__glTexCoord3f = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glTexCoord3f");

	disp__glTexCoord3i = (void (CALLBACK *)(GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glTexCoord3i");

	disp__glTexCoord3s = (void (CALLBACK *)(GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glTexCoord3s");

	disp__glTexCoord4d = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glTexCoord4d");

	disp__glTexCoord4f = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glTexCoord4f");

	disp__glTexCoord4i = (void (CALLBACK *)(GLint, GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glTexCoord4i");

	disp__glTexCoord4s = (void (CALLBACK *)(GLshort, GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glTexCoord4s");

	disp__glTexCoord1dv = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glTexCoord1dv");

	disp__glTexCoord1fv = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glTexCoord1fv");

	disp__glTexCoord1iv = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glTexCoord1iv");

	disp__glTexCoord1sv = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glTexCoord1sv");

	disp__glTexCoord2dv = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glTexCoord2dv");

	disp__glTexCoord2fv = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glTexCoord2fv");

	disp__glTexCoord2iv = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glTexCoord2iv");

	disp__glTexCoord2sv = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glTexCoord2sv");

	disp__glTexCoord3dv = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glTexCoord3dv");

	disp__glTexCoord3fv = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glTexCoord3fv");

	disp__glTexCoord3iv = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glTexCoord3iv");

	disp__glTexCoord3sv = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glTexCoord3sv");

	disp__glTexCoord4dv = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glTexCoord4dv");

	disp__glTexCoord4fv = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glTexCoord4fv");

	disp__glTexCoord4iv = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glTexCoord4iv");

	disp__glTexCoord4sv = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glTexCoord4sv");

	disp__glRasterPos2d = (void (CALLBACK *)(GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glRasterPos2d");

	disp__glRasterPos2f = (void (CALLBACK *)(GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glRasterPos2f");

	disp__glRasterPos2i = (void (CALLBACK *)(GLint, GLint))
	  GET_GL_PROCADDRESS ("glRasterPos2i");

	disp__glRasterPos2s = (void (CALLBACK *)(GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glRasterPos2s");

	disp__glRasterPos3d = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glRasterPos3d");

	disp__glRasterPos3f = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glRasterPos3f");

	disp__glRasterPos3i = (void (CALLBACK *)(GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glRasterPos3i");

	disp__glRasterPos3s = (void (CALLBACK *)(GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glRasterPos3s");

	disp__glRasterPos4d = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glRasterPos4d");

	disp__glRasterPos4f = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glRasterPos4f");

	disp__glRasterPos4i = (void (CALLBACK *)(GLint, GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glRasterPos4i");

	disp__glRasterPos4s = (void (CALLBACK *)(GLshort, GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glRasterPos4s");

	disp__glRasterPos2dv = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glRasterPos2dv");

	disp__glRasterPos2fv = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glRasterPos2fv");

	disp__glRasterPos2iv = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glRasterPos2iv");

	disp__glRasterPos2sv = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glRasterPos2sv");

	disp__glRasterPos3dv = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glRasterPos3dv");

	disp__glRasterPos3fv = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glRasterPos3fv");

	disp__glRasterPos3iv = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glRasterPos3iv");

	disp__glRasterPos3sv = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glRasterPos3sv");

	disp__glRasterPos4dv = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glRasterPos4dv");

	disp__glRasterPos4fv = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glRasterPos4fv");

	disp__glRasterPos4iv = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glRasterPos4iv");

	disp__glRasterPos4sv = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glRasterPos4sv");

	disp__glRectd = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glRectd");

	disp__glRectf = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glRectf");

	disp__glRecti = (void (CALLBACK *)(GLint, GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glRecti");

	disp__glRects = (void (CALLBACK *)(GLshort, GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glRects");

	disp__glRectdv = (void (CALLBACK *)(const GLdouble *, const GLdouble *))
	  GET_GL_PROCADDRESS ("glRectdv");

	disp__glRectfv = (void (CALLBACK *)(const GLfloat *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glRectfv");

	disp__glRectiv = (void (CALLBACK *)(const GLint *, const GLint *))
	  GET_GL_PROCADDRESS ("glRectiv");

	disp__glRectsv = (void (CALLBACK *)(const GLshort *, const GLshort *))
	  GET_GL_PROCADDRESS ("glRectsv");

	disp__glVertexPointer = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glVertexPointer");

	disp__glNormalPointer = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glNormalPointer");

	disp__glColorPointer = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glColorPointer");

	disp__glIndexPointer = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glIndexPointer");

	disp__glTexCoordPointer = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glTexCoordPointer");

	disp__glEdgeFlagPointer = (void (CALLBACK *)(GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glEdgeFlagPointer");

	disp__glGetPointerv = (void (CALLBACK *)(GLenum, void **))
	  GET_GL_PROCADDRESS ("glGetPointerv");

	disp__glArrayElement = (void (CALLBACK *)(GLint))
	  GET_GL_PROCADDRESS ("glArrayElement");

	disp__glDrawArrays = (void (CALLBACK *)(GLenum, GLint, GLsizei))
	  GET_GL_PROCADDRESS ("glDrawArrays");

	disp__glDrawElements = (void (CALLBACK *)(GLenum, GLsizei, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glDrawElements");

	disp__glInterleavedArrays = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glInterleavedArrays");

	disp__glShadeModel = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glShadeModel");

	disp__glLightf = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glLightf");

	disp__glLighti = (void (CALLBACK *)(GLenum, GLenum, GLint))
	  GET_GL_PROCADDRESS ("glLighti");

	disp__glLightfv = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glLightfv");

	disp__glLightiv = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glLightiv");

	disp__glGetLightfv = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetLightfv");

	disp__glGetLightiv = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetLightiv");

	disp__glLightModelf = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glLightModelf");

	disp__glLightModeli = (void (CALLBACK *)(GLenum, GLint))
	  GET_GL_PROCADDRESS ("glLightModeli");

	disp__glLightModelfv = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glLightModelfv");

	disp__glLightModeliv = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glLightModeliv");

	disp__glMaterialf = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glMaterialf");

	disp__glMateriali = (void (CALLBACK *)(GLenum, GLenum, GLint))
	  GET_GL_PROCADDRESS ("glMateriali");

	disp__glMaterialfv = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glMaterialfv");

	disp__glMaterialiv = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glMaterialiv");

	disp__glGetMaterialfv = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetMaterialfv");

	disp__glGetMaterialiv = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetMaterialiv");

	disp__glColorMaterial = (void (CALLBACK *)(GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glColorMaterial");

	disp__glPixelZoom = (void (CALLBACK *)(GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glPixelZoom");

	disp__glPixelStoref = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glPixelStoref");

	disp__glPixelStorei = (void (CALLBACK *)(GLenum, GLint))
	  GET_GL_PROCADDRESS ("glPixelStorei");

	disp__glPixelTransferf = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glPixelTransferf");

	disp__glPixelTransferi = (void (CALLBACK *)(GLenum, GLint))
	  GET_GL_PROCADDRESS ("glPixelTransferi");

	disp__glPixelMapfv = (void (CALLBACK *)(GLenum, GLint, const GLfloat *))
	  GET_GL_PROCADDRESS ("glPixelMapfv");

	disp__glPixelMapuiv = (void (CALLBACK *)(GLenum, GLint, const GLuint *))
	  GET_GL_PROCADDRESS ("glPixelMapuiv");

	disp__glPixelMapusv = (void (CALLBACK *)(GLenum, GLint, const GLushort *))
	  GET_GL_PROCADDRESS ("glPixelMapusv");

	disp__glGetPixelMapfv = (void (CALLBACK *)(GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetPixelMapfv");

	disp__glGetPixelMapuiv = (void (CALLBACK *)(GLenum, GLuint *))
	  GET_GL_PROCADDRESS ("glGetPixelMapuiv");

	disp__glGetPixelMapusv = (void (CALLBACK *)(GLenum, GLushort *))
	  GET_GL_PROCADDRESS ("glGetPixelMapusv");

	disp__glBitmap = (void (CALLBACK *)(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *))
	  GET_GL_PROCADDRESS ("glBitmap");

	disp__glReadPixels = (void (CALLBACK *)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *))
	  GET_GL_PROCADDRESS ("glReadPixels");

	disp__glDrawPixels = (void (CALLBACK *)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glDrawPixels");

	disp__glCopyPixels = (void (CALLBACK *)(GLint, GLint, GLsizei, GLsizei, GLenum))
	  GET_GL_PROCADDRESS ("glCopyPixels");

	disp__glStencilFunc = (void (CALLBACK *)(GLenum, GLint, GLuint))
	  GET_GL_PROCADDRESS ("glStencilFunc");

	disp__glStencilMask = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glStencilMask");

	disp__glStencilOp = (void (CALLBACK *)(GLenum, GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glStencilOp");

	disp__glClearStencil = (void (CALLBACK *)(GLint))
	  GET_GL_PROCADDRESS ("glClearStencil");

	disp__glTexGend = (void (CALLBACK *)(GLenum, GLenum, GLdouble))
	  GET_GL_PROCADDRESS ("glTexGend");

	disp__glTexGenf = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glTexGenf");

	disp__glTexGeni = (void (CALLBACK *)(GLenum, GLenum, GLint))
	  GET_GL_PROCADDRESS ("glTexGeni");

	disp__glTexGendv = (void (CALLBACK *)(GLenum, GLenum, const GLdouble *))
	  GET_GL_PROCADDRESS ("glTexGendv");

	disp__glTexGenfv = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glTexGenfv");

	disp__glTexGeniv = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glTexGeniv");

	disp__glGetTexGendv = (void (CALLBACK *)(GLenum, GLenum, GLdouble *))
	  GET_GL_PROCADDRESS ("glGetTexGendv");

	disp__glGetTexGenfv = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetTexGenfv");

	disp__glGetTexGeniv = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetTexGeniv");

	disp__glTexEnvf = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glTexEnvf");

	disp__glTexEnvi = (void (CALLBACK *)(GLenum, GLenum, GLint))
	  GET_GL_PROCADDRESS ("glTexEnvi");

	disp__glTexEnvfv = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glTexEnvfv");

	disp__glTexEnviv = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glTexEnviv");

	disp__glGetTexEnvfv = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetTexEnvfv");

	disp__glGetTexEnviv = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetTexEnviv");

	disp__glTexParameterf = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glTexParameterf");

	disp__glTexParameteri = (void (CALLBACK *)(GLenum, GLenum, GLint))
	  GET_GL_PROCADDRESS ("glTexParameteri");

	disp__glTexParameterfv = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glTexParameterfv");

	disp__glTexParameteriv = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glTexParameteriv");

	disp__glGetTexParameterfv = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetTexParameterfv");

	disp__glGetTexParameteriv = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetTexParameteriv");

	disp__glGetTexLevelParameterfv = (void (CALLBACK *)(GLenum, GLint, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetTexLevelParameterfv");

	disp__glGetTexLevelParameteriv = (void (CALLBACK *)(GLenum, GLint, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetTexLevelParameteriv");

	disp__glTexImage1D = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glTexImage1D");

	disp__glTexImage2D = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glTexImage2D");

	disp__glGetTexImage = (void (CALLBACK *)(GLenum, GLint, GLenum, GLenum, GLvoid *))
	  GET_GL_PROCADDRESS ("glGetTexImage");

	disp__glGenTextures = (void (CALLBACK *)(GLsizei, GLuint *))
	  GET_GL_PROCADDRESS ("glGenTextures");

	disp__glDeleteTextures = (void (CALLBACK *)(GLsizei, const GLuint *))
	  GET_GL_PROCADDRESS ("glDeleteTextures");

	disp__glBindTexture = (void (CALLBACK *)(GLenum, GLuint))
	  GET_GL_PROCADDRESS ("glBindTexture");

	disp__glPrioritizeTextures = (void (CALLBACK *)(GLsizei, const GLuint *, const GLclampf *))
	  GET_GL_PROCADDRESS ("glPrioritizeTextures");

	disp__glAreTexturesResident = (GLboolean (CALLBACK *)(GLsizei, const GLuint *, GLboolean *))
	  GET_GL_PROCADDRESS ("glAreTexturesResident");

	disp__glIsTexture = (GLboolean (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glIsTexture");

	disp__glTexSubImage1D = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glTexSubImage1D");

	disp__glTexSubImage2D = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glTexSubImage2D");

	disp__glCopyTexImage1D = (void (CALLBACK *)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint))
	  GET_GL_PROCADDRESS ("glCopyTexImage1D");

	disp__glCopyTexImage2D = (void (CALLBACK *)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint))
	  GET_GL_PROCADDRESS ("glCopyTexImage2D");

	disp__glCopyTexSubImage1D = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei))
	  GET_GL_PROCADDRESS ("glCopyTexSubImage1D");

	disp__glCopyTexSubImage2D = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei))
	  GET_GL_PROCADDRESS ("glCopyTexSubImage2D");

	disp__glMap1d = (void (CALLBACK *)(GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *))
	  GET_GL_PROCADDRESS ("glMap1d");

	disp__glMap1f = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *))
	  GET_GL_PROCADDRESS ("glMap1f");

	disp__glMap2d = (void (CALLBACK *)(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *))
	  GET_GL_PROCADDRESS ("glMap2d");

	disp__glMap2f = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *))
	  GET_GL_PROCADDRESS ("glMap2f");

	disp__glGetMapdv = (void (CALLBACK *)(GLenum, GLenum, GLdouble *))
	  GET_GL_PROCADDRESS ("glGetMapdv");

	disp__glGetMapfv = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetMapfv");

	disp__glGetMapiv = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetMapiv");

	disp__glEvalCoord1d = (void (CALLBACK *)(GLdouble))
	  GET_GL_PROCADDRESS ("glEvalCoord1d");

	disp__glEvalCoord1f = (void (CALLBACK *)(GLfloat))
	  GET_GL_PROCADDRESS ("glEvalCoord1f");

	disp__glEvalCoord1dv = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glEvalCoord1dv");

	disp__glEvalCoord1fv = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glEvalCoord1fv");

	disp__glEvalCoord2d = (void (CALLBACK *)(GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glEvalCoord2d");

	disp__glEvalCoord2f = (void (CALLBACK *)(GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glEvalCoord2f");

	disp__glEvalCoord2dv = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glEvalCoord2dv");

	disp__glEvalCoord2fv = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glEvalCoord2fv");

	disp__glMapGrid1d = (void (CALLBACK *)(GLint, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glMapGrid1d");

	disp__glMapGrid1f = (void (CALLBACK *)(GLint, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glMapGrid1f");

	disp__glMapGrid2d = (void (CALLBACK *)(GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glMapGrid2d");

	disp__glMapGrid2f = (void (CALLBACK *)(GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glMapGrid2f");

	disp__glEvalPoint1 = (void (CALLBACK *)(GLint))
	  GET_GL_PROCADDRESS ("glEvalPoint1");

	disp__glEvalPoint2 = (void (CALLBACK *)(GLint, GLint))
	  GET_GL_PROCADDRESS ("glEvalPoint2");

	disp__glEvalMesh1 = (void (CALLBACK *)(GLenum, GLint, GLint))
	  GET_GL_PROCADDRESS ("glEvalMesh1");

	disp__glEvalMesh2 = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glEvalMesh2");

	disp__glFogf = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glFogf");

	disp__glFogi = (void (CALLBACK *)(GLenum, GLint))
	  GET_GL_PROCADDRESS ("glFogi");

	disp__glFogfv = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glFogfv");

	disp__glFogiv = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glFogiv");

	disp__glFeedbackBuffer = (void (CALLBACK *)(GLsizei, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glFeedbackBuffer");

	disp__glPassThrough = (void (CALLBACK *)(GLfloat))
	  GET_GL_PROCADDRESS ("glPassThrough");

	disp__glSelectBuffer = (void (CALLBACK *)(GLsizei, GLuint *))
	  GET_GL_PROCADDRESS ("glSelectBuffer");

	disp__glInitNames = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glInitNames");

	disp__glLoadName = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glLoadName");

	disp__glPushName = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glPushName");

	disp__glPopName = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glPopName");

	disp__glDrawRangeElements = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glDrawRangeElements");

	disp__glTexImage3D = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glTexImage3D");

	disp__glTexSubImage3D = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glTexSubImage3D");

	disp__glCopyTexSubImage3D = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei))
	  GET_GL_PROCADDRESS ("glCopyTexSubImage3D");

	disp__glColorTable = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glColorTable");

	disp__glColorSubTable = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glColorSubTable");

	disp__glColorTableParameteriv = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glColorTableParameteriv");

	disp__glColorTableParameterfv = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glColorTableParameterfv");

	disp__glCopyColorSubTable = (void (CALLBACK *)(GLenum, GLsizei, GLint, GLint, GLsizei))
	  GET_GL_PROCADDRESS ("glCopyColorSubTable");

	disp__glCopyColorTable = (void (CALLBACK *)(GLenum, GLenum, GLint, GLint, GLsizei))
	  GET_GL_PROCADDRESS ("glCopyColorTable");

	disp__glGetColorTable = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
	  GET_GL_PROCADDRESS ("glGetColorTable");

	disp__glGetColorTableParameterfv = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetColorTableParameterfv");

	disp__glGetColorTableParameteriv = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetColorTableParameteriv");

	disp__glBlendEquation = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glBlendEquation");

	disp__glBlendColor = (void (CALLBACK *)(GLclampf, GLclampf, GLclampf, GLclampf))
	  GET_GL_PROCADDRESS ("glBlendColor");

	disp__glHistogram = (void (CALLBACK *)(GLenum, GLsizei, GLenum, GLboolean))
	  GET_GL_PROCADDRESS ("glHistogram");

	disp__glResetHistogram = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glResetHistogram");

	disp__glGetHistogram = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
	  GET_GL_PROCADDRESS ("glGetHistogram");

	disp__glGetHistogramParameterfv = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetHistogramParameterfv");

	disp__glGetHistogramParameteriv = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetHistogramParameteriv");

	disp__glMinmax = (void (CALLBACK *)(GLenum, GLenum, GLboolean))
	  GET_GL_PROCADDRESS ("glMinmax");

	disp__glResetMinmax = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glResetMinmax");

	disp__glGetMinmax = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
	  GET_GL_PROCADDRESS ("glGetMinmax");

	disp__glGetMinmaxParameterfv = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetMinmaxParameterfv");

	disp__glGetMinmaxParameteriv = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetMinmaxParameteriv");

	disp__glConvolutionFilter1D = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glConvolutionFilter1D");

	disp__glConvolutionFilter2D = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glConvolutionFilter2D");

	disp__glConvolutionParameterf = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glConvolutionParameterf");

	disp__glConvolutionParameterfv = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glConvolutionParameterfv");

	disp__glConvolutionParameteri = (void (CALLBACK *)(GLenum, GLenum, GLint))
	  GET_GL_PROCADDRESS ("glConvolutionParameteri");

	disp__glConvolutionParameteriv = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glConvolutionParameteriv");

	disp__glCopyConvolutionFilter1D = (void (CALLBACK *)(GLenum, GLenum, GLint, GLint, GLsizei))
	  GET_GL_PROCADDRESS ("glCopyConvolutionFilter1D");

	disp__glCopyConvolutionFilter2D = (void (CALLBACK *)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei))
	  GET_GL_PROCADDRESS ("glCopyConvolutionFilter2D");

	disp__glGetConvolutionFilter = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
	  GET_GL_PROCADDRESS ("glGetConvolutionFilter");

	disp__glGetConvolutionParameterfv = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetConvolutionParameterfv");

	disp__glGetConvolutionParameteriv = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetConvolutionParameteriv");

	disp__glSeparableFilter2D = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *))
	  GET_GL_PROCADDRESS ("glSeparableFilter2D");

	disp__glGetSeparableFilter = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *))
	  GET_GL_PROCADDRESS ("glGetSeparableFilter");

	disp__glBlendColorEXT = (void (CALLBACK *)(GLclampf, GLclampf, GLclampf, GLclampf))
	  GET_GL_PROCADDRESS ("glBlendColorEXT");

	disp__glPolygonOffsetEXT = (void (CALLBACK *)(GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glPolygonOffsetEXT");

	disp__glTexImage3DEXT = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glTexImage3DEXT");

	disp__glTexSubImage3DEXT = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glTexSubImage3DEXT");

	disp__glCopyTexSubImage3DEXT = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei))
	  GET_GL_PROCADDRESS ("glCopyTexSubImage3DEXT");

	disp__glGenTexturesEXT = (void (CALLBACK *)(GLsizei, GLuint *))
	  GET_GL_PROCADDRESS ("glGenTexturesEXT");

	disp__glDeleteTexturesEXT = (void (CALLBACK *)(GLsizei, const GLuint *))
	  GET_GL_PROCADDRESS ("glDeleteTexturesEXT");

	disp__glBindTextureEXT = (void (CALLBACK *)(GLenum, GLuint))
	  GET_GL_PROCADDRESS ("glBindTextureEXT");

	disp__glPrioritizeTexturesEXT = (void (CALLBACK *)(GLsizei, const GLuint *, const GLclampf *))
	  GET_GL_PROCADDRESS ("glPrioritizeTexturesEXT");

	disp__glAreTexturesResidentEXT = (GLboolean (CALLBACK *)(GLsizei, const GLuint *, GLboolean *))
	  GET_GL_PROCADDRESS ("glAreTexturesResidentEXT");

	disp__glIsTextureEXT = (GLboolean (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glIsTextureEXT");

	disp__glVertexPointerEXT = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glVertexPointerEXT");

	disp__glNormalPointerEXT = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glNormalPointerEXT");

	disp__glColorPointerEXT = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glColorPointerEXT");

	disp__glIndexPointerEXT = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glIndexPointerEXT");

	disp__glTexCoordPointerEXT = (void (CALLBACK *)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glTexCoordPointerEXT");

	disp__glEdgeFlagPointerEXT = (void (CALLBACK *)(GLsizei, GLsizei, const GLboolean *))
	  GET_GL_PROCADDRESS ("glEdgeFlagPointerEXT");

	disp__glGetPointervEXT = (void (CALLBACK *)(GLenum, void **))
	  GET_GL_PROCADDRESS ("glGetPointervEXT");

	disp__glArrayElementEXT = (void (CALLBACK *)(GLint))
	  GET_GL_PROCADDRESS ("glArrayElementEXT");

	disp__glDrawArraysEXT = (void (CALLBACK *)(GLenum, GLint, GLsizei))
	  GET_GL_PROCADDRESS ("glDrawArraysEXT");

	disp__glBlendEquationEXT = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glBlendEquationEXT");

	disp__glPointParameterfEXT = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glPointParameterfEXT");

	disp__glPointParameterfvEXT = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glPointParameterfvEXT");

	disp__glColorTableEXT = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glColorTableEXT");

	disp__glColorSubTableEXT = (void (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glColorSubTableEXT");

	disp__glGetColorTableEXT = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
	  GET_GL_PROCADDRESS ("glGetColorTableEXT");

	disp__glGetColorTableParameterfvEXT = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetColorTableParameterfvEXT");

	disp__glGetColorTableParameterivEXT = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetColorTableParameterivEXT");

	disp__glLockArraysEXT = (void (CALLBACK *)(GLint, GLsizei))
	  GET_GL_PROCADDRESS ("glLockArraysEXT");

	disp__glUnlockArraysEXT = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glUnlockArraysEXT");

	disp__glActiveTextureARB = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glActiveTextureARB");

	disp__glClientActiveTextureARB = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glClientActiveTextureARB");

	disp__glMultiTexCoord1dARB = (void (CALLBACK *)(GLenum, GLdouble))
	  GET_GL_PROCADDRESS ("glMultiTexCoord1dARB");

	disp__glMultiTexCoord1dvARB = (void (CALLBACK *)(GLenum, const GLdouble *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord1dvARB");

	disp__glMultiTexCoord1fARB = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glMultiTexCoord1fARB");

	disp__glMultiTexCoord1fvARB = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord1fvARB");

	disp__glMultiTexCoord1iARB = (void (CALLBACK *)(GLenum, GLint))
	  GET_GL_PROCADDRESS ("glMultiTexCoord1iARB");

	disp__glMultiTexCoord1ivARB = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord1ivARB");

	disp__glMultiTexCoord1sARB = (void (CALLBACK *)(GLenum, GLshort))
	  GET_GL_PROCADDRESS ("glMultiTexCoord1sARB");

	disp__glMultiTexCoord1svARB = (void (CALLBACK *)(GLenum, const GLshort *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord1svARB");

	disp__glMultiTexCoord2dARB = (void (CALLBACK *)(GLenum, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glMultiTexCoord2dARB");

	disp__glMultiTexCoord2dvARB = (void (CALLBACK *)(GLenum, const GLdouble *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord2dvARB");

	disp__glMultiTexCoord2fARB = (void (CALLBACK *)(GLenum, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glMultiTexCoord2fARB");

	disp__glMultiTexCoord2fvARB = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord2fvARB");

	disp__glMultiTexCoord2iARB = (void (CALLBACK *)(GLenum, GLint, GLint))
	  GET_GL_PROCADDRESS ("glMultiTexCoord2iARB");

	disp__glMultiTexCoord2ivARB = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord2ivARB");

	disp__glMultiTexCoord2sARB = (void (CALLBACK *)(GLenum, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glMultiTexCoord2sARB");

	disp__glMultiTexCoord2svARB = (void (CALLBACK *)(GLenum, const GLshort *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord2svARB");

	disp__glMultiTexCoord3dARB = (void (CALLBACK *)(GLenum, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glMultiTexCoord3dARB");

	disp__glMultiTexCoord3dvARB = (void (CALLBACK *)(GLenum, const GLdouble *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord3dvARB");

	disp__glMultiTexCoord3fARB = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glMultiTexCoord3fARB");

	disp__glMultiTexCoord3fvARB = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord3fvARB");

	disp__glMultiTexCoord3iARB = (void (CALLBACK *)(GLenum, GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glMultiTexCoord3iARB");

	disp__glMultiTexCoord3ivARB = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord3ivARB");

	disp__glMultiTexCoord3sARB = (void (CALLBACK *)(GLenum, GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glMultiTexCoord3sARB");

	disp__glMultiTexCoord3svARB = (void (CALLBACK *)(GLenum, const GLshort *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord3svARB");

	disp__glMultiTexCoord4dARB = (void (CALLBACK *)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glMultiTexCoord4dARB");

	disp__glMultiTexCoord4dvARB = (void (CALLBACK *)(GLenum, const GLdouble *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord4dvARB");

	disp__glMultiTexCoord4fARB = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glMultiTexCoord4fARB");

	disp__glMultiTexCoord4fvARB = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord4fvARB");

	disp__glMultiTexCoord4iARB = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glMultiTexCoord4iARB");

	disp__glMultiTexCoord4ivARB = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord4ivARB");

	disp__glMultiTexCoord4sARB = (void (CALLBACK *)(GLenum, GLshort, GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glMultiTexCoord4sARB");

	disp__glMultiTexCoord4svARB = (void (CALLBACK *)(GLenum, const GLshort *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord4svARB");

/* C2J Parser Version 2.0:  Java program parsed successfully. */ 