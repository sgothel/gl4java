import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.Dimension;
import javax.swing.*;
import gl4java.*;
import gl4java.awt.*;
import gl4java.utils.glut.*;
import gl4java.utils.glut.fonts.*;

public class test1 extends JApplet 
  implements GLEnum, GLUEnum, ActionListener, ItemListener
{
    static {
            if(GLContext.loadNativeLibraries(null, null, null)==false)
	      System.out.println("GLCanvas could not load def. native libs.");
    } 
    
    protected class test1Panel extends GLJPanel 
	  implements ActionListener, ItemListener
    {
	public test1Panel( LayoutManager layout, boolean isDoubleBuffered) 
	{
	    super(layout, isDoubleBuffered);
	    GLContext.gljNativeDebug = true;
	    GLContext.gljClassDebug  = true;
	    doubleBuffer = false;
	}


	public void init() {
	    System.out.println("<i>");
	    //glg = new GLGraphics(gl, glu);
	    reshape(getSize().width, getSize().height);
	}

	public void display() 
	{
	    if( glj.gljMakeCurrent() == false ) {
		System.out.println("problem in use() method");
		return;
	    }
	  
	    System.out.println("<p>");

	    int i;

	    gl.glPushMatrix();
	    gl.glClear(GL_COLOR_BUFFER_BIT);

	    gl.glColor4f(0f, 0f, 1f, 1f);

	    int width=getSize().width;
	    int height=getSize().height;

	    gl.glBegin(GLEnum.GL_LINES);
                gl.glVertex3i( 0, 0, 0);
                gl.glVertex3i( 10, 10, 0);
                gl.glVertex3i( 0, 10, 0);
		gl.glVertex3i( 10, 0, 0);
            gl.glEnd();

	    gl.glPopMatrix();

	    glj.gljSwap();
	    glj.gljCheckGL();
	    glj.gljFree();
	}

        public void reshape( int width, int height )
        {
		Rectangle bounds = getBounds();
	  System.out.println("reshape("+width+", "+height+")");
	  System.out.println("reshape bounds("+bounds+")");
		//gl.glViewport(0,0, width, height);
		gl.glViewport(bounds.x, bounds.y, 
		              bounds.width, bounds.height);
		gl.glMatrixMode(GL_PROJECTION);
		gl.glLoadIdentity();
		gl.glOrtho(0, 10, 0, 10, -50.0,50.0);
		gl.glMatrixMode(GL_MODELVIEW);
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
	JPanel jp1 = new JPanel (new BorderLayout(), false);
	setContentPane(jp1);
	tst1cvs1 = new test1Panel(new BorderLayout(), false);
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
