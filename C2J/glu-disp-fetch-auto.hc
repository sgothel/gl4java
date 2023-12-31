/**
 * C2J Parser Version 3.0
 * Jausoft - Sven Goethel Software Development
 * Reading from file: glu-proto-auto.orig.h . . .
 * Destination-Class: gl4java_GLUFuncJauJNI ! 
 */

	disp__gluBeginCurve = (void (CALLBACK *)(GLUnurbs *))
	  GET_GL_PROCADDRESS ("gluBeginCurve");

	disp__gluBeginPolygon = (void (CALLBACK *)(GLUtesselator *))
	  GET_GL_PROCADDRESS ("gluBeginPolygon");

	disp__gluBeginSurface = (void (CALLBACK *)(GLUnurbs *))
	  GET_GL_PROCADDRESS ("gluBeginSurface");

	disp__gluBeginTrim = (void (CALLBACK *)(GLUnurbs *))
	  GET_GL_PROCADDRESS ("gluBeginTrim");

	disp__gluBuild1DMipmapLevels = (GLint (CALLBACK *)(GLenum, GLint, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *))
	  GET_GL_PROCADDRESS ("gluBuild1DMipmapLevels");

	disp__gluBuild1DMipmaps = (GLint (CALLBACK *)(GLenum, GLint, GLsizei, GLenum, GLenum, const void *))
	  GET_GL_PROCADDRESS ("gluBuild1DMipmaps");

	disp__gluBuild2DMipmapLevels = (GLint (CALLBACK *)(GLenum, GLint, GLsizei, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *))
	  GET_GL_PROCADDRESS ("gluBuild2DMipmapLevels");

	disp__gluBuild2DMipmaps = (GLint (CALLBACK *)(GLenum, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *))
	  GET_GL_PROCADDRESS ("gluBuild2DMipmaps");

	disp__gluBuild3DMipmapLevels = (GLint (CALLBACK *)(GLenum, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *))
	  GET_GL_PROCADDRESS ("gluBuild3DMipmapLevels");

	disp__gluBuild3DMipmaps = (GLint (CALLBACK *)(GLenum, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *))
	  GET_GL_PROCADDRESS ("gluBuild3DMipmaps");

	disp__gluCheckExtension = (GLboolean (CALLBACK *)(const GLubyte *, const GLubyte *))
	  GET_GL_PROCADDRESS ("gluCheckExtension");

	disp__gluCylinder = (void (CALLBACK *)(GLUquadric *, GLdouble, GLdouble, GLdouble, GLint, GLint))
	  GET_GL_PROCADDRESS ("gluCylinder");

	disp__gluDisk = (void (CALLBACK *)(GLUquadric *, GLdouble, GLdouble, GLint, GLint))
	  GET_GL_PROCADDRESS ("gluDisk");

	disp__gluEndCurve = (void (CALLBACK *)(GLUnurbs *))
	  GET_GL_PROCADDRESS ("gluEndCurve");

	disp__gluEndPolygon = (void (CALLBACK *)(GLUtesselator *))
	  GET_GL_PROCADDRESS ("gluEndPolygon");

	disp__gluEndSurface = (void (CALLBACK *)(GLUnurbs *))
	  GET_GL_PROCADDRESS ("gluEndSurface");

	disp__gluEndTrim = (void (CALLBACK *)(GLUnurbs *))
	  GET_GL_PROCADDRESS ("gluEndTrim");

	disp__gluGetNurbsProperty = (void (CALLBACK *)(GLUnurbs *, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("gluGetNurbsProperty");

	disp__gluGetTessProperty = (void (CALLBACK *)(GLUtesselator *, GLenum, GLdouble *))
	  GET_GL_PROCADDRESS ("gluGetTessProperty");

	disp__gluLoadSamplingMatrices = (void (CALLBACK *)(GLUnurbs *, const GLfloat *, const GLfloat *, const GLint *))
	  GET_GL_PROCADDRESS ("gluLoadSamplingMatrices");

	disp__gluLookAt = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("gluLookAt");

	disp__gluNextContour = (void (CALLBACK *)(GLUtesselator *, GLenum))
	  GET_GL_PROCADDRESS ("gluNextContour");

	disp__gluNurbsCurve = (void (CALLBACK *)(GLUnurbs *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLenum))
	  GET_GL_PROCADDRESS ("gluNurbsCurve");

	disp__gluNurbsProperty = (void (CALLBACK *)(GLUnurbs *, GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("gluNurbsProperty");

	disp__gluNurbsSurface = (void (CALLBACK *)(GLUnurbs *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLint, GLfloat *, GLint, GLint, GLenum))
	  GET_GL_PROCADDRESS ("gluNurbsSurface");

	disp__gluOrtho2D = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("gluOrtho2D");

	disp__gluPartialDisk = (void (CALLBACK *)(GLUquadric *, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("gluPartialDisk");

	disp__gluPerspective = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("gluPerspective");

	disp__gluPickMatrix = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble, GLint *))
	  GET_GL_PROCADDRESS ("gluPickMatrix");

	disp__gluProject = (GLint (CALLBACK *)(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *))
	  GET_GL_PROCADDRESS ("gluProject");

	disp__gluPwlCurve = (void (CALLBACK *)(GLUnurbs *, GLint, GLfloat *, GLint, GLenum))
	  GET_GL_PROCADDRESS ("gluPwlCurve");

	disp__gluQuadricDrawStyle = (void (CALLBACK *)(GLUquadric *, GLenum))
	  GET_GL_PROCADDRESS ("gluQuadricDrawStyle");

	disp__gluQuadricNormals = (void (CALLBACK *)(GLUquadric *, GLenum))
	  GET_GL_PROCADDRESS ("gluQuadricNormals");

	disp__gluQuadricOrientation = (void (CALLBACK *)(GLUquadric *, GLenum))
	  GET_GL_PROCADDRESS ("gluQuadricOrientation");

	disp__gluQuadricTexture = (void (CALLBACK *)(GLUquadric *, GLboolean))
	  GET_GL_PROCADDRESS ("gluQuadricTexture");

	disp__gluScaleImage = (GLint (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, const void *, GLsizei, GLsizei, GLenum, GLvoid *))
	  GET_GL_PROCADDRESS ("gluScaleImage");

	disp__gluSphere = (void (CALLBACK *)(GLUquadric *, GLdouble, GLint, GLint))
	  GET_GL_PROCADDRESS ("gluSphere");

	disp__gluUnProject = (GLint (CALLBACK *)(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *))
	  GET_GL_PROCADDRESS ("gluUnProject");

	disp__gluUnProject4 = (GLint (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble, GLdouble, GLdouble *, GLdouble *, GLdouble *, GLdouble *))
	  GET_GL_PROCADDRESS ("gluUnProject4");

/* C2J Parser Version 3.0:  Java program parsed successfully. */ 
