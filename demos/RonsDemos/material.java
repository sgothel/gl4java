/**
 * @(#) material.java
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
 * This program demonstrates the use of the GL lighting model.
 * Several objects are drawn using different material characteristics.
 * A single light source illuminates the objects.
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

public class material extends Applet 
{
    materialCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new materialCanvas(d.width, d.height);
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


    private class materialCanvas extends GLCanvas
    {
        public materialCanvas(int w, int h)
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

            float ambient[] = { 0.0f, 0.0f, 0.0f, 1.0f };
            float diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            float specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            float position[] = { 0.0f, 3.0f, 2.0f, 0.0f };
            float lmodel_ambient[] = { 0.4f, 0.4f, 0.4f, 1.0f };
            float local_view[] = { 0.0f };
            
            gl.glClearColor(0.0f, 0.1f, 0.1f, 0.0f);
            gl.glEnable(GL_DEPTH_TEST);
            gl.glShadeModel(GL_SMOOTH);
            
            gl.glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
            gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
            gl.glLightfv(GL_LIGHT0, GL_POSITION, position);
            gl.glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
            gl.glLightModelfv(GL_LIGHT_MODEL_LOCAL_VIEWER, local_view);
            
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);

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
            if (width <= (height * 2))
                gl.glOrtho
                    (-6.0f,
                     6.0f,
                     -3.0f*((float)(height*2))/(float)width,
                     3.0f*((float)(height*2))/(float)width,
                     -10.0f,
                     10.0f);
            else
                gl.glOrtho
                    (-6.0f*(float)width/((float)(height*2)),
                     6.0f*(float)width/((float)(height*2)),
                     -3.0f,
                     3.0f,
                     -10.0f,
                     10.0f);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            float no_mat[] = { 0.0f, 0.0f, 0.0f, 1.0f };
            float mat_ambient[] = { 0.7f, 0.7f, 0.7f, 1.0f };
            float mat_ambient_color[] = { 0.8f, 0.8f, 0.2f, 1.0f };
            float mat_diffuse[] = { 0.1f, 0.5f, 0.8f, 1.0f };
            float mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            float no_shininess[] = { 0.0f };
            float low_shininess[] = { 5.0f };
            float high_shininess[] = { 100.0f };
            float mat_emission[] = {0.3f, 0.2f, 0.2f, 0.0f};
            long qobj;
            
            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            
            /*  draw sphere in first row, first column
             *  diffuse reflection only; no ambient or specular  
             */
            gl.glPushMatrix();
            gl.glTranslatef (-3.75f, 3.0f, 0.0f);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
            gl.glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
            qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,1.0f,16,16);
            glu.gluDeleteQuadric(qobj);
            gl.glPopMatrix();
            
            /*  draw sphere in first row, second column
             *  diffuse and specular reflection; low shininess; no ambient
             */
            gl.glPushMatrix();
            gl.glTranslatef(-1.25f, 3.0f, 0.0f);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, low_shininess);
            gl.glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
            qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,1.0f,16,16);
            glu.gluDeleteQuadric(qobj);
            gl.glPopMatrix();
            
            /*  draw sphere in first row, third column
             *  diffuse and specular reflection; high shininess; no ambient
             */
            gl.glPushMatrix();
            gl.glTranslatef(1.25f, 3.0f, 0.0f);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
            gl.glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
            qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,1.0f,16,16);
            glu.gluDeleteQuadric(qobj);
            gl.glPopMatrix();
            
            /*  draw sphere in first row, fourth column
             *  diffuse reflection; emission; no ambient or specular reflection
             */
            gl.glPushMatrix();
            gl.glTranslatef(3.75f, 3.0f, 0.0f);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
            gl.glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
            qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,1.0f,16,16);
            glu.gluDeleteQuadric(qobj);
            gl.glPopMatrix();
            
            /*  draw sphere in second row, first column
             *  ambient and diffuse reflection; no specular  
             */
            gl.glPushMatrix();
            gl.glTranslatef(-3.75f, 0.0f, 0.0f);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
            gl.glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
            qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,1.0f,16,16);
            glu.gluDeleteQuadric(qobj);
            gl.glPopMatrix();
            
            /*  draw sphere in second row, second column
             *  ambient, diffuse and specular reflection; low shininess
             */
            gl.glPushMatrix();
            gl.glTranslatef(-1.25f, 0.0f, 0.0f);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, low_shininess);
            gl.glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
            qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,1.0f,16,16);
            glu.gluDeleteQuadric(qobj);
            gl.glPopMatrix();
            
            /*  draw sphere in second row, third column
             *  ambient, diffuse and specular reflection; high shininess
             */
            gl.glPushMatrix();
            gl.glTranslatef(1.25f, 0.0f, 0.0f);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
            gl.glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
            qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,1.0f,16,16);
            glu.gluDeleteQuadric(qobj);
            gl.glPopMatrix();
            
            /*  draw sphere in second row, fourth column
             *  ambient and diffuse reflection; emission; no specular
             */
            gl.glPushMatrix();
            gl.glTranslatef(3.75f, 0.0f, 0.0f);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
            gl.glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
            qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,1.0f,16,16);
            glu.gluDeleteQuadric(qobj);
            gl.glPopMatrix();
            
            /*  draw sphere in third row, first column
             *  colored ambient and diffuse reflection; no specular  
             */
            gl.glPushMatrix();
            gl.glTranslatef(-3.75f, -3.0f, 0.0f);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient_color);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
            gl.glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
            qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,1.0f,16,16);
            glu.gluDeleteQuadric(qobj);
            gl.glPopMatrix();
            
            /*  draw sphere in third row, second column
             *  colored ambient, diffuse and specular reflection; low shininess
             */
            gl.glPushMatrix();
            gl.glTranslatef(-1.25f, -3.0f, 0.0f);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient_color);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, low_shininess);
            gl.glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
            qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,1.0f,16,16);
            glu.gluDeleteQuadric(qobj);
            gl.glPopMatrix();
            
            /*  draw sphere in third row, third column
             *  colored ambient, diffuse and specular reflection; high shininess
             */
            gl.glPushMatrix();
            gl.glTranslatef(1.25f, -3.0f, 0.0f);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient_color);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
            gl.glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
            qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,1.0f,16,16);
            glu.gluDeleteQuadric(qobj);
            gl.glPopMatrix();
            
            /*  draw sphere in third row, fourth column
             *  colored ambient and diffuse reflection; emission; no specular
             */
            gl.glPushMatrix();
            gl.glTranslatef(3.75f, -3.0f, 0.0f);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient_color);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
            gl.glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
            qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,1.0f,16,16);
            glu.gluDeleteQuadric(qobj);
            gl.glPopMatrix();
            
            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
        }
    }
}
