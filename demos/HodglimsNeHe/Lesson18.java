/**
 * Lesson18.java
 *
 * by Lapo Luchini <lapo@lapo.it>
 * Based on Lesson 7 by Darren Hodges
 * Date: 23/08/2000
 *
 * Port of the NeHe OpenGL Tutorial (Lesson 18: "Quadratics")
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

public class Lesson18 extends Applet
{
  //Our rendering canvas
  //We are using GLAnimCanvas because we want the canvas
  //to be constantly redrawn
  renderCanvas canvas=null;

  /**
    * void init()
    *
    * Initialise the applet.
    */
  public void init() {
    //We will use BorderLayout to layout the applet components
    setLayout(new BorderLayout());

    //Create our canvas and add it to the center of the applet
    canvas=new renderCanvas(getSize().width, getSize().height);
    canvas.requestFocus();
    add("Center", canvas);
  }

  /**
    * void start()
    *
    * Start the applet.
    */
  public void start() {
    //Start animating the canvas
    canvas.start();
  }

  /**
    * void stop()
    *
    * Stop the applet.
    */
  public void stop() {
    //Stop animating the canvas
    canvas.stop();
  }

  /**
    * void destroy()
    *
    * Destroy the applet.
    */
  public void destroy() {
    //Stop animating the canvas
    canvas.stop();
    //Destroy the canvas
    canvas.destroy();
  }

  private class renderCanvas extends GLAnimCanvas 
    	implements KeyListener, MouseListener
  {
     boolean  light = true; //Lighting ON/OFF
     boolean lp = false; //L Pressed?
    boolean fp = false; //F Pressed?
    boolean sp = false; //Spacebar Pressed?

     float xrot = 0.0f;    //X Rotation
    float yrot = 0.0f;    //Y Rotation
    float xspeed = 0.0f;  //X Rotation Speed
    float yspeed = 0.0f;  //Y Rotation Speed

    float z = -5.0f;  //Depth Into The Screen

    //Ambient light
    float[] LightAmbient = { 0.5f, 0.5f, 0.5f, 1.0f };

    //Diffuse light
    float[] LightDiffuse = { 1.0f, 1.0f, 1.0f, 1.0f };

    //Light position
    float[] LightPosition = { 0.0f, 0.0f, 2.0f, 1.0f };

    int filter = 0; //Which Filter To Use

    int[] texture = new int[3]; //Storage for 3 textures

    int part1;     // Start Of Disc
    int part2;     // End Of Disc
    int p1=0;      // Increase 1
    int p2=1;      // Increase 2
    long quadratic; // Storage For Our Quadratic Objects
    int object=0;  // Which Object To Draw

    public renderCanvas(int w, int h) {
      super(w, h);
      //Registers this canvas to process keyboard events
      addKeyListener(this);
      addMouseListener(this);    
    }

    public void preInit() {
      //We want double buffering
      doubleBuffer = true;
      //But we dont want stereo view
      stereoView = false;
    }

    public void LoadTextures() {
      PngTextureLoader texLoader=new PngTextureLoader(gl, glu);
      // catch exception if executed by command-line
      try {
        texLoader.readTexture(getCodeBase(), "data/crate.png");
      } catch(NullPointerException e) {
        texLoader.readTexture("data/crate.png");
      }
      if(texLoader.isOk()) {
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
          texLoader.getImageHeight(),                      GL_RGB,
          GL_UNSIGNED_BYTE,
          texLoader.getTexture());
      }
    }

    public void init() {
      LoadTextures();
      gl.glEnable(GL_TEXTURE_2D);

      //This Will Clear The Background Color To Black
      gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

      //Enables Clearing Of The Depth Buffer
      gl.glClearDepth(1.0);
      //The Type Of Depth Lesson18 To Do
      gl.glDepthFunc(GL_LESS);
      //Enables Depth Lesson18ing
      gl.glEnable(GL_DEPTH_TEST);

      //Enables Smooth Color Shading
      gl.glShadeModel(GL_SMOOTH);
      //Select The Projection Matrix
      gl.glMatrixMode(GL_PROJECTION);
      //Reset The Projection Matrix
      gl.glLoadIdentity();
      //Calculate The Aspect Ratio Of The Window
      glu.gluPerspective(45.0, (float)getSize().width / (float)getSize().height, 0.1, 100.0);
      //Select The Modelview Matrix
      gl.glMatrixMode(GL_MODELVIEW);

      //Lights
      gl.glLightfv(GL_LIGHT1, GL_AMBIENT, LightAmbient);
      gl.glLightfv(GL_LIGHT1, GL_DIFFUSE, LightDiffuse);
      gl.glLightfv(GL_LIGHT1, GL_POSITION, LightPosition);

      //Enable light
      gl.glEnable(GL_LIGHT1);
      gl.glEnable(GL_LIGHTING);

      quadratic=glu.gluNewQuadric();                      // Create A Pointer To The Quadric Object ( NEW )
      glu.gluQuadricNormals(quadratic, GLU_SMOOTH);       // Create Smooth Normals ( NEW )
      glu.gluQuadricTexture(quadratic, GL_TRUE);          // Create Texture Coords ( NEW )
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
      glu.gluPerspective(45.0, getSize().width/(float)getSize().height, 0.1, 100.0);
      //Select The Modelview Matrix
      gl.glMatrixMode(GL_MODELVIEW);
    }

    private void DrawCube() {
      gl.glBegin(GL_QUADS);
        //Front Face
        gl.glNormal3f(0.0f, 0.0f, 1.0f);
        gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f,  1.0f);  //Bottom Left Of The Texture and Quad
        gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f( 1.0f, -1.0f,  1.0f);  //Bottom Right Of The Texture and Quad
        gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f( 1.0f,  1.0f,  1.0f);  //Top Right Of The Texture and Quad
        gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f(-1.0f,  1.0f,  1.0f);  //Top Left Of The Texture and Quad
        //Back Face
        gl.glNormal3f(0.0f, 0.0f, -1.0f);
        gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f, -1.0f);  //Bottom Right Of The Texture and Quad
        gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f(-1.0f,  1.0f, -1.0f);  //Top Right Of The Texture and Quad
        gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f( 1.0f,  1.0f, -1.0f);  //Top Left Of The Texture and Quad
        gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f( 1.0f, -1.0f, -1.0f);  //Bottom Left Of The Texture and Quad
        //Top Face
        gl.glNormal3f(0.0f, 1.0f, 0.0f);
        gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f(-1.0f,  1.0f, -1.0f);  //Top Left Of The Texture and Quad
        gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f(-1.0f,  1.0f,  1.0f);  //Bottom Left Of The Texture and Quad
        gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f( 1.0f,  1.0f,  1.0f);  //Bottom Right Of The Texture and Quad
        gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f( 1.0f,  1.0f, -1.0f);  //Top Right Of The Texture and Quad
        //Bottom Face
        gl.glNormal3f(0.0f, -1.0f, 0.0f);
        gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f(-1.0f, -1.0f, -1.0f);  //Top Right Of The Texture and Quad
        gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f( 1.0f, -1.0f, -1.0f);  //Top Left Of The Texture and Quad
        gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f( 1.0f, -1.0f,  1.0f);  //Bottom Left Of The Texture and Quad
        gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f,  1.0f);  //Bottom Right Of The Texture and Quad
        //Right face
        gl.glNormal3f(1.0f, 0.0f, 0.0f);
        gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f( 1.0f, -1.0f, -1.0f);  //Bottom Right Of The Texture and Quad
        gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f( 1.0f,  1.0f, -1.0f);  //Top Right Of The Texture and Quad
        gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f( 1.0f,  1.0f,  1.0f);  //Top Left Of The Texture and Quad
        gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f( 1.0f, -1.0f,  1.0f);  //Bottom Left Of The Texture and Quad
        //Left Face
        gl.glNormal3f(-1.0f, 0.0f, 0.0f);
        gl.glTexCoord2f(0.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f, -1.0f);  //Bottom Left Of The Texture and Quad
        gl.glTexCoord2f(1.0f, 0.0f); gl.glVertex3f(-1.0f, -1.0f,  1.0f);  //Bottom Right Of The Texture and Quad
        gl.glTexCoord2f(1.0f, 1.0f); gl.glVertex3f(-1.0f,  1.0f,  1.0f);  //Top Right Of The Texture and Quad
        gl.glTexCoord2f(0.0f, 1.0f); gl.glVertex3f(-1.0f,  1.0f, -1.0f);  //Top Left Of The Texture and Quad
      gl.glEnd();
    }

    public void display() {
      //Ensure GL is initialised correctly
      if (glj.gljMakeCurrent(true) == false)
	return;
    
//Clear The Screen And The Depth Buffer
      gl.glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
      //Reset The View
      gl.glLoadIdentity();

      //Move into the screen
      gl.glTranslatef(0.0f, 0.0f, z);

      //Rotate On The X Axis
      gl.glRotatef(xrot, 1.0f, 0.0f, 0.0f);
      //Rotate On The Y Axis
      gl.glRotatef(yrot, 0.0f, 1.0f, 0.0f);

      gl.glBindTexture(GL_TEXTURE_2D, texture[filter]);       // Select A Filtered Texture

      switch(object) {                                        // Check object To Find Out What To Draw
        case 0:                                               // Drawing Object 1
          DrawCube();                                          // Draw Our Cube
          break;                                              // Done
        case 1:                                               // Drawing Object 2
          gl.glTranslatef(0.0f,0.0f,-1.5f);                    // Center The Cylinder
          glu.gluCylinder(quadratic,1.0f,1.0f,3.0f,32,32);    // Draw Our Cylinder
          break;                                              // Done
        case 2:                                               // Drawing Object 3
          glu.gluDisk(quadratic,0.5f,1.5f,32,32);             // Draw A Disc (CD Shape)
          break;                                              // Done
        case 3:                                               // Drawing Object 4
          glu.gluSphere(quadratic,1.3f,32,32);                // Draw A Sphere
          break;                                              // Done
        case 4:                                               // Drawing Object 5
          gl.glTranslatef(0.0f,0.0f,-1.5f);                    // Center The Cone
          glu.gluCylinder(quadratic,1.0f,0.0f,3.0f,32,32);    // A Cone With A Bottom Radius Of .5 And A Height Of 2
          break;                                              // Done
        case 5:                                               // Drawing Object 6
          part1+=p1;                                          // Increase Start Angle
          part2+=p2;                                          // Increase Sweep Angle
          if(part1>359) {                                      // 360 Degrees
            p1=0;                                             // Stop Increasing Start Angle
            part1=0;                                          // Set Start Angle To Zero
            p2=1;                                             // Start Increasing Sweep Angle
            part2=0;                                          // Start Sweep Angle At Zero
          }
          if(part2>359) {                                      // 360 Degrees
            p1=1;                                             // Start Increasing Start Angle
            p2=0;                                             // Stop Increasing Sweep Angle
          }
          glu.gluPartialDisk(quadratic,0.5f,1.5f,32,32,part1,part2-part1); // A Disk Like The One Before
          break;                                              // Done
      };
      xrot+=xspeed;                                           // Increase Rotation On X Axis
      yrot+=yspeed;                                           // Increase Rotation On Y Axis

      //Swap buffers
      glj.gljSwap();
      glj.gljFree();
    }

    public void keyTyped(KeyEvent e) {
      //We are not handling any keyboard events yet
    }
    public void keyPressed(KeyEvent e) {
		    //Ensure GL is initialised correctly
		    if (glj.gljMakeCurrent(true) == false)
			return;

      switch(e.getKeyCode()) {
        //Switch ON/OFF light when L is pressed
        case KeyEvent.VK_L:
          if(!lp) {
            lp = true;
            //Toggle light
            light = !light;

            if(!light)
              gl.glDisable(GL_LIGHTING);
            else
              gl.glEnable(GL_LIGHTING);
          }

          break;
        //Switch filter when F is pressed
        case KeyEvent.VK_F:
          if(!fp) {
            fp = true;
            //Change filter
            filter += 1;
            if(filter > 2)
              filter = 0;
          }
          break;
        //Move cube back when user presses PG_UP
        case KeyEvent.VK_PAGE_UP:
          z -= 0.2f;
          break;
        //Move cube forwards when user presses PG_DOWN
        case KeyEvent.VK_PAGE_DOWN:
          z += 0.2f;
          break;
        //Increase X rotation speed when user presses UP
        case KeyEvent.VK_UP:
          xspeed += 0.2f;
          break;
        //Decrease X rotation speed when user presses DOWN
        case KeyEvent.VK_DOWN:
          xspeed -= 0.2f;
          break;
        //Increase Y rotation speed when user presses RIGHT
        case KeyEvent.VK_RIGHT:
          yspeed += 0.2f;
          break;
        //Decrease Y rotation speed when user presses LEFT
        case KeyEvent.VK_LEFT:
          yspeed -= 0.2f;
          break;
        //Switch filter when F is pressed
        case KeyEvent.VK_SPACE:
          if(!sp) {
            sp = true;
            //Change filter
            object += 1;
            if(object > 5)
              object = 0;
          }
          break;
      }
		    glj.gljFree();

    }
    public void keyReleased(KeyEvent e) {
      switch(e.getKeyCode()) {
        //Key has been released
        case KeyEvent.VK_L:
          lp = false;
          break;
        //Key has been released
        case KeyEvent.VK_F:
          fp = false;
          break;
        case KeyEvent.VK_SPACE:
          sp = false;
          break;
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
  static class MyAdapter extends WindowAdapter {
    public void windowClosing(WindowEvent e) {
      System.exit(0);
    }
  }
  public static void main(String as[]) {
		GLContext.gljNativeDebug = true;
		GLContext.gljThreadDebug = false;
		GLContext.gljClassDebug = true;
    Frame f=new Frame("Lesson18");
    Lesson18 a=new Lesson18();
    a.init();
    a.start();
    f.add("Center", a);
    f.setSize(400, 400);
    f.show();
    f.addWindowListener(new MyAdapter());
  }
}
