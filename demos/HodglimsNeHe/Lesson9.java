/**
 * Lesson9.java
 *
 * Author: Darren Hodges
 * Date: 21/12/1999
 *
 * Port of the NeHe OpenGL Tutorial (Lesson 9: "Moving Bitmaps In 3D Space")
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


public class Lesson9 extends Applet
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
    	boolean twinkle = true; //Twinkling stars
    	boolean tp = false; //T Pressed?
    	final int NUM = 50; //NUMber of stars to draw
    	
    	Star[] star = new Star[NUM]; //Array of stars
    	
    	float zoom = -15.0f; 	//Viewing Distance Away From Stars
		float tilt = 90.0f;	 	//Tilt The View
		float spin = 0.0f;		//Spin Twinkling Stars

		int loop = 0; //General loop Variable
	
		int[] texture = new int[1];	//Storage For One Texture
		
		
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
    		texLoader.readTexture(getCodeBase(), "data/star.png");
    		
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
			
			//Set The Blending Function For Translucency
			gl.glBlendFunc(GL_SRC_ALPHA, GL_ONE);
			//Enable Blending
			gl.glEnable(GL_BLEND);
			
			//Create A Loop That Goes Through All The Stars
			for(loop = 0; loop < NUM; loop++)
			{
				star[loop] = new Star();
				star[loop].angle = 0.0f; //Start All The Stars At Angle Zero
				star[loop].dist = ((float)(loop) / NUM) * 5.0f; //Calculate Distance From The Center
				star[loop].r = (byte)(256 * Math.random()); //Give star[loop] A Random Red Intensity
				star[loop].g = (byte)(256 * Math.random()); //Give star[loop] A Random Green Intensity
				star[loop].b = (byte)(256 * Math.random()); //Give star[loop] A Random Blue Intensity
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
            
            //Clear The Screen And The Depth Buffer
			gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			
			//Select Our Texture
			gl.glBindTexture(GL_TEXTURE_2D, texture[0]);
			
			//Loop Through All The Stars
			for(loop = 0; loop < NUM; loop++)
			{
				gl.glLoadIdentity(); //Reset The View Before We Draw Each Star
				gl.glTranslatef(0.0f, 0.0f, zoom); //Zoom Into The Screen (Using The Value In 'zoom')
				gl.glRotatef(tilt, 1.0f, 0.0f, 0.0f); //Tilt The View (Using The Value In 'tilt')
				gl.glRotatef(star[loop].angle, 0.0f, 1.0f, 0.0f); //Rotate To The Current Stars Angle
				gl.glTranslatef(star[loop].dist, 0.0f, 0.0f); //Move Forward On The X Plane
				gl.glRotatef(-star[loop].angle, 0.0f, 1.0f, 0.0f); //Cancel The Current Stars Angle
				gl.glRotatef(-tilt, 1.0f, 0.0f, 0.0f); //Cancel The Screen Tilt
				
				//Twinkling Stars Enabled
				if(twinkle)
				{
					//Assign A Color Using Bytes
					gl.glColor4ub(star[(NUM - loop) - 1].r, star[(NUM - loop) - 1].g, star[(NUM - loop) - 1].b, (byte)255);
					gl.glBegin(GL_QUADS); //Begin Drawing The Textured Quad
						gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f, 0.0f);
						gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f(1.0f, -1.0f, 0.0f);
						gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f(1.0f, 1.0f, 0.0f);
						gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f(-1.0f, 1.0f, 0.0f);
					gl.glEnd(); //Done Drawing The Textured Quad
				}
				
				gl. glRotatef(spin,0.0f,0.0f,1.0f); //Rotate The Star On The Z Axis
				//Assign A Color Using Bytes
				gl.glColor4ub(star[loop].r, star[loop].g, star[loop].b, (byte)255);
				gl.glBegin(GL_QUADS); //Begin Drawing The Textured Quad
					gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f, 0.0f);
					gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f(1.0f,-1.0f, 0.0f);
					gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f(1.0f, 1.0f, 0.0f);
					gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f(-1.0f, 1.0f, 0.0f);
				gl.glEnd(); //Done Drawing The Textured Quad
					
				spin += 0.01f; //Used To Spin The Stars
				star[loop].angle += (float)(loop / (float)NUM); //Changes The Angle Of A Star
				star[loop].dist -= 0.01f; //Changes The Distance Of A Star
					
				//Is The Star In The Middle Yet?
				if(star[loop].dist < 0.0f)
				{
					star[loop].dist += 5.0f;		//Move The Star 5 Units From The Center
					star[loop].r = (byte)(256 * Math.random());	//Give It A New Red Value
					star[loop].g = (byte)(256 * Math.random());	//Give It A New Green Value
					star[loop].b = (byte)(256 * Math.random());	//Give It A New Blue Value
				}
			}
            
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
		}


 		/**
 	 	 * void keyPressed(KeyEvent e)
 	 	 *
 	 	 * Invoked when a key has been pressed.
 	 	 */
 		public void keyPressed(KeyEvent e)
		{
			switch(e.getKeyCode())
			{
				//Switch ON/OFF twinkle when T is pressed
				case KeyEvent.VK_T:
				{
					if(!tp)
					{
						tp = true;
						//Toggle twinkle
						twinkle = !twinkle;
					}
						
					break;
				}
				
				//Tilt screen up when user presses UP
				case KeyEvent.VK_UP:
				{
					//Tilt The Screen Up
					tilt -= 0.5f;
					break;
				}
				
				//Tilt screen down when user presses DOWN
				case KeyEvent.VK_DOWN:
				{
					//Tilt The Screen Down
					tilt += 0.5f;
					break;
				}
				
				//Zoom out when user presses PG_UP
				case KeyEvent.VK_PAGE_UP:
				{
					//Zoom out
					zoom -= 0.2f;
					break;
				}
				
				//Zoom in when user presses PG_DOWN
				case KeyEvent.VK_PAGE_DOWN:
				{
					//Zoom in
					zoom += 0.2f;
					break;
				}
			}
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
				case KeyEvent.VK_T:
				{
					tp = false;
					break;
				}
			}
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
    
    
    
    public class Star
	{
		byte r, g, b; //Stars colour
		float dist; //Stars distance from center
		float angle; //Stars current angle
		
			
		/**
		 * Star()
		 *
		 * Constructor.
		 */
		public Star()
		{
			r = g = b = 0;
			dist = angle = 0.0f;
		}
	}
}
