/**
 * @(#) GLUFunc.java
 */


package gl4java;

/**
 * The base interface for GLU native function mapping
 *
 * @version 	2.00, 21. April 1999
 * @author      Sven Goethel
 */
public interface GLUFunc 
	extends GLUEnum 
{

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

