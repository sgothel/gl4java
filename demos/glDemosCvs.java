
import gl4java.GLContext;
import gl4java.awt.GLAnimCanvas;
import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class glDemosCvs extends Applet 
  implements MouseListener, WindowListener, ActionListener, ItemListener
{
        /*
	 * show how independent the
	 * canvas and the frame are :-)
	 * 
	 * the canvas size is toggled from: (150,150)->(250,250)
	 * the frame  size is toggled from: (350,350)->(450,450)
	 *
	 */

	Button ButtonFps; 
	TextField TextFpsOlymp; 
	TextField TextFpsLogo;
	TextField TextFpsWave;
	TextField TextFpsStar;

	Button buttonInfo = null;

	Checkbox bUseRepaintW = null;
	Checkbox bUseFpsSleepW = null;
	Button bReStartW = null;
	Checkbox bUseRepaintO = null;
	Checkbox bUseFpsSleepO = null;
	Button bReStartO = null;
	Checkbox bUseRepaintL = null;
	Checkbox bUseFpsSleepL = null;
	Button bReStartL = null;
	Checkbox bUseRepaintS = null;
	Checkbox bUseFpsSleepS = null;
	Button bReStartS = null;

	String glClass=null;
	String gluClass=null;

	olympicCvs cvsOlympic = null;
	waveCvs cvsWave = null;
	glLogoCvs cvsLogo = null;
	starCvs cvsStar = null;

	Frame frame = null;

	public void applicationInit(Frame holder)
	{
		frame = holder;
		
		init();
		start();
	}

	public void init()
	{
		System.out.println("Applet init ...");

		Panel pTmp = null;

		setLayout(new BorderLayout());

		//	1. GetFps
		ButtonFps=new Button("Get Fps");
		ButtonFps.addMouseListener(this);
		add("North", ButtonFps);

		//	4. Info
		buttonInfo=new Button("Info");
		buttonInfo.addMouseListener(this);
		add("South", buttonInfo);

		// Master-Grid-Panel pAllCvs
		//
		// 2 rows
		//	1. Wave
		//	2. Olympic
		//	3. Logo
		//	4. Star
		//
	        Panel pAllCvs = new Panel();
		pAllCvs.setLayout(new GridLayout(4,1));
		add("Center", pAllCvs);

		//	1. Wave
	        Panel pWave = new Panel();
		pWave.setLayout(new GridLayout(1,2));
		pAllCvs.add(pWave);

		//	2. Olympic
	        Panel pOlympic = new Panel();
		pOlympic.setLayout(new GridLayout(1,2));
		pAllCvs.add(pOlympic);

		//	3. Logo
	        Panel pLogo = new Panel();
		pLogo.setLayout(new GridLayout(1,2));
		pAllCvs.add(pLogo);

		//	3. Star
	        Panel pStar = new Panel();
		pStar.setLayout(new GridLayout(1,2));
		pAllCvs.add(pStar);

		// Wave-Grid-Panel pWave
		//
		// 3 coloumns
		//
		//	1. waveCvs
		//	2. options
		//

		//	1. waveCvs
	        cvsWave = new waveCvs(150, 150, glClass, gluClass);
	        pWave.add(cvsWave);
	        cvsWave.addMouseListener(this);

		//	2. options
                Panel pWaveOpt = new Panel();
		pWaveOpt.setLayout(new GridLayout(4,1));
		pWave.add(pWaveOpt);
		bUseRepaintW = new Checkbox("repaint", true);
		bUseRepaintW.addItemListener(this);
		pWaveOpt.add(bUseRepaintW);
		bUseFpsSleepW = new Checkbox("fps-sleep", true);
		bUseFpsSleepW.addItemListener(this);
		pWaveOpt.add(bUseFpsSleepW);
		pTmp = new Panel();
		pTmp.setLayout(new GridLayout(1,2));
		pTmp.add(new Label("fps: "));
                TextFpsWave=new TextField();
	        TextFpsWave.addActionListener(this);
	        pTmp.add(TextFpsWave);
	        pWaveOpt.add(pTmp);
		bReStartW = new Button("restart");
		bReStartW.addMouseListener(this);
		pWaveOpt.add(bReStartW);

		// Olympic-Grid-Panel pOlympic
		//
		// 3 coloumns
		//
		//	1. olympicCvs
		//	2. options
		//

		//	1. olympicCvs
	        cvsOlympic = new olympicCvs(150, 150, glClass, gluClass);
	        pOlympic.add(cvsOlympic);
	        cvsOlympic.addMouseListener(this);

		//	2. options
                Panel pOlympOpt = new Panel();
		pOlympOpt.setLayout(new GridLayout(4,1));
		pOlympic.add(pOlympOpt);
		bUseRepaintO = new Checkbox("repaint", true);
		bUseRepaintO.addItemListener(this);
		pOlympOpt.add(bUseRepaintO);
		bUseFpsSleepO = new Checkbox("fps-sleep", true);
		bUseFpsSleepO.addItemListener(this);
		pOlympOpt.add(bUseFpsSleepO);
		pTmp = new Panel();
		pTmp.setLayout(new GridLayout(1,2));
		pTmp.add(new Label("fps: "));
                TextFpsOlymp=new TextField();
	        TextFpsOlymp.addActionListener(this);
	        pTmp.add(TextFpsOlymp);
	        pOlympOpt.add(pTmp);
		bReStartO = new Button("restart");
		bReStartO.addMouseListener(this);
		pOlympOpt.add(bReStartO);


		// Logo-Grid-Panel pLogo
		//
		// 3 coloumns
		//
		//	1. logoCvs
		//	2. options
		//

		//	1. logoCvs
	        cvsLogo = new glLogoCvs(150, 150, glClass, gluClass);
	        pLogo.add(cvsLogo);
	        cvsLogo.addMouseListener(this);

		//	2. options
                Panel pLogoOpt = new Panel();
		pLogoOpt.setLayout(new GridLayout(4,1));
		pLogo.add(pLogoOpt);
		bUseRepaintL = new Checkbox("repaint", true);
		bUseRepaintL.addItemListener(this);
		pLogoOpt.add(bUseRepaintL);
		bUseFpsSleepL = new Checkbox("fps-sleep", true);
		bUseFpsSleepL.addItemListener(this);
		pLogoOpt.add(bUseFpsSleepL);
		pTmp = new Panel();
		pTmp.setLayout(new GridLayout(1,2));
		pTmp.add(new Label("fps: "));
                TextFpsLogo=new TextField();
	        TextFpsLogo.addActionListener(this);
	        pTmp.add(TextFpsLogo);
	        pLogoOpt.add(pTmp);
		bReStartL = new Button("ReStart");
		bReStartL.addMouseListener(this);
		pLogoOpt.add(bReStartL);

		// Star-Grid-Panel pWave
		//
		// 3 coloumns
		//
		//	1. starCvs
		//	2. options
		//

		//	1. starCvs
	        cvsStar = new starCvs(150, 150, glClass, gluClass);
	        pStar.add(cvsStar);
	        cvsStar.addMouseListener(this);

		//	2. options
                Panel pStarOpt = new Panel();
		pStarOpt.setLayout(new GridLayout(4,1));
		pStar.add(pStarOpt);
		bUseRepaintS = new Checkbox("repaint", true);
		bUseRepaintS.addItemListener(this);
		pStarOpt.add(bUseRepaintS);
		bUseFpsSleepS = new Checkbox("fps-sleep", true);
		bUseFpsSleepS.addItemListener(this);
		pStarOpt.add(bUseFpsSleepS);
		pTmp = new Panel();
		pTmp.setLayout(new GridLayout(1,2));
		pTmp.add(new Label("fps: "));
                TextFpsStar=new TextField();
	        TextFpsStar.addActionListener(this);
	        pTmp.add(TextFpsStar);
	        pStarOpt.add(pTmp);
		bReStartS = new Button("restart");
		bReStartS.addMouseListener(this);
		pStarOpt.add(bReStartS);

		System.out.println("Applet init DONE ! ");
	} 

	  public void start() {
		cvsOlympic.start();
		cvsWave.start();
		cvsLogo.start();
		cvsStar.start();
	  }

	  public void stop() {
		cvsOlympic.stop();
		cvsWave.stop();
		cvsLogo.stop();
		cvsStar.stop();
	  }

	  public void destroy() {
		cvsOlympic.stop();
		cvsOlympic.cvsDispose();
		cvsWave.stop();
		cvsWave.cvsDispose();
		cvsLogo.stop();
		cvsLogo.cvsDispose();
		cvsStar.stop();
		cvsStar.cvsDispose();
	  }

	public static void main( String args[] ) {
		String gljLib=null;
		String glLib=null;
		String gluLib=null;

	        if(args.length>0)
			gljLib = args[0];
	        if(args.length>1)
			glLib = args[1];
	        if(args.length>2)
			gluLib = args[2];

		GLContext.gljNativeDebug = true;
		GLContext.gljClassDebug  = true;

		if(GLContext.loadNativeLibraries(gljLib, glLib, gluLib)==false)
		  System.out.println("could not load native libs:"+
				     gljLib + ", " + glLib + ", " + gluLib);
		else
		  System.out.println("load native libs:"+
				     gljLib + ", " + glLib + ", " + gluLib);

		Frame mainFrame = new Frame("glDemosCvs");

		glDemosCvs applet = new glDemosCvs();
		applet.applicationInit(mainFrame);

		mainFrame.add(applet);

	        if(args.length>3)
			applet.glClass = args[3];
	        if(args.length>4)
			applet.gluClass = args[4];

		mainFrame.pack();
		mainFrame.setVisible(true);

		mainFrame.addWindowListener(applet);
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

		if( comp.equals(ButtonFps) )
		{
			double fps = 0;
			int a1;

			if(cvsWave!=null && TextFpsWave!=null)
			{
				cvsWave.stopFpsCounter();
				fps=cvsWave.getFps();
				a1=(int)(fps*100.0);
				fps=(double)a1/100.0;
	                	TextFpsWave.setText(String.valueOf(fps));
			}
			if(cvsOlympic!=null && TextFpsOlymp!=null)
			{
				cvsOlympic.stopFpsCounter();
				fps=cvsOlympic.getFps();
				a1=(int)(fps*100.0);
				fps=(double)a1/100.0;
	                	TextFpsOlymp.setText(String.valueOf(fps));
			}
			if(cvsLogo!=null && TextFpsLogo!=null)
			{
				cvsLogo.stopFpsCounter();
				fps=cvsLogo.getFps();
				a1=(int)(fps*100.0);
				fps=(double)a1/100.0;
	                	TextFpsLogo.setText(String.valueOf(fps));
			}
			if(cvsStar!=null && TextFpsStar!=null)
			{
				cvsStar.stopFpsCounter();
				fps=cvsStar.getFps();
				a1=(int)(fps*100.0);
				fps=(double)a1/100.0;
	                	TextFpsStar.setText(String.valueOf(fps));
			}
		}
		else if( comp.equals(buttonInfo) )
		{
		  Frame fInfo = null;
		  if(cvsWave!=null && cvsWave.getGLContext()!=null)
		     fInfo = cvsWave.getGLContext().gljShowVersions();
		  else if(cvsOlympic!=null && cvsOlympic.getGLContext()!=null)
		     fInfo = cvsOlympic.getGLContext().gljShowVersions();
		  else if(cvsLogo!=null && cvsLogo.getGLContext()!=null)
		     fInfo = cvsLogo.getGLContext().gljShowVersions();
		  else if(cvsStar!=null && cvsStar.getGLContext()!=null)
		     fInfo = cvsStar.getGLContext().gljShowVersions();
		}
		else if( comp.equals(cvsWave) )
		{
		     cvsWave.setSuspended(!cvsWave.isSuspended(),
			                  evt.getClickCount()>1 // -> ReInit
					 ); 
		}
		else if( comp.equals(cvsOlympic) )
		{
		     cvsOlympic.setSuspended(!cvsOlympic.isSuspended(),
			                     evt.getClickCount()>1 // -> ReInit
					    ); 
		}
		else if( comp.equals(cvsLogo) )
		{
			cvsLogo.setSuspended(!cvsLogo.isSuspended(),
			                     evt.getClickCount()>1 // -> ReInit
					    ); 
		}
		else if( comp.equals(cvsStar) )
		{
			cvsStar.setSuspended(!cvsStar.isSuspended(),
			                     evt.getClickCount()>1 // -> ReInit
					    ); 
		}
		if( comp.equals(bReStartL) )
		{
			if(cvsLogo!=null)
			{
			   cvsLogo.setSuspended(false, true);
			}
		}
		if( comp.equals(bReStartO) )
		{
			if(cvsOlympic!=null)
			{
			   cvsOlympic.setSuspended(false, true);
			}
		}
		if( comp.equals(bReStartW) )
		{
			if(cvsWave!=null)
			{
			   cvsWave.setSuspended(false, true);
			}
		}
		if( comp.equals(bReStartS) )
		{
			if(cvsStar!=null)
			{
			   cvsStar.setSuspended(false, true);
			}
		}
	}

	public void itemStateChanged( ItemEvent evt )
	{
		ItemSelectable comp = evt.getItemSelectable();

		if( comp.equals(bUseRepaintW ) )
		{
			if(cvsWave!=null)
			{
			  cvsWave.setUseRepaint(bUseRepaintW.getState());
			  System.out.println("Wave uses repaint: "+
			  	bUseRepaintW.getState());
			}
		}
		if( comp.equals(bUseFpsSleepW ) )
		{
			if(cvsWave!=null)
			{
			  cvsWave.setUseFpsSleep(bUseFpsSleepW.getState());
			  System.out.println("Wave uses fps-sleep: "+
				bUseFpsSleepW.getState());
			}
		}
		if( comp.equals(bUseRepaintO ) )
		{
			if(cvsOlympic!=null)
			{
			  cvsOlympic.setUseRepaint(bUseRepaintO.getState());
			  System.out.println("Olympic uses repaint: "+
			  	bUseRepaintO.getState());
			}
		}
		if( comp.equals(bUseFpsSleepO ) )
		{
			if(cvsOlympic!=null)
			{
			  cvsOlympic.setUseFpsSleep(bUseFpsSleepO.getState());
			  System.out.println("Olympic uses fps-sleep: "+
				bUseFpsSleepO.getState());
			}
		}
		else if( comp.equals(bUseRepaintL ) )
		{
			if(cvsLogo!=null)
			{
			  cvsLogo.setUseRepaint(bUseRepaintL.getState());
			  System.out.println("Logo uses repaint: "+
			  	bUseRepaintL.getState());
		        }
		}
		else if( comp.equals(bUseFpsSleepL ) )
		{
			if(cvsLogo!=null)
			{
			  cvsLogo.setUseFpsSleep(bUseFpsSleepL.getState());
			  System.out.println("Logo uses fps-sleep: "+
				bUseFpsSleepL.getState());
		        }
		}
		else if( comp.equals(bUseRepaintS ) )
		{
			if(cvsStar!=null)
			{
			  cvsStar.setUseRepaint(bUseRepaintS.getState());
			  System.out.println("Star uses repaint: "+
			  	bUseRepaintS.getState());
		        }
		}
		else if( comp.equals(bUseFpsSleepS ) )
		{
			if(cvsStar!=null)
			{
			  cvsStar.setUseFpsSleep(bUseFpsSleepS.getState());
			  System.out.println("Star uses fps-sleep: "+
				bUseFpsSleepS.getState());
		        }
		}
 	}

	public void windowOpened(WindowEvent e)
	{
	}

	public void windowClosing(WindowEvent e)
	{
		if(frame!=null && e.getComponent().equals(frame))
		{
		    if(frame!=null) frame.dispose();
	     	    cvsLogo.cvsDispose();
	     	    cvsOlympic.cvsDispose();
	     	    cvsWave.cvsDispose();
	     	    cvsStar.cvsDispose();
		    System.exit(0);
		}
	}

	public void windowClosed(WindowEvent e)
	{
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

	 public void actionPerformed(ActionEvent event) 
         {
	    Object source = event.getSource();

	    if ( source == TextFpsWave )
	    {
		      try {
			double FramesPerSec=
			  Double.valueOf(TextFpsWave.getText()).doubleValue();
			if(cvsWave!=null)
			{
			    cvsWave.setAnimateFps(FramesPerSec);
			    cvsWave.setSuspended(false, true);
			}
                      } catch (NumberFormatException s)   {
			 System.out.println("wrong fps format, use float ..");
                      }         

	    }
	    if ( source == TextFpsOlymp )
	    {
		      try {
			double FramesPerSec=
			  Double.valueOf(TextFpsOlymp.getText()).doubleValue();
			if(cvsOlympic!=null)
			{
			    cvsOlympic.setAnimateFps(FramesPerSec);
			    cvsOlympic.setSuspended(false, true);
			}
                      } catch (NumberFormatException s)   {
			 System.out.println("wrong fps format, use float ..");
                      }         

	    }
	    if ( source == TextFpsLogo )
	    {
		      try {
			double FramesPerSec=
			  Double.valueOf(TextFpsLogo.getText()).doubleValue();
			if(cvsLogo!=null)
			{
			    cvsLogo.setAnimateFps(FramesPerSec);
			    cvsLogo.setSuspended(false, true);
			}
                      } catch (NumberFormatException s)   {
			 System.out.println("wrong fps format, use float ..");
                      }         

	    }
	    if ( source == TextFpsStar )
	    {
		      try {
			double FramesPerSec=
			  Double.valueOf(TextFpsStar.getText()).doubleValue();
			if(cvsLogo!=null)
			{
			    cvsStar.setAnimateFps(FramesPerSec);
			    cvsStar.setSuspended(false, true);
			}
                      } catch (NumberFormatException s)   {
			 System.out.println("wrong fps format, use float ..");
                      }         

	    }
	 }

}
