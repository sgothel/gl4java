/**
 * @(#) dof.java
 * @(#) author: Silicon Graphics (converted to Java by Ron Cemer)
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
 *  This program demonstrates use of the accumulation buffer to
 *  create an out-of-focus depth-of-field effect.  The teapots
 *  are drawn several times into the accumulation buffer.  The
 *  viewing volume is jittered, except at the focal point, where
 *  the viewing volume is at the same position, each time.  In
 *  this case, the gold teapot remains in focus.
 */

public class dof extends Applet
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
    /* 8 jitter points */
    double j8[][] =
    {
        {-0.334818,  0.435331},
        { 0.286438, -0.393495},
        { 0.459462,  0.141540},
        {-0.414498, -0.192829},
        {-0.183790,  0.082102},
        {-0.079263, -0.317383},
        { 0.102254,  0.299133},
        { 0.164216, -0.054399}
    };

    dofCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new dofCanvas(d.width, d.height);
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


    private class dofCanvas extends GLCanvas
    {
        private final double PI_ = 3.14159265358979323846;
        int teapotList;

        public dofCanvas(int w, int h)
        {
            super(w, h);
            GLContext.gljNativeDebug = false;
            GLContext.gljClassDebug = false;
        }
    
        public void preInit()
        {
            doubleBuffer = true;
            stereoView = false;
	    accumSize = 8;
        }
    
        public void init()
        {
            System.out.println("init(): " + this);
            reshape(getSize().width, getSize().height);

            float ambient[] = { 0.0f, 0.0f, 0.0f, 1.0f };
            float diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            float specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            float position[] = { 0.0f, 3.0f, 3.0f, 0.0f };
    
            float lmodel_ambient[] = { 0.2f, 0.2f, 0.2f, 1.0f };
            float local_view[] = { 0.0f };

            gl.glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
            gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
            gl.glLightfv(GL_LIGHT0, GL_POSITION, position);
    
            gl.glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
            gl.glLightModelfv(GL_LIGHT_MODEL_LOCAL_VIEWER, local_view);

            gl.glFrontFace(GL_CW);
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glEnable(GL_AUTO_NORMAL);
            gl.glEnable(GL_NORMALIZE);
            gl.glEnable(GL_DEPTH_TEST);

            gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
            gl.glClearAccum(0.0f, 0.0f, 0.0f, 0.0f);

                /*  make teapot display list */
            teapotList = gl.glGenLists(1);
            gl.glNewList(teapotList, GL_COMPILE);
            glutSolidTeapot(0.5);
            gl.glEndList();

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
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            int viewport[] = new int[4];

            gl.glGetIntegerv(GL_VIEWPORT, viewport);
            gl.glClear(GL_ACCUM_BUFFER_BIT);

            for (int jitter = 0; jitter < 8; jitter++)
            {
                gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
                accPerspective
                    (45.0,
                     (double)viewport[2]/(double)viewport[3], 
                     1.0, 15.0, 0.0, 0.0,
                     0.33*j8[jitter][0], 0.33*j8[jitter][1], 5.0);
                    /*  ruby, gold, silver, emerald, and cyan teapots   */
                renderTeapot
                    (-1.1f, -0.5f, -4.5f, 0.1745f, 0.01175f,
                     0.01175f, 0.61424f, 0.04136f, 0.04136f,
                     0.727811f, 0.626959f, 0.626959f, 0.6f);
                renderTeapot
                    (-0.5f, -0.5f, -5.0f, 0.24725f, 0.1995f,
                     0.0745f, 0.75164f, 0.60648f, 0.22648f, 
                     0.628281f, 0.555802f, 0.366065f, 0.4f);
                renderTeapot
                    (0.2f, -0.5f, -5.5f, 0.19225f, 0.19225f,
                     0.19225f, 0.50754f, 0.50754f, 0.50754f, 
                     0.508273f, 0.508273f, 0.508273f, 0.4f);
                renderTeapot
                    (1.0f, -0.5f, -6.0f, 0.0215f, 0.1745f, 0.0215f,
                     0.07568f, 0.61424f, 0.07568f, 0.633f, 
                     0.727811f, 0.633f, 0.6f);
                renderTeapot
                    (1.8f, -0.5f, -6.5f, 0.0f, 0.1f, 0.06f, 0.0f,
                     0.50980392f, 0.50980392f, 0.50196078f, 
                     0.50196078f, 0.50196078f, 0.25f);
                gl.glAccum(GL_ACCUM, 0.125f);
            }
            gl.glAccum (GL_RETURN, 1.0f);

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
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

            /* accFrustum()
             * The first 6 arguments are identical to the glFrustum() call.
             *  
             * pixdx and pixdy are anti-alias jitter in pixels. 
             * Set both equal to 0.0 for no anti-alias jitter.
             * eyedx and eyedy are depth-of field jitter in pixels. 
             * Set both equal to 0.0 for no depth of field effects.
             *
             * focus is distance from eye to plane in focus. 
             * focus must be greater than, but not equal to 0.0.
             *
             * Note that accFrustum() calls glTranslatef().  You will 
             * probably want to insure that your ModelView matrix has been 
             * initialized to identity before calling accFrustum().
             */
        private void accFrustum
            (double left,
             double right,
             double bottom,
             double top,
             double near,
             double far,
             double pixdx,
             double pixdy,
             double eyedx,
             double eyedy,
             double focus)
        {
            double xwsize, ywsize; 
            double dx, dy;
            int viewport[] = new int[4];

            gl.glGetIntegerv(GL_VIEWPORT, viewport);
	
            xwsize = right - left;
            ywsize = top - bottom;
	
            dx = -(pixdx*xwsize/(double) viewport[2] + eyedx*near/focus);
            dy = -(pixdy*ywsize/(double) viewport[3] + eyedy*near/focus);
	
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            gl.glFrustum
                ((float)(left + dx),
                 (float)(right + dx),
                 (float)(bottom + dy),
                 (float)(top + dy),
                 (float)near,
                 (float)far);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
            gl.glTranslatef((float)-eyedx, (float)-eyedy, 0.0f);
        }

            /*  accPerspective()
             * 
             *  The first 4 arguments are identical to the gluPerspective() call.
             *  pixdx and pixdy are anti-alias jitter in pixels. 
             *  Set both equal to 0.0 for no anti-alias jitter.
             *  eyedx and eyedy are depth-of field jitter in pixels. 
             *  Set both equal to 0.0 for no depth of field effects.
             *
             *  focus is distance from eye to plane in focus. 
             *  focus must be greater than, but not equal to 0.0.
             *
             *  Note that accPerspective() calls accFrustum().
             */
        private void accPerspective
            (double fovy,
             double aspect,
             double near,
             double far,
             double pixdx,
             double pixdy,
             double eyedx,
             double eyedy,
             double focus)
        {
            double fov2,left,right,bottom,top;

            fov2 = ((fovy*PI_) / 180.0) / 2.0;

            top = near / (Math.cos(fov2) / Math.sin(fov2));
            bottom = -top;

            right = top * aspect;
            left = -right;

            accFrustum
                (left,right,bottom,top,near,far,pixdx,pixdy,eyedx,eyedy,focus);
        }

        private void renderTeapot
            (float x,
             float y,
             float z,
             float ambr,
             float ambg,
             float ambb,
             float difr,
             float difg,
             float difb,
             float specr,
             float specg,
             float specb,
             float shine)
        {
            float mat[] = new float[4];

            gl.glPushMatrix();
            gl.glTranslatef(x, y, z);
            mat[0] = ambr; mat[1] = ambg; mat[2] = ambb; mat[3] = 1.0f;
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, mat);
            mat[0] = difr; mat[1] = difg; mat[2] = difb; 
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat);
            mat[0] = specr; mat[1] = specg; mat[2] = specb;
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat);
            gl.glMaterialf(GL_FRONT, GL_SHININESS, shine*128.0f);
            gl.glCallList(teapotList);
            gl.glPopMatrix();
        }
    }
}
