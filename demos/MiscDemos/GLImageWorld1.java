import gl4java.*;
import gl4java.awt.*;
import gl4java.utils.textures.*;

import java.awt.*;
import java.awt.event.*;
import java.net.*;

public class GLImageWorld1 extends GLCanvas
    implements MouseListener,MouseMotionListener
{
    float     []mPosObjTrans;
    float     []mPosObjRot;

    Point   mousePoint;
    Point   oldMousePoint;
    boolean mouseMoveFlag;
	
    
   TextureGrabber textGrab4Snapshot = null;
   String         textGrab4SnapshotFName = null;

   TextureLoader txtLoader = null;
   int texName[] = {0};
   
    public GLImageWorld1 (int w, int h)
    {
	super(w, h);
    }

    /**
     * Creates a snapshot (save texture/image) of the current
     * GL-Context !
     *
     * The snapshot itself is created delayed,
     * so no return value is avaiable.
     * Because this is a non critical path, I hope its enough !
     *
     * @param tg The TextureGrabber
     * @param fname The filename
     * @see TextureGrabber
     */
    public void snapshot(TextureGrabber tg, String fname) 
    {
    	textGrab4Snapshot=tg;
	textGrab4SnapshotFName=fname;
	repaint();
    }

    public void setOriginalPerspective()
    {
    	setOriginalPerspective(true);
    }

    private void setOriginalPerspective(boolean fetchGL)
    {
	 for(int i=0;i<16;i++)
	     mPosObjTrans[i]=0f;
	 mPosObjTrans[0]=mPosObjTrans[5]=mPosObjTrans[10]=mPosObjTrans[15]=1f;  
	 for(int i=0;i<16;i++)
	     mPosObjRot[i]=0f;
	 mPosObjRot[0]=mPosObjRot[5]=mPosObjRot[10]=mPosObjRot[15]=1f;  

	 if(fetchGL)
	 {
		 if( glj.gljMakeCurrent() == false ) 
		      System.out.println("problem in use() method");
	 }

	 TranlateObj(0f,0f,-10f);
         SetCamera();

	 if(fetchGL)
	 {
		 glj.gljCheckGL();
		 glj.gljFree();
		 repaint();
	 }
    }

    public void preInit()
    {
	// createOwnWindow = true;
    }

    public void init()
    {
	 gl.glEnable(GL_TEXTURE_2D);
	    
	 gl.glGenTextures(1,texName);
	 gl.glBindTexture(GL_TEXTURE_2D,texName[0]);
	    
	 //gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_CLAMP);
	 //gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_CLAMP);
	 //gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
	 //gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
	 gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_CLAMP);
	 gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_CLAMP);
	 gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
	 gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);
         gl.glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

	 // cameraMatrix init   
	 mPosObjTrans=new float[16];
	 mPosObjRot=new float[16];

    	 setOriginalPerspective(false);
	
	 gl.glShadeModel (GL_SMOOTH);
	 gl.glEnable(GL_DEPTH_TEST);
	
	 gl.glClearColor(0.2f, 0.2f, 0.2f, 1.0f);
	 gl.glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	 glj.gljCheckGL();

	 addMouseListener(this);
	 addMouseMotionListener(this);
	 mouseMoveFlag=false;

	 reshape(getSize().width, getSize().height);
    }

    /**
     * These variables are very important
     * to respect the texture-size ratio !
     */
    float texMaxPosX = 1f;
    float texMaxPosY = 1f;

    public boolean loadTexture(String name, String type)
    {
	 boolean ok = true;

	 if( glj.gljMakeCurrent() == false ) 
	 {
	      System.out.println("problem in use() method");
	      return false;
	 }

	 // texture laden
	 if(type.equals("png"))
		 txtLoader = new PngTextureLoader(gl, glu);
	 else if(type.equals("ppm"))
		 txtLoader = new PPMAsciiTextureLoader(gl, glu);
	 else if(type.equals("tga"))
		 txtLoader = new TGATextureLoader(gl, glu);
	 else if(type.equals("any"))
		 txtLoader = new AWTTextureLoader(this, gl, glu);
	 else {
		System.out.println("Imagetype: "+type+" is currently not supported !");
		ok = false;
	 }

	 if(ok)
	 {
		try {
			txtLoader.readTexture(name);
		} catch (Exception ex) {
			ex.printStackTrace();
		}
	 }

	 if(ok && txtLoader.isOk())
	 {
	    gl.glEnable(GL_TEXTURE_2D);
	    
	    txtLoader.texImage2DScaled4BestSize();

	    texMaxPosX = 1f;
	    texMaxPosY = 1f;
	    float texAspect = txtLoader.getTextureWidth()/
	    		      txtLoader.getTextureHeight();

	    if(txtLoader.getTextureWidth()>txtLoader.getTextureHeight())
		    texMaxPosY = 1f/texAspect;
	    else
		    texMaxPosX = texAspect;
	    System.out.println("texture succesfully loaded !");
	    System.out.println("texture: "+txtLoader);
	 }
	 glj.gljCheckGL();
	 glj.gljFree();
	 if(ok)
		repaint();
	 return ok;
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
      
      if(textGrab4Snapshot!=null)
      {
	  textGrab4Snapshot.grabPixels(GL_BACK, 
			               0, 0, cvsGetWidth(), cvsGetHeight());
	  if(textGrab4SnapshotFName!=null)
		  textGrab4Snapshot.write2File(textGrab4SnapshotFName);

    	  textGrab4Snapshot     =null;
	  textGrab4SnapshotFName=null;
      }
      
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
	 
	 if(texName[0]!=0)
		 gl.glEnable(GL_TEXTURE_2D);
	 
	 gl.glEnable(GL_BLEND);
	 gl.glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);

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
		gl.glVertex3f(0f,0f,0f);

		gl.glNormal3f(0f,0f,1f);
		gl.glTexCoord2f(0f,1f);
		gl.glVertex3f(0f,texMaxPosY,0f);
		
		gl.glNormal3f(0f,0f,1f);
		gl.glTexCoord2f(1f,1f);
		gl.glVertex3f(texMaxPosX,texMaxPosY,0f);
		
		gl.glNormal3f(0f,0f,1f);
		gl.glTexCoord2f(1f,0f);
		gl.glVertex3f(texMaxPosX,0f,0f);
	    gl.glEnd();
	gl.glPopMatrix();
    }

    float     winaspect  = 1f;
    float     imgaspect  = 1f;
    float     imgwidth   = 1f;
    float     imgheight  = 1f;

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
	if( glj.gljMakeCurrent() == false ) 
	{
	    System.out.println("problem in use() method");
	    return;
	}
	
	 gl.glMatrixMode (GL_MODELVIEW);
	 gl.glLoadIdentity ();
	  
	 // kamera setzen
	 gl.glRotatef(degree,axisX,axisY,axisZ);
	 gl.glMultMatrixf(mPosObjRot);
	 gl.glGetFloatv(GL_MODELVIEW_MATRIX,mPosObjRot);
	 
	 repaint();
    }
    
    void TranlateObj(float x,float y,float z)
    {
	if( glj.gljMakeCurrent() == false ) 
	{
	    System.out.println("problem in use() method");
	    return;
	}
 
	 gl.glMatrixMode (GL_MODELVIEW);
	 gl.glLoadIdentity ();
	  
	 // kamera setzen
	 gl.glLoadMatrixf(mPosObjTrans);
	 gl.glTranslatef(x,y,z);
	 gl.glGetFloatv(GL_MODELVIEW_MATRIX,mPosObjTrans);
	  
	 repaint();
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
	}
    }
    public void mouseMoved(MouseEvent e)
    {
    }


}

