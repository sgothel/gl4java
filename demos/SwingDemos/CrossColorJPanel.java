import java.awt.*;
import javax.swing.*;
import gl4java.*;
import gl4java.swing.*;

public class CrossColorJPanel extends GLJPanel 
{
	public CrossColorJPanel( )
	{
	    super();
	}


	public void init() {
	    reshape(getSize().width, getSize().height);
	}

	public void display() 
	{
	    System.out.println("i");
	    int i;

	    gl.glPushMatrix();
	    gl.glClear(GL_COLOR_BUFFER_BIT);

	    gl.glBegin(GLEnum.GL_LINES);
	        gl.glColor4f(0f, 0f, 1f, 1f);
                gl.glVertex3i( 0, 0, 0);
                gl.glVertex3i( 10, 10, 0);

	        gl.glColor4f(0f, 1f, 0f, 1f);
                gl.glVertex3i( 0, 10, 0);
		gl.glVertex3i( 10, 0, 0);

	        gl.glColor4f(1f, 0f, 0f, 1f);
                gl.glVertex3i( 0, 5, 0);
		gl.glVertex3i( 10, 5, 0);

	        gl.glColor4f(1f, 1f, 1f, 1f);
                gl.glVertex3i( 5, 0, 0);
		gl.glVertex3i( 5, 10, 0);
            gl.glEnd();

	    gl.glPopMatrix();
	}

        public void reshape( int width, int height )
        {
		gl.glViewport(0, 0, width, height);
		gl.glMatrixMode(GL_PROJECTION);
		gl.glLoadIdentity();
		gl.glOrtho(0, 10, 0, 10, -50.0,50.0);
		gl.glMatrixMode(GL_MODELVIEW);
        }    
}
