/**
 * @(#) steam.java
 * @(#) author: Troy Robinette (converted to Java by Ron Cemer)
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

/**
  Description: Interactive 3D graphics, Assignment #1
               Miniature Steam Engine Simulation.
  Author:      Troy Robinette
  Date:        29/9/95
  Email:       troyr@yallara.cs.rmit.edu.au
  Notes:       - Transparence doesn't quite work. The color of the
                 underlying object doesn't show through. 
	       - Also only the front side of the transparent objects are
		 transparent.
**/

public class steam extends SimpleGLAnimApplet1
{
    private static final float boxnormals[][] =
    {
        {-1.0f, 0.0f, 0.0f},
        {0.0f, 1.0f, 0.0f},
        {1.0f, 0.0f, 0.0f},
        {0.0f, -1.0f, 0.0f},
        {0.0f, 0.0f, 1.0f},
        {0.0f, 0.0f, -1.0f}
    };
    private static final int boxfaces[][] =
    {
        {0, 1, 2, 3},
        {3, 2, 6, 7},
        {7, 6, 5, 4},
        {4, 5, 1, 0},
        {5, 6, 2, 1},
        {7, 4, 0, 3}
    };

        /* Initialize the applet */


	public void init()
	{
	super.init();
        Dimension d = getSize();
        canvas = new steamCanvas(d.width, d.height);
	canvas.requestFocus();
        add("Center", canvas);
	}


        /* Local GLAnimCanvas extension class */


    private class steamCanvas extends GLAnimCanvas
        implements MouseListener, ActionListener, KeyListener
    {
            /* Dimensions of texture image. */
        private final int IMAGE_WIDTH  = 64;
        private final int IMAGE_HEIGHT = 64;
            /* Step to be taken for each rotation. */
        private final int ANGLE_STEP = 10;
            /* Magic numbers for relationship b/w cylinder head and crankshaft. */
        private final float MAGNITUDE  = 120.0f;
        private final float PHASE      = 270.112f;
        private final float FREQ_DIV   = 58.0f;
        private final float ARC_LENGTH = 2.7f;
        private final float ARC_RADIUS = 0.15f;
            /* Rotation angles */
        private float view_h = 270.0f, view_v = 0.0f;
        private float head_angle = 0.0f;
        private int crank_angle = 0;
            /* Crank rotation step. */
        private float crank_step = 5.0f;
            /* Toggles */
        private boolean filled = true;
        private boolean textured = false, transparent = false;
            /* Storage for the angle look up table and the texture map */
        private float head_look_up_table[] = new float[360];
        private byte image[] = new byte[IMAGE_WIDTH*IMAGE_HEIGHT*3];
            /* Indentifiers for each Display list */
        private int list_piston_filled = 1;
        private int list_piston_texture = 2;
        private int list_flywheel_filled = 4;
        private int list_flywheel_texture = 8;
            /* Variable used in the creaton of glu objects */
        long obj;    // (GLU quadric object)

        private PopupMenu menu = null;
        private boolean menu_showing = false;
        private boolean save_suspended = false;

        private final String MENU_FILLED = "Filled";
        private final String MENU_WIREFRAME = "Wireframe";
        private final String MENU_TEXTURED = "Textured";
        private final String MENU_UNTEXTURED = "Untextured";
        private final String MENU_TRANSPARENT = "Transparent";
        private final String MENU_OPAQUE = "Opaque";
        private final String MENU_RIGHT_LIGHT_ON = "Right light on";
        private final String MENU_RIGHT_LIGHT_OFF = "Right light off";
        private final String MENU_LEFT_LIGHT_ON = "Left light on";
        private final String MENU_LEFT_LIGHT_OFF = "Left light off";
        private final String MENU_PAUSE = "Pause (use a and z to step)";
        private final String MENU_RESUME = "Resume animation";
        private final String MENU_SPEED_UP = "Speed up (+)";
        private final String MENU_SLOW_DOWN = "Slow down (-)";

        public steamCanvas(int w, int h)
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

            float mat_specular[] = {1.0f, 1.0f, 1.0f, 1.0f};
            float mat_shininess[] = {50.0f};
            float light_position0[] = {1.0f, 1.0f, 1.0f, 0.0f};
            float light_position1[] = {-1.0f, 1.0f, 1.0f, 0.0f};
            float light_diffuse1[] = {1.0f,1.0f,1.0f,1.0f};
            float light_specular1[] = {1.0f,1.0f,1.0f,1.0f};

            gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

            obj = glu.gluNewQuadric();
            make_table();
            make_image();

                /* Set up Texturing */
            gl.glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
            gl.glTexImage2D
                (GL_TEXTURE_2D,
                 0,
                 3,
                 IMAGE_WIDTH,
                 IMAGE_HEIGHT,
                 0,
                 GL_RGB,
                 GL_UNSIGNED_BYTE,
                 image);
            gl.glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
            gl.glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
            gl.glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
            gl.glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            gl.glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

                /* Set up Lighting */
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
            gl.glLightfv(GL_LIGHT0, GL_POSITION, light_position0);
            gl.glLightfv(GL_LIGHT1, GL_POSITION, light_position1);
            gl.glLightfv(GL_LIGHT1, GL_DIFFUSE, light_diffuse1);
            gl.glLightfv(GL_LIGHT1, GL_SPECULAR, light_specular1);

                /* Initial render mode is with full shading and LIGHT 0
                   enabled. */
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glDisable(GL_LIGHT1);
            gl.glDepthFunc(GL_LEQUAL);
            gl.glEnable(GL_DEPTH_TEST);
            gl.glDisable(GL_ALPHA_TEST);

            gl.glColorMaterial(GL_FRONT_AND_BACK, GL_DIFFUSE);
            gl.glEnable(GL_COLOR_MATERIAL);
            gl.glShadeModel(GL_SMOOTH);

                /* Initialise display lists */
            gl.glNewList(list_piston_filled, GL_COMPILE);
            draw_piston();
            gl.glEndList();
            gl.glNewList(list_flywheel_filled, GL_COMPILE);
            draw_flywheel();
            gl.glEndList();

            glu.gluQuadricTexture(obj, true);
            gl.glNewList(list_piston_texture, GL_COMPILE);
            draw_piston();
            gl.glEndList();
            gl.glNewList(list_flywheel_texture, GL_COMPILE);
            draw_flywheel();
            gl.glEndList();
            glu.gluQuadricTexture(obj, false);
                
            glj.gljCheckGL();

            menu = new PopupMenu("Options");
            menu.add(MENU_FILLED);
            menu.add(MENU_WIREFRAME);
            menu.add(MENU_TEXTURED);
            menu.add(MENU_UNTEXTURED);
            menu.add(MENU_TRANSPARENT);
            menu.add(MENU_OPAQUE);
            menu.add(MENU_RIGHT_LIGHT_ON);
            menu.add(MENU_RIGHT_LIGHT_OFF);
            menu.add(MENU_LEFT_LIGHT_ON);
            menu.add(MENU_LEFT_LIGHT_OFF);
            menu.add(MENU_PAUSE);
            menu.add(MENU_RESUME);
            menu.add(MENU_SPEED_UP);
            menu.add(MENU_SLOW_DOWN);
            menu.addActionListener(this);
            add(menu);

            addMouseListener(this);
            addKeyListener(this);
        }
    
        public void doCleanup()
        {
            System.out.println("destroy(): " + this);
            removeMouseListener(this);
            menu.removeActionListener(this);
            removeKeyListener(this);
        }
    
        public void reshape(int width, int height)
        {
            gl.glViewport(0,0,width,height);
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            glu.gluPerspective(65.0f, (float)width/(float)height, 1.0f, 20.0f);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
            gl.glTranslatef(0.0f, 0.0f, -5.0f);     /* viewing transform  */
            gl.glScalef(1.5f, 1.5f, 1.5f);
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            if (!isSuspended())
            {
                crank_angle += crank_step;
                while (crank_angle >= 360) crank_angle -= 360;
                while (crank_angle < 0) crank_angle += 360;
                head_angle = head_look_up_table[crank_angle];
            }

                /* Main display code. Clears the drawing buffer and if
                   transparency is set, displays the model twice, 1st time
                   accepting those fragments with an ALPHA value of 1 only,
                   then with DEPTH_BUFFER writing disabled for those with
                   other values. */

            int pass;
            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            gl.glPushMatrix();
            if (transparent)
            {
                gl.glEnable(GL_ALPHA_TEST);
                pass = 2;
            }
            else
            {
                gl.glDisable(GL_ALPHA_TEST);
                pass = 0;
            }

                /* Rotate the whole model */
            gl.glRotatef(view_h, 0.0f, 1.0f, 0.0f);
            gl.glRotatef(view_v, 1.0f, 0.0f, 0.0f);

            do
            {
                if (pass == 2)
                {
                    gl.glAlphaFunc(GL_EQUAL, 1);
                    gl.glDepthMask(true);
                    pass = 1;
                }
                else if (pass != 0)
                {
                    gl.glAlphaFunc(GL_NOTEQUAL, 1);
                    gl.glDepthMask(false);
                    pass = 0;
                }

                draw_engine_pole();

                gl.glPushMatrix();
                gl.glTranslatef(0.5f, 1.4f, 0.0f);
                draw_cylinder_head();
                gl.glPopMatrix();

                gl.glPushMatrix();
                gl.glTranslatef(0.0f, -0.8f, 0.0f);
                draw_crank();
                gl.glPopMatrix();
            } while (pass > 0);

            gl.glDepthMask(true);
            gl.glPopMatrix();

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
    
            //if (!isSuspended()) repaint();  // Animate at full speed.
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

        public void mouseClicked( MouseEvent evt )
        { 
            Component comp = evt.getComponent();
	    if( comp.equals(this ) )
	    {
		requestFocus();
	    }
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
    
        // Method required for the implementation of ActionListener
        public void actionPerformed(ActionEvent evt)
        {
            if (glj.gljMakeCurrent() == false) return;
            boolean dorepaint = false;
            String c = evt.getActionCommand();
            if (c.equals(MENU_FILLED))
            {
                filled = true;
                gl.glShadeModel(GL_SMOOTH);
                gl.glEnable(GL_LIGHTING);
                gl.glEnable(GL_DEPTH_TEST);
                gl.glEnable(GL_COLOR_MATERIAL);
                glu.gluQuadricNormals(obj, GLU_SMOOTH);
                glu.gluQuadricDrawStyle(obj, GLU_FILL);
                    // Conditionally re-enable texturing.
                if (textured)
                {
                    gl.glEnable(GL_TEXTURE_2D);
                    glu.gluQuadricTexture(obj, true);
                }
                dorepaint = true;
            }
            else if (c.equals(MENU_WIREFRAME))
            {
                filled = false;
                gl.glShadeModel(GL_FLAT);
                gl.glDisable(GL_LIGHTING);
                gl.glDisable(GL_DEPTH_TEST);
                gl.glDisable(GL_COLOR_MATERIAL);
                glu.gluQuadricNormals(obj, GLU_NONE);
                glu.gluQuadricDrawStyle(obj, GLU_LINE);
                glu.gluQuadricTexture(obj, false);
                    // Be sure texturing is disabled.
                gl.glDisable(GL_TEXTURE_2D);
                glu.gluQuadricTexture(obj, false);
                dorepaint = true;
            }
            else if (c.equals(MENU_TEXTURED))
            {
                textured = true;
                if (filled)
                {
                    gl.glEnable(GL_TEXTURE_2D);
                    glu.gluQuadricTexture(obj, true);
                    dorepaint = true;
                }
            }
            else if (c.equals(MENU_UNTEXTURED))
            {
                textured = false;
                gl.glDisable(GL_TEXTURE_2D);
                glu.gluQuadricTexture(obj, false);
                dorepaint = true;
            }
            else if (c.equals(MENU_TRANSPARENT))
            {
                transparent = true;
                dorepaint = true;
            }
            else if (c.equals(MENU_OPAQUE))
            {
                transparent = false;
                dorepaint = true;
            }
            else if (c.equals(MENU_RIGHT_LIGHT_ON))
            {
                gl.glEnable(GL_LIGHT0);
                dorepaint = true;
            }
            else if (c.equals(MENU_RIGHT_LIGHT_OFF))
            {
                gl.glDisable(GL_LIGHT0);
                dorepaint = true;
            }
            else if (c.equals(MENU_LEFT_LIGHT_ON))
            {
                gl.glEnable(GL_LIGHT1);
                dorepaint = true;
            }
            else if (c.equals(MENU_LEFT_LIGHT_OFF))
            {
                gl.glDisable(GL_LIGHT1);
                dorepaint = true;
            }
            else if (c.equals(MENU_PAUSE))
            {
                if (menu_showing)
                    save_suspended = true;
                else
                    setSuspended(true);
            }
            else if (c.equals(MENU_RESUME))
            {
                if (menu_showing)
                    save_suspended = false;
                else
                    setSuspended(false);
            }
            else if (c.equals(MENU_SPEED_UP))
            {
                crank_step++;
                if (crank_step > 45) crank_step = 45;
            }
            else if (c.equals(MENU_SLOW_DOWN))
            {
                crank_step--;
                if (crank_step < 1) crank_step = 1;
            }
            if (menu_showing)
            {
                menu_showing = false;
                setSuspended(save_suspended);
            }
            glj.gljFree();
            if (dorepaint) repaint();
        }

        // Methods required for the implementation of KeyListener
        public void keyPressed(KeyEvent e)
        {
            switch (e.getKeyCode())
            {
            case KeyEvent.VK_LEFT:
                view_h -= ANGLE_STEP;
                while (view_h < 0) view_h += 360;
                repaint();
                break;
            case KeyEvent.VK_RIGHT:
                view_h += ANGLE_STEP;
                while (view_h >= 360) view_h -= 360;
                repaint();
                break;
            case KeyEvent.VK_UP:
                view_v += ANGLE_STEP;
                while (view_v >= 360) view_v -= 360;
                repaint();
                break;
            case KeyEvent.VK_DOWN:
                view_v -= ANGLE_STEP;
                while (view_v < 0) view_v += 360;
                repaint();
                break;
            }
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
            case 'a':
            case 'A':
                if (!isSuspended()) break;
                crank_angle += crank_step;
                while (crank_angle >= 360) crank_angle -= 360;
                head_angle = head_look_up_table[crank_angle];
                dorepaint = true;
                break;
            case 'z':
            case 'Z':
                if (!isSuspended()) break;
                crank_angle -= crank_step;
                while (crank_angle < 0) crank_angle += 360;
                head_angle = head_look_up_table[crank_angle];
                dorepaint = true;
                break;
            case '+':
                crank_step++;
                if (crank_step > 45) crank_step = 45;
                break;
            case '-':
                crank_step--;
                if (crank_step < 1) crank_step = 1;
                break;
            }
            glj.gljFree();
            if (dorepaint) repaint();
        }

            /* Draws a box by scaling a glut cube of size 1.
               Also checks the filled toggle to see which rendering
               style to use. NB Texture doesn't work correctly due
               to the cube being scaled. */
        private void myBox(float x, float y, float z)
        {
            gl.glPushMatrix();
            gl.glScalef(x, y, z);
            if (filled)
                glutSolidCube(1);
            else
                glutWireCube(1);
            gl.glPopMatrix();
        }

            /* Draws a cylinder using glu function, drawing flat discs
               at each end, to give the appearence of it being solid. */
        private void myCylinder
            (long object, float outerRadius, float innerRadius, float length)
        {
            gl.glPushMatrix();
            glu.gluCylinder(object, outerRadius, outerRadius, length, 20, 1);
            gl.glPushMatrix();
            gl.glRotatef(180.0f, 0.0f, 1.0f, 0.0f);
            glu.gluDisk(object, innerRadius, outerRadius, 20, 1);
            gl.glPopMatrix();
            gl.glTranslatef(0.0f, 0.0f, length);
            glu.gluDisk(object, innerRadius, outerRadius, 20, 1);
            gl.glPopMatrix();
        }

            /* Draws a piston.  */
        private void draw_piston()
        {
            gl.glPushMatrix();
            gl.glColor4f(0.3f, 0.6f, 0.9f, 1.0f);
            gl.glPushMatrix();
            gl.glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
            gl.glTranslatef(0.0f, 0.0f, -0.07f);
            myCylinder(obj, 0.125f, 0.06f, 0.12f);
            gl.glPopMatrix();
            gl.glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
            gl.glTranslatef(0.0f, 0.0f, 0.05f);
            myCylinder(obj, 0.06f, 0.0f, 0.6f);
            gl.glTranslatef(0.0f, 0.0f, 0.6f);
            myCylinder(obj, 0.2f, 0.0f, 0.5f);
            gl.glPopMatrix();
        }

            /* Draws the engine pole and the
               pivot pole for the cylinder head. */
        private void draw_engine_pole()
        {
            gl.glPushMatrix();
            gl.glColor4f(0.9f, 0.9f, 0.9f, 1.0f);
            myBox(0.5f, 3.0f, 0.5f);
            gl.glColor3f(0.5f, 0.1f, 0.5f);
            gl.glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
            gl.glTranslatef(0.0f, 0.9f, -0.4f);
            myCylinder(obj, 0.1f, 0.0f, 2);
            gl.glPopMatrix();
        }

            /* Draws the cylinder head at the appropreate angle, doing
               the necessary translations for the rotation. */
        private void draw_cylinder_head()
        {
            gl.glPushMatrix();
            gl.glColor4f(0.5f, 1.0f, 0.5f, 0.1f);
            gl.glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
            gl.glTranslatef(0.0f, 0.0f, 0.4f);
            gl.glRotatef(head_angle, 1.0f, 0.0f, 0.0f);
            gl.glTranslatef(0.0f, 0.0f, -0.4f);
            myCylinder(obj, 0.23f, 0.21f, 1.6f);
            gl.glRotatef(180.0f, 1.0f, 0.0f, 0.0f);
            glu.gluDisk(obj, 0.0f, 0.23f, 20, 1);
            gl.glPopMatrix();
        }

            /* Draws the flywheel.  */
        private void draw_flywheel()
        {
            gl.glPushMatrix();
            gl.glColor4f(0.5f, 0.5f, 1.0f, 1.0f);
            gl.glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
            myCylinder(obj, 0.625f, 0.08f, 0.5f);
            gl.glPopMatrix();
        }

/* Draws the crank bell, and the pivot pin for the piston. Also calls the
   appropreate display list of a piston doing the nesacary rotations before
   hand.  */
        private void draw_crankbell()
        {
            gl.glPushMatrix();
            gl.glColor4f(1.0f, 0.5f, 0.5f, 1.0f);
            gl.glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
            myCylinder(obj, 0.3f, 0.08f, 0.12f);

            gl.glColor4f(0.5f, 0.1f, 0.5f, 1.0f);
            gl.glTranslatef(0.0f, 0.2f, 0.0f);
            myCylinder(obj, 0.06f, 0.0f, 0.34f);

            gl.glTranslatef(0.0f, 0.0f, 0.22f);
            gl.glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
            gl.glRotatef(((float)crank_angle)-head_angle, 1.0f, 0.0f, 0.0f);
            if (filled)
            {
                if (textured)
                    gl.glCallList(list_piston_texture);
                else
                    gl.glCallList(list_piston_filled);
            }
            else
                draw_piston();
            gl.glPopMatrix();
        }

            /* Draws the complete crank. Piston also gets drawn through
               the crank bell function. */
        private void draw_crank()
        {
            gl.glPushMatrix();
            gl.glRotatef(crank_angle, 1.0f, 0.0f, 0.0f);

            gl.glPushMatrix();
            gl.glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
            gl.glTranslatef(0.0f, 0.0f, -1.0f);
            myCylinder(obj, 0.08f, 0.0f, 1.4f);
            gl.glPopMatrix();

            gl.glPushMatrix();
            gl.glTranslatef(0.28f, 0.0f, 0.0f);
            draw_crankbell();
            gl.glPopMatrix();

            gl.glPushMatrix();
            gl.glTranslatef(-0.77f, 0.0f, 0.0f);
            if (filled)
            {
                if (textured)
                    gl.glCallList(list_flywheel_texture);
                else
                    gl.glCallList(list_flywheel_filled);
            }
            else
                draw_flywheel();
            gl.glPopMatrix();
            gl.glPopMatrix();
        }

            /* Makes a simple checkered pattern image. (Copied from the
               redbook example "checker.c".) */
        private void make_image()
        {
            int c, idx = 0;
            for (int i = 0; i < IMAGE_WIDTH; i++)
            {
                for (int j = 0; j < IMAGE_HEIGHT; j++)
                {
                    c = ((((i & 0x8) == 0) ^ ((j & 0x8)) == 0)) ? 255 : 0;
                    image[idx++] = (byte)c;
                    image[idx++] = (byte)c;
                    image[idx++] = (byte)c;
                }
            }
        }

            /* Makes the head lookup table for all possible crank angles. */
        private void make_table()
        {
            for (int i = 0; i < 360; i++)
            {
                float rads = PHASE-(((float)i)/FREQ_DIV);
                head_look_up_table[i] =
                    MAGNITUDE *
                    (float)Math.atan
                        ((ARC_RADIUS*Math.sin(rads)) /
                         (ARC_LENGTH-(ARC_RADIUS*Math.cos(rads))));
            }
        }

        // Imported from glut.
        private void glutWireCube(float size)
        {
            drawBox(size, GL_LINE_LOOP);
        }

        // Imported from glut.
        private void glutSolidCube(float size)
        {
            drawBox(size, GL_QUADS);
        }

        // Imported from glut.
        private void drawBox(float size, int type)
        {
            float v[][] = new float[8][3];
            int i;

            v[0][0] = v[1][0] = v[2][0] = v[3][0] = -size / 2;
            v[4][0] = v[5][0] = v[6][0] = v[7][0] = size / 2;
            v[0][1] = v[1][1] = v[4][1] = v[5][1] = -size / 2;
            v[2][1] = v[3][1] = v[6][1] = v[7][1] = size / 2;
            v[0][2] = v[3][2] = v[4][2] = v[7][2] = -size / 2;
            v[1][2] = v[2][2] = v[5][2] = v[6][2] = size / 2;

            for (i = 5; i >= 0; i--)
            {
                gl.glBegin(type);
                gl.glNormal3fv(boxnormals[i]);
                gl.glVertex3fv(v[boxfaces[i][0]]);
                gl.glVertex3fv(v[boxfaces[i][1]]);
                gl.glVertex3fv(v[boxfaces[i][2]]);
                gl.glVertex3fv(v[boxfaces[i][3]]);
                gl.glEnd();
            }
        }
    }
}
