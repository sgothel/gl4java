/**
 * @(#) scube.java
 * @(#) author: David G Yu/Mark J. Kilgard/Silicon Graphics (converted to Java by Ron Cemer)
 */

/* Copyright (c) Mark J. Kilgard, 1994. */

/**
 * (c) Copyright 1993, 1994, Silicon Graphics, Inc.
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
 * OpenGL(TM) is a trademark of Silicon Graphics, Inc.
 */

/*
 * 1992 David G Yu -- Silicon Graphics Computer Systems
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

public class scube extends SimpleGLAnimApplet1 
{

        /* Initialize the applet */


	public void init()
	{
	super.init();
        Dimension d = getSize();
        canvas = new scubeCanvas(d.width, d.height);
        add("Center", canvas);
	}


        /* Local GLAnimCanvas extension class */


    private class scubeCanvas extends GLAnimCanvas
    	implements KeyListener, MouseListener
    {
        private static final int
            GREY=0,RED=1,GREEN=2,BLUE=3,CYAN=4,MAGENTA=5,YELLOW=6,BLACK=7;

        private float materialColor[][] =
        {
            {0.8f, 0.8f, 0.8f, 1.0f},
            {0.8f, 0.0f, 0.0f, 1.0f},
            {0.0f, 0.8f, 0.0f, 1.0f},
            {0.0f, 0.0f, 0.8f, 1.0f},
            {0.0f, 0.8f, 0.8f, 1.0f},
            {0.8f, 0.0f, 0.8f, 1.0f},
            {0.8f, 0.8f, 0.0f, 1.0f},
            {0.0f, 0.0f, 0.0f, 0.6f},
        };

        private float lightPos[] = {2.0f, 4.0f, 2.0f, 1.0f};
        private float lightAmb[] = {0.2f, 0.2f, 0.2f, 1.0f};
        private float lightDiff[] = {0.8f, 0.8f, 0.8f, 1.0f};
        private float lightSpec[] = {0.4f, 0.4f, 0.4f, 1.0f};

        private float groundPlane[] = {0.0f, 1.0f, 0.0f, 1.499f};
        private float backPlane[] = {0.0f, 0.0f, 1.0f, 0.899f};

        private float fogColor[] = {0.0f, 0.0f, 0.0f, 0.0f};
        private float fogIndex[] = {0.0f};

        private byte shadowPattern[] =
        {
            (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0x55, (byte)0x55, (byte)0x55, (byte)0x55,  /* 50% Grey */
            (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0x55, (byte)0x55, (byte)0x55, (byte)0x55,
            (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0x55, (byte)0x55, (byte)0x55, (byte)0x55,
            (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0x55, (byte)0x55, (byte)0x55, (byte)0x55,
            (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0x55, (byte)0x55, (byte)0x55, (byte)0x55,
            (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0x55, (byte)0x55, (byte)0x55, (byte)0x55,
            (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0x55, (byte)0x55, (byte)0x55, (byte)0x55,
            (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0x55, (byte)0x55, (byte)0x55, (byte)0x55,
            (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0x55, (byte)0x55, (byte)0x55, (byte)0x55,
            (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0x55, (byte)0x55, (byte)0x55, (byte)0x55,
            (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0x55, (byte)0x55, (byte)0x55, (byte)0x55,
            (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0x55, (byte)0x55, (byte)0x55, (byte)0x55,
            (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0x55, (byte)0x55, (byte)0x55, (byte)0x55,
            (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0x55, (byte)0x55, (byte)0x55, (byte)0x55,
            (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0x55, (byte)0x55, (byte)0x55, (byte)0x55,
            (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0xaa, (byte)0x55, (byte)0x55, (byte)0x55, (byte)0x55
        };

        private byte sgiPattern[] =
        {
            (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff,  /* SGI Logo */
            (byte)0xff, (byte)0xbd, (byte)0xff, (byte)0x83, (byte)0xff, (byte)0x5a, (byte)0xff, (byte)0xef,
            (byte)0xfe, (byte)0xdb, (byte)0x7f, (byte)0xef, (byte)0xfd, (byte)0xdb, (byte)0xbf, (byte)0xef,
            (byte)0xfb, (byte)0xdb, (byte)0xdf, (byte)0xef, (byte)0xf7, (byte)0xdb, (byte)0xef, (byte)0xef,
            (byte)0xfb, (byte)0xdb, (byte)0xdf, (byte)0xef, (byte)0xfd, (byte)0xdb, (byte)0xbf, (byte)0x83,
            (byte)0xce, (byte)0xdb, (byte)0x73, (byte)0xff, (byte)0xb7, (byte)0x5a, (byte)0xed, (byte)0xff,
            (byte)0xbb, (byte)0xdb, (byte)0xdd, (byte)0xc7, (byte)0xbd, (byte)0xdb, (byte)0xbd, (byte)0xbb,
            (byte)0xbe, (byte)0xbd, (byte)0x7d, (byte)0xbb, (byte)0xbf, (byte)0x7e, (byte)0xfd, (byte)0xb3,
            (byte)0xbe, (byte)0xe7, (byte)0x7d, (byte)0xbf, (byte)0xbd, (byte)0xdb, (byte)0xbd, (byte)0xbf,
            (byte)0xbb, (byte)0xbd, (byte)0xdd, (byte)0xbb, (byte)0xb7, (byte)0x7e, (byte)0xed, (byte)0xc7,
            (byte)0xce, (byte)0xdb, (byte)0x73, (byte)0xff, (byte)0xfd, (byte)0xdb, (byte)0xbf, (byte)0xff,
            (byte)0xfb, (byte)0xdb, (byte)0xdf, (byte)0x87, (byte)0xf7, (byte)0xdb, (byte)0xef, (byte)0xfb,
            (byte)0xf7, (byte)0xdb, (byte)0xef, (byte)0xfb, (byte)0xfb, (byte)0xdb, (byte)0xdf, (byte)0xfb,
            (byte)0xfd, (byte)0xdb, (byte)0xbf, (byte)0xc7, (byte)0xfe, (byte)0xdb, (byte)0x7f, (byte)0xbf,
            (byte)0xff, (byte)0x5a, (byte)0xff, (byte)0xbf, (byte)0xff, (byte)0xbd, (byte)0xff, (byte)0xc3,
            (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff
        };

        private float cube_vertexes[][][] =
        {
            {
                {-1.0f, -1.0f, -1.0f, 1.0f},
                {-1.0f, -1.0f, 1.0f, 1.0f},
                {-1.0f, 1.0f, 1.0f, 1.0f},
                {-1.0f, 1.0f, -1.0f, 1.0f}
            },
            {
                {1.0f, 1.0f, 1.0f, 1.0f},
                {1.0f, -1.0f, 1.0f, 1.0f},
                {1.0f, -1.0f, -1.0f, 1.0f},
                {1.0f, 1.0f, -1.0f, 1.0f}
            },
            {
                {-1.0f, -1.0f, -1.0f, 1.0f},
                {1.0f, -1.0f, -1.0f, 1.0f},
                {1.0f, -1.0f, 1.0f, 1.0f},
                {-1.0f, -1.0f, 1.0f, 1.0f}
            },
            {
                {1.0f, 1.0f, 1.0f, 1.0f},
                {1.0f, 1.0f, -1.0f, 1.0f},
                {-1.0f, 1.0f, -1.0f, 1.0f},
                {-1.0f, 1.0f, 1.0f, 1.0f}
            },
            {
                {-1.0f, -1.0f, -1.0f, 1.0f},
                {-1.0f, 1.0f, -1.0f, 1.0f},
                {1.0f, 1.0f, -1.0f, 1.0f},
                {1.0f, -1.0f, -1.0f, 1.0f}
            },
            {
                {1.0f, 1.0f, 1.0f, 1.0f},
                {-1.0f, 1.0f, 1.0f, 1.0f},
                {-1.0f, -1.0f, 1.0f, 1.0f},
                {1.0f, -1.0f, 1.0f, 1.0f}
            }
        };

        private float cube_normals[][] =
        {
            {-1.0f, 0.0f, 0.0f, 0.0f},
            {1.0f, 0.0f, 0.0f, 0.0f},
            {0.0f, -1.0f, 0.0f, 0.0f},
            {0.0f, 1.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, -1.0f, 0.0f},
            {0.0f, 0.0f, 1.0f, 0.0f}
        };

        private boolean useLighting = true;
        private boolean useFog = false;
        private boolean useLogo = false;
        private boolean useQuads = true;
        private int tick = -1;

        public scubeCanvas(int w, int h)
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

                /* setup context */
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            gl.glFrustum(-1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 3.0f);

            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
            gl.glTranslatef(0.0f, 0.0f, -2.0f);

            gl.glEnable(GL_DEPTH_TEST);

            if (useLighting) gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
            gl.glLightfv(GL_LIGHT0, GL_AMBIENT, lightAmb);
            gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, lightDiff);
            gl.glLightfv(GL_LIGHT0, GL_SPECULAR, lightSpec);

            gl.glEnable(GL_NORMALIZE);

            if (useFog) gl.glEnable(GL_FOG);
            gl.glFogfv(GL_FOG_COLOR, fogColor);
            gl.glFogfv(GL_FOG_INDEX, fogIndex);
            gl.glFogf(GL_FOG_MODE, GL_EXP);
            gl.glFogf(GL_FOG_DENSITY, 0.5f);
            gl.glFogf(GL_FOG_START, 1.0f);
            gl.glFogf(GL_FOG_END, 3.0f);

            gl.glEnable(GL_CULL_FACE);
            gl.glCullFace(GL_BACK);

            gl.glShadeModel(GL_SMOOTH);

            gl.glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            if (useLogo)
                gl.glPolygonStipple(sgiPattern);
            else
                gl.glPolygonStipple(shadowPattern);

            gl.glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
            gl.glClearIndex(0);
            gl.glClearDepth(1);
                
            glj.gljCheckGL();

            addKeyListener(this);
	    addMouseListener(this);    
        }
    
        public void doCleanup()
        {
            System.out.println("destroy(): " + this);
            removeKeyListener(this);
        }
    
        public void reshape(int width, int height)
        {
            gl.glViewport(0,0,width,height);

// Put any custom reshape code here.

        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            if (!isSuspended()) inctick();

            float cubeXform[] = new float[16];

            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            gl.glPushMatrix();
            gl.glTranslatef(0.0f, -1.5f, 0.0f);
            gl.glRotatef(-90.0f, 1f, 0f, 0f);
            gl.glScalef(2.0f, 2.0f, 2.0f);

            drawCheck(6, 6, BLUE, YELLOW);  /* draw ground */
            gl.glPopMatrix();

            gl.glPushMatrix();
            gl.glTranslatef(0.0f, 0.0f, -0.9f);
            gl.glScalef(2.0f, 2.0f, 2.0f);

            drawCheck(6, 6, BLUE, YELLOW);  /* draw back */
            gl.glPopMatrix();

            gl.glPushMatrix();
            gl.glTranslatef(0.0f, 0.2f, 0.0f);
            gl.glScalef(0.3f, 0.3f, 0.3f);
            gl.glRotatef((360.0f / (30 * 1)) * tick, 1f, 0f, 0f);
            gl.glRotatef((360.0f / (30 * 2)) * tick, 0f, 1f, 0f);
            gl.glRotatef((360.0f / (30 * 4)) * tick, 0f, 0f, 1f);
            gl.glScalef(1.0f, 2.0f, 1.0f);
            gl.glGetFloatv(GL_MODELVIEW_MATRIX, cubeXform);

            drawCube(RED);        /* draw cube */
            gl.glPopMatrix();

            gl.glDepthMask(false);
            gl.glEnable(GL_POLYGON_STIPPLE);
            if (useFog) gl.glDisable(GL_FOG);
            gl.glPushMatrix();
            myShadowMatrix(groundPlane, lightPos);
            gl.glTranslatef(0.0f, 0.0f, 2.0f);
            gl.glMultMatrixf(cubeXform);

            drawCube(BLACK);      /* draw ground shadow */
            gl.glPopMatrix();

            gl.glPushMatrix();
            myShadowMatrix(backPlane, lightPos);
            gl.glTranslatef(0.0f, 0.0f, 2.0f);
            gl.glMultMatrixf(cubeXform);

            drawCube(BLACK);      /* draw back shadow */
            gl.glPopMatrix();

            gl.glDepthMask(true);
            gl.glDisable(GL_POLYGON_STIPPLE);
            if (useFog) gl.glEnable(GL_FOG);

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
    
            //if (!isSuspended()) repaint();  // Animate at full speed.
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
            case 'L':
            case 'l':
                useLighting = !useLighting;
                if (useLighting)
                    gl.glEnable(GL_LIGHTING);
                else
                    gl.glDisable(GL_LIGHTING);
                dorepaint = isSuspended();
                break;
            case 'S':
            case 's':
                useLogo = !useLogo;
                if (useLogo)
                    gl.glPolygonStipple(sgiPattern);
                else
                    gl.glPolygonStipple(shadowPattern);
                dorepaint = isSuspended();
                break;
            case 'Q':
            case 'q':
                useQuads = !useQuads;
                dorepaint = isSuspended();
                break;
            case 'F':
            case 'f':
                useFog = !useFog;
                if (useFog)
                    gl.glEnable(GL_FOG);
                else
                    gl.glDisable(GL_FOG);
                dorepaint = isSuspended();
                break;
            case '1':
                gl.glFogf(GL_FOG_MODE, GL_LINEAR);
                dorepaint = isSuspended();
                break;
            case '2':
                gl.glFogf(GL_FOG_MODE, GL_EXP);
                dorepaint = isSuspended();
                break;
            case '3':
                gl.glFogf(GL_FOG_MODE, GL_EXP2);
                dorepaint = isSuspended();
                break;
            case 'P':
            case 'p':
                setSuspended(!isSuspended());
                break;
            case ' ':
                if (isSuspended())
                {
                    inctick();
                    dorepaint = true;
                }
                break;
            }
            glj.gljFree();
            if (dorepaint) repaint();
        }

        private void inctick()
        {
            tick++;
            if (tick >= 120) tick = 0;
        }

        private void setColor(int c)
        {
            if (useLighting)
                gl.glMaterialfv
                    (GL_FRONT_AND_BACK,
                     GL_AMBIENT_AND_DIFFUSE,
                     materialColor[c]);
            else
                gl.glColor4fv(materialColor[c]);
        }

        private void drawCube(int color)
        {
            setColor(color);

            for (int i = 0; i < 6; ++i)
            {
                gl.glNormal3fv(cube_normals[i]);
                gl.glBegin(GL_POLYGON);
                gl.glVertex4fv(cube_vertexes[i][0]);
                gl.glVertex4fv(cube_vertexes[i][1]);
                gl.glVertex4fv(cube_vertexes[i][2]);
                gl.glVertex4fv(cube_vertexes[i][3]);
                gl.glEnd();
            }
        }

        private boolean check_initialized = false;
        private boolean check_usedLighting = false;
        private boolean check_usedQuads = false;
        private int checklist = 0;

        private void drawCheck(int w, int h, int evenColor, int oddColor)
        {
            if (   (!check_initialized)
                || (check_usedLighting != useLighting)
                || (check_usedQuads != useQuads)  )
            {
                float square_normal[] = {0.0f, 0.0f, 1.0f, 0.0f};
                float square[][] = new float[4][4];
                int i, j;

                if (checklist == 0) checklist = gl.glGenLists(1);
                gl.glNewList(checklist, GL_COMPILE_AND_EXECUTE);
                if (useQuads)
                {
                    gl.glNormal3fv(square_normal);
                    gl.glBegin(GL_QUADS);
                }
                for (j = 0; j < h; ++j)
                {
                    for (i = 0; i < w; ++i)
                    {
                        square[0][0] = -1.0f + 2.0f / w * i;
                        square[0][1] = -1.0f + 2.0f / h * (j + 1);
                        square[0][2] = 0.0f;
                        square[0][3] = 1.0f;

                        square[1][0] = -1.0f + 2.0f / w * i;
                        square[1][1] = -1.0f + 2.0f / h * j;
                        square[1][2] = 0.0f;
                        square[1][3] = 1.0f;
                        
                        square[2][0] = -1.0f + 2.0f / w * (i + 1);
                        square[2][1] = -1.0f + 2.0f / h * j;
                        square[2][2] = 0.0f;
                        square[2][3] = 1.0f;
                        
                        square[3][0] = -1.0f + 2.0f / w * (i + 1);
                        square[3][1] = -1.0f + 2.0f / h * (j + 1);
                        square[3][2] = 0.0f;
                        square[3][3] = 1.0f;
                        
                        if ( ((i & 1) != 0) ^ ((j & 1) != 0) )
                            setColor(oddColor);
                        else
                            setColor(evenColor);

                        if (!useQuads)gl.glBegin(GL_POLYGON);
                        gl.glVertex4fv(square[0]);
                        gl.glVertex4fv(square[1]);
                        gl.glVertex4fv(square[2]);
                        gl.glVertex4fv(square[3]);
                        if (!useQuads) gl.glEnd();
                    }
                }

                if (useQuads) gl.glEnd();
                gl.glEndList();

                check_initialized = true;
                check_usedLighting = useLighting;
                check_usedQuads = useQuads;
            }
            else
                gl.glCallList(checklist);
        }

        private void myShadowMatrix(float ground[], float light[])
        {
            float dot;
            float shadowMat[] = new float[4*4];

            dot =
                ground[0] * light[0] +
                ground[1] * light[1] +
                ground[2] * light[2] +
                ground[3] * light[3];

            shadowMat[0] = dot - light[0] * ground[0];
            shadowMat[4] = -light[0] * ground[1];
            shadowMat[8] = -light[0] * ground[2];
            shadowMat[12] = -light[0] * ground[3];
            
            shadowMat[1] = -light[1] * ground[0];
            shadowMat[5] = dot - light[1] * ground[1];
            shadowMat[9] = -light[1] * ground[2];
            shadowMat[13] = -light[1] * ground[3];
            
            shadowMat[2] = -light[2] * ground[0];
            shadowMat[6] = -light[2] * ground[1];
            shadowMat[10] = dot - light[2] * ground[2];
            shadowMat[14] = -light[2] * ground[3];
            
            shadowMat[3] = -light[3] * ground[0];
            shadowMat[7] = -light[3] * ground[1];
            shadowMat[11] = -light[3] * ground[2];
            shadowMat[15] = dot - light[3] * ground[3];

            gl.glMultMatrixf(shadowMat);
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
