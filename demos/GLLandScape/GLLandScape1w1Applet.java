
import gl4java.GLContext;
import gl4java.GLFunc;
import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class GLLandScape1w1Applet extends Applet
  implements MouseListener, KeyListener, ActionListener, ItemListener
{
	public GLLandScape1w1 landScape = null;

	Button bAddPlane = null;
	Button bRemPlane = null;
	Button bTexture = null;
	Button bShading = null;
	Button bFog = null;
	Button bNewFractal = null;
	Button bInfo = null;

	Button bFps; TextField tFps;

	Checkbox bUseRepaint = null;
	Checkbox bUseFpsSleep = null;

	boolean gameOn = true;

	SpeedTimer tMySpeed = null;

	GLThread gt1 = null;
	GLThread gt2 = null;

	public void init()
	{
		init(0,0);
	}

	public void init(int w, int h)
	{
		super.init();

		setLayout(new BorderLayout());

		Panel glFeatures = new Panel();
		glFeatures.setLayout(new GridLayout(6,1));
		glFeatures.add(bAddPlane =new Button("+ Plane"));
		glFeatures.add(bRemPlane =new Button("- Plane"));
		glFeatures.add(bTexture =new Button("Texture"));
		glFeatures.add(bShading =new Button("Shading"));
		glFeatures.add(bFog =new Button("Fogging"));
		glFeatures.add(bNewFractal =new Button("Fractal"));
		bAddPlane.addMouseListener(this);
		bRemPlane.addMouseListener(this);
		bTexture.addMouseListener(this);
		bShading.addMouseListener(this);
		bFog.addMouseListener(this);
		bNewFractal.addMouseListener(this);
		add("East", glFeatures);

		Panel pFps = new Panel();
		pFps.setLayout(new GridLayout(1,5));
		pFps.add(bInfo =new Button("info"));
		pFps.add(bFps =new Button("get fps"));
		pFps.add(tFps =new TextField());
		bInfo.addMouseListener(this);
		bFps.addMouseListener(this);
		tFps.addActionListener(this);

		bUseRepaint = new Checkbox("repaint", true);
		bUseRepaint.addItemListener(this);
		pFps.add(bUseRepaint);
		bUseFpsSleep = new Checkbox("fps-sleep", true);
		bUseFpsSleep.addItemListener(this);
		pFps.add(bUseFpsSleep);

		add("South", pFps);

		if(w==0 && h==0)
		{
			Dimension d = getSize();
			landScape= new GLLandScape1w1(d.width, d.height);
		} else {
			landScape= new GLLandScape1w1(w, h);
		}
	        landScape.setAnimateFps(30.0);
                landScape.addMouseListener(this);    
                landScape.addKeyListener(this);

		tMySpeed = new SpeedTimer(landScape, 200);

	        landScape.requestFocus();
	        landScape.setMySpeed(0);

		add("Center", landScape);
	} 

	public void startTestThreads()
	{
		gt1 = new GLThread(landScape, GLFunc.GL_VENDOR, "gt1");
		gt2 = new GLThread(landScape, GLFunc.GL_VERSION, "gt2");
	        gt1.start();
	        gt2.start();
	}

	public void destroy()
	{
	    landScape.cvsDispose();
	    landScape.removeMouseListener(this);   
	    landScape.removeKeyListener(this);   
	}

	public void start()
	{
	    landScape.start();
	}

	public void stop()
	{
	    landScape.stop();
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

		if(GLContext.loadNativeLibraries(gljLib, glLib, gluLib)==false)
		  System.out.println("GLCanvasV2 could not load native libs:"+
				     gljLib + ", " + glLib + ", " + gluLib);

		GLContext.gljNativeDebug = false;
		GLContext.gljThreadDebug = false;
		GLContext.gljClassDebug  = false;

		GLLandScape1w1Applet window = 
		         new GLLandScape1w1Applet();

		Frame f = new Frame();

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
		f.add("Center", window);
		window.init(500,300);
		window.start();
		Dimension ps = window.getPreferredSize();
		f.setBounds(-100,-100,99,99);
		f.setVisible(true);
		//f.setVisible(false);
		Insets i = f.getInsets();
		f.setBounds(0,0,
			    ps.width+i.left+i.right, 
		            ps.height+i.top+i.bottom);
		f.setVisible(true);

		// ThreadTest
		// window.startTestThreads();
	}

	public void itemStateChanged( ItemEvent evt )
	{
		ItemSelectable comp = evt.getItemSelectable();

		if( comp.equals(bUseRepaint) )
		{
			if(landScape!=null)
			{
			  landScape.setUseRepaint(bUseRepaint.getState());
			  System.out.println("LandScape uses repaint: "+
			  	bUseRepaint.getState());
			}
		}
		else if( comp.equals(bUseFpsSleep ) )
		{
			if(landScape!=null)
			{
			  landScape.setUseFpsSleep(bUseFpsSleep.getState());
			  System.out.println("LandScape uses fps-sleep: "+
				bUseFpsSleep.getState());
		        }
		}
	}

        // Methods required for the implementation of MouseListener
        public void mouseEntered( MouseEvent evt )
        {
            Component comp = evt.getComponent();
	    if( comp.equals(landScape ) )
	    {
		landScape.requestFocus();
	    }
        }

        public void mouseExited( MouseEvent evt )
        {
        }

        public void mousePressed( MouseEvent evt )
        {
        }
        public void mouseReleased( MouseEvent evt )                                     {
        }

        public void mouseClicked( MouseEvent evt )
        {
                Component comp = evt.getComponent();

                if( comp.equals(bAddPlane ) )
			landScape.addPlane();
                else if( comp.equals(bRemPlane ) )
			landScape.removePlane();
                else if( comp.equals(bTexture ) )
			landScape.setTexture( ! landScape.getTextureState());
                else if( comp.equals(bNewFractal ) )
			landScape.newFractal();
                else if( comp.equals(bShading ) )
			landScape.setFlatShading(!landScape.getFlatShadeState());
                else if( comp.equals(bFog ) )
			landScape.setFog( ! landScape.getFogState());
                else if( comp.equals(landScape) )
                        landScape.setSuspended(false);
                else if( comp.equals(bFps) )
		{
			double fps = 0;

			landScape.stopFpsCounter();
			fps=landScape.getFps();
			tFps.setText(String.valueOf(fps));
	                landScape.resetFpsCounter();
		}
                else if( comp.equals(bInfo) )
		{
			InfoWin iw = new InfoWin();
		}
        }


	  public void keyTyped(KeyEvent e)
	  {
	  }

	  public void keyPressed(KeyEvent e)
	  {
	    int key = e.getKeyCode();

	    if( gameOn==true )
	    {
                if ( key==KeyEvent.VK_LEFT )
		{
			landScape.myMove(landScape.TURNLEFT, 0.1f, false);
			tMySpeed.start();
		}
	        else if ( key==KeyEvent.VK_RIGHT )
		{
			landScape.myMove(landScape.TURNLEFT, -0.1f, false);
			tMySpeed.start();
		}
	        else if ( key==KeyEvent.VK_UP )
		{
			float v = tMySpeed.getSpeed();

			if ( e.isShiftDown() )
			{
			        tMySpeed.setSpeed(v+2.0f);
			}
			else {
			        tMySpeed.setSpeed(v+1.0f);
			}
			tMySpeed.start();
		}
	        else if ( key==KeyEvent.VK_DOWN )
		{
			float v = tMySpeed.getSpeed();

			if ( e.isShiftDown() )
			        tMySpeed.setSpeed(v-2.0f);
			else
			        tMySpeed.setSpeed(v-1.0f);
			tMySpeed.start();
		}
                else if ( key==KeyEvent.VK_PAGE_UP )
		{
			landScape.myMove(landScape.LOOKUP, 0.1f, false);
			tMySpeed.start();
		}
                else if ( key==KeyEvent.VK_PAGE_DOWN )
		{
			landScape.myMove(landScape.LOOKUP, -0.1f, false);
			tMySpeed.start();
		}
                else if ( key==KeyEvent.VK_END )
		{
			landScape.myMove(landScape.LOOKSET, 0f, false);
			tMySpeed.start();
		}
	     }
	  }

	  public void keyReleased(KeyEvent e)
	  {
	    int key = e.getKeyCode();

	    if( gameOn==true &&
                ( key==KeyEvent.VK_UP ||
	          key==KeyEvent.VK_DOWN
                )
              )
            {
	    	//ts.start();
	    }
	    else if( gameOn==true &&
                ( key==KeyEvent.VK_LEFT ||
	          key==KeyEvent.VK_RIGHT 
                )
              )
            {
		//landScape.noMySpeed();
	    }
	  }

	 public void actionPerformed(ActionEvent event) 
         {
	    Object source = event.getSource();

	    if ( source == tFps )
	    {
		      try {
			double FramesPerSec=
			  Double.valueOf(tFps.getText()).doubleValue();
			landScape.setAnimateFps(FramesPerSec);
                        landScape.setSuspended(false);
                      } catch (NumberFormatException s)   {
			 System.out.println("wrong fps format, use float ..");
                      }         

	    }
	 }

	 class SpeedTimer implements Runnable {
	      protected Thread me = null;
	      protected boolean to=false;
	      protected int _t;

	      protected float speed = 0.0f;
	      protected GLLandScape1w1 _ls;

	      public SpeedTimer(GLLandScape1w1 ls, int t) 
	      { _ls=ls; _t=t; }

		    public synchronized void start()
		    {
		      if(me!=null && to) return;

		      stop();

		      me = new Thread(this);
		      me.start();
		    }

		    public synchronized void stop() {
		      if(me!=null)
		      {
			    me=null;

			    notifyAll();

			    while(to)  {
			    	try {
					wait();
				} catch (Exception e) {}
			    }
		      }	
		    }	

	      public void run() {
		    if(me!=null)
		    {
			    synchronized (this) {
			    	to=true;
				notifyAll();
			    }
			    while(me!=null && (-0.2f>=speed || speed>=0.2f) )
			    {
				    try {me.sleep(_t,0);} catch (InterruptedException e){}
			    	    speed/=2.0f;
			            _ls.setMySpeed(speed);
				    // System.out.println("timer: lower speed: "+speed);
			    }
			    speed = 0.0f;
			    _ls.setMySpeed(0f);

			    synchronized (this) {
			    	to=false;
				notifyAll();
			    }
		    }	
	      }

	      public boolean isActive() { return to; }

	      public float getSpeed() { return speed; }
	      public void setSpeed(float v) 
	      { speed=v; 
	        _ls.setMySpeed(speed);
	        //System.out.println("timer: set speed: "+speed);
	      }
	 	
	 }

	 class GLThread implements Runnable {
	      protected Thread me = null;
	      protected boolean to=false;
	      protected int _id;
	      protected String _name;

	      protected GLLandScape1w1 _ls;

	      public GLThread(GLLandScape1w1 ls, int id, String name) 
	      { _ls=ls; _id=id; _name=name;}

		    public synchronized void start()
		    {
		      if(me!=null && to) return;

		      stop();

		      me = new Thread(this, _name);
		      me.start();
		    }

		    public synchronized void stop() {
		      if(me!=null)
		      {
			    me=null;

			    notifyAll();

			    while(to)  {
			    	try {
					wait();
				} catch (Exception e) {}
			    }
		      }	
		    }	

	      public void run() {
		    if(me!=null)
		    {
			    synchronized (this) {
			    	to=true;
				notifyAll();
			    }
			    while(me!=null)
			    {
			        if(_ls.cvsIsInit())
				{
				    if(GLContext.gljThreadDebug)
			    	       _ls.getGLString(_id);
				    else
			    	        System.out.println("gt: "+_ls.getGLString(_id));
				}
			    }

			    synchronized (this) {
			    	to=false;
				notifyAll();
			    }
		    }	
	      }

	      public boolean isActive() { return to; }
	 }

	class InfoWin extends Frame 
	  implements ActionListener
	{
		protected Button DismissButton;

		String text =
		"GLLandScape1w1 V 1.0\n"+
		"by Sven Goethel\n"+
		"\thttp://www.jausoft.com/gl4java.html\n"+
		"\tmailto:gl4java@jausoft.com\n\n"+
		"The original sources for the lanscape algorythms,\n"+
		"are taken from Nicholas Anderson's Landscape V1.0 !\n"+
		"\thttp://www.fortunecity.com/skyscraper/online/263\n"+
		"\tmailto:andersnd@hotmail.com\n\n"+
		"usage:\n"+
		"\t ARROW-UP             : accelerate\n"+
		"\t ARROW-UP   + SHIFT   : accelerate fast \n"+
		"\t ARROW-DOWN           : de-accelerate\n"+
		"\t ARROW-DOWN + SHIFT   : de-accelerate fast\n"+
		"\t ARROW-LEFT           : turn left\n"+
		"\t ARROW-right          : turn right\n"+
		"\t PAGE-UP              : look-up\n"+
		"\t PAGE-DOWN            : look-down\n"+
		"\t END                  : look normal\n\n"+
		"Have a lot of fun - Sven Goethel\n";

	  public InfoWin() 
		{
			setTitle("INFO");
			setName("INFO");

			setLayout(new BorderLayout());
			add("Center", new TextArea(text, 25, 50));

			add("South", DismissButton = new Button("dismiss"));
			DismissButton.addActionListener(this);

			pack();
			setVisible(true);

			toFront();
		}

		public void actionPerformed(ActionEvent event) {
			if ( event.getSource() == DismissButton) 
			{
			    setVisible(false);
			    dispose();
			}
		}
	}
}
