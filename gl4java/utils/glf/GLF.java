/**
 * @(#) GLF.java
 */

package gl4java.utils.glf;

import java.net.*;
import java.io.*;

import gl4java.*;
import gl4java.utils.*;

/**
 * The default implementation class for GLF native function mapping
 *
 * @version 	2.00, 21. April 1999
 * @author      Sven Goethel
 */
public class GLF
	extends GLFFuncJNI
{
	public GLF() 
        { 
		super();
		glfInit();
	}

	protected void finalize()
		throws Throwable
	{
		glfClose();
		super.finalize();
	}

	public final int glfLoadFont ( String fontname )
	{
		return glfLoadFont(null, fontname);
	}

	public final int glfLoadFont ( URL baseURL, String fontURI )
	{
		int fontd = 0;
		long filed = Tool.copyResource2TempFile(this, baseURL, fontURI);
		if(filed!=0)
		{
			fontd = glfLoadFontNative(filed);
			Tool.tmpfileClose(filed);
			return fontd;
		}
		return GLF.GLF_ERROR;
	}

	public final int glfLoadBFont ( String fontname )
	{
		return glfLoadBFont(null, fontname);
	}

	public final int glfLoadBFont ( URL baseURL, String fontURI )
	{
		int fontd = 0;
		long filed = Tool.copyResource2TempFile(this, baseURL, fontURI);
		if(filed!=0)
		{
			fontd = glfLoadBFontNative(filed);
			Tool.tmpfileClose(filed);
			return fontd;
		}

		return GLF.GLF_ERROR;
	}

	public static void main( String args[] ) 
	{
		String fontURI = null;

		if(args.length==0)
		{
			System.out.println("java gl4java.utils.glf.GLF <font-URI> [<baseURL>]");
			System.out.println("... using default font times_new1.glf, now !");
			fontURI="times_new1.glf";
		} else fontURI = args[0];

		URL baseURL = null;

		if(args.length>1)
		{
			try {
				baseURL = new URL(args[1]);
			} catch (Exception ex) {
				System.out.println(ex);
			}
		}

		if(GLContext.doLoadNativeLibraries(null, null, null)==false)
		         System.out.println("could not load def. native libs.");

		GLF glf = new GLF();

		glf.glfLoadFont(baseURL, fontURI);
	}
}

