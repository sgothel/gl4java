
import gl4java.GLContext;
import gl4java.awt.GLCanvas;
import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class glOlympicCvsApplet extends Applet 
  implements MouseListener
{
	olympicCvs cvsOlympic = null;

	String gljLib=null;
	String glLib=null;
	String gluLib=null;

	public void init()
	{
		if(GLContext.loadNativeLibraries(gljLib, glLib, gluLib)==false)
		  System.out.println("could not load native libs:"+
				     gljLib + ", " + glLib + ", " + gluLib);
		else 
		  System.out.println("load native libs:"+
				     gljLib + ", " + glLib + ", " + gluLib);


		setLayout(new BorderLayout());
	        cvsOlympic = new olympicCvs(150, 150, null, null);
	        cvsOlympic.setAnimateFps(30.0);
		add("Center", cvsOlympic);

		add("West", new Label("OpenGL"));
		add("East", new Label("Java-Applet"));

	        cvsOlympic.addMouseListener(this);
	        addMouseListener(this);

	        setBackground(Color.white);  
	} 

	  public void start() {
		cvsOlympic.start();
	  }

	  public void stop() {
		cvsOlympic.stop();
	  }

	  public void destroy() {
		cvsOlympic.stop();
		cvsOlympic.cvsDispose();
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

		if( comp.equals(cvsOlympic) )
		     cvsOlympic.setSuspended(!cvsOlympic.isSuspended(), true);
	}
}
