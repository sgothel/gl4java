/**
 * @(#) demoCvsAnim.java
 */

import gl4java.GLContext;
import gl4java.awt.GLAnimCanvas;
import java.awt.*;
import java.awt.event.*;
import java.lang.Math;


class demoCvsAnim extends GLAnimCanvas
{
/**
 * Instead of using suspend (JAVA2)
 *
 * @see run
 */      
	protected boolean threadSuspended = true;

	public demoCvsAnim (int w, int h, 
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

}

