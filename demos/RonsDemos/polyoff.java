/**
 * @(#) polyoff.java
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
 *  This program demonstrates polygon offset to draw a shaded
 *  polygon and its wireframe counterpart without ugly visual
 *  artifacts ("stitching").
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

public class polyoff extends Applet 
{
    polyoffCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new polyoffCanvas(d.width, d.height);
	canvas.requestFocus();
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


    private class polyoffCanvas extends GLCanvas
    	implements KeyListener, MouseListener
    {
        private int list;
        private int spinx = 0;
        private int spiny = 0;
        private float tdist = 0.0f;
        private float polyfactor = 1.0f;
        private float polyunits = 1.0f;

        public polyoffCanvas(int w, int h)
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

                /*  specify initial properties
                 *  create display list with sphere  
                 *  initialize lighting and depth buffer
                 */

            float light_ambient[] = { 0.0f, 0.0f, 0.0f, 1.0f };
            float light_diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            float light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            float light_position[] = { 1.0f, 1.0f, 1.0f, 0.0f };
            
            float global_ambient[] = { 0.2f, 0.2f, 0.2f, 1.0f };
            
            gl.glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
            
            list = gl.glGenLists(1);
            gl.glNewList (list, GL_COMPILE);

            long qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,1.0f,20,12);
            glu.gluDeleteQuadric(qobj);

            gl.glEndList();
            
            gl.glEnable(GL_DEPTH_TEST);
            
            gl.glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
            gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
            gl.glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
            gl.glLightfv(GL_LIGHT0, GL_POSITION, light_position);
            gl.glLightModelfv (GL_LIGHT_MODEL_AMBIENT, global_ambient);

            glj.gljCheckGL();

            addKeyListener(this);
	    addMouseListener(this);    
        }
    
        public void cvsDispose()
        {
            System.out.println("destroy(): " + this);
            removeKeyListener(this);
            super.cvsDispose();
        }
    
        public void reshape(int width, int height)
        {
            gl.glViewport(0,0,width,height);
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            glu.gluPerspective(45.0,(double)width/(double)height,1.0,10.0);
            gl.glMatrixMode (GL_MODELVIEW);
            gl.glLoadIdentity();
            glu.gluLookAt (0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            float mat_ambient[] = { 0.8f, 0.8f, 0.8f, 1.0f };
            float mat_diffuse[] = { 1.0f, 0.0f, 0.5f, 1.0f };
            float mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            float gray[] = { 0.8f, 0.8f, 0.8f, 1.0f };
            float black[] = { 0.0f, 0.0f, 0.0f, 1.0f };
            
            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            gl.glPushMatrix();
            gl.glTranslatef(0.0f, 0.0f, tdist);
            gl.glRotatef((float)spinx, 1.0f, 0.0f, 0.0f);
            gl.glRotatef((float)spiny, 0.0f, 1.0f, 0.0f);
            
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, gray);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, black);
            gl.glMaterialf(GL_FRONT, GL_SHININESS, 0.0f);
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glEnable(GL_POLYGON_OFFSET_FILL);
            gl.glPolygonOffset(polyfactor, polyunits);
            gl.glCallList (list);
            gl.glDisable(GL_POLYGON_OFFSET_FILL);
            
            gl.glDisable(GL_LIGHTING);
            gl.glDisable(GL_LIGHT0);
            gl.glColor3f(1.0f, 1.0f, 1.0f);
            gl.glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
            gl.glCallList (list);
            gl.glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
            
            gl.glPopMatrix();
            gl.glFlush();

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
        }

        // Methods required for the implementation of KeyListener
        public void keyPressed(KeyEvent e)
        {
            switch (e.getKeyCode())
            {
            case KeyEvent.VK_LEFT:
                int j = (spiny-5);
                while (j < 0) j += 360;
                spiny = j;
                repaint();
                break;
            case KeyEvent.VK_RIGHT:
                spiny = (spiny + 5) % 360;
                repaint();
                break;
            case KeyEvent.VK_UP:
                int i = (spinx-5);
                while (i < 0) i += 360;
                spinx = i;
                repaint();
                break;
            case KeyEvent.VK_DOWN:
                spinx = (spinx + 5) % 360;
                repaint();
                break;
            }
        }

        public void keyReleased(KeyEvent e)
        {
        }

        public void keyTyped(KeyEvent e)
        {
            switch ((char)e.getKeyChar())
            {
            case 'T':
                if (tdist < 4.0f)
                {
                    tdist += 0.5f;
                    System.out.println("translation distance is " + tdist);
                    repaint();
                }
                break;
            case 't':
                if (tdist > -5.0f)
                {
                    tdist -= 0.5f;
                    System.out.println("translation distance is " + tdist);
                    repaint();
                }
                break;
            case 'F':
                polyfactor += 0.1f;
                System.out.println("polyfactor is " + polyfactor);
                repaint();
                break;
            case 'f':
                polyfactor -= 0.1f;
                System.out.println("polyfactor is " + polyfactor);
                repaint();
                break;
            case 'U':
                polyunits += 1.0f;
                System.out.println("polyunits is " + polyunits);
                repaint();
                break;
            case 'u':
                polyunits -= 1.0f;
                System.out.println("polyunits is " + polyunits);
                repaint();
                break;
            }
        }

        // Methods required for the implementation of MouseListener
        public void mouseEntered( MouseEvent evt )
        {
            Component comp = evt.getComponent();
	    if( comp.equals(this ) )
	    {
		requestFocus();
	    }
        }

        public void mouseExited( MouseEvent evt )
        { }
        public void mousePressed( MouseEvent evt )
        { }
        public void mouseReleased( MouseEvent evt )                                     
	{ }
        public void mouseClicked( MouseEvent evt )
        { 
            Component comp = evt.getComponent();
	    if( comp.equals(this ) )
	    {
		requestFocus();
	    }
	}
    }
}
