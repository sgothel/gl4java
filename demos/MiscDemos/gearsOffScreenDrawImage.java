/**
 * @(#) gearsOffScreeneen2Tga.java
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
import gl4java.awt.*;
import gl4java.utils.textures.*;

public class gearsOffScreenDrawImage extends Applet
	implements ComponentListener
{
	GLOffScreenDrawable glcanvas=null;
	Dimension size;

	public void init()
	{
		if(glcanvas==null)
		{
			size = new Dimension(400,400);
			glcanvas = new GLOffScreenDrawable(size);

			gearRenderer gear = new gearRenderer(true);
			glcanvas.addGLEventListener(gear);

			glcanvas.initDrawable();
		}
		addComponentListener(this);
	}

	public void destroy()
	{
	    removeComponentListener(this);
	    glcanvas.cvsDispose();
	    glcanvas=null;
	    super.destroy();
	}

	public Dimension getPreferredSize() {
		return getMinimumSize();
	}

	public Dimension getMinimumSize() {
		return size;
	}

	public void setSize(Dimension size) {
		this.size=size;
		super.setSize(size);
		if(glcanvas!=null)
			glcanvas.setSize(size);
	}
	

	public void paint(Graphics g)
	{
		size=getSize();
		if(glcanvas!=null && glcanvas.cvsIsInit())
		{
			glcanvas.repaint();
		        glcanvas.drawImage(g, 0, 0, size.width, size.height, this);
		}
	}


	    public void componentResized(ComponentEvent e)
	    {
		if(glcanvas!=null && glcanvas.cvsIsInit())
		{
			setSize(getSize());
		}
	    }

	    public void componentMoved(ComponentEvent e)
	    {
	    }

	    public void componentShown(ComponentEvent e)
	    {
	    }

	    public void componentHidden(ComponentEvent e)
	    { }

	public static void main( String args[] ) 
	{
		int i = 0;
		String gljLib = null;
		String glLib = null;
		String gluLib = null;

	        GLContext.gljNativeDebug = false;
	        GLContext.gljClassDebug = false;
	        GLContext.gljThreadDebug = false;

		while(args.length>i)
		{
			if(args[i].equals("-gljLib"))
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

		GLContext.doLoadNativeLibraries(gljLib, glLib, gluLib);

		/**
		 * yes .. we need an AWT Frame,
		 * to let java get in touch with the underlying 
		 * windowing system for initialisation !
		 */
		Frame mainFrame = new Frame("gears offscreen");

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

		gearsOffScreenDrawImage applet = new gearsOffScreenDrawImage ();
		mainFrame.add(applet);
		applet.setSize(400,500);
		applet.init();

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
		applet.repaint();
	}
}
