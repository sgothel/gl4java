/* WARNING ! WARNING *** THIS FILE IS GENERATED BY C2J !!!

   DO NOT MAKE ANY CHANGES *** MAKE CHANGES IN THE SKELETON FILES !!!
*/


/**
 * @(#) GLUFuncJauJNI.java
 */


package gl4java;

/**
 * The default implementation class for GLU native function mapping
 *
 * @version 	2.00, 21. April 1999
 * @author      Sven Goethel
 */
public class GLUFuncJauJNI 
	implements GLUFunc 
{


public final native String gluErrorString ( int errorCode ) ;
public final native String gluGetString ( int name ) ;

public final native String getNativeVendor ( ) ;
public final native String getNativeVersion ( ) ;

public final String getClassVendor ( ) 
{ return "Jausoft - Sven Goethel Software Development"; }

public final String getClassVersion ( ) 
{ return "2.8.0.4"; }


/**
 * The Callback registry function.
 * To achieve the signature (internal argument signature)
 * you can use the "javap -s <classname>" toolkit of the JDK !
 *
 * @param qobj	the quadratic id, fetch with gluNewQuadric
 * @param which the id for the callback type
 * @param methodClassInstance the class instance,
 *                            which implements the callback-method
 * @param methodName  the name of the callback-method
 * @param signature  the signature of the callback-method.
 *
 * @see GLUFunc#gluNewQuadric
 */
public final native void  gluQuadricCallback(
                                  long qobj, int which,
			          Object methodClassInstance, 
				  String methodName, 
				  String signature
				  );

/**
 * The Callback registry function.
 * To achieve the signature (internal argument signature)
 * you can use the "javap -s <classname>" toolkit of the JDK !
 *
 * @param nobj	the nurbs id, fetch with gluNewNurbsRenderer
 * @param which the id for the callback type
 * @param methodClassInstance the class instance,
 *                            which implements the callback-method
 * @param methodName  the name of the callback-method
 * @param signature  the signature of the callback-method.
 *
 * @see GLUFunc#gluNewNurbsRenderer
 */
public final native void  gluNurbsCallback(
			          long nobj, int which,
			          Object methodClassInstance, 
			          String methodName, 
				  String signature
				  );


/**
 * The Callback registry function.
 * To achieve the signature (internal argument signature)
 * you can use the "javap -s <classname>" toolkit of the JDK !
 *
 * @param tobj	the tesselation id, fetch with gluNewTess
 * @param which the id for the callback type
 * @param methodClassInstance the class instance,
 *                            which implements the callback-method
 * @param methodName  the name of the callback-method
 * @param signature  the signature of the callback-method.
 * @param voidArrayLen1 the optional length of the 1st array
 *                      in the callback-methods argument-list
 * @param voidArrayLen2 the optional length of the 2nd array
 *                      in the callback-methods argument-list
 * @param voidArrayLen3 the optional length of the 3rd array
 *                      in the callback-methods argument-list
 * @param voidArrayLen4 the optional length of the 4th array
 *                      in the callback-methods argument-list
 * @param voidArrayLen5 the optional length of the 5th array
 *                      in the callback-methods argument-list
 *
 * @see GLUFunc#gluNewTess
 */
public final native void  gluTessCallback(
				  long tobj, int which,
			          Object methodClassInstance, 
			          String methodName, 
				  String signature,
				  int voidArrayLen1,
				  int voidArrayLen2,
				  int voidArrayLen3,
				  int voidArrayLen4,
				  int voidArrayLen5
				  );

/**
 * The Callback de-registry function.
 *
 * @param qobj	the quadratic id, for which all callback-methods
 *              should be de-registered
 */
public final native void  gluDeleteQuadric( long qobj );

/**
 * The Callback de-registry function.
 *
 * @param nobj	the nurbs id, for which all callback-methods
 *              should be de-registered
 */
public final native void  gluDeleteNurbsRenderer( long nobj );

/**
 * The Callback de-registry function.
 *
 * @param tobj	the tesselation id, for which all callback-methods
 *              should be de-registered
 */
public final native void  gluDeleteTess( long tobj );

public final native long  gluNewQuadric( );
public final native long  gluNewNurbsRenderer( );
public final native long  gluNewTess( );

/**
 * Wrapper for original gluProject,
 * where the orig. last three arguments are wrapped 
 * mapped in one array: (winx[1], winy[1], winz[1]) <-> win[3]
 *
 * @param obj array of the three obj x,y,z input components
 * @param win array of the three win x,y,z output components
 * @see gl4java.GLUFunc#gluProject
 */
public final int gluProject(double obj[],
                            double[] modelMatrix,
                            double[] projMatrix,
                            int[] viewport,
                            double[] win)
{
	return gluProject( obj[0], obj[1], obj[2],
			   modelMatrix, projMatrix, viewport, win);
}

/**
 * Wrapper for original gluProject,
 * where the orig. last three arguments are wrapped 
 * mapped in one array: (winx[1], winy[1], winz[1]) <-> win[3]
 *
 * @param win array of the three win x,y,z output components
 * @see gl4java.GLUFunc#gluProject
 */
public final int gluProject(double objx,
                            double objy,
                            double objz,
                            double[] modelMatrix,
                            double[] projMatrix,
                            int[] viewport,
                            double[] win)
{
	double x[] = { 0 };
	double y[] = { 0 };
	double z[] = { 0 };

	if(win!=null && win.length>=3)
	{
		x[0]=win[0]; y[0]=win[1]; z[0]=win[2];
	}
	
	int r = gluProject(objx, objy, objz, modelMatrix, projMatrix,
                             viewport, x, y, z);

	if(win!=null && win.length>=3)
	{
		win[0]=x[0]; win[1]=y[0]; win[2]=z[0];
	}

	return r;
}

/**
 * Wrapper for original gluUnProject,
 * where the orig. last three arguments are wrapped 
 * mapped in one array: (objx[1], objy[1], objz[1]) <-> obj[3]
 *
 * @param win array of the three win x,y,z input components
 * @param obj array of the three obj x,y,z output components
 * @see gl4java.GLUFunc#gluUnProject
 */
public final int gluUnProject(double win[],
                              double[] modelMatrix,
                              double[] projMatrix,
                              int[] viewport,
                              double[] obj)
{
	return gluUnProject(win[0], win[1], win[2],
                            modelMatrix, projMatrix, viewport, obj);
}

/**
 * Wrapper for original gluUnProject,
 * where the orig. last three arguments are wrapped 
 * mapped in one array: (objx[1], objy[1], objz[1]) <-> obj[3]
 *
 * @param obj array of the three obj x,y,z output components
 * @see gl4java.GLUFunc#gluUnProject
 */
public final int gluUnProject(double winx,
                              double winy,
                              double winz,
                              double[] modelMatrix,
                              double[] projMatrix,
                              int[] viewport,
                              double[] obj)
{
	double x[] = { 0 };
	double y[] = { 0 };
	double z[] = { 0 };

	if(obj!=null && obj.length>=3)
	{
		x[0]=obj[0]; y[0]=obj[1]; z[0]=obj[2];
	}
	
	int r = gluUnProject(winx, winy, winz, modelMatrix, projMatrix,
                             viewport, x, y, z);

	if(obj!=null && obj.length>=3)
	{
		obj[0]=x[0]; obj[1]=y[0]; obj[2]=z[0];
	}

	return r;
}

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
	public final native void gluLookAt (
		double eyex,
		double eyey,
		double eyez,
		double centerx,
		double centery,
		double centerz,
		double upx,
		double upy,
		double upz
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluOrtho2D ( GLdouble left , GLdouble right , GLdouble bottom , GLdouble top ) ;
 * </pre> 
 */
	public final native void gluOrtho2D (
		double left,
		double right,
		double bottom,
		double top
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPerspective ( GLdouble fovy , GLdouble aspect , GLdouble zNear , GLdouble zFar ) ;
 * </pre> 
 */
	public final native void gluPerspective (
		double fovy,
		double aspect,
		double zNear,
		double zFar
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPickMatrix ( GLdouble x , GLdouble y , GLdouble width , GLdouble height , GLint * viewport ) ;
 * </pre> 
 */
	public final native void gluPickMatrix (
		double x,
		double y,
		double width,
		double height,
		int[] viewport
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluProject ( GLdouble objx , GLdouble objy , GLdouble objz , const GLdouble modelMatrix [ 16 ] , const GLdouble projMatrix [ 16 ] , const GLint viewport [ 4 ] , GLdouble * winx , GLdouble * winy , GLdouble * winz ) ;
 * </pre> 
 */
	public final native int gluProject (
		double objx,
		double objy,
		double objz,
		double[] modelMatrix,
		double[] projMatrix,
		int[] viewport,
		double[] winx,
		double[] winy,
		double[] winz
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluUnProject ( GLdouble winx , GLdouble winy , GLdouble winz , const GLdouble modelMatrix [ 16 ] , const GLdouble projMatrix [ 16 ] , const GLint viewport [ 4 ] , GLdouble * objx , GLdouble * objy , GLdouble * objz ) ;
 * </pre> 
 */
	public final native int gluUnProject (
		double winx,
		double winy,
		double winz,
		double[] modelMatrix,
		double[] projMatrix,
		int[] viewport,
		double[] objx,
		double[] objy,
		double[] objz
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluScaleImage ( GLenum format , GLsizei widthin , GLsizei heightin , GLenum typein , const GLbyte * datain , GLsizei widthout , GLsizei heightout , GLenum typeout , GLbyte * dataout ) ;
 * </pre> 
 */
	public final native int gluScaleImage (
		int format,
		int widthin,
		int heightin,
		int typein,
		byte[] datain,
		int widthout,
		int heightout,
		int typeout,
		byte[] dataout
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild1DMipmaps ( GLenum target , GLint components , GLint width , GLenum format , GLenum type , const void * data ) ;
 * </pre> 
 */
	public final native int gluBuild1DMipmaps (
		int target,
		int components,
		int width,
		int format,
		int type,
		byte[] data
	) ;
	public final native int gluBuild1DMipmaps (
		int target,
		int components,
		int width,
		int format,
		int type,
		short[] data
	) ;
	public final native int gluBuild1DMipmaps (
		int target,
		int components,
		int width,
		int format,
		int type,
		int[] data
	) ;
	public final native int gluBuild1DMipmaps (
		int target,
		int components,
		int width,
		int format,
		int type,
		float[] data
	) ;
	public final native int gluBuild1DMipmaps (
		int target,
		int components,
		int width,
		int format,
		int type,
		double[] data
	) ;
	public final native int gluBuild1DMipmaps (
		int target,
		int components,
		int width,
		int format,
		int type,
		boolean[] data
	) ;
	public final native int gluBuild1DMipmaps (
		int target,
		int components,
		int width,
		int format,
		int type,
		long[] data
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern GLint gluBuild2DMipmaps ( GLenum target , GLint components , GLint width , GLint height , GLenum format , GLenum type , const void * data ) ;
 * </pre> 
 */
	public final native int gluBuild2DMipmaps (
		int target,
		int components,
		int width,
		int height,
		int format,
		int type,
		byte[] data
	) ;
	public final native int gluBuild2DMipmaps (
		int target,
		int components,
		int width,
		int height,
		int format,
		int type,
		short[] data
	) ;
	public final native int gluBuild2DMipmaps (
		int target,
		int components,
		int width,
		int height,
		int format,
		int type,
		int[] data
	) ;
	public final native int gluBuild2DMipmaps (
		int target,
		int components,
		int width,
		int height,
		int format,
		int type,
		float[] data
	) ;
	public final native int gluBuild2DMipmaps (
		int target,
		int components,
		int width,
		int height,
		int format,
		int type,
		double[] data
	) ;
	public final native int gluBuild2DMipmaps (
		int target,
		int components,
		int width,
		int height,
		int format,
		int type,
		boolean[] data
	) ;
	public final native int gluBuild2DMipmaps (
		int target,
		int components,
		int width,
		int height,
		int format,
		int type,
		long[] data
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricDrawStyle ( GLUquadricObj * quadObject , GLenum drawStyle ) ;
 * </pre> 
 */
	public final native void gluQuadricDrawStyle (
		long quadObject,
		int drawStyle
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricOrientation ( GLUquadricObj * quadObject , GLenum orientation ) ;
 * </pre> 
 */
	public final native void gluQuadricOrientation (
		long quadObject,
		int orientation
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricNormals ( GLUquadricObj * quadObject , GLenum normals ) ;
 * </pre> 
 */
	public final native void gluQuadricNormals (
		long quadObject,
		int normals
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluQuadricTexture ( GLUquadricObj * quadObject , GLboolean textureCoords ) ;
 * </pre> 
 */
	public final native void gluQuadricTexture (
		long quadObject,
		boolean textureCoords
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluCylinder ( GLUquadricObj * qobj , GLdouble baseRadius , GLdouble topRadius , GLdouble height , GLint slices , GLint stacks ) ;
 * </pre> 
 */
	public final native void gluCylinder (
		long qobj,
		double baseRadius,
		double topRadius,
		double height,
		int slices,
		int stacks
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluSphere ( GLUquadricObj * qobj , GLdouble radius , GLint slices , GLint stacks ) ;
 * </pre> 
 */
	public final native void gluSphere (
		long qobj,
		double radius,
		int slices,
		int stacks
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluDisk ( GLUquadricObj * qobj , GLdouble innerRadius , GLdouble outerRadius , GLint slices , GLint loops ) ;
 * </pre> 
 */
	public final native void gluDisk (
		long qobj,
		double innerRadius,
		double outerRadius,
		int slices,
		int loops
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPartialDisk ( GLUquadricObj * qobj , GLdouble innerRadius , GLdouble outerRadius , GLint slices , GLint loops , GLdouble startAngle , GLdouble sweepAngle ) ;
 * </pre> 
 */
	public final native void gluPartialDisk (
		long qobj,
		double innerRadius,
		double outerRadius,
		int slices,
		int loops,
		double startAngle,
		double sweepAngle
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluLoadSamplingMatrices ( GLUnurbsObj * nobj , const GLfloat modelMatrix [ 16 ] , const GLfloat projMatrix [ 16 ] , const GLint viewport [ 4 ] ) ;
 * </pre> 
 */
	public final native void gluLoadSamplingMatrices (
		long nobj,
		float[] modelMatrix,
		float[] projMatrix,
		int[] viewport
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNurbsProperty ( GLUnurbsObj * nobj , GLenum property , GLfloat value ) ;
 * </pre> 
 */
	public final native void gluNurbsProperty (
		long nobj,
		int property,
		float value
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluGetNurbsProperty ( GLUnurbsObj * nobj , GLenum property , GLfloat * value ) ;
 * </pre> 
 */
	public final native void gluGetNurbsProperty (
		long nobj,
		int property,
		float[] value
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginCurve ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	public final native void gluBeginCurve (
		long nobj
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndCurve ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	public final native void gluEndCurve (
		long nobj
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNurbsCurve ( GLUnurbsObj * nobj , GLint nknots , GLfloat * knot , GLint stride , GLfloat * ctlarray , GLint order , GLenum type ) ;
 * </pre> 
 */
	public final native void gluNurbsCurve (
		long nobj,
		int nknots,
		float[] knot,
		int stride,
		float[] ctlarray,
		int order,
		int type
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginSurface ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	public final native void gluBeginSurface (
		long nobj
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndSurface ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	public final native void gluEndSurface (
		long nobj
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNurbsSurface ( GLUnurbsObj * nobj , GLint sknot_count , GLfloat * sknot , GLint tknot_count , GLfloat * tknot , GLint s_stride , GLint t_stride , GLfloat * ctlarray , GLint sorder , GLint torder , GLenum type ) ;
 * </pre> 
 */
	public final native void gluNurbsSurface (
		long nobj,
		int sknot_count,
		float[] sknot,
		int tknot_count,
		float[] tknot,
		int s_stride,
		int t_stride,
		float[] ctlarray,
		int sorder,
		int torder,
		int type
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginTrim ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	public final native void gluBeginTrim (
		long nobj
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndTrim ( GLUnurbsObj * nobj ) ;
 * </pre> 
 */
	public final native void gluEndTrim (
		long nobj
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluPwlCurve ( GLUnurbsObj * nobj , GLint count , GLfloat * array , GLint stride , GLenum type ) ;
 * </pre> 
 */
	public final native void gluPwlCurve (
		long nobj,
		int count,
		float[] array,
		int stride,
		int type
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessBeginPolygon ( GLUtesselator * tobj , void * polygon_data ) ;
 * </pre> 
 */
	public final native void gluTessBeginPolygon (
		long tobj,
		byte[] polygon_data
	) ;
	public final native void gluTessBeginPolygon (
		long tobj,
		short[] polygon_data
	) ;
	public final native void gluTessBeginPolygon (
		long tobj,
		int[] polygon_data
	) ;
	public final native void gluTessBeginPolygon (
		long tobj,
		float[] polygon_data
	) ;
	public final native void gluTessBeginPolygon (
		long tobj,
		double[] polygon_data
	) ;
	public final native void gluTessBeginPolygon (
		long tobj,
		boolean[] polygon_data
	) ;
	public final native void gluTessBeginPolygon (
		long tobj,
		long[] polygon_data
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessBeginContour ( GLUtesselator * tobj ) ;
 * </pre> 
 */
	public final native void gluTessBeginContour (
		long tobj
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessVertex ( GLUtesselator * tobj , GLdouble coords [ 3 ] , void * vertex_data ) ;
 * </pre> 
 */
	public final native void gluTessVertex (
		long tobj,
		double[] coords,
		byte[] vertex_data
	) ;
	public final native void gluTessVertex (
		long tobj,
		double[] coords,
		short[] vertex_data
	) ;
	public final native void gluTessVertex (
		long tobj,
		double[] coords,
		int[] vertex_data
	) ;
	public final native void gluTessVertex (
		long tobj,
		double[] coords,
		float[] vertex_data
	) ;
	public final native void gluTessVertex (
		long tobj,
		double[] coords,
		double[] vertex_data
	) ;
	public final native void gluTessVertex (
		long tobj,
		double[] coords,
		boolean[] vertex_data
	) ;
	public final native void gluTessVertex (
		long tobj,
		double[] coords,
		long[] vertex_data
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessEndContour ( GLUtesselator * tobj ) ;
 * </pre> 
 */
	public final native void gluTessEndContour (
		long tobj
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessEndPolygon ( GLUtesselator * tobj ) ;
 * </pre> 
 */
	public final native void gluTessEndPolygon (
		long tobj
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessProperty ( GLUtesselator * tobj , GLenum which , GLdouble value ) ;
 * </pre> 
 */
	public final native void gluTessProperty (
		long tobj,
		int which,
		double value
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessNormal ( GLUtesselator * tobj , GLdouble x , GLdouble y , GLdouble z ) ;
 * </pre> 
 */
	public final native void gluTessNormal (
		long tobj,
		double x,
		double y,
		double z
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluGetTessProperty ( GLUtesselator * tobj , GLenum which , GLdouble * value ) ;
 * </pre> 
 */
	public final native void gluGetTessProperty (
		long tobj,
		int which,
		double[] value
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluBeginPolygon ( GLUtesselator * tobj ) ;
 * </pre> 
 */
	public final native void gluBeginPolygon (
		long tobj
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluNextContour ( GLUtesselator * tobj , GLenum type ) ;
 * </pre> 
 */
	public final native void gluNextContour (
		long tobj,
		int type
	) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluEndPolygon ( GLUtesselator * tobj ) ;
 * </pre> 
 */
	public final native void gluEndPolygon (
		long tobj
	) ;

/* C2J Parser Version 2.2:  Java program parsed successfully. */ 


}

