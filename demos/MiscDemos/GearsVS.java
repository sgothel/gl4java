/**
 * @(#) gears.java
 * @(#) author: Brian Paul (converted to Java by Ron Cemer)
 *
 * This is a modification of the standard gears demo so that it
 * uses the Virutal Sphere for converting mouse input to 3D
 * rotation.    --- Joe Huwaldt, Feburary 20, 2001
 *
 */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;
import gl4java.*;
import gl4java.drawable.*;
import gl4java.awt.GLAnimCanvas;
import gl4java.applet.SimpleGLAnimApplet1;
import jahuwaldt.gl.*;


/**
*  A version of the standard "gears" OpenGL demo
*  modified to use the Virtual Sphere algorithm for
*  converting 2D mouse movement into 3D model rotation.
**/
public class GearsVS extends SimpleGLAnimApplet1 {

    /* Initialize the applet */


	public void init() {
		super.init();
        Dimension d = getSize();

        GLCapabilities caps = new GLCapabilities();
	//caps.setDoubleBuffered(false);
 
        canvas =
            GLDrawableFactory.getFactory().createGLAnimCanvas(caps, d.width, d.height);
 
        GearsVSRenderer gear = new GearsVSRenderer(true);
        canvas.addGLEventListener(gear);

        add("Center", canvas);
	}

	public static void main( String args[] ) {
		GLContext.gljNativeDebug = true;
		GLContext.gljClassDebug = true;

		Frame mainFrame = new Frame("Gears with Virtual Sphere");

		mainFrame.addWindowListener( new WindowAdapter() {
				public void windowClosed(WindowEvent e) {
					System.exit(0);
				}
				public void windowClosing(WindowEvent e) {
					System.exit(0);
				}
			} );

		Applet applet = new GearsVS();
		mainFrame.add(applet);
		applet.setSize(400, 500);
		applet.init();
		applet.start();

                Dimension ps = applet.getPreferredSize();
                mainFrame.setBounds(-100,-100,99,99);
                mainFrame.setVisible(true);
                mainFrame.setVisible(false);
                mainFrame.setVisible(true);
                Insets is = mainFrame.getInsets();
                mainFrame.setBounds(0,0,
                            ps.width+is.left+is.right,
                            ps.height+is.top+is.bottom);
                mainFrame.setVisible(true);
	}

    private class GearsVSRenderer implements GLEventListener, MouseListener, MouseMotionListener {
        private static final float M_PI = 3.14159265359f;
        private int gear1, gear2, gear3;
        private float angle = 0.0f;

        private boolean showGL = false;
    
        private Point prevMouse;
        private boolean mouseRButtonDown = false;
        private float rot_matrix[] = Matrix.identity();
    
    	// Class variables required to implement the virtual sphere.
    	private VirtualSphere vs = new VirtualSphere();
    	private Point cueCenter = new Point();
    	private int cueRadius;
    	private boolean mouseDown = false;
    	
	private GLFunc gl;
	private GLUFunc glu;
	private GLContext glj;
    	
	Graphics gc = null;

        public GearsVSRenderer(boolean showGL)
        {
	    this.showGL=showGL;
        }
    
        public void init(GLDrawable drawable) {
	    gl = drawable.getGL();
	    glu = drawable.getGLU();
	    glj = drawable.getGLContext();

	    GLAnimCanvas cvs = (GLAnimCanvas)drawable;

            Dimension size = cvs.getSize();
	    setupVS(size.width, size.height);

            setInitialRotation();

            float pos[] = { 5.0f, 5.0f, 10.0f, 0.0f };
            float red[] = { 0.8f, 0.1f, 0.0f, 1.0f };
            float green[] = { 0.0f, 0.8f, 0.2f, 1.0f };
            float blue[] = { 0.2f, 0.2f, 1.0f, 1.0f };

            gl.glClearColor(0f, 0f, 0f, 0f);

            gl.glLightfv(GL_LIGHT0, GL_POSITION, pos);
            gl.glEnable(GL_CULL_FACE);
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glEnable(GL_DEPTH_TEST);
            
                /* make the gears */
            gear1 = gl.glGenLists(1);
            gl.glNewList(gear1, GL_COMPILE);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, red);
            gear(1.0f, 4.0f, 1.0f, 20, 0.7f);
            gl.glEndList();
            
            gear2 = gl.glGenLists(1);
            gl.glNewList(gear2, GL_COMPILE);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, green);
            gear(0.5f, 2.0f, 2.0f, 10, 0.7f);
            gl.glEndList();
            
            gear3 = gl.glGenLists(1);
            gl.glNewList(gear3, GL_COMPILE);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, blue);
            gear(1.3f, 2.0f, 0.5f, 10, 0.7f);
            gl.glEndList();
            
            gl.glEnable(GL_NORMALIZE);
                
            glj.gljCheckGL();

            drawable.addMouseListener(this);
            drawable.addMouseMotionListener(this);

	    System.out.println("init ..");
        }
    
	public void cleanup(GLDrawable drawable)
	{
		System.out.println("destroy(): " + this);
		drawable.removeMouseListener(this);
		drawable.removeMouseMotionListener(this);
        }

        public void reshape(gl4java.drawable.GLDrawable gld, int width, int height) {
            float h = (float)height / (float)width;
            
            gl.glViewport(0,0,width,height);
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            gl.glFrustum(-1.0f, 1.0f, -h, h, 5.0f, 60.0f);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
            gl.glTranslatef(0.0f, 0.0f, -40.0f);
            
            // Resize the virtual sphere too!
            setupVS(width, height);
        }
        
        public void preDisplay(GLDrawable drawable)
        {
        }

        public void display(GLDrawable drawable) 
	{
	    
	    if(showGL)
	    {
	    	showGL=false;
		System.out.println("GL VERSION : "+gl.glGetString(GL_VERSION));
		System.out.println("GL RENDERER: "+gl.glGetString(GL_RENDERER));
		System.out.println("GL VENDOR  : "+gl.glGetString(GL_VENDOR));
	    }

            angle += 0.5f;

            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            
            gl.glPushMatrix();
            gl.glMultMatrixf(rot_matrix);
            
            gl.glPushMatrix();
            gl.glTranslatef(-3.0f, -2.0f, 0.0f);
            gl.glRotatef(angle, 0.0f, 0.0f, 1.0f);
            gl.glCallList(gear1);
            gl.glPopMatrix();
            
            gl.glPushMatrix();
            gl.glTranslatef(3.1f, -2.0f, 0.0f);
            gl.glRotatef(-2.0f * angle - 9.0f, 0.0f, 0.0f, 1.0f);
            gl.glCallList(gear2);
            gl.glPopMatrix();
            
            gl.glPushMatrix();
            gl.glTranslatef(-3.1f, 4.2f, 0.0f);
            gl.glRotatef(-2.0f * angle - 25.0f, 0.0f, 0.0f, 1.0f);
            gl.glCallList(gear3);
            gl.glPopMatrix();
            
            gl.glPopMatrix();

        }

        public void postDisplay(GLDrawable drawable)
        {
	    // If the mouse is down, draw the virtual sphere 2D representation.
    	    if (mouseDown)
    		drawVS(drawable);
        }
		/**
		*  Set up the virtual sphere cue center and radius.
		**/
        private void setupVS(int w, int h) {
        	cueCenter.x = w/2;
        	cueCenter.y = h/2;
        	
        	cueRadius = Math.min(w-20, h-20)/2;
        }
        
        /**
        *  Render a 2D representation of the virtual sphere
        *  to give the user some visual feedback.
        **/
		private void drawVS(GLDrawable drawable) {
	    	        GLAnimCanvas cvs = (GLAnimCanvas)drawable;

			if(gc==null)
				gc = cvs.getGraphics();
			Color saveColor = gc.getColor();
			gc.setColor(Color.gray);
    		
    		vs.draw(gc, prevMouse, cueCenter, cueRadius);
    		
			gc.setColor(saveColor);
		}
		
        private void gear
            (float inner_radius,
             float outer_radius,
             float width,
             int teeth,
             float tooth_depth)
        {
            int i;
            float r0, r1, r2;
            float angle, da;
            float u, v, len;

            r0 = inner_radius;
            r1 = outer_radius - tooth_depth / 2.0f;
            r2 = outer_radius + tooth_depth / 2.0f;
            
            da = 2.0f * M_PI / teeth / 4.0f;
            
            gl.glShadeModel(GL_FLAT);

            gl.glNormal3f(0.0f, 0.0f, 1.0f);

                /* draw front face */
            gl.glBegin(GL_QUAD_STRIP);
            for (i = 0; i <= teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), width * 0.5f);
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3.0f * da), r1 * (float)Math.sin(angle + 3.0f * da), width * 0.5f);
            }
            gl.glEnd();

                /* draw front sides of teeth */
            gl.glBegin(GL_QUADS);
            da = 2.0f * M_PI / teeth / 4.0f;
            for (i = 0; i < teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + da), r2 * (float)Math.sin(angle + da), width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + 2.0f * da), r2 * (float)Math.sin(angle + 2.0f * da), width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3.0f * da), r1 * (float)Math.sin(angle + 3.0f * da), width * 0.5f);
            }
            gl.glEnd();
    
            gl.glNormal3f(0.0f, 0.0f, -1.0f);
    
                /* draw back face */
            gl.glBegin(GL_QUAD_STRIP);
            for (i = 0; i <= teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), -width * 0.5f);
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), -width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3 * da), r1 * (float)Math.sin(angle + 3 * da), -width * 0.5f);
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), -width * 0.5f);
            }
            gl.glEnd();
    
                /* draw back sides of teeth */
            gl.glBegin(GL_QUADS);
            da = 2.0f * M_PI / teeth / 4.0f;
            for (i = 0; i < teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3 * da), r1 * (float)Math.sin(angle + 3 * da), -width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + 2 * da), r2 * (float)Math.sin(angle + 2 * da), -width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + da), r2 * (float)Math.sin(angle + da), -width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), -width * 0.5f);
            }
            gl.glEnd();
    
                /* draw outward faces of teeth */
            gl.glBegin(GL_QUAD_STRIP);
            for (i = 0; i < teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle), r1 * (float)Math.sin(angle), -width * 0.5f);
                u = r2 * (float)Math.cos(angle + da) - r1 * (float)Math.cos(angle);
                v = r2 * (float)Math.sin(angle + da) - r1 * (float)Math.sin(angle);
                len = (float)Math.sqrt(u * u + v * v);
                u /= len;
                v /= len;
                gl.glNormal3f(v, -u, 0.0f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + da), r2 * (float)Math.sin(angle + da), width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + da), r2 * (float)Math.sin(angle + da), -width * 0.5f);
                gl.glNormal3f((float)Math.cos(angle), (float)Math.sin(angle), 0.0f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + 2 * da), r2 * (float)Math.sin(angle + 2 * da), width * 0.5f);
                gl.glVertex3f(r2 * (float)Math.cos(angle + 2 * da), r2 * (float)Math.sin(angle + 2 * da), -width * 0.5f);
                u = r1 * (float)Math.cos(angle + 3 * da) - r2 * (float)Math.cos(angle + 2 * da);
                v = r1 * (float)Math.sin(angle + 3 * da) - r2 * (float)Math.sin(angle + 2 * da);
                gl.glNormal3f(v, -u, 0.0f);
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3 * da), r1 * (float)Math.sin(angle + 3 * da), width * 0.5f);
                gl.glVertex3f(r1 * (float)Math.cos(angle + 3 * da), r1 * (float)Math.sin(angle + 3 * da), -width * 0.5f);
                gl.glNormal3f((float)Math.cos(angle), (float)Math.sin(angle), 0.0f);
            }
            gl.glVertex3f(r1 * (float)Math.cos(0), r1 * (float)Math.sin(0), width * 0.5f);
            gl.glVertex3f(r1 * (float)Math.cos(0), r1 * (float)Math.sin(0), -width * 0.5f);
            gl.glEnd();
    
            gl.glShadeModel(GL_SMOOTH);
    
                /* draw inside radius cylinder */
            gl.glBegin(GL_QUAD_STRIP);
            for (i = 0; i <= teeth; i++)
            {
                angle = i * 2.0f * M_PI / teeth;
                gl.glNormal3f(-(float)Math.cos(angle), -(float)Math.sin(angle), 0.0f);
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), -width * 0.5f);
                gl.glVertex3f(r0 * (float)Math.cos(angle), r0 * (float)Math.sin(angle), width * 0.5f);
            }
            gl.glEnd();
        }

            // Reset the rotation matrix to the default view.
        private void setInitialRotation() {

    		Matrix.rotateY(Matrix.deg2Rad(30), rot_matrix);
    		Matrix.rotateX(Matrix.deg2Rad(20), rot_matrix);
            fixRotationMatrix();
        }

        private void fixRotationMatrix()
        {
                // Fix any problems with the rotation matrix.
            rot_matrix[3] =
                rot_matrix[7] =
                rot_matrix[11] =
                rot_matrix[12] =
                rot_matrix[13] =
                rot_matrix[14] = 0.0f;
            rot_matrix[15] = 1.0f;
            float fac;
            if ((fac = (float)Math.sqrt
                ((rot_matrix[0]*rot_matrix[0]) +
                 (rot_matrix[4]*rot_matrix[4]) +
                 (rot_matrix[8]*rot_matrix[8]))) != 1.0f)
            {
                if (fac != 0.0f)
                {
                    fac = 1.0f/fac;
                    rot_matrix[0] *= fac;
                    rot_matrix[4] *= fac;
                    rot_matrix[8] *= fac;
                }
            }
            if ((fac = (float)Math.sqrt
                ((rot_matrix[1]*rot_matrix[1]) +
                 (rot_matrix[5]*rot_matrix[5]) +
                 (rot_matrix[9]*rot_matrix[9]))) != 1.0f)
            {
                if (fac != 0.0f)
                {
                    fac = 1.0f/fac;
                    rot_matrix[1] *= fac;
                    rot_matrix[5] *= fac;
                    rot_matrix[9] *= fac;
                }
            }
            if ((fac = (float)Math.sqrt
                ((rot_matrix[2]*rot_matrix[2]) +
                 (rot_matrix[6]*rot_matrix[6]) +
                 (rot_matrix[10]*rot_matrix[10]))) != 1.0f)
            {
                if (fac != 0.0f)
                {
                    fac = 1.0f/fac;
                    rot_matrix[2] *= fac;
                    rot_matrix[6] *= fac;
                    rot_matrix[10] *= fac;
                }
            }
        }

        // Methods required for the implementation of MouseListener
        public void mouseEntered( MouseEvent evt )
        {
        }
    
        public void mouseExited( MouseEvent evt )
        {
        }
    
        public void mousePressed( MouseEvent evt ) {
        
        	mouseDown = true;
            prevMouse = evt.getPoint();
            if ((evt.getModifiers() & evt.BUTTON3_MASK) != 0) {
                mouseRButtonDown = true;
                evt.consume();
            }
        }
    
        public void mouseReleased( MouseEvent evt ) {
        
        	mouseDown = false;
            if ((evt.getModifiers() & evt.BUTTON3_MASK) != 0) {
                mouseRButtonDown = false;
                evt.consume();
            }
        }
    
        public void mouseClicked( MouseEvent evt )
        {
        }
    
        // Methods required for the implementation of MouseMotionListener
        float[] mouseMtx = new float[16];	//	The rot-matrix calculated by the virtual sphere.
        public void mouseDragged( MouseEvent evt )
        {
            Point newMouse = evt.getPoint();
    
    		if (newMouse.x != prevMouse.x || newMouse.y != prevMouse.y) {
    		
    			// Use virtual sphere to determine an incremental rotation matrix.
    			vs.makeRotationMtx(prevMouse, newMouse, cueCenter, cueRadius, mouseMtx);
    			
    			// Multiply overall rotation matrix by incremental rot-matrix to get new rotation.
    			rot_matrix = Matrix.multiply(rot_matrix, mouseMtx);
            	fixRotationMatrix();
    			
            	prevMouse = newMouse;
           }
           
           evt.consume();
            
        }
    
        public void mouseMoved( MouseEvent evt )
        {
        }
    }
}

