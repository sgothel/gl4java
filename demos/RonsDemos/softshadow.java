/**
 * @(#) softshadow.java
 * @(#) author: Tom McReynolds, SGI (converted to Java by Ron Cemer)
 */

/* Using the accumulation buffer for soft shadows. */
/* Demonstrate the use of accumulation buffer to create soft shadows */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;
import gl4java.GLContext;
import gl4java.awt.GLCanvas;

public class softshadow extends Applet 
{
    private static final int SPHERE=1, CONE=2, LIGHT=3, LEFTWALL=4, FLOOR=5;
    private static final int X = 0, Y = 1, Z = 2;
    private static final int A = 0, B = 1, C = 2, D = 3;
    private static final int NONE = 0, SHADOW = 1;
    private static final int TEXDIM = 256;

    softshadowCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new softshadowCanvas(d.width, d.height);
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


    private class ShadObj
    {
        float[] vertices;
        float[] normal;
        int n;
    }


        /* Local GLCanvas extension class */


    private class softshadowCanvas extends GLCanvas implements MouseListener
    {
        private float leftwallshadow[] = new float[16];
        private float floorshadow[] = new float[16];
        private float lightpos[] = { 50.0f, 50.0f, -320.0f, 1.0f };
        private int rendermode = SHADOW;

        public softshadowCanvas(int w, int h)
        {
            super(w, h);
            GLContext.gljNativeDebug = false;
            GLContext.gljClassDebug = false;
        }
    
        public void preInit()
        {
            doubleBuffer = true;
            stereoView = false;
	    stencilBits = 3;
	    accumSize = 8;
        }
    
        public void init()
        {
            System.out.println("init(): " + this);
            reshape(getSize().width, getSize().height);

                /* turn on features */
            gl.glEnable(GL_DEPTH_TEST);
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);

                /* make shadow matricies */

            float v0[] = new float[3];
            float v1[] = new float[3];
            float v2[] = new float[3];

                /* 3 points on floor */
            v0[X] = -100.0f;
            v0[Y] = -100.0f;
            v0[Z] = -320.0f;
            v1[X] = 100.0f;
            v1[Y] = -100.0f;
            v1[Z] = -320.0f;
            v2[X] = 100.0f;
            v2[Y] = -100.0f;
            v2[Z] = -520.0f;
            
            float plane[] = new float[4];
            findplane(plane, v0, v1, v2);
            shadowmatrix(floorshadow, plane, lightpos);

                /* 3 points on left wall */
            v0[X] = -100.0f;
            v0[Y] = -100.0f;
            v0[Z] = -320.0f;
            v1[X] = -100.0f;
            v1[Y] = -100.0f;
            v1[Z] = -520.0f;
            v2[X] = -100.0f;
            v2[Y] = 100.0f;
            v2[Z] = -520.0f;

            findplane(plane, v0, v1, v2);
            shadowmatrix(leftwallshadow, plane, lightpos);

                /* place light 0 in the right place */
            gl.glLightfv(GL_LIGHT0, GL_POSITION, lightpos);

                /* remove back faces to speed things up */
            gl.glCullFace(GL_BACK);

            gl.glTexParameteri
                (GL_TEXTURE_2D,
                 GL_TEXTURE_MIN_FILTER,
                 GL_NEAREST);

                /* make display lists for sphere and cone; for efficiency */

            long sphere, cone, base;

            gl.glNewList(SPHERE, GL_COMPILE);
            sphere = glu.gluNewQuadric();
            glu.gluSphere(sphere, 20.f, 20, 20);
            glu.gluDeleteQuadric(sphere);
            gl.glEndList();
            
            gl.glNewList(LIGHT, GL_COMPILE);
            sphere = glu.gluNewQuadric();
            glu.gluSphere(sphere, 5.f, 20, 20);
            glu.gluDeleteQuadric(sphere);
            gl.glEndList();
            
            gl.glNewList(CONE, GL_COMPILE);
            cone = glu.gluNewQuadric();
            base = glu.gluNewQuadric();
            gl.glRotatef(-90.f, 1.f, 0.f, 0.f);
            glu.gluDisk(base, 0., 20., 20, 1);
            glu.gluCylinder(cone, 20., 0., 60., 20, 20);
            glu.gluDeleteQuadric(cone);
            glu.gluDeleteQuadric(base);
            gl.glEndList();
            
            gl.glNewList(FLOOR, GL_COMPILE);
            gl.glEndList();
            
            gl.glNewList(LEFTWALL, GL_COMPILE);
            gl.glEndList();

            byte tex[] = make_texture(TEXDIM, TEXDIM);
            gl.glTexImage2D
                (GL_TEXTURE_2D,
                 0,
                 1,
                 TEXDIM,
                 TEXDIM,
                 0,
                 GL_RED,
                 GL_UNSIGNED_BYTE,
                 tex);
            tex = null;

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
                /* draw a perspective scene */
            gl.glMatrixMode(GL_PROJECTION);
            gl.glFrustum(-100.0f, 100.0f, -100.0f, 100.0f, 320.0f, 640.0f);
            gl.glMatrixMode(GL_MODELVIEW);
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;


            int dx, dy, dz;

            dy = 0;
                /* jitter the light around */
            if (rendermode == SHADOW)
            {
                gl.glClear(GL_ACCUM_BUFFER_BIT);
                for (dz = -4; dz < 5; dz += 2)
                {
                    for (dx = -4; dx < 5; dx += 2)
                    {
                        render((float)dx, (float)dy, (float)dz);
                        gl.glAccum(GL_ACCUM, 1.0f / 25.0f);
                    }
                }
                gl.glAccum(GL_RETURN, 1.0f);
            }
            else
                render(0.0f, 0.0f, 0.0f);

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
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
            rendermode++;
            if (rendermode > SHADOW) rendermode = NONE;
            repaint();
        }
    
        public void mouseReleased( MouseEvent evt )
        {
        }
    
        public void mouseClicked( MouseEvent evt )
        {
        }

        private byte[] make_texture(int maxs, int maxt)
        {
            byte texture[] = new byte[maxs*maxt];
            for (int t = 0; t < maxt; t++)
            {
                for (int s = 0; s < maxs; s++)
                {
                    texture[s + maxs * t] =
                        ( (((s >> 4) & 0x1) != 0) ^ (((t >> 4) & 0x1) != 0) ) ?
                        (byte)0xff :
                        (byte)0;
                }
            }
            return texture;
        }

            /* create a matrix that will project the desired shadow */
        void shadowmatrix(float shadowMat[], float groundplane[], float lightpos[])
        {
            float dot;

                /* find dot product between light position vector
                   and ground plane normal */
            dot =
                groundplane[0] * lightpos[0] +
                groundplane[1] * lightpos[1] +
                groundplane[2] * lightpos[2] +
                groundplane[3] * lightpos[3];

            shadowMat[0]  = dot - lightpos[0] * groundplane[0];
            shadowMat[4]  = -lightpos[0] * groundplane[1];
            shadowMat[8]  = -lightpos[0] * groundplane[2];
            shadowMat[12] = -lightpos[0] * groundplane[3];
            
            shadowMat[1]  = -lightpos[1] * groundplane[0];
            shadowMat[5]  = dot - lightpos[1] * groundplane[1];
            shadowMat[9]  = -lightpos[1] * groundplane[2];
            shadowMat[13] = -lightpos[1] * groundplane[3];
            
            shadowMat[2]  = -lightpos[2] * groundplane[0];
            shadowMat[6]  = -lightpos[2] * groundplane[1];
            shadowMat[10] = dot - lightpos[2] * groundplane[2];
            shadowMat[14] = -lightpos[2] * groundplane[3];
            
            shadowMat[3]  = -lightpos[3] * groundplane[0];
            shadowMat[7]  = -lightpos[3] * groundplane[1];
            shadowMat[11] = -lightpos[3] * groundplane[2];
            shadowMat[15] = dot - lightpos[3] * groundplane[3];
        }

            /* find the plane equation given 3 points */
        void findplane(float plane[], float v0[], float v1[], float v2[])
        {
            float vec0[] = new float[3], vec1[] = new float[3];

                /* need 2 vectors to find cross product */
            vec0[X] = v1[X] - v0[X];
            vec0[Y] = v1[Y] - v0[Y];
            vec0[Z] = v1[Z] - v0[Z];
            
            vec1[X] = v2[X] - v0[X];
            vec1[Y] = v2[Y] - v0[Y];
            vec1[Z] = v2[Z] - v0[Z];

                /* find cross product to get A, B, and C of plane equation */
            plane[A] = vec0[Y] * vec1[Z] - vec0[Z] * vec1[Y];
            plane[B] = -(vec0[X] * vec1[Z] - vec0[Z] * vec1[X]);
            plane[C] = vec0[X] * vec1[Y] - vec0[Y] * vec1[X];
            plane[D] = -(plane[A]*v0[X] + plane[B]*v0[Y] + plane[C]*v0[Z]);
        }

        private void sphere()
        {
            gl.glPushMatrix();
            gl.glTranslatef(60.0f, -50.0f, -360.0f);
            gl.glCallList(SPHERE);
            gl.glPopMatrix();
        }

        private void cone()
        {
            gl.glPushMatrix();
            gl.glTranslatef(-40.0f, -40.0f, -400.0f);
            gl.glCallList(CONE);
            gl.glPopMatrix();
        }

            /* render while jittering the shadows */
        private void render(float dx, float dy, float dz)
        {
            float v[] = new float[3];
                /* material properties for objects in scene */
            float wall_mat[] = {1.0f, 1.0f, 1.0f, 1.0f};
            float sphere_mat[] = {1.0f, 0.5f, 0.0f, 1.0f};
            float cone_mat[] = {0.0f, 0.5f, 1.0f, 1.0f};

            gl.glClear
                (GL_DEPTH_BUFFER_BIT |
                 GL_COLOR_BUFFER_BIT |
                 GL_STENCIL_BUFFER_BIT);

                /* Note: wall vertices are ordered so they are all
                   front facing this lets me do back face culling to
                   speed things up.  */

            gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, wall_mat);

                /* floor */
                /* make the floor textured */
            gl.glEnable(GL_TEXTURE_2D);

                /* Since we want to turn texturing on for floor only, we have
                   to make floor a separate glBegin()/glEnd() sequence. You
                   can't turn texturing on and off between begin and end calls */
            gl.glBegin(GL_QUADS);
            gl.glNormal3f(0.0f, 1.0f, 0.0f);
            gl.glTexCoord2i(0, 0);
            gl.glVertex3f(-100.0f, -100.0f, -320.0f);
            gl.glTexCoord2i(1, 0);
            gl.glVertex3f(100.0f, -100.0f, -320.0f);
            gl.glTexCoord2i(1, 1);
            gl.glVertex3f(100.0f, -100.0f, -520.0f);
            gl.glTexCoord2i(0, 1);
            gl.glVertex3f(-100.0f, -100.0f, -520.0f);
            gl.glEnd();
            
            gl.glDisable(GL_TEXTURE_2D);



            if (rendermode == SHADOW)
            {
                gl.glDisable(GL_DEPTH_TEST);
                gl.glDisable(GL_LIGHTING);
                gl.glColor3f(0.f, 0.f, 0.f);  /* shadow color */
                
                gl.glPushMatrix();
                gl.glMultMatrixf(floorshadow);
                gl.glTranslatef(dx, dy, dz);
                cone();
                gl.glPopMatrix();
                
                gl.glPushMatrix();
                gl.glMultMatrixf(floorshadow);
                gl.glTranslatef(dx, dy, dz);
                sphere();
                gl.glPopMatrix();
                gl.glEnable(GL_DEPTH_TEST);
                gl.glEnable(GL_LIGHTING);
            }


                /* walls */

            if (rendermode == SHADOW)
            {
                gl.glEnable(GL_STENCIL_TEST);
                gl.glStencilFunc(GL_ALWAYS, 1, 0);
                gl.glStencilOp(GL_KEEP, GL_KEEP, GL_REPLACE);
            }
                /* left wall */
            gl.glBegin(GL_QUADS);
            gl.glNormal3f(1.0f, 0.0f, 0.0f);
            gl.glVertex3f(-100.0f, -100.0f, -320.0f);
            gl.glVertex3f(-100.0f, -100.0f, -520.0f);
            gl.glVertex3f(-100.0f, 100.0f, -520.0f);
            gl.glVertex3f(-100.0f, 100.0f, -320.0f);
            gl.glEnd();

            if (rendermode == SHADOW)
            {
                gl.glStencilFunc(GL_EQUAL, 1, 1);
                gl.glDisable(GL_DEPTH_TEST);
                gl.glDisable(GL_LIGHTING);
                gl.glColor3f(0.0f, 0.0f, 0.0f);  /* shadow color */
                gl.glDisable(GL_DEPTH_TEST);
                gl.glPushMatrix();
                gl.glMultMatrixf(leftwallshadow);
                gl.glTranslatef(dx, dy, dz);
                cone();
                gl.glPopMatrix();
                gl.glEnable(GL_DEPTH_TEST);
                gl.glDisable(GL_STENCIL_TEST);
                gl.glEnable(GL_DEPTH_TEST);
                gl.glEnable(GL_LIGHTING);
            }

            gl.glBegin(GL_QUADS);

            /* right wall */
            gl.glNormal3f(-1.0f, 0.0f, 0.0f);
            gl.glVertex3f(100.0f, -100.0f, -320.0f);
            gl.glVertex3f(100.0f, 100.0f, -320.0f);
            gl.glVertex3f(100.0f, 100.0f, -520.0f);
            gl.glVertex3f(100.0f, -100.0f, -520.0f);
            
            /* ceiling */
            gl.glNormal3f(0.0f, -1.0f, 0.0f);
            gl.glVertex3f(-100.0f, 100.0f, -320.0f);
            gl.glVertex3f(-100.0f, 100.0f, -520.0f);
            gl.glVertex3f(100.0f, 100.0f, -520.0f);
            gl.glVertex3f(100.0f, 100.0f, -320.0f);
            
            /* back wall */
            gl.glNormal3f(0.0f, 0.0f, 1.0f);
            gl.glVertex3f(-100.0f, -100.0f, -520.0f);
            gl.glVertex3f(100.0f, -100.0f, -520.0f);
            gl.glVertex3f(100.0f, 100.0f, -520.0f);
            gl.glVertex3f(-100.0f, 100.0f, -520.0f);

            gl.glEnd();
            
            gl.glPushMatrix();
            gl.glTranslatef(lightpos[X], lightpos[Y], lightpos[Z]);
            gl.glDisable(GL_LIGHTING);
            gl.glColor3f(1.0f, 1.0f, 0.7f);
            gl.glCallList(LIGHT);
            gl.glEnable(GL_LIGHTING);
            gl.glPopMatrix();
            
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, cone_mat);
            cone();
            
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, sphere_mat);
            sphere();
        }

















            /* simple way to extend a point to build shadow volume */
        private void extend(float newvertex[], float light[], float vertex[], float t)
        {
            float delta[] = new float[3];

            delta[X] = vertex[X] - light[X];
            delta[Y] = vertex[Y] - light[Y];
            delta[Z] = vertex[Z] - light[Z];

            newvertex[X] = light[X] + delta[X] * t;
            newvertex[Y] = light[Y] + delta[Y] * t;
            newvertex[Z] = light[Z] + delta[Z] * t;
        }

    }
}
