
public String gluErrorString ( int errorCode ) ;

public String gluGetString ( int name ) ;

public String getNativeVendor ( ) ;
public String getNativeVersion ( ) ;

public String getClassVendor ( )  ;
public String getClassVersion ( ) ;

public long gluNewQuadric( );
public long gluNewNurbsRenderer( );
public long gluNewTess( );

public void  gluQuadricCallback(
                                  long qobj, int which,
			          Object methodClassInstance, 
				  String methodName, 
				  String signature
				  );

public void  gluNurbsCallback(
			          long nobj, int which,
			          Object methodClassInstance, 
			          String methodName, 
				  String signature
				  );


public void  gluTessCallback(
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

public void  gluDeleteQuadric( long qobj );

public void  gluDeleteNurbsRenderer( long nobj );

public void  gluDeleteTess( long tobj );

/**
 * Wrapper for original gluProject,
 * where the orig. last three arguments are wrapped 
 * mapped in one array: (winx[1], winy[1], winz[1]) <-> win[3]
 *
 * @param obj array of the three obj x,y,z input components
 * @param win array of the three win x,y,z output components
 * @see gl4java.GLUFunc#gluProject
 */
public int gluProject(double obj[],
                      double[] modelMatrix,
                      double[] projMatrix,
                      int[] viewport,
                      double[] win);

/**
 * Wrapper for original gluProject,
 * where the orig. last three arguments are wrapped 
 * mapped in one array: (winx[1], winy[1], winz[1]) <-> win[3]
 *
 * @param win array of the three win x,y,z output components
 * @see gl4java.GLUFunc#gluProject
 */
public int gluProject(double objx,
                      double objy,
                      double objz,
                      double[] modelMatrix,
                      double[] projMatrix,
                      int[] viewport,
                      double[] win);

/**
 * Wrapper for original gluUnProject,
 * where the orig. last three arguments are wrapped 
 * mapped in one array: (objx[1], objy[1], objz[1]) <-> obj[3]
 *
 * @param win array of the three win x,y,z input components
 * @param obj array of the three obj x,y,z output components
 * @see gl4java.GLUFunc#gluUnProject
 */
public int gluUnProject(double win[],
                        double[] modelMatrix,
                        double[] projMatrix,
                        int[] viewport,
                        double[] obj);

/**
 * Wrapper for original gluUnProject,
 * where the orig. last three arguments are wrapped 
 * mapped in one array: (objx[1], objy[1], objz[1]) <-> obj[3]
 *
 * @param obj array of the three obj x,y,z output components
 * @see gl4java.GLUFunc#gluUnProject
 */
public int gluUnProject(double winx,
                        double winy,
                        double winz,
                        double[] modelMatrix,
                        double[] projMatrix,
                        int[] viewport,
                        double[] obj);


