import gl4java.awt.*;
import java.applet.*;
import java.awt.*;
import java.awt.Dimension;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import gl4java.*;

public class coloredCross extends Applet 
{
    MyCanvas canvas = null;

    public void init()
    {
        Dimension d = getSize();
        setLayout(new BorderLayout());
	canvas = new MyCanvas (d.width, d.height);
        add("Center", canvas);
    }

	public static void main( String args[] ) 
	{
		Frame mainFrame = new Frame("coloredCross");

		coloredCross applet = new coloredCross();

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

    protected class MyCanvas extends GLCanvas 
    {
	public MyCanvas(int w, int h) {
	    super(w,h);
	    GLContext.gljNativeDebug = false;
	    GLContext.gljClassDebug  = false;
	}

	public void init() {
	    reshape(getSize().width, getSize().height);
	}

	public void display() 
	{
	   /* Standard GL4Java Init */
	   if( glj.gljMakeCurrent() == false ) 
	   {
		System.out.println("problem in use() method");
		return;
	   }

	    System.out.println("display()");

	    gl.glPushMatrix();
	    gl.glClear(GL_COLOR_BUFFER_BIT);

	    gl.glBegin(GLEnum.GL_LINES);
	        gl.glColor4f(0f, 0f, 1f, 1f);
                gl.glVertex3i( 0, 0, 0);
                gl.glVertex3i( 10, 10, 0);

	        gl.glColor4f(0f, 1f, 0f, 1f);
                gl.glVertex3i( 0, 10, 0);
		gl.glVertex3i( 10, 0, 0);

	        gl.glColor4f(1f, 0f, 0f, 1f);
                gl.glVertex3i( 0, 5, 0);
		gl.glVertex3i( 10, 5, 0);

	        gl.glColor4f(1f, 1f, 1f, 1f);
                gl.glVertex3i( 5, 0, 0);
		gl.glVertex3i( 5, 10, 0);
            gl.glEnd();

	    gl.glPopMatrix();

	   /* For your animation dutys ;-) */
	   glj.gljSwap();
	   glj.gljCheckGL();
	   glj.gljFree();

	    System.out.println("display() done");

	}

        public void reshape( int width, int height )
        {
		gl.glViewport(0, 0, width, height);
		gl.glMatrixMode(GL_PROJECTION);
		gl.glLoadIdentity();
		gl.glOrtho(0, 10, 0, 10, -50.0,50.0);
		gl.glMatrixMode(GL_MODELVIEW);
        }    
    }    
}
