/**
 * @(#) pointblast.java
 * @(#) author: Mark J. Kilgard (converted to Java by Ron Cemer)
 */

/* Copyright (c) Mark J. Kilgard, 1997.  */

/* This program is freely distributable without licensing fees 
   and is provided without guarantee or warrantee expressed or 
   implied. This program is -not- in the public domain. */

/* This example demonstrates how to render particle effects
   with OpenGL.  A cloud of pinkish/orange particles explodes with the
   particles bouncing off the ground.  When the EXT_point_parameters
   is present , the particle size is attenuated based on eye distance. */

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

public class pointblast extends SimpleGLAnimApplet1 
{
        /* Initialize the applet */


	public void init()
	{
	super.init();
        Dimension d = getSize();
        canvas = new pointblastCanvas(d.width, d.height);
        add("Center", canvas);
	}


        /* Local GLAnimCanvas extension class */


    private class pointblastCanvas extends GLAnimCanvas
        implements MouseListener, MouseMotionListener, ActionListener
    {
        private final double M_PI = 3.14159265;

        private final String MENU_PAUSE = "Pause";
        private final String MENU_RESUME = "Resume";
        private final String MENU_RESET_TIME = "Reset time";
//        private final String MENU_CONSTANT = "Constant";
//        private final String MENU_LINEAR = "Linear";
//        private final String MENU_QUADRATIC = "Quadratic";
        private final String MENU_BLEND_ON = "Blend on";
        private final String MENU_BLEND_OFF = "Blend off";
//        private final String MENU_THRESHOLD_1 = "Threshold 1";
//        private final String MENU_THRESHOLD_10 = "Threshold 10";
        private final String MENU_POINT_SMOOTH_ON = "Point smooth on";
        private final String MENU_POINT_SMOOTH_OFF = "Point smooth off";
        private final String MENU_POINT_SIZE_2 = "Point size 2";
        private final String MENU_POINT_SIZE_4 = "Point size 4";
        private final String MENU_POINT_SIZE_8 = "Point size 8";
        private final String MENU_ENABLE_SPIN = "Enable spin";
        private final String MENU_DISABLE_SPIN = "Disable spin";
        private final String MENU_200_POINTS = "200 points";
        private final String MENU_500_POINTS = "500 points";
        private final String MENU_1000_POINTS = "1000 points";
        private final String MENU_2000_POINTS = "2000 points";
        private final String MENU_ENABLE_TEXTURING = "Enable texturing";
        private final String MENU_DISABLE_TEXTURING = "Disable texturing";
        private final String MENU_LINEAR_TEXTURE_FILTERING = "Linear texture filtering";
        private final String MENU_POINT_TEXTURE_FILTERING = "Point texture filtering";

        private PopupMenu menu = null;
        private boolean menu_showing = false;
        private boolean save_suspended = false;

        private float angle = -150;   /* in degrees */
        private boolean spin = false;
        private boolean moving = false;
        private int begin;
        private boolean newModel = true;
        private float theTime;
        private boolean repeat = true;
        private boolean blend = true;
        private boolean texturing = true;
//        private boolean useMipmaps = true;
        private boolean linearFiltering = true;

        private float constant[] = { 1.0f/5.0f, 0.0f, 0.0f };
        private float linear[] = { 0.0f, 1.0f/5.0f, 0.0f };
        private float theQuad[] = { 0.25f, 0.0f, 1.0f/60.0f };

        private final int MAX_POINTS = 2000;

        private int numPoints = 200;

        private float pointList[][] = new float[MAX_POINTS][3];
        private float pointTime[] = new float[MAX_POINTS];
        private float pointVelocity[][] = new float[MAX_POINTS][2];
        private float pointDirection[][] = new float[MAX_POINTS][2];
        private int colorList[] = new int[MAX_POINTS];
        private boolean motion = false;

        private Random random = new Random(System.currentTimeMillis());

        private final float MEAN_VELOCITY = 3.0f;
        private final float GRAVITY = 2.0f;
        private final float TIME_DELTA = 0.025f;  /* The speed of time. */

            /* Modeling units of ground extent in each X and Z direction. */
        private final int EDGE = 12;

        private final float colorSet[][] =
        {
            /* Shades of red. */
            { 0.7f, 0.2f, 0.4f, 0.5f },
            { 0.8f, 0.0f, 0.7f, 0.5f },
            { 1.0f, 0.0f, 0.0f, 0.5f },
            { 0.9f, 0.3f, 0.6f, 0.5f },
            { 1.0f, 0.4f, 0.0f, 0.5f },
            { 1.0f, 0.0f, 0.5f, 0.5f }
        };
        private final int NUM_COLORS = colorSet.length;
        private final int DEAD = NUM_COLORS;

        public pointblastCanvas(int w, int h)
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

            gl.glShadeModel(GL_FLAT);
            gl.glEnable(GL_DEPTH_TEST);
            gl.glEnable(GL_POINT_SMOOTH);
            gl.glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            gl.glPointSize(8.0f);
//            gl.glPointParameterfvEXT(GL_DISTANCE_ATTENUATION_EXT, theQuad);
            gl.glMatrixMode(GL_PROJECTION);
            glu.gluPerspective
                (/* field of view in degree */ 40.0,
                 /* aspect ratio */ 1.0,
                 /* Z near */ 0.5,
                 /* Z far */ 40.0);
            gl.glMatrixMode(GL_MODELVIEW);
            glu.gluLookAt
                (0.0f, 1.0f, 8.0f,  /* eye location */
                 0.0f, 1.0f, 0.0f,  /* center is at (0,0,0) */
                 0.0f, 1.0f, 0.0f); /* up is in postivie Y direction */
            gl.glPushMatrix();       /* dummy push so we can pop on model
                                       recalc */
            makePointList();
            makeFloorTexture();

            glj.gljCheckGL();

            menu = new PopupMenu("Options");
            menu.add(MENU_PAUSE);
            menu.add(MENU_RESUME);
            menu.add(MENU_RESET_TIME);
//            menu.add(MENU_CONSTANT);
//            menu.add(MENU_LINEAR);
//            menu.add(MENU_QUADRATIC);
            menu.add(MENU_BLEND_ON);
            menu.add(MENU_BLEND_OFF);
//            menu.add(MENU_THRESHOLD_1);
//            menu.add(MENU_THRESHOLD_10);
            menu.add(MENU_POINT_SMOOTH_ON);
            menu.add(MENU_POINT_SMOOTH_OFF);
            menu.add(MENU_POINT_SIZE_2);
            menu.add(MENU_POINT_SIZE_4);
            menu.add(MENU_POINT_SIZE_8);
            menu.add(MENU_ENABLE_SPIN);
            menu.add(MENU_DISABLE_SPIN);
            menu.add(MENU_200_POINTS);
            menu.add(MENU_500_POINTS);
            menu.add(MENU_1000_POINTS);
            menu.add(MENU_2000_POINTS);
            menu.add(MENU_ENABLE_TEXTURING);
            menu.add(MENU_DISABLE_TEXTURING);
            menu.add(MENU_LINEAR_TEXTURE_FILTERING);
            menu.add(MENU_POINT_TEXTURE_FILTERING);
            menu.addActionListener(this);
            add(menu);

            addMouseListener(this);
            addMouseMotionListener(this);
        }
    
        public void doCleanup()
        {
            System.out.println("destroy(): " + this);
            removeMouseListener(this);
            removeMouseMotionListener(this);
            menu.removeActionListener(this);
        }
    
        public void reshape(int width, int height)
        {
            gl.glViewport(0,0,width,height);
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            if (!isSuspended())
            {
                if (spin)
                {
                    angle += 0.3f;
                    newModel = true;
                }
                updatePointList();
            }

            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            if (newModel) recalcModelView();

            gl.glDepthMask(false);

                /* Draw the floor. */
            if (texturing) gl.glEnable(GL_TEXTURE_2D);
            gl.glColor3f(0.5f, 1.0f, 0.5f);
            gl.glBegin(GL_QUADS);
            gl.glTexCoord2f(0.0f, 0.0f);
            gl.glVertex3f(-EDGE, -0.05f, -EDGE);
            gl.glTexCoord2f(20.0f, 0.0f);
            gl.glVertex3f(EDGE, -0.05f, -EDGE);
            gl.glTexCoord2f(20.0f, 20.0f);
            gl.glVertex3f(EDGE, -0.05f, EDGE);
            gl.glTexCoord2f(0.0f, 20.0f);
            gl.glVertex3f(-EDGE, -0.05f, EDGE);
            gl.glEnd();

                /* Allow particles to blend with each other. */
            gl.glDepthMask(true);

            if (blend) gl.glEnable(GL_BLEND);

            if (texturing) gl.glDisable(GL_TEXTURE_2D);
            gl.glBegin(GL_POINTS);
            for (int i = 0; i < numPoints; i++)
            {
                /* Draw alive particles. */
                int c = colorList[i];
                if ( (c < 0) || (c >= DEAD) ) continue;
                gl.glColor4fv(colorSet[colorList[i]]);
                gl.glVertex3fv(pointList[i]);
            }
            gl.glEnd();

            gl.glDisable(GL_BLEND);

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
                else
                {
                        // Must be left button.
                    moving = true;
                    begin = evt.getX();
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
            if ((evt.getModifiers() & evt.BUTTON3_MASK) == 0)
            {
                    // Must be left button.
                moving = false;
            }
        }
    
        public void mouseClicked(MouseEvent evt)
        {
        }

        // Methods required for the implementation of MouseMotionListener
        public void mouseDragged(MouseEvent evt)
        {
            if (moving)
            {
                int x = evt.getX();
                angle = angle + (x - begin);
                begin = x;
                newModel = true;
                if (isSuspended()) repaint();
            }
        }

        public void mouseMoved(MouseEvent evt)
        {
        }

        // Method required for the implementation of ActionListener
        public void actionPerformed(ActionEvent evt)
        {
            if (glj.gljMakeCurrent() == false) return;
            boolean dorepaint = false;
            String c = evt.getActionCommand();
            if (c.equals(MENU_PAUSE))
            {
                if (menu_showing)
                    save_suspended = true;
                else if (!isSuspended())
                    setSuspended(true);
                dorepaint = true;
            }
            else if (c.equals(MENU_RESUME))
            {
                if (menu_showing)
                    save_suspended = false;
                else if (isSuspended())
                    setSuspended(false);
                dorepaint = true;
            }
            else if (c.equals(MENU_RESET_TIME))
            {
                makePointList();
                dorepaint = true;
            }
//            else if (c.equals(MENU_CONSTANT))
//            {
//                gl.glPointParameterfvEXT(GL_DISTANCE_ATTENUATION_EXT, constant);
//                dorepaint = true;
//            }
//            else if (c.equals(MENU_LINEAR))
//            {
//                gl.glPointParameterfvEXT(GL_DISTANCE_ATTENUATION_EXT, linear);
//                dorepaint = true;
//            }
//            else if (c.equals(MENU_QUADRATIC))
//            {
//                gl.glPointParameterfvEXT(GL_DISTANCE_ATTENUATION_EXT, theQuad);
//                dorepaint = true;
//            }
            else if (c.equals(MENU_BLEND_ON))
            {
                blend = true;
                dorepaint = true;
            }
            else if (c.equals(MENU_BLEND_OFF))
            {
                blend = false;
                dorepaint = true;
            }
//            else if (c.equals(MENU_THRESHOLD_1))
//            {
//                gl.glPointParameterfEXT(GL_POINT_FADE_THRESHOLD_SIZE_EXT, 1.0f);
//                dorepaint = true;
//            }
//            else if (c.equals(MENU_THRESHOLD_10))
//            {
//                gl.glPointParameterfEXT(GL_POINT_FADE_THRESHOLD_SIZE_EXT, 10.0f);
//                dorepaint = true;
//            }
            else if (c.equals(MENU_POINT_SMOOTH_ON))
            {
                gl.glEnable(GL_POINT_SMOOTH);
                dorepaint = true;
            }
            else if (c.equals(MENU_POINT_SMOOTH_OFF))
            {
                gl.glDisable(GL_POINT_SMOOTH);
                dorepaint = true;
            }
            else if (c.equals(MENU_POINT_SIZE_2))
            {
                gl.glPointSize(2.0f);
                dorepaint = true;
            }
            else if (c.equals(MENU_POINT_SIZE_4))
            {
                gl.glPointSize(4.0f);
                dorepaint = true;
            }
            else if (c.equals(MENU_POINT_SIZE_8))
            {
                gl.glPointSize(8.0f);
                dorepaint = true;
            }
            else if (c.equals(MENU_ENABLE_SPIN))
            {
                spin = true;
                dorepaint = true;
            }
            else if (c.equals(MENU_DISABLE_SPIN))
            {
                spin = false;
                dorepaint = true;
            }
            else if (c.equals(MENU_200_POINTS))
            {
                numPoints = 200;
                makePointList();
                dorepaint = true;
            }
            else if (c.equals(MENU_500_POINTS))
            {
                numPoints = 500;
                makePointList();
                dorepaint = true;
            }
            else if (c.equals(MENU_1000_POINTS))
            {
                numPoints = 1000;
                makePointList();
                dorepaint = true;
            }
            else if (c.equals(MENU_2000_POINTS))
            {
                numPoints = 2000;
                makePointList();
                dorepaint = true;
            }
            else if (c.equals(MENU_ENABLE_TEXTURING))
            {
                texturing = true;
                dorepaint = true;
            }
            else if (c.equals(MENU_DISABLE_TEXTURING))
            {
                texturing = false;
                dorepaint = true;
            }
            else if (c.equals(MENU_LINEAR_TEXTURE_FILTERING))
            {
                linearFiltering = true;
                makeFloorTexture();
                dorepaint = true;
            }
            else if (c.equals(MENU_POINT_TEXTURE_FILTERING))
            {
                linearFiltering = false;
                makeFloorTexture();
                dorepaint = true;
            }

            glj.gljFree();
            if (menu_showing)
            {
                menu_showing = false;
                setSuspended(save_suspended);
            }
            if ( (isSuspended()) && (dorepaint) ) repaint();
        }

        private float float_rand()
        {
            return random.nextFloat();
        }

        private float RANDOM_RANGE(float lo, float hi)
        {
            return lo + ((hi - lo) * float_rand());
        }

        private void makePointList()
        {
            float angle, velocity, direction;
            motion = true;
            for (int i = 0; i < numPoints; i++)
            {
                pointList[i][0] = 0.0f;
                pointList[i][1] = 0.0f;
                pointList[i][2] = 0.0f;
                pointTime[i] = 0.0f;
                angle = (RANDOM_RANGE(60.0f, 70.0f)) * ((float)M_PI)/180.0f;
                direction = RANDOM_RANGE(0.0f, 360.0f) * ((float)M_PI)/180.0f;
                pointDirection[i][0] = (float)Math.cos(direction);
                pointDirection[i][1] = (float)Math.sin(direction);
                velocity = MEAN_VELOCITY + RANDOM_RANGE(-0.8f, 1.0f);
                pointVelocity[i][0] = velocity * (float)Math.cos(angle);
                pointVelocity[i][1] = velocity * (float)Math.sin(angle);
                colorList[i] = random.nextInt() % NUM_COLORS;
            }
            theTime = 0.0f;
        }

        private void updatePointList()
        {
            float distance;
            motion = false;
            for (int i = 0; i < numPoints; i++)
            {
                distance = pointVelocity[i][0] * theTime;

                    /* X and Z */
                pointList[i][0] = pointDirection[i][0] * distance;
                pointList[i][2] = pointDirection[i][1] * distance;

                    /* Z */
                pointList[i][1] =
                  (pointVelocity[i][1] - 0.5f * GRAVITY * pointTime[i])*pointTime[i];

                    /* If we hit the ground, bounce the point upward again. */
                if (pointList[i][1] <= 0.0f)
                {
                    if (distance > EDGE)
                    {
                        /* Particle has hit ground past the distance duration of
                          the particles.  Mark particle as dead. */
                        colorList[i] = DEAD;  /* Not moving. */
                        continue;
                    }
                    pointVelocity[i][1] *= 0.8f;  /* 80% of previous up velocity. */
                    pointTime[i] = 0.0f;  /* Reset the particles sense of up time. */
                }
                motion = true;
                pointTime[i] += TIME_DELTA;
            }
            theTime += TIME_DELTA;
            if ( (repeat) && (!motion) ) makePointList();
        }

        private void recalcModelView()
        {
            gl.glPopMatrix();
            gl.glPushMatrix();
            gl.glRotatef(angle, 0.0f, 1.0f, 0.0f);
            newModel = false;
        }

        private void makeFloorTexture()
        {
                /* Nice floor texture tiling pattern. */
            String circles[] =
            {
                "....xxxx........",
                "..xxxxxxxx......",
                ".xxxxxxxxxx.....",
                ".xxx....xxx.....",
                "xxx......xxx....",
                "xxx......xxx....",
                "xxx......xxx....",
                "xxx......xxx....",
                ".xxx....xxx.....",
                ".xxxxxxxxxx.....",
                "..xxxxxxxx......",
                "....xxxx........",
                "................",
                "................",
                "................",
                "................"
            };
            byte floorTexture[] = new byte[16*16*3];

                /* Setup RGB image for the texture. */
            int idx = 0;
            for (int t = 0; t < 16; t++)
            {
                for (int s = 0; s < 16; s++)
                {
                    if (circles[t].charAt(s) == 'x')
                    {
                            /* Nice blue. */
                        floorTexture[idx++] = (byte)0x1f;
                        floorTexture[idx++] = (byte)0x1f;
                        floorTexture[idx++] = (byte)0x8f;
                    }
                    else
                    {
                            /* Light gray. */
                        floorTexture[idx++] = (byte)0xca;
                        floorTexture[idx++] = (byte)0xca;
                        floorTexture[idx++] = (byte)0xca;
                    }
                }
            }

            gl.glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

//            if (useMipmaps)
//            {
//                gl.glTexParameteri
//                    (GL_TEXTURE_2D,
//                     GL_TEXTURE_MIN_FILTER,
//                     GL_LINEAR_MIPMAP_LINEAR);
//                glu.gluBuild2DMipmaps
//                    (GL_TEXTURE_2D,3,16,16,GL_RGB,GL_UNSIGNED_BYTE,floorTexture);
//            }
//            else
            {
                if (linearFiltering)
                {
                    gl.glTexParameteri
                        (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
                    gl.glTexParameteri
                        (GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
                }
                else
                {
                    gl.glTexParameteri
                        (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
                    gl.glTexParameteri
                        (GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
                }
                gl.glTexImage2D
                    (GL_TEXTURE_2D,0,3,16,16,0,GL_RGB,GL_UNSIGNED_BYTE,floorTexture);
            }
        }
    }
}
