/**
 * @(#) TriangleRotate.java
 * @(#) author: Joe Zimmerman (converted to Java by Sven Goethel)
 */

/* This program is free software under the license of LGPL */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;
import gl4java.GLContext;
import gl4java.awt.GLAnimCanvas;
import gl4java.applet.SimpleGLAnimApplet1;

public class TriangleRotate extends SimpleGLAnimApplet1 
{

    public void init()
    {
	super.init();
        Dimension d = getSize();
        canvas = new gldemo(d.width, d.height);
        add("Center", canvas);
    }

	public static void main( String args[] ) {
                GLContext.gljNativeDebug = true;
                GLContext.gljClassDebug = true;
		TriangleRotate applet = 
		         new TriangleRotate();

		Frame f = new Frame("TriangleRotate");

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

    private class gldemo extends GLAnimCanvas
    {
	float rotate;

	float LightAmbient[]  = { 0.75f, 0.75f, 0.75f, 1.5f};
	float LightDiffuse[]  = { 1.0f, 1.0f, 1.0f, 0.9f};
	float LightSpecular[] = { 0.8f, 0.8f, 0.8f, 1.0f};

        public gldemo(int w, int h)
        {
            super(w, h);
            GLContext.gljNativeDebug = false;
            GLContext.gljClassDebug = false;
            setAnimateFps(30.0);
        }
    
        public void preInit()
        {
            doubleBuffer = true;
            stereoView = false;
	    createOwnWindow = true;
        }
    
        public void init()
        {
		reshape(getSize().width, getSize().height);

		gl.glEnable(GL_LIGHT0);
		gl.glLightfv(GL_LIGHT0, GL_AMBIENT, LightAmbient);
		gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, LightDiffuse);
		gl.glLightfv(GL_LIGHT0, GL_SPECULAR, LightSpecular);

		glj.gljCheckGL();
        }
    
        public void reshape(int width, int height)
        {
		gl.glMatrixMode(GL_PROJECTION);
		gl.glLoadIdentity();
		glu.gluPerspective(45, (float)width/(float)height, 1, 700);
		gl.glMatrixMode(GL_MODELVIEW);
		gl.glLoadIdentity();
            	gl.glViewport(0,0,width,height);
        }

        public void display()
        {
            	if (glj.gljMakeCurrent() == false) return;

		gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		gl.glMatrixMode(GL_MODELVIEW);
		gl.glLoadIdentity();

		gl.glColor4f(1, 1, 1, 1);

		rotate++;

		gl.glTranslatef(0, 0, -10);
		gl.glRotatef(rotate, 0, 1, 0);
		gl.glBegin(GL_POLYGON);
			gl.glNormal3f( 1, 0, 0);
			gl.glVertex3f( 0,  1, 0);
			gl.glVertex3f(-1, -1, 0);
			gl.glVertex3f( 1, -1, 0);
		gl.glEnd();

		glj.gljSwap();
		glj.gljCheckGL();
		glj.gljFree();
        }
   }
}
