/**
 * @(#) GLUFunc14.java
 */


package gl4java;

import java.nio.*;

/**
 * The base interface for GLU native function mapping
 *
 * @version 	2.00, 21. April 1999
 * @author      Sven Goethel
 */
public interface GLUFunc14
	extends GLUFunc 
{

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessBeginPolygon ( GLUtesselator * tess , GLvoid * data ) ;
 * </pre> 
 */
public void gluTessBeginPolygon ( long tess, Buffer data) ;

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessVertex ( GLUtesselator * tess , GLdouble * location , GLvoid * data ) ;
 * </pre> 
 */
public void gluTessVertex ( long tess, double[] location, Buffer data) ;

