/**
 * @(#) test1Cvs.java
 */

import gl4java.GLContext;
import gl4java.awt.GLCanvas;
import java.awt.*;
import java.awt.event.*;
import java.lang.Math;


class test1Cvs extends GLCanvas
{
/**
 * Instead of using suspend (JAVA2)
 *
 * @see run
 */      
	protected boolean threadSuspended = true;

	protected int[] textures = null;

	public test1Cvs (int w, int h, 
			 String glClass, String gluClass )
	{
		super(w, h, glClass, gluClass );
	}

        public void preInit() 
	{
	    doubleBuffer = true;
	    stereoView = true; 
	}

        public void init() 
	{
	  textures = new int[10]; 
	  gl.glGenTextures(10, textures); 
	  for (int i=0; i<10; i++) 
		System.out.println("Texture "+ i +" maps to GL tex "+ textures[i]); 
	}


	public void display()
	{
	  /* Standard GL4Java Init */
	  if( glj.gljMakeCurrent() == false ) 
	  {
		System.out.println("problem in use() method");
		return;
	  }

	  glj.gljSwap();
	  glj.gljCheckGL();
	  glj.gljFree();
	}

	public void ReInit()
	{
	}

	public static void main( String args[] ) {
		String gljLib=null;
		String glLib=null;
		String gluLib=null;
		String glClass=null;
		String gluClass=null;

	        if(args.length>0)
			gljLib = args[0];
	        if(args.length>1)
			glLib = args[1];
	        if(args.length>2)
			gluLib = args[2];

		if(GLContext.loadNativeLibraries(gljLib, glLib, gluLib)==false)
		  System.out.println("could not load native libs:"+
				     gljLib + ", " + glLib + ", " + gluLib);
		else
		  System.out.println("load native libs:"+
				     gljLib + ", " + glLib + ", " + gluLib);


		Frame mainFrame = new Frame("glDemosCvs");

	        if(args.length>3)
			glClass = args[3];
	        if(args.length>4)
			gluClass = args[4];

		test1Cvs cvs1 = new test1Cvs(100, 100, glClass, gluClass);

		mainFrame.add(cvs1);

		mainFrame.pack();
		mainFrame.setVisible(true);
	}

}

