/**
 * @(#) depthcue.java
 * @(#) author: Silicon Graphics, Inc. (converted to Java by Ron Cemer)
 */

/*
 *  This program demonstrates lots of material properties.
 *  A single light source illuminates the objects.
 */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;
import gl4java.GLContext;
import gl4java.awt.GLCanvas;

import gl4java.utils.glut.*;

public class depthcue extends Applet 
{
    depthcueCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new depthcueCanvas(d.width, d.height);
        add("Center", canvas);
	}


        /* Start the applet */


    public void start()
    {
    }


        /* Stop the applet */


    public void stop()
    {
    }

	public static void main( String args[] ) 
	{
		Frame mainFrame = new Frame("teapots");

		depthcue applet = new depthcue();

		applet.setSize(400, 400);
		applet.init();
		applet.start();

		mainFrame.add(applet);

		mainFrame.pack();
		mainFrame.setVisible(true);
	}


        /* Local GLCanvas extension class */


    private class depthcueCanvas extends GLCanvas
    {
	GLUTFunc glut = null;

        public depthcueCanvas(int w, int h)
        {
            super(w, h);
            GLContext.gljNativeDebug = false;
            GLContext.gljClassDebug = false;
        }
    
        public void preInit()
        {
            doubleBuffer = true;
            stereoView = false;
        }
    
/*  Initialize depthcuealia(float)Math.sing for RGBA mode, including alpha 
 *  blending, hint, and line width.  Print out implementation 
 *  specific info on line width granularity and width.
 */
        public void init()
        {
	    glut = new GLUTFuncLightImpl(gl, glu);
	
            reshape(getSize().width, getSize().height);

	    float fogColor[] = {0.0f, 0.0f, 0.0f, 1.0f};

	     gl.glEnable(GL_FOG);
	     gl.glFogi (GL_FOG_MODE, GL_LINEAR);
	     gl.glHint (GL_FOG_HINT, GL_NICEST);  /*  per pixel   */
	     gl.glFogf (GL_FOG_START, 3.0f);
	     gl.glFogf (GL_FOG_END, 5.0f);
	     gl.glFogfv (GL_FOG_COLOR, fogColor);
	     gl.glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

	    gl.glShadeModel(GL_FLAT);
	    gl.glDepthFunc(GL_LESS);
	    gl.glEnable(GL_DEPTH_TEST);
	}

        public void display()
	{
            if (glj.gljMakeCurrent() == false) return;
	    gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	    gl.glColor3f (1.0f, 1.0f, 1.0f);
	    glut.glutWireIcosahedron();
	    glj.gljSwap();
	    glj.gljFree();
	}

        public void reshape(int w, int h)
	{
	    gl.glViewport(0, 0, w, h);
	    gl.glMatrixMode(GL_PROJECTION);
	    gl.glLoadIdentity();
	    glu.gluPerspective (45.0f, (float) w/(float) h, 3.0f, 5.0f);

	    gl.glMatrixMode(GL_MODELVIEW);
	    gl.glLoadIdentity ();
	    gl.glTranslatef (0.0f, 0.0f, -4.0f);  /*  move object into view   */
	}
    }
}

