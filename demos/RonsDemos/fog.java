/**
 * @(#) fog.java
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
 *  This program draws 5 red spheres, each at a different 
 *  z distance from the eye, in different types of fog.  
 *  Pressing the f key chooses between 3 types of 
 *  fog:  exponential, exponential squared, and linear.  
 *  In this program, there is a fixed density value, as well 
 *  as fixed start and end values for the linear fog.
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

public class fog extends Applet 
{
    fogCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new fogCanvas(d.width, d.height);
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


    private class fogCanvas extends GLCanvas implements MouseListener
    {
        int fogMode;

        public fogCanvas(int w, int h)
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

            float position[] = { 0.5f, 0.5f, 3.0f, 0.0f };

            gl.glEnable(GL_DEPTH_TEST);

            gl.glLightfv(GL_LIGHT0, GL_POSITION, position);
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);

            float mat[] = {0.1745f, 0.01175f, 0.01175f};
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, mat);
            mat[0] = 0.61424f; mat[1] = 0.04136f; mat[2] = 0.04136f;
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat);
            mat[0] = 0.727811f; mat[1] = 0.626959f; mat[2] = 0.626959f;
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat);
            gl.glMaterialf(GL_FRONT, GL_SHININESS, 0.6f*128.0f);

            gl.glEnable(GL_FOG);

            float fogColor[] = {0.5f, 0.5f, 0.5f, 1.0f};
            fogMode = GL_EXP;
            gl.glFogi(GL_FOG_MODE, fogMode);
            gl.glFogfv(GL_FOG_COLOR, fogColor);
            gl.glFogf(GL_FOG_DENSITY, 0.35f);
            gl.glHint(GL_FOG_HINT, GL_DONT_CARE);
            gl.glFogf(GL_FOG_START, 1.0f);
            gl.glFogf(GL_FOG_END, 5.0f);

            gl.glClearColor(0.5f, 0.5f, 0.5f, 1.0f);  /* fog color */

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
            if (width <= height)
                gl.glOrtho
                    (-2.5f,
                     2.5f,
                     -2.5f*(float)height/(float)width,
                     2.5f*(float)height/(float)width,
                     -10.0f,
                     10.0f);
            else
                gl.glOrtho
                    (-2.5f*(float)width/(float)height,
                     2.5f*(float)width/(float)height,
                     -2.5f,
                     2.5f,
                     -10.0f,
                     10.0f);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity ();
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            renderSphere(-2.0f, -0.5f, -1.0f);
            renderSphere(-1.0f, -0.5f, -2.0f);
            renderSphere(0.0f, -0.5f, -3.0f);
            renderSphere(1.0f, -0.5f, -4.0f);
            renderSphere(2.0f, -0.5f, -5.0f);
            gl.glFlush();

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
        }

        private void renderSphere(float x, float y, float z)
        {
            gl.glPushMatrix();
            gl.glTranslatef(x, y, z);

            int qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,0.4f,16,16);
            glu.gluDeleteQuadric(qobj);

            gl.glPopMatrix();
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
            if (fogMode == GL_EXP)
            {
                fogMode = GL_EXP2;
                System.out.println("Fog mode is GL_EXP2");
            }
            else if (fogMode == GL_EXP2)
            {
                fogMode = GL_LINEAR;
                System.out.println("Fog mode is GL_LINEAR");
            }
            else
            {
                fogMode = GL_EXP;
                System.out.println("Fog mode is GL_EXP");
            }
            gl.glFogi(GL_FOG_MODE,fogMode);
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
