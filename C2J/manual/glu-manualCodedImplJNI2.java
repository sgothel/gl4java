
public final native String gluErrorString ( int errorCode ) ;
public final native String gluGetString ( int name ) ;

public final native String getNativeVendor ( ) ;
public final native String getNativeVersion ( ) ;

public final String getClassVendor ( ) 
{ return "Jausoft - Sven Goethel Software Development"; }

public final String getClassVersion ( ) 
{ return "2.4.1.0"; }


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
                                  int qobj, int which,
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
			          int nobj, int which,
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
				  int tobj, int which,
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
public final native void  gluDeleteQuadric( int qobj );

/**
 * The Callback de-registry function.
 *
 * @param nobj	the nurbs id, for which all callback-methods
 *              should be de-registered
 */
public final native void  gluDeleteNurbsRenderer( int nobj );

/**
 * The Callback de-registry function.
 *
 * @param tobj	the tesselation id, for which all callback-methods
 *              should be de-registered
 */
public final native void  gluDeleteTess( int tobj );

