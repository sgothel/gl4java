/**
 * @(#) GljMSJDirect.java
 */


package gl4java.system;

/**
 * The base toolkit class for MS-JVM JDirect calls !
 *
 * The methods in this class are used by gl4java.GLContext !
 * Because this class MUST compiled with the MS-JVM Java Compiler
 * I have decided to put it out of gl4java.GLContext,
 * although this can be a security hole ...
 * But we must be able to use GL4Java without MS-JVM bytecode.
 *
 * The Tag @security(checkDllCalls=off) makes us able to
 * use these methods outside of these class,
 * without a security check all the time.
 * The security check is performed at link-time !
 * 
 * This is the same for gl4java.GLUFuncMSJDirect
 * and gl4java.GLFuncMSJDirect !
 *
 * @see gl4java.GLContext
 * @version 	1.00
 * @author      Ron Cemer, Sven Goethel
 * 
 */

/** @security(checkDllCalls=off) */
public class GljMSJDirect extends Object 
{

    /* JDirect DLL functions */

    public static final void OGLWindowMsgPump()
    { OGLWindowMsgPumpJDirect(); }


    /**
     * @dll.import("GL4JavaGljMSJDirect")
     */
    private static native void OGLWindowMsgPumpJDirect();

    public static final long createOGLWindowNative(long hwndParent, 
    					          int x, int y, 
						  int width, 
						  int height)
    { return createOGLWindowNativeJDirect(hwndParent, x,y, width, height); }

    /**
     * @dll.import("GL4JavaGljMSJDirect", auto)
     */
    private static native long createOGLWindowNativeJDirect(long hwndParent, 
    					                  int x, int y, 
							  int width, 
							  int height);

    public static final void destroyOGLWindowNative(long hdc)
    { destroyOGLWindowNativeJDirect(hdc); }

    /**
     * @dll.import("GL4JavaGljMSJDirect")
     */
    private static native void destroyOGLWindowNativeJDirect(long hdc);

    public static final void moveOGLWindowNative(long hdc, int x, int y, int width, int height)
    { moveOGLWindowNativeJDirect(hdc, x, y, width, height); }

    /**
     * @dll.import("GL4JavaGljMSJDirect")
     */
    private static native void moveOGLWindowNativeJDirect(long hdc, int x, int y, int width, int height);

}

