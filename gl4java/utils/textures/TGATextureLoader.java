package gl4java.utils.textures;

import gl4java.*;

import java.io.*;
import java.net.*;

/**
 * This is Class implements a TGA texture-loader !
 * At this time, this loader only supports 
 * loading files, which are saved with
 * the TGATextureGrabber !
 * This means: 24 bpp, RGB, uncompressed, no-colormap,
 *             no image id-field !
 *
 * @see IOTextureLoader
 * @see TextureLoader
 */   
public class TGATextureLoader
extends IOTextureLoader
{
  public TGATextureLoader(GLFunc gl, GLUFunc glu)
  {
	super(gl, glu);
  }

  protected boolean readTexture(InputStream is)
  {
       try {
           int cc;

	   glFormat=GL_RGB;
	    
	   DataInputStream reader = new DataInputStream ( is );

	    //write TGA header
	    reader.readByte(); //ID length, 0 because no image id field
	    reader.readByte(); //no color map
	    cc = reader.readByte(); //image type (24 bit RGB, uncompressed)
	    if(cc!=2)
	    {
		    reader.close();
		    System.out.println("TGATextureLoader: File is not 24bit RGB Data !");
		    error=true;
		    return false;
	    }
	    reader.readShort(); //color map origin, ignore because no color map
	    reader.readShort(); //color map length, ignore because no color map
	    reader.readByte(); //color map entry size, ignore because no color map
	    reader.readShort(); //x origin
	    reader.readShort(); //y origin

	    cc = reader.readByte(); // image width low byte
	    short s = (short)((short)cc & 0x00ff);
	    cc = reader.readByte(); // image width high byte
	    s = (short) ( (short)( ((short)cc & 0x00ff)<<8 ) | s );
	    imageWidth = (int)s;

	    cc = reader.readByte(); // image height low byte
	    s = (short)((short)cc & 0x00ff);
	    cc = reader.readByte(); // image height high byte
	    s = (short) ( (short)( ((short)cc & 0x00ff)<<8 ) | s );
	    imageHeight = (int)s;

	    cc=reader.readByte(); // 24bpp
	    if(cc!=24)
	    {
		    reader.close();
		    System.out.println("TGATextureLoader: File is not 24bpp Data !");
		    error=true;
		    return false;
	    }
	    reader.readByte(); //description bits
	    
	    if(3!=getComponents())
	    {
		    reader.close();
			System.out.println("TGATextureLoader: Currenly only RGB (24bit) data is supported !");
		    error=true;
		    return false;
	    }

	    pixel=new byte[imageWidth * imageHeight * 3];

	    //read TGA image data
	    reader.read(pixel, 0, pixel.length);

	    //process image data: 
	    // TGA pixels should be written in BGR format, 
	    // so R en B should be switched
	    byte tmp;
	    for (int i=0; i<imageWidth*imageHeight*3; i+=3)
	    {
	      tmp=pixel[i];
	      pixel[i]=pixel[i+2];
	      pixel[i+2]=tmp;
	    }
	    
	    reader.close();
	    setTextureSize();
	    return true;

    } catch (Exception ex) {
	    System.out.println("An exception occured, while loading a TGATexture");
	    System.out.println(ex);
	    error=true;
    }
    return false;
  }
}
  
