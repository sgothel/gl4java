
import gl4java.GLContext;
import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
import java.applet.*;

public class glOlympicSwingApplet extends JApplet 
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


	        cvsOlympic = new olympicCvs(150, 150, null, null);
	        cvsOlympic.setAnimateFps(30.0);

		JPanel p1 = new JPanel();
		p1.setLayout(new BorderLayout());

		getContentPane().setLayout(new BorderLayout());
		getContentPane().add("Center", p1);

		p1.add("North", new JLabel("Overlapping Swings do not work"));
		p1.add("West", new JLabel("OpenGL"));
		p1.add("Center", cvsOlympic);
		p1.add("East", new JLabel("Java-JApplet"));
		p1.add("South", new JLabel("The Events does not work yet"));

	        cvsOlympic.addMouseListener(this);

	        setBackground(Color.white);  

		JMenuBar jmb1 = new JMenuBar();
		JMenu    jm1  = new JMenu("Menu-1");
		jm1.add(new JMenuItem("Menue-1-Item-1"));
		jm1.add(new JMenuItem("Menue-1-Item-2"));
		jm1.add(new JMenuItem("Menue-1-Item-3"));
		JMenu    jm2  = new JMenu("Menu-2");
		jm2.add(new JMenuItem("Menue-2-Item-1"));
		jm2.add(new JMenuItem("Menue-2-Item-2"));
		jm2.add(new JMenuItem("Menue-2-Item-3"));
		JMenu    jm3  = new JMenu("Menu-3");
		jm3.add(new JMenuItem("Menue-3-Item-1"));
		jm3.add(new JMenuItem("Menue-3-Item-2"));
		jm3.add(new JMenuItem("Menue-3-Item-3"));
		jmb1.add(jm1);
		jmb1.add(jm2);
		jmb1.add(jm3);

		setJMenuBar(jmb1);
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
	 	Component comp = evt.getComponent();
		mouseInfo(evt);
		if( comp.equals(cvsOlympic) )
		     cvsOlympic.setSuspended(!cvsOlympic.isSuspended(), true);

	}

	public void mouseExited( MouseEvent evt )
	{
		mouseInfo(evt);

	}

	public void mousePressed( MouseEvent evt )
	{
		mouseInfo(evt);

	}

	public void mouseReleased( MouseEvent evt )
	{
		mouseInfo(evt);

	}

	public void mouseClicked( MouseEvent evt )
	{
	 	Component comp = evt.getComponent();

		mouseInfo(evt);

		if( comp.equals(cvsOlympic) )
		     cvsOlympic.setSuspended(!cvsOlympic.isSuspended(), true);
	}

	public void mouseInfo(MouseEvent evt)
	{
	 	Component comp = evt.getComponent();

		System.out.println("\n\n----------------------------------");
		System.out.println(comp);
		System.out.println(evt);
	}
}
