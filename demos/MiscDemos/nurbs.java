/**
 * @(#) DrawColoredPrimitives2.java
 * @(#) author: Joe Zimmerman (converted to Java by Sven Goethel)
 */

/* This program is free software under the license of LGPL */

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

public class nurbs extends SimpleGLAnimApplet1 
{
    public void init()
    {
	super.init();
        Dimension d = getSize();
        canvas = new gldemo(d.width, d.height);
        add("Center", canvas);
    }

	public static void main( String args[] ) 
	{
		Frame mainFrame = new Frame("nurbs");

		nurbs applet = new nurbs();

		applet.setSize(400, 400);
		applet.init();
		applet.start();

		mainFrame.add(applet);

		mainFrame.pack();
		mainFrame.setVisible(true);
	}


    private class gldemo extends GLAnimCanvas
        implements MouseListener, ActionListener
    {
        private PopupMenu menu = null;
        private boolean menu_showing = false;
        private boolean save_suspended = false;
        private final String VIEW_ROTATION = "Toggle Rotation";
        private final String VIEW_FRONT  = "View Front";
        private final String VIEW_TOP    = "View Top";
        private final String VIEW_BOTTOM = "View Bottom";

        final float M_PI   = 3.14159265f;
        final float M_PI_2 = 1.57079632f;
	float rotate=0;
	float rotationStep = 1;
	boolean rotationOn = true;
	int view = 0; /* 0 = front, 1 = top, 2 = bottom */

	static final int S_NUMPOINTS = 13;
	static final int S_ORDER     = 3;
	static final int S_NUMKNOTS  = (S_NUMPOINTS + S_ORDER);
	static final int T_NUMPOINTS = 3;
	static final int T_ORDER     = 3;
	static final int T_NUMKNOTS  = (T_NUMPOINTS + T_ORDER);
	static final float SQRT2    = 1.41421356237309504880f;

	/* initialized local data */

	float sknots[/*S_NUMKNOTS*/] =
	    {-1.0f, -1.0f, -1.0f, 0.0f, 1.0f, 2.0f, 3.0f, 4.0f,
	      4.0f,  5.0f,  6.0f, 7.0f, 8.0f, 9.0f, 9.0f, 9.0f};
	float tknots[/*T_NUMKNOTS*/] = {1.0f, 1.0f, 1.0f, 2.0f, 2.0f, 2.0f};

	// float ctlpoints[/*S_NUMPOINTS*/][/*T_NUMPOINTS*/][/*4*/] = {
	float ctlpoints[] = {
	       4f,2f,2f,1f, 4f,1.6f,2.5f,1f ,  4f,2f,3.0f,1f ,   
	       5f,4f,2f,1f ,  5f,4f,2.5f,1f ,  5f,4f,3.0f,1f ,
	       6f,5f,2f,1f ,  6f,5f,2.5f,1f ,  6f,5f,3.0f,1f ,
	       SQRT2*6f,SQRT2*6f,SQRT2*2f,SQRT2 ,
	      SQRT2*6f,SQRT2*6f,SQRT2*2.5f,SQRT2 ,
	      SQRT2*6f,SQRT2*6f,SQRT2*3.0f,SQRT2 , 
	       5.2f,6.7f,2f,1f ,  5.2f,6.7f,2.5f,1f ,  5.2f,6.7f,3.0f,1f ,
	       SQRT2*4f,SQRT2*6f,SQRT2*2f,SQRT2 ,
	      SQRT2*4f,SQRT2*6f,SQRT2*2.5f,SQRT2 ,
	      SQRT2*4f,SQRT2*6f,SQRT2*3.0f,SQRT2 ,
	       4f,5.2f,2f,1f ,  4f,4.6f,2.5f,1f ,  4f,5.2f,3.0f,1f ,
	       SQRT2*4f,SQRT2*6f,SQRT2*2f,SQRT2 ,
	      SQRT2*4f,SQRT2*6f,SQRT2*2.5f,SQRT2 ,
	      SQRT2*4f,SQRT2*6f,SQRT2*3.0f,SQRT2 ,
	       2.8f,6.7f,2f,1f ,  2.8f,6.7f,2.5f,1f ,  2.8f,6.7f,3.0f,1f ,
	       SQRT2*2f,SQRT2*6f,SQRT2*2f,SQRT2 ,
	      SQRT2*2f,SQRT2*6f,SQRT2*2.5f,SQRT2 ,
	      SQRT2*2f,SQRT2*6f,SQRT2*3.0f,SQRT2 ,
	       2f,5f,2f,1f ,  2f,5f,2.5f,1f ,  2f,5f,3.0f,1f ,
	       3f,4f,2f,1f ,  3f,4f,2.5f,1f ,  3f,4f,3.0f,1f ,
	       4f,2f,2f,1f ,  4f,1.6f,2.5f,1f ,  4f,2f,3.0f,1f
	};


	long theNurb;

        public gldemo(int w, int h)
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
		reshape(getSize().width, getSize().height);

	    float mat_ambient[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	    float mat_diffuse[] = { 1.0f, 0.2f, 1.0f, 1.0f };
	    float mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	    float mat_shininess[] = { 50.0f };

	    float light0_position[] = { 1.0f, 0.1f, 1.0f, 0.0f };
	    float light1_position[] = { -1.0f, 0.1f, 1.0f, 0.0f };

	    float lmodel_ambient[] = { 0.3f, 0.3f, 0.3f, 1.0f };

	    gl.glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	    gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	    gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	    gl.glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	    gl.glLightfv(GL_LIGHT0, GL_POSITION, light0_position);
	    gl.glLightfv(GL_LIGHT1, GL_POSITION, light1_position);
	    gl.glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);

	    gl.glEnable(GL_LIGHTING);
	    gl.glEnable(GL_LIGHT0);
	    gl.glEnable(GL_LIGHT1);
	    gl.glDepthFunc(GL_LESS);
	    gl.glEnable(GL_DEPTH_TEST);
	    gl.glEnable(GL_AUTO_NORMAL);

	    theNurb = glu.gluNewNurbsRenderer();

	    glu.gluNurbsProperty(theNurb, GLU_SAMPLING_TOLERANCE, 25.0f);
	    glu.gluNurbsProperty(theNurb, GLU_DISPLAY_MODE, GLU_FILL);
		glj.gljCheckGL();

		menu = new PopupMenu("Options");
		menu.add(VIEW_ROTATION);
		menu.add(VIEW_FRONT);
		menu.add(VIEW_TOP);
		menu.add(VIEW_BOTTOM);
		menu.addActionListener(this);
		add(menu);

                addMouseListener(this);
        }
    
        public void doCleanup()
        {
            removeMouseListener(this);
            menu.removeActionListener(this);
        }
    
        public void reshape(int width, int height)
        {
	    gl.glMatrixMode(GL_PROJECTION);
	    gl.glLoadIdentity();
	    glu.gluPerspective(90, (float)width/(float)height, 1, 700);

	    gl.glMatrixMode(GL_MODELVIEW);
	    gl.glLoadIdentity();
            gl.glViewport(0,0,width,height);
        }

        public void display()
        {
            	if (glj.gljMakeCurrent() == false) return;

		gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		gl.glMatrixMode(GL_MODELVIEW);
		gl.glLoadIdentity();

		gl.glTranslatef(0, 0, -7.5f);

		gl.glPushMatrix();

		gl.glTranslatef(-5f, -4.5f, -2.5f);

	        if(view==1)	
		{
			gl.glRotatef(90f, 1, 0, 0);
		} else if(view==2)	
		{
			gl.glRotatef(-90f, 1, 0, 0);
		}

		if(rotationOn)
		{
			rotate+=rotationStep;
			if(rotate>=180.0f || rotate<=0.0f)
				rotationStep*=-1.0f;

			gl.glRotatef(rotate, 0, 1, 0);
		} else rotate=0;

		    glu.gluBeginSurface(theNurb);
		    glu.gluNurbsSurface(theNurb,
			    S_NUMKNOTS, sknots,
			    T_NUMKNOTS, tknots,
			    4 * T_NUMPOINTS,
			    4,
			    ctlpoints,
			    S_ORDER, T_ORDER,
			    GL_MAP2_VERTEX_4);
		    glu.gluEndSurface(theNurb);

		gl.glPopMatrix();

		glj.gljSwap();
		glj.gljCheckGL();
		glj.gljFree();
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
            if (c.equals(VIEW_ROTATION))
            {
	    	rotationOn=!rotationOn;
            }
            else if (c.equals(VIEW_FRONT))
            {
	    	view=0;
            }
            else if (c.equals(VIEW_TOP))
            {
	    	view=1;
            }
            else if (c.equals(VIEW_BOTTOM))
            {
	    	view=2;
            }
            if (menu_showing)
            {
                menu_showing = false;
                setSuspended(save_suspended);
            }
        }
    


   }
}
