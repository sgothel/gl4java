/**
 * @(#) gearsOffScreen2Tga.java
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

public class gearsOffScreen2Tga 
{
	GLOffScreenDrawable canvas;

	public void snapshot()
	{
		canvas = new GLOffScreenDrawable(new Dimension(400,400));

		gearRenderer gear = new gearRenderer(true);
		canvas.addGLEventListener(gear);

		canvas.initDrawable();

		if(canvas.cvsIsInit())
		{
			canvas.repaint();
			GLContext glj = canvas.getGLContext();

			if( glj.gljMakeCurrent() )
			{
				TGATextureGrabber textgrab = 
					new TGATextureGrabber(canvas.getGL());
				textgrab.grabPixels(
				    glj.isDoubleBuffer()?GLEnum.GL_BACK:GLEnum.GL_FRONT,
				    0, 0, 
				    canvas.getSize().width, 
				    canvas.getSize().height);
				textgrab.write2File("gears.tga");
				System.out.println("written gears.tga");
				glj.gljCheckGL();
				glj.gljFree();
			}
		}
	}

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

		Dimension ps = new Dimension(20,20);
		mainFrame.setBounds(-100,-100,99,99);
		mainFrame.setVisible(true);
		mainFrame.setVisible(false);
		mainFrame.setVisible(true);
		Insets is = mainFrame.getInsets();
		mainFrame.setBounds(0,0,
			    ps.width+is.left+is.right, 
		            ps.height+is.top+is.bottom);
		mainFrame.setVisible(true);

		gearsOffScreen2Tga applet = new gearsOffScreen2Tga();
		applet.snapshot();

		mainFrame.dispose();
		System.exit(0);
	}
}
