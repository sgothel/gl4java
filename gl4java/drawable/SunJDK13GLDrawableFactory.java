package gl4java.drawable;

import java.awt.*;
import gl4java.*;
import gl4java.awt.*;

/** A GLDrawableFactory which works with Sun's JDK 1.3 or greater. */

public abstract class SunJDK13GLDrawableFactory extends GLDrawableFactory {

    public GLAnimCanvas createGLAnimCanvas(GLCapabilities capabilities,
                                   int width,
                                   int height,
                                   String glName,
                                   String gluName)
    {
        GLCapabilities own = null;
        try {
        	own = (GLCapabilities) capabilities.clone();
	} catch (Exception ex) { System.out.println(ex); own=capabilities; } 

        GraphicsConfiguration config = getGraphicsConfiguration(own);
        if (config == null) {
            return null;
        }
        return new GLAnimCanvas(config, own,
	                        width, height, glName, gluName);
    }

    public GLCanvas createGLCanvas(GLCapabilities capabilities,
                                   int width,
                                   int height,
                                   String glName,
                                   String gluName)
    {
        GLCapabilities own = null;
        try {
        	own = (GLCapabilities) capabilities.clone();
	} catch (Exception ex) { System.out.println(ex); own=capabilities; } 

        GraphicsConfiguration config = getGraphicsConfiguration(own);
        if (config == null) {
            return null;
        }
        return new GLCanvas(config, own,
	                    width, height, glName, gluName);
    }

  /** Returns the GraphicsConfiguration most closely matching the
      specified set of GLCapabilities, or null if there was no
      matching visual. 

      @param capabilities  the requested set of OpenGL capabilities of
                           the canvas
      @return a GraphicsConfiguration supporting the set of specified capabilities,
      or null if there was no matching visual
    */
  public GraphicsConfiguration getGraphicsConfiguration
  					(GLCapabilities capabilities)
  {
    return getGraphicsConfiguration(capabilities,
                                    GraphicsEnvironment.getLocalGraphicsEnvironment().getDefaultScreenDevice());
  }

    //----------------------------------------------------------------------
    // Internals only below this point
    //

    /** The choice of the GraphicsDevice is not yet exported to
        clients. */
    abstract GraphicsConfiguration
        getGraphicsConfiguration(GLCapabilities capabilities,
                                 GraphicsDevice device);
}
