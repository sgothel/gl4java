/**
 * @(#) texgen.java
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

/*  This program draws a texture mapped teapot with 
 *  automatically generated texture coordinates.  The
 *  texture is rendered as stripes on the teapot.
 *  Initially, the object is drawn with texture coordinates
 *  based upon the object coordinates of the vertex
 *  and distance from the plane x = 0.  Pressing the 'e'
 *  key changes the coordinate generation to eye coordinates
 *  of the vertex.  Pressing the 'o' key switches it back
 *  to the object coordinates.  Pressing the 's' key 
 *  changes the plane to a slanted one (x + y + z = 0).
 *  Pressing the 'x' key switches it back to x = 0.
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

public class texgen extends Applet 
{
    // Data for drawing teapots:
        /* Rim, body, lid, and bottom data must be reflected in x and
           y; handle and spout data across the y axis only.  */
    private static final int patchdata[][] =
    {
        /* rim */
      {102, 103, 104, 105, 4, 5, 6, 7, 8, 9, 10, 11,
        12, 13, 14, 15},
        /* body */
      {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
        24, 25, 26, 27},
      {24, 25, 26, 27, 29, 30, 31, 32, 33, 34, 35, 36,
        37, 38, 39, 40},
        /* lid */
      {96, 96, 96, 96, 97, 98, 99, 100, 101, 101, 101,
        101, 0, 1, 2, 3,},
      {0, 1, 2, 3, 106, 107, 108, 109, 110, 111, 112,
        113, 114, 115, 116, 117},
        /* bottom */
      {118, 118, 118, 118, 124, 122, 119, 121, 123, 126,
        125, 120, 40, 39, 38, 37},
        /* handle */
      {41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52,
        53, 54, 55, 56},
      {53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64,
        28, 65, 66, 67},
        /* spout */
      {68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
        80, 81, 82, 83},
      {80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91,
        92, 93, 94, 95}
    };
    private static final float cpdata[][] =
    {
        {0.2f, 0.0f, 2.7f}, {0.2f, -0.112f, 2.7f}, {0.112f, -0.2f, 2.7f}, {0.0f,
        -0.2f, 2.7f}, {1.3375f, 0.0f, 2.53125f}, {1.3375f, -0.749f, 2.53125f},
        {0.749f, -1.3375f, 2.53125f}, {0.0f, -1.3375f, 2.53125f}, {1.4375f,
        0.0f, 2.53125f}, {1.4375f, -0.805f, 2.53125f}, {0.805f, -1.4375f,
        2.53125f}, {0.0f, -1.4375f, 2.53125f}, {1.5f, 0.0f, 2.4f}, {1.5f, -0.84f,
        2.4f}, {0.84f, -1.5f, 2.4f}, {0.0f, -1.5f, 2.4f}, {1.75f, 0.0f, 1.875f},
        {1.75f, -0.98f, 1.875f}, {0.98f, -1.75f, 1.875f}, {0.0f, -1.75f,
        1.875f}, {2f, 0.0f, 1.35f}, {2f, -1.12f, 1.35f}, {1.12f, -2f, 1.35f},
        {0.0f, -2f, 1.35f}, {2f, 0.0f, 0.9f}, {2f, -1.12f, 0.9f}, {1.12f, -2f,
        0.9f}, {0.0f, -2f, 0.9f}, {-2f, 0.0f, 0.9f}, {2f, 0.0f, 0.45f}, {2f, -1.12f,
        0.45f}, {1.12f, -2f, 0.45f}, {0.0f, -2f, 0.45f}, {1.5f, 0.0f, 0.225f},
        {1.5f, -0.84f, 0.225f}, {0.84f, -1.5f, 0.225f}, {0.0f, -1.5f, 0.225f},
        {1.5f, 0.0f, 0.15f}, {1.5f, -0.84f, 0.15f}, {0.84f, -1.5f, 0.15f}, {0.0f,
        -1.5f, 0.15f}, {-1.6f, 0.0f, 2.025f}, {-1.6f, -0.3f, 2.025f}, {-1.5f,
        -0.3f, 2.25f}, {-1.5f, 0.0f, 2.25f}, {-2.3f, 0.0f, 2.025f}, {-2.3f, -0.3f,
        2.025f}, {-2.5f, -0.3f, 2.25f}, {-2.5f, 0.0f, 2.25f}, {-2.7f, 0.0f,
        2.025f}, {-2.7f, -0.3f, 2.025f}, {-3f, -0.3f, 2.25f}, {-3f, 0.0f,
        2.25f}, {-2.7f, 0.0f, 1.8f}, {-2.7f, -0.3f, 1.8f}, {-3f, -0.3f, 1.8f},
        {-3f, 0.0f, 1.8f}, {-2.7f, 0.0f, 1.575f}, {-2.7f, -0.3f, 1.575f}, {-3f,
        -0.3f, 1.35f}, {-3f, 0.0f, 1.35f}, {-2.5f, 0.0f, 1.125f}, {-2.5f, -0.3f,
        1.125f}, {-2.65f, -0.3f, 0.9375f}, {-2.65f, 0.0f, 0.9375f}, {-2f,
        -0.3f, 0.9f}, {-1.9f, -0.3f, 0.6f}, {-1.9f, 0.0f, 0.6f}, {1.7f, 0.0f,
        1.425f}, {1.7f, -0.66f, 1.425f}, {1.7f, -0.66f, 0.6f}, {1.7f, 0.0f,
        0.6f}, {2.6f, 0.0f, 1.425f}, {2.6f, -0.66f, 1.425f}, {3.1f, -0.66f,
        0.825f}, {3.1f, 0.0f, 0.825f}, {2.3f, 0.0f, 2.1f}, {2.3f, -0.25f, 2.1f},
        {2.4f, -0.25f, 2.025f}, {2.4f, 0.0f, 2.025f}, {2.7f, 0.0f, 2.4f}, {2.7f,
        -0.25f, 2.4f}, {3.3f, -0.25f, 2.4f}, {3.3f, 0.0f, 2.4f}, {2.8f, 0.0f,
        2.475f}, {2.8f, -0.25f, 2.475f}, {3.525f, -0.25f, 2.49375f},
        {3.525f, 0.0f, 2.49375f}, {2.9f, 0.0f, 2.475f}, {2.9f, -0.15f, 2.475f},
        {3.45f, -0.15f, 2.5125f}, {3.45f, 0.0f, 2.5125f}, {2.8f, 0.0f, 2.4f},
        {2.8f, -0.15f, 2.4f}, {3.2f, -0.15f, 2.4f}, {3.2f, 0.0f, 2.4f}, {0.0f, 0.0f,
        3.15f}, {0.8f, 0.0f, 3.15f}, {0.8f, -0.45f, 3.15f}, {0.45f, -0.8f,
        3.15f}, {0.0f, -0.8f, 3.15f}, {0.0f, 0.0f, 2.85f}, {1.4f, 0.0f, 2.4f}, {1.4f,
        -0.784f, 2.4f}, {0.784f, -1.4f, 2.4f}, {0.0f, -1.4f, 2.4f}, {0.4f, 0.0f,
        2.55f}, {0.4f, -0.224f, 2.55f}, {0.224f, -0.4f, 2.55f}, {0.0f, -0.4f,
        2.55f}, {1.3f, 0.0f, 2.55f}, {1.3f, -0.728f, 2.55f}, {0.728f, -1.3f,
        2.55f}, {0.0f, -1.3f, 2.55f}, {1.3f, 0.0f, 2.4f}, {1.3f, -0.728f, 2.4f},
        {0.728f, -1.3f, 2.4f}, {0.0f, -1.3f, 2.4f}, {0.0f, 0.0f, 0.0f}, {1.425f,
        -0.798f, 0.0f}, {1.5f, 0.0f, 0.075f}, {1.425f, 0.0f, 0.0f}, {0.798f, -1.425f,
        0.0f}, {0.0f, -1.5f, 0.075f}, {0.0f, -1.425f, 0.0f}, {1.5f, -0.84f, 0.075f},
        {0.84f, -1.5f, 0.075f}
    };
    private static final float tex[] =
    {
      0.0f, 0.0f,
      1.0f, 0.0f,
      0.0f, 1.0f,
      1.0f, 1.0f
    };

    texgenCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new texgenCanvas(d.width, d.height);
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




        /* Local GLCanvas extension class */


    private class texgenCanvas extends GLCanvas
    	implements KeyListener, MouseListener
    {
        private static final int stripeImageWidth = 32;
        private byte stripeImage[] = new byte[4*stripeImageWidth];
        private int texName;

            /* planes for texture coordinate generation  */
        private float xequalzero[] = {1.0f, 0.0f, 0.0f, 0.0f};
        private float slanted[] = {1.0f, 1.0f, 1.0f, 0.0f};
        private float currentCoeff[];
        private int currentPlane;
        private int currentGenMode;

        public texgenCanvas(int w, int h)
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
            gl.glEnable(GL_DEPTH_TEST);
            gl.glShadeModel(GL_SMOOTH);

            makeStripeImage();
            gl.glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

            int tnbuf[] = new int[1];
            gl.glGenTextures(1, tnbuf);
            texName = tnbuf[0];
            gl.glBindTexture(GL_TEXTURE_1D, texName);
            gl.glTexParameteri(GL_TEXTURE_1D, GL_TEXTURE_WRAP_S, GL_REPEAT);
            gl.glTexParameteri(GL_TEXTURE_1D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            gl.glTexParameteri(GL_TEXTURE_1D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            gl.glTexImage1D
                (GL_TEXTURE_1D,
                 0,
                 GL_RGBA,
                 stripeImageWidth,
                 0,
                 GL_RGBA,
                 GL_UNSIGNED_BYTE,
                 stripeImage);
            gl.glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
            currentCoeff = xequalzero;
            currentGenMode = GL_OBJECT_LINEAR;
            currentPlane = GL_OBJECT_PLANE;
            gl.glTexGeni(GL_S, GL_TEXTURE_GEN_MODE, currentGenMode);
            gl.glTexGenfv(GL_S, currentPlane, currentCoeff);

            gl.glEnable(GL_TEXTURE_GEN_S);
            gl.glEnable(GL_TEXTURE_1D);
            gl.glEnable(GL_CULL_FACE);
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glEnable(GL_AUTO_NORMAL);
            gl.glEnable(GL_NORMALIZE);
            gl.glFrontFace(GL_CW);
            gl.glCullFace(GL_BACK);
            gl.glMaterialf(GL_FRONT, GL_SHININESS, 64.0f);

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
            if (width <= height)
                gl.glOrtho
                    (-3.5f,3.5f,-3.5f*(float)height/(float)width,
                     3.5f*(float)height/(float)width,-3.5f,3.5f);
            else
                gl.glOrtho
                    (-3.5f*(float)width/(float)height,
                     3.5f*(float)width/(float)height,-3.5f,3.5f,-3.5f,3.5f);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            if (width <= height)
                gl.glOrtho
                    (-3.5f,3.5f,-3.5f*(float)height/(float)width,
                     3.5f*(float)height/(float)width,-3.5f,3.5f);
            else
                gl.glOrtho
                    (-3.5f*(float)width/(float)height,
                     3.5f*(float)width/(float)height,-3.5f,3.5f,-3.5f,3.5f);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            gl.glPushMatrix ();
            gl.glRotatef(45.0f, 0.0f, 0.0f, 1.0f);
            gl.glBindTexture(GL_TEXTURE_1D, texName);
            glutSolidTeapot(2.0f);
            gl.glPopMatrix();
            gl.glFlush();

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
        }

        // Methods required for the implementation of KeyListener
        public void keyPressed(KeyEvent e)
        {
        }

        public void keyReleased(KeyEvent e)
        {
        }

        public void keyTyped(KeyEvent e)
        {
            if (glj.gljMakeCurrent() == false) return;
            boolean dorepaint = false;
            switch ((char)e.getKeyChar())
            {
            case 'e':
            case 'E':
                currentGenMode = GL_EYE_LINEAR;
                currentPlane = GL_EYE_PLANE;
                gl.glTexGeni(GL_S, GL_TEXTURE_GEN_MODE, currentGenMode);
                gl.glTexGenfv(GL_S, currentPlane, currentCoeff);
                dorepaint = true;
                break;
            case 'o':
            case 'O':
                currentGenMode = GL_OBJECT_LINEAR;
                currentPlane = GL_OBJECT_PLANE;
                gl.glTexGeni(GL_S, GL_TEXTURE_GEN_MODE, currentGenMode);
                gl.glTexGenfv(GL_S, currentPlane, currentCoeff);
                dorepaint = true;
                break;
            case 's':
            case 'S':
                currentCoeff = slanted;
                gl.glTexGenfv(GL_S, currentPlane, currentCoeff);
                dorepaint = true;
                break;
            case 'x':
            case 'X':
                currentCoeff = xequalzero;
                gl.glTexGenfv(GL_S, currentPlane, currentCoeff);
                dorepaint = true;
                break;
            }
            glj.gljFree();
            if (dorepaint) repaint();
        }

        private void makeStripeImage()
        {
            for (int j = 0; j < stripeImageWidth; j++)
            {
                stripeImage[4*j] = (byte)((j<=4) ? 255 : 0);
                stripeImage[4*j+1] = (byte)((j>4) ? 255 : 0);
                stripeImage[4*j+2] = (byte)0;
                stripeImage[4*j+3] = (byte)255;
            }
        }

        // Imported from glut.
        private void glutSolidTeapot(double scale)
        {
            teapot(14, scale, GL_FILL);
        }

        // Imported from glut.
        private void teapot(int grid, double scale, int type)
        {
            float p[] = new float[4*4*3];
            float q[] = new float[4*4*3];
            float r[] = new float[4*4*3];
            float s[] = new float[4*4*3];
            float sc = (float)(0.5*scale);

            gl.glPushAttrib(GL_ENABLE_BIT | GL_EVAL_BIT);
            gl.glEnable(GL_AUTO_NORMAL);
            gl.glEnable(GL_NORMALIZE);
            gl.glEnable(GL_MAP2_VERTEX_3);
            gl.glEnable(GL_MAP2_TEXTURE_COORD_2);
            gl.glPushMatrix();
            gl.glRotatef(270.0f, 1.0f, 0.0f, 0.0f);
            gl.glScalef(sc, sc, sc);
            gl.glTranslatef(0.0f, 0.0f, -1.5f);
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    for (int k = 0; k < 4; k++)
                    {
                        for (int l = 0; l < 3; l++)
                        {
                            p[(j*12)+(k*3)+l] = cpdata[patchdata[i][j * 4 + k]][l];
                            q[(j*12)+(k*3)+l] = cpdata[patchdata[i][j * 4 + (3 - k)]][l];
                            if (l == 1)
                                q[(j*12)+(k*3)+l] *= -1.0f;
                            if (i < 6)
                            {
                                r[(j*12)+(k*3)+l] =
                                    cpdata[patchdata[i][j * 4 + (3 - k)]][l];
                                if (l == 0)
                                    r[(j*12)+(k*3)+l] *= -1.0f;
                                s[(j*12)+(k*3)+l] =
                                    cpdata[patchdata[i][j * 4 + k]][l];
                                if (l == 0)
                                    s[(j*12)+(k*3)+l] *= -1.0f;
                                if (l == 1)
                                    s[(j*12)+(k*3)+l] *= -1.0f;
                            }
                        }
                    }
                }
                gl.glMap2f
                    (GL_MAP2_TEXTURE_COORD_2, 0, 1, 2, 2, 0, 1, 4, 2, tex);
                gl.glMap2f
                    (GL_MAP2_VERTEX_3, 0, 1, 3, 4, 0, 1, 12, 4, p);
                gl.glMapGrid2f(grid, 0.0f, 1.0f, grid, 0.0f, 1.0f);
                gl.glEvalMesh2(type, 0, grid, 0, grid);
                gl.glMap2f(GL_MAP2_VERTEX_3, 0, 1, 3, 4, 0, 1, 12, 4, q);
                gl.glEvalMesh2(type, 0, grid, 0, grid);
                if (i < 6)
                {
                    gl.glMap2f(GL_MAP2_VERTEX_3, 0, 1, 3, 4, 0, 1, 12, 4, r);
                    gl.glEvalMesh2(type, 0, grid, 0, grid);
                    gl.glMap2f(GL_MAP2_VERTEX_3, 0, 1, 3, 4, 0, 1, 12, 4, s);
                    gl.glEvalMesh2(type, 0, grid, 0, grid);
                }
            }
            gl.glPopMatrix();
            gl.glPopAttrib();
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
