/**
 * Lesson19.java
 *
 * Author: Mattias Ekstrand
 * Date: 18/04/2001
 *
 * Port of the NeHe OpenGL Tutorial (Lesson 19: "Particle Engine Using Triangle Strips")
 * to Java using the GL4Java interface to OpenGL. Much of the code is reused
 * from Darren Hodges port of Lession 9. :)
 *
 */


import java.applet.*;
import java.awt.*;
import java.awt.event.*;

//GL4Java classes
import gl4java.GLContext;
import gl4java.awt.GLAnimCanvas;
import gl4java.utils.textures.*;


public class Lesson19 extends Applet
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



    static final float[][] colors = { // Rainbow Of Colors
	{1.0f,0.5f,0.5f},{1.0f,0.75f,0.5f},{1.0f,1.0f,0.5f},{0.75f,1.0f,0.5f},
		{0.5f,1.0f,0.5f},{0.5f,1.0f,0.75f},{0.5f,1.0f,1.0f},{0.5f,0.75f,1.0f},
		{0.5f,0.5f,1.0f},{0.75f,0.5f,1.0f},{1.0f,0.5f,1.0f},{1.0f,0.5f,0.75f}
    };

    private class renderCanvas extends GLAnimCanvas implements KeyListener {
    	static final int RAND_MAX = 32767;
    	static final int MAX_PARTICLES = 500;
    
	    boolean rainbow = true; // Rainbow Mode?
	    boolean sp = false; //Spacebar Pressed?
	    boolean rp = false; // Return Key Pressed?
	    
	    float slowdown=2.0f; // Slow Down Particles
	    float xspeed; // Base X Speed (To Allow Keyboard Direction Of Tail)
	    float yspeed; // Base Y Speed (To Allow Keyboard Direction Of Tail)
	    float zoom=-40.0f; // Used To Zoom Out
	
	    int	col; // Current Color Selection
	    int	delay; // Rainbow Effect Delay
	    int[] texture = new int[1]; // Storage For Our Particle Texture
	
	    Particle[] particles = new Particle[MAX_PARTICLES]; // Particle Array (Room For Particle Info)
	    

    	public renderCanvas(int w, int h) {
      		super(w, h);
      		
      		//Registers this canvas to process keyboard events
      		addKeyListener(this);
    	}

    	public void preInit() {
      		//We want double buffering
      		doubleBuffer = true;
      		//But we dont want stereo view
      		stereoView = false;
    	}
    
    	public float rand() {
        	return ((float) Math.random()*RAND_MAX);
    	}

    	public void LoadTextures() {
      		PngTextureLoader texLoader=new PngTextureLoader(gl, glu);
      
			texLoader.readTexture(getCodeBase(), "data/star.png");
     
        	if(texLoader.isOk()) {
        		gl.glGenTextures(1, texture);
        
	        	//Create Linear Filtered Texture
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

    	public void init() {
        	LoadTextures();
	        gl.glShadeModel(GL_SMOOTH); //Enables Smooth Color Shading
	        gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f); //This Will Clear The Background Color To Black
	        gl.glClearDepth(1.0f); //Enables Clearing Of The Depth Buffer
	        gl.glDisable(GL_DEPTH_TEST); //Disables Depth Testing
	        gl.glEnable(GL_BLEND); //Enable Blending
	        gl.glBlendFunc(GL_SRC_ALPHA, GL_ONE); // Type Of Blending To Perform
	        gl.glHint(GL_PERSPECTIVE_CORRECTION_HINT,GL_NICEST); // Really Nice Perspective Calculations
	        gl.glHint(GL_POINT_SMOOTH_HINT,GL_NICEST); // Really Nice Point Smoothing
	        gl.glEnable(GL_TEXTURE_2D); // Enable Texture Mapping
	        gl.glBindTexture(GL_TEXTURE_2D,texture[0]); // Select Our Texture
	        
	        for (int i=0; i < MAX_PARTICLES; i++) { // Initials All The Textures
	            particles[i] = new Particle();
	            particles[i].active = true; // Make All The Particles Active
	            particles[i].life = 1.0f;	// Give All The Particles Full Life
	
	            particles[i].fade = rand()%100/1000.0f+0.003f; // Random Fade Speed
	
	            particles[i].r=colors[i%12][0];	// Select Red Rainbow Color
	            particles[i].g=colors[i%12][1];	// Select Green Rainbow Color
	            particles[i].b=colors[i%12][2];	// Select Blue Rainbow Color
	
	            particles[i].xi=((rand()%50)-26.0f)*10.0f;		// Random Speed On X Axis
	            particles[i].yi=((rand()%50)-25.0f)*10.0f;		// Random Speed On Y Axis
	            particles[i].zi=((rand()%50)-25.0f)*10.0f;		// Random Speed On Z Axis
	            
	            particles[i].xg=0.0f;						// Set Horizontal Pull To Zero
	            particles[i].yg=-0.8f;					// Set Vertical Pull Downward
	            particles[i].zg=0.0f;	            
	        }
	    }

    	public void destroy() {
      		//Destroy the GLContext
      		cvsDispose();
    	}

    	public void reshape(int width, int height) {
      		//Reset The Current Viewport And Perspective Transformation
      		gl.glViewport(0, 0, width, height);

		    //Select The Projection Matrix
		    gl.glMatrixMode(GL_PROJECTION);
		    //Reset The Projection Matrix
		    gl.glLoadIdentity();
		    //Calculate The Aspect Ratio Of The Window
		    glu.gluPerspective(45.0f, getSize().width/(float)getSize().height, 0.1f, 200.0f);
		    //Select The Modelview Matrix
		    gl.glMatrixMode(GL_MODELVIEW);
		}

    	public void display() {

        //Ensure GL is initialised correctly
        if (glj.gljMakeCurrent(true) == false)
        	return;
            
        //Clear The Screen And The Depth Buffer
	    gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	    //Reset The View
	    gl.glLoadIdentity();
			
	    //Select texture
	    gl.glBindTexture(GL_TEXTURE_2D, texture[0]);
                        
        for (int i=0; i < MAX_PARTICLES; i++) {				// i Through All The Particles
            
            if (particles[i].active) {				// If The Particle Is Active
                
                float x=particles[i].x;				// Grab Our Particle X Position
				float y=particles[i].y;				// Grab Our Particle Y Position
				float z=particles[i].z+zoom;				// Particle Z Pos + Zoom

                // Draw The Particle Using Our RGB Values, Fade The Particle Based On It's Life
				gl.glColor4f(particles[i].r,particles[i].g,particles[i].b,particles[i].life);

                gl.glBegin(GL_TRIANGLE_STRIP);				// Build Quad From A Triangle Strip
                	gl.glTexCoord2d(1,1); gl.glVertex3f(x+0.5f,y+0.5f,z); // Top Right
                	gl.glTexCoord2d(0,1); gl.glVertex3f(x-0.5f,y+0.5f,z); // Top Left
		    		gl.glTexCoord2d(1,0); gl.glVertex3f(x+0.5f,y-0.5f,z); // Bottom Right
		    		gl.glTexCoord2d(0,0); gl.glVertex3f(x-0.5f,y-0.5f,z); // Bottom Left
                gl.glEnd();    

                particles[i].x+=particles[i].xi/(slowdown*1000);	// Move On The X Axis By X Speed
				particles[i].y+=particles[i].yi/(slowdown*1000);	// Move On The Y Axis By Y Speed
				particles[i].z+=particles[i].zi/(slowdown*1000);	// Move On The Z Axis By Z Speed

                particles[i].xi+=particles[i].xg;			// Take Pull On X Axis Into Account
				particles[i].yi+=particles[i].yg;			// Take Pull On Y Axis Into Account
				particles[i].zi+=particles[i].zg;			// Take Pull On Z Axis Into Account
                
                particles[i].life-=particles[i].fade;		// Reduce Particles Life By 'Fade'
                
                if (particles[i].life < 0.0f) {					// If Particle Is Burned Out                    
                    particles[i].life=1.0f;				// Give It New Life
		    		particles[i].fade=rand()%100/1000.0f+0.003f;	// Random Fade Value
		    		
                    particles[i].x=0.0f;					// Center On X Axis
		    		particles[i].y=0.0f;					// Center On Y Axis
				    particles[i].z=0.0f;					// Center On Z Axis

                    particles[i].xi=xspeed+((rand()%60)-32.0f);	// X Axis Speed And Direction
                    particles[i].yi=yspeed+((rand()%60)-30.0f);	// Y Axis Speed And Direction
				    particles[i].zi=((rand()%60)-30.0f);		// Z Axis Speed And Direction
                    
                    particles[i].r=colors[col][0];			// Select Red From Color Table
                    particles[i].g=colors[col][1];			// Select Green From Color Table
		    		particles[i].b=colors[col][2];			// Select Blue From Color Table
                }
                
            }


     	}
            
        if (rainbow && delay > 25) {
        	delay=0;
            col++;
            
            if (col > 11) 
            	col=0;		// If Color Is To High Reset It
            }
            
            delay++;
      
      	//Swap buffers
      	glj.gljSwap();
        glj.gljFree();
    }

    public void keyTyped(KeyEvent e) {
      //We are not handling any keyboard events yet
    }
    public void keyPressed(KeyEvent e) {
        
        switch(e.getKeyCode()) {
            //Switch ON/OFF light when L is pressed
            
            // If Number Pad 8 And Y Gravity Is Less Than 1.5 Increase Pull Upwards
              case KeyEvent.VK_UP:
                  for (int i = 0; i < MAX_PARTICLES; i++) {
                      if (particles[i].yg < 1.5f)
                        particles[i].yg+=0.01f;
                  }
              break;

              // If Number Pad 2 And Y Gravity Is Greater Than 1.5 Increase Pull Downwards
              case KeyEvent.VK_DOWN:
                  for (int i = 0; i < MAX_PARTICLES; i++) {
                    if (particles[i].yg > 1.5f)
                        particles[i].yg-=0.01f;
                  }
              break;

              // If Number Pad 6 And X Gravity Is Less Than 1.5 Increase Pull Right
              case KeyEvent.VK_RIGHT: 
                  for (int i = 0; i < MAX_PARTICLES; i++) {
                    if (particles[i].xg < 1.5f)
                        particles[i].xg+=0.01f;
                  }
              break;

              // If Number Pad 4 And X Gravity Is Greater Than 1.5 Increase Pull Left
              case KeyEvent.VK_LEFT: 
                  for (int i = 0; i < MAX_PARTICLES; i++) {
                      if (particles[i].xg > 1.5f)
                        particles[i].xg-=0.01f;
                  }
              break;

              case KeyEvent.VK_TAB:						// Tab Key Causes A Burst
                for (int i = 0; i < MAX_PARTICLES; i++) {
                    particles[i].x=0.0f;					// Center On X Axis
                    particles[i].y=0.0f;					// Center On Y Axis
                    particles[i].z=0.0f;					// Center On Z Axis
                    particles[i].xi=((rand()%50)-26.0f)*10.0f;	// Random Speed On X Axis
                    particles[i].yi=((rand()%50)-25.0f)*10.0f;	// Random Speed On Y Axis
                    particles[i].zi=((rand()%50)-25.0f)*10.0f;	// Random Speed On Z Axis
                }
              break;

              case KeyEvent.VK_ADD:
                  for (int i = 0; i < MAX_PARTICLES; i++) {
                    if (slowdown > 1.0f)
                            slowdown-=0.01f; // Speed Up Particles
                  }
              break;

              case KeyEvent.VK_SUBTRACT:
                  for (int i = 0; i < MAX_PARTICLES; i++) {  
                    if (slowdown < 1.0f)
                        slowdown+=0.01f; // Slow Up Particles
                  }
              break;

              case KeyEvent.VK_PAGE_UP:
                  zoom+=1.0f; // Zoom in                  
              break;

              case KeyEvent.VK_PAGE_DOWN:
                  zoom-=1.0f; // Zoom out
              break;

              case KeyEvent.VK_ENTER:
                  if (!rp) {
                        rp = true;
                        rainbow = !rainbow;
                  }
               break;

              case KeyEvent.VK_SPACE:
                  rainbow = false;
                  sp=true;			// Set Flag Telling Us Space Is Pressed
                  delay=0;			// Reset The Rainbow Color Cycling Delay
                  col++;				// Change The Particle Color
                  
                  if (col > 11) 
                      col=0;		// If Color Is To High Reset It

              break;
          }
      }
    
    public void keyReleased(KeyEvent e) {
      switch(e.getKeyCode()) {
        //Key has been released
        case KeyEvent.VK_SPACE:
          sp = false;
          break;
        //Key has been released
        case KeyEvent.VK_ENTER:
          rp = false;
        break;
      }
    }
  }
  
  public class Particle {
      boolean active; // Active (Yes/No)
      float life; // Particle Life
      float fade; // Fade Speed
      
      float r; // Red Value
      float g; // Green Value
      float b; // Blue Value

      
      float x; // X Position
      float y; // Y Position
      float z; // Z Position
      
      float xi; // X Direction
      float yi; // Y Direction
      float zi; // Z Direction

      float xg;	// X Gravity
      float yg;	// Y Gravity
      float zg;	// Z Gravity
      
      public Particle() {
      }
  }
}
