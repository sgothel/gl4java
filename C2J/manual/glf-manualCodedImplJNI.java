/**
 * @(#) GLFFuncJNI.java
 */


package gl4java.utils.glf;

import java.net.*;

/**
 * The default implementation class for GLF native function mapping
 *
 * @version 	2.00, 21. April 1999
 * @author      Sven Goethel
 */
public abstract class GLFFuncJNI 
	implements GLFEnum
{

public abstract int glfLoadFont ( String fontname );

public abstract int glfLoadFont ( URL baseURL, String fontURI );

public abstract int glfLoadBFont ( String fontname );

public abstract int glfLoadBFont ( URL baseURL, String fontURI );

public final native String getNativeVendor ( ) ;
public final native String getNativeVersion ( ) ;

public final String getClassVendor ( ) 
{ return "Jausoft - Sven Goethel Software Development"; }

public final String getClassVersion ( ) 
{ return "1.4.0.0"; }

/**
 * Load Vector font to memory, by (FILE *) fontf 
 */
protected final native int glfLoadFontNative (long fontf);

/**
 * Load Bitmap font to memory, by (FILE *) fontf
 */
protected final native int glfLoadBFontNative (long fontf);

