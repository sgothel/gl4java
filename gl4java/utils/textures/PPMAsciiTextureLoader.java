package gl4java.utils.textures;

import gl4java.*;

import java.awt.*;
import java.awt.image.*;
import java.awt.Color.*;
import java.awt.event.*;
import java.applet.*;
import java.io.*;
import java.net.*;

/**
 * This is Class implements the PPM-Ascii
 * texture-loader !
 *
 * @see IOTextureLoader
 * @see TextureLoader
 */   
public class PPMAsciiTextureLoader
extends IOTextureLoader
{
	public PPMAsciiTextureLoader(GLFunc gl, GLUFunc glu)
	{
		super(gl, glu);
	}

	protected boolean readTexture(InputStream is)
	{
	  try {
                glFormat=GL_RGB;
            
		DataInputStream reader = new DataInputStream ( is );

		String lin=reader.readLine();	//P6
		String subLin=lin.substring(0,1);
		
		lin=reader.readLine();
		subLin=lin.substring(0,1);
	
		while (subLin.compareTo("#")==0)
		{
			lin=reader.readLine();
			subLin=lin.substring(0,1);
		}
		
		char[] dim=lin.toCharArray();

		int i=0;
		char car=lin.charAt(i);
		String blanco=new String(" ");
		Character C=new Character(car);
		car=C.charValue();
		while (C.isDigit(car))
		{
			i++;
			car=lin.charAt(i);
			C=new Character(car);
		}

		String alto=lin.substring(0,i);
		String ancho=lin.substring(i+1,lin.length());
 	
 		Integer hh=new Integer(alto);
		imageWidth=hh.intValue();
 		hh=new Integer(ancho);
		imageHeight=hh.intValue();
 
                pixel=new byte[imageWidth * imageHeight * getComponents()];

		lin=reader.readLine();		//255

	        reader.read(pixel, 0, pixel.length);

		reader.close();
	        setTextureSize();
	        return true;

	   } catch (Exception e) {
	        System.out.println("An exception occured, while loading a PPMAsciiTextureLoader");
	        System.out.println(e);
	        error=true;
	   }
	   return false;
	}

}

