package gl4java;

/** Specifies a set of OpenGL capabilities that a rendering context
    must support, such as color depth and whether stereo is
    enabled. It currently contains the minimal number of routines
    which allow configuration on all supported window systems. */

public class GLCapabilities 
	implements Cloneable
{

  private static final int BUFFER_SINGLE = 0;
  private static final int BUFFER_DOUBLE = 1;

  private static final int COLOR_INDEX = 0;
  private static final int COLOR_RGBA  = 1;

  private static final int STEREO_OFF = 0;
  private static final int STEREO_ON  = 1;

  // Boolean attributes
  // NOTE that we do not specify on- or off-screen visuals here --
  // that will be taken care of by the factory.

  /* x11: exact value 
     w32: exact value
   */
  private int buffer 		= BUFFER_DOUBLE;

  /* x11: exact value 
     w32: exact value
   */
  private int color  		= COLOR_RGBA;

  /* x11: exact value 
     w32: exact value
   */
  private int stereo		= STEREO_OFF;

  /* x11: getting the largest regardless the value if >0, set to max
     w32: getting the best from it's max
   */
  private int depthBits		= 24;

  /* x11: getting the best from it's max
     w32: getting the best from it's max
   */
  private int stencilBits	= 0;

  /* x11: getting the largest regardless the value if >0, set to max

     w32: getting the best from it's max
          cColorBits := redBits + greenBits + blueBits
   */
  private int redBits		= 8;
  private int greenBits		= 8;
  private int blueBits		= 8;
  private int alphaBits		= 0;

  /* x11: getting the largest regardless the value if >0, set to max

     w32: getting the best from it's max
          cAccumBits := accumRedBits + accumGreenBits + accumBlueBits +
	                accumAlphaBits
   */
  private int accumRedBits	= 0;
  private int accumGreenBits	= 0;
  private int accumBlueBits	= 0;
  private int accumAlphaBits	= 0;

  /**
   * this is the holder for the native visualID,
   * e.g. Win32's number of the PIXELFORMATDESC,
   *      or X11's VisualID
   */
  private long nativeVisualID   = -1;

  // Shift bits from PIXELFORMATDESCRIPTOR not present because they
  // are unlikely to be supported on Windows anyway

  /** Creates a GLCapabilities object. All attributes are in
      a default state, they can be configured by the client.
      The arguments are the usual user defined capabilities,
      which can be set here for construction.
    */
  public GLCapabilities(boolean doubleBuffer, boolean stereoView, 
                        boolean rgba, 
			int stencilBits, 
			int accumRedSize, int accumGreenSize, 
			int accumBlueSize, int accumAlphaSize)
  {
	setDoubleBuffered(doubleBuffer);
	setStereo(stereoView);
	setTrueColor(rgba);
	setStencilBits(stencilBits);
	setAccumRedBits(accumRedSize);
	setAccumGreenBits(accumGreenSize);
	setAccumBlueBits(accumBlueSize);
	setAccumAlphaBits(accumAlphaSize);
  }

  /** Creates a GLCapabilities object. All attributes are in
      a default state, they can be configured by the client.
    */
  public GLCapabilities() {}

  public Object clone()
	        throws CloneNotSupportedException
  {
	GLCapabilities nobj = new GLCapabilities();
	nobj.buffer=buffer;
	nobj.color=color;
	nobj.stereo=stereo;
	nobj.depthBits=depthBits;
	nobj.stencilBits=stencilBits;
	nobj.redBits=redBits;
	nobj.greenBits=greenBits;
	nobj.blueBits=blueBits;
	nobj.alphaBits=alphaBits;
	nobj.accumRedBits=accumRedBits;
	nobj.accumGreenBits=accumGreenBits;
	nobj.accumBlueBits=accumBlueBits;
	nobj.accumAlphaBits=accumAlphaBits;
        nobj.nativeVisualID=nativeVisualID;
	return nobj;
  }

  /** Indicates whether double-buffering is enabled. */
  public boolean getDoubleBuffered() { return buffer == BUFFER_DOUBLE; }

  /** Indicates whether true color (as opposed to indexed color) is
      enabled. */
  public boolean getTrueColor()      { return color == COLOR_RGBA;    }
  
  /** Indicates whether stereo is enabled. */
  public boolean getStereo()         { return stereo == STEREO_ON;     }
  
  /** Enables or disables double buffering. */
  public void setDoubleBuffered(boolean onOrOff) {
    buffer = (onOrOff ? BUFFER_DOUBLE : BUFFER_SINGLE);
  }

  /** Enables or disables true color (RGBA mode). */
  public void setTrueColor(boolean onOrOff) {
    color = (onOrOff ? COLOR_RGBA : COLOR_INDEX);
  }
  
  /** Enables or disables stereo viewing. */
  public void setStereo(boolean onOrOff) {
    stereo = (onOrOff ? STEREO_ON : STEREO_OFF);
  }

  /** Returns number of bits requested for depth buffer */
  public int getDepthBits()                         { return depthBits; }

  /** Sets number of bits requested for depth buffer */
  public void setDepthBits(int depthBits)           { this.depthBits = depthBits; }
  
  /** Returns number of bits requested for stencil buffer */
  public int getStencilBits()                       { return stencilBits; }

  /** Sets number of bits requested for stencil buffer */
  public void setStencilBits(int stencilBits)       { this.stencilBits = stencilBits; }
  
  /** Returns number of bits requested for color buffer's red
      component. On some systems and in color index mode only the
      color depth, which is the sum of the red, green, and blue bits,
      is considered. */
  public int getRedBits()                           { return redBits; }

  /** Sets number of bits requested for color buffer's red
      component. On some systems and in color index mode only the
      color depth, which is the sum of the red, green, and blue bits,
      is considered. */
  public void setRedBits(int redBits)               { this.redBits = redBits; }

  /** Returns number of bits requested for color buffer's green
      component. On some systems and in color index mode only the
      color depth, which is the sum of the red, green, and blue bits,
      is considered. */
  public int getGreenBits()                         { return greenBits; }

  /** Sets number of bits requested for color buffer's green
      component. On some systems and in color index mode only the
      color depth, which is the sum of the red, green, and blue bits,
      is considered. */
  public void setGreenBits(int greenBits)           { this.greenBits = greenBits; }

  /** Returns number of bits requested for color buffer's blue
      component. On some systems and in color index mode only the
      color depth, which is the sum of the red, green, and blue bits,
      is considered. */
  public int getBlueBits()                          { return blueBits; }

  /** Sets number of bits requested for color buffer's blue
      component. On some systems and in color index mode only the
      color depth, which is the sum of the red, green, and blue bits,
      is considered. */
  public void setBlueBits(int blueBits)             { this.blueBits = blueBits; }
  
  /** Returns number of bits requested for color buffer's alpha
      component. On some systems and in color index mode only the
      color depth, which is the sum of the red, green, and blue bits,
      is considered. */
  public int getAlphaBits()                         { return alphaBits; }

  /** Sets number of bits requested for color buffer's alpha
      component. On some systems and in color index mode only the
      color depth, which is the sum of the red, green, and blue bits,
      is considered. */
  public void setAlphaBits(int alphaBits)           { this.alphaBits = alphaBits; }
  
  /** Returns number of bits requested for accumulation buffer's red
      component. On some systems only the accumulation buffer depth,
      which is the sum of the red, green, and blue bits, is
      considered. */
  public int getAccumRedBits()                      { return accumRedBits; }

  /** Sets number of bits requested for accumulation buffer's red
      component. On some systems only the accumulation buffer depth,
      which is the sum of the red, green, and blue bits, is
      considered. */
  public void setAccumRedBits(int accumRedBits)     { this.accumRedBits = accumRedBits; }

  /** Returns number of bits requested for accumulation buffer's green
      component. On some systems only the accumulation buffer depth,
      which is the sum of the red, green, and blue bits, is
      considered. */
  public int getAccumGreenBits()                    { return accumGreenBits; }

  /** Sets number of bits requested for accumulation buffer's green
      component. On some systems only the accumulation buffer depth,
      which is the sum of the red, green, and blue bits, is
      considered. */
  public void setAccumGreenBits(int accumGreenBits) { this.accumGreenBits = accumGreenBits; }

  /** Returns number of bits requested for accumulation buffer's blue
      component. On some systems only the accumulation buffer depth,
      which is the sum of the red, green, and blue bits, is
      considered. */
  public int getAccumBlueBits()                     { return accumBlueBits; }

  /** Sets number of bits requested for accumulation buffer's blue
      component. On some systems only the accumulation buffer depth,
      which is the sum of the red, green, and blue bits, is
      considered. */
  public void setAccumBlueBits(int accumBlueBits)   { this.accumBlueBits = accumBlueBits; }

  /** Returns number of bits requested for accumulation buffer's alpha
      component. On some systems only the accumulation buffer depth,
      which is the sum of the red, green, and blue bits, is
      considered. */
  public int getAccumAlphaBits()                    { return accumAlphaBits; }

  /** Sets number of bits requested for accumulation buffer's alpha
      component. On some systems only the accumulation buffer depth,
      which is the sum of the red, green, and blue bits, is
      considered. */
  public void setAccumAlphaBits(int accumAlphaBits) { this.accumAlphaBits = accumAlphaBits; }

  /**
   * Set the fetched native VisualID.
   * This is an interface for the Factory and GLContext.
   *
   * Because the GLCapabilities are copied through 
   * the handling between the Factory and GLContext,
   * you cannot missuse it ..
   *
   * this is the holder for the native visualID,
   * e.g. Win32's number of the PIXELFORMATDESC,
   *      or X11's VisualID
   */
  public void setNativeVisualID(long id)
  { nativeVisualID = id; }

  /**
   * Get the fetched native VisualID.
   * This is an interface for the Factory and GLContext.
   *
   * this is the holder for the native visualID,
   * e.g. Win32's number of the PIXELFORMATDESC,
   *      or X11's VisualID
   */
  public long getNativeVisualID()
  { return nativeVisualID ; }

  public String toString()
  {
  	return "GLCapabilities ["+
	    "DoubleBuffer: "+buffer+", "+
	    "RGBA: "+ color+", "+
	    "Stereo: "+ stereo+",\n\t"+
	    "DepthSize: "+ depthBits+", "+
	    "StencilSize: "+ stencilBits+",\n\t"+
	    "Red: "+ redBits+", "+
	    "Green: "+ greenBits+", "+
	    "Blue: "+ blueBits+", "+
	    "Alpha: "+ alphaBits+",\n\t"+
	    "Red Accum: "+ accumRedBits+", "+
	    "Green Accum: "+ accumGreenBits+", "+
	    "Blue Accum: "+ accumBlueBits+", "+
	    "Alpha Accum: "+ accumAlphaBits+",\n\t"+
	    "NativeVisualID: "+nativeVisualID+
	    "] ";
  }

  public static void main( String args[] ) 
  {
  	GLCapabilities glCaps = new GLCapabilities();
	System.out.println("Default GLCapabilities:\n"+glCaps);
  }
}
