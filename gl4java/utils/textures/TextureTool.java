package gl4java.utils.textures;

import gl4java.*;

import java.awt.*;
import java.awt.Color.*;
import java.awt.event.*;
import java.applet.*;
import java.io.*;
import java.net.*;

/**
 * This Class implements basic functions,
 * which are used by all TextureLoader implementations !
 *
 * @see TextureLoader
 */   
public abstract class TextureTool
implements GLEnum, GLUEnum
{
	protected GLFunc  gl;
	protected GLUFunc  glu;

	/**
	 * just a default type ...
	 */
	protected byte[] pixel;
	protected boolean pixelScaled;

	protected int    imageWidth;
	protected int    imageHeight;
	protected int    textWidth;
	protected int    textHeight;

	protected int    glFormat;
	protected boolean error;

	public String toString()
	{
		return "Texture "+textWidth+"x"+textHeight+
		"[image "+imageWidth+"x"+imageHeight+
		 "[bpc "+getComponents()+"]"+
		"]";
	}

	protected TextureTool(GLFunc gl, GLUFunc glu)
	{
		this.gl=gl;
		this.glu=glu;
		error=false;
		pixelScaled = false;
	}

	public final boolean isOk() { return !error; }

	public final int    getGLFormat() { return glFormat; }
	public int    	    getGLBytesPerComponent() { return 1; }
	public int          getGLComponentFormat() { return GL_UNSIGNED_BYTE; }

	/**
	 * just a default for byte sized component's
	 */
	public int    getComponents()
	{ 
		switch (glFormat)
		{
			case GL_RGBA:
				return 4;
			case GL_RGB:
				return 3;
			case GL_LUMINANCE_ALPHA:
				return 2;
			case GL_LUMINANCE:
			case GL_ALPHA:
			case GL_COLOR_INDEX:
				return 1;
			default: 
				return 0;
		}
	}

	/**
	 * Dimension
         */
	public final int getImageWidth() { return imageWidth; }
	public final int getImageHeight() { return imageHeight; }

	public final int getTextureWidth() { return textWidth; }
	public final int getTextureHeight() { return textHeight; }


	public static final int getMaxTextureSize(GLFunc gl)
	{
		int[] maxSize=new int[1];
		gl.glGetIntegerv(GL_MAX_TEXTURE_SIZE, maxSize);
		return maxSize[0];
	}

	/**
	 * This method is called directly after loading
	 * the texture !
	 * You normally do not need to call this method !
	 *
	 * The textWidth/textHeight data is set correctly
	 * to a power of 2 !
	 */
	public void setTextureSize()
	{
		int e_x, e_y, i;

		/* achieve the 2**e_x>=imageWidth, 2**e_y>=imageHeight */
		e_x=0; textWidth=1;

		while (textWidth<imageWidth)
	        { textWidth*=2; e_x++; }

		e_y=0; textHeight=1;
	  	while (textHeight<imageHeight)
	    	{ textHeight*=2; e_y++; }

		int[] format = new int[1];

  		do {
                	gl.glTexImage2D(GL_PROXY_TEXTURE_2D, 0, 
                                        getComponents(),
                                        textWidth, textHeight, 
                                        0,
                                        glFormat, 
				        GL_UNSIGNED_BYTE, 
				        (byte[])null);
			glutReportErrors();

                        gl.glGetTexLevelParameteriv
                                        (GL_PROXY_TEXTURE_2D, 0,
                                         GL_TEXTURE_INTERNAL_FORMAT, format);
			glutReportErrors();


			//
                	// if(format[0]!=glFormat)
			//
                	if(format[0]==0)
                	{
				System.out.println("text size too big: "+this.toString()+", "+format[0]+"!="+glFormat);
                        	if(textWidth>textHeight) 
                        	{
                                	e_x--; textWidth=1;
                                	for(i=e_x; i>0; i--)
                                        	textWidth*=2;
                        	} else {
                                	e_y--; textHeight=1;
                                	for(i=e_y; i>0; i--)
                                        	textHeight*=2;
                        	}
                	}
  		} while (format[0]==0 && /* format[0]!=glFormat && */
                   	 textWidth>1 && textHeight>1); 

	}

	/**
	 * The image data, with the given 
	 * Dimension and Format !
         */
	public final byte[] getTexture() { return pixel; }

	/**
	 * This method can be called,
	 * if you want to have a normal image-data size
	 * with the power of two !
	 *
	 * The Ascpect-Ratio is dropped !
	 *
	 * You can call this method directly after loading a 
	 * texture !
	 *
	 * The pixel store mode GL_UNPACK_ALIGNMENT & GL_PACK_ALIGNMENT, 
	 * is set temporary to byte alignment, then back to default (4) !
	 *
	 * The pixel store mode GL_UNPACK_ROW_LENGTH & GL_PACK_ROW_LENGTH, 
	 * is set temporary to imageWidth, then back to default (0) !
	 *
         * @see	GLUFunc#gluScaleImage
         * @see	GLFunc#glPixelStorei
	 */
	public boolean scaleTexture2Pow2()
	{
		if(pixelScaled)
			return true;

		int swapbytes[]={0}, lsbfirst[]={0}, rowlength[]={0};
		int skiprows[]={0}, skippixels[]={0}, alignment[]={0};
		int unswapbytes[]={0}, unlsbfirst[]={0}, unrowlength[]={0};
		int unskiprows[]={0}, unskippixels[]={0}, unalignment[]={0};

		setTextureSize();

		if (textWidth != imageWidth ||
		    textHeight != imageHeight)
		{
		    int        colorBytes;
		    
		    // speicher fuer scaliertes bild anlegen
		    byte[] buffer=new byte[textWidth * textHeight * 
		    		           getComponents()];
		    
		    /* Save current modes. */
		    gl.glGetIntegerv(GL_PACK_SWAP_BYTES, swapbytes);
		    gl.glGetIntegerv(GL_PACK_LSB_FIRST, lsbfirst);
		    gl.glGetIntegerv(GL_PACK_ROW_LENGTH, rowlength);
		    gl.glGetIntegerv(GL_PACK_SKIP_ROWS, skiprows);
		    gl.glGetIntegerv(GL_PACK_SKIP_PIXELS, skippixels);
		    gl.glGetIntegerv(GL_PACK_ALIGNMENT, alignment);
		    gl.glGetIntegerv(GL_UNPACK_SWAP_BYTES, unswapbytes);
		    gl.glGetIntegerv(GL_UNPACK_LSB_FIRST, unlsbfirst);
		    gl.glGetIntegerv(GL_UNPACK_ROW_LENGTH, unrowlength);
		    gl.glGetIntegerv(GL_UNPACK_SKIP_ROWS, unskiprows);
		    gl.glGetIntegerv(GL_UNPACK_SKIP_PIXELS, unskippixels);
		    gl.glGetIntegerv(GL_UNPACK_ALIGNMENT, unalignment);

		    gl.glPixelStorei(GL_PACK_SWAP_BYTES, 0);
		    gl.glPixelStorei(GL_PACK_LSB_FIRST, 1);
		    gl.glPixelStorei(GL_PACK_ROW_LENGTH, 0);
		    gl.glPixelStorei(GL_PACK_SKIP_ROWS, 0);
		    gl.glPixelStorei(GL_PACK_SKIP_PIXELS, 0);
		    gl.glPixelStorei(GL_PACK_ALIGNMENT, 1);
		    gl.glPixelStorei(GL_UNPACK_SWAP_BYTES, 0);
		    gl.glPixelStorei(GL_UNPACK_LSB_FIRST, 1);
		    gl.glPixelStorei(GL_UNPACK_ROW_LENGTH, imageWidth);
		    gl.glPixelStorei(GL_UNPACK_SKIP_ROWS, 0);
		    gl.glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
		    gl.glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

		    if( glu.gluScaleImage(glFormat, 
					  imageWidth, imageHeight,
					  GL_UNSIGNED_BYTE, 
					  pixel,
					  textWidth, textHeight, 
					  GL_UNSIGNED_BYTE,
					  buffer)!=0 )
		    {
			// glu failure
			error=true;
		    } else {
			pixel = buffer;
		    }

		    gl.glPixelStorei(GL_PACK_SWAP_BYTES, swapbytes[0]);
		    gl.glPixelStorei(GL_PACK_LSB_FIRST, lsbfirst[0]);
		    gl.glPixelStorei(GL_PACK_ROW_LENGTH, rowlength[0]);
		    gl.glPixelStorei(GL_PACK_SKIP_ROWS, skiprows[0]);
		    gl.glPixelStorei(GL_PACK_SKIP_PIXELS, skippixels[0]);
		    gl.glPixelStorei(GL_PACK_ALIGNMENT, alignment[0]);
		    gl.glPixelStorei(GL_UNPACK_SWAP_BYTES, unswapbytes[0]);
		    gl.glPixelStorei(GL_UNPACK_LSB_FIRST, unlsbfirst[0]);
		    gl.glPixelStorei(GL_UNPACK_ROW_LENGTH, unrowlength[0]);
		    gl.glPixelStorei(GL_UNPACK_SKIP_ROWS, unskiprows[0]);
		    gl.glPixelStorei(GL_UNPACK_SKIP_PIXELS, unskippixels[0]);
		    gl.glPixelStorei(GL_UNPACK_ALIGNMENT, unalignment[0]);
		}
		if(!error)
		    pixelScaled = true;
		return pixelScaled;
	}

	/**
	 * This method can be called,
	 * if you want to have an optimal image-data size
	 * which fits best into the texture-MEMORY !
	 *
	 * The Ascpect-Ratio is not changed 
	 * - seen from the texture-MEMORY-ratio
	 *      to the netto-image-MEMORY-ratio !
	 *
	 * If you want to render this result with the correct
	 * apsect-ration,
	 * you MUST set the vertices in relation to
	 * the textureWidth and textureHeight !
	 * Look in the demo: "demos/MiscDemos/GLImageWorld1" !
	 *
	 * You can call this method directly after loading a 
	 * texture !
	 *
	 * The pixel store mode GL_UNPACK_ALIGNMENT & GL_PACK_ALIGNMENT, 
	 * is set temporary to byte alignment, then back to default (4) !
	 *
	 * The pixel store mode GL_UNPACK_ROW_LENGTH & GL_PACK_ROW_LENGTH, 
	 * is set temporary to imageWidth, then back to default (0) !
	 *
         * @see	GLUFunc#gluScaleImage
         * @see	GLFunc#glPixelStorei
	 */
	public boolean scaleTexture4BestSize()
	{
		if(pixelScaled)
			return true;

		setTextureSize();

		if (textWidth != imageWidth ||
		    textHeight != imageHeight)
		{
		    int swapbytes[]={0}, lsbfirst[]={0}, rowlength[]={0};
		    int skiprows[]={0}, skippixels[]={0}, alignment[]={0};
		    int unswapbytes[]={0}, unlsbfirst[]={0}, unrowlength[]={0};
		    int unskiprows[]={0}, unskippixels[]={0}, unalignment[]={0};
		    int        colorBytes;
		    
		    // speicher fuer scaliertes bild anlegen
		    byte[] buffer=new byte[textWidth * textHeight * 
		                           getComponents()];
		    
		    int w=textWidth; 
		    int h=textHeight;

		    double    iaspect = (double)imageWidth/
					(double)imageHeight;

		    if(textWidth<textHeight)
			h = (int) ((textWidth / iaspect)+0.5);
		    else
			w = (int) ((textHeight * iaspect)+0.5);

		    /*
		    System.out.println("scale4Best: size "+
		    	imageWidth+"/"+imageHeight+" -> "+w+"/"+h);
		    System.out.println("scale4Best: aspect (w/h) "+
		    	iaspect+" -> "+(double)w/(double)h);
		    */

		    /* Save current modes. */
		    gl.glGetIntegerv(GL_PACK_SWAP_BYTES, swapbytes);
		    gl.glGetIntegerv(GL_PACK_LSB_FIRST, lsbfirst);
		    gl.glGetIntegerv(GL_PACK_ROW_LENGTH, rowlength);
		    gl.glGetIntegerv(GL_PACK_SKIP_ROWS, skiprows);
		    gl.glGetIntegerv(GL_PACK_SKIP_PIXELS, skippixels);
		    gl.glGetIntegerv(GL_PACK_ALIGNMENT, alignment);
		    gl.glGetIntegerv(GL_UNPACK_SWAP_BYTES, unswapbytes);
		    gl.glGetIntegerv(GL_UNPACK_LSB_FIRST, unlsbfirst);
		    gl.glGetIntegerv(GL_UNPACK_ROW_LENGTH, unrowlength);
		    gl.glGetIntegerv(GL_UNPACK_SKIP_ROWS, unskiprows);
		    gl.glGetIntegerv(GL_UNPACK_SKIP_PIXELS, unskippixels);
		    gl.glGetIntegerv(GL_UNPACK_ALIGNMENT, unalignment);

		    gl.glPixelStorei(GL_PACK_SWAP_BYTES, 0);
		    gl.glPixelStorei(GL_PACK_LSB_FIRST, 1);
		    gl.glPixelStorei(GL_PACK_ROW_LENGTH, textWidth);
		    gl.glPixelStorei(GL_PACK_SKIP_ROWS, 0);
		    gl.glPixelStorei(GL_PACK_SKIP_PIXELS, 0);
		    gl.glPixelStorei(GL_PACK_ALIGNMENT, 1);
		    gl.glPixelStorei(GL_UNPACK_SWAP_BYTES, 0);
		    gl.glPixelStorei(GL_UNPACK_LSB_FIRST, 1);
		    gl.glPixelStorei(GL_UNPACK_ROW_LENGTH, imageWidth);
		    gl.glPixelStorei(GL_UNPACK_SKIP_ROWS, 0);
		    gl.glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
		    gl.glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

		    if( glu.gluScaleImage(glFormat, 
					  imageWidth, imageHeight,
					  GL_UNSIGNED_BYTE, 
					  pixel,
					  w, h, 
					  GL_UNSIGNED_BYTE,
					  buffer)!=0 )
		    {
			// glu failure
			error=true;
		    } else {
			pixel = buffer;
			imageWidth=w;
			imageHeight=h;
		    }

		    gl.glPixelStorei(GL_PACK_SWAP_BYTES, swapbytes[0]);
		    gl.glPixelStorei(GL_PACK_LSB_FIRST, lsbfirst[0]);
		    gl.glPixelStorei(GL_PACK_ROW_LENGTH, rowlength[0]);
		    gl.glPixelStorei(GL_PACK_SKIP_ROWS, skiprows[0]);
		    gl.glPixelStorei(GL_PACK_SKIP_PIXELS, skippixels[0]);
		    gl.glPixelStorei(GL_PACK_ALIGNMENT, alignment[0]);
		    gl.glPixelStorei(GL_UNPACK_SWAP_BYTES, unswapbytes[0]);
		    gl.glPixelStorei(GL_UNPACK_LSB_FIRST, unlsbfirst[0]);
		    gl.glPixelStorei(GL_UNPACK_ROW_LENGTH, unrowlength[0]);
		    gl.glPixelStorei(GL_UNPACK_SKIP_ROWS, unskiprows[0]);
		    gl.glPixelStorei(GL_UNPACK_SKIP_PIXELS, unskippixels[0]);
		    gl.glPixelStorei(GL_UNPACK_ALIGNMENT, unalignment[0]);
		}
		if(!error)
		    pixelScaled = true;
		return pixelScaled;
	}

	/**
	 * This method loads the image into
	 * the current bind GL_TEXTURE_2D texture !
	 *
	 * Be sure to have the GL-Context being current !
	 *
	 * Be sure to have the GL_TEXTURE_2D bind to 
	 * a textureName !
	 * 
	 * This method calls scaleTexture2Pow2() to
	 * make the image of the normal texture size := pow2 !
	 * Then glTexImage2D is called with the texture properties !
	 *
	 * The Ascpect-Ratio is dropped !
	 *
         * @see TextureTool#scaleTexture2Pow2
         * @see	GLFunc#glGenTextures
         * @see	GLFunc#glBindTexture
         * @see	GLFunc#glTexImage2D
         * @see	GLFunc#glPixelStorei
	 */
	public boolean texImage2DScaled2Pow2()
	{
		// The Scaled Way
		if(!scaleTexture2Pow2())
			return false;

		gl.glTexImage2D(GL_TEXTURE_2D,
			    0,
			    getComponents(),
			    getTextureWidth(),
			    getTextureHeight(),
			    0,
			    getGLFormat(),
			    getGLComponentFormat(),
			    getTexture()); // The Scaled Way
		
		return glutReportErrors();
	}

	/**
	 * This method loads the image into
	 * the current bind GL_TEXTURE_2D texture !
	 *
	 * Be sure to have the GL-Context being current !
	 *
	 * Be sure to have the GL_TEXTURE_2D bind to 
	 * a textureName !
	 * 
	 * This method calls scaleTexture4BestSize() to
	 * make the image of the best fitting size 
	 * relative to the texture-size!
	 * Then glTexImage2D is called with the texture properties !
         *
	 * The Ascpect-Ratio is not changed !
	 *
	 * A fine example exists in "demos/MiscDemos/GLImageViewerWorld" !
	 *
         * @see TextureTool#scaleTexture4BestSize
         * @see	GLFunc#glGenTextures
         * @see	GLFunc#glBindTexture
         * @see	GLFunc#glTexImage2D
         * @see	GLFunc#glPixelStorei
	 */
	public boolean texImage2DScaled4BestSize()
	{
		// The Scaled Way
		if(!scaleTexture4BestSize())
			return false;

		gl.glTexImage2D(GL_TEXTURE_2D,
			    0,
			    getComponents(),
			    getTextureWidth(),
			    getTextureHeight(),
			    0,
			    getGLFormat(),
			    getGLComponentFormat(),
			    getTexture()); // The Scaled Way
		
		return glutReportErrors();
	}

	/**
	 * This method loads the image into
	 * the current bind GL_TEXTURE_2D texture !
	 *
	 * Be sure to have the GL-Context being current !
	 *
	 * Be sure to have the GL_TEXTURE_2D bind to 
	 * a textureName !
	 * 
	 * This method creates a target texture (glTexImage2D)
	 * without data,
	 * and substitutes only the unscaled image data (glTexSubImage2D) !
	 *
	 * The benefits of this functions is,
	 * that the image/texture is not scaled !
	 * A fine example exists in "demos/MiscDemos/GLImageViewerCanvas" !
	 *
	 * The pixel store mode GL_UNPACK_ALIGNMENT, 
	 * is set temporary to byte alignment, then back to default (4) !
	 *
	 * The pixel store mode GL_UNPACK_ROW_LENGTH, 
	 * is set temporary to imageWidth, then back to default (0) !
	 *
	 * @param clear if true, the texture will be initially loaded with 
	 *        a dummy blank (black) array
	 *
         * @see	GLFunc#glGenTextures
         * @see	GLFunc#glBindTexture
         * @see	GLFunc#glTexImage2D
         * @see	GLFunc#glTexSubImage2D
         * @see	GLFunc#glPixelStorei
         * @see	GLImageCanvas
	 */
	public boolean texImage2DNonScaled(boolean clear)
	{
		int swapbytes[]={0}, lsbfirst[]={0}, rowlength[]={0};
		int skiprows[]={0}, skippixels[]={0}, alignment[]={0};
		int unswapbytes[]={0}, unlsbfirst[]={0}, unrowlength[]={0};
		int unskiprows[]={0}, unskippixels[]={0}, unalignment[]={0};

		/* Save current modes. */
		gl.glGetIntegerv(GL_PACK_SWAP_BYTES, swapbytes);
		gl.glGetIntegerv(GL_PACK_LSB_FIRST, lsbfirst);
		gl.glGetIntegerv(GL_PACK_ROW_LENGTH, rowlength);
		gl.glGetIntegerv(GL_PACK_SKIP_ROWS, skiprows);
		gl.glGetIntegerv(GL_PACK_SKIP_PIXELS, skippixels);
		gl.glGetIntegerv(GL_PACK_ALIGNMENT, alignment);
		gl.glGetIntegerv(GL_UNPACK_SWAP_BYTES, unswapbytes);
		gl.glGetIntegerv(GL_UNPACK_LSB_FIRST, unlsbfirst);
		gl.glGetIntegerv(GL_UNPACK_ROW_LENGTH, unrowlength);
		gl.glGetIntegerv(GL_UNPACK_SKIP_ROWS, unskiprows);
		gl.glGetIntegerv(GL_UNPACK_SKIP_PIXELS, unskippixels);
		gl.glGetIntegerv(GL_UNPACK_ALIGNMENT, unalignment);

		gl.glPixelStorei(GL_PACK_SWAP_BYTES, 0);
		gl.glPixelStorei(GL_PACK_LSB_FIRST, 1);
		gl.glPixelStorei(GL_PACK_ROW_LENGTH, 0);
		gl.glPixelStorei(GL_PACK_SKIP_ROWS, 0);
		gl.glPixelStorei(GL_PACK_SKIP_PIXELS, 0);
		gl.glPixelStorei(GL_PACK_ALIGNMENT, 1);
		gl.glPixelStorei(GL_UNPACK_SWAP_BYTES, 0);
		gl.glPixelStorei(GL_UNPACK_LSB_FIRST, 1);
		gl.glPixelStorei(GL_UNPACK_ROW_LENGTH, imageWidth);
		gl.glPixelStorei(GL_UNPACK_SKIP_ROWS, 0);
		gl.glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
		gl.glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

		byte[] clrPixel = null;

		if(clear)
		{
		    clrPixel=
                          new byte[textWidth * textHeight * getComponents()];
		}

		gl.glTexImage2D(GL_TEXTURE_2D,
			    0,
			    getComponents(),
			    getTextureWidth(),
			    getTextureHeight(),
			    0,
			    getGLFormat(),
			    getGLComponentFormat(),
			    clrPixel);

		// The unscaled way
		/*
		System.out.println("******* width "+getImageWidth());
		System.out.println("******* height "+getImageHeight());
		System.out.println("******* format "+getGLFormat());
		System.out.println("******* comps "+getGLComponentFormat());
		System.out.println("******* text "+getTexture());
		System.out.println("******* text.length "+getTexture().length);
		*/

		gl.glTexSubImage2D(GL_TEXTURE_2D,
			    0,
			    0, 0,
			    getImageWidth(),
			    getImageHeight(),
			    getGLFormat(),
			    getGLComponentFormat(),
			    getTexture());

		// System.out.println("+++++++++");

		gl.glPixelStorei(GL_PACK_SWAP_BYTES, swapbytes[0]);
		gl.glPixelStorei(GL_PACK_LSB_FIRST, lsbfirst[0]);
		gl.glPixelStorei(GL_PACK_ROW_LENGTH, rowlength[0]);
		gl.glPixelStorei(GL_PACK_SKIP_ROWS, skiprows[0]);
		gl.glPixelStorei(GL_PACK_SKIP_PIXELS, skippixels[0]);
		gl.glPixelStorei(GL_PACK_ALIGNMENT, alignment[0]);
		gl.glPixelStorei(GL_UNPACK_SWAP_BYTES, unswapbytes[0]);
		gl.glPixelStorei(GL_UNPACK_LSB_FIRST, unlsbfirst[0]);
		gl.glPixelStorei(GL_UNPACK_ROW_LENGTH, unrowlength[0]);
		gl.glPixelStorei(GL_UNPACK_SKIP_ROWS, unskiprows[0]);
		gl.glPixelStorei(GL_UNPACK_SKIP_PIXELS, unskippixels[0]);
		gl.glPixelStorei(GL_UNPACK_ALIGNMENT, unalignment[0]);
		return glutReportErrors();
	}

	protected final boolean  glutReportErrors()
	{
	  int error;

	  while ((error = gl.glGetError()) != GL_NO_ERROR)
	    __glutWarning("GL error: "+glu.gluErrorString(error));
	  return error==GL_NO_ERROR;
	}

	protected static final void __glutWarning(String str)
	{
	  System.out.println("GLUT: Warning in (unamed): "+str+"\n");
	}
}

