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
    public Checkbox checkUseYield = null;
    public Button buttonReStart = null;
    public Button buttonQuit = null;
    

    Frame fInfo = null;

   /* Initialize the applet */

    public void init()
    {
        setLayout(new BorderLayout());

	Panel pan = new Panel();
	pan.setLayout(new GridLayout(2,4));

	buttonInfo = new Button("GL4Java");
	pan.add(buttonInfo);

	buttonReStart = new Button("start/stop");
	pan.add(buttonReStart);

	buttonFps = new Button("fps: ");
	pan.add(buttonFps);

	textFps=new TextField("0000000000");
	pan.add(textFps);

	checkUseRepaint = new Checkbox("repaint", true);
	pan.add(checkUseRepaint);

	checkUseFpsSleep = new Checkbox("fps-sleep", true);
	pan.add(checkUseFpsSleep);

	checkUseYield = new Checkbox("yield", true);
	pan.add(checkUseYield);

        buttonQuit = new Button("Quit");
        pan.add(buttonQuit);

	add("South",pan);
    }


    public void setCheckButtons()
    {
        checkUseFpsSleep.setState(canvas.getUseFpsSleep());
        checkUseRepaint.setState(canvas.getUseRepaint());
        checkUseYield.setState(canvas.getUseYield());
    }

    public void start()
    {
	if(GLContext.gljClassDebug)
		System.out.println("SGLApplet start ..");

        setCheckButtons();
    
	buttonInfo.addActionListener(this);
	checkUseRepaint.addItemListener(this);
	checkUseFpsSleep.addItemListener(this);
	checkUseYield.addItemListener(this);
	buttonReStart.addActionListener(this);
	buttonFps.addActionListener(this);
	buttonQuit.addActionListener(this);
        canvas.addMouseListener(this);
	textFps.addActionListener(this);

	canvas.setVisible(true);
	canvas.repaint();
        canvas.start();
    }


    public void stop()
    {
	if(GLContext.gljClassDebug)
		System.out.println("SGLApplet stop ..");
	buttonInfo.removeActionListener(this);
	checkUseRepaint.removeItemListener(this);
	checkUseFpsSleep.removeItemListener(this);
	checkUseYield.removeItemListener(this);
	buttonReStart.removeActionListener(this);
	buttonFps.removeActionListener(this);
	buttonQuit.removeActionListener(this);
        canvas.removeMouseListener(this);

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
    
    Container _origCont = null;
    Frame _saveFrame = null;

    public void mouseClicked( MouseEvent evt )
    {
	Component comp = evt.getComponent();

	if ( ( (evt.getModifiers() & evt.BUTTON1_MASK) != 0 ) &&
	     evt.getClickCount()==2 )
	{
	    if(comp instanceof GLAnimCanvas)
	    {
		GLAnimCanvas glcvs = (GLAnimCanvas)comp;
		System.out.println("\n\nswitch requested: "+glcvs);
		glcvs.cvsDispose();
		System.out.println("\n\ndisposed: "+glcvs);

		Container c = glcvs.getParent();
		c.remove(glcvs);

		System.out.println("\n\nremoved: "+glcvs);
		System.out.println("Global GLAnimCanvas Render-Thread Number: "+ GLAnimCanvas.getGlobalThreadNumber());
		System.out.println("GLContextNumber: "+
				GLContext.getNativeGLContextNumber());

		if(_origCont !=null && c == _saveFrame)
		{
			_saveFrame.dispose();
			_saveFrame=null;

			_origCont.add(canvas);
			_origCont.doLayout();
			_origCont = null;
		} else if( _saveFrame ==null && _origCont == null )
		{
			_origCont = c;
			_saveFrame = new Frame("EXTRA");
			_saveFrame.add(glcvs);
			_saveFrame.pack();
			_saveFrame.setVisible(true);
		}
		glcvs.setVisible(true);
		glcvs.repaint();
		glcvs.start();

		System.out.println("\nadded+started: "+glcvs);
		System.out.println("Global GLAnimCanvas Render-Thread Number: "+ GLAnimCanvas.getGlobalThreadNumber());
		System.out.println("GLContextNumber: "+
				GLContext.getNativeGLContextNumber());
	    }
	    return;
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
	if( comp.equals(checkUseYield ) )
	{
		if(canvas!=null)
		{
		  canvas.setUseYield(checkUseYield.getState());
		  System.out.println("canvas uses Yield "+
			checkUseYield.getState());
		}
	}
        setCheckButtons();
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
	} else if( canvas!=null && source.equals(buttonFps) )
	{
		double fps = 0;
		int a1;

		canvas.stopFpsCounter();
		fps=canvas.getFps();
		a1=(int)(fps*100.0);
		fps=(double)a1/100.0;
		textFps.setText(String.valueOf(fps));
		canvas.resetFpsCounter();
	} else if( source.equals(buttonInfo) )
	{
	  if(fInfo==null && canvas!=null && canvas.getGLContext()!=null)
	     fInfo = showGLInfo();
	}
	else if( canvas!=null && source.equals(buttonReStart) )
	{
		canvas.setSuspended(!canvas.isSuspended(), false);
	} else if (source.equals(buttonQuit)) {
          System.exit(0);
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
