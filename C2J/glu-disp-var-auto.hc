/**
 * C2J Parser Version 2.2
 * Jausoft - Sven Goethel Software Development
 * Reading from file: glu-proto-auto.orig.h . . .
 * Destination-Class: gl4java_GLUFuncJauJNI ! 
 */

	void (CALLBACK * disp__gluLookAt )(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__gluOrtho2D )(GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__gluPerspective )(GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__gluPickMatrix )(GLdouble, GLdouble, GLdouble, GLdouble, GLint *) = NULL;

	GLint (CALLBACK * disp__gluProject )(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *) = NULL;

	GLint (CALLBACK * disp__gluUnProject )(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *) = NULL;

	GLint (CALLBACK * disp__gluScaleImage )(GLenum, GLsizei, GLsizei, GLenum, const GLbyte *, GLsizei, GLsizei, GLenum, GLbyte *) = NULL;

	GLint (CALLBACK * disp__gluBuild1DMipmaps )(GLenum, GLint, GLint, GLenum, GLenum, const void *) = NULL;

	GLint (CALLBACK * disp__gluBuild2DMipmaps )(GLenum, GLint, GLint, GLint, GLenum, GLenum, const void *) = NULL;

	void (CALLBACK * disp__gluQuadricDrawStyle )(GLUquadricObj *, GLenum) = NULL;

	void (CALLBACK * disp__gluQuadricOrientation )(GLUquadricObj *, GLenum) = NULL;

	void (CALLBACK * disp__gluQuadricNormals )(GLUquadricObj *, GLenum) = NULL;

	void (CALLBACK * disp__gluQuadricTexture )(GLUquadricObj *, GLboolean) = NULL;

	void (CALLBACK * disp__gluCylinder )(GLUquadricObj *, GLdouble, GLdouble, GLdouble, GLint, GLint) = NULL;

	void (CALLBACK * disp__gluSphere )(GLUquadricObj *, GLdouble, GLint, GLint) = NULL;

	void (CALLBACK * disp__gluDisk )(GLUquadricObj *, GLdouble, GLdouble, GLint, GLint) = NULL;

	void (CALLBACK * disp__gluPartialDisk )(GLUquadricObj *, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__gluLoadSamplingMatrices )(GLUnurbsObj *, const GLfloat *, const GLfloat *, const GLint *) = NULL;

	void (CALLBACK * disp__gluNurbsProperty )(GLUnurbsObj *, GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__gluGetNurbsProperty )(GLUnurbsObj *, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__gluBeginCurve )(GLUnurbsObj *) = NULL;

	void (CALLBACK * disp__gluEndCurve )(GLUnurbsObj *) = NULL;

	void (CALLBACK * disp__gluNurbsCurve )(GLUnurbsObj *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLenum) = NULL;

	void (CALLBACK * disp__gluBeginSurface )(GLUnurbsObj *) = NULL;

	void (CALLBACK * disp__gluEndSurface )(GLUnurbsObj *) = NULL;

	void (CALLBACK * disp__gluNurbsSurface )(GLUnurbsObj *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLint, GLfloat *, GLint, GLint, GLenum) = NULL;

	void (CALLBACK * disp__gluBeginTrim )(GLUnurbsObj *) = NULL;

	void (CALLBACK * disp__gluEndTrim )(GLUnurbsObj *) = NULL;

	void (CALLBACK * disp__gluPwlCurve )(GLUnurbsObj *, GLint, GLfloat *, GLint, GLenum) = NULL;

	void (CALLBACK * disp__gluTessBeginPolygon )(GLUtesselator *, void *) = NULL;

	void (CALLBACK * disp__gluTessBeginContour )(GLUtesselator *) = NULL;

	void (CALLBACK * disp__gluTessVertex )(GLUtesselator *, GLdouble *, void *) = NULL;

	void (CALLBACK * disp__gluTessEndContour )(GLUtesselator *) = NULL;

	void (CALLBACK * disp__gluTessEndPolygon )(GLUtesselator *) = NULL;

	void (CALLBACK * disp__gluTessProperty )(GLUtesselator *, GLenum, GLdouble) = NULL;

	void (CALLBACK * disp__gluTessNormal )(GLUtesselator *, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__gluGetTessProperty )(GLUtesselator *, GLenum, GLdouble *) = NULL;

	void (CALLBACK * disp__gluBeginPolygon )(GLUtesselator *) = NULL;

	void (CALLBACK * disp__gluNextContour )(GLUtesselator *, GLenum) = NULL;

	void (CALLBACK * disp__gluEndPolygon )(GLUtesselator *) = NULL;

/* C2J Parser Version 2.2:  Java program parsed successfully. */ 
