/**
 * @(#) surface.java
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
 *  This program draws a NURBS surface in the shape of a 
 *  symmetrical hill.  The 'c' keyboard key allows you to 
 *  toggle the visibility of the control points themselves.  
 *  Note that some of the control points are hidden by the  
 *  surface itself.
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

public class surface extends Applet 
{
    surfaceCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new surfaceCanvas(d.width, d.height);
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



        /* Local GLCanvas extension class */


    private class surfaceCanvas extends GLCanvas implements MouseListener
    {
        float ctlpoints[] = new float [4*4*3];
        boolean showPoints = false;
        int theNurb;

        public surfaceCanvas(int w, int h)
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

            float mat_diffuse[] = { 0.7f, 0.7f, 0.7f, 1.0f };
            float mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            float mat_shininess[] = { 100.0f };

            gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glEnable(GL_DEPTH_TEST);
            gl.glEnable(GL_AUTO_NORMAL);
            gl.glEnable(GL_NORMALIZE);

            init_surface();

            theNurb = glu.gluNewNurbsRenderer();
            glu.gluNurbsProperty(theNurb, GLU_SAMPLING_TOLERANCE, 25.0f);
            glu.gluNurbsProperty(theNurb, GLU_DISPLAY_MODE, GLU_FILL);

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
            glu.gluPerspective(45.0f,(double)width/(double)height,3.0f,8.0f);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
            gl.glTranslatef(0.0f, 0.0f, -5.0f);
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            float knots[] = {0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f};
            int i, j;

            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            gl.glPushMatrix();
            gl.glRotatef(330.0f, 1.0f,0.0f,0.0f);
            gl.glScalef (0.5f, 0.5f, 0.5f);

            glu.gluBeginSurface(theNurb);
            glu.gluNurbsSurface
                (theNurb,
                 8,
                 knots,
                 8,
                 knots,
                 (4 * 3),
                 3,
                 ctlpoints,
                 4,
                 4,
                 GL_MAP2_VERTEX_3);
            glu.gluEndSurface(theNurb);

            if (showPoints)
            {
                gl.glPointSize(5.0f);
                gl.glDisable(GL_LIGHTING);
                gl.glColor3f(1.0f, 1.0f, 0.0f);
                gl.glBegin(GL_POINTS);
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        gl.glVertex3f
                            (ctlpoints[(i*12)+(j*3)+0],
                             ctlpoints[(i*12)+(j*3)+1],
                             ctlpoints[(i*12)+(j*3)+2]);
                    }
                }
                gl.glEnd();
                gl.glEnable(GL_LIGHTING);
            }
            gl.glPopMatrix();
            gl.glFlush();

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
        }

        private void init_surface()
        {
            for (int u = 0; u < 4; u++)
            {
                for (int v = 0; v < 4; v++)
                {
                    ctlpoints[(u*12)+(v*3)+0] = 2.0f*((float)u - 1.5f);
                    ctlpoints[(u*12)+(v*3)+1] = 2.0f*((float)v - 1.5f);
                    if ( (u == 1 || u == 2) && (v == 1 || v == 2) )
                        ctlpoints[(u*12)+(v*3)+2] = 3.0f;
                    else
                        ctlpoints[(u*12)+(v*3)+2] = -3.0f;
                }
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
            showPoints = !showPoints;
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
