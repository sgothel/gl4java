import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.Dimension;
import javax.swing.*;
import gl4java.*;
import gl4java.swing.*;
import gl4java.utils.glut.*;
import gl4java.utils.glut.fonts.*;

public class test1 extends JApplet 
  implements GLEnum, GLUEnum
{
    static {
            if(GLContext.loadNativeLibraries(null, null, null)==false)
	      System.out.println("GLCanvas could not load def. native libs.");
    } 
    
    protected class test1Panel extends GLPanel 
	  implements ActionListener, ItemListener
    {
	public test1Panel() {
	    super();
	    GLContext.gljNativeDebug = true;
	    GLContext.gljClassDebug  = true;
	    //String[] data = {"one", "two", "three", "four"};
	    //JList dataList = new JList(data);
	    //add("North", dataList);
	    JButton b1, b2;
	    add("East", (b1 = new JButton("E")));
	    b1.setActionCommand("east");
	    b1.addActionListener(this);
	    add("West", (b2 = new JButton("W")));
	    b2.setActionCommand("west");
	    b2.addActionListener(this);

	    JCheckBox c1;
	    add("South", (c1 = new JCheckBox("SouthButton", true)));
	    c1.addItemListener(this);
	}

	GLGraphics glg = null;

	public void init() {
	    System.out.println("<i>");
	    //glg = new GLGraphics(gl, glu);
	    reshape(getSize().width, getSize().height);
	}

	public void display() 
	{
	    System.out.println("<p>");

	    int i;

	    glg = (GLGraphics)getGraphics();

	    gl.glPushMatrix();
	    gl.glClear(GL_COLOR_BUFFER_BIT);

	    glg.setColor(Color.blue);

	    int width=getSize().width;
	    int height=getSize().height;

	    glg.drawLine ( 0, height/2, width, height/2 );
	    glg.drawLine ( width/2, 0, width/2, height );
	
	    glg.setColor(Color.yellow);

	    glg.drawLine ( 0, 0, width, height);
	    glg.drawString("Left-top", 0, 10);
	    glg.drawString("GLGraphics - CENTER", width/2, height/2);
	    glg.drawString("Right - Bottom (nearly)", width*2/3, height*2/3);
	    gl.glPopMatrix();

	    glj.gljCheckGL();
	}

	public void reshape(int width, int height)
	{
	  System.out.println("reshape("+width+", "+height+")");
	  super.reshape(width, height);
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

    test1Panel tst1cvs1;    

    public void init()
    {
		tst1cvs1 = new test1Panel();
		tst1cvs1.setSize(400,400);
		setContentPane(tst1cvs1);
    }

    public static void main(java.lang.String[] args) {
	try {
		Frame mainFrame = new Frame("test1");

	        test1 applet=new test1();

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
}
