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

import gl4java.*;
import gl4java.drawable.*;
import gl4java.awt.*;
import gl4java.applet.*;

public class TriangleRotate extends SimpleGLAnimApplet1 
{

    public void init()
    {
	GLContext.gljNativeDebug = true;
	GLContext.gljThreadDebug = false;
	GLContext.gljClassDebug = true;

	super.init();
        Dimension d = getSize();
	System.out.println("applet size: "+d);
        GLCapabilities caps = new GLCapabilities();

        canvas =
            GLDrawableFactory.getFactory().createGLAnimCanvas(caps, d.width, d.height);

        gldemo demo = new gldemo();
        canvas.addGLEventListener(demo);

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
		f.setVisible(true);
		Insets i = f.getInsets();
		f.setBounds(0,0,
			    ps.width+i.left+i.right, 
		            ps.height+i.top+i.bottom);
		f.setVisible(true);
	}

    private class gldemo
    	implements GLEventListener
    {
	float rotate;

	float LightAmbient[]  = { 0.75f, 0.75f, 0.75f, 1.5f};
	float LightDiffuse[]  = { 1.0f, 1.0f, 1.0f, 0.9f};
	float LightSpecular[] = { 0.8f, 0.8f, 0.8f, 1.0f};

        private GLFunc gl;
        private GLUFunc glu;
	private GLContext glj;

        public gldemo()
        {
        }
    
        public void cleanup(GLDrawable drawable)
	{
	}

        public void init(GLDrawable drawable)
        {
            gl = drawable.getGL();
            glu = drawable.getGLU();
            glj = drawable.getGLContext();

		//drawable.reshape(getSize().width, getSize().height);

		gl.glEnable(GL_LIGHT0);
		gl.glLightfv(GL_LIGHT0, GL_AMBIENT, LightAmbient);
		gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, LightDiffuse);
		gl.glLightfv(GL_LIGHT0, GL_SPECULAR, LightSpecular);

		glj.gljCheckGL();
        }
    
        public void reshape(gl4java.drawable.GLDrawable d,int width,int height)
        {
		gl.glMatrixMode(GL_PROJECTION);
		gl.glLoadIdentity();
		glu.gluPerspective(45, (float)width/(float)height, 1, 700);
		gl.glMatrixMode(GL_MODELVIEW);
		gl.glLoadIdentity();
            	gl.glViewport(0,0,width,height);
        }

        public void display(GLDrawable drawable)
        {
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

		glj.gljCheckGL();
        }

        public void preDisplay(GLDrawable drawable)
	{
	}

        public void postDisplay(GLDrawable drawable)
	{
	}
   }
}
