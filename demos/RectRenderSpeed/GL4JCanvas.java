
import java.io.*;

import gl4java.GLContext;
import gl4java.awt.GLCanvas;

//----------------------------------------------
// class definition.
//----------------------------------------------
public class GL4JCanvas extends gl4java.awt.GLCanvas
{
  private int _canvas_wid_pix;
  private int _canvas_hei_pix;
  private int _num_colors = 50;
  private boolean refresh_gl = false;

//----------------------------------------------
// method constructor.
//----------------------------------------------
public GL4JCanvas (int wid_pix, int hei_pix)
{
  super (wid_pix, hei_pix);

  _canvas_wid_pix = wid_pix;
  _canvas_hei_pix = hei_pix;

}
//----------------------------------------------
// method preInit
//----------------------------------------------
public void preInit ()
{
    stereoView = false; 
}

public void preSetDblBuffer(boolean dblBuffer)
{
    doubleBuffer =  dblBuffer;
}

//----------------------------------------------
// method init
//----------------------------------------------
public void init ()
{
}
//----------------------------------------------
// method display
//----------------------------------------------
public void display ()
{
  boolean loc_err;

  loc_err = false;

  if(scripting_modes_number>0)
  {
  	int i;
	for (i=0; i<scripting_modes_number; i++)
	{
	  System.out.println("trying mode: "+scripting_modes[i]);
	  if(setRenderMode(scripting_modes[i])==false)
	  {
		System.out.println("render mode: "+scripting_modes[i]+" not supported !");
		continue;
	  }
	  gl_display();
	}
	cvsDispose();
	System.exit(0);
  }

  if(refresh_gl)
  {
	  refresh_gl = false;
	  gl_display ();
  }
}

public void setRefreshGL(boolean b)
{
	refresh_gl = b;
}


public void printTimeDelta(long startTime, int count)
{
    long t1 = System.currentTimeMillis ();
    System.out.println ("... elapsed time: "
      +((double)(t1-startTime)/1000.0)+" Sec");
    if(count>0)
	    System.out.println ("... rate: "
	      +(((double)(t1-startTime))*(1000.0/(double)count))
	      +" SPMR (Sec Per Million Rectangles)");
}

public double getTimeDeltaSecs(long startTime)
{
    long t1 = System.currentTimeMillis ();
    return (double)(t1-startTime)/1000.0;
}

public static final String modes = new String (
    "  0 - Immediate + FLAT   + ColorIndex +           glRect\n"+
    "  1 - Immediate + FLAT   + ColorIndex +           glRectiv\n"+
    "  2 - Immediate + FLAT   + ColorIndex + POLYGON + glVertex2i(x2,y2);\n"+
    "  3 - Immediate + FLAT   + ColorIndex + QUADS   + glVertex2i(x2,y2);\n"+
    " 10 - Immediate + FLAT   + RGB        +           glRect\n"+
    " 11 - Immediate + FLAT   + RGB        +           glRectiv\n"+
    " 12 - Immediate + FLAT   + RGB        + POLYGON + glVertex2i(x2,y2);\n"+
    " 13 - Immediate + FLAT   + RGB        + QUADS   + glVertex2i(x2,y2);\n"+
    " 20 - Immediate + SMOOTH + ColorIndex +           glRect\n"+
    " 21 - Immediate + SMOOTH + ColorIndex +           glRectiv\n"+
    " 22 - Immediate + SMOOTH + ColorIndex + POLYGON + glVertex2i(x2,y2);\n"+
    " 23 - Immediate + SMOOTH + ColorIndex + QUADS   + glVertex2i(x2,y2);\n"+
    " 30 - Immediate + SMOOTH + RGB        +           glRect\n"+
    " 31 - Immediate + SMOOTH + RGB        +           glRectiv\n"+
    " 32 - Immediate + SMOOTH + RGB        + POLYGON + glVertex2i(x2,y2);\n"+
    " 33 - Immediate + SMOOTH + RGB        + QUADS   + glVertex2i(x2,y2);\n"+
    "100 - COMPILED  + FLAT   + ColorIndex +           glRect\n"+
    "101 - COMPILED  + FLAT   + ColorIndex +           glRectiv\n"+
    "102 - COMPILED  + FLAT   + ColorIndex + POLYGON + glVertex2i(x2,y2);\n"+
    "103 - COMPILED  + FLAT   + ColorIndex + QUADS   + glVertex2i(x2,y2);\n"+
    "110 - COMPILED  + FLAT   + RGB        +           glRect\n"+
    "111 - COMPILED  + FLAT   + RGB        +           glRectiv\n"+
    "112 - COMPILED  + FLAT   + RGB        + POLYGON + glVertex2i(x2,y2);\n"+
    "113 - COMPILED  + FLAT   + RGB        + QUADS   + glVertex2i(x2,y2);\n"+
    "120 - COMPILED  + SMOOTH + ColorIndex +           glRect\n"+
    "121 - COMPILED  + SMOOTH + ColorIndex +           glRectiv\n"+
    "122 - COMPILED  + SMOOTH + ColorIndex + POLYGON + glVertex2i(x2,y2);\n"+
    "123 - COMPILED  + SMOOTH + ColorIndex + QUADS   + glVertex2i(x2,y2);\n"+
    "130 - COMPILED  + SMOOTH + RGB        +           glRect\n"+
    "131 - COMPILED  + SMOOTH + RGB        +           glRectiv\n"+
    "132 - COMPILED  + SMOOTH + RGB        + POLYGON + glVertex2i(x2,y2);\n"+
    "133 - COMPILED  + SMOOTH + RGB        + GL_QUADS+ glVertex2i(x2,y2);\n"+
    "\n" );

public boolean useDisplayList = false;
public boolean useSmoothShading = false;
public boolean useRGB = false;

public int[] scripting_modes = null;
public int scripting_modes_number = 0;

public void setScriptModes(int[] modes, int len)
{
	scripting_modes=modes;
	scripting_modes_number=len;
}

/** 
 * renderMode
 * 	0 - glRect
 * 	1 - glRectiv
 *      2 - POLYGON + glVertex2i
 *      3 - QUADS   + glVertex2i
 */
public int renderMode = 0;

public int dez_mode = 0;

public boolean setRenderMode(int mode)
{
	useDisplayList = false;
	useSmoothShading = false;
	useRGB = false;
	renderMode = 0;

	if(mode>133 || mode<0) 
		return false;

	dez_mode=mode;

	if(mode>=100)
	{
		useDisplayList=true;
		mode -= 100;
	}

	if(mode>=20)
	{
		useSmoothShading=true;
		mode -= 20;
	}
	if(mode>=10)
	{
		useRGB=true;
		mode -= 10;
	}

	if(renderMode>3)
		return false;

	renderMode=mode;

	return true;
}

public String getGlobalModeDescription()
{
	String str = dez_mode + ": ";

        if(doubleBuffer)
		str = str + "DoubleBuffer";
	else
		str = str + "FrontBuffer ";

	if(useDisplayList)
		str = str + " + COMPILED ";
	else
		str = str + " + IMMEDIATE";

	if(useSmoothShading)
		str = str + " + Smooth";
	else
		str = str + " + Flat  ";

	if(useRGB)
		str = str + " + RGB       ";
	else
		str = str + " + ColorIndex";

 	switch (renderMode)
	{
		case 0: str = str + " +           glRect"; break;
		case 1: str = str + " +           glRectiv"; break;
		case 2: str = str + " + POLYGON + glVertex2i"; break;
		case 3: str = str + " + QUADS   + glVertex2i"; break;
	}

	return str;
}

public void gl_display ()
{
  boolean debug;
  boolean loc_err;
  int [] ramp;
  float [][] seis_amps = null;
  MapAmpToIndex amp_mapper;
  long t0, t1;

  debug = false;

  System.out.println(">MODE "+getGlobalModeDescription());

  t0 = System.currentTimeMillis();
  t1 = System.currentTimeMillis();

  loc_err = false;

  ramp = MakeRampJ (_num_colors);
  if ( ! loc_err)
  {
    if (debug)
    {
      for (int loopi = 0; loopi < _num_colors; loopi++)
      {
        System.out.println ("GL4JCanvas`gl_display- ramp ["+loopi+"] " 
                           +ramp [loopi]);
      }
    }
  }

  // plz_note- prepare seismic data for drawing
  if ( ! loc_err)
  {
    // JAU: seis_amps = GetSeisData (1250, 800);
    // seis_amps = GetSeisData (600, 400);
    seis_amps = GetSeisData (1250, 800);
    if (seis_amps == null)
    {
      // look_here- error_handling
      loc_err = true;
      System.out.println 
        ("GL4JCanvas`gl_display- ERROR- call to "
        +" _seis_data.GetSeisData returned "+seis_amps);
    }
    else
    {
      if (debug) System.out.println 
        ("GL4JCanvas`gl_display- call to GetSeisData succeeded");
    }
    if (debug) 
    {
      for (int loopi = 0; loopi < seis_amps.length; loopi++)
      {
        for (int loopj = 0; loopj < seis_amps[0].length; loopj++)
        {
          if (loopi == 0 || loopi == seis_amps.length - 1)
          {
            if (loopj >= 80 && loopj < 120)
            {
              System.out.println 
                ("GL4JCanvas`gl_display- seis_amps ["+loopi
                +"]["+loopj+"] "+seis_amps [loopi][loopj]);
            }
          }
        }
      }
    }
  }

  System.out.println(">Time for fetching Seis-Data: "+
			getTimeDeltaSecs(t1));

  t1 = System.currentTimeMillis();

  // plz_note- setup mapper (maps from seismic amplitude to 
  // plz_note- color table index)
  amp_mapper = new MapAmpToIndex (ramp, seis_amps);

  System.out.println(">Time for map color-table: "+
			getTimeDeltaSecs(t1));

  t1 = System.currentTimeMillis();

  // plz_note-prepare openGL
  if ( ! loc_err)
  {
    if (glj.gljMakeCurrent () == false)
    {
      System.out.println ("GL4JCanvas`gl_display- gljMakeCurrent"
        +" is false");
      loc_err = true;
    }
  }

  if ( ! loc_err)
  {
    if (cvsIsInit () != true)
    {
      System.out.println ("GL4JCanvas`gl_display- cvsIsInit not true");
      loc_err = true;
    }
  }

  if ( ! loc_err)
  {
    if(!doubleBuffer) 
	    gl.glDrawBuffer (GL_FRONT);
  
    if(!useRGB)
	    gl.glClearIndex (0.0f); // 1.0 is black

    gl.glClear (GL_COLOR_BUFFER_BIT);
  
    // set current color index
    if(!useRGB)
	    gl.glIndexi (1);
  
    gl.glMatrixMode (GL_PROJECTION);
    gl.glLoadIdentity ();
  
    // left, right top, bottom clip planes.
    glu.gluOrtho2D (0.0f, (float) (this._canvas_wid_pix), 
                    0.0f, (float) (this._canvas_hei_pix));
    // look_here- see OpenGL Programming Guide, page 182
    //gl.glMatrixMode (GL_MODELVIEW);
    //gl.glLoadIdentity ();
 
    // plz_note- 
    int num_trc = seis_amps.length;
    int num_sam = seis_amps [0].length;
    if (debug)
    {
      System.out.println ("GL4JCanvas`gl_display- num_trc "+num_trc);
      System.out.println ("GL4JCanvas`gl_display- num_sam "+num_sam);
    }

    int rect_wid = (int) Math.ceil 
      ((double)((double) (this._canvas_wid_pix) / (double) (num_trc)));
    rect_wid++;
    int rect_hei = (int) Math.ceil 
      ((double)((double) (this._canvas_hei_pix)/ (double) (num_sam)));
    rect_hei++;
    if (debug)
    {
      System.out.println ("GL4JCanvas`gl_display- rect_wid "+rect_wid);
      System.out.println ("GL4JCanvas`gl_display- rect_hei "+rect_hei);
    }

    int x1, y1, x2, y2;
    int[] v1 = new int[3];
    int[] v2 = new int[3];
    int ramp_index;
    int color_index;

    double ratio;
    int count = 0;
    int rectList = -1;

    {
      // JAU
      if(useDisplayList)
      {
      	rectList = gl.glGenLists(1);
      	gl.glNewList(rectList, GL_COMPILE); 
      }

      if(useSmoothShading)
	      gl.glShadeModel(GL_SMOOTH);
      else
	      gl.glShadeModel(GL_FLAT);

      if(renderMode==3)
	      gl.glBegin(GL_QUADS);


      // plz_note- for each column or trace
      for (int loop_i = 0; loop_i < num_trc; loop_i++)
      {
        // plz_note- for each row or seismic amplitude
        for (int loop_j = 0; loop_j < num_sam; loop_j++)
        {
          // plz_note- compute vertices.
          ratio = (double)(loop_i) / (double)(num_trc);
          x1 = (int)(ratio * (double)(this._canvas_wid_pix));
          x2 = x1 + rect_wid;

          ratio = (double)(loop_j) / (double)(num_sam);
          y1 = this._canvas_hei_pix - 
                 (int)(ratio * (double)(this._canvas_hei_pix));
          y2 = y1 + rect_hei;
  
          // plz_note- set current color index
          ramp_index = amp_mapper.GetColorIndex 
            (seis_amps [loop_i][loop_j]);
          color_index = ramp [ramp_index];
          if (debug && ((loop_i == 0 || loop_i == num_trc - 1) 
                        && loop_j >= 80 && loop_j< 180))
          {
            System.out.print (" `gl_display-"
              +" trc "+loop_i+", sam "+loop_j
              +", amp "+seis_amps [loop_i][loop_j]);
            System.out.print (", ramp_index "+ramp_index);
            System.out.println (", color_index "+color_index);
          }

	  if(!useRGB)
		  gl.glIndexi (color_index);
    
          if(renderMode==0)
	  {
          	  gl.glRecti (x1, y1, x2, y2);
	  } else if(renderMode==1)
	  {
		  v1[0]=x1; v1[1]=y1; 
		  v2[0]=x2; v2[1]=y2; 
		  gl.glRectiv (v1, v2);
	  } else {
		  if(renderMode==2)
			  gl.glBegin(GL_POLYGON);
		  if(renderMode>=2)
		  {
			  gl.glVertex2i(x1,y1);
			  gl.glVertex2i(x2,y1);
			  gl.glVertex2i(x2,y2);
			  gl.glVertex2i(x1,y2);
		  }
		  if(renderMode==2)
			  gl.glEnd();
	  }

          count++;
        }
      }
      if(renderMode==3)
	      gl.glEnd( /* GL_QUADS */ );

      // JAU
      if(useDisplayList)
      {
	      gl.glEndList();
      }
      else if(doubleBuffer) 
	    glj.gljSwap ();
      
    }

    if(useDisplayList)
    {
	    System.out.println (">`gl_display(displayList)- rectangles put in displayList: " +count);
	    System.out.println (">relative time: (display-list only)");
	    printTimeDelta(t1, count);
	    System.out.println (">absolute time: (display-list and calculations)");
	    printTimeDelta(t0, count);
    } else {
	    System.out.println (">`gl_display(immediate)- rectangles rendered: " +count);
	    System.out.println (">relative time: (immediate only)");
	    printTimeDelta(t1, count);
	    System.out.println (">absolute time: (immediate and calculations)");
	    printTimeDelta(t0, count);
    }

    t1 = System.currentTimeMillis();

    if(useDisplayList)
    {
	    gl.glCallList(rectList);

      	    if(doubleBuffer) 
		    glj.gljSwap ();

	    printTimeDelta(t0, count);

	    System.out.println (">relative time: (display-list called)");
	    printTimeDelta(t1, count);
	    System.out.println (">absolute time: (display-list compiled+called+calculations)");
	    printTimeDelta(t0, count);

    	    gl.glDeleteLists(rectList, 1);
    }

    gl.glFlush ();
    gl.glFinish ();
  
    glj.gljFree ();
  }

}
//----------------------------------------------
// method reshape.
//----------------------------------------------
public void reshape (int wid, int hei)
{
}
//----------------------------------------------
// method
// what the color is does not matter now.
//----------------------------------------------
public int [] MakeRampJ (int num_colors)
{
  boolean debug = false;

  if (debug) System.out.println ("GL4JCanvas`MakeRampJ- begin");

  int [] rtn_array = new int [num_colors];

  for (int loopi = 0; loopi < num_colors; loopi++)
  {
    rtn_array [loopi] = loopi;
  }

  if (debug) System.out.println ("GL4JCanvas`MakeRampJ- end");
  return rtn_array;
}
//----------------------------------------------
// method
// what the data is does not matter now.
//----------------------------------------------
public float [][] GetSeisData (int wid, int hei)
{
  boolean debug;

  debug = false;
  if (debug) System.out.println ("GL4JCanvas`GetSeisData- begin");

  float [][] rtn_array = new float [wid][];

  for (int loopi = 0; loopi < wid; loopi++)
  {
    rtn_array [loopi] = new float [hei];
  }

  for (int loopi = 0; loopi < wid; loopi++)
    for (int loopj = 0; loopj < hei; loopj++)
      rtn_array [loopi][loopj] = (float) (Math.random ()) * 100.0f;

  if (debug) System.out.println ("GL4JCanvas`GetSeisData- end");
  return rtn_array;
}

//----------------------------------------------
// end of class GL4JCanvas
//----------------------------------------------
}

//----------------------------------------------
// begin class definition
//----------------------------------------------
class MapAmpToIndex extends Object
{

  private boolean InitDone = false;
  private int [] _color_ramp;
  private float _max_amp = (float) 0.0;
  private float _min_amp = (float) 0.0;

//----------------------------------------------
// method MapAmpToIndex
//----------------------------------------------
MapAmpToIndex (int [] ramp, float [][] data)
{
  boolean debug;

  debug = false;
  InitDone = true;

  if (debug) System.out.println ("MapAmpToIndex`MapAmpToIndex- begin");

  // plz_note- set the color index data store
  _color_ramp = new int [ramp.length];
  System.arraycopy (ramp, 0, _color_ramp, 0, ramp.length);
  if (debug) 
  {
    System.out.println ("MapAmpToIndex`MapAmpToIndex- _color_ramp:");
    for (int loopi = 0; loopi < _color_ramp.length; loopi++)
    {
      System.out.println ("MapAmpToIndex`MapAmpToIndex- _color_ramp ["
        +loopi+"] "+_color_ramp [loopi]);
    }
  }

  // plz_note- set the max, min amplitudes for scaling
  for (int loopi = 0; loopi < data.length; loopi++)
  {
    for (int loopj = 0; loopj < data [0].length; loopj++)
    {
      if (data [loopi][loopj] > _max_amp) 
        _max_amp = data [loopi][loopj];
      if (data [loopi][loopj] < _min_amp) 
        _min_amp = data [loopi][loopj];
    }
  }
  if (debug)
  {
    System.out.println ("MapAmpToIndex`MapAmpToIndex- _max_amp "
      +_max_amp);
    System.out.println ("MapAmpToIndex`MapAmpToIndex- _min_amp "
      +_min_amp);
  }

  if (debug) System.out.println ("MapAmpToIndex`MapAmpToIndex- end");
}

//----------------------------------------------
// method GetColorIndex 
//----------------------------------------------
int GetColorIndex (float this_amp)
{
  boolean debug;
  int index;
  int max_index;
  float amp_range;

  debug = false;
  if (debug) System.out.println ("MapAmpToIndex`GetColorIndex- begin");
  index = 0;

  //if ( ! init)
  {
    max_index = _color_ramp.length - 1;
    amp_range = _max_amp - _min_amp;
  }

  index = (int) 
    (((float)(max_index)) * 
      ((this_amp - _min_amp) / (_max_amp - _min_amp)));

  if (debug) System.out.println ("MapAmpToIndex`GetColorIndex- end");
  return index;
}

//----------------------------------------------
// end of class MapAmpToIndex
//----------------------------------------------

}


//----------------------------------------------
// end of file
//----------------------------------------------
