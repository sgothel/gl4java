package gl4java.utils.textures;

import gl4java.*;

import java.awt.*;
import java.awt.image.*;
import java.awt.Color.*;
import java.awt.event.*;
import java.applet.*;
import java.io.*;
import java.net.*;

import com.sixlegs.image.png.*;

/**
 * This is Class implements the PNG texture-loader
 * while using the png-library in package
 * "com.sixlegs.image.png" !
 *
 * @see IOTextureLoader
 * @see TextureLoader
 */   
public class PngTextureLoader
extends IOTextureLoader
{
	protected boolean grayToAlpha = false;

        public PngTextureLoader(GLFunc gl, GLUFunc glu)
        {
                super(gl, glu);
        }

        /**
          * Set to 'true' to load grayscale images as alpha images
          * (in other words, GL_ALPHA instead of GL_LUMINANCE)
          */        
        public void setGrayToAlpha(boolean b)
        {
           this.grayToAlpha = b;
        }

        protected boolean readTexture(InputStream is)
        {
          try {
            int len;
            PngImage png = new PngImage(is);
            
            imageWidth = png.getWidth();
            imageHeight = png.getHeight();

            // Read entire PNG image (doesn't throw exceptions)
            int[] iPixels = new int[imageWidth * imageHeight];

            PixelGrabber pp=new PixelGrabber(png,
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

            // bitDepth beachten
            switch(png.getColorType())
            {
                case PngImage.COLOR_TYPE_GRAY:
                    glFormat= grayToAlpha ? GL_ALPHA : GL_LUMINANCE;
                    break;
                case PngImage.COLOR_TYPE_GRAY_ALPHA:
                    glFormat=GL_LUMINANCE_ALPHA;
                    break;
                case PngImage.COLOR_TYPE_RGB:
                    glFormat=GL_RGB;
                    break;
                case PngImage.COLOR_TYPE_RGB_ALPHA:
                    glFormat=GL_RGBA;
                    break;
                case PngImage.COLOR_TYPE_PALETTE:
                	// todo: support COLOR_TYPE_INDEXED?
                    glFormat=GL_RGB;
                    break;
                default:
                    error=true;
                    System.err.println("unsupported png color type: "+
			     png.getColorType());
                    return false;
            };
           
            int ncmpts = getComponents();
            pixel=new byte[imageWidth * imageHeight * ncmpts];
            
            byte alpha=0;
            byte red=0;
            byte green=0;
            byte blue=0;
            int offset=0;
            int aPixel;
            for(int y=imageHeight-1; y>=0; y--)
            {
              for(int x=0;x<imageWidth;x++)
              {
                aPixel = iPixels[y*imageWidth + x];

                switch (glFormat)
                {
                   case GL_RGBA:
                      pixel[offset] = (byte)(aPixel>>16); 
                      pixel[offset+1] = (byte)(aPixel>>8);
                      pixel[offset+2] = (byte)(aPixel>>0);
                      pixel[offset+3] = (byte)(aPixel>>24);
                      offset += 4;
                      break;
                   case GL_RGB:
                      pixel[offset] = (byte)(aPixel>>16);
                      pixel[offset+1] = (byte)(aPixel>>8);
                      pixel[offset+2] = (byte)(aPixel>>0);
                      offset += 3;
                      break;
                   case GL_LUMINANCE:
                   case GL_COLOR_INDEX:
                      pixel[offset] = (byte)(aPixel);
                      offset += 1;
                      break;
                   case GL_LUMINANCE_ALPHA: // todo: untested
                      pixel[offset] = (byte)(aPixel);
                      pixel[offset+1] = (byte)(aPixel>>24);
                      offset += 2;
                      break;
                }
                
              }
            }

            setTextureSize();
            return true;

           } catch (Exception e) {
                System.out.println("An exception occured, while loading a PngTexture");
                System.out.println(e);
                error=true;
           }
           return false;
        }

}

