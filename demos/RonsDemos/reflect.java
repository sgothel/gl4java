/**
 * @(#) reflect.java
 * @(#) author: Brian Paul (converted to Java by Ron Cemer)
 */

/*
 * Demo of a reflective, texture-mapped surface with OpenGL.
 * Brian Paul   August 14, 1995   This file is in the public domain.
 *
 * Hardware texture mapping is highly recommended!
 *
 * The basic steps are:
 *    1. Render the reflective object (a polygon) from the normal viewpoint,
 *       setting the stencil planes = 1.
 *    2. Render the scene from a special viewpoint:  the viewpoint which
 *       is on the opposite side of the reflective plane.  Only draw where
 *       stencil = 1.  This draws the objects in the reflective surface.
 *    3. Render the scene from the original viewpoint.  This draws the
 *       objects in the normal fashion.  Use blending when drawing
 *       the reflective, textured surface.
 *
 * This is a very crude demo.  It could be much better.
 */
 
/*
 * Dirk Reiners (reiners@igd.fhg.de) made some modifications to this code.
 *
 * August 1996 - A few optimizations by Brian
 */

/*
 * April, 1997 - Added Mark Kilgard's changes.
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

public class reflect extends SimpleGLAnimApplet1 
{
        /* Initialize the applet */


	public void init()
	{
	super.init();
        Dimension d = getSize();
        canvas = new reflectCanvas(d.width, d.height);
        add("Center", canvas);
	}


        /* Local GLAnimCanvas extension class */


    private class reflectCanvas extends GLAnimCanvas implements MouseListener, MouseMotionListener
    {
        private static final float M_PI = 3.14159265359f;
        private static final float DEG2RAD = (M_PI/180.0f);
        private static final int MAX_OBJECTS = 2;

        private final float light_pos[] = { 0.0f, 20.0f, 0.0f, 1.0f };

        private int textureid = 0;

        private int table_list;
        private int objects_list[];

        private float spin, xrot, yrot;

        private MatrixFuncs mtxfuncs = null;
        private int prevMouseX, prevMouseY;
        private boolean mouseRButtonDown = false;

        public reflectCanvas(int w, int h)
        {
            super(w, h);
            GLContext.gljNativeDebug = false;
            GLContext.gljClassDebug = false;
            setAnimateFps(60.0f);

            mtxfuncs = new MatrixFuncs();
            objects_list = new int[MAX_OBJECTS];
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
            
            make_table();
            make_objects();

            int texIdBuf[] = new int[1];
            gl.glGenTextures(1, texIdBuf);
            textureid = texIdBuf[0];

            gl.glBindTexture(GL_TEXTURE_2D,textureid);

            HardCodedTexture texture = new DemoTex1();
            gl.glTexImage2D
                (GL_TEXTURE_2D,
                 0,
                 texture.getComponents(),
                 texture.getWidth(),
                 texture.getHeight(),
                 0,
                 texture.getFormat(),
                 texture.getType(),
                 texture.getBits());

            gl.glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
            gl.glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
            gl.glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            gl.glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

            gl.glBindTexture(GL_TEXTURE_2D,0);

            spin = 0.0f;
            xrot = 30.0f;
            yrot = 50.0f;

            gl.glShadeModel(GL_FLAT);
   
            gl.glEnable(GL_LIGHT0);
            gl.glEnable(GL_LIGHTING);
            
            gl.glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
            
            gl.glEnable(GL_NORMALIZE);
            
            glj.gljCheckGL();

            addMouseListener(this);
            addMouseMotionListener(this);
        }
    
        public void doCleanup()
        {
            System.out.println("destroy(): " + this);
            removeMouseListener(this);
            removeMouseMotionListener(this);
        }
    
        public void reshape(int width, int height)
        {
            float aspect = (float)width / (float)height;

            gl.glViewport(0,0,width,height);
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            gl.glFrustum(-aspect, aspect, -1.0f, 1.0f, 4.0f, 300.0f);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            spin += 0.8f;
            yrot += 1.2f;
            if (yrot >= 360.0f) yrot -= 360.0f;

            float dist = 20.0f;
            float eyex, eyey, eyez;

            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

            eyex = dist * (float)Math.cos(yrot*DEG2RAD) * (float)Math.cos(xrot*DEG2RAD);
            eyez = dist * (float)Math.sin(yrot*DEG2RAD) * (float)Math.cos(xrot*DEG2RAD);
            eyey = dist * (float)Math.sin(xrot*DEG2RAD);

            /* view from top */
            gl.glPushMatrix();

            glu.gluLookAt(eyex,eyey,eyez,0.0f,0.0f,0.0f,0.0f,1.0f,0.0f);
            
            gl.glLightfv(GL_LIGHT0, GL_POSITION, light_pos);
             
            /* draw table into stencil planes (non-textured for speed) */
            gl.glEnable(GL_STENCIL_TEST);
            gl.glDisable(GL_DEPTH_TEST);
            gl.glStencilFunc(GL_ALWAYS, 1, 0xffffffff);
            gl.glStencilOp(GL_REPLACE, GL_REPLACE, GL_REPLACE);
            gl.glColorMask(false, false, false, false);
            draw_table();
            gl.glColorMask(true, true, true, true);
            
            gl.glEnable(GL_DEPTH_TEST);

            /* render view from below (reflected viewport) */
            /* only draw where stencil==1 */
            if (eyey > 0.0f)
            {
                gl.glPushMatrix();
                
                gl.glStencilFunc(GL_EQUAL, 1, 0xffffffff);  /* draw if ==1 */
                gl.glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP);
                gl.glScalef(1.0f, -1.0f, 1.0f);
                
                /* Reposition light in reflected space. */
                gl.glLightfv(GL_LIGHT0, GL_POSITION, light_pos);
                
                draw_objects(eyex, eyey, eyez);
                gl.glPopMatrix();
                
                /* Restore light's original unreflected position. */
                gl.glLightfv(GL_LIGHT0, GL_POSITION, light_pos);
            }

            /* draw table into color planes (textured this time) */
            gl.glDisable(GL_STENCIL_TEST);
            
            gl.glEnable(GL_BLEND);
            gl.glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

            gl.glBindTexture(GL_TEXTURE_2D,textureid);
            gl.glEnable(GL_TEXTURE_2D);
            draw_table();
            gl.glDisable(GL_TEXTURE_2D);
            gl.glBindTexture(GL_TEXTURE_2D,0);
            gl.glDisable(GL_BLEND);

            /* view from top */
            gl.glPushMatrix();
            
            draw_objects(eyex, eyey, eyez);

            gl.glPopMatrix();
            
            gl.glPopMatrix();

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
    
            //if (!isSuspended()) repaint();  // Animate at full speed.
        }

        private void make_table()
        {
            float table_mat[] = { 1.0f, 1.0f, 1.0f, 0.6f };
            float gray[] = { 0.4f, 0.4f, 0.4f, 1.0f };
            
            table_list = gl.glGenLists(1);
            gl.glNewList(table_list,GL_COMPILE);
            
            /* load table's texture */
            gl.glMaterialfv(GL_FRONT,GL_AMBIENT_AND_DIFFUSE,table_mat);
            gl.glMaterialfv(GL_FRONT,GL_DIFFUSE,table_mat);
            gl.glMaterialfv(GL_FRONT,GL_AMBIENT,gray);
            
            /* draw textured square for the table */
            gl.glPushMatrix();
            gl.glScalef(4.0f, 4.0f, 4.0f);
            gl.glBegin(GL_POLYGON);
            gl.glNormal3f(0.0f, 1.0f, 0.0f);
            gl.glTexCoord2f(0.0f, 0.0f);   gl.glVertex3f(-1.0f, 0.0f,  1.0f);
            gl.glTexCoord2f(1.0f, 0.0f);   gl.glVertex3f( 1.0f, 0.0f,  1.0f);
            gl.glTexCoord2f(1.0f, 1.0f);   gl.glVertex3f( 1.0f, 0.0f, -1.0f);
            gl.glTexCoord2f(0.0f, 1.0f);   gl.glVertex3f(-1.0f, 0.0f, -1.0f);
            gl.glEnd();
            gl.glPopMatrix();
            
            gl.glEndList();
        }

        private void make_objects()
        {
           int q;
        
           float cyan[]  = { 0.0f, 1.0f, 1.0f, 1.0f };
           float green[] = { 0.2f, 1.0f, 0.2f, 1.0f };
           float black[] = { 0.0f, 0.0f, 0.0f, 0.0f };
        
           q = glu.gluNewQuadric();
           glu.gluQuadricDrawStyle(q, GLU_FILL);
           glu.gluQuadricNormals(q, GLU_SMOOTH);
        
           objects_list[0] = gl.glGenLists(1);
           gl.glNewList(objects_list[0], GL_COMPILE);
           gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, cyan );
           gl.glMaterialfv(GL_FRONT, GL_EMISSION, black );
           glu.gluCylinder(q, 0.5f, 0.5f,  1.0f, 15, 10);
           gl.glEndList();
        
           objects_list[1] = gl.glGenLists(1);
           gl.glNewList(objects_list[1], GL_COMPILE);
           gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, green);
           gl.glMaterialfv(GL_FRONT, GL_EMISSION, black);
           glu.gluCylinder(q, 1.5, 0.0f, 2.5f, 15, 10);
           gl.glEndList();
        }


        private void draw_objects(float eyex, float eyey, float eyez)
        {
            gl.glPushMatrix();
            gl.glTranslatef(1.0f, 1.5f, 0.0f);
            gl.glRotatef(spin, 1.0f, 0.5f, 0.0f);
            gl.glRotatef(0.5f*spin, 0.0f, 0.5f, 1.0f);
            gl.glCallList(objects_list[0]);
            gl.glPopMatrix();
            
            gl.glPushMatrix();
            gl.glTranslatef(-1.0f, 0.85f+3.0f*(float)Math.abs((float)Math.cos(0.01f*spin)),0.0f);
            gl.glRotatef(0.5f*spin, 0.0f, 0.5f, 1.0f);
            gl.glRotatef(spin, 1.0f, 0.5f, 0.0f);
            gl.glScalef(0.5f, 0.5f, 0.5f);
            gl.glCallList(objects_list[1]);
            gl.glPopMatrix();
        }

        private void draw_table()
        {
            gl.glCallList(table_list);
        }

        float[] MatrixTransform(float m[], float vx, float vy, float vz, float vw)
        {
            float v[] = new float[4];
            float nx, ny, nz, nw, ninvw;
    
            nx = ((vx*m[0])+(vy*m[4])+(vz*m[ 8])+(vw*m[12]));
            ny = ((vx*m[1])+(vy*m[5])+(vz*m[ 9])+(vw*m[13]));
            nz = ((vx*m[2])+(vy*m[6])+(vz*m[10])+(vw*m[14]));
            nw = ((vx*m[3])+(vy*m[7])+(vz*m[11])+(vw*m[15]));
            if ( (nw != 0.0f) && (nw != 1.0f) )
            {
                ninvw = 1.0f/nw;
                nx *= ninvw;
                ny *= ninvw;
                nz *= ninvw;
            }
            v[0] = nx;
            v[1] = ny;
            v[2] = nz;
            v[3] = 1.0f;
            return(v);
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
            prevMouseX = evt.getX();
            prevMouseY = evt.getY();
            if ((evt.getModifiers() & evt.BUTTON3_MASK) != 0)
            {
                mouseRButtonDown = true;
                evt.consume();
            }
        }
    
        public void mouseReleased( MouseEvent evt )
        {
            if ((evt.getModifiers() & evt.BUTTON3_MASK) != 0)
            {
                mouseRButtonDown = false;
                evt.consume();
            }
        }
    
        public void mouseClicked( MouseEvent evt )
        {
        }
    
        // Methods required for the implementation of MouseMotionListener
        public void mouseDragged( MouseEvent evt )
        {
            int x = evt.getX();
            int y = evt.getY();
            float thetaX = (float)(x-prevMouseX)*(360.0f/(float)getSize().width);
            float thetaY = (float)(prevMouseY-y)*(360.0f/(float)getSize().height);
            float mtxbuf[] = new float[16];
            float mtxbuf2[] = new float[16];
    
            prevMouseX = x;
            prevMouseY = y;
            if ( (thetaX != 0.0f) || (thetaY != 0.0f) )
            {
// This is a special hack for this applet only, due to
// the fact that we are not using a rotation matrix!!!
                yrot += thetaX;
                while (yrot < 0.0f) yrot += 360.0f;
                while (yrot >= 360.0f) yrot -= 360.0f;

                xrot -= thetaY;
                if (xrot > 90.0f)
                    xrot = 90.0f;
                else if (xrot < -90.0f)
                    xrot = -90.0f;
            }
            evt.consume();
        }
    
        public void mouseMoved( MouseEvent evt )
        {
        }
    }
}
