package gl4java.utils.textures;

import gl4java.*;

import java.io.*;
import java.net.*;

/**
 * This abstract Class defines the interface
 * for ALL texture Grabbers !
 * The TextureGrabber's implementations are used to
 * save the pixels of the GL Context to a file !
 *
 * @see TextureTool
 * @see	GLImageCanvas
 */   
public abstract class TextureGrabber
implements GLEnum, GLUEnum
{
  protected byte[] pixels=null;
  protected int xpos;
  protected int ypos;
  protected int width;
  protected int height;
  protected GLFunc gl;

  public TextureGrabber(GLFunc gl)
  {
    this.gl=gl;
  }

  /**
   * Grab the pixels outta the OpenGL Frambuffer
   *
   * @param source the frambuffer source (like glReadBuffer), 
   *		   can be: GL_FRONT, GL_BACK, ....
   * @param x      the xpos
   * @param y      the ypos
   * @param w      the width
   * @param h      the height
   *
   * @see GLFunc#glReadBuffer
   */
  public void grabPixels(int source, int x, int y, int w, int h) 
  {
	int swapbytes[]={0}, lsbfirst[]={0}, rowlength[]={0};
	int skiprows[]={0}, skippixels[]={0}, alignment[]={0};

    xpos=x;
    ypos=y;
    width=w;
    height=h;
    pixels=new byte[w * h * 3];
    
    /* Save current modes. */
    gl.glGetIntegerv(GL_PACK_SWAP_BYTES, swapbytes);
    gl.glGetIntegerv(GL_PACK_LSB_FIRST, lsbfirst);
    gl.glGetIntegerv(GL_PACK_ROW_LENGTH, rowlength);
    gl.glGetIntegerv(GL_PACK_SKIP_ROWS, skiprows);
    gl.glGetIntegerv(GL_PACK_SKIP_PIXELS, skippixels);
    gl.glGetIntegerv(GL_PACK_ALIGNMENT, alignment);

    /* Little endian machines (DEC Alpha, Intel 80x86, ... for example) could
    benefit from setting GL_PACK_LSB_FIRST to GL_TRUE
    instead of GL_FALSE, but this would require changing the
    generated bitmaps too. */
    gl.glPixelStorei(GL_PACK_SWAP_BYTES, 0);
    gl.glPixelStorei(GL_PACK_LSB_FIRST, 1);
    gl.glPixelStorei(GL_PACK_ROW_LENGTH, w);
    gl.glPixelStorei(GL_PACK_SKIP_ROWS, 0);
    gl.glPixelStorei(GL_PACK_SKIP_PIXELS, 0);
    gl.glPixelStorei(GL_PACK_ALIGNMENT, 1);

    //get viewport data
    gl.glReadBuffer(source);
    gl.glReadPixels(x, y, w, h, GL_RGB, GL_UNSIGNED_BYTE, pixels);    

    gl.glPixelStorei(GL_PACK_SWAP_BYTES, swapbytes[0]);
    gl.glPixelStorei(GL_PACK_LSB_FIRST, lsbfirst[0]);
    gl.glPixelStorei(GL_PACK_ROW_LENGTH, rowlength[0]);
    gl.glPixelStorei(GL_PACK_SKIP_ROWS, skiprows[0]);
    gl.glPixelStorei(GL_PACK_SKIP_PIXELS, skippixels[0]);
    gl.glPixelStorei(GL_PACK_ALIGNMENT, alignment[0]);

  }

  public boolean write2File(String fname)
  {
    try {
    	    OutputStream os= new java.io.FileOutputStream(fname);
	    return write2File(os);
    } catch (Exception ex) {
    	System.out.println("TGATextureGrabber.write2File <"+
		fname+"> failed !\n"+ex);
    }
    return false;
  }

  public boolean write2File(URL base, String uri)
  {
    try {
	    URL url = new URL (base, uri);
	    URLConnection urlcon = url.openConnection();
	    urlcon.setDoOutput(true);
	    OutputStream os = urlcon.getOutputStream();
	    return write2File(os);
    } catch (Exception ex) {
    	System.out.println("TGATextureGrabber.write2File <"+
		base+" / "+uri+"> failed !\n"+ex);
    }
    return false;
  }

  public abstract boolean write2File(OutputStream os);
}
  
