/**
 * @(#) teaambient.java
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

public class teaambient extends Applet 
{
    teaambientCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new teaambientCanvas(d.width, d.height);
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
		Frame mainFrame = new Frame("teaambient");

		teaambient applet = new teaambient();

		applet.setSize(400, 600);
		applet.init();
		applet.start();

		mainFrame.add(applet);

		mainFrame.pack();
		mainFrame.setVisible(true);
	}


        /* Local GLCanvas extension class */


    private class teaambientCanvas extends GLCanvas
    {
	GLUTFunc glut = null;

        public teaambientCanvas(int w, int h)
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
    
        public void init()
        {
            System.out.println("init(): " + this);

	    glut = new GLUTFuncLightImpl(gl, glu);
	
            reshape(getSize().width, getSize().height);

	    float light_ambient[] =
	    {0.0f, 0.0f, 0.0f, 1.0f};
	    float light_diffuse[] =
	    {1.0f, 1.0f, 1.0f, 1.0f};
	    float light_specular[] =
	    {1.0f, 1.0f, 1.0f, 1.0f};
	/* light_position is NOT default value */
	    float light_position[] =
	    {1.0f, 0.0f, 0.0f, 0.0f};
	    float global_ambient[] =
	    {0.75f, 0.75f, 0.75f, 1.0f};

	    gl.glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
	    gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
	    gl.glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
	    gl.glLightfv(GL_LIGHT0, GL_POSITION, light_position);

	    gl.glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);

	    gl.glFrontFace(GL_CW);
	    gl.glEnable(GL_LIGHTING);
	    gl.glEnable(GL_LIGHT0);
	    gl.glEnable(GL_AUTO_NORMAL);
	    gl.glEnable(GL_NORMALIZE);
	    gl.glDepthFunc(GL_LESS);
	    gl.glEnable(GL_DEPTH_TEST);
	}

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

	    float low_ambient[] =
	    {0.1f, 0.1f, 0.1f, 1.0f};
	    float more_ambient[] =
	    {0.4f, 0.4f, 0.4f, 1.0f};
	    float most_ambient[] =
	    {1.0f, 1.0f, 1.0f, 1.0f};

	    gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	    /*  material has small ambient reflection */
	    gl.glMaterialfv(GL_FRONT, GL_AMBIENT, low_ambient);
	    gl.glMaterialf(GL_FRONT, GL_SHININESS, 40.0f);
	    gl.glPushMatrix();
	    gl.glTranslatef(0.0f, 2.0f, 0.0f);
	    glut.glutSolidTeapot(1.0f);
	    gl.glPopMatrix();

	    /*  material has moderate ambient reflection */
	    gl.glMaterialfv(GL_FRONT, GL_AMBIENT, more_ambient);
	    gl.glPushMatrix();
	    gl.glTranslatef(0.0f, 0.0f, 0.0f);
	    glut.glutSolidTeapot(1.0f);
	    gl.glPopMatrix();

	    /*  material has large ambient reflection */
	    gl.glMaterialfv(GL_FRONT, GL_AMBIENT, most_ambient);
	    gl.glPushMatrix();
	    gl.glTranslatef(0.0f, -2.0f, 0.0f);
	    glut.glutSolidTeapot(1.0f);
	    gl.glPopMatrix();
	    glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
	}

        public void reshape(int w, int h)
        {
	    gl.glViewport(0, 0, w, h);
	    gl.glMatrixMode(GL_PROJECTION);
	    gl.glLoadIdentity();
	    if (w <= h)
		gl.glOrtho(-4.0f, 4.0f, -4.0f * (float) h / (float) w,
		    4.0f * (float) h / (float) w, -10.0f, 10.0f);
	    else
		gl.glOrtho(-4.0f * (float) w / (float) h,
		    4.0f * (float) w / (float) h, -4.0f, 4.0f, -10.0f, 10.0f);
	    gl.glMatrixMode(GL_MODELVIEW);
	}

    }
}
