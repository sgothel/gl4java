import javax.swing.*;
import javax.swing.event.*;

import java.awt.event.*;
import java.awt.*;

import gl4java.swing.*;
import gl4java.*;

public class InternalGLFrameDemo1 extends JFrame {
    JDesktopPane desktop = null;

    public InternalGLFrameDemo1() {
        super("InternalGLFrameDemo1");

        //Make the big window be indented 50 pixels from each edge 
        //of the screen.
        int inset = 50;
        Dimension screenSize = Toolkit.getDefaultToolkit().getScreenSize();
        setBounds(inset, inset, 
                  screenSize.width/2 - inset*2, 
                  screenSize.height/2*3-inset*2);

        //Quit this app when the big window closes.
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                System.exit(0);
            }
        });

        //Set up the GUI.
        desktop = new JDesktopPane(); //a specialized layered pane
        createFrame(); //Create first window
	setContentPane(desktop);
        setJMenuBar(createMenuBar());

        //Make dragging faster:
        desktop.putClientProperty("JDesktopPane.dragMode", "outline");
    }

    protected JMenuBar createMenuBar() {
        JMenuBar menuBar = new JMenuBar();

        JMenu menu = new JMenu("Document");
        menu.setMnemonic(KeyEvent.VK_D);
        JMenuItem menuItem = new JMenuItem("New");
        menuItem.setMnemonic(KeyEvent.VK_N);
        menuItem.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                createFrame();
            }
        });
        menu.add(menuItem);
        menuBar.add(menu);

        return menuBar;
    }

    protected void createFrame() {
        InternalGLFrame frame = new InternalGLFrame("CrossColorJPanel");
	frame.setVisible(true); //necessary as of kestrel
        desktop.add(frame);
        try {
            frame.setSelected(true);
        } catch (java.beans.PropertyVetoException e) {}
    }

    public static void main(String[] args) {
	    GLContext.gljNativeDebug = true;
	    GLContext.gljClassDebug  = true;
        InternalGLFrameDemo1 frame = new InternalGLFrameDemo1();
        frame.setVisible(true);
    }

    static int openFrameCount = 0;
    static final int xOffset = 30, yOffset = 30;
    static InternalGLFrame activeIF = null;

    public class InternalGLFrame extends JInternalFrame 
    	implements ItemListener, InternalFrameListener
    {
            String[] data = {"CrossColorJPanel",
	    	             "GearsJPanel",
                             "DrawColoredPrimitivesJPanel", 
		             "TessJPanel"};
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


	    GLJPanel canvas = null;
            JComboBox glChoice = null;
	    JComboBox glOffScrnSize = null;
	    JComponent master = null;

	    public InternalGLFrame(String clazzName) 
	    {
		super("Document #" + (++openFrameCount), 
		      true, //resizable
		      true, //closable
		      true, //maximizable
		      true);//iconifiable

		//...Create the GUI and put it in the window...
		master = (JComponent) getContentPane();
		master.setLayout(new BorderLayout());
	        switchGLJPanel(clazzName);

	        JPanel np = new JPanel();
	        master.add("North", np);
	        glChoice = new JComboBox(data);
	        glChoice.addItemListener(this);
	        np.add(glChoice);
	        glOffScrnSize = new JComboBox(dataSize);
	        glOffScrnSize.addItemListener(this);
	        np.add(glOffScrnSize);

        	setJMenuBar(createIFMenuBar());

		//...Then set the window size or call pack...
		setSize(300,300);

		//Set the window's location.
		setLocation(xOffset*openFrameCount, yOffset*openFrameCount);

		addInternalFrameListener(this);
	    }

	    public void switchGLJPanel(String clazzName)
	    {
		try {
			Object obj = 
				Class.forName(clazzName).newInstance();
			if(obj instanceof GLJPanel)
			{
			    if(canvas!=null)
			    {
				    master.remove(canvas);
				    canvas.cvsDispose();
			    }
			    canvas = (GLJPanel)obj;
			    canvas.setVisible(true);
			    master.add("Center", canvas);
			    master.invalidate();
			    master.validate();
			    master.repaint();
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

	    }

	    protected JMenuBar createIFMenuBar() 
	    {
		JMenuBar menuBar = new JMenuBar();

		JMenu menu = new JMenu("Document");
		menu.setMnemonic(KeyEvent.VK_D);
		JMenuItem menuItem = new JMenuItem("New");
		menuItem.setMnemonic(KeyEvent.VK_N);
		menuItem.addActionListener(new ActionListener() {
		    public void actionPerformed(ActionEvent e) {
			createIFFrame();
		    }
		});
		menu.add(menuItem);
		menuBar.add(menu);

		return menuBar;
	    }

	    protected void createIFFrame() {
	    	if(activeIF==null)
			return;
		InternalGLFrame frame = new InternalGLFrame("CrossColorJPanel");
		frame.setVisible(true); //necessary as of kestrel
		activeIF.canvas.add(frame);
		try {
		    activeIF.setSelected(true);
		} catch (java.beans.PropertyVetoException e) {}
	    }

	    public void itemStateChanged(ItemEvent e) 
	    {
		Object source = e.getItemSelectable();
		Object item = e.getItem();
		System.out.println("item changed: "+source);

		if(glChoice!=null &&
		   glChoice.equals(e.getItemSelectable()) &&
		   e.getStateChange()==ItemEvent.SELECTED &&
		   (item instanceof String)==true
		  )
                {
	    		switchGLJPanel((String)item);
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

             public void internalFrameClosing(InternalFrameEvent e) {
             }

             public void internalFrameClosed(InternalFrameEvent e) {
             }

             public void internalFrameOpened(InternalFrameEvent e) {
             }

             public void internalFrameIconified(InternalFrameEvent e) {
             }

             public void internalFrameDeiconified(InternalFrameEvent e) {
             }

             public void internalFrameActivated(InternalFrameEvent e) {
		 activeIF = (InternalGLFrame)e.getSource();
             }

             public void internalFrameDeactivated(InternalFrameEvent e) {
             }
    }
}
