package gl4java.drawable;

import java.awt.*;
import gl4java.*;
import gl4java.awt.*;
import gl4java.swing.*;

/** <P> Provides a VM- and OS-independent mechanism for creating
    {@link gl4java.awt.GLAnimCanvas},
    {@link gl4java.awt.GLCanvas},
    {@link gl4java.swing.GLAnimJPanel}
    and {@link gl4java.swing.GLJPanel}
    objects. Most useful when used in conjunction with the {@link
    gl4java.drawable.GLEventListener} model, where subclassing is not
    required. </P>

    <P> The {@link gl4java.GLCapabilities} objects passed in to the
    various factory methods are used as a minimum specification for
    the properties of the returned GLCanvas. The canvas will either
    meet or exceed all of the integer properties such as color and
    accumulation buffer depth and will match all of the boolean
    properties such as enabling or disabling of stereo. The selection
    algorithm in general attempts to select the most minimal window
    type to meet the criteria, but is otherwise left loosely
    specified. 
    </P>

    <P> The implementing class of this abstract factory methods
    does clone your given GLCapabilities. So your version is unchanged.
    The GLContext's GLCapabilites instance is changed to
    the used capabilities, so you can query GLContext's GLCapabilites!
    </P>

    <P> It is currently not possible to specify GLCapabilities for
    lightweight components. </P>
*/

public abstract class GLDrawableFactory {

  static {
        GLContext.loadNativeLibraries(null, null, null);
  }

  private static GLDrawableFactory soleInstance;

  /** Returns the sole instance of the GLCanvasFactory (singleton
      pattern). */
  public static GLDrawableFactory getFactory() {

    GLContext.loadNativeLibraries(null, null, null);

    String jvmVendor = GLContext.getJVMVendor();
    boolean isIBMJvm = jvmVendor!=null && jvmVendor.indexOf("IBM")>=0 ;
    boolean isMicrosoftJvm = 
    		       jvmVendor!=null && jvmVendor.indexOf("Microsoft")>=0 ;

    if (soleInstance == null) {
	if( GLContext.getJVMVersionMajor()>=2 ||
	    ( GLContext.getJVMVersionMajor()==1 && 
	      GLContext.getJVMVersionMinor()>=4 
            ) ||
	    ( GLContext.getJVMVersionMajor()==1 && 
	      GLContext.getJVMVersionMinor()>=3 &&
	      !isIBMJvm && !isMicrosoftJvm 
	    ) 
          )
	{
	   String clazzName = null;

    	   switch(GLContext.getNativeOSType())
	   {
	     case GLContext.OsWindoof:
	         clazzName = 
		     "gl4java.drawable.Win32SunJDK13GLDrawableFactory";
		 break;
	     case GLContext.OsMac:
	         clazzName = 
		   "gl4java.drawable.MacSunJDK13GLDrawableFactory";
		 break;
	     case GLContext.OsX11:
	         clazzName = 
		   "gl4java.drawable.X11SunJDK13GLDrawableFactory";
		 break;
	     default:
	         System.out.println("GLDrawableFactory: Unsupported OS: "+
		 	GLContext.getNativeOSName() + ", using DummyGLDrawableFactory");
	   }

	   if(clazzName!=null)
	   {
		try {
			soleInstance = (GLDrawableFactory) 
				Class.forName(clazzName).newInstance();
		} catch (Exception ex) {
			System.out.println("GLDrawableFactory: could not create instance of: "+ clazzName + ", using DummyGLDrawableFactory");
		}
	   }
        } 

	if( soleInstance == null )
	{
	      soleInstance = new DummyGLDrawableFactory();
	}
    }
    return soleInstance;
  }

  /** Create a new GLAnimCanvas given the specified GLCapabilities.

      @param capabilities  the requested set of OpenGL capabilities of
                           the canvas
      @param width         the canvas's initial width
      @param height        the canvas's initial height

      @return a GLAnimCanvas supporting the set of specified capabilities,
      or null if there was no matching visual */
  public GLAnimCanvas createGLAnimCanvas(GLCapabilities capabilities,
                                          int width,
                                          int height)
  {
        return createGLAnimCanvas(capabilities, width, height, null, null);
  }

  /** Create a new GLAnimCanvas given the specified GLCapabilities.

      @param capabilities  the requested set of OpenGL capabilities of
                           the canvas
      @param width         the canvas's initial width
      @param height        the canvas's initial height
      @param glName        the name of the GLFunc implementation.
                           If null, the default class will be used
      @param gluName       the name of the GLUFunc implementation.
                           If null, the default class will be used

      @return a GLAnimCanvas supporting the set of specified capabilities,
      or null if there was no matching visual */
  public abstract GLAnimCanvas createGLAnimCanvas(GLCapabilities capabilities,
                                          int width,
                                          int height,
                                          String glName,
                                          String gluName);

  /** Create a new GLCanvas given the specified GLCapabilities.

      @param capabilities  the requested set of OpenGL capabilities of
                           the canvas
      @param width         the canvas's initial width
      @param height        the canvas's initial height

      @return a GLCanvas supporting the set of specified capabilities,
      or null if there was no matching visual */
  public GLCanvas createGLCanvas(GLCapabilities capabilities,
                                          int width,
                                          int height)
  {
        return createGLCanvas(capabilities, width, height, null, null);
  }

  /** Create a new GLCanvas given the specified GLCapabilities.

      @param capabilities  the requested set of OpenGL capabilities of
                           the canvas
      @param width         the canvas's initial width
      @param height        the canvas's initial height
      @param glName        the name of the GLFunc implementation.
                           If null, the default class will be used
      @param gluName       the name of the GLUFunc implementation.
                           If null, the default class will be used

      @return a GLCanvas supporting the set of specified capabilities,
      or null if there was no matching visual */
  public abstract GLCanvas createGLCanvas(GLCapabilities capabilities,
                                          int width,
                                          int height,
                                          String glName,
                                          String gluName);

  /** Create a new GLAnimJPanel. */
  public GLAnimJPanel createGLAnimJPanel() {
    return new GLAnimJPanel();
  }

  /** Create a new GLAnimJPanel with the specified GL/GLU library names,
      LayoutManager, and double buffering specification.

      @param glName            the name of the GLFunc implementation.
                               If null, the default class will be used
      @param gluName           the name of the GLUFunc implementation.
                               If null, the default class will be used
      @param layout            the layout manager
      @param isDoubleBuffered  indicates if double buffering should be used
  */
  public GLAnimJPanel createGLAnimJPanel(String glName, 
                                 String gluName,
                                 LayoutManager layout,
                                 boolean isDoubleBuffered) {
    return new GLAnimJPanel(glName, gluName, layout, isDoubleBuffered);
  }

  /** Create a new GLJPanel. */
  public GLJPanel createGLJPanel() {
    return new GLJPanel();
  }

  /** Create a new GLJPanel with the specified GL/GLU library names,
      LayoutManager, and double buffering specification.

      @param glName            the name of the GLFunc implementation.
                               If null, the default class will be used
      @param gluName           the name of the GLUFunc implementation.
                               If null, the default class will be used
      @param layout            the layout manager
      @param isDoubleBuffered  indicates if double buffering should be used
  */
  public GLJPanel createGLJPanel(String glName, 
                                 String gluName,
                                 LayoutManager layout,
                                 boolean isDoubleBuffered) {
    return new GLJPanel(glName, gluName, layout, isDoubleBuffered);
  }

}
