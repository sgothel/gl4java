/**
 * C2J Parser Version 3.0
 * Jausoft - Sven Goethel Software Development
 * Reading from file: glu-proto-auto.orig.h . . .
 * Destination-Class: gl4java_GLUFuncJauJNI ! 
 */

	void (CALLBACK * disp__gluBeginCurve )(GLUnurbs *) = NULL;

	void (CALLBACK * disp__gluBeginPolygon )(GLUtesselator *) = NULL;

	void (CALLBACK * disp__gluBeginSurface )(GLUnurbs *) = NULL;

	void (CALLBACK * disp__gluBeginTrim )(GLUnurbs *) = NULL;

	GLint (CALLBACK * disp__gluBuild1DMipmapLevels )(GLenum, GLint, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *) = NULL;

	GLint (CALLBACK * disp__gluBuild1DMipmaps )(GLenum, GLint, GLsizei, GLenum, GLenum, const void *) = NULL;

	GLint (CALLBACK * disp__gluBuild2DMipmapLevels )(GLenum, GLint, GLsizei, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *) = NULL;

	GLint (CALLBACK * disp__gluBuild2DMipmaps )(GLenum, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *) = NULL;

	GLint (CALLBACK * disp__gluBuild3DMipmapLevels )(GLenum, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *) = NULL;

	GLint (CALLBACK * disp__gluBuild3DMipmaps )(GLenum, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *) = NULL;

	GLboolean (CALLBACK * disp__gluCheckExtension )(const GLubyte *, const GLubyte *) = NULL;

	void (CALLBACK * disp__gluCylinder )(GLUquadric *, GLdouble, GLdouble, GLdouble, GLint, GLint) = NULL;

	void (CALLBACK * disp__gluDisk )(GLUquadric *, GLdouble, GLdouble, GLint, GLint) = NULL;

	void (CALLBACK * disp__gluEndCurve )(GLUnurbs *) = NULL;

	void (CALLBACK * disp__gluEndPolygon )(GLUtesselator *) = NULL;

	void (CALLBACK * disp__gluEndSurface )(GLUnurbs *) = NULL;

	void (CALLBACK * disp__gluEndTrim )(GLUnurbs *) = NULL;

	void (CALLBACK * disp__gluGetNurbsProperty )(GLUnurbs *, GLenum, GLfloat *) = NULL;

	void (CALLBACK * disp__gluGetTessProperty )(GLUtesselator *, GLenum, GLdouble *) = NULL;

	void (CALLBACK * disp__gluLoadSamplingMatrices )(GLUnurbs *, const GLfloat *, const GLfloat *, const GLint *) = NULL;

	void (CALLBACK * disp__gluLookAt )(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__gluNextContour )(GLUtesselator *, GLenum) = NULL;

	void (CALLBACK * disp__gluNurbsCurve )(GLUnurbs *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLenum) = NULL;

	void (CALLBACK * disp__gluNurbsProperty )(GLUnurbs *, GLenum, GLfloat) = NULL;

	void (CALLBACK * disp__gluNurbsSurface )(GLUnurbs *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLint, GLfloat *, GLint, GLint, GLenum) = NULL;

	void (CALLBACK * disp__gluOrtho2D )(GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__gluPartialDisk )(GLUquadric *, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__gluPerspective )(GLdouble, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__gluPickMatrix )(GLdouble, GLdouble, GLdouble, GLdouble, GLint *) = NULL;

	GLint (CALLBACK * disp__gluProject )(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *) = NULL;

	void (CALLBACK * disp__gluPwlCurve )(GLUnurbs *, GLint, GLfloat *, GLint, GLenum) = NULL;

	void (CALLBACK * disp__gluQuadricDrawStyle )(GLUquadric *, GLenum) = NULL;

	void (CALLBACK * disp__gluQuadricNormals )(GLUquadric *, GLenum) = NULL;

	void (CALLBACK * disp__gluQuadricOrientation )(GLUquadric *, GLenum) = NULL;

	void (CALLBACK * disp__gluQuadricTexture )(GLUquadric *, GLboolean) = NULL;

	GLint (CALLBACK * disp__gluScaleImage )(GLenum, GLsizei, GLsizei, GLenum, const void *, GLsizei, GLsizei, GLenum, GLvoid *) = NULL;

	void (CALLBACK * disp__gluSphere )(GLUquadric *, GLdouble, GLint, GLint) = NULL;

	void (CALLBACK * disp__gluTessBeginContour )(GLUtesselator *) = NULL;

	void (CALLBACK * disp__gluTessBeginPolygon )(GLUtesselator *, GLvoid *) = NULL;

	void (CALLBACK * disp__gluTessEndContour )(GLUtesselator *) = NULL;

	void (CALLBACK * disp__gluTessEndPolygon )(GLUtesselator *) = NULL;

	void (CALLBACK * disp__gluTessNormal )(GLUtesselator *, GLdouble, GLdouble, GLdouble) = NULL;

	void (CALLBACK * disp__gluTessProperty )(GLUtesselator *, GLenum, GLdouble) = NULL;

	void (CALLBACK * disp__gluTessVertex )(GLUtesselator *, GLdouble *, GLvoid *) = NULL;

	GLint (CALLBACK * disp__gluUnProject )(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *) = NULL;

	GLint (CALLBACK * disp__gluUnProject4 )(GLdouble, GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble, GLdouble, GLdouble *, GLdouble *, GLdouble *, GLdouble *) = NULL;

/* C2J Parser Version 3.0:  Java program parsed successfully. */ 
