/**
 * @(#) [place applet name here].java
 * @(#) author: [place author here] (converted to Java by Ron Cemer)
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

public class spots extends SimpleGLAnimApplet1 
{
        /* Initialize the applet */


	public void init()
	{
	super.init();
        Dimension d = getSize();
        canvas = new spotsCanvas(d.width, d.height);
        add("Center", canvas);
	}


    private class Light
    {
        public float amb[] = new float[4];
        public float diff[] = new float[4];
        public float spec[] = new float[4];
        public float pos[] = new float[4];
        public float spotDir[] = new float[3];
        public float spotExp;
        public float spotCutoff;
        public float atten[] = new float[3];
        public float trans[] = new float[3];
        public float rot[] = new float[3];
        public float swing[] = new float[3];
        public float arc[] = new float[3];
        public float arcIncr[] = new float[3];

        public Light
            (float ambr, float ambg, float ambb, float amba,
             float diffr, float diffg, float diffb, float diffa,
             float specr, float specg, float specb, float speca,
             float posx, float posy, float posz, float posw,
             float dirx, float diry, float dirz,
             float exp,
             float cutoff,
             float attenr, float atteng, float attenb,
             float transx, float transy, float transz,
             float rotx, float roty, float rotz,
             float swingx, float swingy, float swingz,
             float arcx, float arcy, float arcz,
             float arcincrx, float arcincry, float arcincrz)
        {
            amb[0] = ambr;
            amb[1] = ambg;
            amb[2] = ambb;
            amb[3] = amba;
            diff[0] = diffr;
            diff[1] = diffg;
            diff[2] = diffb;
            diff[3] = diffa;
            spec[0] = specr;
            spec[1] = specg;
            spec[2] = specb;
            spec[3] = speca;
            pos[0] = posx;
            pos[1] = posy;
            pos[2] = posz;
            pos[3] = posw;
            spotDir[0] = dirx;
            spotDir[1] = diry;
            spotDir[2] = dirz;
            spotExp = exp;
            spotCutoff = cutoff;
            atten[0] = attenr;
            atten[1] = atteng;
            atten[2] = attenb;
            trans[0] = transx;
            trans[1] = transy;
            trans[2] = transz;
            rot[0] = rotx;
            rot[1] = roty;
            rot[2] = rotz;
            swing[0] = swingx;
            swing[1] = swingy;
            swing[2] = swingz;
            arc[0] = arcx;
            arc[1] = arcy;
            arc[2] = arcz;
            arcIncr[0] = arcincrx;
            arcIncr[1] = arcincry;
            arcIncr[2] = arcincrz;
        }
    }


        /* Local GLAnimCanvas extension class */


    private class spotsCanvas extends GLAnimCanvas
    {
        private final double M_PI = 3.14159265;
        private final double TWO_PI = (2.0*M_PI);
        private final int NUM_LIGHTS = 3;

        private boolean useSAME_AMB_SPEC = true;
        private float modelAmb[] = {0.2f, 0.2f, 0.2f, 1.0f};
        private float matAmb[] = {0.2f, 0.2f, 0.2f, 1.0f};
        private float matDiff[] = {0.8f, 0.8f, 0.8f, 1.0f};
        private float matSpec[] = {0.4f, 0.4f, 0.4f, 1.0f};
        private float matEmission[] = {0.0f, 0.0f, 0.0f, 1.0f};
        private Light[] spots =
        {
            new Light
                (0.2f, 0.0f, 0.0f, 1.0f,  /* ambient */
                 0.8f, 0.0f, 0.0f, 1.0f,  /* diffuse */
                 0.4f, 0.0f, 0.0f, 1.0f,  /* specular */
                 0.0f, 0.0f, 0.0f, 1.0f,  /* position */
                 0.0f, -1.0f, 0.0f,   /* direction */
                 20.0f,
                 60.0f,             /* exponent, cutoff */
                 1.0f, 0.0f, 0.0f,    /* attenuation */
                 0.0f, 1.25f, 0.0f,   /* translation */
                 0.0f, 0.0f, 0.0f,    /* rotation */
                 20.0f, 0.0f, 40.0f,  /* swing */
                 0.0f, 0.0f, 0.0f,    /* arc */
                 (float)(TWO_PI / 70.0), 0.0f, (float)(TWO_PI / 140.0)),  /* arc increment */
            new Light
                (0.0f, 0.2f, 0.0f, 1.0f,  /* ambient */
                 0.0f, 0.8f, 0.0f, 1.0f,  /* diffuse */
                 0.0f, 0.4f, 0.0f, 1.0f,  /* specular */
                 0.0f, 0.0f, 0.0f, 1.0f,  /* position */
                 0.0f, -1.0f, 0.0f,   /* direction */
                 20.0f,
                 60.0f,             /* exponent, cutoff */
                 1.0f, 0.0f, 0.0f,    /* attenuation */
                 0.0f, 1.25f, 0.0f,   /* translation */
                 0.0f, 0.0f, 0.0f,    /* rotation */
                 20.0f, 0.0f, 40.0f,  /* swing */
                 0.0f, 0.0f, 0.0f,    /* arc */
                 (float)(TWO_PI / 120.0), 0.0f, (float)(TWO_PI / 60.0)),  /* arc increment */
            new Light
                (0.0f, 0.0f, 0.2f, 1.0f,  /* ambient */
                 0.0f, 0.0f, 0.8f, 1.0f,  /* diffuse */
                 0.0f, 0.0f, 0.4f, 1.0f,  /* specular */
                 0.0f, 0.0f, 0.0f, 1.0f,  /* position */
                 0.0f, -1.0f, 0.0f,   /* direction */
                 20.0f,
                 60.0f,             /* exponent, cutoff */
                 1.0f, 0.0f, 0.0f,    /* attenuation */
                 0.0f, 1.25f, 0.0f,   /* translation */
                 0.0f, 0.0f, 0.0f,    /* rotation */
                 20.0f, 0.0f, 40.0f,  /* swing */
                 0.0f, 0.0f, 0.0f,    /* arc */
                 (float)(TWO_PI / 50.0), 0.0f, (float)(TWO_PI / 100.0)),  /* arc increment */
        };
        float spin = 0.0f;

        public spotsCanvas(int w, int h)
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

            gl.glMatrixMode(GL_PROJECTION);
            gl.glFrustum(-1.0f, 1.0f, -1.0f, 1.0f, 2.0f, 6.0f);

            gl.glMatrixMode(GL_MODELVIEW);
            gl.glTranslatef(0.0f, 0.0f, -3.0f);
            gl.glRotatef(45.0f, 1.0f, 0.0f, 0.0f);

            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_NORMALIZE);

            gl.glLightModelfv(GL_LIGHT_MODEL_AMBIENT, modelAmb);
            gl.glLightModelf(GL_LIGHT_MODEL_LOCAL_VIEWER, 1.0f);
            gl.glLightModelf(GL_LIGHT_MODEL_TWO_SIDE, 0.0f);

            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, matAmb);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, matDiff);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, matSpec);
            gl.glMaterialfv(GL_FRONT, GL_EMISSION, matEmission);
            gl.glMaterialf(GL_FRONT, GL_SHININESS, 10.0f);

            initLights();
                
            glj.gljCheckGL();
        }
    
        public void reshape(int width, int height)
        {
            gl.glViewport(0,0,width,height);
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            spin += 0.5f;
            if (spin > 360.0f) spin -= 360.0f;

            gl.glClear(GL_COLOR_BUFFER_BIT);

            gl.glPushMatrix();
            gl.glRotatef(spin, 0.0f, 1.0f, 0.0f);

            aimLights();
            setLights();

            gl.glPushMatrix();
            gl.glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
            gl.glScalef(1.9f, 1.9f, 1.0f);
            gl.glTranslatef(-0.5f, -0.5f, 0.0f);
            drawPlane(16, 16);
            gl.glPopMatrix();

            drawLights();
            gl.glPopMatrix();

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
    
            //if (!isSuspended()) repaint();  // Animate at full speed.
        }

        private void initLights()
        {
            for (int k = 0; k < NUM_LIGHTS; ++k)
            {
                int lt = GL_LIGHT0 + k;
                Light light = spots[k];
                gl.glEnable(lt);
                gl.glLightfv(lt, GL_AMBIENT, light.amb);
                gl.glLightfv(lt, GL_DIFFUSE, light.diff);
                if (useSAME_AMB_SPEC)
                    gl.glLightfv(lt, GL_SPECULAR, light.amb);
                else
                    gl.glLightfv(lt, GL_SPECULAR, light.spec);
                gl.glLightf(lt, GL_SPOT_EXPONENT, light.spotExp);
                gl.glLightf(lt, GL_SPOT_CUTOFF, light.spotCutoff);
                gl.glLightf(lt, GL_CONSTANT_ATTENUATION, light.atten[0]);
                gl.glLightf(lt, GL_LINEAR_ATTENUATION, light.atten[1]);
                gl.glLightf(lt, GL_QUADRATIC_ATTENUATION, light.atten[2]);
            }
        }

        private void aimLights()
        {
            for (int k = 0; k < NUM_LIGHTS; ++k)
            {
                Light light = spots[k];
                light.rot[0] = light.swing[0] * (float)Math.sin(light.arc[0]);
                light.arc[0] += light.arcIncr[0];
                if (light.arc[0] > TWO_PI)
                    light.arc[0] -= TWO_PI;
                light.rot[1] = light.swing[1] * (float)Math.sin(light.arc[1]);
                light.arc[1] += light.arcIncr[1];
                if (light.arc[1] > TWO_PI)
                    light.arc[1] -= TWO_PI;
                light.rot[2] = light.swing[2] * (float)Math.sin(light.arc[2]);
                light.arc[2] += light.arcIncr[2];
                if (light.arc[2] > TWO_PI)
                    light.arc[2] -= TWO_PI;
            }
        }

        private void setLights()
        {
            for (int k = 0; k < NUM_LIGHTS; ++k)
            {
                int lt = GL_LIGHT0 + k;
                Light light = spots[k];
                gl.glPushMatrix();
                gl.glTranslatef(light.trans[0], light.trans[1], light.trans[2]);
                gl.glRotatef(light.rot[0], 1, 0, 0);
                gl.glRotatef(light.rot[1], 0, 1, 0);
                gl.glRotatef(light.rot[2], 0, 0, 1);
                gl.glLightfv(lt, GL_POSITION, light.pos);
                gl.glLightfv(lt, GL_SPOT_DIRECTION, light.spotDir);
                gl.glPopMatrix();
            }
        }

        private void drawLights()
        {
            gl.glDisable(GL_LIGHTING);
            for (int k = 0; k < NUM_LIGHTS; ++k)
            {
                Light light = spots[k];
                gl.glColor4fv(light.diff);
                gl.glPushMatrix();
                gl.glTranslatef(light.trans[0], light.trans[1], light.trans[2]);
                gl.glRotatef(light.rot[0], 1, 0, 0);
                gl.glRotatef(light.rot[1], 0, 1, 0);
                gl.glRotatef(light.rot[2], 0, 0, 1);
                gl.glBegin(GL_LINES);
                gl.glVertex3f(light.pos[0], light.pos[1], light.pos[2]);
                gl.glVertex3f(light.spotDir[0], light.spotDir[1], light.spotDir[2]);
                gl.glEnd();
                gl.glPopMatrix();
            }
            gl.glEnable(GL_LIGHTING);
        }

        private void drawPlane(int w, int h)
        {
            int i, j;
            float dw = 1.0f / (float)w;
            float dh = 1.0f / (float)h;
            gl.glNormal3f(0.0f, 0.0f, 1.0f);
            for (j = 0; j < h; ++j)
            {
                gl.glBegin(GL_TRIANGLE_STRIP);
                for (i = 0; i <= w; ++i)
                {
                    gl.glVertex2f(dw * i, dh * (j + 1));
                    gl.glVertex2f(dw * i, dh * j);
                }
            gl.glEnd();
            }
        }
    }
}
