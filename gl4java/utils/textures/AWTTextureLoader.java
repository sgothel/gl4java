package gl4java.utils.textures;

import gl4java.*;

import java.awt.*;
import java.awt.image.*;
// import java.awt.Color.*;
// import java.awt.color.*;
import java.awt.event.*;
import java.applet.*;
import java.io.*;
import java.net.*;

/**
 * This Class implements the universal
 * texture-loader using the AWT's standard interface !
 *
 * The number of image-types depends
 * on the JDK version you use !
 *
 * @see TextureLoader
 */   
public class AWTTextureLoader
extends TextureLoader
{
	Component comp;

	public AWTTextureLoader(Component comp, GLFunc gl, GLUFunc glu)
	{
		super(gl, glu);
		this.comp=comp;
	}

	public boolean readTexture(String fname)
	{
	    Image img = comp.getToolkit().getImage(fname);
	    return readTexture(comp, img);
	}

	public boolean readTexture(URL base, String uri)
	{
	    try {
		    URL url = new URL (base, uri);
	    	    Image img = comp.getToolkit().getImage(url);
	    	    return readTexture(comp, img);
	    } catch (Exception ex) {
		System.out.println("AWTTextureLoader.readTexture <"+
			base+" / "+uri+"> failed !\n"+ex);
	    }
	    return false;
	}

	private boolean readTexture(Component comp, Image img)
	{
	  try {
            try {
                MediaTracker tracker = new MediaTracker(comp);
                tracker.addImage(img, 0);
                tracker.waitForID(0);
            }
            catch ( Exception e ) {}

            imageWidth = img.getWidth(comp);
            imageHeight = img.getHeight(comp);
	    /* This is Java2 only code :-(
            BufferedImage image = 
	    	new BufferedImage(imageWidth, imageHeight, 
		                  BufferedImage.TYPE_INT_RGB);

            Graphics g = image.createGraphics();
            g.drawImage(img,0,0,comp);

            imageWidth = image.getWidth();
	    imageHeight = image.getHeight();
	    */

            // Read entire PNG image (doesn't throw exceptions)
            int[] iPixels = new int[imageWidth * imageHeight];

            PixelGrabber pp=new PixelGrabber(img,
                                             0,0,
                                             imageWidth, imageHeight,
                                             iPixels,
                                             0,
                                             imageWidth);
            try 
            {
                pp.grabPixels();
            } 
            catch (InterruptedException e) 
            {
                System.err.println("interrupted waiting for pixel!");
		error=true;
                return false;
            }
            if ((pp.getStatus() & ImageObserver.ABORT) != 0) 
            {
                System.err.println("image fetch aborted or errored");
		error=true;
                return false;
            }

	    /* This is Java2 only code :-(
            int imagetype = image.getType();
            switch(imagetype)
            {
                case BufferedImage.TYPE_INT_RGB:
                    glFormat=GL_RGB;
                    break;
                case BufferedImage.TYPE_INT_ARGB:
                case BufferedImage.TYPE_INT_ARGB_PRE:
                    glFormat=GL_RGBA;
                    break;
                default:
		    error=true;
                    System.err.println("unsupported format: "+imagetype);
                    return false;
            };
	    */
	    //
	    // we are guessing the RGB type,
	    // because fetching the true type
	    // is Java2 only code :-(
	    //
	    glFormat=GL_RGB;

	    setTextureSize();
            pixel=new byte[imageWidth * imageHeight * getComponents()];
            
            int offset=0;
	    int aPixel;
	    int y_desc;
            for(y_desc=imageHeight-1; y_desc>=0; y_desc--)
	    {
              for(int x=0;x<imageWidth;x++)
              {
	        aPixel = iPixels[y_desc*imageWidth + x];

		// red
                pixel[offset++]=
			new Integer( (aPixel  >> 16) & 0xff ).byteValue();

		// green 
                pixel[offset++]=
			new Integer( (aPixel  >>  8) & 0xff ).byteValue();

		// blue 
                pixel[offset++]=
			new Integer( (aPixel       ) & 0xff ).byteValue();

		// alpha
                if(glFormat==GL_RGBA)
                    pixel[offset++]=
			new Integer( (aPixel  >> 24) & 0xff ).byteValue();
              }
            }

	    return true;

	   } catch (Exception e) {
	        System.out.println("An exception occured, while loading a AWTTexture");
	        System.out.println(e);
	        error=true;
	   }
	   return false;
	}

}

