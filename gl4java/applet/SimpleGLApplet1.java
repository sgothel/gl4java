/**
 * @(#) SimpleGLApplet.java
 * @(#) author: Sven Goethel
 */

package gl4java.applet;

/* This program is licensed under the LGPL */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import gl4java.GLContext;
import gl4java.GLFunc;
import gl4java.GLUFunc;
import gl4java.awt.GLCanvas;

public class SimpleGLApplet1 extends Applet 
  implements ActionListener,WindowListener
{
    public GLCanvas canvas = null;

    public Button buttonInfo = null;

    Frame fInfo = null;

   /* Initialize the applet */

    public void init()
    {
        setLayout(new BorderLayout());

	buttonInfo = new Button("GL4Java");
	add("South",buttonInfo);
    }


    public void start()
    {
	if(GLContext.gljClassDebug)
		System.out.println("SGLApplet start ..");

	buttonInfo.addActionListener(this);

	canvas.setVisible(true);
	canvas.repaint();
    }


    public void stop()
    {
	if(GLContext.gljClassDebug)
		System.out.println("SGLApplet stop ..");
	buttonInfo.removeActionListener(this);

        canvas.cvsDispose();
    }


    public void destroy()
    {
	if(GLContext.gljClassDebug)
		System.out.println("SGLApplet destroy ..");
	if(fInfo!=null)
	{
		fInfo.dispose();
		fInfo=null;
	}
        canvas.cvsDispose();
    }


    protected void finalize()
    	throws Throwable
    {
	if(GLContext.gljClassDebug)
		System.out.println("SGLApplet finalize ..");
	  
	super.finalize();
    }

    public void actionPerformed(ActionEvent event) 
    {
	    Object source = event.getSource();

	if( source.equals(buttonInfo) )
	{
	  if(fInfo==null && canvas!=null && canvas.getGLContext()!=null)
	     fInfo = showGLInfo();
	}
    }

	public void windowOpened(WindowEvent e)
	{
	}

	public void windowClosing(WindowEvent e)
	{
		Window w = e.getWindow();
		if(w == fInfo && fInfo!=null)
		{
			fInfo.dispose();
			fInfo=null;
		}
	}

	public void windowClosed(WindowEvent e)
	{
		Window w = e.getWindow();
		if(w == fInfo && fInfo!=null)
		{
			fInfo.dispose();
			fInfo=null;
		}
	}

	public void windowIconified(WindowEvent e)
	{
	}

	public void windowDeiconified(WindowEvent e)
	{
	}

	public void windowActivated(WindowEvent e)
	{
	}

	public void windowDeactivated(WindowEvent e)
	{
	}

	public Frame showGLInfo()
	{
		if(canvas==null) return null;

		GLContext glc =  canvas.getGLContext();
		if(glc==null) return null;

		GLFunc    gl  =  glc.getGLFunc();
		if(gl==null) return null;

		GLUFunc   glu =  glc.getGLUFunc();
		if(gl==null) return null;

		Frame f = new Frame("GL4Java Version");
		TextArea info= new TextArea(25, 80);
		info.setEditable(false);
		f.add(info);
		f.setSize(600, 400);

		String str = "null string";
		if( glc.gljMakeCurrent() == false ) 
		{
			str="problem in use() method\n";
		} else {
			str=canvas.getGLContext().gljGetVersions();
			if(str==null)
				str="could not get versions";
			System.out.println(str);
			glc.gljFree();
		}
		info.append(str);

		f.addWindowListener(this);

		f.pack();
		f.setVisible(true);

		return f;
	}
}
