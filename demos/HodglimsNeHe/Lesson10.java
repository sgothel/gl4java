/**
 * Lesson10.java
 *
 * Author: Mattias Ekstrand
 * Date: 09/04/2001
 *
 * Port of the NeHe OpenGL Tutorial (Lesson 10: "Moving Bitmaps In 3D Space")
 * to Java using the GL4Java interface to OpenGL. Much of the code is reused
 * from Darren Hodges port of Lession 9. :)
 *
 */


import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.net.*;
import java.util.StringTokenizer;

//GL4Java classes
import gl4java.GLContext;
import gl4java.awt.GLAnimCanvas;
import gl4java.utils.textures.*;


public class Lesson10 extends Applet
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



    private class renderCanvas extends GLAnimCanvas implements KeyListener
    {
    	boolean	light = true; //Lighting ON/OFF
    	boolean lp = false; //L Pressed?
	boolean fp = false; //F Pressed?
	boolean blend = true; //Blending ON/OFF
	boolean bp = false; //B Pressed?

        final float piover180 = 0.0174532925f;
        float heading;
        float xpos;
        float zpos;
        
        float yrot = 0.0f;		//Y Rotation
        float walkbias = 0.0f;
        float walkbiasangle = 0.0f;
        float lookupdown = 0.0f;
	float z = -8.0f;	                //Depth Into The Screen
		
	//Ambient light
	float[] LightAmbient = { 0.5f, 0.5f, 0.5f, 1.0f };

	//Diffuse light
	float[] LightDiffuse = { 1.0f, 1.0f, 1.0f, 1.0f };
	
	//Light position
	float[] LightPosition = { 0.0f, 0.0f, 2.0f, 1.0f };	
	
	int filter = 0; //Which Filter To Use
	
	int[] texture = new int[3]; //Storage for 3 textures
        
        Sector sector1;
		
		
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
        
        void SetupWorld() {
	    float x, y, z, u, v;
	    int numtriangles;
            
            try {
                String line;
                
                URL world = new URL(getCodeBase() + "data/world.txt");
                
                DataInputStream dis = new DataInputStream(world.openStream());
            
                while ((line = dis.readLine()) != null) {
                    if (line.trim().length() == 0 || line.trim().startsWith("//"))
                        continue;
                    
                    if (line.startsWith("NUMPOLLIES")) {
                        int numTriangles;
                        
                        numTriangles = Integer.parseInt(line.substring(line.indexOf("NUMPOLLIES") + "NUMPOLLIES".length() + 1));
                        sector1 = new Sector(numTriangles);
                        
                        break;
                    }
                }
                
                for (int i = 0; i < sector1.numTriangles; i++) {
                    for (int vert = 0; vert < 3; vert++) {
                        
                        while ((line = dis.readLine()) != null) {
                            if (line.trim().length() == 0 || line.trim().startsWith("//"))
                                continue;
                            
                            break;
                        }
                        
                        if (line != null) {
                            StringTokenizer st = new StringTokenizer(line, " ");
                            
                            sector1.triangles[i].vertex[vert].x = Float.valueOf(st.nextToken()).floatValue();
                            sector1.triangles[i].vertex[vert].y = Float.valueOf(st.nextToken()).floatValue();
                            sector1.triangles[i].vertex[vert].z = Float.valueOf(st.nextToken()).floatValue();
                            sector1.triangles[i].vertex[vert].u = Float.valueOf(st.nextToken()).floatValue();
                            sector1.triangles[i].vertex[vert].v = Float.valueOf(st.nextToken()).floatValue();                            
                        }                        
                    }
                }
                
                dis.close();
                
            } catch (MalformedURLException me) {
                System.out.println("MalformedURLException: " + me);
            } catch (IOException ioe) {
                System.out.println("IOException: " + ioe);
            }
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
    			
    		//Full Brightness, 50% Alpha
    		gl.glColor4f(1.0f, 1.0f, 1.0f, 0.5f);
		
                //Blending Function For Translucency Based On Source Alpha Value
		gl.glBlendFunc(GL_SRC_ALPHA, GL_ONE);
    		
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
								  	  texLoader.getImageHeight(),
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
			
	    //Lights           
	    gl.glLightfv(GL_LIGHT1, GL_AMBIENT, LightAmbient);
	    gl.glLightfv(GL_LIGHT1, GL_DIFFUSE, LightDiffuse);
	    gl.glLightfv(GL_LIGHT1, GL_POSITION, LightPosition);

	    //Enable light
	    gl.glEnable(GL_LIGHT1);
	    gl.glEnable(GL_LIGHTING);
            
            //Load world
            SetupWorld();
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
			
	    float x, y, z, u, v;
	    float xtrans = -xpos;
	    float ztrans = -zpos;
	    float ytrans = -walkbias-0.25f;
	    float sceneroty = 360.0f - yrot;

	    gl.glRotatef(lookupdown,1.0f,0,0);
	    gl.glRotatef(sceneroty,0,1.0f,0);
	
	    gl.glTranslatef(xtrans, ytrans, ztrans);
	    gl.glBindTexture(GL_TEXTURE_2D, texture[filter]);
	
            // Process Each Triangle
	    for (int i = 0; i < sector1.numTriangles; i++) {
		gl.glBegin(GL_TRIANGLES);
                    gl.glNormal3f( 0.0f, 0.0f, 1.0f);
                    x = sector1.triangles[i].vertex[0].x;
                    y = sector1.triangles[i].vertex[0].y;
                    z = sector1.triangles[i].vertex[0].z;
                    u = sector1.triangles[i].vertex[0].u;
                    v = sector1.triangles[i].vertex[0].v;
                    gl.glTexCoord2f(u,v); gl.glVertex3f(x,y,z);

                    x = sector1.triangles[i].vertex[1].x;
                    y = sector1.triangles[i].vertex[1].y;
                    z = sector1.triangles[i].vertex[1].z;
                    u = sector1.triangles[i].vertex[1].u;
                    v = sector1.triangles[i].vertex[1].v;
                    gl.glTexCoord2f(u,v); gl.glVertex3f(x,y,z);

                    x = sector1.triangles[i].vertex[2].x;
                    y = sector1.triangles[i].vertex[2].y;
                    z = sector1.triangles[i].vertex[2].z;
                    u = sector1.triangles[i].vertex[2].u;
                    v = sector1.triangles[i].vertex[2].v;
                    gl.glTexCoord2f(u,v); gl.glVertex3f(x,y,z);
                gl.glEnd();
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
				
				//Switch blending when B is pressed
				case KeyEvent.VK_B:
				{
					if(!bp)
					{
						bp = true;
						//Toggle blending
						blend = !blend;
						
						if(blend)
						{
							gl.glEnable(GL_BLEND);			//Turn Blending On
							gl.glDisable(GL_DEPTH_TEST);	//Turn Depth Testing Off
						}
						else
						{
							gl.glDisable(GL_BLEND);			//Turn Blending Off
							gl.glEnable(GL_DEPTH_TEST);		//Turn Depth Testing On
						}
					}
					
					break;
				}
				
				case KeyEvent.VK_PAGE_UP:
				{
					z -= 0.2f;
                                        lookupdown-= 1.0f;
                                        
					break;
				}
				
				case KeyEvent.VK_PAGE_DOWN:
				{
					z += 0.2f;
                                        lookupdown+= 1.0f;
                                        
					break;
				}
				
				case KeyEvent.VK_UP:
				{
					xpos -= (float)Math.sin(heading*piover180) * 0.05f;
					zpos -= (float)Math.cos(heading*piover180) * 0.05f;
					if (walkbiasangle >= 359.0f)
					{
						walkbiasangle = 0.0f;
					}
					else
					{
						walkbiasangle+= 10;
					}
					walkbias = (float)Math.sin(walkbiasangle * piover180)/20.0f;
                                        
                                        break;
				}
				
				case KeyEvent.VK_DOWN:
				{
					xpos += (float)Math.sin(heading*piover180) * 0.05f;
					zpos += (float)Math.cos(heading*piover180) * 0.05f;
					if (walkbiasangle <= 1.0f)
					{
						walkbiasangle = 359.0f;
					}
					else
					{
						walkbiasangle-= 10;
					}
					walkbias = (float)Math.sin(walkbiasangle * piover180)/20.0f;
                                        
                                        break;
				}
					
				//Increase Y rotation speed when user presses RIGHT
				case KeyEvent.VK_RIGHT:
				{
					heading -= 1.0f;
					yrot = heading;
                                        
                                        break;
				}
				
				//Decrease Y rotation speed when user presses LEFT
				case KeyEvent.VK_LEFT:
				{
					heading += 1.0f;	
					yrot = heading;
                                        
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
				
				//Key has been released
				case KeyEvent.VK_B:
				{
					bp = false;					
					break;
				}
			}
		}
    }
    
    public class Sector	{
        int numTriangles;
	Triangle[] triangles;		
			
	public Sector (int numTriangles) {
	    this.numTriangles = numTriangles;
	    triangles = new Triangle[numTriangles];
            
            for (int i = 0; i < numTriangles; i++)
                triangles[i] = new Triangle();
	}
    }
    
    public class Triangle {
        Vertex[] vertex;
        
        public Triangle () {
            vertex = new Vertex[3];
            
            for (int i = 0; i < 3; i++)
                vertex[i] = new Vertex();
        }
    }
    
    public class Vertex {
        float x, y, z;  // 3D Coordinates
        float u, v;     // Texture Coordinates
        
        public Vertex () {            
        }
    }
}
