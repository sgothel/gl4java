package gl4java.utils.textures;

import gl4java.*;

import java.io.*;
import java.net.*;

public class TGATextureGrabber
extends TextureGrabber
{
  public TGATextureGrabber(GLFunc gl)
  {
    super(gl);
  }

  public boolean write2File(OutputStream os)
  {
    try {
	    DataOutputStream fout= new DataOutputStream(os);
	    
	    //write TGA header
	    fout.writeByte(0); //ID length, 0 because no image id field
	    fout.writeByte(0); //no color map
	    fout.writeByte(2); //image type (24 bit RGB, uncompressed)
	    fout.writeShort(0); //color map origin, ignore because no color map
	    fout.writeShort(0); //color map length, ignore because no color map
	    fout.writeByte(0); //color map entry size, ignore because no color map
	    fout.writeShort(0); //x origin
	    fout.writeShort(0); //y origin
	    short s = (short)width;
	    fout.writeByte((byte)(s & 0x00ff));      //image width low byte
	    fout.writeByte((byte)((s & 0xff00)>>8)); //image width high byte
	    s = (short)height;
	    fout.writeByte((byte)(s & 0x00ff));      //image height low byte
	    fout.writeByte((byte)((s & 0xff00)>>8)); //image height high byte
	    fout.writeByte(24); //bpp
	    fout.writeByte(0); //description bits
	    
	    //process image data: 
	    // TGA pixels should be written in BGR format, 
	    // so R en B should be switched
	    byte tmp;
	    for (int i=0; i<(width*height*3); i+=3) {
	      tmp=pixels[i];
	      pixels[i]=pixels[i+2];
	      pixels[i+2]=tmp;
	    }
	    
	    //write TGA image data
	    fout.write(pixels, 0, pixels.length);
	    
	    fout.flush();
	    fout.close();
    } catch (Exception ex) {
    	System.out.println("TGATextureGrabber.write2File <os> failed !\n"+ex);
	return false;
    }
    return true;
  }
}
  
