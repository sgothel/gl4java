/**
 * @(#) GLUFunc14JauJNI.java
 */


package gl4java;

import java.nio.*;

/**
 * The default implementation class for GLU native function mapping
 *
 * @version 	2.00, 21. April 1999
 * @author      Sven Goethel
 */
public class GLUFunc14JauJNI 
	implements GLUFunc14
{

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessBeginPolygon ( GLUtesselator * tess , GLvoid * data ) ;
 * </pre> 
 */
public final native void gluTessBeginPolygon ( long tess, Buffer data) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessVertex ( GLUtesselator * tess , GLdouble * location , GLvoid * data ) ;
 * </pre> 
 */
public final native void gluTessVertex ( long tess, DoubleBuffer location, Buffer data) ;

