/**
 * Lesson12.java
 *
 * Author: Darren Hodges
 * Date: 05/01/2000
 *
 * Port of the NeHe OpenGL Tutorial (Lesson 12: "Display Lists")
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


public class Lesson12 extends Applet
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
    	int[] texture = new int[1]; //Storage for one texture
		
		int cube = 0; //Storage For The Display List
		int top = 0; //Storage For The Second Display List
		int xloop = 0; //Loop For X Axis
		int yloop = 0; //Loop For Y Axis
		
    	float xrot = 0.0f;	//X Rotation
		float yrot = 0.0f;	//Y Rotation
		
		//Box colours
		float boxcol[][] =
		{
			{1.0f,0.0f,0.0f},{1.0f,0.5f,0.0f},{1.0f,1.0f,0.0f},{0.0f,1.0f,0.0f},{0.0f,1.0f,1.0f}
		};

		//Box top colours
		float topcol[][] =
		{
			{0.5f,0.0f,0.0f},{0.5f,0.25f,0.0f},{0.5f,0.5f,0.0f},{0.0f,0.5f,0.0f},{0.0f,0.5f,0.5f}
		};
	
	
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
	 	 *
	 	 * void BuildList()
	 	 *
	 	 * Builds our display lists
	 	 */
		public void BuildList()
		{
			//Create display list for cube
			cube = gl.glGenLists(2);

			gl.glNewList(cube, GL_COMPILE);
				gl.glBegin(GL_QUADS);
					//Bottom Face
					gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f(-1.0f, -1.0f, -1.0f);	//Top Right Of The Texture and Quad
					gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f( 1.0f, -1.0f, -1.0f);	//Top Left Of The Texture and Quad
					gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f( 1.0f, -1.0f,  1.0f);	//Bottom Left Of The Texture and Quad
					gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f,  1.0f);	//Bottom Right Of The Texture and Quad
					//Front Face
					gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f,  1.0f);	//Bottom Left Of The Texture and Quad
					gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f( 1.0f, -1.0f,  1.0f);	//Bottom Right Of The Texture and Quad
					gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f( 1.0f,  1.0f,  1.0f);	//Top Right Of The Texture and Quad
					gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f(-1.0f,  1.0f,  1.0f);	//Top Left Of The Texture and Quad
					//Back Face
					gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f, -1.0f);	//Bottom Right Of The Texture and Quad
					gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f(-1.0f,  1.0f, -1.0f);	//Top Right Of The Texture and Quad
					gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f( 1.0f,  1.0f, -1.0f);	//Top Left Of The Texture and Quad
					gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f( 1.0f, -1.0f, -1.0f);	//Bottom Left Of The Texture and Quad
					//Right face
					gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f( 1.0f, -1.0f, -1.0f);	//Bottom Right Of The Texture and Quad
					gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f( 1.0f,  1.0f, -1.0f);	//Top Right Of The Texture and Quad
					gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f( 1.0f,  1.0f,  1.0f);	//Top Left Of The Texture and Quad
					gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f( 1.0f, -1.0f,  1.0f);	//Bottom Left Of The Texture and Quad
					//Left Face
					gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f, -1.0f);	//Bottom Left Of The Texture and Quad
					gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f,  1.0f);	//Bottom Right Of The Texture and Quad
					gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f(-1.0f,  1.0f,  1.0f);	//Top Right Of The Texture and Quad
					gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f(-1.0f,  1.0f, -1.0f);	//Top Left Of The Texture and Quad
				gl.glEnd();
			gl.glEndList();

			//Create display list for cube top
			top = cube + 1;

			gl.glNewList(top, GL_COMPILE);
				gl.glBegin(GL_QUADS);
					//Top Face
					gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f(-1.0f,  1.0f, -1.0f);	//Top Left Of The Texture and Quad
					gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f(-1.0f,  1.0f,  1.0f);	//Bottom Left Of The Texture and Quad
					gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f( 1.0f,  1.0f,  1.0f);	//Bottom Right Of The Texture and Quad
					gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f( 1.0f,  1.0f, -1.0f);	//Top Right Of The Texture and Quad
				gl.glEnd();
			gl.glEndList();
		}
	
	
        /**
         * void LoadGLTextures()
         *
         * Load textures.
         */
        public void LoadGLTextures()
    	{
    		PngTextureLoader texLoader = new PngTextureLoader(gl, glu);
    		texLoader.readTexture(getCodeBase(), "data/cube.png");
    		
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
            
            //Build display lists
            BuildList();
            
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
			
			//Enable 3D cards default light
			gl.glEnable(GL_LIGHT0);
			gl.glEnable(GL_LIGHTING);
			
			//Enable coloured textures
			gl.glEnable(GL_COLOR_MATERIAL);
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
			
			//Select texture
			gl.glBindTexture(GL_TEXTURE_2D, texture[0]);
			
			for(yloop = 1; yloop < 6; yloop++)
			{
				for(xloop = 0; xloop < yloop; xloop++)
				{
					//Reset The View
					gl.glLoadIdentity();
					gl.glTranslatef(1.4f + ((float)xloop * 2.8f) - ((float)yloop * 1.4f),((6.0f - (float)yloop) * 2.4f) -7.0f, -20.0f);
					gl.glRotatef(45.0f - (2.0f * yloop) + xrot, 1.0f, 0.0f, 0.0f);
					gl.glRotatef(45.0f + yrot, 0.0f, 1.0f, 0.0f);

					//Select color
					gl.glColor3fv(boxcol[yloop - 1]);
					//Draw cube
					gl.glCallList(cube);

					//Select color
					gl.glColor3fv(topcol[yloop - 1]);
					//Draw top
					gl.glCallList(top);
				}
			}
			
            //Swap buffers
            glj.gljSwap();
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
				//Rotate cubes when user presses UP
				case KeyEvent.VK_UP:
				{
					xrot -= 0.2f;
					break;
				}
				
				//Rotate cubes when user presses DOWN
				case KeyEvent.VK_DOWN:
				{
					xrot += 0.2f;
					break;
				}
					
				//Rotate cubes when user presses RIGHT
				case KeyEvent.VK_RIGHT:
				{
					yrot += 0.2f;
					break;
				}
				
				//Rotate cubes when user presses LEFT
				case KeyEvent.VK_LEFT:
				{
					yrot -= 0.2f;	
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
