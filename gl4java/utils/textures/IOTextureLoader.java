package gl4java.utils.textures;

import gl4java.*;
import gl4java.utils.glut.*;

import java.awt.*;
import java.awt.Color.*;
import java.awt.event.*;
import java.applet.*;
import java.io.*;
import java.net.*;

/**
 * This abstract Class implements the
 * file and url based methods "readTexture",
 * to call the specialised implementation
 * of the stream based "readTexture" method !
 *
 * @see TextureLoader
 */   
public abstract class IOTextureLoader
extends TextureLoader
{
	protected IOTextureLoader(GLFunc gl, GLUFunc glu)
	{ super(gl, glu); }

	public boolean readTexture(String fname)
	{
	    boolean result = false;
	    InputStream is= null;
	    try {
		    is= new java.io.FileInputStream(fname);
		    result = readTexture(is);
	    } catch (Exception ex) {
		System.out.println("IOTextureLoader.readTexture <"+
			fname+"> failed !\n"+ex);
	    }
	    try {
		    if(is!=null) is.close();
	    } catch (Exception ex) {}
	    return result;
	}

	public boolean readTexture(URL base, String uri)
	{
	    boolean result = false;
	    InputStream is= null;
	    try {
		    URL url = new URL (base, uri);
		    URLConnection urlcon = url.openConnection();
		    urlcon.setDoOutput(false);
		    urlcon.setDoInput(true);
		    is = urlcon.getInputStream();
		    result = readTexture(is);
	    } catch (Exception ex) {
		System.out.println("IOTextureLoader.readTexture <"+
			base+" / "+uri+"> failed !\n"+ex);
	    }
	    try {
		    if(is!=null) is.close();
	    } catch (Exception ex) {}
	    return result;
	}

        protected abstract boolean readTexture(InputStream is);
}

