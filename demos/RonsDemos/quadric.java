/**
 * @(#) quadric.java
 * @(#) author: Silicon Graphics, Inc. (converted to Java by Ron Cemer)
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
 *  This program demonstrates the use of some of the gluQuadric*
 *  routines. Quadric objects are created with some quadric
 *  properties and the callback routine to handle errors.
 *  Note that the cylinder has no top or bottom and the circle
 *  has a hole in it.
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

public class quadric extends Applet 
{
    quadricCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new quadricCanvas(d.width, d.height);
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


    private class quadricCanvas extends GLCanvas
    {
        int startList;

        public quadricCanvas(int w, int h)
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

            long qobj;
            float mat_ambient[] = { 0.5f, 0.5f, 0.5f, 1.0f };
            float mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            float mat_shininess[] = { 50.0f };
            float light_position[] = { 1.0f, 1.0f, 1.0f, 0.0f };
            float model_ambient[] = { 0.5f, 0.5f, 0.5f, 1.0f };

            gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
            gl.glLightfv(GL_LIGHT0, GL_POSITION, light_position);
            gl.glLightModelfv(GL_LIGHT_MODEL_AMBIENT, model_ambient);

            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glEnable(GL_DEPTH_TEST);

                /*  Create 4 display lists, each with a different quadric object.
                 *  Different drawing styles and surface normal specifications
                 *  are demonstrated.
                 */
            startList = gl.glGenLists(4);
            qobj = glu.gluNewQuadric();

            glu.gluQuadricDrawStyle(qobj, GLU_FILL); /* smooth shaded */
            glu.gluQuadricNormals(qobj, GLU_SMOOTH);
            gl.glNewList(startList, GL_COMPILE);
            glu.gluSphere(qobj, 0.75f, 15, 10);
            gl.glEndList();

            glu.gluQuadricDrawStyle(qobj, GLU_FILL); /* flat shaded */
            glu.gluQuadricNormals(qobj, GLU_FLAT);
            gl.glNewList(startList+1, GL_COMPILE);
            glu.gluCylinder(qobj, 0.5f, 0.3f, 1.0f, 15, 5);
            gl.glEndList();

            glu.gluQuadricDrawStyle(qobj, GLU_LINE); /* all polygons wireframe */
            glu.gluQuadricNormals(qobj, GLU_NONE);
            gl.glNewList(startList+2, GL_COMPILE);
            glu.gluDisk(qobj, 0.25f, 1.0f, 20, 4);
            gl.glEndList();

            glu.gluQuadricDrawStyle(qobj, GLU_SILHOUETTE); /* boundary only  */
            glu.gluQuadricNormals(qobj, GLU_NONE);
            gl.glNewList(startList+3, GL_COMPILE);
            glu.gluPartialDisk(qobj, 0.0f, 1.0f, 20, 4, 0.0f, 225.0f);
            gl.glEndList();

            glu.gluDeleteQuadric(qobj);

            glj.gljCheckGL();
        }
    
        public void cvsDispose()
        {
            System.out.println("destroy(): " + this);
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
            gl.glLoadIdentity();
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            gl.glPushMatrix();
            
            gl.glEnable(GL_LIGHTING);
            gl.glShadeModel(GL_SMOOTH);
            gl.glTranslatef(-1.0f, -1.0f, 0.0f);
            gl.glCallList(startList);
            
            gl.glShadeModel(GL_FLAT);
            gl.glTranslatef(0.0f, 2.0f, 0.0f);
            gl.glPushMatrix();
            gl.glRotatef(300.0f, 1.0f, 0.0f, 0.0f);
            gl.glCallList(startList+1);
            gl.glPopMatrix();
            
            gl.glDisable(GL_LIGHTING);
            gl.glColor3f(0.0f, 1.0f, 1.0f);
            gl.glTranslatef(2.0f, -2.0f, 0.0f);
            gl.glCallList(startList+2);
            
            gl.glColor3f(1.0f, 1.0f, 0.0f);
            gl.glTranslatef(0.0f, 2.0f, 0.0f);
            gl.glCallList(startList+3);
            
            gl.glPopMatrix();
            gl.glFlush();

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
        }
    }
}
