/**
 * @(#) Test.java
 * @(#) author: Sven Goethel
 */

package gl4java.utils;


/* This program is free software under the license of LGPL */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;
import gl4java.GLContext;
import gl4java.awt.GLCanvas;
import gl4java.awt.GLAnimCanvas;
import gl4java.applet.SimpleGLAnimApplet1;

public class Test 
{
    
    String testClazzName;
    int width, height;
    String glName, gluName;

    public Test(String testClazzName, int width, int height,
                String glName, String gluName)
    {
        this.testClazzName = testClazzName;
	this.width         = width;
	this.height        = height;
	this.glName        = glName;
	this.gluName       = gluName;
    }

    public void loadNStartTestClazz()
    {
        Object tstObj = null;

	try {
	        Class canvasClazz = 
			Class.forName("gl4java.awt.GLCanvas");
	        Class animCanvasClazz = 
			Class.forName("gl4java.awt.GLAnimCanvas");
	        Class animAppletCanvasClazz = 
			Class.forName("gl4java.applet.SimpleGLAnimApplet1");

	        Class tstClazz = Class.forName(testClazzName);

		if( ! canvasClazz.isAssignableFrom(tstClazz) &&
		    ! animAppletCanvasClazz.isAssignableFrom(tstClazz) )
		{
			System.out.println("Your test-clazz is neither derived from gl4java.awt.GLCanvas nor from gl4java.applet.SimpleGLAnimApplet1!");
			throw new Exception();
		}

		/**
		 * Std. conversion from Integer -> int 
		 */
		Class[] parameterTypes = new Class[4];
		parameterTypes[0] = Class.forName("java.lang.Integer");
		parameterTypes[1] = Class.forName("java.lang.Integer");
		parameterTypes[2] = Class.forName("java.lang.String");
		parameterTypes[3] = Class.forName("java.lang.String");

		Object[] parameters = null;
		java.lang.reflect.Constructor tstObjConstr = null;

		try {
			tstObjConstr = tstClazz.getConstructor(parameterTypes);

			parameters = new Object[4];
			parameters[0] = new java.lang.Integer(width);
			parameters[1] = new java.lang.Integer(height);
			parameters[2] = glName;
			parameters[3] = gluName;

		} catch (java.lang.NoSuchMethodException nsme) {

		  try {
		    parameterTypes = new Class[4];
		    parameterTypes[0] = Class.forName("java.lang.Integer");
		    parameterTypes[1] = Class.forName("java.lang.Integer");

		    tstObjConstr = tstClazz.getConstructor(parameterTypes);

		    parameters = new Object[4];
		    parameters[0] = new java.lang.Integer(width);
		    parameters[1] = new java.lang.Integer(height);

		  } catch (java.lang.NoSuchMethodException nsme2) {
		      tstObj = tstClazz.newInstance();
		  }
		}

		if(tstObj==null && parameters!=null)
			tstObj = tstObjConstr.newInstance(parameters);

	} catch (Exception ex) {
	    	System.out.println("Instantiation of: "+testClazzName+" failed !");
	    	System.out.println(ex);
		ex.printStackTrace();
	    	System.exit(1);
	}

        if(tstObj instanceof SimpleGLAnimApplet1)
        {
		SimpleGLAnimApplet1 glSAnimApplet = (SimpleGLAnimApplet1)tstObj;

		Frame f = new Frame(testClazzName);

		f.addWindowListener( new WindowAdapter()
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

		f.setLayout(new BorderLayout());

		glSAnimApplet.setSize(width, height);
		glSAnimApplet.init();
		glSAnimApplet.start();

		f.add(glSAnimApplet);

		Dimension ps = glSAnimApplet.getPreferredSize();
		f.setBounds(-100,-100,99,99);
		f.setVisible(true);
		//f.setVisible(false);
		Insets i = f.getInsets();
		f.setBounds(0,0,
			    ps.width+i.left+i.right, 
			    ps.height+i.top+i.bottom);
		f.setVisible(true);

        } else if(tstObj instanceof GLAnimCanvas)
        {
		GLAnimCanvas glAnimCvsTest = (GLAnimCanvas)tstObj;

		GLAnimCanvasTest applet = new GLAnimCanvasTest();

		Frame f = new Frame(testClazzName);

		f.addWindowListener( new WindowAdapter()
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

		f.setLayout(new BorderLayout());
		f.add("Center", applet);
		applet.setSize(width,height);
		applet.init(glAnimCvsTest);
		applet.start();
		Dimension ps = applet.getPreferredSize();
		f.setBounds(-100,-100,99,99);
		f.setVisible(true);
		f.setVisible(false);
		Insets i = f.getInsets();
		f.setBounds(0,0,
			    ps.width+i.left+i.right, 
			    ps.height+i.top+i.bottom);
		f.setVisible(true);

        } else {
		GLCanvas glCvsTest = (GLCanvas)tstObj;

		GLCanvasTest applet = new GLCanvasTest();

		Frame f = new Frame(testClazzName);

		f.addWindowListener( new WindowAdapter()
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

		f.setLayout(new BorderLayout());
		f.add("Center", applet);
		applet.setSize(width,height);
		applet.init();
		applet.start();
		Dimension ps = applet.getPreferredSize();
		f.setBounds(-100,-100,99,99);
		f.setVisible(true);
		f.setVisible(false);
		Insets i = f.getInsets();
		f.setBounds(0,0,
			    ps.width+i.left+i.right, 
			    ps.height+i.top+i.bottom);
		f.setVisible(true);
        }
    }

    /**
     * Test to load the native library, GLFunc and GLUFunc implementation !
     * If succesfull, a Frame will created and the GL-Infos (vendor, ...)
     * are shown in it !
     *
     * @param args, a list of args, 
     *
     *    -gljlib    <glj-libname> gl4java-glj-lib native library
     *    -glclass   <gl-class> gl4java-gl-class java GLFunc implementation
     *    -gluclass  <glu-class> gl4java-glu-class java GLUFunc implementation
     *    -testclass <GLCanvas or SimpleGLAnimApplet1 Implementation Class> A derivation of GLCanvas (GLAnimCanvas also) or SimpleGLAnimApplet1 can be started here for testing purposes ! 
     *    -w         <int> the testclass window width  (default 400) 
     *    -h         <int> the testclass window height  (default 250) 
     *    -perftest  if a derivation of GLAnimCanvas is used as the testclass (see above), the fps-sleep and the use-repaint flags are set to false!
     *
     *    without any arguments, a help screen is shown 
     */
    public static void main( String args[] ) 
    {
    	String nativeGLLib = null;
    	String nativeGLULib = null;
     	String gljLibName = null;
     	String glLibName = null;
     	String gluLibName = null;
     	String glName = GLContext.defGLFuncClass;
     	String gluName = GLContext.defGLUFuncClass;
     	String testClazzName = GLContext.defGLUFuncClass;
	boolean perftest=false;
	int width=400, height=250;
	int i = 0;
	boolean ok=true;

	if(args.length==0)
	{
		System.out.println("usage: java gl4java.utils.Test <options>, where options can be: ");
		System.out.println("	-GLLib <OpenGL Libname> \t choose a custom OpenGL native library (default: libGL, or OPENGL32, ..)");
		System.out.println("	-GLULib <GLU Libname> \t choose a custom GLU native library (default: libGLU, or GLU32, ..)");
		System.out.println("	-gljlib <glj-libname> \t choose a custom gl4java-glj-lib native library (default: GL4JavaJauGljJNI)");
		System.out.println("	-glclass <gl-class> \t choose a custom gl4java-gl-class java GLFunc implementation (default: GLFuncJauJNI)");
		System.out.println("	-gluclass <glu-class> \t choose a custom gl4java-glu-class java GLUFunc implementation (default: GLUFuncJauJNI)");
		System.out.println("	-testclass <GLCanvas Implementation Class> \t\t\t a derivation of GLCanvas (GLCanvas or GLAnimCanvas) can be started here for testing purposes !");
		System.out.println("	-w <int> \t\t\t the testclass window width  (default 800) !");
		System.out.println("	-h <int> \t\t\t the testclass window height (default 600) !");
		System.out.println("	-perftest \t\t\t if a derivation of GLAnimCanvas is used as the testclass (see above), the fps-sleep and the use-repaint flags are set to false!");
	        System.exit(0);
	}

	while(args.length>i)
	{
		if(args[i].equals("-GLLib")) {
			if(args.length>++i) nativeGLLib=args[i];
		} else if(args[i].equals("-GLULib")) {
			if(args.length>++i) nativeGLULib=args[i];
		} else if(args[i].equals("-gljlib")) {
			if(args.length>++i) gljLibName=args[i];
		} else if(args[i].equals("-glclass")) {
			if(args.length>++i) glName=args[i];
		} else if(args[i].equals("-gluclass")) {
			if(args.length>++i) gluName=args[i];
		} else if(args[i].equals("-testclass")) {
			if(args.length>++i) testClazzName=args[i];
		} else if(args[i].equals("-w")) {
			if(args.length>++i) {
			   try {
				width = Integer.valueOf(args[i]).intValue();
			   } catch (Exception ex) {
			        System.out.println("invalid width, please insert an integer value !");
				ok=false;
			   }
			}
		} else if(args[i].equals("-h")) {
			if(args.length>++i) {
			   try {
				height = Integer.valueOf(args[i]).intValue();
			   } catch (Exception ex) {
			        System.out.println("invalid height, please insert an integer value !");
				ok=false;
			   }
			}
		} else if(args[i].equals("-perftest")) {
			perftest=true;
		} else {
		  System.out.println("illegal arg "+i+": "+args[i]);
		  ok=false;
		}
		i++;
	}

	if(!perftest)
	{
		GLContext.gljNativeDebug = true;
		GLContext.gljClassDebug = true;
	} else {
		GLContext.gljNativeDebug = false;
		GLContext.gljClassDebug = false;
	}

	if(GLContext.doLoadNativeLibraries(gljLibName, 
					 nativeGLLib, nativeGLULib
					)
	  )
		System.out.println("native Libraries loaded succesfull");
	else {
		System.out.println("native library NOT loaded complete");
		ok=false;
	}

	
	if(ok) {
	        // let's do it ...
    		Test test = new Test(testClazzName, width, height, 
				     glName, gluName);
    		test.loadNStartTestClazz();
	}
    }

	private class GLAnimCanvasTest extends SimpleGLAnimApplet1 
	{
	    public void init(GLAnimCanvas glAnimCanvas)
	    {
		super.init();
		Dimension d = getSize();
		canvas = glAnimCanvas;
		add("Center", canvas);
	    }
	}

	private class GLCanvasTest extends Applet 
	{
	        GLCanvas canvas = null;

		/* Initialize the applet */

	        public void init(GLCanvas glCanvas)
		{
			Dimension d = getSize();
			setLayout(new BorderLayout());
			canvas = glCanvas;
			add("Center", canvas);
		}

		/* Start the applet */

		public void start()
		{
		}

		/* Stop the applet */

	        public void stop()
	        {
	        }
	}
}
