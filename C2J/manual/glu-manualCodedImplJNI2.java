
public final native String gluErrorString ( int errorCode ) ;
public final native String gluGetString ( int name ) ;

public final native String getNativeVendor ( ) ;
public final native String getNativeVersion ( ) ;

public final String getClassVendor ( ) 
{ return "Jausoft - Sven Goethel Software Development"; }

public final String getClassVersion ( ) 
{ return "2.8.1.0"; }


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
extern void  gluNurbsCallbackData (GLUnurbs* nurb, GLvoid* userData);
extern void  gluNurbsCallbackDataEXT (GLUnurbs* nurb, GLvoid* userData);
**/

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

	int r = gluUnProject(winx, winy, winz, modelMatrix, projMatrix,
                             viewport, x, y, z);

	if(obj!=null && obj.length>=3)
	{
		obj[0]=x[0]; obj[1]=y[0]; obj[2]=z[0];
	}

	return r;
}

