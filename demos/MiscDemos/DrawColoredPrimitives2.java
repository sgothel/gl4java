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

public class DrawColoredPrimitives2 extends SimpleGLAnimApplet1 
{

    public void init()
    {
	super.init();
        Dimension d = getSize();
        canvas = new gldemo(d.width, d.height);
        add("Center", canvas);
    }

	public static void main( String args[] ) {
		DrawColoredPrimitives2 applet = 
		         new DrawColoredPrimitives2();

		Frame f = new Frame("DrawColoredPrimitives2");

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
		//f.setVisible(false);
		Insets i = f.getInsets();
		f.setBounds(0,0,
			    ps.width+i.left+i.right, 
		            ps.height+i.top+i.bottom);
		f.setVisible(true);
	}

    private class gldemo extends GLAnimCanvas
        implements MouseListener, ActionListener
    {
        private PopupMenu menu = null;
        private boolean menu_showing = false;
        private boolean save_suspended = false;
        private final String VIEW_FRONT  = "View Front";
        private final String VIEW_TOP    = "View Top";
        private final String VIEW_BOTTOM = "View Bottom";

        final float M_PI   = 3.14159265f;
        final float M_PI_2 = 1.57079632f;
	float rotate;
	float rotationStep = 1;
	int view = 0; /* 0 = front, 1 = top, 2 = bottom */

	float LightAmbient[]  = { 0.75f, 0.75f, 0.75f, 1.5f};
	float LightDiffuse[]  = { 1.0f, 1.0f, 1.0f, 0.9f};
	float LightSpecular[] = { 0.8f, 0.8f, 0.8f, 1.0f};

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

		gl.glEnable(GL_LIGHT0);
		gl.glLightfv(GL_LIGHT0, GL_AMBIENT, LightAmbient);
		gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, LightDiffuse);
		gl.glLightfv(GL_LIGHT0, GL_SPECULAR, LightSpecular);

		glj.gljCheckGL();

		menu = new PopupMenu("Options");
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
		glu.gluPerspective(45, (float)width/(float)height, 1, 700);
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

		gl.glTranslatef(0, 0, -5);

	        if(view==1)	
		{
			gl.glRotatef(90f, 1, 0, 0);
		} else if(view==2)	
		{
			gl.glRotatef(-90f, 1, 0, 0);
		}

		gl.glColor4f(1, 1, 1, 1);

		rotate+=rotationStep;
		if(rotate>=180.0f || rotate<=0.0f)
			rotationStep*=-1.0f;

		gl.glRotatef(rotate, 0, 1, 0);


		gl.glBegin(GL_POLYGON);
			gl.glNormal3f( 1, 0, 0);
			
			// top vertex
			gl.glColor4f(1, 0, 0, 1); gl.glVertex3f( 0,  1,  0);
			// bottom left vertex
			gl.glColor4f(0, 1, 0, 1); gl.glVertex3f(-1, -1,  1);
			// bottom right vertex
			gl.glColor4f(0, 0, 1, 1); gl.glVertex3f( 1, -1,  1);
		gl.glEnd();

		gl.glBegin(GL_POLYGON);
			gl.glNormal3f( 1, 0, 0);
			
			// top vertex
			gl.glColor4f(1, 0, 0, 1); gl.glVertex3f( 0,  1,  0);
			// bottom left vertex
			gl.glColor4f(0, 1, 0, 1); gl.glVertex3f( 1, -1, -1);
			// bottom right vertex
			gl.glColor4f(0, 0, 1, 1); gl.glVertex3f( 1, -1,  1);
		gl.glEnd();

		gl.glBegin(GL_POLYGON);
			gl.glNormal3f( 1, 0, 0);
			
			// top vertex
			gl.glColor4f(1, 0, 0, 1); gl.glVertex3f( 0,  1,  0);
			// bottom left vertex
			gl.glColor4f(0, 1, 0, 1); gl.glVertex3f( 1, -1, -1);
			// bottom right vertex
			gl.glColor4f(0, 0, 1, 1); gl.glVertex3f(-1, -1, -1);
		gl.glEnd();

		gl.glBegin(GL_POLYGON);
			gl.glNormal3f( 1, 0, 0);
			
			// top vertex
			gl.glColor4f(1, 0, 0, 1); gl.glVertex3f( 0,  1,  0);
			// bottom left vertex
			gl.glColor4f(0, 1, 0, 1); gl.glVertex3f(-1, -1,  1);
			// bottom right vertex
			gl.glColor4f(0, 0, 1, 1); gl.glVertex3f(-1, -1, -1);
		gl.glEnd();


		// bottom square polygon
		gl.glBegin(GL_POLYGON);
			gl.glNormal3f( 1, 0, 0);
			
			gl.glColor4f(0, 0, 1, 1); gl.glVertex3f( 1, -1,  1);
			gl.glColor4f(0, 1, 0, 1); gl.glVertex3f(-1, -1,  1);
			gl.glColor4f(0, 0, 1, 1); gl.glVertex3f(-1, -1, -1);
			gl.glColor4f(0, 1, 0, 1); gl.glVertex3f( 1, -1, -1);
		gl.glEnd();


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
            if (c.equals(VIEW_FRONT))
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
