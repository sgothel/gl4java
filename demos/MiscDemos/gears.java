/**
 * @(#) gears.java
 * @(#) author: Brian Paul (converted to Java by Ron Cemer and Sven Goethel)
 *
 * This version is equal to Brian Paul's version 1.2 1999/10/21
 */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import gl4java.*;
import gl4java.drawable.*;
import gl4java.awt.GLAnimCanvas;
import gl4java.applet.SimpleGLAnimApplet1;

public class gears extends SimpleGLAnimApplet1 
    implements MouseListener
{

        /* Initialize the applet */
	public void init()
	{
	  init(false);
	}

	public void init(boolean showGL)
	{
	super.init();

        Dimension d = getSize();

        GLCapabilities caps = new GLCapabilities();

        canvas =
            GLDrawableFactory.getFactory().createGLAnimCanvas(caps, d.width, d.height);

        gearRenderer gear = new gearRenderer(showGL);
        canvas.addGLEventListener(gear);

        add("Center", canvas);
        addMouseListener(this);
	}

	public void destroy()
	{
            removeMouseListener(this);
	    super.destroy();
	}

	public static void main( String args[] ) 
	{
		int i = 0;
		String gljLib = null;
		String glLib = null;
		String gluLib = null;
		boolean perftest=false;

	        GLContext.gljNativeDebug = true;
	        GLContext.gljClassDebug = true;
	        GLContext.gljThreadDebug = true;

		while(args.length>i)
		{
			if(args[i].equals("-perftest"))
			{
				perftest=true;
			} else if(args[i].equals("-gljLib"))
			{
				i++;
				if(args.length>i)
					gljLib=args[i];
			} else if(args[i].equals("-glLib"))
			{
				i++;
				if(args.length>i)
					glLib=args[i];
			} else if(args[i].equals("-gluLib"))
			{
				i++;
				if(args.length>i)
					gluLib=args[i];
			} else {
			  System.out.println("illegal arg "+i+": "+args[i]);
			}
			i++;
		}

		if(perftest)
		{
			GLContext.gljNativeDebug = false;
			GLContext.gljThreadDebug = false;
			GLContext.gljClassDebug = false;
		}

		if(perftest)
			GLContext.gljClassDebug=true;
		GLContext.doLoadNativeLibraries(gljLib, glLib, gluLib);
		if(perftest)
			GLContext.gljClassDebug=false;

		Frame mainFrame = new Frame("gears");

		mainFrame.addWindowListener( new WindowAdapter()
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

		gears applet = new gears();
		mainFrame.add(applet);
		applet.setSize(400,500);
		applet.init();

		if(perftest)
		{
			applet.canvas.setUseFpsSleep(false);
			applet.canvas.setUseRepaint(false);
			applet.canvas.setUseYield(false);

			System.out.println("useFpsSleep: "+
				applet.canvas.getUseFpsSleep());
			System.out.println("useRepaint: "+
				applet.canvas.getUseRepaint());

			System.out.println("useFpsSleep: "+
				applet.canvas.getUseFpsSleep());
		}

		applet.start();

		Dimension ps = applet.getPreferredSize();
		mainFrame.setBounds(-100,-100,99,99);
		mainFrame.setVisible(true);
		mainFrame.setVisible(false);
		mainFrame.setVisible(true);
		Insets is = mainFrame.getInsets();
		mainFrame.setBounds(0,0,
			    ps.width+is.left+is.right, 
		            ps.height+is.top+is.bottom);
		mainFrame.setVisible(true);
	}

        // Methods required for the implementation of MouseListener
        public void mouseEntered( MouseEvent evt )
        {
		//System.out.println("mouse entered: ");
		super.mouseEntered(evt);
        }
    
        public void mouseExited( MouseEvent evt )
        {
		//System.out.println("mouse exit: ");
		super.mouseExited(evt);
        }
    
        public void mousePressed( MouseEvent evt )
        {
		//System.out.println("mouse pressed: ");
		super.mousePressed(evt);
        }
    
        public void mouseReleased( MouseEvent evt )
        {
		//System.out.println("mouse released: ");
		super.mouseReleased(evt);
        }
    
        public void mouseClicked( MouseEvent evt )
        {
		//System.out.println("mouse clicked: ");
		super.mouseClicked(evt);

            if ((evt.getModifiers() & evt.BUTTON2_MASK) != 0)
            {
	        System.out.println("stopping applet now .. (after 1s, restart)");
		stop();
		try {
			Thread.sleep(1000);
		} catch (Exception e)
		{ System.out.println("oops, somebody woke us up .."); }
	        System.out.println("restarting applet now .. ");
		canvas.setVisible(true);
		start();
            }
        }
}
