
import GL4JCanvas;

import java.awt.*;
import java.awt.event.*;

//----------------------------------------------
// class definition.
//----------------------------------------------
public class GL4JTests2 implements ActionListener
{
  private GL4JCanvas _glcanvas;
  TextField tf_renderMode;

//----------------------------------------------
// method constructor.
//----------------------------------------------
public GL4JTests2 (String [] args) 
{
  boolean debug = true;
  Frame outer_frame;
  Frame inner_frame;
  Panel inner_panel;
  Container outer_container;
  Container inner_container;
  Button button;
  int modes[]=new int[args.length];
  int mode_number=0;
  boolean dblBuffer=false;

  if(args.length>0)
  {
  	int i;
	for (i=0; i<args.length; i++)
	{
		if(args[i].equals("help"))
		{
			System.out.println(
				"Arguments:\n"+
				"\thelp - print this help\n"+
				"\tdbl  - use doublebuffer\n"+
				"\t<mode> - render mode, where mode is one of the following integer values :\n"+ GL4JCanvas.modes);
		} else if(args[i].equals("dbl"))
		{
			dblBuffer=true;
		} else {
		   try {
			modes[mode_number] = 
				Integer.valueOf(args[i]).intValue();
			mode_number++;
		   } catch (Exception ex) {
			System.out.println("wrong mode: "+args[i]);
			return;
		   }
		} 
	}
  } else {
	  System.out.println ("GL4JTests`constructor- begin\n modes:\n"+
			      _glcanvas.modes);
  }

  // build outer most frame and container.
  outer_frame = new Frame ("The GL4Java Canvas Window");

  // create a new canvas from GL4Java...
  // _glcanvas = new GL4JCanvas (1250, 800);
  // JAU: I have just a little screen at my place now :-) !
  _glcanvas = new GL4JCanvas (640, 480);
  outer_frame.add ("Center",_glcanvas);

  _glcanvas.preSetDblBuffer(dblBuffer);

  Panel renderPanel = new Panel();

  if(mode_number==0)
  {
  	  // interactive mode 
	  //
	  button = new Button ("Paint");
	  button.setActionCommand ("Button Pressed");
	  button.addActionListener (this);
	  renderPanel.add(button);
	  tf_renderMode = new TextField("0");
	  renderPanel.add(tf_renderMode);
	  outer_frame.add ("South", renderPanel);

  } 

  outer_frame.pack ();
  outer_frame.setVisible (true);

  if(mode_number>0)
  {
  	// scripting mode 
	//
  	_glcanvas.setScriptModes(modes, mode_number);
	_glcanvas.setRefreshGL(true);
  	_glcanvas.repaint();

  }

}


//----------------------------------------------
// method actionPerformed.
//----------------------------------------------
public void actionPerformed (ActionEvent event) 
{

  String action_command;
 
  /*
   * Let's do the repaint thread save ...
   */
   int mode=0;
   try {
   	mode = Integer.valueOf(tf_renderMode.getText()).intValue();
   } catch (Exception ex) {
   	System.out.println("wrong mode: "+tf_renderMode.getText());
	return;
   }
  if(_glcanvas.setRenderMode(mode)==false)
  {
   	System.out.println("render mode not supported !");
   	System.out.println("use one of the following:\n"+
				_glcanvas.modes);
	return;
  }
  _glcanvas.setRefreshGL(true);
  _glcanvas.repaint();

}
//----------------------------------------------
// method main.
//----------------------------------------------
public static void main (String[] args)
{
  boolean debug = true;

  GL4JTests2 gl4JTests1 = new GL4JTests2 (args);
  //GL4JTests2 gl4JTests2 = new GL4JTests2 (args);

}

//----------------------------------------------
// end of class GL4JTests.
//----------------------------------------------
}
