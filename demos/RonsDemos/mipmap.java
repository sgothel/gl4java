/**
 * @(#) mipmap.java
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

/*  mipmap.c
 *  This program demonstrates using mipmaps for texture maps.
 *  To overtly show the effect of mipmaps, each mipmap reduction
 *  level has a solidly colored, contrasting texture image.
 *  Thus, the quadrilateral which is drawn is drawn with several
 *  different colors.
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

public class mipmap extends Applet 
{
    mipmapCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new mipmapCanvas(d.width, d.height);
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


    private class mipmapCanvas extends GLCanvas
    {
        byte mipmapImage32[] = new byte[32*32*4];
        byte mipmapImage16[] = new byte[16*16*4];
        byte mipmapImage8[] = new byte[8*8*4];
        byte mipmapImage4[] = new byte[4*4*4];
        byte mipmapImage2[] = new byte[2*2*4];
        byte mipmapImage1[] = new byte[1*1*4];
        int texName;

        public mipmapCanvas(int w, int h)
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

            gl.glEnable(GL_DEPTH_TEST);
            gl.glShadeModel(GL_FLAT);

            gl.glTranslatef(0.0f, 0.0f, -3.6f);
            makeImages();
            gl.glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

            int tnbuf[] = new int[1];
            gl.glGenTextures(1, tnbuf);
            texName = tnbuf[0];
            gl.glBindTexture(GL_TEXTURE_2D, texName);
            gl.glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
            gl.glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
            gl.glTexParameteri
                (GL_TEXTURE_2D,
                 GL_TEXTURE_MAG_FILTER,
                 GL_NEAREST);
            gl.glTexParameteri
                (GL_TEXTURE_2D,
                 GL_TEXTURE_MIN_FILTER,
                 GL_NEAREST_MIPMAP_NEAREST);
            gl.glTexImage2D
                (GL_TEXTURE_2D,
                 0,
                 GL_RGBA,
                 32,
                 32,
                 0,
                 GL_RGBA,
                 GL_UNSIGNED_BYTE,
                 mipmapImage32);
            gl.glTexImage2D
                (GL_TEXTURE_2D,
                 1,
                 GL_RGBA,
                 16,
                 16,
                 0,
                 GL_RGBA,
                 GL_UNSIGNED_BYTE,
                 mipmapImage16);
            gl.glTexImage2D
                (GL_TEXTURE_2D,
                 2,
                 GL_RGBA,
                 8,
                 8,
                 0,
                 GL_RGBA,
                 GL_UNSIGNED_BYTE,
                 mipmapImage8);
            gl.glTexImage2D
                (GL_TEXTURE_2D,
                 3,
                 GL_RGBA,
                 4,
                 4,
                 0,
                 GL_RGBA,
                 GL_UNSIGNED_BYTE,
                 mipmapImage4);
            gl.glTexImage2D
                (GL_TEXTURE_2D,
                 4,
                 GL_RGBA,
                 2,
                 2,
                 0,
                 GL_RGBA,
                 GL_UNSIGNED_BYTE,
                 mipmapImage2);
            gl.glTexImage2D
                (GL_TEXTURE_2D,
                 5,
                 GL_RGBA,
                 1,
                 1,
                 0,
                 GL_RGBA,
                 GL_UNSIGNED_BYTE,
                 mipmapImage1);

            gl.glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
            gl.glEnable(GL_TEXTURE_2D);

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
            glu.gluPerspective(60.0f,(float)width/(float)height,1.0f,30000.0f);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            gl.glBindTexture(GL_TEXTURE_2D, texName);
            gl.glBegin(GL_QUADS);
            gl.glTexCoord2f(0.0f,0.0f); gl.glVertex3f(-2.0f,-1.0f,0.0f);
            gl.glTexCoord2f(0.0f,8.0f); gl.glVertex3f(-2.0f,1.0f,0.0f);
            gl.glTexCoord2f(8.0f,8.0f); gl.glVertex3f(2000.0f,1.0f,-6000.0f);
            gl.glTexCoord2f(8.0f,0.0f); gl.glVertex3f(2000.0f,-1.0f,-6000.0f);
            gl.glEnd();
            gl.glFlush();

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
        }

        private void makeImages()
        {
            int i, j, idx;
    
            for (idx = i = 0; i < 32; i++)
            {
                for (j = 0; j < 32; j++)
                {
                    mipmapImage32[idx++] = (byte)255;
                    mipmapImage32[idx++] = (byte)255;
                    mipmapImage32[idx++] = (byte)0;
                    mipmapImage32[idx++] = (byte)255;
                }
            }
            for (idx = i = 0; i < 16; i++)
            {
                for (j = 0; j < 16; j++)
                {
                    mipmapImage16[idx++] = (byte)255;
                    mipmapImage16[idx++] = (byte)0;
                    mipmapImage16[idx++] = (byte)255;
                    mipmapImage16[idx++] = (byte)255;
                }
            }
            for (idx = i = 0; i < 8; i++)
            {
                for (j = 0; j < 8; j++)
                {
                    mipmapImage8[idx++] = (byte)255;
                    mipmapImage8[idx++] = (byte)0;
                    mipmapImage8[idx++] = (byte)0;
                    mipmapImage8[idx++] = (byte)255;
                }
            }
            for (idx = i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    mipmapImage4[idx++] = (byte)0;
                    mipmapImage4[idx++] = (byte)255;
                    mipmapImage4[idx++] = (byte)0;
                    mipmapImage4[idx++] = (byte)255;
                }
            }
            for (idx = i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    mipmapImage2[idx++] = (byte)0;
                    mipmapImage2[idx++] = (byte)0;
                    mipmapImage2[idx++] = (byte)255;
                    mipmapImage2[idx++] = (byte)255;
                }
            }
            mipmapImage1[0] = (byte)255;
            mipmapImage1[1] = (byte)255;
            mipmapImage1[2] = (byte)255;
            mipmapImage1[3] = (byte)255;
        }
    }
}
