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
import java.lang.reflect.*;
import java.security.*;

public class Tool {

  public static final boolean DEBUG = false;

/**
  * A few Component methods for Java-VM access
  */

  public static final String getVersion()
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

  public static final int getVersionMajor()
  {
  	String jvmVersion = getVersion();
	int jvmVersionMajor = 0;
	int i0 = 0;
	int i1 = jvmVersion.indexOf(".", i0);
        String strhlp = null;
	if(i1>0)
	{
	    strhlp = jvmVersion.substring(i0,i1);
	    try {
	      jvmVersionMajor = Integer.valueOf(strhlp).intValue();
	    } catch (Exception e) 
	    {System.out.println("Not a number: "+strhlp+" ("+jvmVersion+")");}
	}
	return jvmVersionMajor;
  }

  public static final int getVersionMinor()
  {
  	String jvmVersion = getVersion();
	int jvmVersionMinor = 0;
	int i0 = 0;
	int i1 = jvmVersion.indexOf(".", i0);
        String strhlp = null;
	i0 = i1+1;
	i1 = jvmVersion.indexOf(".", i0);
	if( i1 < 0 )
		i1 = jvmVersion.length(); // no 2nd dot, no bug version number

	if( 0<i0 && i0<i1 )
	{
	    strhlp = jvmVersion.substring(i0,i1);
	    try {
	      jvmVersionMinor = Integer.valueOf(strhlp).intValue();
	    } catch (Exception e) 
	    {System.out.println("Not a number: "+strhlp+" ("+jvmVersion+")");}
	}
	return jvmVersionMinor;
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


/***************************************************************************/
/***************************************************************************/
/***************************************************************************/

  
  public static final native long tmpfileCreate();
  public static final native boolean tmpfileClose(long filed);
  public static final native int tmpfileWrite(long filed, byte[] data, int bytes);
  public static final native int tmpfileRead(long filed, byte[] data, int bytes);
  public static final native void tmpfileRewind(long filed);

  public static final long copyResource2TempFile
  		(Object resourceOrigin, URL urlOrigin, String uri)
  {
		URL url = null;
		InputStream in = null;
		File destFile = null;
		String fname;
  		boolean isNetscapeJvm = isNetscapesVM(); 
		int jvmVersionMajor = getVersionMajor();
		int jvmVersionMinor = getVersionMinor();

		long filed = tmpfileCreate();
		if(filed==0) 
		{
		    System.err.println("GL4Java-Tool: can not open temporary file");
		    return 0;
	        }

		if(isNetscapeJvm)
		{
		  System.out.println("Netscape JVM try to get Privileges");
		  try {
			Class privmgr = 
				Class.forName("netscape.security.PrivilegeManager");
			Class[] parameterTypes = new Class[1];
			parameterTypes[0] = Class.forName("java.lang.String");
			Method m = privmgr.getMethod("enablePrivilege",parameterTypes);
			Object args[] = new Object[1];
			args[0] = (Object)(new String("UniversalPropertyRead"));
			m.invoke(privmgr,args);
			args[0] = (Object)(new String("UniversalConnect"));
			m.invoke(privmgr,args);
			args[0] = (Object)(new String("UniversalFdRead"));
			m.invoke(privmgr,args);
			System.out.println("Netscape-Privilege: enabled UniversalPropertyRead, UniversalConnect, UniversalFdRead priv.");
		  } catch (Exception ex) 
		  { 
			System.out.println("Not enabled Netscape-Privilege: UniversalPropertyRead, UniversalConnect, UniversalFdRead priv.");
		  }
		}

		if( jvmVersionMajor>=2 ||
		    (jvmVersionMajor==1 && jvmVersionMinor>=2)
		  )
		{
		   final String f_uri = uri;
		   final Object f_resourceOrigin = resourceOrigin;

		   in = (InputStream)
		     AccessController.doPrivileged(new PrivilegedAction() {
		      public Object run() 
		      {
		        String fname = null;
			InputStream in = null;

			if(f_resourceOrigin!=null)
			{
				fname = "fonts/"+f_uri;
				try
				{
				    in = f_resourceOrigin.getClass().getResourceAsStream(fname);
				    if(in!=null && DEBUG)
					    System.out.println("<found by resource>: "+f_uri);
				}
				catch (Exception ex) {
				    in  = null;
				    if(DEBUG)
				    {
					ex.printStackTrace();
				    }
				}
			}

			if(in==null)
			{
				fname = "gl4java/utils/glf/fonts/"+f_uri;
				try
				{
				    in = ClassLoader.getSystemResourceAsStream(fname);
				    if(in!=null && DEBUG)
					    System.out.println("<found by sys resource>: "+f_uri);
				}
				catch (Exception ex) {
				    in  = null;
				    if(DEBUG)
				    {
					ex.printStackTrace();
				    }
				}
			}
			return in;
		      }
	             });
	        } else {
			if(resourceOrigin!=null)
			{
				fname = "fonts/"+uri;
				try
				{
				    in = resourceOrigin.getClass().getResourceAsStream(fname);
				    if(in!=null && DEBUG)
					    System.out.println("<found by resource>: "+uri);
				}
				catch (Exception ex) {
				    url = null;
				    in  = null;
				    if(DEBUG)
				    {
					ex.printStackTrace();
				    }
				}
			}

			if(in==null)
			{
				fname = "gl4java/utils/glf/fonts/"+uri;
				try
				{
				    in = ClassLoader.getSystemResourceAsStream(fname);
				    if(in!=null && DEBUG)
					    System.out.println("<found by sys resource>: "+uri);
				}
				catch (Exception ex) {
				    url = null;
				    in  = null;
				    if(DEBUG)
				    {
					ex.printStackTrace();
				    }
				}
			}
		}

		if(in==null)
		{
			try
			{
			    if(urlOrigin!=null)
				    url = new URL(urlOrigin, uri);
			    else
				    url = new URL(uri);
			    if(url!=null && DEBUG)
			        System.out.println("<found by URL>: "+url);
			    if(url!=null)
				    in = url.openStream();
			}
			catch (Exception e) {
			    url = null;
			    if(DEBUG)
			    {
				e.printStackTrace();
			    }
			}
		}

	        boolean ok = true;
	        int bytesreadtotal=0, byteswrittentotal=0;

		if( in != null )
		{
			// Copy the data from the source to the destination.
			try
			{
			    byte[] buf = new byte[4096];
			    int bytesread, tmp;

			    while (ok && (bytesread = in.read(buf,0,buf.length)) >= 0)
			    {
				if (bytesread < 1) continue;
				bytesreadtotal+=bytesread;
			        // Write the data to the destination file.
  				if ( (tmp=tmpfileWrite(filed, buf, bytesread))
				     != bytesread ) 
				     ok = false;

			        byteswrittentotal+=tmp;
			    }
			}
			catch (Exception e0)
			{ ok = false;      // Should never happen!		
		          if(DEBUG) e0.printStackTrace();
			}

			if(ok) {
				tmpfileRewind(filed);
			} else {
				tmpfileClose(filed);
				filed=0;
				System.err.println("GL4Java-Tool: write temp file error ("+bytesreadtotal+"r / "+byteswrittentotal+" w)");
			}
			if(DEBUG)
			{
			   System.out.println("bytes read: "+bytesreadtotal+
			                      ", bytes written: "+
					      byteswrittentotal);
		        }
		} else ok = false;

		try {
			if (in != null) in.close();
		} catch (Exception e) {
			in = null;
		        if(DEBUG) e.printStackTrace();
		}

		if(in==null)
		{
		    System.err.println("GL4Java-Tool: could not find uri: "+uri);
		}

		if (in==null && DEBUG) 
		{
			String errMsg = "ERROR: could not get resource "+uri;
			System.out.println(errMsg);
			if(DEBUG)
			{
				System.out.println("given parameters:\n"+
					" ResObj:"+resourceOrigin+"\n"+
					" urlOrigin:"+urlOrigin+"\n"+
					" uri:"+uri+"\n");
				Exception e = new Exception();
				e.printStackTrace();
			}
		} 

		return filed;
	}

}
