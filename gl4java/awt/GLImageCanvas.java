/**
 * @(#) GLImageCanvas.java
 */


package gl4java.awt;

import gl4java.*;
import gl4java.utils.*;
import gl4java.utils.textures.*;

import java.awt.*;
import java.net.*;

/**
 * This Class provides a simple universal
 * Image/Texture OpenGL Canvas !
 *
 * A special demo/application for this class can be found
 * in "demos/MiscDemos/GLImageViewerCanvas.java" !
 *
 * @see TextureLoader
 * @author      Sven Goethel
 * 
 */
public class GLImageCanvas extends GLCanvas
{
   int texName[] = {0};
   TextureLoader txtLoader = null;
   boolean newText = false;
   boolean keepAspect = true;
   boolean zoomImg = true;
   
   TextureGrabber textGrab4Snapshot = null;
   String         textGrab4SnapshotFName = null;
   URL            textGrab4SnapshotURL  = null;
   String         textGrab4SnapshotURI  = null;

    public GLImageCanvas(int w, int h)
    {
	super(w, h);
    }

    public void setKeepAspectRatio(boolean v)
    { keepAspect=v; }

    public boolean getKeepAspectRatio()
    { return keepAspect; }

    public void setZoomAble(boolean v)
    { zoomImg = v; }

    public boolean getZoomAble()
    { return zoomImg; }

    public TextureLoader getTextureLoader()
    { return txtLoader; }

    public void setOriginalSize()
    {
	    if(txtLoader!=null && txtLoader.isOk())
	    {
	    	internalSetSize( txtLoader.getImageWidth(),
		                 txtLoader.getImageHeight() );
	    }
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

    /**
     * Creates a snapshot (save texture/image) of the current
     * GL-Context !
     *
     * The snapshot itself is created delayed,
     * so no return value is avaiable.
     * Because this is a non critical path, I hope its enough !
     *
     * @param tg The TextureGrabber
     * @param base The base URL
     * @param uri  The additional uri for the base URL
     * @see TextureGrabber
     */
    public void snapshot(TextureGrabber tg, URL base, String uri)
    {
    	textGrab4Snapshot=tg;
	textGrab4SnapshotURL  = base;
	textGrab4SnapshotURI  = uri;
	repaint();
    }

    public Dimension getPreferredSize() {
        return getMinimumSize();
    }

    public Dimension getMinimumSize() {
        return getSize();
    }

    protected void internalSetSize(int w, int h)
    {
	setSize( w, h );
	invalidate();

    	Window holder = Tool.getWindow(this);

	if(holder!=null)
	{
		holder.invalidate();
		holder.pack();
		holder.repaint();
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
	    
	 gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_CLAMP);
	 gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_CLAMP);
	 gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
	 gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
         gl.glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
	
	 gl.glShadeModel (GL_SMOOTH);
	
	 gl.glClearColor(0.2f, 0.2f, 0.2f, 1.0f);

	 reshape(getSize().width, getSize().height);
    }

    /**
     * Loads an Image of the appropiate type,
     * and renders and resizes the complete window !
     *
     * @param fname The filename
     * @param type The type of file, e.g. TextureLoader is used !
     *             The following types are currently allowed:
     *             "png" for PngTextureLoader,
     *             "ppm" for PPMAsciiTextureLoader,
     *             "tga" for PPMAsciiTextureLoader,
     *             "any" for AWTTextureLoader !
     */
    public boolean loadTexture(String fname, String type)
    {
    	return loadTexture(fname, null, null, type);
    }

    /**
     * Loads an Image of the appropiate type,
     * and renders and resizes the complete window !
     *
     * @param base The base URL
     * @param uri  The additional uri for the base URL
     * @param type The type of file, e.g. TextureLoader is used !
     *             The following types are currently allowed:
     *             "png" for PngTextureLoader,
     *             "ppm" for PPMAsciiTextureLoader,
     *             "tga" for PPMAsciiTextureLoader,
     *             "any" for AWTTextureLoader !
     */
    public boolean loadTexture(URL base, String uri, String type)
    {
    	return loadTexture(null, base, uri, type);
    }

    protected boolean loadTexture(String fname,
    				  URL base, String uri, String type)
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
		   if(fname!=null)
			txtLoader.readTexture(fname);
		   else
			txtLoader.readTexture(base, uri);
		} catch (Exception ex) {
			ex.printStackTrace();
		}
	 }

	 if(ok && txtLoader.isOk())
	 {
	    gl.glEnable(GL_TEXTURE_2D);
	    
	    txtLoader.texImage2DNonScaled(true);

	    gl.glDisable(GL_TEXTURE_2D);
	    System.out.println("texture succesfully loaded !");
	    System.out.println("texture: "+txtLoader);
	 }
	 glj.gljCheckGL();
	 glj.gljFree();
	 if(ok) {
    		internalSetSize( txtLoader.getImageWidth(),
			         txtLoader.getImageHeight() );
	 }
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

      SetCamera();

      // just render it
      gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

      DrawObj(false);

      if(textGrab4Snapshot!=null)
      {
	  textGrab4Snapshot.grabPixels(GL_BACK, 
			               0, 0, cvsGetWidth(), cvsGetHeight());
	  if(textGrab4SnapshotFName!=null)
		  textGrab4Snapshot.write2File(textGrab4SnapshotFName);
	  else
		  textGrab4Snapshot.write2File(textGrab4SnapshotURL,
		  		               textGrab4SnapshotURI);
    	  textGrab4Snapshot     =null;
	  textGrab4SnapshotFName=null;
	  textGrab4SnapshotURL  =null;
	  textGrab4SnapshotURI  =null;
      }
      
      /* For your animation dutys ;-) */
      glj.gljSwap();
      glj.gljCheckGL();
      glj.gljFree();
    }

    /**
     * to prevent a deadlock in recursive
     * reshape .. internalSetSize .. pack .. resize -> reshape !
     */
    private int reshape_resize_sema = 1;

    public void reshape(int w, int h)
    {
        if(reshape_resize_sema>0 &&
	   keepAspect && txtLoader!=null && txtLoader.isOk())
	{
            reshape_resize_sema--;

	    int rw=w; int rh=h;
	    if(zoomImg)
	    {
		double    iaspect = (double)txtLoader.getImageWidth()/
		                    (double)txtLoader.getImageHeight();
		if(rw<rh)
		{
			h = (int) ((rw / iaspect)+0.5);
		} else {
			w = (int) ((rh * iaspect)+0.5);
		}
	    } else {
		w = txtLoader.getImageWidth();
	        h = txtLoader.getImageHeight();
	    }
	    if(rw!=w || rh!=h)
	    {
    		internalSetSize( w, h );
		return ; /* the true resize is coming up ... */
	    }
	}
	reshape_resize_sema=1;
	gl.glViewport (0, 0, w, h);
	SetCamera();
    }


    protected void DrawObj(boolean blend)
    {
	gl.glPushMatrix();
	    if(blend)
	    {
		 gl.glEnable(GL_BLEND);
		 gl.glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
	    }

	    gl.glColor4f(1f,1f,1f,1f);

	    if(txtLoader!=null && txtLoader.isOk())
	    {
		    gl.glEnable(GL_TEXTURE_2D);
		    gl.glBegin(GL_QUADS);

			gl.glNormal3f(0f,0f,1f);
			gl.glTexCoord2f(0f,0f);
			gl.glVertex2f(0f, 0f);

			gl.glNormal3f(0f,0f,1f);
			gl.glTexCoord2f(0f,1f);
			gl.glVertex2f(0f, 1f);
			
			gl.glNormal3f(0f,0f,1f);
			gl.glTexCoord2f(1f,1f);
			gl.glVertex2f(1f, 1f);

			gl.glNormal3f(0f,0f,1f);
			gl.glTexCoord2f(1f,0f);
			gl.glVertex2f(1f, 0f);
			
		    gl.glEnd();
		    gl.glDisable(GL_TEXTURE_2D);
	    }

	    if(blend)
		 gl.glDisable(GL_BLEND);

	gl.glPopMatrix();
    }
    
    protected void SetCamera()
    {
      float imgwidth   = 1f;
      float imgheight  = 1f;
      float txtdx=0f;
      float txtdy=0f;

      if(txtLoader!=null && txtLoader.isOk())
      {
	      Dimension idim = new Dimension(txtLoader.getImageWidth(),
	      		                     txtLoader.getImageHeight());
	      Dimension tdim = new Dimension(txtLoader.getTextureWidth(),
	      		                     txtLoader.getTextureHeight());

	      imgwidth   = (float)idim.width/(float)tdim.width;
	      imgheight  = (float)idim.height/(float)tdim.height;

	      /*
              System.out.println("image : "+idim);
              System.out.println("text  : "+tdim);
              System.out.println("image/text : "+imgwidth+"/"+imgheight);
	      */
      }

      gl.glMatrixMode (GL_PROJECTION);
      gl.glLoadIdentity ();
      glu.gluOrtho2D(0, imgwidth,
      		     0, imgheight);

      gl.glMatrixMode (GL_MODELVIEW);
      gl.glLoadIdentity ();
    }

}

