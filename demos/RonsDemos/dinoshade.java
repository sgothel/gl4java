/**
 * @(#) dinoshade.java
 * @(#) author: Mark J. Kilgard (converted to Java by Ron Cemer)
 */

/* Copyright (c) Mark J. Kilgard, 1994, 1997.  */

/* This program is freely distributable without licensing fees 
   and is provided without guarantee or warrantee expressed or 
   implied. This program is -not- in the public domain. */

/* Example for PC game developers to show how to *combine* texturing,
   reflections, and projected shadows all in real-time with OpenGL.
   Robust reflections use stenciling.  Robust projected shadows
   use both stenciling and polygon offset.  PC game programmers
   should realize that neither stenciling nor polygon offset are 
   supported by Direct3D, so these real-time rendering algorithms
   are only really viable with OpenGL. 
   
   The program has modes for disabling the stenciling and polygon
   offset uses.  It is worth running this example with these features
   toggled off so you can see the sort of artifacts that result.
   
   Notice that the floor texturing, reflections, and shadowing
   all co-exist properly. */

/* When you run this program:  Left mouse button controls the
   view.  Middle mouse button controls light position (left &
   right rotates light around dino; up & down moves light
   position up and down).  Right mouse button pops up menu. */

/* Check out the comments in the "redraw" routine to see how the
   reflection blending and surface stenciling is done.  You can
   also see in "redraw" how the projected shadows are rendered,
   including the use of stenciling and polygon offset. */

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

public class dinoshade extends SimpleGLAnimApplet1 
{
    static final float[][] bodyVerts =
    {
        { 0.0f, 3.0f, 0.0f},
        { 1.0f, 1.0f, 0.0f},
        { 5.0f, 1.0f, 0.0f},
        { 8.0f, 4.0f, 0.0f},
        { 10.0f, 4.0f, 0.0f},
        { 11.0f, 5.0f, 0.0f},
        { 11.0f, 11.5f, 0.0f},
        { 13.0f, 12.0f, 0.0f},
        { 13.0f, 13.0f, 0.0f},
        { 10.0f, 13.5f, 0.0f},
        { 13.0f, 14.0f, 0.0f},
        { 13.0f, 15.0f, 0.0f},
        { 11.0f, 16.0f, 0.0f},
        { 8.0f, 16.0f, 0.0f},
        { 7.0f, 15.0f, 0.0f},
        { 7.0f, 13.0f, 0.0f},
        { 8.0f, 12.0f, 0.0f},
        { 7.0f, 11.0f, 0.0f},
        { 6.0f, 6.0f, 0.0f},
        { 4.0f, 3.0f, 0.0f},
        { 3.0f, 2.0f, 0.0f},
        { 1.0f, 2.0f, 0.0f},
    };
    
    static final int[][] bodyTris =
    {
        { 1, 0, 21 },
        { 1, 21, 2 },
        { 21, 20, 2 },
        { 20, 19, 2 },
        { 19, 3, 2 },
        { 19, 18, 3 },
        { 18, 4, 3 },
        { 18, 5, 4 },
        { 18, 6, 5 },
        { 18, 17, 6 },
        { 17, 16, 6 },
        { 16, 7, 6 },
        { 16, 8, 7 },
        { 16, 15, 8 },
        { 15, 9, 8 },
        { 15, 14, 9 },
        { 14, 13, 9 },
        { 9, 13, 12 },
        { 9, 12, 11 },
        { 11, 10, 9 },
    };
    
    static final float[][] armVerts =
    {
        { 8.0f, 10.0f, 0.0f},
        { 9.0f, 9.0f, 0.0f},
        { 10.0f, 9.0f, 0.0f},
        { 13.0f, 8.0f, 0.0f},
        { 14.0f, 9.0f, 0.0f},
        { 16.0f, 9.0f, 0.0f},
        { 15.0f, 9.5f, 0.0f},
        { 16.0f, 10.0f, 0.0f},
        { 15.0f, 10.0f, 0.0f},
        { 15.5f, 11.0f, 0.0f},
        { 14.5f, 10.0f, 0.0f},
        { 14.0f, 11.0f, 0.0f},
        { 14.0f, 10.0f, 0.0f},
        { 13.0f, 9.0f, 0.0f},
        { 11.0f, 11.0f, 0.0f},
        { 9.0f, 11.0f, 0.0f},
    };
    
    static final int[][] armTris =
    {
        { 0, 15, 1 },
        { 15, 2, 1 },
        { 15, 14, 2 },
        { 14, 13, 2 },
        { 13, 3, 2 },
        { 13, 4, 3 },
        { 13, 12, 4 },
        { 12, 11, 10 },
        { 12, 10, 4 },
        { 10, 6, 4 },
        { 6, 5, 4 },
        { 8, 7, 6 },
        { 10, 8, 6 },
        { 10, 9, 8 },
    };
    
    static final float[][] legVerts =
    {
        { 8.0f, 6.0f, 0.0f},
        { 8.0f, 4.0f, 0.0f},
        { 9.0f, 3.0f, 0.0f},
        { 9.0f, 2.0f, 0.0f},
        { 8.0f, 1.0f, 0.0f},
        { 8.0f, 0.5f, 0.0f},
        { 9.0f, 0.0f, 0.0f},
        { 12.0f, 0.0f, 0.0f},
        { 10.0f, 1.0f, 0.0f},
        { 10.0f, 2.0f, 0.0f},
        { 12.0f, 4.0f, 0.0f},
        { 11.0f, 6.0f, 0.0f},
        { 10.0f, 7.0f, 0.0f},
        { 9.0f, 7.0f, 0.0f},
    };
    
    static final int[][] legTris =
    {
        { 6, 5, 7 },
        { 5, 8, 7 },
        { 5, 4, 8 },
        { 4, 3, 8 },
        { 3, 9, 8 },
        { 3, 2, 9 },
        { 2, 10, 9 },
        { 2, 1, 10 },
        { 1, 0, 10 },
        { 0, 11, 10 },
        { 0, 12, 11 },
        { 0, 13, 12 },
    };
    
    static final float[][] eyeVerts =
    {
        { 8.75f, 15.0f, 0.0f},
        { 9.0f, 14.7f, 0.0f},
        { 9.6f, 14.7f, 0.0f},
        { 10.1f, 15.0f, 0.0f},
        { 9.6f, 15.25f, 0.0f},
        { 9.0f, 15.25f, 0.0f},
    };
    
    static final int[][] eyeTris =
    {
        { 1, 0, 2 },
        { 0, 5, 2 },
        { 5, 4, 2 },
        { 4, 3, 2 },
    };

    static final float floorVertices[][] =
    {
        { -20.0f, 0.0f, 20.0f },
        { 20.0f, 0.0f, 20.0f },
        { 20.0f, 0.0f, -20.0f },
        { -20.0f, 0.0f, -20.0f },
    };


        /* Initialize the applet */


	public void init()
	{
	super.init();
        Dimension d = getSize();
        canvas = new dinoshadeCanvas(d.width, d.height);
        add("Center", canvas);
	}


	public static void main( String args[] ) {
		dinoshade applet = 
		         new dinoshade();

		Frame f = new Frame("dinoshade");

		f.addWindowListener( new WindowAdapter()
				{
					public void windowClosed(WindowEvent e)
					{
						System.exit(0);
					}
					public void windowClosing(WindowEvent e)
					{
						windowClosed(e);
					}
				}
			);

		f.setLayout(new BorderLayout());
		f.add("Center", applet);
		applet.setSize(500,300);
		applet.init();
		applet.start();
		Dimension ps = applet.getPreferredSize();
		f.setBounds(-100,-100,99,99);
		f.setVisible(true);
		f.setVisible(false);
		Insets i = f.getInsets();
		f.setBounds(0,0,
			    ps.width+i.left+i.right, 
		            ps.height+i.top+i.bottom);
		f.setVisible(true);
	}

        /* Local GLAnimCanvas extension class */


    private class dinoshadeCanvas extends GLAnimCanvas
        implements MouseListener, MouseMotionListener, ActionListener
    {
        private static final double M_PI = 3.14159265;

            // Menu options:
        private static final String M_NONE = "-----------------------";
        private static final String M_MOTION = "Toggle motion";
        private static final String M_LIGHT = "Toggle light";
        private static final String M_TEXTURE = "Toggle texture";
        private static final String M_SHADOWS = "Toggle shadows";
        private static final String M_REFLECTION = "Toggle reflection";
        private static final String M_DINOSAUR = "Toggle dinosaur";
        private static final String M_STENCIL_REFLECTION = "Toggle reflection stenciling";
        private static final String M_STENCIL_SHADOW = "Toggle shadow stenciling";
        private static final String M_OFFSET_SHADOW = "Toggle shadow offset";
        private static final String M_POSITIONAL = "Positional light";
        private static final String M_DIRECTIONAL = "Directional light";

        private PopupMenu menu = null;
        private boolean menu_showing = false;
        private boolean save_suspended = false;

            /* Variables controlling various rendering modes. */
        private boolean stencilReflection = true, stencilShadow = true, offsetShadow = true;
        private boolean renderShadow = true, renderDinosaur = true, renderReflection = true;
        private boolean linearFiltering = false, useTexture = true;
//        private boolean useMipmaps = false;
        private boolean lightSwitch = true;
        private boolean directionalLight = true;

            /* Time varying or user-controled variables. */
        private float jump = 0.0f;
        private float lightAngle = 0.0f, lightHeight = 20.0f;
        private float angle = -150.0f;  /* in degrees */
        private float angle2 = 30.0f;   /* in degrees */

        private boolean moving = false;
        private int startx, starty;
        private boolean lightMoving = false;
        private int lightStartX, lightStartY;

        private final float bodyWidth = 3.0f;

        private final float[] lightPosition = new float[4];
        private final float lightColor[] = {0.8f, 1.0f, 0.8f, 1.0f}; /* green-tinted */
        private final float skinColor[] = {0.1f, 1.0f, 0.1f, 1.0f};
        private final float eyeColor[] = {1.0f, 0.2f, 0.2f, 1.0f};
        private final int X = 0, Y = 1, Z = 2, W = 3;
        private final int A = 0, B = 1, C = 2, D = 3;

            /* Enumerants for refering to display lists. */
        private static final int
            BODY_SIDE = 1,  BODY_EDGE = 2,  BODY_WHOLE = 3,
            ARM_SIDE  = 4,  ARM_EDGE  = 5,  ARM_WHOLE  = 6,
            LEG_SIDE  = 7,  LEG_EDGE  = 8,  LEG_WHOLE  = 9,
            EYE_SIDE  = 10, EYE_EDGE  = 11, EYE_WHOLE  = 12;
        private float floorPlane[] = new float[4];
        private float floorShadow[] = new float[16];

        public dinoshadeCanvas(int w, int h)
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
	    stencilBits = 3;
        }
    
        public void init()
        {
	    int [] res=new int[6];

	    gl.glGetIntegerv(GL_STENCIL_BITS,res);

            System.out.println("init(): " + this + "\n\t" +
	                       "Stencil bits are "+res[0] +"\n\t" +
			       "IsOwnCreatedWindow: "+createOwnWindow);

            reshape(getSize().width, getSize().height);

            makeDinosaur();

            gl.glPolygonOffset(-2.0f, -1.0f);

            gl.glEnable(GL_CULL_FACE);
            gl.glEnable(GL_DEPTH_TEST);
            gl.glEnable(GL_TEXTURE_2D);
            gl.glLineWidth(3.0f);

            gl.glMatrixMode(GL_PROJECTION);
            glu.gluPerspective
                ( /* field of view in degree */ 40.0f,
                  /* aspect ratio */ 1.0f,
                  /* Z near */ 20.0f,
                  /* Z far */ 100.0f);
            gl.glMatrixMode(GL_MODELVIEW);
            glu.gluLookAt
                (0.0f, 8.0f, 60.0f, /* eye is at (0,8,60) */
                 0.0f, 8.0f, 0.0f,  /* center is at (0,8,0) */
                 0.0f, 1.0f, 0.0f); /* up is in postivie Y direction */

            gl.glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, 1);
            gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor);
            gl.glLightf(GL_LIGHT0, GL_CONSTANT_ATTENUATION, 0.1f);
            gl.glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, 0.05f);
            gl.glEnable(GL_LIGHT0);
            gl.glEnable(GL_LIGHTING);

            makeFloorTexture();

                /* Setup floor plane for projected shadow calculations. */
            findPlane
                (floorPlane,
                 floorVertices[1],
                 floorVertices[2],
                 floorVertices[3]);
                
            glj.gljCheckGL();

            menu = new PopupMenu("Options");
            menu.add(M_MOTION);
            menu.add(M_NONE);
            menu.add(M_LIGHT);
            menu.add(M_TEXTURE);
            menu.add(M_SHADOWS);
            menu.add(M_REFLECTION);
            menu.add(M_DINOSAUR);
            menu.add(M_NONE);
            menu.add(M_STENCIL_REFLECTION);
            menu.add(M_STENCIL_SHADOW);
            menu.add(M_OFFSET_SHADOW);
            menu.add(M_NONE);
            menu.add(M_POSITIONAL);
            menu.add(M_DIRECTIONAL);
            menu.addActionListener(this);
            add(menu);

            addMouseListener(this);
            addMouseMotionListener(this);
        }
    
        public void doCleanup()
        {
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
                long ltime =
                    System.currentTimeMillis() % 3142L; //approximate 2*PI*500
                float time = (float)(((double)ltime)/500.0);
                jump = 4.0f * (float)Math.abs(Math.sin(time)*0.5);
                if (!lightMoving) lightAngle += 0.0f;
            }

                /* Clear; default stencil clears to zero. */
            if ((stencilReflection && renderReflection) || (stencilShadow && renderShadow))
                gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
            else
                /* Avoid clearing stencil when not using it. */
                gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

                /* Reposition the light source. */
            lightPosition[0] = 12*(float)Math.cos(lightAngle);
            lightPosition[1] = lightHeight;
            lightPosition[2] = 12*(float)Math.sin(lightAngle);
            if (directionalLight)
                lightPosition[3] = 0.0f;
            else
                lightPosition[3] = 1.0f;

            shadowMatrix(floorShadow, floorPlane, lightPosition);

            gl.glPushMatrix();

                /* Perform scene rotations based on user mouse input. */
            gl.glRotatef(angle2, 1.0f, 0.0f, 0.0f);
            gl.glRotatef(angle, 0.0f, 1.0f, 0.0f);
     
                /* Tell GL new light source position. */
            gl.glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);

            if (renderReflection)
            {
                if (stencilReflection)
                {
                /* We can eliminate the visual "artifact" of seeing the "flipped"
                   dinosaur underneath the floor by using stencil.  The idea is
                   draw the floor without color or depth update but so that 
                   a stencil value of one is where the floor will be.  Later when
                   rendering the dinosaur reflection, we will only update pixels
                   with a stencil value of 1 to make sure the reflection only
                   lives on the floor, not below the floor. */
            
                        /* Don't update color or depth. */
                    gl.glDisable(GL_DEPTH_TEST);
                    gl.glColorMask(false, false, false, false);

                        /* Draw 1 into the stencil buffer. */
                    gl.glEnable(GL_STENCIL_TEST);
                    gl.glStencilOp(GL_REPLACE, GL_REPLACE, GL_REPLACE);
                    gl.glStencilFunc(GL_ALWAYS, 1, 0xffffffff);

                        /* Now render floor; floor pixels just get their stencil set to 1. */
                    drawFloor();

                        /* Re-enable update of color and depth. */ 
                    gl.glColorMask(true, true, true, true);
                    gl.glEnable(GL_DEPTH_TEST);

                        /* Now, only render where stencil is set to 1. */
                    gl.glStencilFunc(GL_EQUAL, 1, 0xffffffff);  /* draw if ==1 */
                    gl.glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP);
                }

                gl.glPushMatrix();

                    /* The critical reflection step: Reflect dinosaur through the floor
                       (the Y=0 plane) to make a relection. */

                gl.glScalef(1.0f, -1.0f, 1.0f);

                    /* Reflect the light position. */
                gl.glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);

                    /* To avoid our normals getting reversed and hence botched lighting
                       on the reflection, turn on normalize.  */
                gl.glEnable(GL_NORMALIZE);
                gl.glCullFace(GL_FRONT);
                
                    /* Draw the reflected dinosaur. */
                drawDinosaur();

                    /* Disable noramlize again and re-enable back face culling. */
                gl.glDisable(GL_NORMALIZE);
                gl.glCullFace(GL_BACK);

                gl.glPopMatrix();

                    /* Switch back to the unreflected light position. */
                gl.glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);

                if (stencilReflection) gl.glDisable(GL_STENCIL_TEST);
            }

                /* Back face culling will get used to only draw either the top or the
                   bottom floor.  This let's us get a floor with two distinct
                   appearances.  The top floor surface is reflective and kind of red.
                   The bottom floor surface is not reflective and blue. */

                /* Draw "bottom" of floor in blue. */
            gl.glFrontFace(GL_CW);  /* Switch face orientation. */
            gl.glColor4f(0.1f, 0.1f, 0.7f, 1.0f);
            drawFloor();
            gl.glFrontFace(GL_CCW);

            if (renderShadow)
            {
                if (stencilShadow)
                {
                    /* Draw the floor with stencil value 3.  This helps us only 
                       draw the shadow once per floor pixel (and only on the
                       floor pixels). */
                    gl.glEnable(GL_STENCIL_TEST);
                    gl.glStencilFunc(GL_ALWAYS, 3, 0xffffffff);
                    gl.glStencilOp(GL_KEEP, GL_KEEP, GL_REPLACE);
                }
            }

                /* Draw "top" of floor.  Use blending to blend in reflection. */
            gl.glEnable(GL_BLEND);
            gl.glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            gl.glColor4f(0.7f, 0.0f, 0.0f, 0.3f);
            gl.glColor4f(1.0f, 1.0f, 1.0f, 0.3f);
            drawFloor();
            gl.glDisable(GL_BLEND);
            
                /* Draw "actual" dinosaur, not its reflection. */
            if (renderDinosaur) drawDinosaur();

            if (renderShadow)
            {
                    /* Render the projected shadow. */
                if (stencilShadow)
                {
                    /* Now, only render where stencil is set above 2 (ie, 3 where
                       the top floor is).  Update stencil with 2 where the shadow
                       gets drawn so we don't redraw (and accidently reblend) the
                       shadow). */
                    gl.glStencilFunc(GL_LESS, 2, 0xffffffff);  /* draw if ==1 */
                    gl.glStencilOp(GL_REPLACE, GL_REPLACE, GL_REPLACE);
                }
                /* To eliminate depth buffer artifacts, we use polygon offset
                   to raise the depth of the projected shadow slightly so
                   that it does not depth buffer alias with the floor. */
                if (offsetShadow) gl.glEnable(GL_POLYGON_OFFSET_FILL);

                /* Render 50% black shadow color on top of whatever the
                   floor appareance is. */
                gl.glEnable(GL_BLEND);
                gl.glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
                gl.glDisable(GL_LIGHTING);  /* Force the 50% black. */
                gl.glColor4f(0.0f, 0.0f, 0.0f, 0.5f);

                gl.glPushMatrix();
                    /* Project the shadow. */
                gl.glMultMatrixf(floorShadow);
                drawDinosaur();
                gl.glPopMatrix();

                gl.glDisable(GL_BLEND);
                gl.glEnable(GL_LIGHTING);

                if (offsetShadow) gl.glDisable(GL_POLYGON_OFFSET_FILL);
                if (stencilShadow) gl.glDisable(GL_STENCIL_TEST);
            }

            gl.glPushMatrix();
            gl.glDisable(GL_LIGHTING);
            gl.glColor3f(1.0f, 1.0f, 0.0f);
            if (directionalLight)
            {
                    /* Draw an arrowhead. */
                gl.glDisable(GL_CULL_FACE);
                gl.glTranslatef(lightPosition[0], lightPosition[1], lightPosition[2]);
                gl.glRotatef(lightAngle * (float)(-180.0 / M_PI), 0, 1, 0);
                gl.glRotatef((float)Math.atan(lightHeight/12) * (float)(180.0 / M_PI), 0, 0, 1);
                gl.glBegin(GL_TRIANGLE_FAN);
                gl.glVertex3f(0, 0, 0);
                gl.glVertex3f(2, 1, 1);
                gl.glVertex3f(2, -1, 1);
                gl.glVertex3f(2, -1, -1);
                gl.glVertex3f(2, 1, -1);
                gl.glVertex3f(2, 1, 1);
                gl.glEnd();
                    /* Draw a white line from light direction. */
                gl.glColor3f(1.0f, 1.0f, 1.0f);
                gl.glBegin(GL_LINES);
                gl.glVertex3f(0, 0, 0);
                gl.glVertex3f(5, 0, 0);
                gl.glEnd();
                gl.glEnable(GL_CULL_FACE);
            }
            else
            {
                    /* Draw a yellow ball at the light source. */
                gl.glTranslatef(lightPosition[0], lightPosition[1], lightPosition[2]);
                long qobj = glu.gluNewQuadric();
                glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
                glu.gluQuadricNormals(qobj,GLU_SMOOTH);
                glu.gluQuadricTexture(qobj,false);
                glu.gluSphere(qobj,1.0f,5,5);
                glu.gluDeleteQuadric(qobj);
            }
            gl.glEnable(GL_LIGHTING);
            gl.glPopMatrix();

            gl.glPopMatrix();

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
    
            // if (!isSuspended()) repaint();  // Animate at full speed.
        }

        private void makeDinosaur()
        {
            extrudeSolidFromPolygon
                (bodyVerts,
                 bodyTris,
                 bodyWidth,
                 BODY_SIDE,
                 BODY_EDGE,
                 BODY_WHOLE);
            extrudeSolidFromPolygon
                (armVerts,
                 armTris,
                 bodyWidth/4,
                 ARM_SIDE,
                 ARM_EDGE,
                 ARM_WHOLE);
            extrudeSolidFromPolygon
                (legVerts,
                 legTris,
                 bodyWidth/2,
                 LEG_SIDE,
                 LEG_EDGE,
                 LEG_WHOLE);
            extrudeSolidFromPolygon
                (eyeVerts,
                 eyeTris,
                 bodyWidth+0.2f,
                 EYE_SIDE,
                 EYE_EDGE,
                 EYE_WHOLE);
        }

        private void drawDinosaur()
        {
            gl.glPushMatrix();
                /* Translate the dinosaur to be at (0,8,0). */
            gl.glTranslatef(-8, 0, -bodyWidth / 2);
            gl.glTranslatef(0.0f, jump, 0.0f);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, skinColor);
            gl.glCallList(BODY_WHOLE);
            gl.glTranslatef(0.0f, 0.0f, bodyWidth);
            gl.glCallList(ARM_WHOLE);
            gl.glCallList(LEG_WHOLE);
            gl.glTranslatef(0.0f, 0.0f, -bodyWidth - bodyWidth / 4);
            gl.glCallList(ARM_WHOLE);
            gl.glTranslatef(0.0f, 0.0f, -bodyWidth / 4);
            gl.glCallList(LEG_WHOLE);
            gl.glTranslatef(0.0f, 0.0f, bodyWidth / 2 - 0.1f);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, eyeColor);
            gl.glCallList(EYE_WHOLE);
            gl.glPopMatrix();
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

            /* Draw a floor (possibly textured). */
        private void drawFloor()
        {
            gl.glDisable(GL_LIGHTING);
            if (useTexture) gl.glEnable(GL_TEXTURE_2D);
            gl.glBegin(GL_QUADS);
            gl.glTexCoord2f(0.0f, 0.0f);
            gl.glVertex3fv(floorVertices[0]);
            gl.glTexCoord2f(0.0f, 16.0f);
            gl.glVertex3fv(floorVertices[1]);
            gl.glTexCoord2f(16.0f, 16.0f);
            gl.glVertex3fv(floorVertices[2]);
            gl.glTexCoord2f(16.0f, 0.0f);
            gl.glVertex3fv(floorVertices[3]);
            gl.glEnd();
            if (useTexture) gl.glDisable(GL_TEXTURE_2D);
            gl.glEnable(GL_LIGHTING);
        }

            /* create a matrix that will project the desired shadow */
        void shadowMatrix(float shadowMat[], float groundplane[], float lightpos[])
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
        void findPlane(float plane[], float v0[], float v1[], float v2[])
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

            /* Mark Kilgard's tessellation code from the "dino" demos.
               Bug fixes and re-write without GLU tesselator
               by Ronald B. Cemer */
        private void extrudeSolidFromPolygon
            (float data[][],
             int outlineTriIndices[][],
             float thickness,
             int side,
             int edge,
             int whole)
        {
            double dx, dy, len;
            int i, j0, j1, j2;
            int min, max, range;
            float x0, y0, x1, y1;
            int count = data.length;
            int tricount = outlineTriIndices.length;

            gl.glNewList(side, GL_COMPILE);
            gl.glShadeModel(GL_SMOOTH);
            gl.glBegin(GL_TRIANGLES);
            for (i = 0; i < tricount; i++)
            {
/* *+*+* Note that we use the triangle indices in reverse order here
   because they are specified in reverse order in the arrays. */
                j0 = outlineTriIndices[i][2];
                j1 = outlineTriIndices[i][1];
                j2 = outlineTriIndices[i][0];
                gl.glVertex3f(data[j0][0],data[j0][1],0.0f);
                gl.glVertex3f(data[j1][0],data[j1][1],0.0f);
                gl.glVertex3f(data[j2][0],data[j2][1],0.0f);
            }
            gl.glEnd();
            gl.glEndList();

            gl.glNewList(edge, GL_COMPILE);
            gl.glShadeModel(GL_FLAT);   /* flat shade keeps angular hands
                                           from being "smoothed" */
            for (min = max = 0; min < count; min = max)
            {
                for (max = min+1; max < count; max++)
                    if (data[max][2] != 0.0f) break;
                range = max-min;
                gl.glBegin(GL_QUAD_STRIP);
                for (i = min; i <= max; i++)
                {
                    j0 = i;
                    j1 = i+1;
                    if (j0 >= max) j0 -= range;
                    if (j1 >= max) j1 -= range;
                    x0 = data[j0][0];
                    y0 = data[j0][1];
                    x1 = data[j1][0];
                    y1 = data[j1][1];
                    gl.glVertex3f(x0, y0, 0.0f);
                    gl.glVertex3f(x0, y0, thickness);
                        // Normals
                    dx = y1 - y0;
                    dy = x0 - x1;
                    len = Math.sqrt(dx * dx + dy * dy);
                    gl.glNormal3f((float)(dx / len), (float)(dy / len), 0.0f);
                }
                gl.glEnd();
            }
            gl.glEndList();
	
            gl.glNewList(whole, GL_COMPILE);
            gl.glFrontFace(GL_CW);

            gl.glCallList(edge);

            gl.glNormal3f(0.0f, 0.0f, -1.0f);
            gl.glCallList(side);
            gl.glPushMatrix();
            gl.glTranslatef(0.0f, 0.0f, thickness);
            gl.glFrontFace(GL_CCW);
            gl.glNormal3f(0.0f, 0.0f, 1.0f);
            gl.glCallList(side);
            gl.glPopMatrix();

            gl.glEndList();
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
                // Left button moves view.
                // Both buttons moves light.
                // Right button pops up menu.
            if (!menu_showing)
            {
                if ((evt.getModifiers() & evt.BUTTON3_MASK) == 0)
                {
                    moving = true;
                    startx = evt.getX();
                    starty = evt.getY();
                }
                else if (moving)
                {
                    moving = false;
                    lightMoving = true;
                    lightStartX = evt.getX();
                    lightStartY = evt.getY();
                }
                else
                {
                        // Must be right mouse button.
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
            lightMoving = false;
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
            int x = evt.getX(), y = evt.getY();
            if (moving)
            {
                angle += (x - startx);
                while (angle < 0.0f) angle += 360.0f;
                while (angle >= 360.0f) angle -= 360.0f;
                angle2 += (y - starty);
                if (angle2 < -180.0f)
                    angle2 = -180.0f;
                else if (angle2 > 180.0f)
                    angle2 = 180.0f;
                startx = x;
                starty = y;
                if (isSuspended()) repaint();
            }
            else if (lightMoving)
            {
                lightAngle += (lightStartX - x)/40.0f;
                while (lightAngle < 0.0f) lightAngle += 360.0f;
                while (lightAngle >= 360.0f) lightAngle -= 360.0f;
                lightHeight += (lightStartY - y)/20.0f;
                lightStartX = x;
                lightStartY = y;
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

            if (c.equals(M_MOTION))
            {
                if (menu_showing)
                    save_suspended = !save_suspended;
                else
                    setSuspended(!isSuspended());
                dorepaint = true;
            }
            else if (c.equals(M_LIGHT))
            {
                lightSwitch = !lightSwitch;
                if (lightSwitch)
                  gl.glEnable(GL_LIGHT0);
                else
                  gl.glDisable(GL_LIGHT0);
                dorepaint = true;
            }
            else if (c.equals(M_TEXTURE))
            {
                useTexture = !useTexture;
                dorepaint = true;
            }
            else if (c.equals(M_SHADOWS))
            {
                renderShadow = !renderShadow;
                dorepaint = true;
            }
            else if (c.equals(M_REFLECTION))
            {
                renderReflection = !renderReflection;
                dorepaint = true;
            }
            else if (c.equals(M_DINOSAUR))
            {
                renderDinosaur = !renderDinosaur;
                dorepaint = true;
            }
            else if (c.equals(M_STENCIL_REFLECTION))
            {
                stencilReflection = !stencilReflection;
                dorepaint = true;
            }
            else if (c.equals(M_STENCIL_SHADOW))
            {
                stencilShadow = !stencilShadow;
                dorepaint = true;
            }
            else if (c.equals(M_OFFSET_SHADOW))
            {
                offsetShadow = !offsetShadow;
                dorepaint = true;
            }
            else if (c.equals(M_POSITIONAL))
            {
                directionalLight = false;
                dorepaint = true;
            }
            else if (c.equals(M_DIRECTIONAL))
            {
                directionalLight = true;
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
    }
}
