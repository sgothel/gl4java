/**
 * @(#) star.java
 * @(#) author: Silicon Graphics (converted to Java by Ron Cemer)
 */

/*
 * Copyright (c) 1991, 1992, 1993 Silicon Graphics, Inc.
 *
 * Permission to use, copy, modify, distribute, and sell this software and
 * its documentation for any purpose is hereby granted without fee, provided
 * that (i) the above copyright notices and this permission notice appear in
 * all copies of the software and related documentation, and (ii) the name of
 * Silicon Graphics may not be used in any advertising or
 * publicity relating to the software without the specific, prior written
 * permission of Silicon Graphics.
 *
 * THE SOFTWARE IS PROVIDED "AS-IS" AND WITHOUT WARRANTY OF
 * ANY KIND,
 * EXPRESS, IMPLIED OR OTHERWISE, INCLUDING WITHOUT LIMITATION, ANY
 * WARRANTY OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT SHALL SILICON GRAPHICS BE LIABLE FOR
 * ANY SPECIAL, INCIDENTAL, INDIRECT OR CONSEQUENTIAL DAMAGES OF ANY KIND,
 * OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
 * WHETHER OR NOT ADVISED OF THE POSSIBILITY OF DAMAGE, AND ON ANY THEORY OF
 * LIABILITY, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE
 * OF THIS SOFTWARE.
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

public class star extends SimpleGLAnimApplet1 
{
        /* Initialize the applet */


	public void init()
	{
	super.init();
        Dimension d = getSize();
        canvas = new starCanvas(d.width, d.height);
        add("Center", canvas);
	}


        /* Local GLAnimCanvas extension class */


    private class starCanvas extends GLAnimCanvas implements MouseListener
    {
        private static final float M_PI = 3.14159265359f;
        private static final int NORMAL = 0, WEIRD = 1;
        private static final int STREAK = 0, CIRCLE = 1;
        private static final int MAXSTARS = 400;
        private static final int MAXPOS = 10000;
        private static final int MAXWARP = 10;
        private static final int MAXANGLES = 6000;
        private int windW, windH;
        private int flag = NORMAL;
        private int starCount = MAXSTARS / 2;
        private float speed = 1.0f;
        private int nitro = 0;
        private starRec stars[];
        private float sinTable[];
        private Random rand = null;

        private class starRec
        {
            protected int type;
            protected float x[], y[], z[];
            protected float offsetX, offsetY, offsetR, rotation;

            public starRec()
            {
                x = new float[2];
                y = new float[2];
                z = new float[2];
            }
        }

        public starCanvas(int w, int h)
        {
            super(w, h);
            GLContext.gljNativeDebug = false;
            GLContext.gljClassDebug = false;
            setAnimateFps(30.0);

            stars = new starRec[MAXSTARS];
            sinTable = new float[MAXANGLES];
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

            Date dt = new Date();
            rand = new Random(dt.getTime());

            int n;
            for (n = 0; n < MAXSTARS; n++)
                NewStar(n, 100);
            float angle = 0.0f;
            for (n = 0; n < MAXANGLES ; n++)
            {
                sinTable[n] = (float)Math.sin(angle);
                angle += M_PI / (MAXANGLES / 2.0f);
            }
            gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
            gl.glDisable(GL_DITHER);

            glj.gljCheckGL();

            addMouseListener(this);
        }
    
        public void doCleanup()
        {
            System.out.println("destroy(): " + this);
            removeMouseListener(this);
        }
    
        public void reshape(int width, int height)
        {
            windW = width;
            windH = height;

            gl.glViewport(0,0,width,height);
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            glu.gluOrtho2D(-0.5,(double)width+0.5,-0.5,(double)height+0.5);
            gl.glMatrixMode(GL_MODELVIEW);
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            MoveStars();
            ShowStars();
            if (nitro > 0)
            {
                speed = (float)(nitro / 10) + 1.0f;
                if (speed > MAXWARP) speed = MAXWARP;
                if (++nitro > MAXWARP*10) nitro = -nitro;
            }
            else if (nitro < 0)
            {
                nitro++;
                speed = (float)(-nitro / 10) + 1.0f;
                if (speed > MAXWARP) speed = MAXWARP;
            }
        
            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
    
            //if (!isSuspended()) repaint();  // Animate at full speed.
        }

        private float Sin(float angle)
        {
            int ang;
            ang = (int)angle;
            while (ang < 0) ang += MAXANGLES;
            while (ang >= MAXANGLES) ang -= MAXANGLES;
            return (sinTable[ang]);
        }
        
        private float Cos(float angle)
        {
            return Sin(angle+(((float)MAXANGLES)*0.25f));
        }

        private void NewStar(int n, int d)
        {
            stars[n] = new starRec();
            if (rand.nextInt() % 4 == 0)
                stars[n].type = CIRCLE;
            else
                stars[n].type = STREAK;
            stars[n].x[0] = (float)(rand.nextInt() % MAXPOS - MAXPOS / 2);
            stars[n].y[0] = (float)(rand.nextInt() % MAXPOS - MAXPOS / 2);
            stars[n].z[0] = (float)(rand.nextInt() % MAXPOS + d);
            if ( (rand.nextInt() % 4 == 0) && (flag == WEIRD) )
            {
                stars[n].offsetX = (float)(rand.nextInt() % 100 - 100 / 2);
                stars[n].offsetY = (float)(rand.nextInt() % 100 - 100 / 2);
                stars[n].offsetR = (float)(rand.nextInt() % 25 - 25 / 2);
            }
            else
            {
                stars[n].offsetX = 0.0f;
                stars[n].offsetY = 0.0f;
                stars[n].offsetR = 0.0f;
            }
        }

        private void RotatePoint(float[] x, float[] y, float rotation)
        {
            float tmpX, tmpY;
        
            tmpX = x[0] * Cos(rotation) - y[0] * Sin(rotation);
            tmpY = y[0] * Cos(rotation) + x[0] * Sin(rotation);
            x[0] = tmpX;
            y[0] = tmpY;
        }

        private void MoveStars()
        {
            float offset;
            int n;
        
            offset = speed * 60.0f;
        
            for (n = 0; n < starCount; n++)
            {
                stars[n].x[1] = stars[n].x[0];
                stars[n].y[1] = stars[n].y[0];
                stars[n].z[1] = stars[n].z[0];
                stars[n].x[0] += stars[n].offsetX;
                stars[n].y[0] += stars[n].offsetY;
                stars[n].z[0] -= offset;
                int rot = (int)(stars[n].rotation = stars[n].offsetR);
                while (rot < 0) rot += MAXANGLES;
                while (rot >= MAXANGLES) rot -= MAXANGLES;
                stars[n].rotation = (float)rot;
            }
        }

        private boolean StarPoint(int n)
        {
            float x0, y0, x1, y1, width;
            float xbuf[] = new float[1], ybuf[] = new float[1];
            int i;
        
            x0 = stars[n].x[0] * windW / stars[n].z[0];
            y0 = stars[n].y[0] * windH / stars[n].z[0];
            xbuf[0] = x0;
            ybuf[0] = y0;
            RotatePoint(xbuf, ybuf, stars[n].rotation);
            x0 = xbuf[0];
            y0 = ybuf[0];
            x0 += windW / 2.0f;
            y0 += windH / 2.0f;
        
            if ( (x0 >= 0.0f) && (x0 < windW) && (y0 >= 0.0f) && (y0 < windH) )
            {
                if (stars[n].type == STREAK)
                {
                    x1 = stars[n].x[1] * windW / stars[n].z[1];
                    y1 = stars[n].y[1] * windH / stars[n].z[1];
                    xbuf[0] = x1;
                    ybuf[0] = y1;
                    RotatePoint(xbuf, ybuf, stars[n].rotation);
                    x1 = xbuf[0];
                    y1 = ybuf[0];
                    x1 += windW / 2.0f;
                    y1 += windH / 2.0f;
            
                    gl.glLineWidth(MAXPOS/100.0f/stars[n].z[0]+1.0f);
                    gl.glColor3f(1.0f, (MAXWARP-speed)/MAXWARP, (MAXWARP-speed)/MAXWARP);
                    if (Math.abs(x0-x1) < 1.0f && Math.abs(y0-y1) < 1.0f)
                    {
                        gl.glBegin(GL_POINTS);
                        gl.glVertex2f(x0, y0);
                        gl.glEnd();
                    }
                    else
                    {
                        gl.glBegin(GL_LINES);
                        gl.glVertex2f(x0, y0);
                        gl.glVertex2f(x1, y1);
                        gl.glEnd();
                    }
                }
                else
                {
                    width = MAXPOS / 10.0f / stars[n].z[0] + 1.0f;
                    gl.glColor3f(1.0f, 0.0f, 0.0f);
                    gl.glBegin(GL_POLYGON);
                    for (i = 0; i < 8; i++)
                    {
                        float x = x0 + width * Cos((float)i*MAXANGLES/8.0f);
                        float y = y0 + width * Sin((float)i*MAXANGLES/8.0f);
                        gl.glVertex2f(x, y);
                    };
                    gl.glEnd();
                }

                return true;
            }
            return false;
        }

        private void ShowStars()
        {
            gl.glClear(GL_COLOR_BUFFER_BIT);
            for (int n = 0; n < starCount; n++)
            {
                if (   (stars[n].z[0] > speed)
                    || ( (stars[n].z[0] > 0.0f) && (speed < MAXWARP) )   )
                {
                    if (!StarPoint(n))
                        NewStar(n, MAXPOS);
                }
                else
                    NewStar(n, MAXPOS);
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
            flag = (flag == NORMAL) ? WEIRD : NORMAL;
        }
    
        public void mouseReleased( MouseEvent evt )
        {
        }
    
        public void mouseClicked( MouseEvent evt )
        {
        }
    }
}
