/*
 * @(#) Tool.java 
 *
 * @author 	Sven Goethel 
 */
 
package gl4java.utils;

import java.util.*;
import java.lang.*;
import java.net.*;
import java.io.*;
import java.awt.*;
import java.applet.*;

public class Tool {

/**
  * A few Component methods for Java-VM access
  */

  public static String getVersion()
  {
  	String version = null;

	try {
		version = java.lang.System.getProperty("java.version");
	}
	catch ( SecurityException s)
	{
		version=(s.getMessage()==null)?s.toString():s.getMessage();
		System.out.println(version);
	}

	return version;
  }

  public static String getVendor()
  {
  	String vendor = null;

	try {
		vendor = java.lang.System.getProperty("java.vendor");
	}
	catch ( SecurityException s)
	{
		vendor=(s.getMessage()==null)?s.toString():s.getMessage();
		System.out.println(vendor);
	}

	return vendor;

  }

  public static String getOSName()
  {
  	String osname = null;

	try {
		osname = java.lang.System.getProperty("os.name");
	}
	catch ( SecurityException s)
	{
		osname=(s.getMessage()==null)?s.toString():s.getMessage();
		System.out.println(osname);
	}

	return osname;

  }

  public static boolean isNetscapesVM() 
  { String vendor=getVendor(); 
    return vendor!=null && vendor.indexOf("Netscape")>=0; }

  public static boolean isSunsVM() 
  { String vendor=getVendor(); 
    return vendor!=null && vendor.indexOf("Sun")>=0; }

  public static boolean isMicrosoftsVM() 
  { String vendor=getVendor(); 
    return vendor!=null && vendor.indexOf("Microsoft")>=0; }

/****************************************************************************/
/****************************************************************************/
/****************************************************************************/

/**
  * A few Component methods for easy awt-hierarchy querys
  */

  public static Point getAbsoluteCoord(Component co)
  {
	Object obj = co;
        Point absCoord = co.getLocation();
        Point p = null;

	while (obj instanceof Component) {
		Container cont = ((Component)obj).getParent();
		if( cont != null ) {
			p = cont.getLocation();
			absCoord.x+=p.x;
			absCoord.y+=p.y;
		}
		if( cont instanceof Window) {
			obj=null;
		} else obj=cont;
	}
	return absCoord;
  }	

    public  static Window getWindow(Component co)
    {
        Window f = null;
        Object obj = co;

        while (obj instanceof Component) {
                Container cont = ((Component)obj).getParent();
                if( cont instanceof Window) {
                        f=(Window)cont;
			obj=cont; // continue seeking for frame or dialog
                } else if( cont instanceof Frame) {
                        f=(Window)cont;
                        obj=null;
                } else if( cont instanceof Dialog) {
                        f=(Window)cont;
                        obj=null;
                } else obj=cont;
        }
        return f;
    }
          
/***************************************************************************/
/***************************************************************************/
/***************************************************************************/

/**
   * A few find methods to seek for Component(Shadow)s
  */


  public static boolean isInSameWindow(Component co1, Component co2)
  {	
  	if(co1==null || co2==null ) return false;

        Window f1 = getWindow(co1);
        Window f2 = getWindow(co2);

	if(f1!=null && f2!=null && f1.equals(f2))
		return true;

	return false;	
  }

}

  

