package gl4java.drawable;

import sun.awt.*;
import gl4java.*;

public class MacSunJDK13GLDrawableFactory 
	extends SunJDK13GLDrawableFactory 
{

    public MacSunJDK13GLDrawableFactory() { }

    public GraphicsConfiguration
        getGraphicsConfiguration(GLCapabilities capabilities,
                                 GraphicsDevice device) 
    {
        return null;
    }

  // Needs to return an XVisualID which can be wrapped in an
  // X11GraphicsConfig object
  //public static native long glXChooseVisual(int screen,
  //                                         GLCapabilities capabilities);
}
