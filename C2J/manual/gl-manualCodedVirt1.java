/**
 * @(#) GLFunc.java
 */


package gl4java;

/**
 * The base interface for OpenGL native function mapping
 *
 * @version 	2.00, 21. April 1999
 * @author      Sven Goethel
 */
public interface GLFunc 
	extends GLEnum 
{

public String glGetString ( int name ) ;

public String getNativeVendor ( ) ;
public String getNativeVersion ( ) ;

public String getClassVendor ( )  ;
public String getClassVersion ( ) ;

public static final String[] GL_PROC_NAMES = {
