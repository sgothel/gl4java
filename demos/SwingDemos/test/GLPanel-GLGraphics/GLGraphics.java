/**
 * @(#) GLGraphics.java
 */

//package gl4java.awt;

import gl4java.*;
import gl4java.utils.glut.*;
import gl4java.utils.glut.fonts.*;

import java.awt.*;
import java.awt.image.*;
import java.awt.event.*;
import java.awt.image.ImageObserver;
import java.text.*;

public class GLGraphics
	extends java.awt.Graphics
	implements Cloneable
{

protected final boolean debug = false;

/**
 * this is the original Graphics context
 */
protected Graphics g = null;

protected GLContext glj = null;
protected GLFunc gl = null;
protected GLUFunc glu = null;
protected GLUTFunc glut = null;
protected int currentGlutFont = GLUTEnum.GLUT_BITMAP_TIMES_ROMAN_10;
protected int x_orig = 0;
protected int y_orig = 0;
protected int z_orig = 0;

//protected Color clr = Color.black;
//protected Shape clip = null;
//protected Font fnt = null;

public GLGraphics (Graphics g, GLContext glj, GLFunc gl, GLUFunc glu) {
	this.g=g;
	this.glj=glj;
	this.gl=gl;
	this.glu=glu;
	glut = new GLUTFuncLightImplWithFonts(gl, glu);
}

public GLGraphics (Graphics g, GLContext glj, GLFunc gl, GLUFunc glu, GLUTFunc glut) {
	this.g=g;
	this.glj=glj;
	this.gl=gl;
	this.glu=glu;
	this.glut=glut;
}

protected GLGraphics (GLContext glj, GLFunc gl, GLUFunc glu, GLUTFunc glut) {
	this.glj=glj;
	this.gl=gl;
	this.glu=glu;
	this.glut=glut;
}

protected Object clone()
	 throws CloneNotSupportedException
{
	GLGraphics glg = new GLGraphics(g, glj, gl, glu, glut);
	//glg.g=g.create();
	glg.x_orig=x_orig;
	glg.y_orig=y_orig;
	glg.z_orig=z_orig;
	glg.currentGlutFont=currentGlutFont;

	//glg.clr = clr;
	//glg.clip=clip;
	//glg.fnt = fnt;

	return glg;
}

public Graphics create () {
	try {
		return ((Graphics)clone());
	}
	catch (CloneNotSupportedException _) {
		return (null);
	}
}

public Graphics create ( int x, int y, int width, int height ) {
	if(debug)
	System.out.println("Graphics::create("+x+","+y+","+width+","+height+")");
	// slow, generic version
	Graphics g = create();
		
	// modify cloned state acording to request
	g.translate( x, y);
	g.clipRect( 0, 0, width, height); // spec says this should be the intersection

	return g;
}

public void clearRect ( int x, int y, int width, int height ) 
{
	if(debug)
	System.out.println("Graphics::clearRect("+x+","+y+","+width+","+height+")");
}

public void clipRect ( int x, int y, int width, int height )
{ g.clipRect(x, y, width, height); 
}

public void copyArea ( int x, int y, int width, int height, int dx, int dy )
{
	if(debug)
	System.out.println("Graphics::copyArea("+x+","+y+","+width+","+height+","+dx+","+dy+")");
}

public void dispose () 
{
	//g.dispose();
}

public void drawArc ( int x, int y, int width, int height,
		      int startAngle, int arcAngle )
{
	if(debug)
	System.out.println("Graphics::drawArc("+x+","+y+","+width+","+height+","+startAngle+","+arcAngle+")");
}

public boolean drawImage (Image img, int x, int y, Color bgcolor,
			  ImageObserver observer)
{ 
	if(debug)
	System.out.println("Graphics::drawImage("+x+","+y+","+bgcolor+")");
	if( glj.gljMakeCurrent() == false ) {
		System.out.println("GLGraphics: problem in use() method");
		return false;
        }
	return false;
}

public boolean drawImage ( Image img, int x, int y, ImageObserver observer)
{ 
	if(debug)
	System.out.println("Graphics::drawImage("+x+","+y+")");
	if( glj.gljMakeCurrent() == false ) {
		System.out.println("GLGraphics: problem in use() method");
		return false;
        }

	glDrawImage(observer, img, x_orig+x, y_orig+y, z_orig);
	return false;
}

public boolean drawImage ( Image img, int x, int y, int width, int height, 
			   Color background, ImageObserver observer )
{ 
	if(debug)
	System.out.println("Graphics::drawImage("+x+","+y+","+width+","+height+","+background+")");
	if( glj.gljMakeCurrent() == false ) {
		System.out.println("GLGraphics: problem in use() method");
		return false;
        }
	return false;
}

public boolean drawImage ( Image img, int x, int y, int width, int height,
			   ImageObserver observer)
{ 
	if(debug)
	System.out.println("Graphics::drawImage("+x+","+y+","+width+","+height+")");
	if( glj.gljMakeCurrent() == false ) {
		System.out.println("GLGraphics: problem in use() method");
		return false;
        }
	return false;
}

public boolean drawImage ( Image img,
		int dx0, int dy0, int dx1, int dy1,
		int sx0, int sy0, int sx1, int sy1,
		Color bgColor, ImageObserver observer)
{ 
	if(debug)
	System.out.println("Graphics::drawImage(..)");
	if( glj.gljMakeCurrent() == false ) {
		System.out.println("GLGraphics: problem in use() method");
		return false;
        }
	return false;
}

public boolean drawImage ( Image img,
		int dx1, int dy1, int dx2, int dy2,
		int sx1, int sy1, int sx2, int sy2,
		ImageObserver observer)
{ 
	if(debug)
	System.out.println("Graphics::drawImage(..)");
	return false;
}

public void drawLine ( int x1, int y1, int x2, int y2 )
{
	if(debug)
	System.out.println("Graphics("+x_orig+","+y_orig+")::drawLine("+x1+","+y1+","+x2+","+y2+")");
	if( glj.gljMakeCurrent() == false ) {
		System.out.println("GLGraphics: problem in use() method");
		return;
        }
        gl.glBegin(GLEnum.GL_LINES);
		gl.glVertex3i( x_orig+x1, y_orig+y1, z_orig);
		gl.glVertex3i( x_orig+x2, y_orig+y2, z_orig);
	gl.glEnd();
}

public void drawOval ( int x, int y, int width, int height )
{
	if(debug)
	System.out.println("Graphics::drawOval("+x+","+y+","+width+","+height+")");
}

public void drawPolygon ( int xPoints[], int yPoints[], int nPoints )
{
	if(debug)
	System.out.println("Graphics("+x_orig+","+y_orig+")::drawPolygon(...)");
	if( glj.gljMakeCurrent() == false ) {
		System.out.println("GLGraphics: problem in use() method");
		return;
        }
        gl.glPolygonMode(GLEnum.GL_FRONT_AND_BACK, GLEnum.GL_LINE);
        gl.glBegin(GLEnum.GL_POLYGON);
	for(int i=0; i<nPoints; i++)
		gl.glVertex3i( x_orig+xPoints[i], y_orig+yPoints[i], z_orig);
	gl.glEnd();
}

public void drawPolyline ( int xPoints[], int yPoints[], int nPoints )
{
	if(debug)
	System.out.println("Graphics("+x_orig+","+y_orig+")::drawPolyline(...)");
	if( glj.gljMakeCurrent() == false ) {
		System.out.println("GLGraphics: problem in use() method");
		return;
        }
        gl.glPolygonMode(GLEnum.GL_FRONT_AND_BACK, GLEnum.GL_LINE);
        gl.glBegin(GLEnum.GL_POLYGON);
	for(int i=0; i<nPoints; i++)
		gl.glVertex3i( x_orig+xPoints[i], y_orig+yPoints[i], z_orig);
	gl.glEnd();
}

public void drawRoundRect ( int x, int y, int width, int height,
			    int arcWidth, int arcHeight)
{
	if(debug)
	System.out.println("Graphics::drawRoundRect("+x+","+y+","+width+","+height+","+arcWidth+","+arcHeight+")");
}

public void drawString ( String str, int x, int y )
{
	if(debug)
	System.out.println("Graphics("+x_orig+","+y_orig+")::drawString("+x+","+y+","+str+")");
	if( glj.gljMakeCurrent() == false ) {
		System.out.println("GLGraphics: problem in use() method");
		return;
        }
	gl.glRasterPos3d(x_orig+x, y_orig+y, z_orig);
	glut.glutBitmapString(currentGlutFont,str);
}

public void drawString(java.text.AttributedCharacterIterator aci, int x, int y)
{
	if(debug)
	System.out.println("Graphics("+x_orig+","+y_orig+")::drawStringACI("+x+","+y+")");
	StringBuffer sb = new StringBuffer();
        for(char c = aci.first(); c != CharacterIterator.DONE; c = aci.next())
		sb.append(c);
	drawString(sb.toString(), x, y);
}

public void fillArc ( int x, int y, int width, int height,
		      int startAngle, int arcAngle )
{
	if(debug)
	System.out.println("Graphics::fillArc("+x+","+y+","+width+","+height+","+startAngle+","+arcAngle+")");
}

public void fillOval ( int x, int y, int width, int height )
{
	if(debug)
	System.out.println("Graphics::fillOval("+x+","+y+","+width+","+height+")");
}

public void fillPolygon ( int xPoints[], int yPoints[], int nPoints )
{
	if(debug)
	System.out.println("Graphics::fillPolygon(..)");
}

public void fillRect ( int x, int y, int width, int height )
{
	if(debug)
	System.out.println("Graphics::fillRect("+x+","+y+","+width+","+height+")");
	if( glj.gljMakeCurrent() == false ) {
		System.out.println("GLGraphics: problem in use() method");
		return;
        }
        gl.glPolygonMode(GLEnum.GL_FRONT_AND_BACK, GLEnum.GL_FILL);
        gl.glBegin(GLEnum.GL_POLYGON);
		gl.glVertex3i( x_orig+x, y_orig+y, z_orig);
		gl.glVertex3i( x_orig+x+width, y_orig+y, z_orig);
		gl.glVertex3i( x_orig+x+width, y_orig+y+height, z_orig);
		gl.glVertex3i( x_orig+x, y_orig+y+height, z_orig);
		gl.glVertex3i( x_orig+x, y_orig+y, z_orig);
	gl.glEnd();
}

public void fillRoundRect ( int x, int y, int width, int height,
			 int arcWidth, int arcHeight )
{
	if(debug)
	System.out.println("Graphics::fillRoundRect("+x+","+y+","+width+","+height+","+arcWidth+","+arcHeight+")");
}

public Shape getClip ()
{ return g.getClip(); }

public Rectangle getClipBounds()
{ return null; }

public Color getColor()
{ return g.getColor(); }

public Font getFont()
{ return g.getFont(); }

public FontMetrics getFontMetrics ( Font fnt )
{ return g.getFontMetrics(fnt); }

public void setClip ( Shape clip )
{ g.setClip(clip); }

public void setClip ( int x, int y, int width, int height )
{ g.setClip(x, y, width, height); }

public void setColor ( Color clr )
{
  if(debug)
  System.out.println("Graphics("+x_orig+","+y_orig+")::setColor("+clr+")");
	g.setColor(clr);
	if( glj.gljMakeCurrent() == false ) {
		System.out.println("GLGraphics: problem in use() method");
		return;
        }
	gl.glColor4d(clr.getRed()/255.0, clr.getGreen()/255.0, 
	             clr.getBlue()/255.0, clr.getAlpha()/255.0);
}

public void setFont ( Font newFnt )
{ g.setFont(newFnt); 
  if(debug)
  System.out.println("Graphics("+(x_orig)+","+(y_orig)+")::setFont("+newFnt.getName()+" / "+ newFnt.getFamily()+" / "+ newFnt.getSize()+")");
  switch(newFnt.getSize())
  {
  	case 8:
		currentGlutFont = GLUTEnum.GLUT_BITMAP_8_BY_13;
		break;
  	case 9:
		currentGlutFont = GLUTEnum.GLUT_BITMAP_9_BY_15;
		break;
  	case 10:
		currentGlutFont = GLUTEnum.GLUT_BITMAP_TIMES_ROMAN_10;
		break;
  	case 24:
		currentGlutFont = GLUTEnum.GLUT_BITMAP_TIMES_ROMAN_24;
		break;
	/*
  	case 10:
		currentGlutFont = GLUTEnum.GLUT_BITMAP_HELVETICA_10;
		break;
	*/
  	case 12:
		currentGlutFont = GLUTEnum.GLUT_BITMAP_HELVETICA_12;
		break;
  	case 18:
		currentGlutFont = GLUTEnum.GLUT_BITMAP_HELVETICA_18;
		break;
	default:
		currentGlutFont = GLUTEnum.GLUT_BITMAP_TIMES_ROMAN_10;
   }
}

public void setPaintMode()
{}

public void setXORMode ( Color newXorClr )
{}

public void translate ( int x, int y )
{ 
  x_orig+=x;
  y_orig+=y;
  if(debug)
  System.out.println("Graphics("+(x_orig-x)+","+(y_orig-y)+")::translate("+x+","+y+") -> ("+x_orig+","+y_orig+")");
  g.translate(x, y); 
}

protected void glDrawImage(ImageObserver observer, Image image, 
 			   int xpos, int ypos, int zpos)
{
    int imageWidth = image.getWidth(observer);
    int imageHeight = image.getHeight(observer);
    int glFormat=GLEnum.GL_RGB; //def. RGB type
    int comps=3; //def. RGB type

    if(debug)
	System.out.println("Graphics("+(x_orig)+","+(y_orig)+")::glDrawImage("+xpos+","+ypos+") ("+imageWidth+","+imageHeight+")");

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

    PixelGrabber pp=new PixelGrabber(image,
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
	return;
    }
    if ((pp.getStatus() & ImageObserver.ABORT) != 0) 
    {
	System.err.println("image fetch aborted or errored");
	return;
    }

    /* This is Java2 only code :-(
    int imagetype = image.getType();
    switch(imagetype)
    {
	case BufferedImage.TYPE_INT_RGB:
	    glFormat=GLEnum.GL_RGB;
    	    comps=3;
	    break;
	case BufferedImage.TYPE_INT_ARGB:
	case BufferedImage.TYPE_INT_ARGB_PRE:
	    glFormat=GLEnum.GL_RGBA;
    	    comps=4;
	    break;
	default:
	    System.err.println("unsupported format: "+imagetype);
	    return;
    };
    */

    byte[] pixel=new byte[imageWidth * imageHeight * comps];
    
    byte alpha=0;
    byte red=0;
    byte green=0;
    byte blue=0;
    int offset=0;
    int aPixel;
    int y_desc, y_asc;
    for(y_desc=imageHeight-1, y_asc=0; y_desc>=0; y_desc--, y_asc++)
    {
      for(int x=0;x<imageWidth;x++)
      {
	aPixel = iPixels[y_desc*imageWidth + x];

	if(glFormat==GLEnum.GL_RGBA)
	   alpha =new Integer( (aPixel  >> 24) & 0xff ).byteValue();
	red   =new Integer( (aPixel  >> 16) & 0xff ).byteValue();
	green =new Integer( (aPixel  >>  8) & 0xff ).byteValue();
	blue  =new Integer( (aPixel       ) & 0xff ).byteValue();
	
	pixel[offset++]=red;
	pixel[offset++]=green;
	pixel[offset++]=blue;
	if(glFormat==GLEnum.GL_RGBA)
	    pixel[offset++]=alpha;
      }
    }
    gl.glPixelStorei(GLEnum.GL_UNPACK_ALIGNMENT, 1);
    gl.glDrawBuffer(GLEnum.GL_FRONT);
    gl.glRasterPos3i(xpos, ypos+imageHeight, zpos);
    gl.glDrawPixels(imageWidth, imageHeight, 
    		    glFormat, GLEnum.GL_UNSIGNED_BYTE,
                    pixel);
    gl.glDrawBuffer(GLEnum.GL_BACK);
}
}
