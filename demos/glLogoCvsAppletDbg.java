
import gl4java.GLContext;

import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class glLogoCvsAppletDbg extends Applet 
  implements MouseListener
{
	glLogoCvs cvsLogo = null;

	String gljLib=null;
	String glLib=null;
	String gluLib=null;

	Button bLoadLib = null;
	Button bAddGL = null;

	static {
		if(GLContext.loadNativeLibraries(null, null, null)==false)
		  System.out.println("could not load native def. libs");
		else 
		  System.out.println("loaded native def. libs");
	}

	public void init()
	{
		setLayout(new BorderLayout());

		bLoadLib = new Button("load lib");
		add("North", bLoadLib);
		bAddGL = new Button("add gl");
		add("South", bAddGL);
		bAddGL.addMouseListener(this);
		/*
		if(GLContext.loadNativeLibraries(gljLib, glLib, gluLib)==false)
		  System.out.println("could not load native libs:"+
				     gljLib + ", " + glLib + ", " + gluLib);
		else 
		  System.out.println("load native libs:"+
				     gljLib + ", " + glLib + ", " + gluLib);

		setLayout(new BorderLayout());
	        cvsLogo = new glLogoCvs(150, 150, null, null);
	        cvsLogo.setAnimateFps(30.0);
		add("Center", cvsLogo);

		add("West", new Label("OpenGL"));
		add("East", new Label("Java-Applet"));

	        cvsLogo.addMouseListener(this);
	        setBackground(Color.white);  
		*/
	} 

	  public void start() {
		// cvsLogo.start();
	  }

	  public void stop() {
		// cvsLogo.stop();
	  }

	  public void destroy() {
		/*
		cvsLogo.stop();
		cvsLogo.cvsDispose();
		*/
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

		if( comp.equals(bLoadLib) )
			loadLib();
		if( comp.equals(bAddGL) )
			addGL();
		else if( comp.equals(cvsLogo) )
			cvsLogo.setSuspended(!cvsLogo.isSuspended(),
			                     evt.getClickCount()>1 // -> ReInit
			                    );
	}

	void loadLib()
	{
		if(GLContext.loadNativeLibraries(gljLib, glLib, gluLib)==false)
		  System.out.println("could not load native libs:"+
				     gljLib + ", " + glLib + ", " + gluLib);
		else 
		  System.out.println("load native libs:"+
				     gljLib + ", " + glLib + ", " + gluLib);
	}

	void addGL()
	{
	        cvsLogo = new glLogoCvs(150, 150, null, null);
	        cvsLogo.setAnimateFps(30.0);
		add("Center", cvsLogo);

		add("West", new Label("OpenGL"));
		add("East", new Label("Java-Applet"));

	        cvsLogo.addMouseListener(this);
	        setBackground(Color.white);  
	}
}
