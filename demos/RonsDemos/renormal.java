/**
 * @(#) renormal.java
 * @(#) author: Brian Paul (converted to Java by Ron Cemer)
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

public class renormal extends SimpleGLAnimApplet1 
{
        /* Initialize the applet */


	public void init()
	{
	super.init();
        Dimension d = getSize();
        canvas = new renormalCanvas(d.width, d.height);
        add("Center", canvas);
	}


        /* Local GLAnimCanvas extension class */


    private class renormalCanvas extends GLAnimCanvas
    {
        private static final float M_PI = 3.14159265359f;
        private float Phi = 0.0f;
    
        public renormalCanvas(int w, int h)
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
            
            float mat[] = { 0.8f, 0.8f, 0.0f, 1.0f };
            float pos[] = { -1.0f, 1.0f, 1.0f, 0.0f };

                /* setup lighting, etc */
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, mat);
            gl.glLightfv(GL_LIGHT0, GL_POSITION, pos);
            gl.glEnable(GL_CULL_FACE);
            gl.glEnable(GL_NORMALIZE);
    
            glj.gljCheckGL();
        }
    
        public void reshape(int width, int height)
        {
            gl.glViewport(0,0,width,height);
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            gl.glFrustum(-1.0f, 1.0f, -1.0f, 1.0f, 5.0f, 25.0f);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
            gl.glTranslatef(0.0f, 0.0f, -15.0f);
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;
    
            Phi += 0.05f;
            while (Phi >= (M_PI*2.0f)) Phi -= (M_PI*2.0f);

            float scale = 0.6f + (0.5f * (float)Math.sin(Phi));
            gl.glClear(GL_COLOR_BUFFER_BIT);
            gl.glPushMatrix();
            gl.glScalef(scale, scale, scale);

            long qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,2.0f,40,40);
            glu.gluDeleteQuadric(qobj);

            gl.glPopMatrix();

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
    
            //if (!isSuspended()) repaint();  // Animate at full speed.
        }
    }
}
