import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.Dimension;
import javax.swing.*;

public class test2 extends JApplet 
	  implements ActionListener, ItemListener
{
    protected class test2Panel extends JPanel 
	  implements ActionListener, ItemListener
    {
	public test2Panel( LayoutManager layout, boolean isDoubleBuffered) 
	{
	    super(layout, isDoubleBuffered);
	}


	public void paintComponent(Graphics g) 
	{
	    System.out.println("<p>");

	    super.paintComponent(g);

	    g.setColor(Color.blue);

	    int width=getSize().width;
	    int height=getSize().height;

	    g.drawLine ( 0, height/2, width, height/2 );
	    g.drawLine ( width/2, 0, width/2, height );
	
	    g.setColor(Color.yellow);

	    g.drawLine ( 0, 0, width, height);
	    g.drawString("Left-top", 0, 10);
	    g.drawString("GLGraphics - CENTER", width/2, height/2);
	    g.drawString("Right - Bottom (nearly)", width*2/3, height*2/3);
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
		System.out.println("item changed: "+source);
	}

    }

    test2Panel tst1cvs1;    

    public void init()
    {
	JPanel jp1 = new JPanel (new BorderLayout(), false);
	setContentPane(jp1);
	tst1cvs1 = new test2Panel(new BorderLayout(), false);
	jp1.add("Center", tst1cvs1);

	    String[] data = {"one", "two", "three", "four"};
	    JList dataList = new JList(data);
	    jp1.add("North", dataList);

	    JButton b1, b2;
	    jp1.add("East", (b1 = new JButton("E")));
	    b1.setActionCommand("east");
	    b1.addActionListener(this);
	    jp1.add("West", (b2 = new JButton("W")));
	    b2.setActionCommand("west");
	    b2.addActionListener(this);

	    JCheckBox c1;
	    jp1.add("South", (c1 = new JCheckBox("SouthButton", true)));
	    c1.addItemListener(this);
    }

    public static void main(java.lang.String[] args) {
	try {
		Frame mainFrame = new Frame("test2");

	        test2 applet=new test2();

		applet.setSize(400, 400);
		applet.init();
		applet.start();

		mainFrame.add(applet);

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
		System.out.println("item changed: "+source);
	}

}
