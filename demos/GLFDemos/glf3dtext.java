
import gl4java.*;
import gl4java.drawable.*;
import gl4java.awt.GLAnimCanvas;
import gl4java.applet.SimpleGLAnimApplet1;
import gl4java.utils.textures.*;
import gl4java.utils.glf.*;

import java.awt.*;
import java.awt.event.*;
import java.applet.*;
import java.net.*;

public class glf3dtext extends SimpleGLAnimApplet1 
{
    public void init()
    {
	super.init();
	GLContext.gljNativeDebug = false;
	GLContext.gljClassDebug = false;

        Dimension d = getSize();

        GLCapabilities caps = new GLCapabilities();

        canvas =
            GLDrawableFactory.getFactory().createGLAnimCanvas(caps, d.width, d.height);

        glf3dtextRenderer renderer = new glf3dtextRenderer();
        canvas.addGLEventListener(renderer);

        add("Center", canvas);
        addMouseListener(this);
    }

	public static void main( String args[] ) 
	{
		Frame mainFrame = new Frame("font test 2");

		glf3dtext applet = new glf3dtext();

		applet.setSize(400, 400);
		applet.init();
		applet.start();

		mainFrame.add(applet);

		mainFrame.pack();
		mainFrame.setVisible(true);
	}

	class glf3dtextRenderer
	    implements GLEventListener, MouseListener,MouseMotionListener
	{
	    float     []mPosObjTrans;
	    float     []mPosObjRot;

	    Point   mousePoint;
	    Point   oldMousePoint;
	    boolean mouseMoveFlag;
		
            private GLFunc gl;
            private GLUFunc glu;
	    private GLContext glj;

            protected GLF glf = null;

	    int fArial1 = 0;
	    int fArialBMF = 0;

	    int fTechno1 = 0;
	    int fTechnoBMF = 0;

	    int fTimesNew1 = 0;
	    int fTimesNewBMF = 0;
	    
	    public glf3dtextRenderer ()
	    {
		super();
	    }

            public void init(GLDrawable drawable)
	    {
                 gl = drawable.getGL();
                 glu = drawable.getGLU();
                 glj = drawable.getGLContext();

	         glf = new GLF();

		 fArial1 = glf.glfLoadFont("arial1.glf");
		 fArialBMF = glf.glfLoadBFont("arial.bmf");

		 fTechno1 = glf.glfLoadFont("techno1.glf");
		 fTechnoBMF = glf.glfLoadBFont("techno.bmf");

		 fTimesNew1 = glf.glfLoadFont("times_new1.glf");
		 fTimesNewBMF = glf.glfLoadBFont("times_new.bmf");

		 // cameraMatrix init   
		 mPosObjTrans=new float[16];
		 for(int i=0;i<16;i++)
		     mPosObjTrans[i]=0f;
		 mPosObjTrans[0]=mPosObjTrans[5]=mPosObjTrans[10]=mPosObjTrans[15]=1f;  
		
		 mPosObjRot=new float[16];
		 for(int i=0;i<16;i++)
		     mPosObjRot[i]=0f;
		 mPosObjRot[0]=mPosObjRot[5]=mPosObjRot[10]=mPosObjRot[15]=1f;  
		
		 TranlateObj(0f,0f,-10f);
		
		 gl.glShadeModel (GL_SMOOTH);
		 gl.glEnable(GL_DEPTH_TEST);
		
		 gl.glClearColor(0.2f, 0.2f, 0.2f, 1.0f);
		 gl.glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
		 glj.gljCheckGL();

		 canvas.addMouseListener(this);
		 canvas.addMouseMotionListener(this);
		 mouseMoveFlag=false;
	    }

            public void cleanup(GLDrawable drawable)
            {
                 System.out.println("destroy(): " + this);
                 removeMouseListener(this);
                 removeMouseMotionListener(this);
            }
    
            public void display(GLDrawable drawable)
	    {
	      int i;

	      // just render it
	      gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	      SetCamera();

	      DrawScene();
	      
	      glj.gljCheckGL();
	    }

            public void preDisplay(GLDrawable drawable)
	    {
	    }

            public void postDisplay(GLDrawable drawable)
	    {
	    }

            public void reshape(gl4java.drawable.GLDrawable gld,int width,int height)
	    {
		gl.glMatrixMode (GL_MODELVIEW);
		gl.glViewport (0, 0, width, height);
		gl.glLoadIdentity();
		SetCamera();
	    }


	    public void drawGrid(float x0, float y0,
				 float width, float height, float step)
	    {
		float i,j;

		/* draw grid */
		gl.glBegin(GL_LINES);
		for(i=x0;i<width;i+=step)
			for(j=y0;j<height;j+=step)
			{
				if(i==0f && j==0f)
					gl.glColor3f (1f,0f,0f);
				else
					gl.glColor3f (0.6f,0.5f,0.5f);
				gl.glVertex2f(0f,j);
				gl.glVertex2f(width,j);
				gl.glVertex2f(i,height);
				gl.glVertex2f(i,0f);
			}
		gl.glEnd();
	    }

	    void DrawScene()
	    {
		 gl.glMatrixMode (GL_MODELVIEW);
		 gl.glLoadIdentity ();
		  
		 // kamera setzen
		 gl.glLoadMatrixf(mPosObjTrans);
		 gl.glMultMatrixf(mPosObjRot);
		  
		 gl.glPushMatrix();
		    drawGrid(0f, 0f, 10f, 10f, 0.5f);
		 gl.glPopMatrix();

		 // obj zeichnen
		 gl.glPushMatrix();
		    gl.glColor3d(0.3,0,0);
		
		    gl.glBegin(GL_POLYGON);
		    gl.glVertex2d(0,-0.5);
		    gl.glVertex2d(0.5,0.5);
		    gl.glVertex2d(-0.5,0.5);
		    gl.glEnd();

		    gl.glColor3d(1,1,1);
		 gl.glPopMatrix();

		 gl.glPushMatrix();
		    gl.glScalef(0.5f, 0.5f, 0.5f);
		    gl.glTranslatef(-2.2f,-4f,0.5f);

		    gl.glTranslatef(0f,2f,0f);
		    glf.glfDraw3DWiredStringF(fArial1, "Arial - GLF 3D Text");

		    gl.glTranslatef(0f,2f,0f);
		    glf.glfDraw3DSolidStringF(fArial1, "Arial - GLF 3D Text");

		    gl.glTranslatef(0f,2f,0f);
		    glf.glfDraw3DWiredStringF(fTechno1, "Techno - GLF 3D Text");

		    gl.glTranslatef(0f,2f,0f);
		    glf.glfDraw3DSolidStringF(fTechno1, "Techno - GLF 3D Text");
		    
		    gl.glTranslatef(0f,2f,0f);
		    glf.glfDraw3DWiredStringF(fTimesNew1, "TimesNew - GLF 3D Text");

		    gl.glTranslatef(0f,2f,0f);
		    glf.glfDraw3DSolidStringF(fTimesNew1, "TimesNew - GLF 3D Text");

		    gl.glTranslatef(0f,2f,0f);
		    glf.glfBeginBFont(fArialBMF);
		    glf.glfDrawBString("Arial BMF - GLF 3D Text");
		    glf.glfEndBFont();

		    gl.glTranslatef(0f, 2f, 0f);
		    glf.glfBeginBFont(fTechnoBMF);
		    glf.glfDrawBString("Techno BMF - GLF 3D Text");
		    glf.glfEndBFont();

		    gl.glTranslatef(0f, 2f, 0f);
		    glf.glfBeginBFont(fTimesNewBMF);
		    glf.glfDrawBString("TimesNew BMF - GLF 3D Text");
		    glf.glfEndBFont();

		 gl.glPopMatrix();
	    }
	    
	    void SetCamera()
	    {
		    Dimension   dim=getSize();
		    float       aspect=(float)dim.width/(float)dim.height;

		    gl.glMatrixMode (GL_PROJECTION);
		    gl.glLoadIdentity ();
		    glu.gluPerspective(60f,aspect,.01,100);
	    }
	   
	    void RotateObj(float  degree,
			   float  axisX,
			   float  axisY,
			   float  axisZ)
	    {
		 gl.glMatrixMode (GL_MODELVIEW);
		 gl.glLoadIdentity ();
		  
		 // kamera setzen
		 gl.glRotatef(degree,axisX,axisY,axisZ);
		 gl.glMultMatrixf(mPosObjRot);
		 gl.glGetFloatv(GL_MODELVIEW_MATRIX,mPosObjRot);
	    }
	    
	    void TranlateObj(float x,float y,float z)
	    {
		 gl.glMatrixMode (GL_MODELVIEW);
		 gl.glLoadIdentity ();
		  
		 // kamera setzen
		 gl.glLoadMatrixf(mPosObjTrans);
		 gl.glTranslatef(x,y,z);
		 gl.glGetFloatv(GL_MODELVIEW_MATRIX,mPosObjTrans);
	    }
	    
	    // entfernt rotationen aus aktueller matrix
	    double Billboard() 
	    {
		float[] mat=new float[16];

		gl.glGetFloatv(GL_MODELVIEW_MATRIX,mat);
		mat[0] = mat[5] = mat[10] = 1;
		mat[1] = mat[2] = mat[4] = mat[6] = mat[8] = mat[9] = 0;
		gl.glLoadMatrixf(mat);

		return mat[14];
	    }
	    
            // Methods required for the implementation of MouseListener
            public void mouseEntered( MouseEvent evt )
            {
            }
        
            public void mouseExited( MouseEvent evt )
            {
            }
        
            public void mousePressed( MouseEvent evt )
            {
                if(mouseMoveFlag==false)
                {   // start drag
            	mouseMoveFlag=true;
            	mousePoint=evt.getPoint();
                }
            }
        
            public void mouseReleased( MouseEvent evt )
            {
                mouseMoveFlag=false;
            }
        
            public void mouseClicked( MouseEvent evt )
            {
            	Component comp = evt.getComponent();
            }
        
            public void mouseDragged(MouseEvent e)
            {
                if(mouseMoveFlag==true)
                {
            	    oldMousePoint=new Point(mousePoint);
            	    mousePoint=e.getPoint();
            	
            	    Point   dif=new Point(mousePoint.x-oldMousePoint.x,
            				  mousePoint.y-oldMousePoint.y);    
            	    
		    if( glj.gljMakeCurrent() == false ) 
		    {
		        System.out.println("problem in use() method");
		        return;
		    }
		
            	   if(e.isShiftDown()==true)
            	    TranlateObj((float)dif.x/6.0f,(float)dif.y/-6.0f,0f);
            	   else if(e.isAltDown()==true)
            	   {
            	    TranlateObj(0f,0f,(float)dif.y/6.0f);
            	    RotateObj(dif.x,0f,0f,1f);
                   }
            	   else
            	   {
            	    RotateObj(dif.x,0f,1f,0f);
            	    RotateObj(dif.y,1f,0f,0f);
                   }

	           glj.gljFree();

		   repaint();

                }
            }
            public void mouseMoved(MouseEvent e)
            {
            }


	}
}
