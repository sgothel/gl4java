/**
 * @(#) accanti.java
 * @(#) author: Silicon Graphics, Inc. (converted to Java by Sven Goethel)
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

public class accanti extends Applet 
{
    accantiCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new accantiCanvas(d.width, d.height);
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
            GLContext.gljNativeDebug = true;
            GLContext.gljClassDebug = true;

		accanti applet = 
		         new accanti();

		Frame f = new Frame("accanti");

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
		f.setVisible(false);
		Insets i = f.getInsets();
		f.setBounds(0,0,
			    ps.width+i.left+i.right, 
		            ps.height+i.top+i.bottom);
		f.setVisible(true);
	}

        /* Local GLCanvas extension class */


    private class accantiCanvas extends GLCanvas
    {
        int teapotList;
	GLUTFunc glut = null;

        public accantiCanvas(int w, int h)
        {
            super(w, h);
        }
    
        public void preInit()
        {
            doubleBuffer = true;
            stereoView = false;
	    accumSize = 8;
        }
    

	boolean hasAccumulatorBits = false;

	public void init()
	{
	    int aRbits[] = { 0 };
	    int aGbits[] = { 0 };
	    int aBbits[] = { 0 };
	    int aAbits[] = { 0 };

	    glut = new GLUTFuncLightImpl(gl, glu);
	
            reshape(getSize().width, getSize().height);

	    float mat_ambient[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	    float mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	    float light_position[] = { 0.0f, 0.0f, 10.0f, 1.0f };
	    float lm_ambient[] = { 0.2f, 0.2f, 0.2f, 1.0f };

	    gl.glGetIntegerv(GL_ACCUM_RED_BITS, aRbits);
	    gl.glGetIntegerv(GL_ACCUM_GREEN_BITS, aGbits);
	    gl.glGetIntegerv(GL_ACCUM_BLUE_BITS, aBbits);
	    gl.glGetIntegerv(GL_ACCUM_ALPHA_BITS, aAbits);

	    System.out.println("Accumulation Buffer Bits:");
	    System.out.println("\t red:   "+aRbits[0]);
	    System.out.println("\t green: "+aGbits[0]);
	    System.out.println("\t blue:  "+aBbits[0]);
	    System.out.println("\t alpha: "+aAbits[0]);

	    hasAccumulatorBits = aRbits[0] > 0 || aGbits[0] > 0 ||
	                         aBbits[0] > 0 || aAbits[0] > 0 ;

	    System.out.println("Has Accumulator Bits: "+hasAccumulatorBits);

	    gl.glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	    gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	    gl.glMaterialf(GL_FRONT, GL_SHININESS, 50.0f);
	    gl.glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	    gl.glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lm_ambient);
	    
	    gl.glEnable(GL_LIGHTING);
	    gl.glEnable(GL_LIGHT0);
	    gl.glDepthFunc(GL_LESS);
	    gl.glEnable(GL_DEPTH_TEST);
	    gl.glShadeModel (GL_FLAT);

	    gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	    gl.glClearAccum(0.0f, 0.0f, 0.0f, 0.0f);
	}

	void displayObjects() 
	{
	    float torus_diffuse[] = { 0.7f, 0.7f, 0.0f, 1.0f };
	    float cube_diffuse[] = { 0.0f, 0.7f, 0.7f, 1.0f };
	    float sphere_diffuse[] = { 0.7f, 0.0f, 0.7f, 1.0f };
	    float octa_diffuse[] = { 0.7f, 0.4f, 0.4f, 1.0f };
	    
	    gl.glPushMatrix ();
	    gl.glRotatef (30.0f, 1.0f, 0.0f, 0.0f);

	    gl.glPushMatrix ();
	    gl.glTranslatef (-0.80f, 0.35f, 0.0f); 
	    gl.glRotatef (100.0f, 1.0f, 0.0f, 0.0f);
	    gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, torus_diffuse);
	    glut.glutSolidTorus (0.275f, 0.85f, 16, 16);
	    gl.glPopMatrix ();

	    gl.glPushMatrix ();
	    gl.glTranslatef (-0.75f, -0.50f, 0.0f); 
	    gl.glRotatef (45.0f, 0.0f, 0.0f, 1.0f);
	    gl.glRotatef (45.0f, 1.0f, 0.0f, 0.0f);
	    gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, cube_diffuse);
	    glut.glutSolidCube (1.5f);
	    gl.glPopMatrix ();

	    gl.glPushMatrix ();
	    gl.glTranslatef (0.75f, 0.60f, 0.0f); 
	    gl.glRotatef (30.0f, 1.0f, 0.0f, 0.0f);
	    gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, sphere_diffuse);
	    glut.glutSolidSphere (1.0f, 16, 16);
	    gl.glPopMatrix ();

	    gl.glPushMatrix ();
	    gl.glTranslatef (0.70f, -0.90f, 0.25f); 
	    gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, octa_diffuse);
	    glut.glutSolidOctahedron ();
	    gl.glPopMatrix ();

	    gl.glPopMatrix ();
	}

	public void display()
	{
	    int viewport[]=new int[4];
	    int jitter;
	    int ACSIZE=8;

            if (glj.gljMakeCurrent() == false) return;

	    gl.glGetIntegerv (GL_VIEWPORT, viewport);
	    glj.gljCheckGL();

	    if(hasAccumulatorBits)
		    gl.glClear(GL_ACCUM_BUFFER_BIT);
	    glj.gljCheckGL();

	    for (jitter = 0; jitter < ACSIZE; jitter++) {
		gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		gl.glPushMatrix ();

	/*	Note that 4.5f is the distance in world space between
	 *	left and right and bottom and top.
	 *	This formula converts fractional pixel movement to 
	 *	world coordinates.
	 */
		gl.glTranslatef (/*j8[jitter].x**/4.5f/viewport[2],
		    /*j8[jitter].y**/4.5f/viewport[3], 0.0f);
		displayObjects ();
		gl.glPopMatrix ();
	        if(hasAccumulatorBits)
			gl.glAccum(GL_ACCUM, 1.0f/(float)ACSIZE);
		glj.gljCheckGL();
	    }
	    if(hasAccumulatorBits)
		    gl.glAccum (GL_RETURN, 1.0f);
	    glj.gljCheckGL();

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
		gl.glOrtho (-2.25f, 2.25f, -2.25f*h/w, 2.25f*h/w, -10.0f, 10.0f);
	    else 
		gl.glOrtho (-2.25f*w/h, 2.25f*w/h, -2.25f, 2.25f, -10.0f, 10.0f);
	    gl.glMatrixMode(GL_MODELVIEW);
	}
    }
}
