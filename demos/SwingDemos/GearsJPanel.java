/**
 * @(#) GearsJPanel.java
 * @(#) author: Brian Paul (converted to Java by Ron Cemer & Sven Goethel)
 */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;
import gl4java.GLContext;
import gl4java.swing.*;

public class GearsJPanel extends GLAnimJPanel 
    implements MouseListener, MouseMotionListener
{
        private static final float M_PI = 3.14159265359f;
        private int gear1, gear2, gear3;
        private float angle = 0.0f;

        private MatrixFuncs mtxfuncs = null;
        private int prevMouseX, prevMouseY;
        private boolean mouseRButtonDown = false;
        private float rot_matrix[] =
        {
            1.0f, 0.0f, 0.0f, 0.0f,
            0.0f, 1.0f, 0.0f, 0.0f,
            0.0f, 0.0f, 1.0f, 0.0f,
            0.0f, 0.0f, 0.0f, 1.0f
        };
    
        public GearsJPanel()
        {
            super();
            setAnimateFps(30.0);

            mtxfuncs = new MatrixFuncs();
	    setUseRepaint(true);
        }
    
        public void init()
        {
            System.out.println("init(): " + this);
            reshape(getSize().width, getSize().height);

            setInitialRotation();

            float pos[] = { 5.0f, 5.0f, 10.0f, 0.0f };
            float red[] = { 0.8f, 0.1f, 0.0f, 1.0f };
            float green[] = { 0.0f, 0.8f, 0.2f, 1.0f };
            float blue[] = { 0.2f, 0.2f, 1.0f, 1.0f };

            gl.glLightfv(GL_LIGHT0, GL_POSITION, pos);
            gl.glEnable(GL_CULL_FACE);
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glEnable(GL_DEPTH_TEST);
            
                /* make the gears */
            gear1 = gl.glGenLists(1);
            gl.glNewList(gear1, GL_COMPILE);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, red);
            gear(1.0f, 4.0f, 1.0f, 20, 0.7f);
            gl.glEndList();
            
            gear2 = gl.glGenLists(1);
            gl.glNewList(gear2, GL_COMPILE);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, green);
            gear(0.5f, 2.0f, 2.0f, 10, 0.7f);
            gl.glEndList();
            
            gear3 = gl.glGenLists(1);
            gl.glNewList(gear3, GL_COMPILE);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, blue);
            gear(1.3f, 2.0f, 0.5f, 10, 0.7f);
            gl.glEndList();
            
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
	    System.out.println("reshape: "+width+"x"+height);
            float h = (float)height / (float)width;
            
            gl.glViewport(0,0,width,height);
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            gl.glFrustum(-1.0f, 1.0f, -h, h, 5.0f, 60.0f);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
            gl.glTranslatef(0.0f, 0.0f, -40.0f);
        }

        public void display()
        {
            angle += 0.5f;

            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            
            gl.glPushMatrix();
            gl.glMultMatrixf(rot_matrix);
            
            gl.glPushMatrix();
            gl.glTranslatef(-3.0f, -2.0f, 0.0f);
            gl.glRotatef(angle, 0.0f, 0.0f, 1.0f);
            gl.glCallList(gear1);
            gl.glPopMatrix();
            
            gl.glPushMatrix();
            gl.glTranslatef(3.1f, -2.0f, 0.0f);
            gl.glRotatef(-2.0f * angle - 9.0f, 0.0f, 0.0f, 1.0f);
            gl.glCallList(gear2);
            gl.glPopMatrix();
            
            gl.glPushMatrix();
            gl.glTranslatef(-3.1f, 4.2f, 0.0f);
            gl.glRotatef(-2.0f * angle - 25.0f, 0.0f, 0.0f, 1.0f);
            gl.glCallList(gear3);
            gl.glPopMatrix();
            
            gl.glPopMatrix();

            glj.gljCheckGL();
        }

        private void gear
            (float inner_radius,
             float outer_radius,
             float width,
             int teeth,
             float tooth_depth)
        {
            int i;
            float r0, r1, r2;
            float angle, da;
            float u, v, len;

            r0 = inner_radius;
            r1 = outer_radius - tooth_depth / 2.0f;
            r2 = outer_radius + tooth_depth / 2.0f;
            
            da = 2.0f * M_PI / teeth / 4.0f;
            
            gl.glShadeModel(GL_FLAT);

            gl.glNormal3f(0.0f, 0.0f, 1.0f);

                /* draw front face */
            gl.glBegin(GL_QUAD_STRIP);
            for (i = 0; i <= teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), width * 0.5f);
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3.0f * da), r1 * (float)Math.sin(angle + 3.0f * da), width * 0.5f);
            }
            gl.glEnd();

                /* draw front sides of teeth */
            gl.glBegin(GL_QUADS);
            da = 2.0f * M_PI / teeth / 4.0f;
            for (i = 0; i < teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + da), r2 * (float)Math.sin(angle + da), width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + 2.0f * da), r2 * (float)Math.sin(angle + 2.0f * da), width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3.0f * da), r1 * (float)Math.sin(angle + 3.0f * da), width * 0.5f);
            }
            gl.glEnd();
    
            gl.glNormal3f(0.0f, 0.0f, -1.0f);
    
                /* draw back face */
            gl.glBegin(GL_QUAD_STRIP);
            for (i = 0; i <= teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), -width * 0.5f);
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), -width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3 * da), r1 * (float)Math.sin(angle + 3 * da), -width * 0.5f);
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), -width * 0.5f);
            }
            gl.glEnd();
    
                /* draw back sides of teeth */
            gl.glBegin(GL_QUADS);
            da = 2.0f * M_PI / teeth / 4.0f;
            for (i = 0; i < teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3 * da), r1 * (float)Math.sin(angle + 3 * da), -width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + 2 * da), r2 * (float)Math.sin(angle + 2 * da), -width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + da), r2 * (float)Math.sin(angle + da), -width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), -width * 0.5f);
            }
            gl.glEnd();
    
                /* draw outward faces of teeth */
            gl.glBegin(GL_QUAD_STRIP);
            for (i = 0; i < teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), -width * 0.5f);
                u = r2 * (float)Math.cos(angle + da) - r1 * (float)Math.cos(angle);
                v = r2 * (float)Math.sin(angle + da) - r1 * (float)Math.sin(angle);
                len = (float)Math.sqrt(u * u + v * v);
                u /= len;
                v /= len;
                gl.glNormal3f(v, -u, 0.0f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + da), r2 * (float)Math.sin(angle + da), width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + da), r2 * (float)Math.sin(angle + da), -width * 0.5f);
                gl.glNormal3f((float)Math.cos(angle), (float)Math.sin(angle), 0.0f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + 2 * da), r2 * (float)Math.sin(angle + 2 * da), width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + 2 * da), r2 * (float)Math.sin(angle + 2 * da), -width * 0.5f);
                u = r1 * (float)Math.cos(angle + 3 * da) - r2 * (float)Math.cos(angle + 2 * da);
                v = r1 * (float)Math.sin(angle + 3 * da) - r2 * (float)Math.sin(angle + 2 * da);
                gl.glNormal3f(v, -u, 0.0f);
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3 * da), r1 * (float)Math.sin(angle + 3 * da), width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3 * da), r1 * (float)Math.sin(angle + 3 * da), -width * 0.5f);
                gl.glNormal3f((float)Math.cos(angle), (float)Math.sin(angle), 0.0f);
            }
            gl.glVertex3f(r1 * (float)Math.cos(0), r1 * (float)Math.sin(0), width * 0.5f);
            gl.glVertex3f(r1 * (float)Math.cos(0), r1 * (float)Math.sin(0), -width * 0.5f);
            gl.glEnd();
    
            gl.glShadeModel(GL_SMOOTH);
    
                /* draw inside radius cylinder */
            gl.glBegin(GL_QUAD_STRIP);
            for (i = 0; i <= teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glNormal3f(-(float)Math.cos(angle), -(float)Math.sin(angle), 0.0f);
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), -width * 0.5f);
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), width * 0.5f);
            }
            gl.glEnd();
        }

            // Reset the rotation matrix to the default view.
        private void setInitialRotation()
        {
            float mtxbuf[] = new float[16];
            float mtxbuf2[] = new float[16];
    
            mtxfuncs.rotateAroundY(30.0f,mtxbuf);
            mtxfuncs.rotateAroundX(20.0f,mtxbuf2);
            mtxfuncs.multiplyMatrices(mtxbuf2,mtxbuf,rot_matrix);
            fixRotationMatrix();
        }

        private void fixRotationMatrix()
        {
                // Fix any problems with the rotation matrix.
            rot_matrix[3] =
                rot_matrix[7] =
                rot_matrix[11] =
                rot_matrix[12] =
                rot_matrix[13] =
                rot_matrix[14] = 0.0f;
            rot_matrix[15] = 1.0f;
            float fac;
            if ((fac = (float)Math.sqrt
                ((rot_matrix[0]*rot_matrix[0]) +
                 (rot_matrix[4]*rot_matrix[4]) +
                 (rot_matrix[8]*rot_matrix[8]))) != 1.0f)
            {
                if (fac != 0.0f)
                {
                    fac = 1.0f/fac;
                    rot_matrix[0] *= fac;
                    rot_matrix[4] *= fac;
                    rot_matrix[8] *= fac;
                }
            }
            if ((fac = (float)Math.sqrt
                ((rot_matrix[1]*rot_matrix[1]) +
                 (rot_matrix[5]*rot_matrix[5]) +
                 (rot_matrix[9]*rot_matrix[9]))) != 1.0f)
            {
                if (fac != 0.0f)
                {
                    fac = 1.0f/fac;
                    rot_matrix[1] *= fac;
                    rot_matrix[5] *= fac;
                    rot_matrix[9] *= fac;
                }
            }
            if ((fac = (float)Math.sqrt
                ((rot_matrix[2]*rot_matrix[2]) +
                 (rot_matrix[6]*rot_matrix[6]) +
                 (rot_matrix[10]*rot_matrix[10]))) != 1.0f)
            {
                if (fac != 0.0f)
                {
                    fac = 1.0f/fac;
                    rot_matrix[2] *= fac;
                    rot_matrix[6] *= fac;
                    rot_matrix[10] *= fac;
                }
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
                mtxfuncs.rotateAroundY(((float)thetaX),mtxbuf);
                if (mouseRButtonDown)
                    mtxfuncs.rotateAroundZ(thetaY,mtxbuf2);
                else
                    mtxfuncs.rotateAroundX(-thetaY,mtxbuf2);
                mtxfuncs.multiplyMatrices(mtxbuf2,mtxbuf,mtxbuf);
                mtxfuncs.multiplyMatrices(rot_matrix,mtxbuf,rot_matrix);
                fixRotationMatrix();
            }
            evt.consume();
        }
    
        public void mouseMoved( MouseEvent evt )
        {
        }
}
