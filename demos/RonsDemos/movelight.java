/**
 * @(#) movelight.java
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
 *  movelight.java
 *  This applet demonstrates when to issue lighting and
 *  transformation commands to render a model with a light
 *  which is moved by a modeling transformation (rotate or
 *  translate).  The light position is reset after the modeling
 *  transformation is called.  The eye position does not change.
 *
 *  A torus is drawn using a grey material characteristic.
 *  A single light source illuminates the object.
 *
 *  Interaction:  pressing the left mouse button alters
 *  the modeling transformation (x rotation) by 30 degrees.
 *  The scene is then redrawn with the light in a new position.
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

public class movelight extends Applet 
{
    private static final float boxnormals[][] =
    {
        {-1.0f, 0.0f, 0.0f},
        {0.0f, 1.0f, 0.0f},
        {1.0f, 0.0f, 0.0f},
        {0.0f, -1.0f, 0.0f},
        {0.0f, 0.0f, 1.0f},
        {0.0f, 0.0f, -1.0f}
    };
    private static final int boxfaces[][] =
    {
        {0, 1, 2, 3},
        {3, 2, 6, 7},
        {7, 6, 5, 4},
        {4, 5, 1, 0},
        {5, 6, 2, 1},
        {7, 4, 0, 3}
    };

    movelightCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new movelightCanvas(d.width, d.height);
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


        /* Destroy the applet */


    public void destroy()
    {
        canvas.cvsDispose();
    }


        /* Local GLCanvas extension class */


    private class movelightCanvas extends GLCanvas implements MouseListener
    {
        private static final float M_PI = 3.14159265359f;

        private int spin = 0;

        public movelightCanvas(int w, int h)
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
            reshape(getSize().width, getSize().height);

            gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
            gl.glShadeModel(GL_SMOOTH);
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glEnable(GL_DEPTH_TEST);

            glj.gljCheckGL();

            addMouseListener(this);
        }
    
        public void cvsDispose()
        {
            System.out.println("destroy(): " + this);
            removeMouseListener(this);
            super.cvsDispose();
        }
    
        public void reshape(int width, int height)
        {
            gl.glViewport(0,0,width,height);
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            glu.gluPerspective(40.0f,(float)width/(float)height,1.0f,20.0f);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            float position[] = { 0.0f, 0.0f, 1.5f, 1.0f };

            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            gl.glPushMatrix();
            glu.gluLookAt(0.0f, 0.0f, 5.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

            gl.glPushMatrix();
            gl.glRotated((double)spin, 1.0, 0.0, 0.0);
            gl.glLightfv(GL_LIGHT0, GL_POSITION, position);

            gl.glTranslated(0.0, 0.0, 1.5);
            gl.glDisable(GL_LIGHTING);
            gl.glColor3f(0.0f, 1.0f, 1.0f);
            glutWireCube(0.1f);
            gl.glEnable(GL_LIGHTING);
            gl.glPopMatrix();

            glutSolidTorus(0.275f, 0.85f, 8, 15);
            gl.glPopMatrix();
            gl.glFlush();

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
        }

        // Imported from glut.
        private void glutWireCube(float size)
        {
            drawBox(size, GL_LINE_LOOP);
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
        private void drawBox(float size, int type)
        {
            float v[][] = new float[8][3];
            int i;

            v[0][0] = v[1][0] = v[2][0] = v[3][0] = -size / 2;
            v[4][0] = v[5][0] = v[6][0] = v[7][0] = size / 2;
            v[0][1] = v[1][1] = v[4][1] = v[5][1] = -size / 2;
            v[2][1] = v[3][1] = v[6][1] = v[7][1] = size / 2;
            v[0][2] = v[3][2] = v[4][2] = v[7][2] = -size / 2;
            v[1][2] = v[2][2] = v[5][2] = v[6][2] = size / 2;

            for (i = 5; i >= 0; i--)
            {
                gl.glBegin(type);
                gl.glNormal3fv(boxnormals[i]);
                gl.glVertex3fv(v[boxfaces[i][0]]);
                gl.glVertex3fv(v[boxfaces[i][1]]);
                gl.glVertex3fv(v[boxfaces[i][2]]);
                gl.glVertex3fv(v[boxfaces[i][3]]);
                gl.glEnd();
            }
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

        // Methods required for the implementation of MouseListener
        public void mouseEntered( MouseEvent evt )
        {
        }
    
        public void mouseExited( MouseEvent evt )
        {
        }
    
        public void mousePressed( MouseEvent evt )
        {
            spin = (spin + 30) % 360;
            repaint();
        }
    
        public void mouseReleased( MouseEvent evt )
        {
        }
    
        public void mouseClicked( MouseEvent evt )
        {
        }
    }
}
