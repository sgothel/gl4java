///////////////////////////////////////////////////
//  pngTextureTest in opgl
///////////////////////////////////////////////////
//  progMaxRheiner
///////////////////////////////////////////////////
//  5.12.1999
///////////////////////////////////////////////////

import gl4java.*;
import gl4java.awt.*;
import gl4java.utils.textures.*;

import java.awt.*;
import java.awt.event.*;
import java.applet.*;
import java.net.*;

public class pngTextureTestApplet extends Applet 
{
    pngTextureTest canvas = null;
    boolean isAnApplet = true;

    public void init()
    {
        Dimension d = getSize();
        setLayout(new BorderLayout());
	if(isAnApplet)
		canvas = new pngTextureTest (d.width, d.height, getCodeBase());
	else
		canvas = new pngTextureTest (d.width, d.height, null);
        add("Center", canvas);
    }

	public static void main( String args[] ) {
		pngTextureTestApplet applet = 
		         new pngTextureTestApplet();

		Frame f = new Frame("pngTextureTestApplet");

		f.addWindowListener( new WindowAdapter()
				{
					public void windowClosed(WindowEvent e)
					{
						System.exit(0);
					}
					public void windowClosing(WindowEvent e)
					{
						windowClosed(e);
					}
				}
			);

		f.setLayout(new BorderLayout());
		f.add("Center", applet);
		applet.setSize(500,300);
		applet.isAnApplet = false;
		applet.init();
		applet.start();
		Dimension ps = applet.getPreferredSize();
		f.setBounds(-100,-100,99,99);
		f.setVisible(true);
		f.setVisible(false);
		f.setVisible(true);
		Insets i = f.getInsets();
		f.setBounds(0,0,
			    ps.width+i.left+i.right, 
		            ps.height+i.top+i.bottom);
		f.setVisible(true);
	}
    public void start()
    {
    }


    public void stop()
    {
    }

	class pngTextureTest extends GLCanvas
	    implements MouseListener,MouseMotionListener
	{
	    float     []mPosObjTrans;
	    float     []mPosObjRot;

	    Point   mousePoint;
	    Point   oldMousePoint;
	    boolean mouseMoveFlag;
		
	    
	   int texName[] = {0};
	   URL base;
	   
	    public pngTextureTest (int w, int h, URL base)
	    {
		super(w, h);
		this.base=base;
	    }

            public void preInit()
            {
	    	createOwnWindow = true;
            }
    
	    public void init()
	    {
		 // texture laden
		 PngTextureLoader txtLoader1 = new PngTextureLoader(gl, glu);
		 if(base!=null)
			 txtLoader1.readTexture(base, "tex/DAISYX.png");
		 else {
		 	try {
			        txtLoader1.readTexture("tex/DAISYX.png");
			} catch (Exception ex) {
				ex.printStackTrace();
			}
		 }

		 byte[] pixels1 = txtLoader1.getTexture();

		 if(txtLoader1.isOk())
		 {
		    gl.glEnable(GL_TEXTURE_2D);
		    
		    // JAU: let's show us the scaled, 
		    // and the tricky one using glTexSubImage2D
		    gl.glGenTextures(1,texName);
		    gl.glBindTexture(GL_TEXTURE_2D,texName[0]);
		    
		    gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_CLAMP);
		    gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_CLAMP);
		    gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
		    gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		    
		    txtLoader1.texImage2DNonScaled(true);
		    // The Scaled Way
		    // txtLoader1.texImage2DScaled2Pow2();

		     gl.glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
		     System.out.println("texture succesfully loaded !");
		     System.out.println("texture: "+txtLoader1);
		 }
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
		    gl.glDisable(GL_TEXTURE_2D);
		    drawGrid(0f, 0f, 10f, 10f, 0.5f);
		 gl.glPopMatrix();

		 // obj zeichnen

		 gl.glPushMatrix();
		    gl.glScalef(2f,2f,2f);
		    gl.glColor3f(1f,0f,0f);
		    gl.glDisable(GL_TEXTURE_2D);
		    DrawObj();
		 gl.glPopMatrix();
		 
		 gl.glEnable(GL_BLEND);
		 gl.glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);

		 if(texName[0]!=0)
			 gl.glEnable(GL_TEXTURE_2D);
		 
		 gl.glColor3f(1f,1f,1f);

		 gl.glPushMatrix();
		    gl.glScalef(3f,3f,3f);
		    gl.glTranslatef(-1f,0f,1f);
		    DrawObj();
		 gl.glPopMatrix();

		 gl.glPushMatrix();
		    gl.glScalef(3f,3f,3f);
		    gl.glTranslatef(1f,0f,1f);
		    DrawObj();
		 gl.glPopMatrix();
		 
		 gl.glPushMatrix();
		    gl.glScalef(3f,3f,3f);
		    gl.glTranslatef(-2f,1f,1f);
		    Billboard();
		    DrawObj();
		 gl.glPopMatrix();
		 
		 gl.glDisable(GL_BLEND);
	    }
	    
	    void DrawObj()
	    {
		gl.glPushMatrix();
		    gl.glBegin(GL_QUADS);
			gl.glNormal3f(0f,0f,1f);
			gl.glTexCoord2f(0f,0f);
			gl.glVertex3f(-.5f,-.5f,0f);

			gl.glNormal3f(0f,0f,1f);
			gl.glTexCoord2f(0f,1f);
			gl.glVertex3f(.5f,-.5f,0f);
			
			gl.glNormal3f(0f,0f,1f);
			gl.glTexCoord2f(1f,1f);
			gl.glVertex3f(.5f,.5f,0f);
			
			gl.glNormal3f(0f,0f,1f);
			gl.glTexCoord2f(1f,0f);
			gl.glVertex3f(-.5f,.5f,0f);
		    gl.glEnd();
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
	    

	}
}
