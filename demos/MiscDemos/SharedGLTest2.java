import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import gl4java.*;
import gl4java.awt.*;

public class SharedGLTest2 extends Applet 
  implements MouseListener
{  

    MyCanvas canvas = null;
    Button addButton = null;
    int canvasNumber = 0;
    Panel pAllCvs = null;
    Dimension d = null;

    public void init()
    {
        d = getSize();
        setLayout(new BorderLayout());
	addButton = new Button ("add gl");
	addButton.addMouseListener(this);
        add("South", addButton);

	pAllCvs = new Panel();
	pAllCvs.setLayout(new GridLayout(4,1));
        add("Center", pAllCvs);

	canvas = new MyCanvas (d.width/2, d.height/2, null);
	pAllCvs.add(canvas);
	canvasNumber=1;
    }

	public static void main( String args[] ) 
	{
		Frame mainFrame = new Frame("SharedGLTest2");

		SharedGLTest2 applet = new SharedGLTest2();

		applet.setSize(400, 400);
		applet.init();
		applet.start();

		mainFrame.add(applet);

		mainFrame.pack();
		mainFrame.setVisible(true);
	}

    public void start()
    {
    }


    public void stop()
    {
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
    }
    
    public void mouseReleased( MouseEvent evt )
    {
    }
    
    public void mouseClicked( MouseEvent evt )
    {
	Component comp = evt.getComponent();

	if( canvas!=null && comp.equals(addButton) )
	{
	   if(canvasNumber<4)
	   {
		MyCanvas _canvas = 
		  new MyCanvas (d.width/2,d.height/2,canvas.getGLContext());
		pAllCvs.add(_canvas);
		canvasNumber++;
		pAllCvs.invalidate();
		pAllCvs.validate();
	        if(canvasNumber==4)
			addButton.setEnabled(false);
	   }
	}
    }

  private static int callList=0;

  protected class MyCanvas extends GLCanvas 
  {
    public MyCanvas(int w, int h, GLContext shareWith) 
    {
      super(w, h);
      sharedGLContext = shareWith;
    }

    public void init() 
    {
	  if(sharedGLContext==null && callList==0)
	  {
		  buildCallList(); // Really build something only once.
	  }
    }

    public void display() 
    {
  	  if( glj.gljMakeCurrent() == false ) {
    		System.out.println("problem in use() method");
		    return;
  	  }

	  if(callList!=0)
		  gl.glCallList(callList);

	  glj.gljSwap();
	  glj.gljCheckGL();
  	  glj.gljFree();
    }

    /**
     * Build only one call list for both GLCanvas.
     */
    protected void buildCallList()
    { 
      callList = gl.glGenLists(1);

      gl.glNewList(callList, gl.GL_COMPILE);
  	gl.glClearColor(1f, 0f, 0f, 1f);
  	gl.glClear(gl.GL_COLOR_BUFFER_BIT); // Clear the GLCanvas with red.
      gl.glEndList();
    }
  }

}

