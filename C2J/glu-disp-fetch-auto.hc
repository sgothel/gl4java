/**
 * C2J Parser Version 2.0
 * Jausoft - Sven Goethel Software Development
 * Reading from file: glu-proto-auto.orig.h . . .
 * Destination-Class: gl4java_GLUFuncJauJNI ! 
 */

	disp__gluLookAt = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("gluLookAt");

	disp__gluOrtho2D = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("gluOrtho2D");

	disp__gluPerspective = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("gluPerspective");

	disp__gluPickMatrix = (void (CALLBACK *)(GLdouble, GLdouble, GLdouble, GLdouble, GLint *))
	  GET_GL_PROCADDRESS ("gluPickMatrix");

	disp__gluProject = (GLint (CALLBACK *)(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *))
	  GET_GL_PROCADDRESS ("gluProject");

	disp__gluUnProject = (GLint (CALLBACK *)(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *))
	  GET_GL_PROCADDRESS ("gluUnProject");

	disp__gluScaleImage = (GLint (CALLBACK *)(GLenum, GLsizei, GLsizei, GLenum, const char *, GLsizei, GLsizei, GLenum, char *))
	  GET_GL_PROCADDRESS ("gluScaleImage");

	disp__gluBuild1DMipmaps = (GLint (CALLBACK *)(GLenum, GLint, GLint, GLenum, GLenum, const void *))
	  GET_GL_PROCADDRESS ("gluBuild1DMipmaps");

	disp__gluBuild2DMipmaps = (GLint (CALLBACK *)(GLenum, GLint, GLint, GLint, GLenum, GLenum, const void *))
	  GET_GL_PROCADDRESS ("gluBuild2DMipmaps");

	disp__gluQuadricDrawStyle = (void (CALLBACK *)(GLUquadricObj *, GLenum))
	  GET_GL_PROCADDRESS ("gluQuadricDrawStyle");

	disp__gluQuadricOrientation = (void (CALLBACK *)(GLUquadricObj *, GLenum))
	  GET_GL_PROCADDRESS ("gluQuadricOrientation");

	disp__gluQuadricNormals = (void (CALLBACK *)(GLUquadricObj *, GLenum))
	  GET_GL_PROCADDRESS ("gluQuadricNormals");

	disp__gluQuadricTexture = (void (CALLBACK *)(GLUquadricObj *, GLboolean))
	  GET_GL_PROCADDRESS ("gluQuadricTexture");

	disp__gluCylinder = (void (CALLBACK *)(GLUquadricObj *, GLdouble, GLdouble, GLdouble, GLint, GLint))
	  GET_GL_PROCADDRESS ("gluCylinder");

	disp__gluSphere = (void (CALLBACK *)(GLUquadricObj *, GLdouble, GLint, GLint))
	  GET_GL_PROCADDRESS ("gluSphere");

	disp__gluDisk = (void (CALLBACK *)(GLUquadricObj *, GLdouble, GLdouble, GLint, GLint))
	  GET_GL_PROCADDRESS ("gluDisk");

	disp__gluPartialDisk = (void (CALLBACK *)(GLUquadricObj *, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("gluPartialDisk");

	disp__gluLoadSamplingMatrices = (void (CALLBACK *)(GLUnurbsObj *, const GLfloat *, const GLfloat *, const GLint *))
	  GET_GL_PROCADDRESS ("gluLoadSamplingMatrices");

	disp__gluNurbsProperty = (void (CALLBACK *)(GLUnurbsObj *, GLenum, GLfloat))
	  GET_GL_PROCADDRESS ("gluNurbsProperty");

	disp__gluGetNurbsProperty = (void (CALLBACK *)(GLUnurbsObj *, GLenum, GLfloat *))
	  GET_GL_PROCADDRESS ("gluGetNurbsProperty");

	disp__gluBeginCurve = (void (CALLBACK *)(GLUnurbsObj *))
	  GET_GL_PROCADDRESS ("gluBeginCurve");

	disp__gluEndCurve = (void (CALLBACK *)(GLUnurbsObj *))
	  GET_GL_PROCADDRESS ("gluEndCurve");

	disp__gluNurbsCurve = (void (CALLBACK *)(GLUnurbsObj *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLenum))
	  GET_GL_PROCADDRESS ("gluNurbsCurve");

	disp__gluBeginSurface = (void (CALLBACK *)(GLUnurbsObj *))
	  GET_GL_PROCADDRESS ("gluBeginSurface");

	disp__gluEndSurface = (void (CALLBACK *)(GLUnurbsObj *))
	  GET_GL_PROCADDRESS ("gluEndSurface");

	disp__gluNurbsSurface = (void (CALLBACK *)(GLUnurbsObj *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLint, GLfloat *, GLint, GLint, GLenum))
	  GET_GL_PROCADDRESS ("gluNurbsSurface");

	disp__gluBeginTrim = (void (CALLBACK *)(GLUnurbsObj *))
	  GET_GL_PROCADDRESS ("gluBeginTrim");

	disp__gluEndTrim = (void (CALLBACK *)(GLUnurbsObj *))
	  GET_GL_PROCADDRESS ("gluEndTrim");

	disp__gluPwlCurve = (void (CALLBACK *)(GLUnurbsObj *, GLint, GLfloat *, GLint, GLenum))
	  GET_GL_PROCADDRESS ("gluPwlCurve");

	disp__gluTessBeginPolygon = (void (CALLBACK *)(GLUtesselator *, void *))
	  GET_GL_PROCADDRESS ("gluTessBeginPolygon");

	disp__gluTessBeginContour = (void (CALLBACK *)(GLUtesselator *))
	  GET_GL_PROCADDRESS ("gluTessBeginContour");

	disp__gluTessVertex = (void (CALLBACK *)(GLUtesselator *, GLdouble *, void *))
	  GET_GL_PROCADDRESS ("gluTessVertex");

	disp__gluTessEndContour = (void (CALLBACK *)(GLUtesselator *))
	  GET_GL_PROCADDRESS ("gluTessEndContour");

	disp__gluTessEndPolygon = (void (CALLBACK *)(GLUtesselator *))
	  GET_GL_PROCADDRESS ("gluTessEndPolygon");

	disp__gluTessProperty = (void (CALLBACK *)(GLUtesselator *, GLenum, GLdouble))
	  GET_GL_PROCADDRESS ("gluTessProperty");

	disp__gluTessNormal = (void (CALLBACK *)(GLUtesselator *, GLdouble, GLdouble, GLdouble))
	  GET_GL_PROCADDRESS ("gluTessNormal");

	disp__gluGetTessProperty = (void (CALLBACK *)(GLUtesselator *, GLenum, GLdouble *))
	  GET_GL_PROCADDRESS ("gluGetTessProperty");

	disp__gluBeginPolygon = (void (CALLBACK *)(GLUtesselator *))
	  GET_GL_PROCADDRESS ("gluBeginPolygon");

	disp__gluNextContour = (void (CALLBACK *)(GLUtesselator *, GLenum))
	  GET_GL_PROCADDRESS ("gluNextContour");

	disp__gluEndPolygon = (void (CALLBACK *)(GLUtesselator *))
	  GET_GL_PROCADDRESS ("gluEndPolygon");

/* C2J Parser Version 2.0:  Java program parsed successfully. */ 