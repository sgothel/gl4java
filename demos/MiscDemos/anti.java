/**
 * @(#) anti.java
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

public class anti extends Applet 
{
    antiCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new antiCanvas(d.width, d.height);
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

	public static void main( String args[] ) {
		anti applet = 
		         new anti();

		Frame f = new Frame("anti");

		f.addWindowListener( new WindowAdapter()
				{
					public void windowClosed(WindowEvent e)
					{
						System.exit(0);
					}
					public void windowClosing(WindowEvent e)
					{
						windowClosed(e);
					}
				}
			);

		f.setLayout(new BorderLayout());
		f.add("Center", applet);
		applet.setSize(500,300);
		applet.init();
		applet.start();
		Dimension ps = applet.getPreferredSize();
		f.setBounds(-100,-100,99,99);
		f.setVisible(true);
		//f.setVisible(false);
		Insets i = f.getInsets();
		f.setBounds(0,0,
			    ps.width+i.left+i.right, 
		            ps.height+i.top+i.bottom);
		f.setVisible(true);
	}
        /* Local GLCanvas extension class */


    private class antiCanvas extends GLCanvas
    {
	GLUTFunc glut = null;

        public antiCanvas(int w, int h)
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
    
/*  Initialize antialia(float)Math.sing for RGBA mode, including alpha 
 *  blending, hint, and line width.  Print out implementation 
 *  specific info on line width granularity and width.
 */
        public void init()
        {
	    glut = new GLUTFuncLightImpl(gl, glu);
	
            reshape(getSize().width, getSize().height);

	    float values[]=new float[2];
	    gl.glGetFloatv (GL_LINE_WIDTH_GRANULARITY, values);
	    System.out.println("GL_LINE_WIDTH_GRANULARITY value is "+values[0]);

	    gl.glGetFloatv (GL_LINE_WIDTH_RANGE, values);
	    System.out.println("GL_LINE_WIDTH_RANGE values are "+
		values[0] + ", " +values[1]);

	    gl.glEnable (GL_LINE_SMOOTH);
	    gl.glEnable (GL_BLEND);
	    gl.glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	    gl.glHint (GL_LINE_SMOOTH_HINT, GL_DONT_CARE);
	    gl.glLineWidth (1.5f);

	    gl.glShadeModel(GL_FLAT);
	    gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	    gl.glDepthFunc(GL_LESS);
	    gl.glEnable(GL_DEPTH_TEST);
	}

        public void display()
	{
            if (glj.gljMakeCurrent() == false) return;
	    gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	    gl.glColor4f (1.0f, 1.0f, 1.0f, 1.0f);
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

