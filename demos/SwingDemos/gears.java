/**
 * @(#) gears.java
 * @(#) author: Brian Paul (converted to Java by Ron Cemer and Sven Goethel)
 *
 * This version is equal to Brian Paul's version 1.2 1999/10/21
 */

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

public class gears extends SimpleGLAnimApplet1 
{

        /* Initialize the applet */


	public void init()
	{
	super.init();
        Dimension d = getSize();
        canvas = new gearsCanvas(d.width, d.height);
        add("Center", canvas);
	}


	public static void main( String args[] ) 
	{
		Frame mainFrame = new Frame("gears");

		gears applet = new gears();

		applet.setSize(300, 300);
		applet.init();
		applet.start();

		mainFrame.add(applet);

		mainFrame.pack();
		mainFrame.setVisible(true);
	}


        /* Local GLAnimCanvas extension class */


    private class gearsCanvas extends GLAnimCanvas implements MouseListener, MouseMotionListener
    {
        private static final float M_PI = 3.14159265f;

	private long T0 = 0;
	private long Frames = 0;

        private float view_rotx = 20.0f, view_roty = 30.0f, view_rotz = 0.0f;
        private int gear1, gear2, gear3;
        private float angle = 0.0f;

        private int prevMouseX, prevMouseY;
        private boolean mouseRButtonDown = false;
    
        public gearsCanvas(int w, int h)
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
        }
    
        public void init()
        {
            System.out.println("init(): " + this);
            reshape(getSize().width, getSize().height);

            float pos[] = { 5.0f, 5.0f, 10.0f, 0.0f };
            float red[] = { 0.8f, 0.1f, 0.0f, 1.0f };
            float green[] = { 0.0f, 0.8f, 0.2f, 1.0f };
            float blue[] = { 0.2f, 0.2f, 1.0f, 1.0f };

            gl.glLightfv(GL_LIGHT0, GL_POSITION, pos);
            gl.glEnable(GL_CULL_FACE);
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glEnable(GL_DEPTH_TEST);
            
            /* make the gears */
            gear1 = gl.glGenLists(1);
            gl.glNewList(gear1, GL_COMPILE);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, red);
            gear(1.0f, 4.0f, 1.0f, 20, 0.7f);
            gl.glEndList();
            
            gear2 = gl.glGenLists(1);
            gl.glNewList(gear2, GL_COMPILE);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, green);
            gear(0.5f, 2.0f, 2.0f, 10, 0.7f);
            gl.glEndList();
            
            gear3 = gl.glGenLists(1);
            gl.glNewList(gear3, GL_COMPILE);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, blue);
            gear(1.3f, 2.0f, 0.5f, 10, 0.7f);
            gl.glEndList();
            
            gl.glEnable(GL_NORMALIZE);
                
            glj.gljCheckGL();

            addMouseListener(this);
            addMouseMotionListener(this);

	    T0=System.currentTimeMillis();
        }
    
        public void doCleanup()
        {
            System.out.println("destroy(): " + this);
            removeMouseListener(this);
            removeMouseMotionListener(this);
        }
    
        public void reshape(int width, int height)
        {
            float h = (float)height / (float)width;
            
            gl.glViewport(0,0,width,height);
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            gl.glFrustum(-1.0f, 1.0f, -h, h, 5.0f, 60.0f);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
            gl.glTranslatef(0.0f, 0.0f, -40.0f);
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;
    
            angle += 2.0f;

            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            
            gl.glPushMatrix();
	    gl.glRotatef(view_rotx, 1.0f, 0.0f, 0.0f);
	    gl.glRotatef(view_roty, 0.0f, 1.0f, 0.0f);
	    gl.glRotatef(view_rotz, 0.0f, 0.0f, 1.0f);
            
            gl.glPushMatrix();
            gl.glTranslatef(-3.0f, -2.0f, 0.0f);
            gl.glRotatef(angle, 0.0f, 0.0f, 1.0f);
            gl.glCallList(gear1);
            gl.glPopMatrix();
            
            gl.glPushMatrix();
            gl.glTranslatef(3.1f, -2.0f, 0.0f);
            gl.glRotatef(-2.0f * angle - 9.0f, 0.0f, 0.0f, 1.0f);
            gl.glCallList(gear2);
            gl.glPopMatrix();
            
            gl.glPushMatrix();
            gl.glTranslatef(-3.1f, 4.2f, 0.0f);
            gl.glRotatef(-2.0f * angle - 25.0f, 0.0f, 0.0f, 1.0f);
            gl.glCallList(gear3);
            gl.glPopMatrix();
            
            gl.glPopMatrix();

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();

	    Frames++;

	    long t=System.currentTimeMillis();
	    if(t - T0 >= 5000) 
	    {
	    	double seconds = (double)(t - T0) / 1000.0;
		double fps = (double)Frames / seconds;
		System.out.println(Frames+" frames in "+seconds+" seconds = "+
		                   fps+" FPS");
		T0 = t;
		Frames = 0;
	    }
        }

        private void gear
            (float inner_radius,
             float outer_radius,
             float width,
             int teeth,
             float tooth_depth)
        {
            int i;
            float r0, r1, r2;
            float angle, da;
            float u, v, len;

            r0 = inner_radius;
            r1 = outer_radius - tooth_depth / 2.0f;
            r2 = outer_radius + tooth_depth / 2.0f;
            
            da = 2.0f * M_PI / teeth / 4.0f;
            
            gl.glShadeModel(GL_FLAT);

            gl.glNormal3f(0.0f, 0.0f, 1.0f);

                /* draw front face */
            gl.glBegin(GL_QUAD_STRIP);
            for (i = 0; i <= teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), width * 0.5f);
		if(i < teeth)
		{
			gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), width * 0.5f);
			gl.glVertex3f(r1 * (float)Math.cos(angle + 3.0f * da), r1 * (float)Math.sin(angle + 3.0f * da), width * 0.5f);
		}
            }
            gl.glEnd();

                /* draw front sides of teeth */
            gl.glBegin(GL_QUADS);
            for (i = 0; i < teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + da), r2 * (float)Math.sin(angle + da), width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + 2.0f * da), r2 * (float)Math.sin(angle + 2.0f * da), width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3.0f * da), r1 * (float)Math.sin(angle + 3.0f * da), width * 0.5f);
            }
            gl.glEnd();
    
            /* draw back face */
            gl.glBegin(GL_QUAD_STRIP);
            for (i = 0; i <= teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), -width * 0.5f);
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), -width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3 * da), r1 * (float)Math.sin(angle + 3 * da), -width * 0.5f);
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), -width * 0.5f);
            }
            gl.glEnd();
    
            /* draw back sides of teeth */
            gl.glBegin(GL_QUADS);
            for (i = 0; i < teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3 * da), r1 * (float)Math.sin(angle + 3 * da), -width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + 2 * da), r2 * (float)Math.sin(angle + 2 * da), -width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + da), r2 * (float)Math.sin(angle + da), -width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), -width * 0.5f);
            }
            gl.glEnd();
    
            /* draw outward faces of teeth */
            gl.glBegin(GL_QUAD_STRIP);
            for (i = 0; i < teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), -width * 0.5f);
                u = r2 * (float)Math.cos(angle + da) - r1 * (float)Math.cos(angle);
                v = r2 * (float)Math.sin(angle + da) - r1 * (float)Math.sin(angle);
                len = (float)Math.sqrt(u * u + v * v);
                u /= len;
                v /= len;
                gl.glNormal3f(v, -u, 0.0f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + da), r2 * (float)Math.sin(angle + da), width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + da), r2 * (float)Math.sin(angle + da), -width * 0.5f);
                gl.glNormal3f((float)Math.cos(angle), (float)Math.sin(angle), 0.0f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + 2 * da), r2 * (float)Math.sin(angle + 2 * da), width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + 2 * da), r2 * (float)Math.sin(angle + 2 * da), -width * 0.5f);
                u = r1 * (float)Math.cos(angle + 3 * da) - r2 * (float)Math.cos(angle + 2 * da);
                v = r1 * (float)Math.sin(angle + 3 * da) - r2 * (float)Math.sin(angle + 2 * da);
                gl.glNormal3f(v, -u, 0.0f);
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3 * da), r1 * (float)Math.sin(angle + 3 * da), width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3 * da), r1 * (float)Math.sin(angle + 3 * da), -width * 0.5f);
                gl.glNormal3f((float)Math.cos(angle), (float)Math.sin(angle), 0.0f);
            }
            gl.glVertex3f(r1 * (float)Math.cos(0), r1 * (float)Math.sin(0), width * 0.5f);
            gl.glVertex3f(r1 * (float)Math.cos(0), r1 * (float)Math.sin(0), -width * 0.5f);
            gl.glEnd();
    
            gl.glShadeModel(GL_SMOOTH);
    
                /* draw inside radius cylinder */
            gl.glBegin(GL_QUAD_STRIP);
            for (i = 0; i <= teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glNormal3f(-(float)Math.cos(angle), -(float)Math.sin(angle), 0.0f);
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), -width * 0.5f);
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), width * 0.5f);
            }
            gl.glEnd();
        }

        // Methods required for the implementation of MouseListener
        public void mouseEntered( MouseEvent evt )
        {
        }
    
        public void mouseExited( MouseEvent evt )
        {
        }
    
        public void mousePressed( MouseEvent evt )
        {
            prevMouseX = evt.getX();
            prevMouseY = evt.getY();
            if ((evt.getModifiers() & evt.BUTTON3_MASK) != 0)
            {
                mouseRButtonDown = true;
                evt.consume();
            }
        }
    
        public void mouseReleased( MouseEvent evt )
        {
            if ((evt.getModifiers() & evt.BUTTON3_MASK) != 0)
            {
                mouseRButtonDown = false;
                evt.consume();
            }
        }
    
        public void mouseClicked( MouseEvent evt )
        {
        }
    
        // Methods required for the implementation of MouseMotionListener
        public void mouseDragged( MouseEvent evt )
        {
            int x = evt.getX();
            int y = evt.getY();
	    Dimension size = getSize();

            float thetaY = 360.0f * ( (float)(x-prevMouseX)/(float)size.width);
            float thetaX = 360.0f * ( (float)(prevMouseY-y)/(float)size.height);
    
            prevMouseX = x;
            prevMouseY = y;

	    view_rotx += thetaX;
	    view_roty += thetaY;

            evt.consume();
        }
    
        public void mouseMoved( MouseEvent evt )
        {
        }
    }
}
