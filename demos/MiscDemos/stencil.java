/**
 * @(#) stencil.java
 * @(#) author: Silicon Graphics (converted to Java by Ron Cemer)
 */

/*
 * Copyright (c) 1993-1997, Silicon Graphics, Inc.
 * ALL RIGHTS RESERVED 
 * Permission to use, copy, modify, and distribute this software for 
 * any purpose and without fee is hereby granted, provided that the above
 * copyright notice appear in all copies and that both the copyright notice
 * and this permission notice appear in supporting documentation, and that 
 * the name of Silicon Graphics, Inc. not be used in advertising
 * or publicity pertaining to distribution of the software without specific,
 * written prior permission. 
 *
 * THE MATERIAL EMBODIED ON THIS SOFTWARE IS PROVIDED TO YOU "AS-IS"
 * AND WITHOUT WARRANTY OF ANY KIND, EXPRESS, IMPLIED OR OTHERWISE,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF MERCHANTABILITY OR
 * FITNESS FOR A PARTICULAR PURPOSE.  IN NO EVENT SHALL SILICON
 * GRAPHICS, INC.  BE LIABLE TO YOU OR ANYONE ELSE FOR ANY DIRECT,
 * SPECIAL, INCIDENTAL, INDIRECT OR CONSEQUENTIAL DAMAGES OF ANY
 * KIND, OR ANY DAMAGES WHATSOEVER, INCLUDING WITHOUT LIMITATION,
 * LOSS OF PROFIT, LOSS OF USE, SAVINGS OR REVENUE, OR THE CLAIMS OF
 * THIRD PARTIES, WHETHER OR NOT SILICON GRAPHICS, INC.  HAS BEEN
 * ADVISED OF THE POSSIBILITY OF SUCH LOSS, HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, ARISING OUT OF OR IN CONNECTION WITH THE
 * POSSESSION, USE OR PERFORMANCE OF THIS SOFTWARE.
 * 
 * US Government Users Restricted Rights 
 * Use, duplication, or disclosure by the Government is subject to
 * restrictions set forth in FAR 52.227.19(c)(2) or subparagraph
 * (c)(1)(ii) of the Rights in Technical Data and Computer Software
 * clause at DFARS 252.227-7013 and/or in similar or successor
 * clauses in the FAR or the DOD or NASA FAR Supplement.
 * Unpublished-- rights reserved under the copyright laws of the
 * United States.  Contractor/manufacturer is Silicon Graphics,
 * Inc., 2011 N.  Shoreline Blvd., Mountain View, CA 94039-7311.
 *
 * OpenGL(R) is a registered trademark of Silicon Graphics, Inc.
 */

/*
 *  This program demonstrates use of the stencil buffer for
 *  masking nonrectangular regions.  
 *  Whenever the window is redrawn, a value of 1 is drawn 
 *  into a diamond-shaped region in the stencil buffer.  
 *  Elsewhere in the stencil buffer, the value is 0.
 *  Then a blue sphere is drawn where the stencil value is 1,
 *  and yellow torii are drawn where the stencil value is not 1.
 */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;
import gl4java.*;
import gl4java.drawable.*;
import gl4java.awt.GLCanvas;

public class stencil extends Applet 
{
	Panel cvs = null;

        /* Initialize the applet */


	public void init()
	{
		Dimension d = getSize();
		setLayout(new BorderLayout());

		GLCapabilities caps1 = new GLCapabilities();
		caps1.setStencilBits(0);

		System.out.println("the left canvas has 0 stencil-bits");
		System.out.println("caps1: "+caps1);

		GLCanvas canvas1 =
                          GLDrawableFactory.getFactory().createGLCanvas(caps1, d.width, d.height);

		stencilDemo demo1 = new stencilDemo(d.width, d.height);
                canvas1.addGLEventListener(demo1);

		GLCapabilities caps2 = new GLCapabilities();
		caps2.setStencilBits(8);

		System.out.println("the right canvas should have >=8 stencil-bits");
		System.out.println("caps2: "+caps2);

		GLCanvas canvas2 =
                          GLDrawableFactory.getFactory().createGLCanvas(caps2, d.width, d.height);

		stencilDemo demo2 = new stencilDemo(d.width, d.height);
                canvas2.addGLEventListener(demo2);

		cvs = new Panel();
		cvs.setLayout(new GridLayout(1,2));
		cvs.add(canvas1);
		if(canvas2!=null)
			cvs.add(canvas2);
		add("Center", cvs);
	}


	public static void main( String args[] ) 
	{
		Frame mainFrame = new Frame("stencil");

	        GLContext.gljNativeDebug = true;
	        GLContext.gljClassDebug = true;

		stencil applet = new stencil();

		applet.setSize(400, 400);
		applet.init();
		applet.start();

		mainFrame.add(applet);

		mainFrame.pack();
		mainFrame.setVisible(true);
	}

        /* Start the applet */


    public void start()
    {
    }


        /* Stop the applet */


    public void stop()
    {
    }


        /* Destroy the applet */



        /* Local GLCanvas extension class */


    private class stencilDemo
    	implements GLEventListener
    {
        private static final float M_PI = 3.14159265359f;
        private static final int YELLOWMAT = 1, BLUEMAT = 2;
        private boolean initdone = false;

        private GLFunc gl;
        private GLUFunc glu;
	private GLContext glj;


        public stencilDemo(int w, int h)
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

	    // Examine some OpenGL properties
	    int [] res=new int[6];

	    gl.glGetIntegerv(GL_STENCIL_BITS,res);

            System.out.println("init(): " + this + "\n\t" +
	                       "Stencil bits are "+res[0] +"\n\t");

            float yellow_diffuse[] = { 0.7f, 0.7f, 0.0f, 1.0f };
            float yellow_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            
            float blue_diffuse[] = { 0.1f, 0.1f, 0.7f, 1.0f };
            float blue_specular[] = { 0.1f, 1.0f, 1.0f, 1.0f };
            
            float position_one[] = { 1.0f, 1.0f, 1.0f, 0.0f };
            
            gl.glNewList(YELLOWMAT, GL_COMPILE);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, yellow_diffuse);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, yellow_specular);
            gl.glMaterialf(GL_FRONT, GL_SHININESS, 64.0f);
            gl.glEndList();
            
            gl.glNewList(BLUEMAT, GL_COMPILE);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, blue_diffuse);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, blue_specular);
            gl.glMaterialf(GL_FRONT, GL_SHININESS, 45.0f);
            gl.glEndList();
            
            gl.glLightfv(GL_LIGHT0, GL_POSITION, position_one);
            
            gl.glEnable(GL_LIGHT0);
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_DEPTH_TEST);
            
            gl.glClearStencil(0);
            gl.glEnable(GL_STENCIL_TEST);

            glj.gljCheckGL();

            initdone = true;
        }
    
        public void reshape(gl4java.drawable.GLDrawable d,int width,int height)
        {
            gl.glViewport(0,0,width,height);

            if (initdone)
            {
                    /* create a diamond shaped stencil area */
                gl.glMatrixMode(GL_PROJECTION);
                gl.glLoadIdentity();
                if (width <= height)
                    glu.gluOrtho2D
                        (-3.0f,
                         3.0f,
                         -3.0f*(float)height/(float)width,
                         3.0f*(float)height/(float)width);
                else
                    glu.gluOrtho2D
                        (-3.0f*(float)width/(float)height,
                         3.0f*(float)width/(float)height,
                         -3.0f,
                         3.0f);
                gl.glMatrixMode(GL_MODELVIEW);
                gl.glLoadIdentity();

                gl.glClear(GL_STENCIL_BUFFER_BIT);
                gl.glStencilFunc(GL_ALWAYS, 1, 1);
                gl.glStencilOp(GL_REPLACE, GL_REPLACE, GL_REPLACE);
                gl.glBegin(GL_QUADS);
                gl.glVertex2f(-1.0f, 0.0f);
                gl.glVertex2f(0.0f, 1.0f);
                gl.glVertex2f(1.0f, 0.0f);
                gl.glVertex2f(0.0f, -1.0f);
                gl.glEnd();
            }

            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            glu.gluPerspective(45.0f, (float)width/(float)height, 3.0f, 7.0f);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
            gl.glTranslatef(0.0f, 0.0f, -5.0f);
        }

        public void display(GLDrawable drawable)
        {
                /* Draw a sphere in a diamond-shaped section in the
                 * middle of a window with 2 torii.
                 */

            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
                /* draw blue sphere where the stencil is 1 */
            gl.glStencilFunc(GL_EQUAL, 1, 1);
            gl.glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP);
            gl.glCallList(BLUEMAT);

            long qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,0.5f,15,15);
            glu.gluDeleteQuadric(qobj);

                /* draw the tori where the stencil is not 1 */
            gl.glStencilFunc(GL_NOTEQUAL, 1, 1);
            gl.glPushMatrix();
            gl.glRotatef(45.0f, 0.0f, 0.0f, 1.0f);
            gl.glRotatef(45.0f, 0.0f, 1.0f, 0.0f);
            gl.glCallList(YELLOWMAT);
            glutSolidTorus(0.275f, 0.85f, 15, 15);
            gl.glPushMatrix();
            gl.glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
            glutSolidTorus(0.275f, 0.85f, 15, 15);
            gl.glPopMatrix();
            gl.glPopMatrix();

            glj.gljCheckGL();
        }

        public void preDisplay(GLDrawable drawable)
	{
	}

        public void postDisplay(GLDrawable drawable)
	{
	}

        // Imported from glut.
        private void glutSolidTorus
            (float innerRadius,
             float outerRadius,
             int nsides,
             int rings)
        {
            doughnut(innerRadius, outerRadius, nsides, rings);
        }

        // Imported from glut.
        private void doughnut(float r, float R, int nsides, int rings)
        {
            int i, j;
            float theta, phi, theta1;
            float cosTheta, sinTheta;
            float cosTheta1, sinTheta1;
            float ringDelta, sideDelta;

            ringDelta = 2.0f * M_PI / rings;
            sideDelta = 2.0f * M_PI / nsides;

            theta = 0.0f;
            cosTheta = 1.0f;
            sinTheta = 0.0f;
            for (i = rings - 1; i >= 0; i--)
            {
                theta1 = theta + ringDelta;
                cosTheta1 = (float)Math.cos(theta1);
                sinTheta1 = (float)Math.sin(theta1);
                gl.glBegin(GL_QUAD_STRIP);
                phi = 0.0f;
                for (j = nsides; j >= 0; j--)
                {
                    float cosPhi, sinPhi, dist;

                    phi += sideDelta;
                    cosPhi = (float)Math.cos(phi);
                    sinPhi = (float)Math.sin(phi);
                    dist = R + r * cosPhi;
                    
                    gl.glNormal3f(cosTheta1 * cosPhi, -sinTheta1 * cosPhi, sinPhi);
                    gl.glVertex3f(cosTheta1 * dist, -sinTheta1 * dist, r * sinPhi);
                    gl.glNormal3f(cosTheta * cosPhi, -sinTheta * cosPhi, sinPhi);
                    gl.glVertex3f(cosTheta * dist, -sinTheta * dist,  r * sinPhi);
                }
                gl.glEnd();
                theta = theta1;
                cosTheta = cosTheta1;
                sinTheta = sinTheta1;
            }
        }
    }
}
