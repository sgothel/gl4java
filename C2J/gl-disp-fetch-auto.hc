/**
 * C2J Parser Version 3.0
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

	disp__glGetPointerv = (void (CALLBACK *)(GLenum, GLvoid **))
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

	disp__glTexImage3D = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
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

	disp__glActiveTexture = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glActiveTexture");

	disp__glClientActiveTexture = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glClientActiveTexture");

	disp__glCompressedTexImage1D = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glCompressedTexImage1D");

	disp__glCompressedTexImage2D = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glCompressedTexImage2D");

	disp__glCompressedTexImage3D = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glCompressedTexImage3D");

	disp__glCompressedTexSubImage1D = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glCompressedTexSubImage1D");

	disp__glCompressedTexSubImage2D = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glCompressedTexSubImage2D");

	disp__glCompressedTexSubImage3D = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glCompressedTexSubImage3D");

	disp__glGetCompressedTexImage = (void (CALLBACK *)(GLenum, GLint, GLvoid *))
	  GET_GL_PROCADDRESS ("glGetCompressedTexImage");

	disp__glMultiTexCoord1d = (void (CALLBACK *)(GLenum, GLdouble))
	  GET_GL_PROCADDRESS ("glMultiTexCoord1d");

	disp__glMultiTexCoord1dv = (void (CALLBACK *)(GLenum, const GLdouble *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord1dv");

	disp__glMultiTexCoord1f = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glMultiTexCoord1f");

	disp__glMultiTexCoord1fv = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord1fv");

	disp__glMultiTexCoord1i = (void (CALLBACK *)(GLenum, GLint))
	  GET_GL_PROCADDRESS ("glMultiTexCoord1i");

	disp__glMultiTexCoord1iv = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord1iv");

	disp__glMultiTexCoord1s = (void (CALLBACK *)(GLenum, GLshort))
	  GET_GL_PROCADDRESS ("glMultiTexCoord1s");

	disp__glMultiTexCoord1sv = (void (CALLBACK *)(GLenum, const GLshort *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord1sv");

	disp__glMultiTexCoord2d = (void (CALLBACK *)(GLenum, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glMultiTexCoord2d");

	disp__glMultiTexCoord2dv = (void (CALLBACK *)(GLenum, const GLdouble *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord2dv");

	disp__glMultiTexCoord2f = (void (CALLBACK *)(GLenum, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glMultiTexCoord2f");

	disp__glMultiTexCoord2fv = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord2fv");

	disp__glMultiTexCoord2i = (void (CALLBACK *)(GLenum, GLint, GLint))
	  GET_GL_PROCADDRESS ("glMultiTexCoord2i");

	disp__glMultiTexCoord2iv = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord2iv");

	disp__glMultiTexCoord2s = (void (CALLBACK *)(GLenum, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glMultiTexCoord2s");

	disp__glMultiTexCoord2sv = (void (CALLBACK *)(GLenum, const GLshort *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord2sv");

	disp__glMultiTexCoord3d = (void (CALLBACK *)(GLenum, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glMultiTexCoord3d");

	disp__glMultiTexCoord3dv = (void (CALLBACK *)(GLenum, const GLdouble *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord3dv");

	disp__glMultiTexCoord3f = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glMultiTexCoord3f");

	disp__glMultiTexCoord3fv = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord3fv");

	disp__glMultiTexCoord3i = (void (CALLBACK *)(GLenum, GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glMultiTexCoord3i");

	disp__glMultiTexCoord3iv = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord3iv");

	disp__glMultiTexCoord3s = (void (CALLBACK *)(GLenum, GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glMultiTexCoord3s");

	disp__glMultiTexCoord3sv = (void (CALLBACK *)(GLenum, const GLshort *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord3sv");

	disp__glMultiTexCoord4d = (void (CALLBACK *)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glMultiTexCoord4d");

	disp__glMultiTexCoord4dv = (void (CALLBACK *)(GLenum, const GLdouble *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord4dv");

	disp__glMultiTexCoord4f = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glMultiTexCoord4f");

	disp__glMultiTexCoord4fv = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord4fv");

	disp__glMultiTexCoord4i = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glMultiTexCoord4i");

	disp__glMultiTexCoord4iv = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord4iv");

	disp__glMultiTexCoord4s = (void (CALLBACK *)(GLenum, GLshort, GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glMultiTexCoord4s");

	disp__glMultiTexCoord4sv = (void (CALLBACK *)(GLenum, const GLshort *))
	  GET_GL_PROCADDRESS ("glMultiTexCoord4sv");

	disp__glLoadTransposeMatrixd = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glLoadTransposeMatrixd");

	disp__glLoadTransposeMatrixf = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glLoadTransposeMatrixf");

	disp__glMultTransposeMatrixd = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glMultTransposeMatrixd");

	disp__glMultTransposeMatrixf = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glMultTransposeMatrixf");

	disp__glSampleCoverage = (void (CALLBACK *)(GLclampf, GLboolean))
	  GET_GL_PROCADDRESS ("glSampleCoverage");

	disp__glSamplePass = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glSamplePass");

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

	disp__glGetPointervEXT = (void (CALLBACK *)(GLenum, GLvoid **))
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

	disp__glPointParameterfSGIS = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glPointParameterfSGIS");

	disp__glPointParameterfvSGIS = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glPointParameterfvSGIS");

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

	disp__glLoadTransposeMatrixfARB = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glLoadTransposeMatrixfARB");

	disp__glLoadTransposeMatrixdARB = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glLoadTransposeMatrixdARB");

	disp__glMultTransposeMatrixfARB = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glMultTransposeMatrixfARB");

	disp__glMultTransposeMatrixdARB = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glMultTransposeMatrixdARB");

	disp__glSampleCoverageARB = (void (CALLBACK *)(GLclampf, GLboolean))
	  GET_GL_PROCADDRESS ("glSampleCoverageARB");

	disp__glCompressedTexImage3DARB = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glCompressedTexImage3DARB");

	disp__glCompressedTexImage2DARB = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glCompressedTexImage2DARB");

	disp__glCompressedTexImage1DARB = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glCompressedTexImage1DARB");

	disp__glCompressedTexSubImage3DARB = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glCompressedTexSubImage3DARB");

	disp__glCompressedTexSubImage2DARB = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glCompressedTexSubImage2DARB");

	disp__glCompressedTexSubImage1DARB = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glCompressedTexSubImage1DARB");

	disp__glGetCompressedTexImageARB = (void (CALLBACK *)(GLenum, GLint, void *))
	  GET_GL_PROCADDRESS ("glGetCompressedTexImageARB");

	disp__glWeightbvARB = (void (CALLBACK *)(GLint, const GLbyte *))
	  GET_GL_PROCADDRESS ("glWeightbvARB");

	disp__glWeightsvARB = (void (CALLBACK *)(GLint, const GLshort *))
	  GET_GL_PROCADDRESS ("glWeightsvARB");

	disp__glWeightivARB = (void (CALLBACK *)(GLint, const GLint *))
	  GET_GL_PROCADDRESS ("glWeightivARB");

	disp__glWeightfvARB = (void (CALLBACK *)(GLint, const GLfloat *))
	  GET_GL_PROCADDRESS ("glWeightfvARB");

	disp__glWeightdvARB = (void (CALLBACK *)(GLint, const GLdouble *))
	  GET_GL_PROCADDRESS ("glWeightdvARB");

	disp__glWeightubvARB = (void (CALLBACK *)(GLint, const GLubyte *))
	  GET_GL_PROCADDRESS ("glWeightubvARB");

	disp__glWeightusvARB = (void (CALLBACK *)(GLint, const GLushort *))
	  GET_GL_PROCADDRESS ("glWeightusvARB");

	disp__glWeightuivARB = (void (CALLBACK *)(GLint, const GLuint *))
	  GET_GL_PROCADDRESS ("glWeightuivARB");

	disp__glWeightPointerARB = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glWeightPointerARB");

	disp__glVertexBlendARB = (void (CALLBACK *)(GLint))
	  GET_GL_PROCADDRESS ("glVertexBlendARB");

	disp__glCurrentPaletteMatrixARB = (void (CALLBACK *)(GLint))
	  GET_GL_PROCADDRESS ("glCurrentPaletteMatrixARB");

	disp__glMatrixIndexubvARB = (void (CALLBACK *)(GLint, const GLubyte *))
	  GET_GL_PROCADDRESS ("glMatrixIndexubvARB");

	disp__glMatrixIndexusvARB = (void (CALLBACK *)(GLint, const GLushort *))
	  GET_GL_PROCADDRESS ("glMatrixIndexusvARB");

	disp__glMatrixIndexuivARB = (void (CALLBACK *)(GLint, const GLuint *))
	  GET_GL_PROCADDRESS ("glMatrixIndexuivARB");

	disp__glMatrixIndexPointerARB = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glMatrixIndexPointerARB");

	disp__glGetTexFilterFuncSGIS = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetTexFilterFuncSGIS");

	disp__glTexFilterFuncSGIS = (void (CALLBACK *)(GLenum, GLenum, GLsizei, const GLfloat *))
	  GET_GL_PROCADDRESS ("glTexFilterFuncSGIS");

	disp__glTexSubImage1DEXT = (void (CALLBACK *)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glTexSubImage1DEXT");

	disp__glTexSubImage2DEXT = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glTexSubImage2DEXT");

	disp__glCopyTexImage1DEXT = (void (CALLBACK *)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint))
	  GET_GL_PROCADDRESS ("glCopyTexImage1DEXT");

	disp__glCopyTexImage2DEXT = (void (CALLBACK *)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint))
	  GET_GL_PROCADDRESS ("glCopyTexImage2DEXT");

	disp__glCopyTexSubImage1DEXT = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLsizei))
	  GET_GL_PROCADDRESS ("glCopyTexSubImage1DEXT");

	disp__glCopyTexSubImage2DEXT = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei))
	  GET_GL_PROCADDRESS ("glCopyTexSubImage2DEXT");

	disp__glGetHistogramEXT = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
	  GET_GL_PROCADDRESS ("glGetHistogramEXT");

	disp__glGetHistogramParameterfvEXT = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetHistogramParameterfvEXT");

	disp__glGetHistogramParameterivEXT = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetHistogramParameterivEXT");

	disp__glGetMinmaxEXT = (void (CALLBACK *)(GLenum, GLboolean, GLenum, GLenum, GLvoid *))
	  GET_GL_PROCADDRESS ("glGetMinmaxEXT");

	disp__glGetMinmaxParameterfvEXT = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetMinmaxParameterfvEXT");

	disp__glGetMinmaxParameterivEXT = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetMinmaxParameterivEXT");

	disp__glHistogramEXT = (void (CALLBACK *)(GLenum, GLsizei, GLenum, GLboolean))
	  GET_GL_PROCADDRESS ("glHistogramEXT");

	disp__glMinmaxEXT = (void (CALLBACK *)(GLenum, GLenum, GLboolean))
	  GET_GL_PROCADDRESS ("glMinmaxEXT");

	disp__glResetHistogramEXT = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glResetHistogramEXT");

	disp__glResetMinmaxEXT = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glResetMinmaxEXT");

	disp__glConvolutionFilter1DEXT = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glConvolutionFilter1DEXT");

	disp__glConvolutionFilter2DEXT = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glConvolutionFilter2DEXT");

	disp__glConvolutionParameterfEXT = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glConvolutionParameterfEXT");

	disp__glConvolutionParameterfvEXT = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glConvolutionParameterfvEXT");

	disp__glConvolutionParameteriEXT = (void (CALLBACK *)(GLenum, GLenum, GLint))
	  GET_GL_PROCADDRESS ("glConvolutionParameteriEXT");

	disp__glConvolutionParameterivEXT = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glConvolutionParameterivEXT");

	disp__glCopyConvolutionFilter1DEXT = (void (CALLBACK *)(GLenum, GLenum, GLint, GLint, GLsizei))
	  GET_GL_PROCADDRESS ("glCopyConvolutionFilter1DEXT");

	disp__glCopyConvolutionFilter2DEXT = (void (CALLBACK *)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei))
	  GET_GL_PROCADDRESS ("glCopyConvolutionFilter2DEXT");

	disp__glGetConvolutionFilterEXT = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
	  GET_GL_PROCADDRESS ("glGetConvolutionFilterEXT");

	disp__glGetConvolutionParameterfvEXT = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetConvolutionParameterfvEXT");

	disp__glGetConvolutionParameterivEXT = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetConvolutionParameterivEXT");

	disp__glGetSeparableFilterEXT = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *))
	  GET_GL_PROCADDRESS ("glGetSeparableFilterEXT");

	disp__glSeparableFilter2DEXT = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *))
	  GET_GL_PROCADDRESS ("glSeparableFilter2DEXT");

	disp__glColorTableSGI = (void (CALLBACK *)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glColorTableSGI");

	disp__glColorTableParameterfvSGI = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glColorTableParameterfvSGI");

	disp__glColorTableParameterivSGI = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glColorTableParameterivSGI");

	disp__glCopyColorTableSGI = (void (CALLBACK *)(GLenum, GLenum, GLint, GLint, GLsizei))
	  GET_GL_PROCADDRESS ("glCopyColorTableSGI");

	disp__glGetColorTableSGI = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLvoid *))
	  GET_GL_PROCADDRESS ("glGetColorTableSGI");

	disp__glGetColorTableParameterfvSGI = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetColorTableParameterfvSGI");

	disp__glGetColorTableParameterivSGI = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetColorTableParameterivSGI");

	disp__glPixelTexGenSGIX = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glPixelTexGenSGIX");

	disp__glPixelTexGenParameteriSGIS = (void (CALLBACK *)(GLenum, GLint))
	  GET_GL_PROCADDRESS ("glPixelTexGenParameteriSGIS");

	disp__glPixelTexGenParameterivSGIS = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glPixelTexGenParameterivSGIS");

	disp__glPixelTexGenParameterfSGIS = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glPixelTexGenParameterfSGIS");

	disp__glPixelTexGenParameterfvSGIS = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glPixelTexGenParameterfvSGIS");

	disp__glGetPixelTexGenParameterivSGIS = (void (CALLBACK *)(GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetPixelTexGenParameterivSGIS");

	disp__glGetPixelTexGenParameterfvSGIS = (void (CALLBACK *)(GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetPixelTexGenParameterfvSGIS");

	disp__glTexImage4DSGIS = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glTexImage4DSGIS");

	disp__glTexSubImage4DSGIS = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glTexSubImage4DSGIS");

	disp__glDetailTexFuncSGIS = (void (CALLBACK *)(GLenum, GLsizei, const GLfloat *))
	  GET_GL_PROCADDRESS ("glDetailTexFuncSGIS");

	disp__glGetDetailTexFuncSGIS = (void (CALLBACK *)(GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetDetailTexFuncSGIS");

	disp__glSharpenTexFuncSGIS = (void (CALLBACK *)(GLenum, GLsizei, const GLfloat *))
	  GET_GL_PROCADDRESS ("glSharpenTexFuncSGIS");

	disp__glGetSharpenTexFuncSGIS = (void (CALLBACK *)(GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetSharpenTexFuncSGIS");

	disp__glSampleMaskSGIS = (void (CALLBACK *)(GLclampf, GLboolean))
	  GET_GL_PROCADDRESS ("glSampleMaskSGIS");

	disp__glSamplePatternSGIS = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glSamplePatternSGIS");

	disp__glSpriteParameterfSGIX = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glSpriteParameterfSGIX");

	disp__glSpriteParameterfvSGIX = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glSpriteParameterfvSGIX");

	disp__glSpriteParameteriSGIX = (void (CALLBACK *)(GLenum, GLint))
	  GET_GL_PROCADDRESS ("glSpriteParameteriSGIX");

	disp__glSpriteParameterivSGIX = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glSpriteParameterivSGIX");

	disp__glPointParameterfARB = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glPointParameterfARB");

	disp__glPointParameterfvARB = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glPointParameterfvARB");

	disp__glGetInstrumentsSGIX = (GLint (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glGetInstrumentsSGIX");

	disp__glInstrumentsBufferSGIX = (void (CALLBACK *)(GLsizei, GLint *))
	  GET_GL_PROCADDRESS ("glInstrumentsBufferSGIX");

	disp__glPollInstrumentsSGIX = (GLint (CALLBACK *)(GLint *))
	  GET_GL_PROCADDRESS ("glPollInstrumentsSGIX");

	disp__glReadInstrumentsSGIX = (void (CALLBACK *)(GLint))
	  GET_GL_PROCADDRESS ("glReadInstrumentsSGIX");

	disp__glStartInstrumentsSGIX = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glStartInstrumentsSGIX");

	disp__glStopInstrumentsSGIX = (void (CALLBACK *)(GLint))
	  GET_GL_PROCADDRESS ("glStopInstrumentsSGIX");

	disp__glFrameZoomSGIX = (void (CALLBACK *)(GLint))
	  GET_GL_PROCADDRESS ("glFrameZoomSGIX");

	disp__glTagSampleBufferSGIX = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glTagSampleBufferSGIX");

	disp__glDeformationMap3dSGIX = (void (CALLBACK *)(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *))
	  GET_GL_PROCADDRESS ("glDeformationMap3dSGIX");

	disp__glDeformationMap3fSGIX = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *))
	  GET_GL_PROCADDRESS ("glDeformationMap3fSGIX");

	disp__glDeformSGIX = (void (CALLBACK *)(GLbitfield))
	  GET_GL_PROCADDRESS ("glDeformSGIX");

	disp__glLoadIdentityDeformationMapSGIX = (void (CALLBACK *)(GLbitfield))
	  GET_GL_PROCADDRESS ("glLoadIdentityDeformationMapSGIX");

	disp__glReferencePlaneSGIX = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glReferencePlaneSGIX");

	disp__glFlushRasterSGIX = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glFlushRasterSGIX");

	disp__glFogFuncSGIS = (void (CALLBACK *)(GLsizei, const GLfloat *))
	  GET_GL_PROCADDRESS ("glFogFuncSGIS");

	disp__glGetFogFuncSGIS = (void (CALLBACK *)(GLfloat *))
	  GET_GL_PROCADDRESS ("glGetFogFuncSGIS");

	disp__glImageTransformParameteriHP = (void (CALLBACK *)(GLenum, GLenum, GLint))
	  GET_GL_PROCADDRESS ("glImageTransformParameteriHP");

	disp__glImageTransformParameterfHP = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glImageTransformParameterfHP");

	disp__glImageTransformParameterivHP = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glImageTransformParameterivHP");

	disp__glImageTransformParameterfvHP = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glImageTransformParameterfvHP");

	disp__glGetImageTransformParameterivHP = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetImageTransformParameterivHP");

	disp__glGetImageTransformParameterfvHP = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetImageTransformParameterfvHP");

	disp__glCopyColorSubTableEXT = (void (CALLBACK *)(GLenum, GLsizei, GLint, GLint, GLsizei))
	  GET_GL_PROCADDRESS ("glCopyColorSubTableEXT");

	disp__glHintPGI = (void (CALLBACK *)(GLenum, GLint))
	  GET_GL_PROCADDRESS ("glHintPGI");

	disp__glGetListParameterfvSGIX = (void (CALLBACK *)(GLuint, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetListParameterfvSGIX");

	disp__glGetListParameterivSGIX = (void (CALLBACK *)(GLuint, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetListParameterivSGIX");

	disp__glListParameterfSGIX = (void (CALLBACK *)(GLuint, GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glListParameterfSGIX");

	disp__glListParameterfvSGIX = (void (CALLBACK *)(GLuint, GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glListParameterfvSGIX");

	disp__glListParameteriSGIX = (void (CALLBACK *)(GLuint, GLenum, GLint))
	  GET_GL_PROCADDRESS ("glListParameteriSGIX");

	disp__glListParameterivSGIX = (void (CALLBACK *)(GLuint, GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glListParameterivSGIX");

	disp__glIndexMaterialEXT = (void (CALLBACK *)(GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glIndexMaterialEXT");

	disp__glIndexFuncEXT = (void (CALLBACK *)(GLenum, GLclampf))
	  GET_GL_PROCADDRESS ("glIndexFuncEXT");

	disp__glCullParameterdvEXT = (void (CALLBACK *)(GLenum, GLdouble *))
	  GET_GL_PROCADDRESS ("glCullParameterdvEXT");

	disp__glCullParameterfvEXT = (void (CALLBACK *)(GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glCullParameterfvEXT");

	disp__glFragmentColorMaterialSGIX = (void (CALLBACK *)(GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glFragmentColorMaterialSGIX");

	disp__glFragmentLightfSGIX = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glFragmentLightfSGIX");

	disp__glFragmentLightfvSGIX = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glFragmentLightfvSGIX");

	disp__glFragmentLightiSGIX = (void (CALLBACK *)(GLenum, GLenum, GLint))
	  GET_GL_PROCADDRESS ("glFragmentLightiSGIX");

	disp__glFragmentLightivSGIX = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glFragmentLightivSGIX");

	disp__glFragmentLightModelfSGIX = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glFragmentLightModelfSGIX");

	disp__glFragmentLightModelfvSGIX = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glFragmentLightModelfvSGIX");

	disp__glFragmentLightModeliSGIX = (void (CALLBACK *)(GLenum, GLint))
	  GET_GL_PROCADDRESS ("glFragmentLightModeliSGIX");

	disp__glFragmentLightModelivSGIX = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glFragmentLightModelivSGIX");

	disp__glFragmentMaterialfSGIX = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glFragmentMaterialfSGIX");

	disp__glFragmentMaterialfvSGIX = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glFragmentMaterialfvSGIX");

	disp__glFragmentMaterialiSGIX = (void (CALLBACK *)(GLenum, GLenum, GLint))
	  GET_GL_PROCADDRESS ("glFragmentMaterialiSGIX");

	disp__glFragmentMaterialivSGIX = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glFragmentMaterialivSGIX");

	disp__glGetFragmentLightfvSGIX = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetFragmentLightfvSGIX");

	disp__glGetFragmentLightivSGIX = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetFragmentLightivSGIX");

	disp__glGetFragmentMaterialfvSGIX = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetFragmentMaterialfvSGIX");

	disp__glGetFragmentMaterialivSGIX = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetFragmentMaterialivSGIX");

	disp__glLightEnviSGIX = (void (CALLBACK *)(GLenum, GLint))
	  GET_GL_PROCADDRESS ("glLightEnviSGIX");

	disp__glDrawRangeElementsEXT = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glDrawRangeElementsEXT");

	disp__glApplyTextureEXT = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glApplyTextureEXT");

	disp__glTextureLightEXT = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glTextureLightEXT");

	disp__glTextureMaterialEXT = (void (CALLBACK *)(GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glTextureMaterialEXT");

	disp__glAsyncMarkerSGIX = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glAsyncMarkerSGIX");

	disp__glFinishAsyncSGIX = (GLint (CALLBACK *)(GLuint *))
	  GET_GL_PROCADDRESS ("glFinishAsyncSGIX");

	disp__glPollAsyncSGIX = (GLint (CALLBACK *)(GLuint *))
	  GET_GL_PROCADDRESS ("glPollAsyncSGIX");

	disp__glGenAsyncMarkersSGIX = (GLuint (CALLBACK *)(GLsizei))
	  GET_GL_PROCADDRESS ("glGenAsyncMarkersSGIX");

	disp__glDeleteAsyncMarkersSGIX = (void (CALLBACK *)(GLuint, GLsizei))
	  GET_GL_PROCADDRESS ("glDeleteAsyncMarkersSGIX");

	disp__glIsAsyncMarkerSGIX = (GLboolean (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glIsAsyncMarkerSGIX");

	disp__glVertexPointervINTEL = (void (CALLBACK *)(GLint, GLenum, const GLvoid **))
	  GET_GL_PROCADDRESS ("glVertexPointervINTEL");

	disp__glNormalPointervINTEL = (void (CALLBACK *)(GLenum, const GLvoid **))
	  GET_GL_PROCADDRESS ("glNormalPointervINTEL");

	disp__glColorPointervINTEL = (void (CALLBACK *)(GLint, GLenum, const GLvoid **))
	  GET_GL_PROCADDRESS ("glColorPointervINTEL");

	disp__glTexCoordPointervINTEL = (void (CALLBACK *)(GLint, GLenum, const GLvoid **))
	  GET_GL_PROCADDRESS ("glTexCoordPointervINTEL");

	disp__glPixelTransformParameteriEXT = (void (CALLBACK *)(GLenum, GLenum, GLint))
	  GET_GL_PROCADDRESS ("glPixelTransformParameteriEXT");

	disp__glPixelTransformParameterfEXT = (void (CALLBACK *)(GLenum, GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glPixelTransformParameterfEXT");

	disp__glPixelTransformParameterivEXT = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glPixelTransformParameterivEXT");

	disp__glPixelTransformParameterfvEXT = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glPixelTransformParameterfvEXT");

	disp__glSecondaryColor3bEXT = (void (CALLBACK *)(GLbyte, GLbyte, GLbyte))
	  GET_GL_PROCADDRESS ("glSecondaryColor3bEXT");

	disp__glSecondaryColor3bvEXT = (void (CALLBACK *)(const GLbyte *))
	  GET_GL_PROCADDRESS ("glSecondaryColor3bvEXT");

	disp__glSecondaryColor3dEXT = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glSecondaryColor3dEXT");

	disp__glSecondaryColor3dvEXT = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glSecondaryColor3dvEXT");

	disp__glSecondaryColor3fEXT = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glSecondaryColor3fEXT");

	disp__glSecondaryColor3fvEXT = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glSecondaryColor3fvEXT");

	disp__glSecondaryColor3iEXT = (void (CALLBACK *)(GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glSecondaryColor3iEXT");

	disp__glSecondaryColor3ivEXT = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glSecondaryColor3ivEXT");

	disp__glSecondaryColor3sEXT = (void (CALLBACK *)(GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glSecondaryColor3sEXT");

	disp__glSecondaryColor3svEXT = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glSecondaryColor3svEXT");

	disp__glSecondaryColor3ubEXT = (void (CALLBACK *)(GLubyte, GLubyte, GLubyte))
	  GET_GL_PROCADDRESS ("glSecondaryColor3ubEXT");

	disp__glSecondaryColor3ubvEXT = (void (CALLBACK *)(const GLubyte *))
	  GET_GL_PROCADDRESS ("glSecondaryColor3ubvEXT");

	disp__glSecondaryColor3uiEXT = (void (CALLBACK *)(GLuint, GLuint, GLuint))
	  GET_GL_PROCADDRESS ("glSecondaryColor3uiEXT");

	disp__glSecondaryColor3uivEXT = (void (CALLBACK *)(const GLuint *))
	  GET_GL_PROCADDRESS ("glSecondaryColor3uivEXT");

	disp__glSecondaryColor3usEXT = (void (CALLBACK *)(GLushort, GLushort, GLushort))
	  GET_GL_PROCADDRESS ("glSecondaryColor3usEXT");

	disp__glSecondaryColor3usvEXT = (void (CALLBACK *)(const GLushort *))
	  GET_GL_PROCADDRESS ("glSecondaryColor3usvEXT");

	disp__glSecondaryColorPointerEXT = (void (CALLBACK *)(GLint, GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glSecondaryColorPointerEXT");

	disp__glTextureNormalEXT = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glTextureNormalEXT");

	disp__glMultiDrawArraysEXT = (void (CALLBACK *)(GLenum, GLint *, GLsizei *, GLsizei))
	  GET_GL_PROCADDRESS ("glMultiDrawArraysEXT");

	disp__glMultiDrawElementsEXT = (void (CALLBACK *)(GLenum, const GLsizei *, GLenum, const GLvoid **, GLsizei))
	  GET_GL_PROCADDRESS ("glMultiDrawElementsEXT");

	disp__glFogCoordfEXT = (void (CALLBACK *)(GLfloat))
	  GET_GL_PROCADDRESS ("glFogCoordfEXT");

	disp__glFogCoordfvEXT = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glFogCoordfvEXT");

	disp__glFogCoorddEXT = (void (CALLBACK *)(GLdouble))
	  GET_GL_PROCADDRESS ("glFogCoorddEXT");

	disp__glFogCoorddvEXT = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glFogCoorddvEXT");

	disp__glFogCoordPointerEXT = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glFogCoordPointerEXT");

	disp__glTangent3bEXT = (void (CALLBACK *)(GLbyte, GLbyte, GLbyte))
	  GET_GL_PROCADDRESS ("glTangent3bEXT");

	disp__glTangent3bvEXT = (void (CALLBACK *)(const GLbyte *))
	  GET_GL_PROCADDRESS ("glTangent3bvEXT");

	disp__glTangent3dEXT = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glTangent3dEXT");

	disp__glTangent3dvEXT = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glTangent3dvEXT");

	disp__glTangent3fEXT = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glTangent3fEXT");

	disp__glTangent3fvEXT = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glTangent3fvEXT");

	disp__glTangent3iEXT = (void (CALLBACK *)(GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glTangent3iEXT");

	disp__glTangent3ivEXT = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glTangent3ivEXT");

	disp__glTangent3sEXT = (void (CALLBACK *)(GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glTangent3sEXT");

	disp__glTangent3svEXT = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glTangent3svEXT");

	disp__glBinormal3bEXT = (void (CALLBACK *)(GLbyte, GLbyte, GLbyte))
	  GET_GL_PROCADDRESS ("glBinormal3bEXT");

	disp__glBinormal3bvEXT = (void (CALLBACK *)(const GLbyte *))
	  GET_GL_PROCADDRESS ("glBinormal3bvEXT");

	disp__glBinormal3dEXT = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glBinormal3dEXT");

	disp__glBinormal3dvEXT = (void (CALLBACK *)(const GLdouble *))
	  GET_GL_PROCADDRESS ("glBinormal3dvEXT");

	disp__glBinormal3fEXT = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glBinormal3fEXT");

	disp__glBinormal3fvEXT = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glBinormal3fvEXT");

	disp__glBinormal3iEXT = (void (CALLBACK *)(GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glBinormal3iEXT");

	disp__glBinormal3ivEXT = (void (CALLBACK *)(const GLint *))
	  GET_GL_PROCADDRESS ("glBinormal3ivEXT");

	disp__glBinormal3sEXT = (void (CALLBACK *)(GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glBinormal3sEXT");

	disp__glBinormal3svEXT = (void (CALLBACK *)(const GLshort *))
	  GET_GL_PROCADDRESS ("glBinormal3svEXT");

	disp__glTangentPointerEXT = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glTangentPointerEXT");

	disp__glBinormalPointerEXT = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glBinormalPointerEXT");

	disp__glFinishTextureSUNX = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glFinishTextureSUNX");

	disp__glGlobalAlphaFactorbSUN = (void (CALLBACK *)(GLbyte))
	  GET_GL_PROCADDRESS ("glGlobalAlphaFactorbSUN");

	disp__glGlobalAlphaFactorsSUN = (void (CALLBACK *)(GLshort))
	  GET_GL_PROCADDRESS ("glGlobalAlphaFactorsSUN");

	disp__glGlobalAlphaFactoriSUN = (void (CALLBACK *)(GLint))
	  GET_GL_PROCADDRESS ("glGlobalAlphaFactoriSUN");

	disp__glGlobalAlphaFactorfSUN = (void (CALLBACK *)(GLfloat))
	  GET_GL_PROCADDRESS ("glGlobalAlphaFactorfSUN");

	disp__glGlobalAlphaFactordSUN = (void (CALLBACK *)(GLdouble))
	  GET_GL_PROCADDRESS ("glGlobalAlphaFactordSUN");

	disp__glGlobalAlphaFactorubSUN = (void (CALLBACK *)(GLubyte))
	  GET_GL_PROCADDRESS ("glGlobalAlphaFactorubSUN");

	disp__glGlobalAlphaFactorusSUN = (void (CALLBACK *)(GLushort))
	  GET_GL_PROCADDRESS ("glGlobalAlphaFactorusSUN");

	disp__glGlobalAlphaFactoruiSUN = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glGlobalAlphaFactoruiSUN");

	disp__glReplacementCodeuiSUN = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiSUN");

	disp__glReplacementCodeusSUN = (void (CALLBACK *)(GLushort))
	  GET_GL_PROCADDRESS ("glReplacementCodeusSUN");

	disp__glReplacementCodeubSUN = (void (CALLBACK *)(GLubyte))
	  GET_GL_PROCADDRESS ("glReplacementCodeubSUN");

	disp__glReplacementCodeuivSUN = (void (CALLBACK *)(const GLuint *))
	  GET_GL_PROCADDRESS ("glReplacementCodeuivSUN");

	disp__glReplacementCodeusvSUN = (void (CALLBACK *)(const GLushort *))
	  GET_GL_PROCADDRESS ("glReplacementCodeusvSUN");

	disp__glReplacementCodeubvSUN = (void (CALLBACK *)(const GLubyte *))
	  GET_GL_PROCADDRESS ("glReplacementCodeubvSUN");

	disp__glReplacementCodePointerSUN = (void (CALLBACK *)(GLenum, GLsizei, const GLvoid **))
	  GET_GL_PROCADDRESS ("glReplacementCodePointerSUN");

	disp__glColor4ubVertex2fSUN = (void (CALLBACK *)(GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glColor4ubVertex2fSUN");

	disp__glColor4ubVertex2fvSUN = (void (CALLBACK *)(const GLubyte *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glColor4ubVertex2fvSUN");

	disp__glColor4ubVertex3fSUN = (void (CALLBACK *)(GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glColor4ubVertex3fSUN");

	disp__glColor4ubVertex3fvSUN = (void (CALLBACK *)(const GLubyte *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glColor4ubVertex3fvSUN");

	disp__glColor3fVertex3fSUN = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glColor3fVertex3fSUN");

	disp__glColor3fVertex3fvSUN = (void (CALLBACK *)(const GLfloat *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glColor3fVertex3fvSUN");

	disp__glNormal3fVertex3fSUN = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glNormal3fVertex3fSUN");

	disp__glNormal3fVertex3fvSUN = (void (CALLBACK *)(const GLfloat *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glNormal3fVertex3fvSUN");

	disp__glColor4fNormal3fVertex3fSUN = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glColor4fNormal3fVertex3fSUN");

	disp__glColor4fNormal3fVertex3fvSUN = (void (CALLBACK *)(const GLfloat *, const GLfloat *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glColor4fNormal3fVertex3fvSUN");

	disp__glTexCoord2fVertex3fSUN = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glTexCoord2fVertex3fSUN");

	disp__glTexCoord2fVertex3fvSUN = (void (CALLBACK *)(const GLfloat *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glTexCoord2fVertex3fvSUN");

	disp__glTexCoord4fVertex4fSUN = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glTexCoord4fVertex4fSUN");

	disp__glTexCoord4fVertex4fvSUN = (void (CALLBACK *)(const GLfloat *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glTexCoord4fVertex4fvSUN");

	disp__glTexCoord2fColor4ubVertex3fSUN = (void (CALLBACK *)(GLfloat, GLfloat, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glTexCoord2fColor4ubVertex3fSUN");

	disp__glTexCoord2fColor4ubVertex3fvSUN = (void (CALLBACK *)(const GLfloat *, const GLubyte *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glTexCoord2fColor4ubVertex3fvSUN");

	disp__glTexCoord2fColor3fVertex3fSUN = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glTexCoord2fColor3fVertex3fSUN");

	disp__glTexCoord2fColor3fVertex3fvSUN = (void (CALLBACK *)(const GLfloat *, const GLfloat *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glTexCoord2fColor3fVertex3fvSUN");

	disp__glTexCoord2fNormal3fVertex3fSUN = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glTexCoord2fNormal3fVertex3fSUN");

	disp__glTexCoord2fNormal3fVertex3fvSUN = (void (CALLBACK *)(const GLfloat *, const GLfloat *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glTexCoord2fNormal3fVertex3fvSUN");

	disp__glTexCoord2fColor4fNormal3fVertex3fSUN = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glTexCoord2fColor4fNormal3fVertex3fSUN");

	disp__glTexCoord2fColor4fNormal3fVertex3fvSUN = (void (CALLBACK *)(const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glTexCoord2fColor4fNormal3fVertex3fvSUN");

	disp__glTexCoord4fColor4fNormal3fVertex4fSUN = (void (CALLBACK *)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glTexCoord4fColor4fNormal3fVertex4fSUN");

	disp__glTexCoord4fColor4fNormal3fVertex4fvSUN = (void (CALLBACK *)(const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glTexCoord4fColor4fNormal3fVertex4fvSUN");

	disp__glReplacementCodeuiVertex3fSUN = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiVertex3fSUN");

	disp__glReplacementCodeuiVertex3fvSUN = (void (CALLBACK *)(const GLenum *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiVertex3fvSUN");

	disp__glReplacementCodeuiColor4ubVertex3fSUN = (void (CALLBACK *)(GLenum, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiColor4ubVertex3fSUN");

	disp__glReplacementCodeuiColor4ubVertex3fvSUN = (void (CALLBACK *)(const GLenum *, const GLubyte *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiColor4ubVertex3fvSUN");

	disp__glReplacementCodeuiColor3fVertex3fSUN = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiColor3fVertex3fSUN");

	disp__glReplacementCodeuiColor3fVertex3fvSUN = (void (CALLBACK *)(const GLenum *, const GLfloat *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiColor3fVertex3fvSUN");

	disp__glReplacementCodeuiNormal3fVertex3fSUN = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiNormal3fVertex3fSUN");

	disp__glReplacementCodeuiNormal3fVertex3fvSUN = (void (CALLBACK *)(const GLenum *, const GLfloat *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiNormal3fVertex3fvSUN");

	disp__glReplacementCodeuiColor4fNormal3fVertex3fSUN = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiColor4fNormal3fVertex3fSUN");

	disp__glReplacementCodeuiColor4fNormal3fVertex3fvSUN = (void (CALLBACK *)(const GLenum *, const GLfloat *, const GLfloat *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiColor4fNormal3fVertex3fvSUN");

	disp__glReplacementCodeuiTexCoord2fVertex3fSUN = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiTexCoord2fVertex3fSUN");

	disp__glReplacementCodeuiTexCoord2fVertex3fvSUN = (void (CALLBACK *)(const GLenum *, const GLfloat *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiTexCoord2fVertex3fvSUN");

	disp__glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");

	disp__glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = (void (CALLBACK *)(const GLenum *, const GLfloat *, const GLfloat *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");

	disp__glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");

	disp__glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = (void (CALLBACK *)(const GLenum *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *))
	  GET_GL_PROCADDRESS ("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");

	disp__glBlendFuncSeparateEXT = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glBlendFuncSeparateEXT");

	disp__glBlendFuncSeparateINGR = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glBlendFuncSeparateINGR");

	disp__glVertexWeightfEXT = (void (CALLBACK *)(GLfloat))
	  GET_GL_PROCADDRESS ("glVertexWeightfEXT");

	disp__glVertexWeightfvEXT = (void (CALLBACK *)(const GLfloat *))
	  GET_GL_PROCADDRESS ("glVertexWeightfvEXT");

	disp__glVertexWeightPointerEXT = (void (CALLBACK *)(GLsizei, GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glVertexWeightPointerEXT");

	disp__glFlushVertexArrayRangeNV = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glFlushVertexArrayRangeNV");

	disp__glVertexArrayRangeNV = (void (CALLBACK *)(GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glVertexArrayRangeNV");

	disp__glCombinerParameterfvNV = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glCombinerParameterfvNV");

	disp__glCombinerParameterfNV = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glCombinerParameterfNV");

	disp__glCombinerParameterivNV = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glCombinerParameterivNV");

	disp__glCombinerParameteriNV = (void (CALLBACK *)(GLenum, GLint))
	  GET_GL_PROCADDRESS ("glCombinerParameteriNV");

	disp__glCombinerInputNV = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glCombinerInputNV");

	disp__glCombinerOutputNV = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean))
	  GET_GL_PROCADDRESS ("glCombinerOutputNV");

	disp__glFinalCombinerInputNV = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glFinalCombinerInputNV");

	disp__glGetCombinerInputParameterfvNV = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetCombinerInputParameterfvNV");

	disp__glGetCombinerInputParameterivNV = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetCombinerInputParameterivNV");

	disp__glGetCombinerOutputParameterfvNV = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetCombinerOutputParameterfvNV");

	disp__glGetCombinerOutputParameterivNV = (void (CALLBACK *)(GLenum, GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetCombinerOutputParameterivNV");

	disp__glGetFinalCombinerInputParameterfvNV = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetFinalCombinerInputParameterfvNV");

	disp__glGetFinalCombinerInputParameterivNV = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetFinalCombinerInputParameterivNV");

	disp__glMultiModeDrawArraysIBM = (void (CALLBACK *)(GLenum, const GLint *, const GLsizei *, GLsizei, GLint))
	  GET_GL_PROCADDRESS ("glMultiModeDrawArraysIBM");

	disp__glMultiModeDrawElementsIBM = (void (CALLBACK *)(const GLenum *, const GLsizei *, GLenum, const GLvoid **, GLsizei, GLint))
	  GET_GL_PROCADDRESS ("glMultiModeDrawElementsIBM");

	disp__glColorPointerListIBM = (void (CALLBACK *)(GLint, GLenum, GLint, const GLvoid **, GLint))
	  GET_GL_PROCADDRESS ("glColorPointerListIBM");

	disp__glSecondaryColorPointerListIBM = (void (CALLBACK *)(GLint, GLenum, GLint, const GLvoid **, GLint))
	  GET_GL_PROCADDRESS ("glSecondaryColorPointerListIBM");

	disp__glEdgeFlagPointerListIBM = (void (CALLBACK *)(GLint, const GLboolean **, GLint))
	  GET_GL_PROCADDRESS ("glEdgeFlagPointerListIBM");

	disp__glFogCoordPointerListIBM = (void (CALLBACK *)(GLenum, GLint, const GLvoid **, GLint))
	  GET_GL_PROCADDRESS ("glFogCoordPointerListIBM");

	disp__glIndexPointerListIBM = (void (CALLBACK *)(GLenum, GLint, const GLvoid **, GLint))
	  GET_GL_PROCADDRESS ("glIndexPointerListIBM");

	disp__glNormalPointerListIBM = (void (CALLBACK *)(GLenum, GLint, const GLvoid **, GLint))
	  GET_GL_PROCADDRESS ("glNormalPointerListIBM");

	disp__glTexCoordPointerListIBM = (void (CALLBACK *)(GLint, GLenum, GLint, const GLvoid **, GLint))
	  GET_GL_PROCADDRESS ("glTexCoordPointerListIBM");

	disp__glVertexPointerListIBM = (void (CALLBACK *)(GLint, GLenum, GLint, const GLvoid **, GLint))
	  GET_GL_PROCADDRESS ("glVertexPointerListIBM");

	disp__glTbufferMask3DFX = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glTbufferMask3DFX");

	disp__glSampleMaskEXT = (void (CALLBACK *)(GLclampf, GLboolean))
	  GET_GL_PROCADDRESS ("glSampleMaskEXT");

	disp__glSamplePatternEXT = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glSamplePatternEXT");

	disp__glTextureColorMaskSGIS = (void (CALLBACK *)(GLboolean, GLboolean, GLboolean, GLboolean))
	  GET_GL_PROCADDRESS ("glTextureColorMaskSGIS");

	disp__glIglooInterfaceSGIX = (void (CALLBACK *)(GLenum, const GLvoid *))
	  GET_GL_PROCADDRESS ("glIglooInterfaceSGIX");

	disp__glGenFencesNV = (void (CALLBACK *)(GLsizei, GLuint *))
	  GET_GL_PROCADDRESS ("glGenFencesNV");

	disp__glDeleteFencesNV = (void (CALLBACK *)(GLsizei, const GLuint *))
	  GET_GL_PROCADDRESS ("glDeleteFencesNV");

	disp__glSetFenceNV = (void (CALLBACK *)(GLuint, GLenum))
	  GET_GL_PROCADDRESS ("glSetFenceNV");

	disp__glTestFenceNV = (GLboolean (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glTestFenceNV");

	disp__glFinishFenceNV = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glFinishFenceNV");

	disp__glIsFenceNV = (GLboolean (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glIsFenceNV");

	disp__glGetFenceivNV = (void (CALLBACK *)(GLuint, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetFenceivNV");

	disp__glMapControlPointsNV = (void (CALLBACK *)(GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, const GLvoid *))
	  GET_GL_PROCADDRESS ("glMapControlPointsNV");

	disp__glMapParameterivNV = (void (CALLBACK *)(GLenum, GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glMapParameterivNV");

	disp__glMapParameterfvNV = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glMapParameterfvNV");

	disp__glGetMapControlPointsNV = (void (CALLBACK *)(GLenum, GLuint, GLenum, GLsizei, GLsizei, GLboolean, GLvoid *))
	  GET_GL_PROCADDRESS ("glGetMapControlPointsNV");

	disp__glGetMapParameterivNV = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetMapParameterivNV");

	disp__glGetMapParameterfvNV = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetMapParameterfvNV");

	disp__glGetMapAttribParameterivNV = (void (CALLBACK *)(GLenum, GLuint, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetMapAttribParameterivNV");

	disp__glGetMapAttribParameterfvNV = (void (CALLBACK *)(GLenum, GLuint, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetMapAttribParameterfvNV");

	disp__glEvalMapsNV = (void (CALLBACK *)(GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glEvalMapsNV");

	disp__glCombinerStageParameterfvNV = (void (CALLBACK *)(GLenum, GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glCombinerStageParameterfvNV");

	disp__glGetCombinerStageParameterfvNV = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetCombinerStageParameterfvNV");

	disp__glBindProgramNV = (void (CALLBACK *)(GLenum, GLuint))
	  GET_GL_PROCADDRESS ("glBindProgramNV");

	disp__glDeleteProgramsNV = (void (CALLBACK *)(GLsizei, const GLuint *))
	  GET_GL_PROCADDRESS ("glDeleteProgramsNV");

	disp__glExecuteProgramNV = (void (CALLBACK *)(GLenum, GLuint, const GLfloat *))
	  GET_GL_PROCADDRESS ("glExecuteProgramNV");

	disp__glGenProgramsNV = (void (CALLBACK *)(GLsizei, GLuint *))
	  GET_GL_PROCADDRESS ("glGenProgramsNV");

	disp__glAreProgramsResidentNV = (GLboolean (CALLBACK *)(GLsizei, const GLuint *, GLboolean *))
	  GET_GL_PROCADDRESS ("glAreProgramsResidentNV");

	disp__glRequestResidentProgramsNV = (void (CALLBACK *)(GLsizei, const GLuint *))
	  GET_GL_PROCADDRESS ("glRequestResidentProgramsNV");

	disp__glGetProgramParameterfvNV = (void (CALLBACK *)(GLenum, GLuint, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetProgramParameterfvNV");

	disp__glGetProgramParameterdvNV = (void (CALLBACK *)(GLenum, GLuint, GLenum, GLdouble *))
	  GET_GL_PROCADDRESS ("glGetProgramParameterdvNV");

	disp__glGetProgramivNV = (void (CALLBACK *)(GLuint, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetProgramivNV");

	disp__glGetProgramStringNV = (void (CALLBACK *)(GLuint, GLenum, GLubyte *))
	  GET_GL_PROCADDRESS ("glGetProgramStringNV");

	disp__glGetTrackMatrixivNV = (void (CALLBACK *)(GLenum, GLuint, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetTrackMatrixivNV");

	disp__glGetVertexAttribdvNV = (void (CALLBACK *)(GLuint, GLenum, GLdouble *))
	  GET_GL_PROCADDRESS ("glGetVertexAttribdvNV");

	disp__glGetVertexAttribfvNV = (void (CALLBACK *)(GLuint, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetVertexAttribfvNV");

	disp__glGetVertexAttribivNV = (void (CALLBACK *)(GLuint, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetVertexAttribivNV");

	disp__glGetVertexAttribPointervNV = (void (CALLBACK *)(GLuint, GLenum, GLvoid **))
	  GET_GL_PROCADDRESS ("glGetVertexAttribPointervNV");

	disp__glIsProgramNV = (GLboolean (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glIsProgramNV");

	disp__glLoadProgramNV = (void (CALLBACK *)(GLenum, GLuint, GLsizei, const GLubyte *))
	  GET_GL_PROCADDRESS ("glLoadProgramNV");

	disp__glProgramParameter4fNV = (void (CALLBACK *)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glProgramParameter4fNV");

	disp__glProgramParameter4dNV = (void (CALLBACK *)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glProgramParameter4dNV");

	disp__glProgramParameter4dvNV = (void (CALLBACK *)(GLenum, GLuint, const GLdouble *))
	  GET_GL_PROCADDRESS ("glProgramParameter4dvNV");

	disp__glProgramParameter4fvNV = (void (CALLBACK *)(GLenum, GLuint, const GLfloat *))
	  GET_GL_PROCADDRESS ("glProgramParameter4fvNV");

	disp__glProgramParameters4dvNV = (void (CALLBACK *)(GLenum, GLuint, GLuint, const GLdouble *))
	  GET_GL_PROCADDRESS ("glProgramParameters4dvNV");

	disp__glProgramParameters4fvNV = (void (CALLBACK *)(GLenum, GLuint, GLuint, const GLfloat *))
	  GET_GL_PROCADDRESS ("glProgramParameters4fvNV");

	disp__glTrackMatrixNV = (void (CALLBACK *)(GLenum, GLuint, GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glTrackMatrixNV");

	disp__glVertexAttribPointerNV = (void (CALLBACK *)(GLuint, GLint, GLenum, GLsizei, const GLvoid *))
	  GET_GL_PROCADDRESS ("glVertexAttribPointerNV");

	disp__glVertexAttrib1sNV = (void (CALLBACK *)(GLuint, GLshort))
	  GET_GL_PROCADDRESS ("glVertexAttrib1sNV");

	disp__glVertexAttrib1fNV = (void (CALLBACK *)(GLuint, GLfloat))
	  GET_GL_PROCADDRESS ("glVertexAttrib1fNV");

	disp__glVertexAttrib1dNV = (void (CALLBACK *)(GLuint, GLdouble))
	  GET_GL_PROCADDRESS ("glVertexAttrib1dNV");

	disp__glVertexAttrib2sNV = (void (CALLBACK *)(GLuint, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glVertexAttrib2sNV");

	disp__glVertexAttrib2fNV = (void (CALLBACK *)(GLuint, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glVertexAttrib2fNV");

	disp__glVertexAttrib2dNV = (void (CALLBACK *)(GLuint, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glVertexAttrib2dNV");

	disp__glVertexAttrib3sNV = (void (CALLBACK *)(GLuint, GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glVertexAttrib3sNV");

	disp__glVertexAttrib3fNV = (void (CALLBACK *)(GLuint, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glVertexAttrib3fNV");

	disp__glVertexAttrib3dNV = (void (CALLBACK *)(GLuint, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glVertexAttrib3dNV");

	disp__glVertexAttrib4sNV = (void (CALLBACK *)(GLuint, GLshort, GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glVertexAttrib4sNV");

	disp__glVertexAttrib4fNV = (void (CALLBACK *)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glVertexAttrib4fNV");

	disp__glVertexAttrib4dNV = (void (CALLBACK *)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glVertexAttrib4dNV");

	disp__glVertexAttrib4ubNV = (void (CALLBACK *)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte))
	  GET_GL_PROCADDRESS ("glVertexAttrib4ubNV");

	disp__glVertexAttrib1svNV = (void (CALLBACK *)(GLuint, const GLshort *))
	  GET_GL_PROCADDRESS ("glVertexAttrib1svNV");

	disp__glVertexAttrib1fvNV = (void (CALLBACK *)(GLuint, const GLfloat *))
	  GET_GL_PROCADDRESS ("glVertexAttrib1fvNV");

	disp__glVertexAttrib1dvNV = (void (CALLBACK *)(GLuint, const GLdouble *))
	  GET_GL_PROCADDRESS ("glVertexAttrib1dvNV");

	disp__glVertexAttrib2svNV = (void (CALLBACK *)(GLuint, const GLshort *))
	  GET_GL_PROCADDRESS ("glVertexAttrib2svNV");

	disp__glVertexAttrib2fvNV = (void (CALLBACK *)(GLuint, const GLfloat *))
	  GET_GL_PROCADDRESS ("glVertexAttrib2fvNV");

	disp__glVertexAttrib2dvNV = (void (CALLBACK *)(GLuint, const GLdouble *))
	  GET_GL_PROCADDRESS ("glVertexAttrib2dvNV");

	disp__glVertexAttrib3svNV = (void (CALLBACK *)(GLuint, const GLshort *))
	  GET_GL_PROCADDRESS ("glVertexAttrib3svNV");

	disp__glVertexAttrib3fvNV = (void (CALLBACK *)(GLuint, const GLfloat *))
	  GET_GL_PROCADDRESS ("glVertexAttrib3fvNV");

	disp__glVertexAttrib3dvNV = (void (CALLBACK *)(GLuint, const GLdouble *))
	  GET_GL_PROCADDRESS ("glVertexAttrib3dvNV");

	disp__glVertexAttrib4svNV = (void (CALLBACK *)(GLuint, const GLshort *))
	  GET_GL_PROCADDRESS ("glVertexAttrib4svNV");

	disp__glVertexAttrib4fvNV = (void (CALLBACK *)(GLuint, const GLfloat *))
	  GET_GL_PROCADDRESS ("glVertexAttrib4fvNV");

	disp__glVertexAttrib4dvNV = (void (CALLBACK *)(GLuint, const GLdouble *))
	  GET_GL_PROCADDRESS ("glVertexAttrib4dvNV");

	disp__glVertexAttrib4ubvNV = (void (CALLBACK *)(GLuint, const GLubyte *))
	  GET_GL_PROCADDRESS ("glVertexAttrib4ubvNV");

	disp__glVertexAttribs1svNV = (void (CALLBACK *)(GLuint, GLsizei, const GLshort *))
	  GET_GL_PROCADDRESS ("glVertexAttribs1svNV");

	disp__glVertexAttribs1fvNV = (void (CALLBACK *)(GLuint, GLsizei, const GLfloat *))
	  GET_GL_PROCADDRESS ("glVertexAttribs1fvNV");

	disp__glVertexAttribs1dvNV = (void (CALLBACK *)(GLuint, GLsizei, const GLdouble *))
	  GET_GL_PROCADDRESS ("glVertexAttribs1dvNV");

	disp__glVertexAttribs2svNV = (void (CALLBACK *)(GLuint, GLsizei, const GLshort *))
	  GET_GL_PROCADDRESS ("glVertexAttribs2svNV");

	disp__glVertexAttribs2fvNV = (void (CALLBACK *)(GLuint, GLsizei, const GLfloat *))
	  GET_GL_PROCADDRESS ("glVertexAttribs2fvNV");

	disp__glVertexAttribs2dvNV = (void (CALLBACK *)(GLuint, GLsizei, const GLdouble *))
	  GET_GL_PROCADDRESS ("glVertexAttribs2dvNV");

	disp__glVertexAttribs3svNV = (void (CALLBACK *)(GLuint, GLsizei, const GLshort *))
	  GET_GL_PROCADDRESS ("glVertexAttribs3svNV");

	disp__glVertexAttribs3fvNV = (void (CALLBACK *)(GLuint, GLsizei, const GLfloat *))
	  GET_GL_PROCADDRESS ("glVertexAttribs3fvNV");

	disp__glVertexAttribs3dvNV = (void (CALLBACK *)(GLuint, GLsizei, const GLdouble *))
	  GET_GL_PROCADDRESS ("glVertexAttribs3dvNV");

	disp__glVertexAttribs4svNV = (void (CALLBACK *)(GLuint, GLsizei, const GLshort *))
	  GET_GL_PROCADDRESS ("glVertexAttribs4svNV");

	disp__glVertexAttribs4fvNV = (void (CALLBACK *)(GLuint, GLsizei, const GLfloat *))
	  GET_GL_PROCADDRESS ("glVertexAttribs4fvNV");

	disp__glVertexAttribs4dvNV = (void (CALLBACK *)(GLuint, GLsizei, const GLdouble *))
	  GET_GL_PROCADDRESS ("glVertexAttribs4dvNV");

	disp__glVertexAttribs4ubvNV = (void (CALLBACK *)(GLuint, GLsizei, const GLubyte *))
	  GET_GL_PROCADDRESS ("glVertexAttribs4ubvNV");

	disp__glTexBumpParameterivATI = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glTexBumpParameterivATI");

	disp__glTexBumpParameterfvATI = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glTexBumpParameterfvATI");

	disp__glGetTexBumpParameterivATI = (void (CALLBACK *)(GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetTexBumpParameterivATI");

	disp__glGetTexBumpParameterfvATI = (void (CALLBACK *)(GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetTexBumpParameterfvATI");

	disp__glGenFragmentShadersATI = (GLuint (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glGenFragmentShadersATI");

	disp__glBindFragmentShaderATI = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glBindFragmentShaderATI");

	disp__glDeleteFragmentShaderATI = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glDeleteFragmentShaderATI");

	disp__glBeginFragmentShaderATI = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glBeginFragmentShaderATI");

	disp__glEndFragmentShaderATI = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glEndFragmentShaderATI");

	disp__glPassTexCoordATI = (void (CALLBACK *)(GLuint, GLuint, GLenum))
	  GET_GL_PROCADDRESS ("glPassTexCoordATI");

	disp__glSampleMapATI = (void (CALLBACK *)(GLuint, GLuint, GLenum))
	  GET_GL_PROCADDRESS ("glSampleMapATI");

	disp__glColorFragmentOp1ATI = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint))
	  GET_GL_PROCADDRESS ("glColorFragmentOp1ATI");

	disp__glColorFragmentOp2ATI = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint))
	  GET_GL_PROCADDRESS ("glColorFragmentOp2ATI");

	disp__glColorFragmentOp3ATI = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint))
	  GET_GL_PROCADDRESS ("glColorFragmentOp3ATI");

	disp__glAlphaFragmentOp1ATI = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint))
	  GET_GL_PROCADDRESS ("glAlphaFragmentOp1ATI");

	disp__glAlphaFragmentOp2ATI = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint))
	  GET_GL_PROCADDRESS ("glAlphaFragmentOp2ATI");

	disp__glAlphaFragmentOp3ATI = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint))
	  GET_GL_PROCADDRESS ("glAlphaFragmentOp3ATI");

	disp__glSetFragmentShaderConstantATI = (void (CALLBACK *)(GLuint, const GLfloat *))
	  GET_GL_PROCADDRESS ("glSetFragmentShaderConstantATI");

	disp__glPNTrianglesiATI = (void (CALLBACK *)(GLenum, GLint))
	  GET_GL_PROCADDRESS ("glPNTrianglesiATI");

	disp__glPNTrianglesfATI = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glPNTrianglesfATI");

	disp__glNewObjectBufferATI = (GLuint (CALLBACK *)(GLsizei, const GLvoid *, GLenum))
	  GET_GL_PROCADDRESS ("glNewObjectBufferATI");

	disp__glIsObjectBufferATI = (GLboolean (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glIsObjectBufferATI");

	disp__glUpdateObjectBufferATI = (void (CALLBACK *)(GLuint, GLuint, GLsizei, const GLvoid *, GLenum))
	  GET_GL_PROCADDRESS ("glUpdateObjectBufferATI");

	disp__glGetObjectBufferfvATI = (void (CALLBACK *)(GLuint, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetObjectBufferfvATI");

	disp__glGetObjectBufferivATI = (void (CALLBACK *)(GLuint, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetObjectBufferivATI");

	disp__glDeleteObjectBufferATI = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glDeleteObjectBufferATI");

	disp__glArrayObjectATI = (void (CALLBACK *)(GLenum, GLint, GLenum, GLsizei, GLuint, GLuint))
	  GET_GL_PROCADDRESS ("glArrayObjectATI");

	disp__glGetArrayObjectfvATI = (void (CALLBACK *)(GLenum, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetArrayObjectfvATI");

	disp__glGetArrayObjectivATI = (void (CALLBACK *)(GLenum, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetArrayObjectivATI");

	disp__glVariantArrayObjectATI = (void (CALLBACK *)(GLuint, GLenum, GLsizei, GLuint, GLuint))
	  GET_GL_PROCADDRESS ("glVariantArrayObjectATI");

	disp__glGetVariantArrayObjectfvATI = (void (CALLBACK *)(GLuint, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetVariantArrayObjectfvATI");

	disp__glGetVariantArrayObjectivATI = (void (CALLBACK *)(GLuint, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetVariantArrayObjectivATI");

	disp__glBeginVertexShaderEXT = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glBeginVertexShaderEXT");

	disp__glEndVertexShaderEXT = (void (CALLBACK *)(void))
	  GET_GL_PROCADDRESS ("glEndVertexShaderEXT");

	disp__glBindVertexShaderEXT = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glBindVertexShaderEXT");

	disp__glGenVertexShadersEXT = (GLuint (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glGenVertexShadersEXT");

	disp__glDeleteVertexShaderEXT = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glDeleteVertexShaderEXT");

	disp__glShaderOp1EXT = (void (CALLBACK *)(GLenum, GLuint, GLuint))
	  GET_GL_PROCADDRESS ("glShaderOp1EXT");

	disp__glShaderOp2EXT = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLuint))
	  GET_GL_PROCADDRESS ("glShaderOp2EXT");

	disp__glShaderOp3EXT = (void (CALLBACK *)(GLenum, GLuint, GLuint, GLuint, GLuint))
	  GET_GL_PROCADDRESS ("glShaderOp3EXT");

	disp__glSwizzleEXT = (void (CALLBACK *)(GLuint, GLuint, GLenum, GLenum, GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glSwizzleEXT");

	disp__glWriteMaskEXT = (void (CALLBACK *)(GLuint, GLuint, GLenum, GLenum, GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glWriteMaskEXT");

	disp__glInsertComponentEXT = (void (CALLBACK *)(GLuint, GLuint, GLuint))
	  GET_GL_PROCADDRESS ("glInsertComponentEXT");

	disp__glExtractComponentEXT = (void (CALLBACK *)(GLuint, GLuint, GLuint))
	  GET_GL_PROCADDRESS ("glExtractComponentEXT");

	disp__glGenSymbolsEXT = (GLuint (CALLBACK *)(GLenum, GLenum, GLenum, GLuint))
	  GET_GL_PROCADDRESS ("glGenSymbolsEXT");

	disp__glSetInvariantEXT = (void (CALLBACK *)(GLuint, GLenum, const void *))
	  GET_GL_PROCADDRESS ("glSetInvariantEXT");

	disp__glSetLocalConstantEXT = (void (CALLBACK *)(GLuint, GLenum, const void *))
	  GET_GL_PROCADDRESS ("glSetLocalConstantEXT");

	disp__glVariantbvEXT = (void (CALLBACK *)(GLuint, const GLbyte *))
	  GET_GL_PROCADDRESS ("glVariantbvEXT");

	disp__glVariantsvEXT = (void (CALLBACK *)(GLuint, const GLshort *))
	  GET_GL_PROCADDRESS ("glVariantsvEXT");

	disp__glVariantivEXT = (void (CALLBACK *)(GLuint, const GLint *))
	  GET_GL_PROCADDRESS ("glVariantivEXT");

	disp__glVariantfvEXT = (void (CALLBACK *)(GLuint, const GLfloat *))
	  GET_GL_PROCADDRESS ("glVariantfvEXT");

	disp__glVariantdvEXT = (void (CALLBACK *)(GLuint, const GLdouble *))
	  GET_GL_PROCADDRESS ("glVariantdvEXT");

	disp__glVariantubvEXT = (void (CALLBACK *)(GLuint, const GLubyte *))
	  GET_GL_PROCADDRESS ("glVariantubvEXT");

	disp__glVariantusvEXT = (void (CALLBACK *)(GLuint, const GLushort *))
	  GET_GL_PROCADDRESS ("glVariantusvEXT");

	disp__glVariantuivEXT = (void (CALLBACK *)(GLuint, const GLuint *))
	  GET_GL_PROCADDRESS ("glVariantuivEXT");

	disp__glVariantPointerEXT = (void (CALLBACK *)(GLuint, GLenum, GLuint, const void *))
	  GET_GL_PROCADDRESS ("glVariantPointerEXT");

	disp__glEnableVariantClientStateEXT = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glEnableVariantClientStateEXT");

	disp__glDisableVariantClientStateEXT = (void (CALLBACK *)(GLuint))
	  GET_GL_PROCADDRESS ("glDisableVariantClientStateEXT");

	disp__glBindLightParameterEXT = (GLuint (CALLBACK *)(GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glBindLightParameterEXT");

	disp__glBindMaterialParameterEXT = (GLuint (CALLBACK *)(GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glBindMaterialParameterEXT");

	disp__glBindTexGenParameterEXT = (GLuint (CALLBACK *)(GLenum, GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glBindTexGenParameterEXT");

	disp__glBindTextureUnitParameterEXT = (GLuint (CALLBACK *)(GLenum, GLenum))
	  GET_GL_PROCADDRESS ("glBindTextureUnitParameterEXT");

	disp__glBindParameterEXT = (GLuint (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glBindParameterEXT");

	disp__glIsVariantEnabledEXT = (GLboolean (CALLBACK *)(GLuint, GLenum))
	  GET_GL_PROCADDRESS ("glIsVariantEnabledEXT");

	disp__glGetVariantBooleanvEXT = (void (CALLBACK *)(GLuint, GLenum, GLboolean *))
	  GET_GL_PROCADDRESS ("glGetVariantBooleanvEXT");

	disp__glGetVariantIntegervEXT = (void (CALLBACK *)(GLuint, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetVariantIntegervEXT");

	disp__glGetVariantFloatvEXT = (void (CALLBACK *)(GLuint, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetVariantFloatvEXT");

	disp__glGetVariantPointervEXT = (void (CALLBACK *)(GLuint, GLenum, GLvoid **))
	  GET_GL_PROCADDRESS ("glGetVariantPointervEXT");

	disp__glGetInvariantBooleanvEXT = (void (CALLBACK *)(GLuint, GLenum, GLboolean *))
	  GET_GL_PROCADDRESS ("glGetInvariantBooleanvEXT");

	disp__glGetInvariantIntegervEXT = (void (CALLBACK *)(GLuint, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetInvariantIntegervEXT");

	disp__glGetInvariantFloatvEXT = (void (CALLBACK *)(GLuint, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetInvariantFloatvEXT");

	disp__glGetLocalConstantBooleanvEXT = (void (CALLBACK *)(GLuint, GLenum, GLboolean *))
	  GET_GL_PROCADDRESS ("glGetLocalConstantBooleanvEXT");

	disp__glGetLocalConstantIntegervEXT = (void (CALLBACK *)(GLuint, GLenum, GLint *))
	  GET_GL_PROCADDRESS ("glGetLocalConstantIntegervEXT");

	disp__glGetLocalConstantFloatvEXT = (void (CALLBACK *)(GLuint, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("glGetLocalConstantFloatvEXT");

	disp__glVertexStream1s = (void (CALLBACK *)(GLenum, GLshort))
	  GET_GL_PROCADDRESS ("glVertexStream1s");

	disp__glVertexStream1sv = (void (CALLBACK *)(GLenum, const GLshort *))
	  GET_GL_PROCADDRESS ("glVertexStream1sv");

	disp__glVertexStream1i = (void (CALLBACK *)(GLenum, GLint))
	  GET_GL_PROCADDRESS ("glVertexStream1i");

	disp__glVertexStream1iv = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glVertexStream1iv");

	disp__glVertexStream1f = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glVertexStream1f");

	disp__glVertexStream1fv = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glVertexStream1fv");

	disp__glVertexStream1d = (void (CALLBACK *)(GLenum, GLdouble))
	  GET_GL_PROCADDRESS ("glVertexStream1d");

	disp__glVertexStream1dv = (void (CALLBACK *)(GLenum, const GLdouble *))
	  GET_GL_PROCADDRESS ("glVertexStream1dv");

	disp__glVertexStream2s = (void (CALLBACK *)(GLenum, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glVertexStream2s");

	disp__glVertexStream2sv = (void (CALLBACK *)(GLenum, const GLshort *))
	  GET_GL_PROCADDRESS ("glVertexStream2sv");

	disp__glVertexStream2i = (void (CALLBACK *)(GLenum, GLint, GLint))
	  GET_GL_PROCADDRESS ("glVertexStream2i");

	disp__glVertexStream2iv = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glVertexStream2iv");

	disp__glVertexStream2f = (void (CALLBACK *)(GLenum, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glVertexStream2f");

	disp__glVertexStream2fv = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glVertexStream2fv");

	disp__glVertexStream2d = (void (CALLBACK *)(GLenum, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glVertexStream2d");

	disp__glVertexStream2dv = (void (CALLBACK *)(GLenum, const GLdouble *))
	  GET_GL_PROCADDRESS ("glVertexStream2dv");

	disp__glVertexStream3s = (void (CALLBACK *)(GLenum, GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glVertexStream3s");

	disp__glVertexStream3sv = (void (CALLBACK *)(GLenum, const GLshort *))
	  GET_GL_PROCADDRESS ("glVertexStream3sv");

	disp__glVertexStream3i = (void (CALLBACK *)(GLenum, GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glVertexStream3i");

	disp__glVertexStream3iv = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glVertexStream3iv");

	disp__glVertexStream3f = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glVertexStream3f");

	disp__glVertexStream3fv = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glVertexStream3fv");

	disp__glVertexStream3d = (void (CALLBACK *)(GLenum, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glVertexStream3d");

	disp__glVertexStream3dv = (void (CALLBACK *)(GLenum, const GLdouble *))
	  GET_GL_PROCADDRESS ("glVertexStream3dv");

	disp__glVertexStream4s = (void (CALLBACK *)(GLenum, GLshort, GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glVertexStream4s");

	disp__glVertexStream4sv = (void (CALLBACK *)(GLenum, const GLshort *))
	  GET_GL_PROCADDRESS ("glVertexStream4sv");

	disp__glVertexStream4i = (void (CALLBACK *)(GLenum, GLint, GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glVertexStream4i");

	disp__glVertexStream4iv = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glVertexStream4iv");

	disp__glVertexStream4f = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glVertexStream4f");

	disp__glVertexStream4fv = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glVertexStream4fv");

	disp__glVertexStream4d = (void (CALLBACK *)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glVertexStream4d");

	disp__glVertexStream4dv = (void (CALLBACK *)(GLenum, const GLdouble *))
	  GET_GL_PROCADDRESS ("glVertexStream4dv");

	disp__glNormalStream3b = (void (CALLBACK *)(GLenum, GLbyte, GLbyte, GLbyte))
	  GET_GL_PROCADDRESS ("glNormalStream3b");

	disp__glNormalStream3bv = (void (CALLBACK *)(GLenum, const GLbyte *))
	  GET_GL_PROCADDRESS ("glNormalStream3bv");

	disp__glNormalStream3s = (void (CALLBACK *)(GLenum, GLshort, GLshort, GLshort))
	  GET_GL_PROCADDRESS ("glNormalStream3s");

	disp__glNormalStream3sv = (void (CALLBACK *)(GLenum, const GLshort *))
	  GET_GL_PROCADDRESS ("glNormalStream3sv");

	disp__glNormalStream3i = (void (CALLBACK *)(GLenum, GLint, GLint, GLint))
	  GET_GL_PROCADDRESS ("glNormalStream3i");

	disp__glNormalStream3iv = (void (CALLBACK *)(GLenum, const GLint *))
	  GET_GL_PROCADDRESS ("glNormalStream3iv");

	disp__glNormalStream3f = (void (CALLBACK *)(GLenum, GLfloat, GLfloat, GLfloat))
	  GET_GL_PROCADDRESS ("glNormalStream3f");

	disp__glNormalStream3fv = (void (CALLBACK *)(GLenum, const GLfloat *))
	  GET_GL_PROCADDRESS ("glNormalStream3fv");

	disp__glNormalStream3d = (void (CALLBACK *)(GLenum, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("glNormalStream3d");

	disp__glNormalStream3dv = (void (CALLBACK *)(GLenum, const GLdouble *))
	  GET_GL_PROCADDRESS ("glNormalStream3dv");

	disp__glClientActiveVertexStream = (void (CALLBACK *)(GLenum))
	  GET_GL_PROCADDRESS ("glClientActiveVertexStream");

	disp__glVertexBlendEnvi = (void (CALLBACK *)(GLenum, GLint))
	  GET_GL_PROCADDRESS ("glVertexBlendEnvi");

	disp__glVertexBlendEnvf = (void (CALLBACK *)(GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("glVertexBlendEnvf");

/* C2J Parser Version 3.0:  Java program parsed successfully. */ 
