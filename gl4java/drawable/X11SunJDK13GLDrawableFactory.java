package gl4java.drawable;

import java.lang.reflect.*;
import java.security.*;
import java.awt.*;
import sun.awt.*;
import gl4java.*;

public class X11SunJDK13GLDrawableFactory 
	extends SunJDK13GLDrawableFactory 
{
    private static Method getConfigMethod;

    static {
        try {
	   getConfigMethod = (Method)
	     AccessController.doPrivileged(new PrivilegedAction() {
	      public Object run() 
	      {
                try {
			return
			sun.awt.X11GraphicsConfig.class.
			    getDeclaredMethod("getConfig",
					      new Class[] 
					      { sun.awt.X11GraphicsDevice.class,
					        Integer.TYPE });
		} catch (Exception e) {
		  if(GLContext.gljClassDebug)
		  {
		    System.out.println("GL4Java: MethodNotFound: sun.awt.X11GraphicsConfig::getConfig(Lsun/awt/X11GraphicsDevice;I) as seen in sun's std. jdk1.3 impl.");
		    System.out.println("GL4Java: trying sun.awt.X11GraphicsConfig::getConfig(Lsun/awt/X11GraphicsDevice;I;Z) as seen in sun's jdk1.4 beta impl.");
		  }
		}

                try {
			return
			sun.awt.X11GraphicsConfig.class.
			    getDeclaredMethod("getConfig",
					      new Class[] 
					      { sun.awt.X11GraphicsDevice.class,
					        Integer.TYPE,
						Boolean.TYPE });
		} catch (Exception e) {
		  if(GLContext.gljClassDebug)
		  {
		    System.out.println("GL4Java: MethodNotFound: sun.awt.X11GraphicsConfig::getConfig(Lsun/awt/X11GraphicsDevice;I;Z) as seen in sun's std. jdk1.4 beta impl.");
		  }
		  e.printStackTrace();
		  throw new InternalError(e.toString());
		}
	      }});

            getConfigMethod.setAccessible(true);
        } catch (Exception e) {
            e.printStackTrace();
            throw new InternalError(e.toString());
        }
    }

    public X11SunJDK13GLDrawableFactory() { }

    public GraphicsConfiguration
        getGraphicsConfiguration(GLCapabilities capabilities,
                                 GraphicsDevice device) 
    {
        // glXChooseVisual behaves as we want. We just need to fetch
        // the screen and visual ID and call into native code, passing
        // in all of the parameters from the GLCapabilities, 
        X11GraphicsDevice x11Dev = (X11GraphicsDevice) device;

	/**
	 * the X11GraphicsDevice::getDisplay() method is
	 * no more supported under jdk 1.4.
	 * also, the glXChooseVisualID native methods
	 * seeks the screen/display info direct by the XServer...

        // From the code, this is ":0.<screen>".
        // It looks like the X Display this is associated with is
        // acquired via XOpenDisplay(NULL). It doesn't look like it's
        // necessary to call X11GraphicsDevice.getDisplay(), though if
        // it is, that int return value can be cast to a Display*.
        int  screen  = x11Dev.getScreen();
        long display = x11Dev.getDisplay();
        int visualID = (int) glXChooseVisualID (screen, display, 
	                                        capabilities,
						GLContext.gljNativeDebug);
	*/
        int visualID = (int) glXChooseVisualID (capabilities,
						GLContext.gljNativeDebug);

	capabilities.setNativeVisualID( (long)visualID );

        // Check for invalid return value (what will it be?)
        // if (visualID invalid) return null;
	GraphicsConfiguration gcfg = null;

        try {
	    if(getConfigMethod.getParameterTypes().length==2)
		gcfg = (GraphicsConfiguration) 
		       getConfigMethod.invoke(null,
			      new Object[] { x11Dev, new Integer(visualID)});
	    else 
		gcfg = (GraphicsConfiguration) 
		       getConfigMethod.invoke(null,
			      new Object[] { x11Dev, new Integer(visualID),
				new Boolean(capabilities.getDoubleBuffered())});
        } catch (Exception e) {
            e.printStackTrace();
            throw new InternalError(e.toString());
        }

	return gcfg;
    }

  // Needs to return an XVisualID which can be wrapped in an
  // X11GraphicsConfig object
  static native long glXChooseVisualID (GLCapabilities capabilities, 
					boolean verbose);
}
