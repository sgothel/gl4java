/**
 * Lesson11.java
 *
 * Author: Darren Hodges
 * Date: 23/12/1999
 *
 * Port of the NeHe OpenGL Tutorial (Lesson 11: "OpenGL Flag Effect")
 * to Java using the GL4Java interface to OpenGL.
 *
 */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;

//GL4Java classes
import gl4java.GLContext;
import gl4java.awt.GLAnimCanvas;
import gl4java.utils.textures.*;


public class Lesson11 extends Applet
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
    	float xrot = 0.0f;	//X Rotation
		float yrot = 0.0f;	//Y Rotation
		float zrot = 0.0f;	//Z Rotation

    	//The array for the points on the grid of our "wave"
    	float[][][] points = new float[45][45][3];
    
    	int wiggle_count = 0;
	
		int[] texture = new int[1]; //Storage for one texture
		
		
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
    		texLoader.readTexture(getCodeBase(), "data/tim.png");
    		
    		if(texLoader.isOk())
    		{
				//Create Texture
				gl.glGenTextures(1, texture);
				gl.glBindTexture(GL_TEXTURE_2D, texture[0]);
			
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
			
			
			for(float float_x = 0.0f; float_x < 9.0f; float_x += 0.2f)
			{
				for(float float_y = 0.0f; float_y < 9.0f; float_y += 0.2f)
				{
					points[(int)(float_x * 5)][(int)(float_y * 5)][0] = float_x - 4.4f;
					points[(int)(float_x * 5)][(int)(float_y * 5)][1] = float_y - 4.4f;
					points[(int)(float_x * 5)][(int)(float_y * 5)][2] = (float)(Math.sin(((float_x * 5 * 8) / 360) * 3.14159 * 2));
				}
			}
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
            
            int x, y;
			float float_x, float_y, float_xb, float_yb;
			
			gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
			gl.glLoadIdentity();							
			gl.glTranslatef(0.0f, 0.0f, -15.0f);

			gl.glRotatef(xrot, 1.0f, 0.0f, 0.0f);
			gl.glRotatef(yrot, 0.0f, 1.0f, 0.0f);  
			gl.glRotatef(zrot, 0.0f, 0.0f, 1.0f);

			gl.glBindTexture(GL_TEXTURE_2D, texture[0]);
			
			gl.glPolygonMode(GL_BACK, GL_FILL);
			gl.glPolygonMode(GL_FRONT, GL_LINE);

			gl.glBegin(GL_QUADS);

			for(x = 0; x < 44; x++)
			{
				for(y = 0; y < 44; y++)
				{
					float_x = (float)x / 44;
					float_y = (float)y / 44;
					float_xb = (float)(x + 1) / 44;
					float_yb = (float)(y + 1) / 44;
					
					gl.glTexCoord2f(float_x, float_y);
					gl.glVertex3f(points[x][y][0], points[x][y][1], points[x][y][2]);
			
					gl.glTexCoord2f(float_x, float_yb);
					gl.glVertex3f(points[x][y + 1][0], points[x][y + 1][1], points[x][y + 1][2]);
			
					gl.glTexCoord2f(float_xb, float_yb);
					gl.glVertex3f(points[x + 1][y + 1][0], points[x + 1][y + 1][1], points[x + 1][y + 1][2]);
			
					gl.glTexCoord2f(float_xb, float_y);
					gl.glVertex3f(points[x + 1][y][0], points[x + 1][y][1], points[x + 1][y][2]);
				}
			}
			
			gl.glEnd();
			
			if(wiggle_count == 2)
			{
				for(y = 0; y < 45; y++)
				{
					points[44][y][2] = points[0][y][2];
				}
				
				for(x = 0; x < 44; x++)
				{
					for(y = 0; y < 45; y++)
					{
						points[x][y][2] = points[x + 1][y][2];
					}
				}
				
				wiggle_count = 0;
			}
			
			wiggle_count++;
			
			xrot += 0.3f;
			yrot += 0.2f;
			zrot += 0.4f;
            
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
			//We are not handling any keyboard events
		}


 		/**
 	 	 * void keyPressed(KeyEvent e)
 	 	 *
 	 	 * Invoked when a key has been pressed.
 	 	 */
 		public void keyPressed(KeyEvent e)
		{
			//We are not handling any keyboard events
		}


		/**
	 	 * void keyReleased(KeyEvent e)
	 	 *
	 	 * Invoked when a key has been released. 
	 	 */
		public void keyReleased(KeyEvent e)
		{
			//We are not handling any keyboard events
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
