import gl4java.awt.*;
import java.awt.*;
import java.awt.Dimension;
import gl4java.GLContext;
import gl4java.GLFunc;

public class glStencilTest {

    protected class MyCanvas extends GLCanvas {

	public MyCanvas(int w, int h) {
	    super(w,h);
	    GLContext.gljNativeDebug = false;
	    GLContext.gljClassDebug  = false;
	}

	public void preInit() {
		stencilBits = 8;
	}

	public void init() {
	    gl.glMatrixMode(GL_PROJECTION);
	    gl.glOrtho(-1,1,-1,1,-50.0,50.0);
	    gl.glMatrixMode(GL_MODELVIEW);
	    glj.gljCheckGL();
	}

	public void reshape(int w, int h) {
	    Dimension d=new Dimension(w,h);
	    if (!cvsIsInit()) return;
	    if( glj.gljMakeCurrent() == false ) {
		System.out.println("problem in use() method");
		return;
	    }
	    setSize(d);
	    gl.glViewport(0,0,w,h);
	    glj.gljCheckGL();
	    glj.gljFree();
	}

	public void display() {
	    int i;

	    if( glj.gljMakeCurrent() == false ) {
		System.out.println("problem in use() method");
		return;
	    }
	  
	    gl.glPushMatrix();
	    gl.glClear(GL_COLOR_BUFFER_BIT);
	    glu.gluLookAt(0, 0, 20, 0, 0, 0, 0, 1, 0);
	
	    gl.glBegin(GL_POLYGON);
	    gl.glVertex2d(0,-0.5);
	    gl.glVertex2d(0.5,0.5);
	    gl.glVertex2d(-0.5,0.5);
	    gl.glEnd();


	    // Examine some OpenGL properties
	    int [] res=new int[6];

	    gl.glGetIntegerv(GL_STENCIL_BITS,res);
	    System.out.println("Stencil bits are "+res[0]);

	    gl.glGetIntegerv(GL_RED_BITS,res);
	    System.out.println("Color bits are "+res[0]);
	    
	    gl.glPopMatrix();
	    glj.gljSwap();
	    glj.gljCheckGL();
	    glj.gljFree();
	}
    }

    protected MyCanvas cvs;    
    protected Frame frame;

    public glStencilTest() {
	frame = new Frame( "OpenGL" );
	cvs= new MyCanvas(640,480);
	frame.setSize(640,480);	
	frame.add("Center", cvs);	
	frame.setVisible(true);	
    }

    public static void main(java.lang.String[] args) {
	try {
	    glStencilTest g=new glStencilTest();
	} catch (Throwable exception) {
	    System.err.println("Exception occurred in main()");
	    exception.printStackTrace(System.out);
	}
    }
}
