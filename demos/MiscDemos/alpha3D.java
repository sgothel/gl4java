/**
 * @(#) alpha3D.java
 * @(#) author: Silicon Graphics, Inc. (converted to Java by Sven Goethel)
 */

/*
 *  This program demonstrates lots of material properties.
 *  A single light source illuminates the objects.
 */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;
import gl4java.*;
import gl4java.awt.*;
import gl4java.drawable.*;
import gl4java.applet.SimpleGLAnimApplet1;

import gl4java.utils.glut.*;

public class alpha3D extends SimpleGLAnimApplet1 
{
	static final float MAXZ = 8.0f;
	static final float MINZ = -8.0f;
	static final float ZINC = 0.4f;

        /* Initialize the applet */


	public void init()
	{
	super.init();
        Dimension d = getSize();
	GLCapabilities glCaps = new GLCapabilities();
	glCaps.setAlphaBits(8);
	glCaps.setAccumAlphaBits(8);

        gl4java.drawable.GLDrawableFactory df =
		gl4java.drawable.GLDrawableFactory.getFactory();
 
	if(df instanceof gl4java.drawable.SunJDK13GLDrawableFactory)
	{
	    gl4java.drawable.SunJDK13GLDrawableFactory sdf =
	      (gl4java.drawable.SunJDK13GLDrawableFactory)df;
	    canvas = new alpha3DCanvas
	      (sdf.getGraphicsConfiguration(glCaps), glCaps, d.width, d.height);
	} else {
	    canvas = new alpha3DCanvas(glCaps, d.width, d.height);
	}

        add("Center", canvas);
	}


	public static void main( String args[] ) {
		alpha3D applet = 
		         new alpha3D();

		Frame f = new Frame("alpha3D");

		GLContext.gljNativeDebug = true;
		GLContext.gljThreadDebug = false;
		GLContext.gljClassDebug = true;

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
		f.setVisible(true);
		Insets i = f.getInsets();
		f.setBounds(0,0,
			    ps.width+i.left+i.right, 
		            ps.height+i.top+i.bottom);
		f.setVisible(true);
	}
        /* Local GLCanvas extension class */


    private class alpha3DCanvas extends GLAnimCanvas
        implements MouseListener, ActionListener
    {
        private PopupMenu menu = null;
        private boolean menu_showing = false;
        private boolean save_suspended = false;
   	private final String MENUE_0 = "Alpha Mode";
   	private final String MENUE_1 = "Real Mode";

	GLUTFunc glut = null;

	float solidZ = MAXZ;
	float transparentZ = MINZ;
	int sphereList, cubeList;

        public alpha3DCanvas(GraphicsConfiguration g, GLCapabilities glCaps,
			     int w, int h)
        {
            super(g, glCaps, w, h);
            setAnimateFps(30.0);
        }
    
        public alpha3DCanvas(GLCapabilities glCaps, int w, int h)
        {
            super(glCaps, w, h);
            setAnimateFps(30.0);
        }
    
	public void init()
	{
	    glut = new GLUTFuncLightImpl(gl, glu);
	
            reshape(getSize().width, getSize().height);

	   float mat_specular[] = { 1.0f, 1.0f, 1.0f, 0.15f };
	   float mat_shininess[] = { 100.0f };
	   float position[] = { 0.5f, 0.5f, 1.0f, 0.0f };

	   gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	   gl.glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	   gl.glLightfv(GL_LIGHT0, GL_POSITION, position);

	   gl.glEnable(GL_LIGHTING);
	   gl.glEnable(GL_LIGHT0);
	   gl.glEnable(GL_DEPTH_TEST);

	   sphereList = gl.glGenLists(1);
	   gl.glNewList(sphereList, GL_COMPILE);
	      glut.glutSolidSphere (0.4f, 16, 16);
	   gl.glEndList();

	   cubeList = gl.glGenLists(1);
	   gl.glNewList(cubeList, GL_COMPILE);
	      glut.glutSolidCube (0.6f);
	   gl.glEndList();

		menu = new PopupMenu("Options");
		menu.add(MENUE_0);
		menu.add(MENUE_1);
		menu.addActionListener(this);
		add(menu);

                addMouseListener(this);
	}

	public void display()
	{
            if (glj.gljMakeCurrent() == false) return;

	   float mat_solid[] = { 0.75f, 0.75f, 0.0f, 1.0f };
	   float mat_zero[] = { 0.0f, 0.0f, 0.0f, 1.0f };
	   float mat_transparent[] = { 0.0f, 0.8f, 0.8f, 0.6f };
	   float mat_emission[] = { 0.0f, 0.3f, 0.3f, 0.6f };

	   gl.glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	   gl.glPushMatrix ();
	      gl.glTranslatef (-0.15f, -0.15f, solidZ);
	      gl.glMaterialfv(GL_FRONT, GL_EMISSION, mat_zero);
	      gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_solid);
	      gl.glCallList (sphereList);
	   gl.glPopMatrix ();

	   gl.glPushMatrix ();
	      gl.glTranslatef (0.15f, 0.15f, transparentZ);
	      gl.glRotatef (15.0f, 1.0f, 1.0f, 0.0f);
	      gl.glRotatef (30.0f, 0.0f, 1.0f, 0.0f);
	      gl.glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	      gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_transparent);
	      gl.glEnable (GL_BLEND);
	      gl.glDepthMask (GL_FALSE);
	      gl.glBlendFunc (GL_SRC_ALPHA, GL_ONE);
	      gl.glCallList (cubeList);
	      gl.glDepthMask (GL_TRUE);
	      gl.glDisable (GL_BLEND);
	   gl.glPopMatrix ();

	  glj.gljSwap();
	  glj.gljCheckGL();
	  glj.gljFree();

	   animate();
	}

	public void reshape(int w, int h)
	{
	   gl.glViewport(0, 0, (int) w, (int) h);
	   gl.glMatrixMode(GL_PROJECTION);
	   gl.glLoadIdentity();
	   if (w <= h)
	      gl.glOrtho (-1.5f, 1.5f, -1.5f*(float)h/(float)w,
		       1.5f*(float)h/(float)w, -10.0f, 10.0f);
	   else
	      gl.glOrtho (-1.5f*(float)w/(float)h,
		       1.5f*(float)w/(float)h, -1.5f, 1.5f, -10.0f, 10.0f);
	   gl.glMatrixMode(GL_MODELVIEW);
	   gl.glLoadIdentity();
	}

	void animate()
	{
	   if (solidZ <= MINZ || transparentZ >= MAXZ)
	      setSuspended(true);
	   else {
	      solidZ -= ZINC;
	      transparentZ += ZINC;
	   }
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
            if (c.equals(MENUE_0))
            {
		 solidZ = MAXZ;
		 transparentZ = MINZ;
	         setSuspended(false);
		 return ;
            }
            else if (c.equals(MENUE_1))
            {
		 solidZ = MAXZ;
		 transparentZ = MINZ;
	         setSuspended(true);
		 repaint();
            }
            if (menu_showing)
            {
                menu_showing = false;
                setSuspended(save_suspended);
            }
        }
   }
}
