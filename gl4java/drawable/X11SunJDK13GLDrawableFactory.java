package gl4java.drawable;

import java.awt.*;
import sun.awt.*;
import gl4java.*;

public class X11SunJDK13GLDrawableFactory 
	extends SunJDK13GLDrawableFactory 
{

    public X11SunJDK13GLDrawableFactory() { }

    GraphicsConfiguration
        getGraphicsConfiguration(GLCapabilities capabilities,
                                 GraphicsDevice device) 
    {
        // glXChooseVisual behaves as we want. We just need to fetch
        // the screen and visual ID and call into native code, passing
        // in all of the parameters from the GLCapabilities, 
        X11GraphicsDevice x11Dev = (X11GraphicsDevice) device;

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

	capabilities.setNativeVisualID( (long)visualID );

        // Check for invalid return value (what will it be?)
        // if (visualID invalid) return null;
        return X11GraphicsConfig.getConfig(x11Dev, visualID);
    }

  // Needs to return an XVisualID which can be wrapped in an
  // X11GraphicsConfig object
  static native long glXChooseVisualID (int screen, long display,
                                        GLCapabilities capabilities, 
					boolean verbose);
}
