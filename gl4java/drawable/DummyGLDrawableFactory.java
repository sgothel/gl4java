package gl4java.drawable;

import gl4java.*;
import gl4java.awt.*;

public class DummyGLDrawableFactory extends GLDrawableFactory {

    DummyGLDrawableFactory() {
    }

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

        return new GLAnimCanvas(own, width, height, glName, gluName);
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

        return new GLCanvas(own, width, height, glName, gluName);
    }

}
