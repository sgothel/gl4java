
import gl4java.*;
import gl4java.awt.*;
import gl4java.utils.textures.*;
import gl4java.utils.glut.*;
import gl4java.utils.glut.fonts.*;

import java.awt.*;
import java.awt.event.*;
import java.applet.*;
import java.net.*;

public class glutFontBitmapTest2Applet extends Applet 
{
    glutFontBitmapTest2 canvas = null;

    public void init()
    {
        Dimension d = getSize();
        setLayout(new BorderLayout());
	canvas = new glutFontBitmapTest2 (d.width, d.height);
        add("Center", canvas);
    }

    public void start()
    {
    }


    public void stop()
    {
    }

	public static void main( String args[] ) 
	{
		Frame mainFrame = new Frame("font test 2");

		glutFontBitmapTest2Applet applet = 
			new glutFontBitmapTest2Applet();

		applet.setSize(400, 400);
		applet.init();
		applet.start();

		mainFrame.add(applet);

		mainFrame.pack();
		mainFrame.setVisible(true);
	}

	class glutFontBitmapTest2 extends GLCanvas
	    implements MouseListener,MouseMotionListener
	{
	    float     []mPosObjTrans;
	    float     []mPosObjRot;

	    Point   mousePoint;
	    Point   oldMousePoint;
	    boolean mouseMoveFlag;
		
            protected GLUTFunc glut = null;
	    
	   int texName[] = {0};
	   
	    public glutFontBitmapTest2 (int w, int h)
	    {
		super(w, h);
	    }

	    public void init()
	    {
	         glut = new GLUTFuncLightImplWithFonts(gl, glu);

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

                 reshape(getSize().width, getSize().height);
	    }

	    public void display()
	    {
	      int i;

	      /* Standard GL4Java Init */
	      if( glj.gljMakeCurrent() == false ) 
	      {
		System.out.println("problem in use() method");
		return;
	      }

	      // just render it
	      gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	      SetCamera();

	      DrawScene();
	      
	      /* For your animation dutys ;-) */
	      glj.gljSwap();
	      glj.gljCheckGL();
	      glj.gljFree();
	    }

	    public void reshape(int w, int h)
	    {
		gl.glMatrixMode (GL_MODELVIEW);
		gl.glViewport (0, 0, w, h);
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
		    gl.glRasterPos2d(-2.2,-1.2);
		    glut.glutBitmapString(glut.GLUT_BITMAP_8_BY_13,"8x13 Font");
		    gl.glRasterPos2d(-2.2,0.2);
		    glut.glutBitmapString(glut.GLUT_BITMAP_9_BY_15,"9x15 Font");
		    gl.glRasterPos2d(-2.2,1.2);
		    glut.glutBitmapString(glut.GLUT_BITMAP_HELVETICA_10,"Helvetica 10 Font");
		    gl.glRasterPos2d(-2.2,2.2);
		    glut.glutBitmapString(glut.GLUT_BITMAP_HELVETICA_12,"Helvetica 12 Font");
		    gl.glRasterPos2d(-2.2,3.2);
		    glut.glutBitmapString(glut.GLUT_BITMAP_HELVETICA_18,"Helvetica 18 Font");
		    gl.glRasterPos2d(-2.2,4.2);
		    glut.glutBitmapString(glut.GLUT_BITMAP_TIMES_ROMAN_10,"Times Roman 10 Font");
		    gl.glRasterPos2d(-2.2,5.2);
		    glut.glutBitmapString(glut.GLUT_BITMAP_TIMES_ROMAN_24,"Times Roman 24 Font");
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
