/**
 * Lesson7.java
 *
 * Author: Darren Hodges
 * Date: 17/12/1999
 *
 * Port of the NeHe OpenGL Tutorial (Lesson 7: "Texture Filters, Lighting & Keyboard Control")
 * to Java using the GL4Java interface to OpenGL.
 *
 * Note: The MipMapping code is only available in GL4Java 2.1.2.1 and later!
 *
 */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;

//GL4Java classes
import gl4java.GLContext;
import gl4java.awt.GLAnimCanvas;
import gl4java.utils.textures.*;


public class Lesson7 extends Applet
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
    	boolean	light = true; //Lighting ON/OFF
    	boolean lp = false; //L Pressed?
		boolean fp = false; //F Pressed?

   		float xrot = 0.0f;		//X Rotation
		float yrot = 0.0f;		//Y Rotation
		float xspeed = 0.0f;	//X Rotation Speed
		float yspeed = 0.0f;	//Y Rotation Speed
	
		float z = -8.0f;	//Depth Into The Screen
		
		//Ambient light
		float[] LightAmbient = { 0.5f, 0.5f, 0.5f, 1.0f };

		//Diffuse light
		float[] LightDiffuse = { 1.0f, 1.0f, 1.0f, 1.0f };
	
		//Light position
		float[] LightPosition = { 0.0f, 0.0f, 2.0f, 1.0f };	
	
		int filter = 0; //Which Filter To Use
	
		int[] texture = new int[3]; //Storage for 3 textures
		
		
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
         * void LoadGLTextures()
         *
         * Load textures.
         */
        public void LoadGLTextures()
    	{
    		PngTextureLoader texLoader = new PngTextureLoader(gl, glu);
    		texLoader.readTexture(getCodeBase(), "data/crate.png");
    		
    		if(texLoader.isOk())
    		{
    			//Create Nearest Filtered Texture
				gl.glGenTextures(3, texture);
				gl.glBindTexture(GL_TEXTURE_2D, texture[0]);
			
				gl.glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
				gl.glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
			
				gl.glTexImage2D(GL_TEXTURE_2D,
						 		0,
						 		3,
						 		texLoader.getImageWidth(),
						 		texLoader.getImageHeight(),
						 		0,
						 		GL_RGB,
						 		GL_UNSIGNED_BYTE,
						 		texLoader.getTexture());
						 	
				//Create Linear Filtered Texture
				gl.glBindTexture(GL_TEXTURE_2D, texture[1]);
				gl.glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
				gl.glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			
				gl.glTexImage2D(GL_TEXTURE_2D,
						 		0,
						 		3,
						 		texLoader.getImageWidth(),
						 		texLoader.getImageHeight(),
						 		0,
						 		GL_RGB,
						 		GL_UNSIGNED_BYTE,
						 		texLoader.getTexture());
			 
				//Create MipMapped Texture (Only with GL4Java 2.1.2.1 and later!)
				gl.glBindTexture(GL_TEXTURE_2D, texture[2]);
				gl.glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
				gl.glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_NEAREST);
			
				glu.gluBuild2DMipmaps(GL_TEXTURE_2D,
								  	  3,
								  	  texLoader.getImageWidth(),
						 			  texLoader.getImageHeight(),								  	  GL_RGB,
								  	  GL_UNSIGNED_BYTE,
								  	  texLoader.getTexture());
    		}
    	}	
    		
        
        /**
         * void init()
         *
         * Called just AFTER the GL-Context is created.
         */
        public void init()
        {
            //Load The Texture(s)
            LoadGLTextures();
			//Enable Texture Mapping
			gl.glEnable(GL_TEXTURE_2D);
            
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
			
			//Lights
			gl.glLightfv(GL_LIGHT1, GL_AMBIENT, LightAmbient);
			gl.glLightfv(GL_LIGHT1, GL_DIFFUSE, LightDiffuse);
			gl.glLightfv(GL_LIGHT1, GL_POSITION, LightPosition);

			//Enable light
			gl.glEnable(GL_LIGHT1);
			gl.glEnable(GL_LIGHTING);
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
			
			//Move into the screen
			gl.glTranslatef(0.0f, 0.0f, z);
			
			//Rotate On The X Axis
			gl.glRotatef(xrot,1.0f, 0.0f, 0.0f);
			//Rotate On The Y Axis
			gl.glRotatef(yrot, 0.0f, 1.0f, 0.0f);

			//Select texture
			gl.glBindTexture(GL_TEXTURE_2D, texture[filter]);
			
			gl.glBegin(GL_QUADS);
				//Front Face
				gl.glNormal3f(0.0f, 0.0f, 1.0f);
				gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f,  1.0f);	//Bottom Left Of The Texture and Quad
				gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f( 1.0f, -1.0f,  1.0f);	//Bottom Right Of The Texture and Quad
				gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f( 1.0f,  1.0f,  1.0f);	//Top Right Of The Texture and Quad
				gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f(-1.0f,  1.0f,  1.0f);	//Top Left Of The Texture and Quad
				//Back Face
				gl.glNormal3f(0.0f, 0.0f, -1.0f);
				gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f, -1.0f);	//Bottom Right Of The Texture and Quad
				gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f(-1.0f,  1.0f, -1.0f);	//Top Right Of The Texture and Quad
				gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f( 1.0f,  1.0f, -1.0f);	//Top Left Of The Texture and Quad
				gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f( 1.0f, -1.0f, -1.0f);	//Bottom Left Of The Texture and Quad
				//Top Face
				gl.glNormal3f(0.0f, 1.0f, 0.0f);
				gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f(-1.0f,  1.0f, -1.0f);	//Top Left Of The Texture and Quad
				gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f(-1.0f,  1.0f,  1.0f);	//Bottom Left Of The Texture and Quad
				gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f( 1.0f,  1.0f,  1.0f);	//Bottom Right Of The Texture and Quad
				gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f( 1.0f,  1.0f, -1.0f);	//Top Right Of The Texture and Quad
				//Bottom Face
				gl.glNormal3f(0.0f, -1.0f, 0.0f);
				gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f(-1.0f, -1.0f, -1.0f);	//Top Right Of The Texture and Quad
				gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f( 1.0f, -1.0f, -1.0f);	//Top Left Of The Texture and Quad
				gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f( 1.0f, -1.0f,  1.0f);	//Bottom Left Of The Texture and Quad
				gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f,  1.0f);	//Bottom Right Of The Texture and Quad
				//Right face
				gl.glNormal3f(1.0f, 0.0f, 0.0f);
				gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f( 1.0f, -1.0f, -1.0f);	//Bottom Right Of The Texture and Quad
				gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f( 1.0f,  1.0f, -1.0f);	//Top Right Of The Texture and Quad
				gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f( 1.0f,  1.0f,  1.0f);	//Top Left Of The Texture and Quad
				gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f( 1.0f, -1.0f,  1.0f);	//Bottom Left Of The Texture and Quad
				//Left Face
				gl.glNormal3f(-1.0f, 0.0f, 0.0f);
				gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f, -1.0f);	//Bottom Left Of The Texture and Quad
				gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f,  1.0f);	//Bottom Right Of The Texture and Quad
				gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f(-1.0f,  1.0f,  1.0f);	//Top Right Of The Texture and Quad
				gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f(-1.0f,  1.0f, -1.0f);	//Top Left Of The Texture and Quad
			gl.glEnd();
			
			//X Axis Rotation
			xrot += xspeed;
			//Y Axis Rotation
			yrot += yspeed;
            
            //Swap buffers
            glj.gljSwap();
            glj.gljFree();
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

        
        /**
     	 * void keyTyped(KeyEvent e)
     	 *
     	 * Invoked when a key has been typed. This event occurs when a key press is followed by a key release. 
     	 */
    	public void keyTyped(KeyEvent e)
		{
		}


 		/**
 	 	 * void keyPressed(KeyEvent e)
 	 	 *
 	 	 * Invoked when a key has been pressed.
 	 	 */
 		public void keyPressed(KeyEvent e)
		{
		    //Ensure GL is initialised correctly
		    if (glj.gljMakeCurrent(true) == false)
			return;

			switch(e.getKeyCode())
			{
				//Switch ON/OFF light when L is pressed
				case KeyEvent.VK_L:
				{
					if(!lp)
					{
						lp = true;
						//Toggle light
						light = !light;
				
						if(!light)
							gl.glDisable(GL_LIGHTING);
						else
							gl.glEnable(GL_LIGHTING);
					}
						
					break;
				}
				
				//Switch filter when F is pressed
				case KeyEvent.VK_F:
				{
					if(!fp)
					{
						fp = true;
						//Change filter
						filter += 1;
						if(filter > 2)
							filter = 0;
					}
					
					break;
				}
				
				//Move cube back when user presses PG_UP
				case KeyEvent.VK_PAGE_UP:
				{
					z -= 0.2f;
					break;
				}
				
				//Move cube forwards when user presses PG_DOWN
				case KeyEvent.VK_PAGE_DOWN:
				{
					z += 0.2f;
					break;
				}
				
				//Increase X rotation speed when user presses UP
				case KeyEvent.VK_UP:
				{
					xspeed += 0.2f;
					break;
				}
				
				//Decrease X rotation speed when user presses DOWN
				case KeyEvent.VK_DOWN:
				{
					xspeed -= 0.2f;
					break;
				}
					
				//Increase Y rotation speed when user presses RIGHT
				case KeyEvent.VK_RIGHT:
				{
					yspeed += 0.2f;
					break;
				}
				
				//Decrease Y rotation speed when user presses LEFT
				case KeyEvent.VK_LEFT:
				{
					yspeed -= 0.2f;	
					break;
				}
			}
		    glj.gljFree();

		}


		/**
	 	 * void keyReleased(KeyEvent e)
	 	 *
	 	 * Invoked when a key has been released. 
	 	 */
		public void keyReleased(KeyEvent e)
		{
			switch(e.getKeyCode())
			{
				//Key has been released
				case KeyEvent.VK_L:
				{
					lp = false;
					break;
				}
				
				//Key has been released
				case KeyEvent.VK_F:
				{
					fp = false;					
					break;
				}
			}
		}
    }
}
