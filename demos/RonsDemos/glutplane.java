/**
 * @(#) glutplane.java
 * @(#) author: Mark J. Kilgard (converted to Java by Ron Cemer)
 */

/* This program is freely distributable without licensing fees 
   and is provided without guarantee or warrantee expressed or 
   implied. This program is -not- in the public domain. */

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

public class glutplane extends SimpleGLAnimApplet1 
{
        /* Initialize the applet */


	public void init()
	{
	super.init();
        Dimension d = getSize();
        canvas = new glutplaneCanvas(d.width, d.height);
        add("Center", canvas);
	}


    private class planeobj
    {
        float speed = 0.0f;          /* zero speed means not flying */
        float red = 0.0f, green = 0.0f, blue = 0.0f;
        float theta = 0.0f;
        float x = 0.0f, y = 0.0f, z = 0.0f, angle = 0.0f;

        public void setColor(float r, float g, float b)
        {
            red = r;
            green = g;
            blue = b;
        }
    };


        /* Local GLAnimCanvas extension class */


    private class glutplaneCanvas extends GLAnimCanvas
        implements MouseListener, ActionListener
    {
        private final double M_PI = 3.14159265;
        private final double M_PI_2 = 1.57079632;
        private final int MAX_PLANES = 15;
        private final String ADD_PLANE = "Add plane";
        private final String REMOVE_PLANE = "Remove plane";
        private final String SUSPEND_RESUME = "Suspend/resume animation";

        private planeobj planes[] = null;
        private Random random = null;
        private PopupMenu menu = null;
        private boolean menu_showing = false;
        private boolean save_suspended = false;

        public glutplaneCanvas(int w, int h)
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

            gl.glClearDepth(1.0f);
            gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
            gl.glMatrixMode(GL_PROJECTION);
            gl.glFrustum(-1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 20.0f);
            gl.glMatrixMode(GL_MODELVIEW);
                /* add three initial random planes */
            planes = new planeobj[MAX_PLANES];
            for (int i = 0; i < MAX_PLANES; i++)
                planes[i] = new planeobj();
            random = new Random(System.currentTimeMillis());
            add_plane();
            add_plane();
            add_plane();

            glj.gljCheckGL();

            menu = new PopupMenu("Options");
            menu.add(ADD_PLANE);
            menu.add(REMOVE_PLANE);
            menu.add(SUSPEND_RESUME);
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

            tick();

            float red, green, blue;

            gl.glClear(GL_DEPTH_BUFFER_BIT);
                /* paint black to blue smooth shaded polygon for background */
            gl.glDisable(GL_DEPTH_TEST);
            gl.glShadeModel(GL_SMOOTH);
            gl.glBegin(GL_POLYGON);
            gl.glColor3f(0.0f, 0.0f, 0.0f);
            gl.glVertex3f(-20f, 20f, -19f);
            gl.glVertex3f(20f, 20f, -19f);
            gl.glColor3f(0.0f, 0.0f, 1.0f);
            gl.glVertex3f(20f, -20f, -19f);
            gl.glVertex3f(-20f, -20f, -19f);
            gl.glEnd();
                /* paint planes */
            gl.glEnable(GL_DEPTH_TEST);
            gl.glShadeModel(GL_FLAT);
            for (int i = 0; i < MAX_PLANES; i++)
            {
                if (planes[i].speed != 0.0f)
                {
                    gl.glPushMatrix();
                    gl.glTranslatef(planes[i].x, planes[i].y, planes[i].z);
                    gl.glRotatef(290.0f, 1.0f, 0.0f, 0.0f);
                    gl.glRotatef(planes[i].angle, 0.0f, 0.0f, 1.0f);
                    gl.glScalef(1.0f / 3.0f, 1.0f / 4.0f, 1.0f / 4.0f);
                    gl.glTranslatef(0.0f, -4.0f, -1.5f);
                    gl.glBegin(GL_TRIANGLE_STRIP);
                        /* left wing */
                    gl.glVertex3f(-7.0f, 0.0f, 2.0f);
                    gl.glVertex3f(-1.0f, 0.0f, 3.0f);
                    red = planes[i].red;
                    green = planes[i].green;
                    blue = planes[i].blue;
                    gl.glColor3f(red,green,blue);
                    gl.glVertex3f(-1.0f, 7.0f, 3.0f);
                        /* left side */
                    gl.glColor3f(0.6f * red, 0.6f * green, 0.6f * blue);
                    gl.glVertex3f(0.0f, 0.0f, 0.0f);
                    gl.glVertex3f(0.0f, 8.0f, 0.0f);
                        /* right side */
                    gl.glVertex3f(1.0f, 0.0f, 3.0f);
                    gl.glVertex3f(1.0f, 7.0f, 3.0f);
                        /* final tip of right wing */
                    gl.glColor3f(red, green, blue);
                    gl.glVertex3f(7.0f, 0.0f, 2.0f);
                    gl.glEnd();
                    gl.glPopMatrix();
                }
            }

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
    
            // if (!isSuspended()) repaint();  // Animate at full speed.
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
                else
                {
                        // Must be left button.
                    if (isSuspended()) repaint();
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
            if (c.equals(ADD_PLANE))
            {
                add_plane();
            }
            else if (c.equals(REMOVE_PLANE))
            {
                remove_plane();
            }
            else if (c.equals(SUSPEND_RESUME))
            {
                if (menu_showing)
                    save_suspended = !save_suspended;
                else
                    setSuspended(!isSuspended());   // not likely to happen
            }
            if (menu_showing)
            {
                menu_showing = false;
                setSuspended(save_suspended);
            }
        }
    
        private void tick_per_plane(int i)
        {
            float theta = planes[i].theta += planes[i].speed;
            planes[i].z = -9.0f + 4.0f * (float)Math.cos(theta);
            planes[i].x = 4 * (float)Math.sin(2.0f * theta);
            planes[i].y = (float)Math.sin(theta / 3.4f) * 3.0f;
            planes[i].angle = (float)
                (((Math.atan(2.0) + M_PI_2) * Math.sin(theta) - M_PI_2) *
                 180.0 / M_PI);
            if (planes[i].speed < 0.0f) planes[i].angle += 180.0f;
        }

        private void add_plane()
        {
            for (int i = 0; i < MAX_PLANES; i++)
            {
                if (planes[i].speed == 0.0f)
                {
                    int c = random.nextInt() & 0x07;
                    while (c == 0) c = random.nextInt() & 0x07;
                    float r = (float)((c >> 2) & 0x01);
                    float g = (float)((c >> 1) & 0x01);
                    float b = (float)(c & 0x01);
                        // Blue fades into the background; lighten it up.
                    if (c == 0x01) r = g = 0.4f;
                    planes[i].setColor(r,g,b);
                    planes[i].speed =
                        ((float)(random.nextInt() % 20)) * 0.001f + 0.02f;
                    if ((random.nextInt() & 0x01) != 0)
                        planes[i].speed *= -1.0f;
                    planes[i].theta =
                        ((float)(random.nextInt() % 257))*0.1111f;
                    tick_per_plane(i);
                    if (isSuspended()) repaint();
                    return;
                }
            }
        }

        private void remove_plane()
        {
            for (int i = MAX_PLANES - 1; i >= 0; i--)
            {
                if (planes[i].speed != 0.0f)
                {
                    planes[i].speed = 0.0f;
                    if (isSuspended()) repaint();
                    return;
                }
            }
        }

        private void tick()
        {
            for (int i = 0; i < MAX_PLANES; i++)
            {
                if (planes[i].speed != 0.0f)
                    tick_per_plane(i);
            }
        }
    }
}
