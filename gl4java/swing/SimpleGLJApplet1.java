/**
 * @(#) SimpleGLJApplet1.java
 * @(#) author: Sven Goethel
 */

package gl4java.swing;

/* This program is licensed under the LGPL */

import java.applet.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import gl4java.GLContext;
import gl4java.GLFunc;
import gl4java.GLUFunc;
import gl4java.awt.GLAnimCanvas;

public class SimpleGLJApplet1 extends JApplet 
  implements MouseListener, WindowListener, ActionListener, ItemListener
{
    public GLJPanel canvas = null;

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
	JPanel master = new JPanel (new BorderLayout());
	setContentPane(master);

	JPanel pan = new JPanel();
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

	master.add("South",pan);
    }


    public void start()
    {
        if(canvas instanceof GLAnimJPanel)
        	((GLAnimJPanel)canvas).start();
    }


    public void stop()
    {
        if(canvas instanceof GLAnimJPanel)
        	((GLAnimJPanel)canvas).stop();
    }


    public void destroy()
    {
	if(fInfo!=null)
	{
		fInfo.dispose();
		fInfo=null;
	}
        if(canvas instanceof GLAnimJPanel)
	{
        	((GLAnimJPanel)canvas).stop();
        	((GLAnimJPanel)canvas).cvsDispose();
	}
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

        if((canvas instanceof GLAnimJPanel)==false)
		return;

	GLAnimJPanel canvasAnim = (GLAnimJPanel)canvas;

	if( canvasAnim!=null && comp.equals(buttonFps) )
	{
		double fps = 0;
		int a1;

		canvasAnim.stopFpsCounter();
		fps=canvasAnim.getFps();
		a1=(int)(fps*100.0);
		fps=(double)a1/100.0;
		textFps.setText(String.valueOf(fps));
		canvasAnim.resetFpsCounter();
	} else if( comp.equals(buttonInfo) )
	{
	  if(fInfo==null && canvasAnim!=null && canvasAnim.getGLContext()!=null)
	     fInfo = showGLInfo();
	}
	else if( comp.equals(buttonReStart) )
	{
		canvasAnim.setSuspended(!canvasAnim.isSuspended(),
				     evt.getClickCount()>1 // -> ReInit
				    ); 
	}
    }

    public void itemStateChanged( ItemEvent evt )
    {
	ItemSelectable comp = evt.getItemSelectable();

        if((canvas instanceof GLAnimJPanel)==false)
		return;

	GLAnimJPanel canvasAnim = (GLAnimJPanel)canvas;

	if( comp.equals(checkUseRepaint ) )
	{
		if(canvasAnim!=null)
		{
		  canvasAnim.setUseRepaint(checkUseRepaint.getState());
		  System.out.println("canvas uses repaint: "+
			checkUseRepaint.getState());
		}
	}
	if( comp.equals(checkUseFpsSleep ) )
	{
		if(canvasAnim!=null)
		{
		  canvasAnim.setUseFpsSleep(checkUseFpsSleep.getState());
		  System.out.println("canvas uses fps-sleep: "+
			checkUseFpsSleep.getState());
		}
	}
    }

    public void actionPerformed(ActionEvent event) 
    {
	    Object source = event.getSource();

            if((canvas instanceof GLAnimJPanel)==false)
		return;

	    GLAnimJPanel canvasAnim = (GLAnimJPanel)canvas;

	    if ( source == textFps)
	    {
		      try {
			double FramesPerSec=
			  Double.valueOf(textFps.getText()).doubleValue();
			if(canvasAnim!=null)
			{
			    canvasAnim.setAnimateFps(FramesPerSec);
			    canvasAnim.setSuspended(false, true);
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

		if((canvas instanceof GLAnimJPanel)==false)
			((GLAnimJPanel)canvas).setSuspended(true, false);

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

		if((canvas instanceof GLAnimJPanel)==false)
			((GLAnimJPanel)canvas).setSuspended(false, false);

		f.pack();
		f.setVisible(true);

		return f;
	}
}
