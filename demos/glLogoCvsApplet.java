
import gl4java.GLContext;

import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class glLogoCvsApplet extends Applet 
  implements MouseListener
{
	glLogoCvs cvsLogo = null;

	String gljLib=null;
	String glLib=null;
	String gluLib=null;

	Button bLoadLib = null;
	Button bAddGL = null;

	public void init()
	{
		setLayout(new BorderLayout());
	        cvsLogo = new glLogoCvs(150, 150, null, null);
	        cvsLogo.setAnimateFps(30.0);
		add("Center", cvsLogo);

		add("West", new Label("OpenGL"));
		add("East", new Label("Java-Applet"));

	        cvsLogo.addMouseListener(this);
	        setBackground(Color.white);  
	} 

	  public void start() {
		cvsLogo.start();
	  }

	  public void stop() {
		cvsLogo.stop();
	  }

	  public void destroy() {
		cvsLogo.stop();
		cvsLogo.cvsDispose();
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

		if( comp.equals(cvsLogo) )
			cvsLogo.setSuspended(!cvsLogo.isSuspended(), true);
	}
}
