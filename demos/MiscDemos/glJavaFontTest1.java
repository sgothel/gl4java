// Font rendering using GL4Java
// by Pontus Lidman
// (c) 2000 MathCore AB

import gl4java.awt.*;
import javax.swing.*;
import java.awt.Dimension;
import gl4java.GLContext;
import gl4java.GLFunc;

import java.awt.Font;
import java.awt.Shape;
import java.awt.font.*;
import java.awt.geom.*;

public class glJavaFontTest1 {


    protected class MyCanvas extends GLCanvas {


    public void drawString(String s,double x,double y) {

	Font font=new Font("timesroman",Font.PLAIN,12);
	AffineTransform identity=new AffineTransform();
	FontRenderContext frc=new FontRenderContext(identity,false,false);
	GlyphVector g=font.createGlyphVector(frc,s);
	Shape shp=g.getOutline();
	FlatteningPathIterator path=new FlatteningPathIterator(shp.getPathIterator(identity),0.05);

	double [] coords=new double[6];
	int type;
	 
	while (!path.isDone()) {
	    type=path.currentSegment(coords);
	    switch(type) {
	    case PathIterator.SEG_MOVETO:
		gl.glBegin(GL_LINE_STRIP);
		gl.glVertex2d(x+coords[0],y+coords[1]);
		break;
	    case PathIterator.SEG_LINETO:
		gl.glVertex2d(x+coords[0],y+coords[1]);
		break;
	    case PathIterator.SEG_CLOSE:
		gl.glEnd();
		break;
	    }
	    path.next();
	}
    }

	public MyCanvas(int w, int h) {
	    super(w,h);
	    GLContext.gljNativeDebug = false;
	    GLContext.gljClassDebug  = false;
	}

	public void init() {
	    gl.glMatrixMode(GL_PROJECTION);
	    gl.glOrtho(-50,50,50,-50,-50.0,50.0);
	    gl.glMatrixMode(GL_MODELVIEW);
	    glj.gljCheckGL();
	}

	public void reshape(int w, int h) {
	    Dimension d=new Dimension(w,h);
	    if (!cvsIsInit()) return;
	    if( glj.gljMakeCurrent() == false ) {
		System.out.println("problem in use() method");
		return;
	    }
	    setSize(d);
	    gl.glViewport(0,0,w,h);
	    glj.gljCheckGL();
	    glj.gljFree();
	}

	public void display() {
	    int i;

	    if( glj.gljMakeCurrent() == false ) {
		System.out.println("problem in use() method");
		return;
	    }
	  
	    gl.glPushMatrix();
	    gl.glClear(GL_COLOR_BUFFER_BIT);
	    glu.gluLookAt(0, 0, 20, 0, 0, 0, 0, 1, 0);

	    gl.glColor3d(1,1,1);
	    drawString("Hello world!",-40,0);

	    
	    gl.glPopMatrix();
	    glj.gljSwap();
	    glj.gljCheckGL();
	    glj.gljFree();
	}
    }

    protected MyCanvas cvs;    
    protected JFrame frame;

    public glJavaFontTest1() {
	frame = new JFrame( "OpenGL" );
	cvs= new MyCanvas(640,480);
	frame.setSize(640,480);	
	frame.getContentPane().add("Center", cvs);	
	frame.setVisible(true);	
    }

    public static void main(java.lang.String[] args) {
	try {
	    glJavaFontTest1 g=new glJavaFontTest1();
	} catch (Throwable exception) {
	    System.err.println("Exception occurred in main()");
	    exception.printStackTrace(System.out);
	}
    }
}
