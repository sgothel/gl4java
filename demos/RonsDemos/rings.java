/**
 * @(#) rings.java
 * @(#) author: Philip Winston (converted to Java by Ron Cemer)
 */

/*
 * Homework 4, Part 1: perspective, hierarchical coords, moving eye pos.
 *
 * Do a slow zoom on a bunch of rings (ala Superman III?)
 *
 * Philip Winston - 2/21/95
 * pwinston@hmc.edu
 * http://www.cs.hmc.edu/people/pwinston
 *
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

public class rings extends SimpleGLAnimApplet1 
{
        /* Initialize the applet */


	public void init()
	{
	super.init();
        Dimension d = getSize();
        canvas = new ringsCanvas(d.width, d.height);
        add("Center", canvas);
	}


        /* Local GLAnimCanvas extension class */


    private class ringsCanvas extends GLAnimCanvas
        implements MouseListener, ActionListener
    {
        private final double M_PI = 3.14159265;
        private final String MENU_STARTOVER = "Start Over";
        private final String MENU_ZOOM_OUT = "Zoom Out";
        private final String MENU_START_RINGS = "Start rings";
        private final String MENU_STOP_RINGS = "Stop rings";
        private final String MENU_START_FADE = "Start fade";
        private final String MENU_STOP_FADE = "Stop fade";
        private final int CONE = 1, TORUS = 2, INNERMAT = 3, OUTTERMAT = 4;
        private final double STEPS = 30.0;

        private PopupMenu menu = null;
        private boolean menu_showing = false;
        private boolean save_suspended = false;
        private boolean Fade = true;   /* Start moving out */
        private float Axis = 0.0f;
        private float AxisInc = (float)(2.0 * M_PI / STEPS);
        private float InnerRad, OutterRad, Tilt, Trans, TransCone, Dist;

        public ringsCanvas(int w, int h)
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

            float sinoftilt;
            InnerRad = 0.70f;
            OutterRad = 5.0f;
            Tilt = 15.0f;
            Dist = 10.0f;
            sinoftilt = (float)Math.sin(Tilt * M_PI*2.0/360.0);
            Trans = (float)
                ((2.0f*OutterRad + InnerRad) * sinoftilt +
                 InnerRad +
                 ((1 - sinoftilt) * InnerRad) - (InnerRad * 0.1));
            TransCone = Trans + (OutterRad * sinoftilt + InnerRad);
              /* I used code from the book's accnot.c as a starting
                 point for lighting.  I have one positional light in
                 center, then one directional */
            float light0_position[] = { 1.0f, 0.2f, 1.0f, 0.0f };
            float light1_position[] = { 0.0f, 0.0f, 0.0f, 1.0f };
            float light1_diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            float light1_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            float lm_ambient[] = { 0.2f, 0.2f, 0.2f, 1.0f };

            gl.glEnable(GL_NORMALIZE);
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();

            gl.glLightfv(GL_LIGHT0, GL_POSITION, light0_position);
            gl.glLightfv(GL_LIGHT1, GL_POSITION, light1_position);
            gl.glLightfv(GL_LIGHT1, GL_DIFFUSE,  light1_diffuse);
            gl.glLightfv(GL_LIGHT1, GL_SPECULAR, light1_specular);
            gl.glLightf(GL_LIGHT1, GL_LINEAR_ATTENUATION, 0.2f);
            gl.glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lm_ambient);

            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glEnable(GL_LIGHT1);

            gl.glDepthFunc(GL_LESS);
            gl.glEnable(GL_DEPTH_TEST);

                // Make display lists

            float cone_diffuse[] = { 0.0f, 0.7f, 0.7f, 1.0f };
            float mat1_ambient[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            float mat2_ambient[] = { 0.0f, 0.0f, 0.0f, 0.0f };
            float torus1_diffuse[] = { 0.7f, 0.7f, 0.0f, 1.0f };
            float torus2_diffuse[] = { 0.3f, 0.0f, 0.0f, 1.0f };
            float mat1_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            float mat2_specular[] = { 0.5f, 0.5f, 0.5f, 1.0f };
            
            gl.glNewList(INNERMAT, GL_COMPILE);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat1_specular);
            gl.glMaterialf(GL_FRONT, GL_SHININESS, 50.0f);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, torus1_diffuse);   
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, mat1_ambient);
            gl.glEndList();
        
            gl.glNewList(OUTTERMAT, GL_COMPILE);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat2_specular);
            gl.glMaterialf(GL_FRONT, GL_SHININESS, 25.0f);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, torus2_diffuse);   
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, mat2_ambient);
            gl.glEndList();
        
            gl.glNewList(CONE, GL_COMPILE);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, cone_diffuse);   
            gl.glPushMatrix();
            gl.glTranslatef(0, -TransCone, 0);
            gl.glRotatef(90, 1, 0, 0);
            glutSolidCone(OutterRad, 10, 8, 8);
            gl.glPopMatrix();
            gl.glEndList();
        
            gl.glNewList(TORUS, GL_COMPILE);
            gl.glPushMatrix();
            gl.glRotatef(90, 1, 0, 0);
            glutSolidTorus(InnerRad, OutterRad, 15, 25);
            gl.glPopMatrix();
            gl.glEndList();

            glj.gljCheckGL();

            menu = new PopupMenu("Options");
            menu.add(MENU_STARTOVER);
            menu.add(MENU_ZOOM_OUT);
            menu.add(MENU_START_RINGS);
            menu.add(MENU_STOP_RINGS);
            menu.add(MENU_START_FADE);
            menu.add(MENU_STOP_FADE);
            menu.addActionListener(this);
            add(menu);

            addMouseListener(this);
        }
    
        public void doCleanup()
        {
            System.out.println("destroy(): " + this);
            removeMouseListener(this);
            menu.removeActionListener(this);
        }
    
        public void reshape(int width, int height)
        {
            gl.glViewport(0,0,width,height);
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            Axis += AxisInc;

            if ( (Dist < 15.0f) && (Fade) )         /* start slow */
                Dist += 0.1f;
            else if ( (Dist < 800.0f) && (Fade) )   /* don't go back too far */
                Dist *= 1.005f;

            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            gl.glFrustum(-1.0f,1.0f,-1.0f,1.0f,10.0f,1000.0f); 
            glu.gluLookAt(0.0f,0.0f,Dist,0.0f,0.0f,0.0f,0.0f,1.0f,0.0f);

            gl.glMatrixMode(GL_MODELVIEW);

            gl.glCallList(INNERMAT);
            DrawRings(Axis);
            gl.glCallList(CONE);

            gl.glCallList(OUTTERMAT);
            gl.glPushMatrix();
            gl.glScalef(10, 10, 10);
            DrawRings(Axis/3.0f);
            gl.glPopMatrix();

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
    
            //if (!isSuspended()) repaint();  // Animate at full speed.
        }

        // Methods required for the implementation of MouseListener
        public void mouseEntered(MouseEvent evt)
        {
        }
    
        public void mouseExited(MouseEvent evt)
        {
        }
    
        public void mousePressed(MouseEvent evt)
        {
                // If user presses right mouse button within canvas area,
                // suspend animation and pop up menu.
                // If menu was already popped up and user presses either
                // mouse button within canvas area, resume animation
                // because the menu will have been removed automatically.
            if (!menu_showing)
            {
                if ((evt.getModifiers() & evt.BUTTON3_MASK) != 0)
                {
                    menu_showing = true;
                    save_suspended = isSuspended();
                    if (!save_suspended)
                    {
                        setSuspended(true);
                        repaint(100);
                        try
                        {
                            Thread.currentThread().sleep(200);
                        }
                        catch (Exception e)
                        { }
                    }
                    menu.show(this,evt.getX(),evt.getY());
                }
            }
            else
            {
                menu_showing = false;
                setSuspended(save_suspended);
            }
        }
    
        public void mouseReleased(MouseEvent evt)
        {
        }
    
        public void mouseClicked(MouseEvent evt)
        {
        }

        // Method required for the implementation of ActionListener
        public void actionPerformed(ActionEvent evt)
        {
            String c = evt.getActionCommand();
            if (c.equals(MENU_STARTOVER))
            {
                Dist = 10.0f;
                Axis = 0.0f;
                Fade = true;
                AxisInc = (float)(2.0 * M_PI / STEPS);
            }
            else if (c.equals(MENU_ZOOM_OUT))
            {
                Dist = 800.0f;
            }
            else if (c.equals(MENU_START_RINGS))
            {
                AxisInc = (float)(2.0 * M_PI / STEPS);
            }
            else if (c.equals(MENU_STOP_RINGS))
            {
                AxisInc = 0.0f;
            }
            else if (c.equals(MENU_START_FADE))
            {
                Fade = true;
            }
            else if (c.equals(MENU_STOP_FADE))
            {
                Fade = false;
            }
            if (menu_showing)
            {
                menu_showing = false;
                setSuspended(save_suspended);
            }
        }

            /* Draw three rings, rotated and translate so they look cool */
        private void DrawRings(float axis)
        {
            float x = (float)Math.sin(axis), y = (float)Math.cos(axis);
            gl.glPushMatrix();
            gl.glTranslatef(0.0f, Trans, 0.0f);
            gl.glRotatef(Tilt, x, 0.0f, y);
            gl.glCallList(TORUS);  
            gl.glPopMatrix();
            gl.glPushMatrix();
            gl.glRotatef(-Tilt, x, 0.0f, y);
            gl.glCallList(TORUS);
            gl.glPopMatrix();
            gl.glPushMatrix();
            gl.glTranslatef(0.0f, -Trans, 0.0f);
            gl.glRotatef(Tilt, x, 0.0f, y);
            gl.glCallList(TORUS);
            gl.glPopMatrix();
        }

        // Imported from glut.
        private void glutSolidTorus
            (float innerRadius,
             float outerRadius,
             int nsides,
             int rings)
        {
            doughnut(innerRadius, outerRadius, nsides, rings);
        }

        // Imported from glut.
        private void glutSolidCone
            (float base,
             float height,
             int slices,
             int stacks)
        {
            long qobj = glu.gluNewQuadric();

            glu.gluQuadricDrawStyle(qobj,GLU_FILL);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluCylinder(qobj,base,0.0f,height,slices,stacks);
            glu.gluDeleteQuadric(qobj);
        }

        // Imported from glut.
        private void doughnut(float r, float R, int nsides, int rings)
        {
            int i, j;
            float theta, phi, theta1;
            float cosTheta, sinTheta;
            float cosTheta1, sinTheta1;
            float ringDelta, sideDelta;

            ringDelta = 2.0f * (float)M_PI / rings;
            sideDelta = 2.0f * (float)M_PI / nsides;

            theta = 0.0f;
            cosTheta = 1.0f;
            sinTheta = 0.0f;
            for (i = rings - 1; i >= 0; i--)
            {
                theta1 = theta + ringDelta;
                cosTheta1 = (float)Math.cos(theta1);
                sinTheta1 = (float)Math.sin(theta1);
                gl.glBegin(GL_QUAD_STRIP);
                phi = 0.0f;
                for (j = nsides; j >= 0; j--)
                {
                    float cosPhi, sinPhi, dist;

                    phi += sideDelta;
                    cosPhi = (float)Math.cos(phi);
                    sinPhi = (float)Math.sin(phi);
                    dist = R + r * cosPhi;
                    
                    gl.glNormal3f(cosTheta1 * cosPhi, -sinTheta1 * cosPhi, sinPhi);
                    gl.glVertex3f(cosTheta1 * dist, -sinTheta1 * dist, r * sinPhi);
                    gl.glNormal3f(cosTheta * cosPhi, -sinTheta * cosPhi, sinPhi);
                    gl.glVertex3f(cosTheta * dist, -sinTheta * dist,  r * sinPhi);
                }
                gl.glEnd();
                theta = theta1;
                cosTheta = cosTheta1;
                sinTheta = sinTheta1;
            }
        }
    }
}
