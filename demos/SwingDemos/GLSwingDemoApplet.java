import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.Dimension;
import javax.swing.*;
import gl4java.*;
import gl4java.swing.*;
import gl4java.utils.glut.*;
import gl4java.utils.glut.fonts.*;

public class GLSwingDemoApplet extends SimpleGLJApplet1 
  implements GLEnum, GLUEnum, ActionListener, ItemListener
{
    String[] dataSize = {"offscreen-size: component",
		         "offscreen-size: 10x10",
		         "offscreen-size: 50x50",
		         "offscreen-size: 100x100",
		         "offscreen-size: 500x500",
		         "offscreen-size: 1000x1000"};

    Dimension[] dimSize = { null,
    			 new Dimension(10,10),
    			 new Dimension(50,50),
    			 new Dimension(100,100),
    			 new Dimension(500,500),
    			 new Dimension(1000,1000)};


    String[] data = {"CrossColorJPanel",
		     "GearsJPanel",
                     "DrawColoredPrimitivesJPanel", 
		     "TessJPanel"};

    JPanel   masterPanel  = null;
    JComboBox glChoice = null;
    JComboBox glOffScrnSize = null;
    boolean isAnApplet = true;

    public void init()
    {
	super.init();
	if(isAnApplet==false)
	{
	    GLContext.gljNativeDebug = true;
	    GLContext.gljClassDebug  = true;
	}

	masterPanel = new JPanel (new BorderLayout());
	getContentPane().add("Center",masterPanel);
	canvas = new CrossColorJPanel();
	masterPanel.add("Center", canvas);

	    JPanel np = new JPanel();
	    masterPanel.add("North", np);
	    glChoice = new JComboBox(data);
	    glChoice.addItemListener(this);
	    np.add(glChoice);
	    glOffScrnSize = new JComboBox(dataSize);
	    glOffScrnSize.addItemListener(this);
	    np.add(glOffScrnSize);

	    JButton b1, b2;
	    masterPanel.add("East", (b1 = new JButton("E")));
	    b1.setActionCommand("east");
	    b1.addActionListener(this);
	    masterPanel.add("West", (b2 = new JButton("W")));
	    b2.setActionCommand("west");
	    b2.addActionListener(this);

	    JCheckBox c1;
	    masterPanel.add("South", (c1 = new JCheckBox("SouthButton", true)));
	    c1.addItemListener(this);
    }

    public static void main(java.lang.String[] args) {
	try {
		boolean withAWT=false;

		if(args.length>0 && args[0].equals("withAWT"))
			withAWT=true;
		Frame mainFrame = new Frame("test1");

	        GLSwingDemoApplet applet=new GLSwingDemoApplet();

		applet.isAnApplet=false;
		applet.init();
		applet.start();

		mainFrame.add(applet);
		applet.setSize(480, 480);

		if(withAWT)
		{
			gears applet2 = new gears();
			applet2.setSize(300, 300);
			applet2.init();
			applet2.start();
			mainFrame.add(applet2);
			applet2.setSize(300, 300);
		}
		mainFrame.pack();
		mainFrame.setVisible(true);

	} catch (Throwable exception) {
	    	System.err.println("Exception occurred in main()");
	    	exception.printStackTrace(System.out);
	}
    }

	public void actionPerformed(ActionEvent e) {
		if (e.getActionCommand().equals("east")) {
			System.out.println("East pressed");
		} else if (e.getActionCommand().equals("west")) {
			System.out.println("West pressed");
		}
        }

	public void itemStateChanged(ItemEvent e) {
		Object source = e.getItemSelectable();
		Object item = e.getItem();
		System.out.println("item changed: "+source);

		if(glChoice!=null &&
		   glChoice.equals(e.getItemSelectable()) &&
		   e.getStateChange()==ItemEvent.SELECTED &&
		   (item instanceof String)==true
		  )
                {
			String clazzName = (String)item;
			try {
				Object obj = 
					Class.forName(clazzName).newInstance();
				if(obj instanceof GLJPanel)
				{
				    if(canvas!=null)
				    {
					    masterPanel.remove(canvas);
					    canvas.cvsDispose();
			 	    }
				    canvas = (GLJPanel)obj;
				    canvas.setVisible(true);
				    masterPanel.add("Center", canvas);
				    masterPanel.invalidate();
				    masterPanel.validate();
				    masterPanel.repaint();
				    glOffScrnSize.setSelectedIndex(0);
				}
				if(obj instanceof GLAnimJPanel)
				{
				    ((GLAnimJPanel)obj).start();
				}
			} catch (Exception ex) {
			     System.out.println("Exception during loading: "+
				  clazzName);
			     System.out.println(ex);
			}
		} else
		if(glOffScrnSize!=null && canvas!=null &&
		   glOffScrnSize.equals(e.getItemSelectable()) &&
		   e.getStateChange()==ItemEvent.SELECTED &&
		   (item instanceof String)==true
		  )
                {
			int idx = glOffScrnSize.getSelectedIndex();
			canvas.setOffScreenSize(dimSize[idx]);
		}
	}
}
