/**
 * @(#) SimpleGLAnimApplet.java
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
import gl4java.awt.GLAnimCanvas;

public class SimpleGLAnimApplet1 extends Applet 
  implements MouseListener, WindowListener, ActionListener, ItemListener
{
    public GLAnimCanvas canvas = null;

    public Button buttonInfo = null;
    public Button buttonFps = null;
    public TextField textFps = null;
    public Checkbox checkUseRepaint = null;
    public Checkbox checkUseFpsSleep = null;
    public Button buttonReStart = null;
    

    Frame fInfo = null;

   /* Initialize the applet */

    public void init()
    {
        setLayout(new BorderLayout());

	Panel pan = new Panel();
	pan.setLayout(new GridLayout(2,3));

	buttonInfo = new Button("GL4Java");
	buttonInfo.addMouseListener(this);
	pan.add(buttonInfo);

	checkUseRepaint = new Checkbox("repaint", true);
	checkUseRepaint.addItemListener(this);
	pan.add(checkUseRepaint);

	checkUseFpsSleep = new Checkbox("fps-sleep", true);
	checkUseFpsSleep.addItemListener(this);
	pan.add(checkUseFpsSleep);

	buttonReStart = new Button("start/stop");
	buttonReStart.addMouseListener(this);
	pan.add(buttonReStart);

	buttonFps = new Button("fps: ");
	buttonFps.addMouseListener(this);
	pan.add(buttonFps);

	textFps=new TextField("0000000000");
	textFps.addActionListener(this);
	pan.add(textFps);

	add("South",pan);
    }


    public void start()
    {
        checkUseFpsSleep.setState(canvas.getUseFpsSleep());
        checkUseRepaint.setState(canvas.getUseRepaint());
        canvas.addMouseListener(this);
        canvas.start();
    }


    public void stop()
    {
        canvas.stop();
    }


    public void destroy()
    {
	if(fInfo!=null)
	{
		fInfo.dispose();
		fInfo=null;
	}
        canvas.stop();
        canvas.cvsDispose();
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
    
    Container _cont = null;

    public void mouseClicked( MouseEvent evt )
    {
	Component comp = evt.getComponent();

	if ((evt.getModifiers() & evt.BUTTON3_MASK) != 0) 
	{
	    if(comp instanceof GLAnimCanvas)
	    {
		GLAnimCanvas glcvs = (GLAnimCanvas)comp;
		glcvs.cvsDispose();

		Container c = glcvs.getParent();
		c.remove(glcvs);

		System.out.println("\n\nremoved: "+glcvs);
		System.out.println("Global GLAnimCanvas Render-Thread Number: "+ GLAnimCanvas.getGlobalThreadNumber());
		System.out.println("GLContextNumber: "+
				GLContext.getNativeGLContextNumber());

		glcvs.setVisible(true);

		if(c instanceof Frame)
		{
			Frame of = (Frame)c;
			of.dispose();
			of=null;

			_cont.add(canvas);
			_cont.doLayout();
		} else if(c instanceof Panel) 
		{
			_cont=c;
			Frame f = new Frame("EXTRA");
			f.add(glcvs);
			f.pack();
			f.setVisible(true);
		}
		glcvs.start();

		System.out.println("\nadded+started: "+glcvs);
		System.out.println("Global GLAnimCanvas Render-Thread Number: "+ GLAnimCanvas.getGlobalThreadNumber());
		System.out.println("GLContextNumber: "+
				GLContext.getNativeGLContextNumber());
	    }
	    return;
	} 

	if( canvas!=null && comp.equals(buttonFps) )
	{
		double fps = 0;
		int a1;

		canvas.stopFpsCounter();
		fps=canvas.getFps();
		a1=(int)(fps*100.0);
		fps=(double)a1/100.0;
		textFps.setText(String.valueOf(fps));
		canvas.resetFpsCounter();
	} else if( comp.equals(buttonInfo) )
	{
	  if(fInfo==null && canvas!=null && canvas.getGLContext()!=null)
	     fInfo = showGLInfo();
	}
	else if( comp.equals(buttonReStart) )
	{
		canvas.setSuspended(!canvas.isSuspended(),
				     evt.getClickCount()>1 // -> ReInit
				    ); 
	}
    }

    public void itemStateChanged( ItemEvent evt )
    {
	ItemSelectable comp = evt.getItemSelectable();

	if( comp.equals(checkUseRepaint ) )
	{
		if(canvas!=null)
		{
		  canvas.setUseRepaint(checkUseRepaint.getState());
		  System.out.println("canvas uses repaint: "+
			checkUseRepaint.getState());
		}
	}
	if( comp.equals(checkUseFpsSleep ) )
	{
		if(canvas!=null)
		{
		  canvas.setUseFpsSleep(checkUseFpsSleep.getState());
		  System.out.println("canvas uses fps-sleep: "+
			checkUseFpsSleep.getState());
		}
	}
    }

    public void actionPerformed(ActionEvent event) 
    {
	    Object source = event.getSource();

	    if ( source == textFps)
	    {
		      try {
			double FramesPerSec=
			  Double.valueOf(textFps.getText()).doubleValue();
			if(canvas!=null)
			{
			    canvas.setAnimateFps(FramesPerSec);
			    canvas.setSuspended(false, true);
			}
		      } catch (NumberFormatException s)   {
			 System.out.println("wrong fps format, use float ..");
		      }         

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

		canvas.setSuspended(true, false);

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

		canvas.setSuspended(false, false);

		f.pack();
		f.setVisible(true);

		return f;
	}
}
