/**
 * C2J Parser Version 3.0
 * Jausoft - Sven Goethel Software Development
 * Reading from file: glu-proto-auto.orig.h . . .
 * Destination-Class: gl4java_GLUFuncJauJNI ! 
 */

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginCurve ( GLUnurbs * nurb ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluBeginCurve )(GLUnurbs *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginPolygon ( GLUtesselator * tess ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluBeginPolygon )(GLUtesselator *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginSurface ( GLUnurbs * nurb ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluBeginSurface )(GLUnurbs *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginTrim ( GLUnurbs * nurb ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluBeginTrim )(GLUnurbs *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild1DMipmapLevels ( GLenum target , GLint internalFormat , GLsizei width , GLenum format , GLenum type , GLint level , GLint base , GLint max , const void * data ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__gluBuild1DMipmapLevels )(GLenum, GLint, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild1DMipmaps ( GLenum target , GLint internalFormat , GLsizei width , GLenum format , GLenum type , const void * data ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__gluBuild1DMipmaps )(GLenum, GLint, GLsizei, GLenum, GLenum, const void *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild2DMipmapLevels ( GLenum target , GLint internalFormat , GLsizei width , GLsizei height , GLenum format , GLenum type , GLint level , GLint base , GLint max , const void * data ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__gluBuild2DMipmapLevels )(GLenum, GLint, GLsizei, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild2DMipmaps ( GLenum target , GLint internalFormat , GLsizei width , GLsizei height , GLenum format , GLenum type , const void * data ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__gluBuild2DMipmaps )(GLenum, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild3DMipmapLevels ( GLenum target , GLint internalFormat , GLsizei width , GLsizei height , GLsizei depth , GLenum format , GLenum type , GLint level , GLint base , GLint max , const void * data ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__gluBuild3DMipmapLevels )(GLenum, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild3DMipmaps ( GLenum target , GLint internalFormat , GLsizei width , GLsizei height , GLsizei depth , GLenum format , GLenum type , const void * data ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__gluBuild3DMipmaps )(GLenum, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLboolean gluCheckExtension ( const GLubyte * extName , const GLubyte * extString ) ;
 * </pre> 
 */
	LIBAPI GLboolean (CALLBACK * disp__gluCheckExtension )(const GLubyte *, const GLubyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluCylinder ( GLUquadric * quad , GLdouble base , GLdouble top , GLdouble height , GLint slices , GLint stacks ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluCylinder )(GLUquadric *, GLdouble, GLdouble, GLdouble, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluDisk ( GLUquadric * quad , GLdouble inner , GLdouble outer , GLint slices , GLint loops ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluDisk )(GLUquadric *, GLdouble, GLdouble, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndCurve ( GLUnurbs * nurb ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluEndCurve )(GLUnurbs *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndPolygon ( GLUtesselator * tess ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluEndPolygon )(GLUtesselator *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndSurface ( GLUnurbs * nurb ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluEndSurface )(GLUnurbs *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndTrim ( GLUnurbs * nurb ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluEndTrim )(GLUnurbs *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluGetNurbsProperty ( GLUnurbs * nurb , GLenum property , GLfloat * data ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluGetNurbsProperty )(GLUnurbs *, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluGetTessProperty ( GLUtesselator * tess , GLenum which , GLdouble * data ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluGetTessProperty )(GLUtesselator *, GLenum, GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluLoadSamplingMatrices ( GLUnurbs * nurb , const GLfloat * model , const GLfloat * perspective , const GLint * view ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluLoadSamplingMatrices )(GLUnurbs *, const GLfloat *, const GLfloat *, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluLookAt ( GLdouble eyeX , GLdouble eyeY , GLdouble eyeZ , GLdouble centerX , GLdouble centerY , GLdouble centerZ , GLdouble upX , GLdouble upY , GLdouble upZ ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluLookAt )(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNextContour ( GLUtesselator * tess , GLenum type ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluNextContour )(GLUtesselator *, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNurbsCurve ( GLUnurbs * nurb , GLint knotCount , GLfloat * knots , GLint stride , GLfloat * control , GLint order , GLenum type ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluNurbsCurve )(GLUnurbs *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNurbsProperty ( GLUnurbs * nurb , GLenum property , GLfloat value ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluNurbsProperty )(GLUnurbs *, GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNurbsSurface ( GLUnurbs * nurb , GLint sKnotCount , GLfloat * sKnots , GLint tKnotCount , GLfloat * tKnots , GLint sStride , GLint tStride , GLfloat * control , GLint sOrder , GLint tOrder , GLenum type ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluNurbsSurface )(GLUnurbs *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLint, GLfloat *, GLint, GLint, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluOrtho2D ( GLdouble left , GLdouble right , GLdouble bottom , GLdouble top ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluOrtho2D )(GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPartialDisk ( GLUquadric * quad , GLdouble inner , GLdouble outer , GLint slices , GLint loops , GLdouble start , GLdouble sweep ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluPartialDisk )(GLUquadric *, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPerspective ( GLdouble fovy , GLdouble aspect , GLdouble zNear , GLdouble zFar ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluPerspective )(GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPickMatrix ( GLdouble x , GLdouble y , GLdouble delX , GLdouble delY , GLint * viewport ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluPickMatrix )(GLdouble, GLdouble, GLdouble, GLdouble, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluProject ( GLdouble objX , GLdouble objY , GLdouble objZ , const GLdouble * model , const GLdouble * proj , const GLint * view , GLdouble * winX , GLdouble * winY , GLdouble * winZ ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__gluProject )(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPwlCurve ( GLUnurbs * nurb , GLint count , GLfloat * data , GLint stride , GLenum type ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluPwlCurve )(GLUnurbs *, GLint, GLfloat *, GLint, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricDrawStyle ( GLUquadric * quad , GLenum draw ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluQuadricDrawStyle )(GLUquadric *, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricNormals ( GLUquadric * quad , GLenum normal ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluQuadricNormals )(GLUquadric *, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricOrientation ( GLUquadric * quad , GLenum orientation ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluQuadricOrientation )(GLUquadric *, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricTexture ( GLUquadric * quad , GLboolean texture ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluQuadricTexture )(GLUquadric *, GLboolean);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluScaleImage ( GLenum format , GLsizei wIn , GLsizei hIn , GLenum typeIn , const void * dataIn , GLsizei wOut , GLsizei hOut , GLenum typeOut , GLvoid * dataOut ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__gluScaleImage )(GLenum, GLsizei, GLsizei, GLenum, const void *, GLsizei, GLsizei, GLenum, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluSphere ( GLUquadric * quad , GLdouble radius , GLint slices , GLint stacks ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluSphere )(GLUquadric *, GLdouble, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessBeginContour ( GLUtesselator * tess ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluTessBeginContour )(GLUtesselator *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessBeginPolygon ( GLUtesselator * tess , GLvoid * data ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluTessBeginPolygon )(GLUtesselator *, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessEndContour ( GLUtesselator * tess ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluTessEndContour )(GLUtesselator *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessEndPolygon ( GLUtesselator * tess ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluTessEndPolygon )(GLUtesselator *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessNormal ( GLUtesselator * tess , GLdouble valueX , GLdouble valueY , GLdouble valueZ ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluTessNormal )(GLUtesselator *, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessProperty ( GLUtesselator * tess , GLenum which , GLdouble data ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluTessProperty )(GLUtesselator *, GLenum, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessVertex ( GLUtesselator * tess , GLdouble * location , GLvoid * data ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluTessVertex )(GLUtesselator *, GLdouble *, GLvoid *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluUnProject ( GLdouble winX , GLdouble winY , GLdouble winZ , const GLdouble * model , const GLdouble * proj , const GLint * view , GLdouble * objX , GLdouble * objY , GLdouble * objZ ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__gluUnProject )(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluUnProject4 ( GLdouble winX , GLdouble winY , GLdouble winZ , GLdouble clipW , const GLdouble * model , const GLdouble * proj , const GLint * view , GLdouble nearVal , GLdouble farVal , GLdouble * objX , GLdouble * objY , GLdouble * objZ , GLdouble * objW ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__gluUnProject4 )(GLdouble, GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble, GLdouble, GLdouble *, GLdouble *, GLdouble *, GLdouble *);

/* C2J Parser Version 3.0:  Java program parsed successfully. */ 
