/**
 * @(#) shadowvol.java
 * @(#) author: Tom McReynolds, SGI (converted to Java by Ron Cemer)
 */

/* Shadows: Shadow maps */
/* Demonstrate shadow volumes */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;
import gl4java.GLContext;
import gl4java.awt.GLCanvas;

public class shadowvol extends Applet 
{
    private static final int SPHERE = 1, CONE = 2, LIGHT = 3, SHADOWVOL = 4;
    private static final int X = 0, Y = 1, Z = 2;
    private static final int NONE = 0, NOLIGHT = 1, VOLUME = 2, SHADOW = 3;
    private static final int TEXDIM = 256;

    shadowvolCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new shadowvolCanvas(d.width, d.height);
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

    private class ShadObj
    {
        float[] vertices;
        float[] normal;
        int n;
    }


        /* Local GLCanvas extension class */


    private class shadowvolCanvas extends GLCanvas implements MouseListener
    {
        private float shadVerts[] =
        {
            30.0f, 30.0f, -350.0f,
            60.0f, 20.0f, -340.0f,
            40.0f, 40.0f, -400.0f
        };
        private float shadNormal[] =
        {
            1.0f, 10.f, 1.0f
        };
        private float leftwallshadow[] = new float[16];
        private float floorshadow[] = new float[16];
        private float lightpos[] = { 50.0f, 50.0f, -340.0f, 1.0f };
        private ShadObj shadower = new ShadObj();
        private int rendermode = SHADOW;

        public shadowvolCanvas(int w, int h)
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
        }
    
        public void init()
        {
            System.out.println("init(): " + this);
            reshape(getSize().width, getSize().height);

            byte tex[];
            int sphere, cone, base;
            float sphere_mat[] = {1.0f, 0.5f, 0.0f, 1.0f};
            float cone_mat[] = {0.0f, 0.5f, 1.0f, 1.0f};

                /* turn on features */
            gl.glEnable(GL_DEPTH_TEST);
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glEnable(GL_CULL_FACE);

                /* place light 0 in the right place */
            gl.glLightfv(GL_LIGHT0, GL_POSITION, lightpos);

                /* remove back faces to speed things up */
            gl.glCullFace(GL_BACK);

            gl.glTexParameteri
                (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

                /* make display lists for sphere and cone; for efficiency */

            gl.glNewList(SPHERE, GL_COMPILE);
            sphere = glu.gluNewQuadric();
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, sphere_mat);
            glu.gluSphere(sphere, 20.0f, 20, 20);
            glu.gluDeleteQuadric(sphere);
            gl.glEndList();
    
            gl.glNewList(CONE, GL_COMPILE);
            cone = glu.gluNewQuadric();
            base = glu.gluNewQuadric();
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, cone_mat);
            gl.glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
            glu.gluDisk(base, 0., 20., 20, 1);
            glu.gluCylinder(cone, 20., 0., 60., 20, 20);
            glu.gluDeleteQuadric(cone);
            glu.gluDeleteQuadric(base);
            gl.glEndList();
            
            gl.glNewList(LIGHT, GL_COMPILE);
            sphere = glu.gluNewQuadric();
            gl.glPushMatrix();
            gl.glTranslatef(lightpos[X], lightpos[Y], lightpos[Z]);
            gl.glDisable(GL_LIGHTING);
            gl.glColor3f(0.9f, 0.9f, 0.6f);
            glu.gluSphere(sphere, 5.0f, 20, 20);
            gl.glEnable(GL_LIGHTING);
            gl.glPopMatrix();
            glu.gluDeleteQuadric(sphere);
            gl.glEndList();
    
                /* load pattern for current 2d texture */
            tex = make_texture(TEXDIM, TEXDIM);
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

            shadower.vertices = shadVerts;
            shadower.normal = shadNormal;
            shadower.n = shadVerts.length/3;

            makeShadowVolume(shadower, lightpos, 10.f, SHADOWVOL);

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


            
            
            gl.glClear
                (GL_COLOR_BUFFER_BIT |
                 GL_DEPTH_BUFFER_BIT |
                 GL_STENCIL_BUFFER_BIT);
            switch (rendermode)
            {
            case NONE:
                render(shadower);
                break;
            case NOLIGHT:
                gl.glDisable(GL_LIGHT0);
                render(shadower);
                gl.glEnable(GL_LIGHT0);
                break;
            case VOLUME:
                render(shadower);
                gl.glCallList(SHADOWVOL);
                break;
            case SHADOW:
                gl.glColorMask(false, false, false, false);
                render(shadower);  /* render scene in depth buffer */
                gl.glEnable(GL_STENCIL_TEST);
                gl.glDepthMask(false);
                gl.glStencilFunc(GL_ALWAYS, 0, 0);
                gl.glStencilOp(GL_KEEP, GL_KEEP, GL_INCR);
                gl.glCullFace(GL_BACK);  /* increment using front face of shadow volume */
                gl.glCallList(SHADOWVOL);
                gl.glStencilOp(GL_KEEP, GL_KEEP, GL_DECR);
                gl.glCullFace(GL_FRONT);  /* increment using front face of shadow volume */
                gl.glCallList(SHADOWVOL);
                gl.glDepthMask(true);
                gl.glColorMask(true, true, true, true);
                gl.glCullFace(GL_BACK);
                gl.glDepthFunc(GL_LEQUAL);
                gl.glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP);
                gl.glStencilFunc(GL_EQUAL, 1, 1);  /* draw shadowed part */
                gl.glDisable(GL_LIGHT0);
                render(shadower);
                gl.glStencilFunc(GL_EQUAL, 0, 1);  /* draw lit part */
                gl.glEnable(GL_LIGHT0);
                render(shadower);
                gl.glDepthFunc(GL_LESS);
                gl.glDisable(GL_STENCIL_TEST);
                break;
            }

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

            /* Create a shadow volume in a display list */
            /* XXX light should have 4 compoents */
        void makeShadowVolume(ShadObj shadower, float light[], float t, int dlist)
        {
            float v[] = new float[3], newv[] = new float[3];
            int j;

            gl.glNewList(dlist, GL_COMPILE);
            gl.glDisable(GL_LIGHTING);
            gl.glBegin(GL_QUADS);
                /* for debugging */
            gl.glColor3f(0.2f, 0.8f, 0.4f);
            for (int i = 0; i < shadower.n; i++)
            {
                j = ((i + 1) % shadower.n);
                v[0] = shadower.vertices[i * 3];
                v[1] = shadower.vertices[(i * 3) + 1];
                v[2] = shadower.vertices[(i * 3) + 2];
                gl.glVertex3fv(v);
                extend(newv, light, v, t);
                gl.glVertex3fv(newv);
                v[0] = shadower.vertices[j * 3];
                v[1] = shadower.vertices[(j * 3) + 1];
                v[2] = shadower.vertices[(j * 3) + 2];
                extend(newv, light, v, t);
                gl.glVertex3fv(newv);
                gl.glVertex3fv(v);
            }
            gl.glEnd();
            gl.glEnable(GL_LIGHTING);
            gl.glEndList();
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
        private void render(ShadObj obj)
        {
            float shad_mat[] = {10.f, 0.1f, 0.1f, 1.0f};
            float v[] = new float[3];
                /* material properties for objects in scene */
            float wall_mat[] = {1.0f, 1.0f, 1.0f, 1.0f};
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

                /* walls */

            gl.glBegin(GL_QUADS);
                /* left wall */
            gl.glNormal3f(1.0f, 0.0f, 0.0f);
            gl.glVertex3f(-100.0f, -100.0f, -320.0f);
            gl.glVertex3f(-100.0f, -100.0f, -520.0f);
            gl.glVertex3f(-100.0f, 100.0f, -520.0f);
            gl.glVertex3f(-100.0f, 100.0f, -320.0f);

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
            
            cone();
            
            sphere();
            
            gl.glCallList(LIGHT);

                /* draw shadowing object */
            gl.glMaterialfv
                (GL_FRONT_AND_BACK,
                 GL_AMBIENT_AND_DIFFUSE,
                 shad_mat);
            gl.glBegin(GL_POLYGON);
            gl.glNormal3fv(obj.normal);
            for (int i = 0; i < obj.n; i++)
            {
                int j = i * 3;
                v[0] = obj.vertices[j];
                v[1] = obj.vertices[j+1];
                v[2] = obj.vertices[j+2];
                gl.glVertex3fv(v);
            }
            gl.glEnd();
        }
    }
}
