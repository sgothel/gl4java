/**
 * @(#) spectex.java
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

public class spectex extends SimpleGLAnimApplet1 
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
		Frame mainFrame = new Frame("spectex");

		spectex applet = new spectex();

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
   	private final String MENUE_0 = "1-pass lighting + texturing";
   	private final String MENUE_1 = "specular lighting";
   	private final String MENUE_2 = "diffuse lighting + texturing";
   	private final String MENUE_3 = "2-pass lighting + texturing";
   	private final String MENUE_4 = "OpenGL 1.2f separate specular";

        final float M_PI   = 3.14159265f;
        final float M_PI_2 = 1.57079632f;
	int view = 0; /* 0 = front, 1 = top, 2 = bottom */

	long Quadric;
	int Sphere;
	float LightPos[/*4*/] = {10.0f, 10.0f, 10.0f, 1.0f};
	float Delta = 1.0f;
	int Mode = 0;

	/*static float Blue[4] = {0.0f, 0.0f, 1.0f, 1.0f};*/
	/*static float Gray[4] = {0.5f, 0.5f, 0.5f, 1.0f};*/
	float Black[/*4*/] = {0.0f, 0.0f, 0.0f, 1.0f};
	float White[/*4*/] = {1.0f, 1.0f, 1.0f, 1.0f};

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
		   gl.glEnable(GL_LIGHTING);
		   gl.glEnable(GL_LIGHT0);
		   gl.glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, 0);
		   gl.glLightModelfv(GL_LIGHT_MODEL_AMBIENT, Black);

		   gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, White);
		   gl.glMaterialfv(GL_FRONT, GL_SPECULAR, White);
		   gl.glMaterialf(GL_FRONT, GL_SHININESS, 20.0f);

		   /* Actually, these are set again later */
		   gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, White);
		   gl.glLightfv(GL_LIGHT0, GL_SPECULAR, White);

		   Quadric = glu.gluNewQuadric();
		   glu.gluQuadricTexture( Quadric, GL_TRUE );

		   Sphere= gl.glGenLists(1);
		   gl.glNewList( Sphere, GL_COMPILE );
		   glu.gluSphere( Quadric, 1.0f, 24, 24 );
		   gl.glEndList();

		   gl.glEnable(GL_DEPTH_TEST);
		   gl.glEnable(GL_CULL_FACE);

   		   // byte texImage[64][64][3];
   		   byte texImage[] = new byte[64 * 64 * 3];
		   int i,j;

		   for (i=0;i<64;i++) {
		      for (j=0;j<64;j++) {
			 int k = ((i>>3)&1) ^ ((j>>3)&1);
			 texImage[i*64*3 + j*3 + 0] = (byte)(255*k);
			 texImage[i*64*3 + j*3 + 1] = (byte)(255*(1-k));
			 texImage[i*64*3 + j*3 + 2] = (byte)(0);
		      }
		   }

		   gl.glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
		   gl.glTexImage2D( GL_TEXTURE_2D,
				 0,
				 3,
				 64, 64,
				 0,
				 GL_RGB, GL_UNSIGNED_BYTE,
				 texImage );
		   gl.glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
		   gl.glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
		   gl.glEnable(GL_TEXTURE_2D);

		   gl.glBlendFunc(GL_ONE, GL_ONE);

		glj.gljCheckGL();

		reshape(getSize().width, getSize().height);

		glj.gljCheckGL();

		menu = new PopupMenu("Options");
		menu.add(MENUE_0);
		menu.add(MENUE_1);
		menu.add(MENUE_2);
		menu.add(MENUE_3);
		menu.add(MENUE_4);
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
		   gl.glViewport( 0, 0, width, height );
		   gl.glMatrixMode( GL_PROJECTION );
		   gl.glLoadIdentity();
		   gl.glFrustum( -1.0f, 1.0f, -1.0f, 1.0f, 5.0f, 25.0f );
		   gl.glMatrixMode( GL_MODELVIEW );
		   gl.glLoadIdentity();
		   gl.glTranslatef( 0.0f, 0.0f, -12.0f );
        }

        public void display()
        {
            	if (glj.gljMakeCurrent() == false) return;

		   gl.glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

		   gl.glLightfv(GL_LIGHT0, GL_POSITION, LightPos);

		   gl.glPushMatrix();
		   gl.glRotatef(90.0f, 1.0f, 0.0f, 0.0f);

		   if (Mode==0) {
		      /* Typical method: diffuse + specular + texture */
		      gl.glEnable(GL_TEXTURE_2D);
		      gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, White);  /* enable diffuse */
		      gl.glLightfv(GL_LIGHT0, GL_SPECULAR, White);  /* enable specular */
		      //gl.glLightModeli(GL_LIGHT_MODEL_COLOR_CONTROL, GL_SINGLE_COLOR);
		      // glj.gljCheckGL();
		      gl.glCallList(Sphere);
		   }
		   else if (Mode==1) {
		      /* just specular highlight */
		      gl.glDisable(GL_TEXTURE_2D);
		      gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, Black);  /* disable diffuse */
		      gl.glLightfv(GL_LIGHT0, GL_SPECULAR, White);  /* enable specular */
		      //gl.glLightModeli(GL_LIGHT_MODEL_COLOR_CONTROL, GL_SINGLE_COLOR);
		      gl.glCallList(Sphere);
		   }
		   else if (Mode==2) {
		      /* diffuse textured */
		      gl.glEnable(GL_TEXTURE_2D);
		      gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, White);  /* enable diffuse */
		      gl.glLightfv(GL_LIGHT0, GL_SPECULAR, Black);  /* disable specular */
		      //gl.glLightModeli(GL_LIGHT_MODEL_COLOR_CONTROL, GL_SINGLE_COLOR);
		      gl.glCallList(Sphere);
		   }
		   else if (Mode==3) {
		      /* 2-pass: diffuse textured then add specular highlight*/
		      gl.glEnable(GL_TEXTURE_2D);
		      gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, White);  /* enable diffuse */
		      gl.glLightfv(GL_LIGHT0, GL_SPECULAR, Black);  /* disable specular */
		      //gl.glLightModeli(GL_LIGHT_MODEL_COLOR_CONTROL, GL_SINGLE_COLOR);
		      gl.glCallList(Sphere);
		      /* specular highlight */
		      gl.glDepthFunc(GL_EQUAL);  /* redraw same pixels */
		      gl.glDisable(GL_TEXTURE_2D);
		      gl.glEnable(GL_BLEND);  /* add */
		      gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, Black);  /* disable diffuse */
		      gl.glLightfv(GL_LIGHT0, GL_SPECULAR, White);  /* enable specular */
		      gl.glCallList(Sphere);
		      gl.glDepthFunc(GL_LESS);
		      gl.glDisable(GL_BLEND);
		   }
		   else if (Mode==4) {
		      /* OpenGL 1.2f's separate diffuse and specular color */
		      gl.glEnable(GL_TEXTURE_2D);
		      gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, White);  /* enable diffuse */
		      gl.glLightfv(GL_LIGHT0, GL_SPECULAR, White);  /* enable specular */
		      //gl.glLightModeli(GL_LIGHT_MODEL_COLOR_CONTROL, GL_SEPARATE_SPECULAR_COLOR);
		      gl.glCallList(Sphere);
		   }

		   gl.glPopMatrix();

		glj.gljSwap();
		glj.gljCheckGL();
		glj.gljFree();

	   	LightPos[0] += Delta;
	   	if (LightPos[0]>15.0f)
			Delta = -1.0f;
	   	else if (LightPos[0]<-15.0f)
			Delta = 1.0f;

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
	    	Mode=0;
            }
            else if (c.equals(MENUE_1))
            {
	    	Mode=1;
            }
            else if (c.equals(MENUE_2))
            {
	    	Mode=2;
            }
            else if (c.equals(MENUE_3))
            {
	    	Mode=3;
            }
            else if (c.equals(MENUE_4))
            {
	    	Mode=4;
            }
            if (menu_showing)
            {
                menu_showing = false;
                setSuspended(save_suspended);
            }
        }
    


   }
}
