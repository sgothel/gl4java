/**
 * Lesson5.java
 *
 * Author: Darren Hodges
 * Date: 16/12/1999
 *
 * Port of the NeHe OpenGL Tutorial (Lesson 5: "Solid Objects")
 * to Java using the GL4Java interface to OpenGL.
 *
 */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;

//GL4Java classes
import gl4java.GLContext;
import gl4java.awt.GLAnimCanvas;


public class Lesson5 extends Applet
{
    //Our rendering canvas
   	//We are using GLAnimCanvas because we want the canvas
   	//to be constantly redrawn
    renderCanvas canvas = null;


	/**
     * void init()
     *
     * Initialise the applet.
     */
	public void init()
	{
        //We will use BorderLayout to layout the applet components
        setLayout(new BorderLayout());
        
        //Create our canvas and add it to the center of the applet
        canvas = new renderCanvas(getSize().width, getSize().height);
	canvas.requestFocus();
        add("Center", canvas);
	}
	
	
	/**
     * void start()
     *
     * Start the applet.
     */
	public void start()
    {
        //Start animating the canvas
        canvas.start();
    }

	
	/**
     * void stop()
     *
     * Stop the applet.
     */
    public void stop()
    {
        //Stop animating the canvas
        canvas.stop();
    }
    
    
    /**
     * void destroy()
     *
     * Destroy the applet.
     */
    public void destroy()
    {
        //Stop animating the canvas
        canvas.stop();
        //Destroy the canvas
        canvas.destroy();
    }
    


    private class renderCanvas extends GLAnimCanvas
    	implements KeyListener, MouseListener
    {
    	//Angle For The Pyramid
    	float rtri = 0.0f;
    	//Angle For The Cube
		float rquad = 0.0f;
	
	
        /**
         * renderCanvas(int w, int h)
         *
         * Constructor.
         */
        public renderCanvas(int w, int h)
        {
            super(w, h);
            
            //Registers this canvas to process keyboard events
        	addKeyListener(this);
                addMouseListener(this);    
        }
    
        
        /**
         * void preInit()
         *
         * Called just BEFORE the GL-Context is created.
         */
        public void preInit()
        {
            //We want double buffering
            doubleBuffer = true;
            //But we dont want stereo view
            stereoView = false;
        }
    
    
        /**
         * void init()
         *
         * Called just AFTER the GL-Context is created.
         */
        public void init()
        {
            //This Will Clear The Background Color To Black
			gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

			//Enables Clearing Of The Depth Buffer
			gl.glClearDepth(1.0);
			//The Type Of Depth Test To Do
			gl.glDepthFunc(GL_LESS);
			//Enables Depth Testing
			gl.glEnable(GL_DEPTH_TEST);

			//Enables Smooth Color Shading
			gl.glShadeModel(GL_SMOOTH);
			//Select The Projection Matrix
			gl.glMatrixMode(GL_PROJECTION);
			//Reset The Projection Matrix
			gl.glLoadIdentity();
			//Calculate The Aspect Ratio Of The Window
			glu.gluPerspective(45.0f, (float)getSize().width / (float)getSize().height, 0.1f, 100.0f);
			//Select The Modelview Matrix
			gl.glMatrixMode(GL_MODELVIEW);
        }
    
    
        /**
         * void destroy()
         *
         * Destroy the canvas.
         */
        public void destroy()
        {
            //Destroy the GLContext
            cvsDispose();
        }
    
		
		/**
		 * void reshape(int width, int height)
		 *
		 * Called after the first paint command.
		 */
        public void reshape(int width, int height)
        {
            //Reset The Current Viewport And Perspective Transformation
			gl.glViewport(0, 0, width, height);

			//Select The Projection Matrix
			gl.glMatrixMode(GL_PROJECTION);
			//Reset The Projection Matrix
			gl.glLoadIdentity();
			//Calculate The Aspect Ratio Of The Window
			glu.gluPerspective(45.0f, (float)getSize().width / (float)getSize().height, 0.1f, 100.0f);
			//Select The Modelview Matrix
			gl.glMatrixMode(GL_MODELVIEW);
        }

        
        /**
         * void display()
         *
         * Draw to the canvas.
         */
        public void display()
        {
            //Ensure GL is initialised correctly
            if (glj.gljMakeCurrent(true) == false)
            	return;
            
            //Clear The Screen And The Depth Buffer
			gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			//Reset The View
			gl.glLoadIdentity();

			//Move Left 1.5 Units And Into The Screen 8.0
			gl.glTranslatef(-1.5f, 0.0f, -8.0f);
			
			//Rotate The Pyramid On Its Y axis
			gl.glRotatef(rtri, 0.0f, 1.0f, 0.0f);
			
			//Draw pyramid
			gl.glBegin(GL_POLYGON);
				gl.glColor3f(1.0f, 0.0f, 0.0f);		//Red
				gl.glVertex3f(0.0f, 1.0f, 0.0f);	//Top Of Triangle (Front)
				gl.glColor3f(0.0f, 1.0f, 0.0f);		//Green
				gl.glVertex3f(-1.0f, -1.0f, 1.0f);	//Left Of Triangle (Front)
				gl.glColor3f(0.0f, 0.0f, 1.0f);		//Blue
				gl.glVertex3f(1.0f, -1.0f, 1.0f);	//Right Of Triangle (Front)
					
				gl.glColor3f(1.0f, 0.0f, 0.0f);		//Red
				gl.glVertex3f(0.0f, 1.0f, 0.0f);	//Top Of Triangle (Right)
				gl.glColor3f(0.0f, 0.0f, 1.0f);		//Blue
				gl.glVertex3f(1.0f, -1.0f, 1.0f);	//Left Of Triangle (Right)
				gl.glColor3f(0.0f, 1.0f, 0.0f);		//Green
				gl.glVertex3f(1.0f, -1.0f, -1.0f);	//Right Of Triangle (Right)
					
				gl.glColor3f(1.0f,0.0f,0.0f);		//Red
				gl.glVertex3f(0.0f, 1.0f, 0.0f);	//Top Of Triangle (Back)
				gl.glColor3f(0.0f, 1.0f, 0.0f);		//Green
				gl.glVertex3f(1.0f, -1.0f, -1.0f);	//Left Of Triangle (Back)
				gl.glColor3f(0.0f, 0.0f, 1.0f);		//Blue
				gl.glVertex3f(-1.0f, -1.0f, -1.0f);	//Right Of Triangle (Back)
					
				gl.glColor3f(1.0f, 0.0f, 0.0f);		//Red
				gl.glVertex3f(0.0f, 1.0f, 0.0f);	//Top Of Triangle (Left)
				gl.glColor3f(0.0f, 0.0f, 1.0f);		//Blue
				gl.glVertex3f(-1.0f, -1.0f, -1.0f);	//Left Of Triangle (Left)
				gl.glColor3f(0.0f, 1.0f, 0.0f);		//Green
				gl.glVertex3f(-1.0f, -1.0f, 1.0f);	//Right Of Triangle (Left)
			gl.glEnd();

			//Reset The View
			gl.glLoadIdentity();			
			
			//Move right and into the screen
			gl.glTranslatef(1.5f, 0.0f, -8.0f);
			
			//Rotate The Cube On X, Y & Z
			gl.glRotatef(rquad, 1.0f, 1.0f, 1.0f);

			//Draw cube
			gl.glBegin(GL_QUADS);
				gl.glColor3f(0.0f, 1.0f, 0.0f);		//Set The Color To Blue
				gl.glVertex3f(1.0f, 1.0f, -1.0f);	//Top Right Of The Quad (Top)
				gl.glVertex3f(-1.0f, 1.0f, -1.0f);	//Top Left Of The Quad (Top)
				gl.glVertex3f(-1.0f, 1.0f, 1.0f);	//Bottom Left Of The Quad (Top)
				gl.glVertex3f(1.0f, 1.0f, 1.0f);	//Bottom Right Of The Quad (Top)
					
				gl.glColor3f(1.0f, 0.5f, 0.0f);		//Set The Color To Orange
				gl.glVertex3f(1.0f, -1.0f, 1.0f);	//Top Right Of The Quad (Bottom)
				gl.glVertex3f(-1.0f, -1.0f, 1.0f);	//Top Left Of The Quad (Bottom)
				gl.glVertex3f(-1.0f, -1.0f, -1.0f);	//Bottom Left Of The Quad (Bottom)
				gl.glVertex3f(1.0f, -1.0f, -1.0f);	//Bottom Right Of The Quad (Bottom)
					
				gl.glColor3f(1.0f, 0.0f, 0.0f);		//Set The Color To Red
				gl.glVertex3f(1.0f, 1.0f, 1.0f);	//Top Right Of The Quad (Front)
				gl.glVertex3f(-1.0f, 1.0f, 1.0f);	//Top Left Of The Quad (Front)
				gl.glVertex3f(-1.0f, -1.0f, 1.0f);	//Bottom Left Of The Quad (Front)
				gl.glVertex3f(1.0f, -1.0f, 1.0f);	//Bottom Right Of The Quad (Front)
					
				gl.glColor3f(1.0f, 1.0f, 0.0f);		//Set The Color To Yellow
				gl.glVertex3f(1.0f, -1.0f, -1.0f);	//Top Right Of The Quad (Back)
				gl.glVertex3f(-1.0f, -1.0f, -1.0f);	//Top Left Of The Quad (Back)
				gl.glVertex3f(-1.0f, 1.0f, -1.0f);	//Bottom Left Of The Quad (Back)
				gl.glVertex3f(1.0f, 1.0f, -1.0f);	//Bottom Right Of The Quad (Back)
					
				gl.glColor3f(0.0f, 0.0f, 1.0f);		//Set The Color To Blue
				gl.glVertex3f(-1.0f, 1.0f, 1.0f);	//Top Right Of The Quad (Left)
				gl.glVertex3f(-1.0f, 1.0f, -1.0f);	//Top Left Of The Quad (Left)
				gl.glVertex3f(-1.0f, -1.0f, -1.0f);	//Bottom Left Of The Quad (Left)
				gl.glVertex3f(-1.0f, -1.0f, 1.0f);	//Bottom Right Of The Quad (Left)
					
				gl.glColor3f(1.0f, 0.0f, 1.0f);		//Set The Color To Violet
				gl.glVertex3f(1.0f, 1.0f, -1.0f);	//Top Right Of The Quad (Right)
				gl.glVertex3f(1.0f, 1.0f, 1.0f);	//Top Left Of The Quad (Right)
				gl.glVertex3f(1.0f, -1.0f, 1.0f);	//Bottom Left Of The Quad (Right)
				gl.glVertex3f(1.0f, -1.0f, -1.0f);	//Bottom Right Of The Quad (Right)
			gl.glEnd();
			
			//Increase The Rotation Variable For The Pyramid
			rtri += 0.2f;
			//Decrease The Rotation Variable For The Cube
			rquad -= 0.15f;
            
            //Swap buffers
            glj.gljSwap();
            glj.gljFree();
        }
        
        
        /**
     	 * void keyTyped(KeyEvent e)
     	 *
     	 * Invoked when a key has been typed. This event occurs when a key press is followed by a key release. 
     	 */
    	public void keyTyped(KeyEvent e)
		{
			//We are not handling any keyboard events yet
		}


 		/**
 	 	 * void keyPressed(KeyEvent e)
 	 	 *
 	 	 * Invoked when a key has been pressed.
 	 	 */
 		public void keyPressed(KeyEvent e)
		{
			//We are not handling any keyboard events yet
		}


		/**
	 	 * void keyReleased(KeyEvent e)
	 	 *
	 	 * Invoked when a key has been released. 
	 	 */
		public void keyReleased(KeyEvent e)
		{
			//We are not handling any keyboard events yet
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

        public void mouseExited( MouseEvent evt )
        { }
        public void mousePressed( MouseEvent evt )
        { }
        public void mouseReleased( MouseEvent evt )                                     
	{ }
        public void mouseClicked( MouseEvent evt )
        { 
            Component comp = evt.getComponent();
	    if( comp.equals(this ) )
	    {
		requestFocus();
	    }
	}

    }
}
