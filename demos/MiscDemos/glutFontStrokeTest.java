// Test program for GLUT Stroke font rendering functions
// by Pontus Lidman
// Copyright 2000 MathCore AB
//
// This file/package is licensed under the terms of the LPGL 
// with the permission of Pontus Lidman / Mathcore !
//

import gl4java.utils.glut.*;
import gl4java.utils.glut.fonts.*;

import gl4java.awt.*;
import java.applet.*;
import java.awt.*;
import java.awt.Dimension;
import gl4java.GLContext;
import gl4java.GLFunc;

public class glutFontStrokeTest extends Applet {

    protected GLUTFunc glut = null;
    
    protected class MyCanvas extends GLCanvas {

	public MyCanvas(int w, int h) {
	    super(w,h);
	    GLContext.gljNativeDebug = false;
	    GLContext.gljClassDebug  = false;
	}

	public void init() {
	    glut = new GLUTFuncLightImplWithFonts(gl, glu);
	
	    gl.glMatrixMode(GL_PROJECTION);
	    gl.glOrtho(-1000,1000,-1000,1000,-50.0,50.0);
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

	    gl.glColor3d(0.3,0,0);
	
	    gl.glBegin(GL_POLYGON);
	    gl.glVertex2d(0,-0.5);
	    gl.glVertex2d(0.5,0.5);
	    gl.glVertex2d(-0.5,0.5);
	    gl.glEnd();

	    gl.glColor3d(1,1,1);
	    gl.glPushMatrix();
	    gl.glTranslated(-900,-100,0);
	    glut.glutStrokeString(glut.GLUT_STROKE_ROMAN,"Roman Font");
	    gl.glPopMatrix();
	    gl.glPushMatrix();
	    gl.glTranslated(-900,100,0);
	    glut.glutStrokeString(glut.GLUT_STROKE_MONO_ROMAN,"Mono Roman Font");
	    gl.glPopMatrix();
	    
	    gl.glPopMatrix();
	    glj.gljSwap();
	    glj.gljCheckGL();
	    glj.gljFree();
	}
    }

    protected MyCanvas cvs;    

    public void init()
    {
        Dimension d = getSize();
        setLayout(new BorderLayout());
	cvs= new MyCanvas(d.width,d.height);
	add("Center", cvs);	
    }

    public void start()
    {
    }


    public void stop()
    {
    }

    public static void main(java.lang.String[] args) {
	try {
		Frame mainFrame = new Frame("Stroke Test");

	        glutFontStrokeTest applet=new glutFontStrokeTest();

		applet.setSize(400, 400);
		applet.init();
		applet.start();

		mainFrame.add(applet);

		mainFrame.pack();
		mainFrame.setVisible(true);
	} catch (Throwable exception) {
	    	System.err.println("Exception occurred in main()");
	    	exception.printStackTrace(System.out);
	}
    }
}
