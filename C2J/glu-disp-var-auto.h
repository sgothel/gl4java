/**
 * C2J Parser Version 2.2
 * Jausoft - Sven Goethel Software Development
 * Reading from file: glu-proto-auto.orig.h . . .
 * Destination-Class: gl4java_GLUFuncJauJNI ! 
 */

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluLookAt ( GLdouble eyex , GLdouble eyey , GLdouble eyez , GLdouble centerx , GLdouble centery , GLdouble centerz , GLdouble upx , GLdouble upy , GLdouble upz ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluLookAt )(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);

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
   extern void gluPerspective ( GLdouble fovy , GLdouble aspect , GLdouble zNear , GLdouble zFar ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluPerspective )(GLdouble, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPickMatrix ( GLdouble x , GLdouble y , GLdouble width , GLdouble height , GLint * viewport ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluPickMatrix )(GLdouble, GLdouble, GLdouble, GLdouble, GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluProject ( GLdouble objx , GLdouble objy , GLdouble objz , const GLdouble modelMatrix [ 16 ] , const GLdouble projMatrix [ 16 ] , const GLint viewport [ 4 ] , GLdouble * winx , GLdouble * winy , GLdouble * winz ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__gluProject )(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluUnProject ( GLdouble winx , GLdouble winy , GLdouble winz , const GLdouble modelMatrix [ 16 ] , const GLdouble projMatrix [ 16 ] , const GLint viewport [ 4 ] , GLdouble * objx , GLdouble * objy , GLdouble * objz ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__gluUnProject )(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluScaleImage ( GLenum format , GLsizei widthin , GLsizei heightin , GLenum typein , const GLbyte * datain , GLsizei widthout , GLsizei heightout , GLenum typeout , GLbyte * dataout ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__gluScaleImage )(GLenum, GLsizei, GLsizei, GLenum, const GLbyte *, GLsizei, GLsizei, GLenum, GLbyte *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild1DMipmaps ( GLenum target , GLint components , GLint width , GLenum format , GLenum type , const void * data ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__gluBuild1DMipmaps )(GLenum, GLint, GLint, GLenum, GLenum, const void *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild2DMipmaps ( GLenum target , GLint components , GLint width , GLint height , GLenum format , GLenum type , const void * data ) ;
 * </pre> 
 */
	LIBAPI GLint (CALLBACK * disp__gluBuild2DMipmaps )(GLenum, GLint, GLint, GLint, GLenum, GLenum, const void *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricDrawStyle ( GLUquadricObj * quadObject , GLenum drawStyle ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluQuadricDrawStyle )(GLUquadricObj *, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricOrientation ( GLUquadricObj * quadObject , GLenum orientation ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluQuadricOrientation )(GLUquadricObj *, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricNormals ( GLUquadricObj * quadObject , GLenum normals ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluQuadricNormals )(GLUquadricObj *, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricTexture ( GLUquadricObj * quadObject , GLboolean textureCoords ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluQuadricTexture )(GLUquadricObj *, GLboolean);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluCylinder ( GLUquadricObj * qobj , GLdouble baseRadius , GLdouble topRadius , GLdouble height , GLint slices , GLint stacks ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluCylinder )(GLUquadricObj *, GLdouble, GLdouble, GLdouble, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluSphere ( GLUquadricObj * qobj , GLdouble radius , GLint slices , GLint stacks ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluSphere )(GLUquadricObj *, GLdouble, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluDisk ( GLUquadricObj * qobj , GLdouble innerRadius , GLdouble outerRadius , GLint slices , GLint loops ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluDisk )(GLUquadricObj *, GLdouble, GLdouble, GLint, GLint);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPartialDisk ( GLUquadricObj * qobj , GLdouble innerRadius , GLdouble outerRadius , GLint slices , GLint loops , GLdouble startAngle , GLdouble sweepAngle ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluPartialDisk )(GLUquadricObj *, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluLoadSamplingMatrices ( GLUnurbsObj * nobj , const GLfloat modelMatrix [ 16 ] , const GLfloat projMatrix [ 16 ] , const GLint viewport [ 4 ] ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluLoadSamplingMatrices )(GLUnurbsObj *, const GLfloat *, const GLfloat *, const GLint *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNurbsProperty ( GLUnurbsObj * nobj , GLenum property , GLfloat value ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluNurbsProperty )(GLUnurbsObj *, GLenum, GLfloat);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluGetNurbsProperty ( GLUnurbsObj * nobj , GLenum property , GLfloat * value ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluGetNurbsProperty )(GLUnurbsObj *, GLenum, GLfloat *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginCurve ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluBeginCurve )(GLUnurbsObj *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndCurve ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluEndCurve )(GLUnurbsObj *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNurbsCurve ( GLUnurbsObj * nobj , GLint nknots , GLfloat * knot , GLint stride , GLfloat * ctlarray , GLint order , GLenum type ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluNurbsCurve )(GLUnurbsObj *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginSurface ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluBeginSurface )(GLUnurbsObj *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndSurface ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluEndSurface )(GLUnurbsObj *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNurbsSurface ( GLUnurbsObj * nobj , GLint sknot_count , GLfloat * sknot , GLint tknot_count , GLfloat * tknot , GLint s_stride , GLint t_stride , GLfloat * ctlarray , GLint sorder , GLint torder , GLenum type ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluNurbsSurface )(GLUnurbsObj *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLint, GLfloat *, GLint, GLint, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginTrim ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluBeginTrim )(GLUnurbsObj *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndTrim ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluEndTrim )(GLUnurbsObj *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPwlCurve ( GLUnurbsObj * nobj , GLint count , GLfloat * array , GLint stride , GLenum type ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluPwlCurve )(GLUnurbsObj *, GLint, GLfloat *, GLint, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessBeginPolygon ( GLUtesselator * tobj , void * polygon_data ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluTessBeginPolygon )(GLUtesselator *, void *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessBeginContour ( GLUtesselator * tobj ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluTessBeginContour )(GLUtesselator *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessVertex ( GLUtesselator * tobj , GLdouble coords [ 3 ] , void * vertex_data ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluTessVertex )(GLUtesselator *, GLdouble *, void *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessEndContour ( GLUtesselator * tobj ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluTessEndContour )(GLUtesselator *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessEndPolygon ( GLUtesselator * tobj ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluTessEndPolygon )(GLUtesselator *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessProperty ( GLUtesselator * tobj , GLenum which , GLdouble value ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluTessProperty )(GLUtesselator *, GLenum, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessNormal ( GLUtesselator * tobj , GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluTessNormal )(GLUtesselator *, GLdouble, GLdouble, GLdouble);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluGetTessProperty ( GLUtesselator * tobj , GLenum which , GLdouble * value ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluGetTessProperty )(GLUtesselator *, GLenum, GLdouble *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginPolygon ( GLUtesselator * tobj ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluBeginPolygon )(GLUtesselator *);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNextContour ( GLUtesselator * tobj , GLenum type ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluNextContour )(GLUtesselator *, GLenum);

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndPolygon ( GLUtesselator * tobj ) ;
 * </pre> 
 */
	LIBAPI void (CALLBACK * disp__gluEndPolygon )(GLUtesselator *);

/* C2J Parser Version 2.2:  Java program parsed successfully. */ 
