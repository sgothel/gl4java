package gl4java.drawable;

import java.awt.*;
import java.lang.reflect.*;
import java.util.*;
import sun.awt.*;
import gl4java.*;
import java.security.*;

public class Win32SunJDK13GLDrawableFactory 
	extends SunJDK13GLDrawableFactory 
{
    // Use reflection to get access to internal methods in sun.awt.*
    private static Method getMaxConfigsMethod;
    private static Method getDefaultPixIDMethod;

    static {
        try {
	   getMaxConfigsMethod = (Method)
	     AccessController.doPrivileged(new PrivilegedAction() {
	      public Object run() 
	      {
                try {
			return
			sun.awt.Win32GraphicsDevice.class.
			    getDeclaredMethod("getMaxConfigs",
					      new Class[] { Integer.TYPE });
		} catch (Exception e) {
		    e.printStackTrace();
		    throw new InternalError(e.toString());
		}
	      }});

            getMaxConfigsMethod.setAccessible(true);

            getDefaultPixIDMethod = (Method)
	     AccessController.doPrivileged(new PrivilegedAction() {
	      public Object run() 
	      {
                try {
			return
			sun.awt.Win32GraphicsDevice.class.
			    getDeclaredMethod("getDefaultPixID",
					      new Class[] { Integer.TYPE });
		} catch (Exception e) {
		    e.printStackTrace();
		    throw new InternalError(e.toString());
		}
	      }});
            getDefaultPixIDMethod.setAccessible(true);
        } catch (Exception e) {
            e.printStackTrace();
            throw new InternalError(e.toString());
        }
    }

    public Win32SunJDK13GLDrawableFactory() {
        // describeAllGraphicsConfigurations();
    }

    public GraphicsConfiguration
        getGraphicsConfiguration(GLCapabilities capabilities,
                                 GraphicsDevice device) {
        // On Windows, ChoosePixelFormat does not work as desired; it
        // shoehorns the given pixel format descriptor into what a
        // particular window can render. Instead we enumerate all possible
        // pixel formats for a given GraphicsDevice and try to find one
        // matching the given capabilities. To do this we provide
        // accessors which query the OpenGL-related properties of a
        // GraphicsConfiguration. FIXME: should implement better selection
        // algorithm; this one does not choose the most minimal.

        Win32GraphicsConfig[] configs =
            getAllGraphicsConfigurations((Win32GraphicsDevice) device);
    
        int maxDepth = 0;
	int maxColor = 0;
	int maxStencil = 0;
	int maxAccum = 0;

        for (int i = 0; i < configs.length; i++) {
	    Win32GraphicsConfig config = configs[i];

	    if( ! getConfigSupportsOpenGL(config) ) 
	    	continue;

	    if(getConfigDepthBits(config)>maxDepth) maxDepth=getConfigDepthBits(config);
	    if(getConfigColorBits(config)>maxColor) maxColor=getConfigColorBits(config); 
	    if(getConfigStencilBits(config)>maxStencil) maxStencil=getConfigStencilBits(config);
	    if(getConfigAccumBits(config)>maxAccum) maxAccum=getConfigAccumBits(config);
        }

	if(maxDepth>24) maxDepth=24;

	/** fall down to overall's maximum **/
	if(capabilities.getDepthBits()>maxDepth) capabilities.setDepthBits(maxDepth);
	if(capabilities.getStencilBits()>maxStencil) capabilities.setStencilBits(maxStencil);

	if(getCapsColorBits(capabilities)>maxColor)
	{ capabilities.setRedBits(maxColor/3); 
	  capabilities.setGreenBits(maxColor/3+maxColor%3); 
	  capabilities.setBlueBits(maxColor/3); 
	}
		
	if(getCapsAccumBits(capabilities)>maxAccum)
	{ capabilities.setAccumRedBits(maxAccum/3); 
	  capabilities.setAccumGreenBits(maxAccum/3+maxAccum%3); 
	  capabilities.setAccumBlueBits(maxAccum/3); 
	}
		
        Win32GraphicsConfig config = configsSupportsCapabilities(configs, capabilities, maxDepth);
	if(config!=null) return config;

	/* lets .. fall down .. individual .. */

	/* general normals .. */
	boolean tryit = false;
	if(capabilities.getDepthBits()>24) { capabilities.setDepthBits(24); tryit=true; }
	else if(capabilities.getDepthBits()>16) { capabilities.setDepthBits(16); tryit=true; }
	if(getCapsColorBits(capabilities)>24) 
	{ capabilities.setRedBits(8); capabilities.setGreenBits(8); capabilities.setBlueBits(8); tryit=true; }
	if(capabilities.getAlphaBits()>8) { capabilities.setAlphaBits(8); tryit=true; }
        if(tryit) config = configsSupportsCapabilities(configs, capabilities, maxDepth);
	if(config!=null) return config; tryit=false;

	/* no stereo .. */
	if(capabilities.getStereo()) { capabilities.setStereo(false); tryit=true; }
        if(tryit) config = configsSupportsCapabilities(configs, capabilities, maxDepth);
	if(config!=null) return config; tryit=false;

	/* stencil<=16 .. */
	if(capabilities.getStencilBits()>16) { capabilities.setStencilBits(16); tryit=true; }
        if(tryit) config = configsSupportsCapabilities(configs, capabilities, maxDepth);
	if(config!=null) return config; tryit=false;

	/* accum rgb each <=16.. */
	if(getCapsAccumBits(capabilities)>48) 
	{ capabilities.setAccumRedBits(16); capabilities.setAccumGreenBits(16); capabilities.setAccumBlueBits(16); 
	  tryit=true; }
        if(tryit) config = configsSupportsCapabilities(configs, capabilities, maxDepth);
	if(config!=null) return config; tryit=false;

	/* stencil<=8 .. */
	if(capabilities.getStencilBits()>8) { capabilities.setStencilBits(8); tryit=true; }
        if(tryit) config = configsSupportsCapabilities(configs, capabilities, maxDepth);
	if(config!=null) return config; tryit=false;

	/* accum rgb each <=8.. */
	if(getCapsAccumBits(capabilities)>24) 
	{ capabilities.setAccumRedBits(8); capabilities.setAccumGreenBits(8); capabilities.setAccumBlueBits(8); 
	  tryit=true; }
        if(tryit) config = configsSupportsCapabilities(configs, capabilities, maxDepth);
	if(config!=null) return config; tryit=false;

	/* stencil=0 .. */
	if(capabilities.getStencilBits()>0) { capabilities.setStencilBits(0); tryit=true; }
        if(tryit) config = configsSupportsCapabilities(configs, capabilities, maxDepth);
	if(config!=null) return config; tryit=false;

	/* alpha=0 */
	if(capabilities.getAlphaBits()>0) { capabilities.setAlphaBits(0); tryit=true; }
        if(tryit) config = configsSupportsCapabilities(configs, capabilities, maxDepth);
	if(config!=null) return config; tryit=false;
    
        return null;
    }

    //----------------------------------------------------------------------
    // Internals only below this point
    //

    private Win32GraphicsConfig configsSupportsCapabilities(Win32GraphicsConfig[] configs, 
    							    GLCapabilities glCaps,
							    int maxDepth)
    {
        if(GLContext.gljNativeDebug)
	{
	    System.out.println("---------------");
	    System.out.println("---------------");
	    System.out.println("---------------");
	    System.out.println("->check caps: "+glCaps);
	    System.out.println("---------------");
	}
        for (int i = 0; i < configs.length; i++) {
            if (configSupportsCapabilities(configs[i], glCaps, maxDepth)) {
		glCaps.setNativeVisualID( (long) configs[i].getVisual() );
                return configs[i];
            }
        }
	return null;
    }

    private Win32GraphicsConfig[]
        getAllGraphicsConfigurations(Win32GraphicsDevice device)
    {
        try {
            int max =
                ((Integer) getMaxConfigsMethod.invoke(device,
                                                      new Object[] {
                                                          new Integer(device.getScreen())
                                                              })).intValue();
            int defaultPixID =
                ((Integer) getDefaultPixIDMethod.invoke(device,
                                                        new Object[] {
                                                            new Integer(device.getScreen())
                                                                })).intValue();
            java.util.List l = new ArrayList(max);
            if (defaultPixID == 0) {
                // From Win32GraphicsDevice: workaround for failing GDI calls
                l.add(Win32GraphicsConfig.getConfig(device, defaultPixID));
            } else {
                for (int i = 1; i <= max; i++) {
                    l.add(Win32GraphicsConfig.getConfig(device, i));
                }
            }
            Win32GraphicsConfig[] configs = new Win32GraphicsConfig[l.size()];
            l.toArray(configs);
            return configs;
        } catch (Exception e) {
            e.printStackTrace();
            throw new InternalError(e.toString());
        }
    }

    private boolean configSupportsCapabilities(Win32GraphicsConfig config,
                                               GLCapabilities caps, int maxDepth)
    {
        boolean res = (   getConfigSupportsOpenGL(config)
                   && getConfigDoubleBuffered(config) == caps.getDoubleBuffered()
                   && caps.getTrueColor()      == getConfigTrueColor(config)
                   && caps.getDepthBits()      <= getConfigDepthBits(config) 
                   && maxDepth                 >= getConfigDepthBits(config) 
                   && caps.getStencilBits()    <= getConfigStencilBits(config)
		   && (caps.getStereo()        ?  getConfigStereo(config):true) 
                   && getCapsColorBits(caps)   <= getConfigColorBits(config)
                   /* && caps.getAlphaBits()      <= getConfigAlphaBits(config) N.A. */
                   && getCapsAccumBits(caps)   <= getConfigAccumBits(config));

        if(GLContext.gljNativeDebug)
	{
	    System.out.println("->against config: ");
	    describeGraphicsConfiguration(config);
	    System.out.println("---------------");
	    System.out.println("result: "+res);
	    System.out.println("---------------");
        }
	return res;
    }

    private static int getCapsColorBits(GLCapabilities caps) {
        return caps.getRedBits() + caps.getGreenBits() + caps.getBlueBits();
    }

    private static int getCapsAccumBits(GLCapabilities caps) {
        return caps.getAccumRedBits() + caps.getAccumGreenBits() + caps.getAccumBlueBits();
    }

    private static boolean getConfigSupportsOpenGL(Win32GraphicsConfig config) {
        return getVisualSupportsOpenGL(getScreen(config), config.getVisual());
    }

    private static boolean getConfigDoubleBuffered(Win32GraphicsConfig config) {
        return getVisualDoubleBuffered(getScreen(config), config.getVisual());
    }

    private static boolean getConfigTrueColor(Win32GraphicsConfig config) {
        return getVisualTrueColor(getScreen(config), config.getVisual());
    }

    private static boolean getConfigStereo(Win32GraphicsConfig config) {
        return getVisualStereo(getScreen(config), config.getVisual());
    }

    private static int getConfigDepthBits(Win32GraphicsConfig config) {
        return getVisualDepthBits(getScreen(config), config.getVisual());
    }

    private static int getConfigStencilBits(Win32GraphicsConfig config) {
        return getVisualStencilBits(getScreen(config), config.getVisual());
    }

    private static int getConfigColorShiftBits(Win32GraphicsConfig config) {
        return getVisualColorShiftBits(getScreen(config), config.getVisual());
    }

    private static int getConfigColorBits(Win32GraphicsConfig config) {
        return getVisualColorBits(getScreen(config), config.getVisual());
    }

    private static int getConfigAlphaBits(Win32GraphicsConfig config) {
        return getVisualAlphaBits(getScreen(config), config.getVisual());
    }

    private static int getConfigAccumBits(Win32GraphicsConfig config) {
        return getVisualAccumBits(getScreen(config), config.getVisual());
    }

    private static int getScreen(Win32GraphicsConfig config) {
        return ((Win32GraphicsDevice) config.getDevice()).getScreen();
    }

    // Native support routines that are not in GraphicsConfiguration or
    // Win32GraphicsConfig. These are only necessary on Windows because
    // X11's glXChooseVisual can implement getGraphicsConfiguration
    // directly.
    private static native boolean getVisualSupportsOpenGL (int screen, int pixelFormatIdx);
    private static native boolean getVisualDoubleBuffered (int screen, int pixelFormatIdx);
    private static native boolean getVisualTrueColor      (int screen, int pixelFormatIdx);
    private static native boolean getVisualStereo         (int screen, int pixelFormatIdx);
    private static native int     getVisualDepthBits      (int screen, int pixelFormatIdx);
    private static native int     getVisualStencilBits    (int screen, int pixelFormatIdx);
    private static native int     getVisualColorShiftBits (int screen, int pixelFormatIdx);
    private static native int     getVisualColorBits      (int screen, int pixelFormatIdx);
    private static native int     getVisualAlphaBits      (int screen, int pixelFormatIdx);
    private static native int     getVisualAccumBits      (int screen, int pixelFormatIdx);

  // Debugging only
    private void describeAllGraphicsConfigurations() {
        Win32GraphicsConfig[] configs =
            getAllGraphicsConfigurations(
                (Win32GraphicsDevice)
                GraphicsEnvironment.getLocalGraphicsEnvironment().
                    getDefaultScreenDevice()
            );
        System.err.println(configs.length + " graphics configurations found");
        for (int i = 0; i < configs.length; i++) {
            System.err.println(i + ".");
            Win32GraphicsConfig config = configs[i];
	    describeGraphicsConfiguration(config);
            System.err.println();
        }
    }

    private void describeGraphicsConfiguration(Win32GraphicsConfig config) 
    {
            boolean supportsOpenGL = getConfigSupportsOpenGL(config);
            System.err.println(" SupportsOpenGL: " + supportsOpenGL);
            if (supportsOpenGL) {
                System.err.print(" DoubleBuffered: " + getConfigDoubleBuffered(config));
                System.err.print(" TrueColor: "      + getConfigTrueColor(config));
                System.err.println(" Stereo: "         + getConfigStereo(config));
                System.err.print(" DepthBits: "      + getConfigDepthBits(config));
                System.err.println(" StencilBits: "    + getConfigStencilBits(config));
                System.err.print(" ColorBits: "      + getConfigColorBits(config));
                System.err.print(" AlphaBits: "      + getConfigAlphaBits(config));
                System.err.println(" AccumBits: "      + getConfigAccumBits(config));
            }
    }
}
