/**
 * @(#) molehill.java
 * @(#) author: unknown (converted to Java by Ron Cemer)
 */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;
import gl4java.GLContext;
import gl4java.awt.GLCanvas;

public class molehill extends Applet 
{
    molehillCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new molehillCanvas(d.width, d.height);
        add("Center", canvas);
	}


        /* Start the applet */


    public void start()
    {
    }


        /* Stop the applet */


    public void stop()
    {
    }


        /* Destroy the applet */


    public void destroy()
    {
        canvas.cvsDispose();
    }


	public static void main( String args[] ) 
	{
		Frame mainFrame = new Frame("molehill");

		molehill applet = new molehill();

		applet.setSize(400, 400);
		applet.init();
		applet.start();

		mainFrame.add(applet);

		mainFrame.pack();
		mainFrame.setVisible(true);
	}

        /* Local GLCanvas extension class */


    private class molehillCanvas extends GLCanvas
    {
        float mat_red_diffuse[] = { 0.7f, 0.0f, 0.1f, 1.0f };
        float mat_green_diffuse[] = { 0.0f, 0.7f, 0.1f, 1.0f };
        float mat_blue_diffuse[] = { 0.0f, 0.1f, 0.7f, 1.0f };
        float mat_yellow_diffuse[] = { 0.7f, 0.8f, 0.1f, 1.0f };
        float mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
        float mat_shininess[] = { 100.0f };
        float knots[] = { 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f };
        float pts1[] = new float[4*4*3];
        float pts2[] = new float[4*4*3];
        float pts3[] = new float[4*4*3];
        float pts4[] = new float[4*4*3];
        int nurb;
        int u, v;
        
        public molehillCanvas(int w, int h)
        {
            super(w, h);
            GLContext.gljNativeDebug = false;
            GLContext.gljClassDebug = false;
        }
    
        public void preInit()
        {
            doubleBuffer = true;
            stereoView = false;
        }
    
        public void init()
        {
            System.out.println("init(): " + this);
            reshape(getSize().width, getSize().height);

            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glEnable(GL_DEPTH_TEST);
            gl.glEnable(GL_AUTO_NORMAL);
            gl.glEnable(GL_NORMALIZE);
            nurb = glu.gluNewNurbsRenderer();
            glu.gluNurbsProperty(nurb, GLU_SAMPLING_TOLERANCE, 25.0f);
            glu.gluNurbsProperty(nurb, GLU_DISPLAY_MODE, GLU_FILL);

                /* Build control points for NURBS mole hills. */
            for(u=0; u<4; u++)
            {
                for(v=0; v<4; v++)
                {
                        /* Red. */
                    pts1[(u*12)+(v*3)+0] = 2.0f*((float)u);
                    pts1[(u*12)+(v*3)+1] = 2.0f*((float)v);
                    if((u==1 || u == 2) && (v == 1 || v == 2))
                        pts1[(u*12)+(v*3)+2] = 6.0f;    /* Stretch up middle. */
                    else
                        pts1[(u*12)+(v*3)+2] = 0.0f;

                        /* Green. */
                    pts2[(u*12)+(v*3)+0] = 2.0f*((float)u - 3.0f);
                    pts2[(u*12)+(v*3)+1] = 2.0f*((float)v - 3.0f);
                    if((u==1 || u == 2) && (v == 1 || v == 2))
                        if(u == 1 && v == 1) 
                            pts2[(u*12)+(v*3)+2] = 15.0f;   /* Pull hard on single middle square. */
                        else
                            pts2[(u*12)+(v*3)+2] = -2.0f;   /* Push down on other middle squares. */
                    else
                        pts2[(u*12)+(v*3)+2] = 0.0f;

                        /* Blue. */
                    pts3[(u*12)+(v*3)+0] = 2.0f*((float)u - 3.0f);
                    pts3[(u*12)+(v*3)+1] = 2.0f*((float)v);
                    if((u==1 || u == 2) && (v == 1 || v == 2))
                        if(u == 1 && v == 2)
                            pts3[(u*12)+(v*3)+2] = 11.0f;   /* Pull up on single middple square. */
                        else
                            pts3[(u*12)+(v*3)+2] = 2.0f;    /* Pull up slightly on other middle squares. */
                    else
                        pts3[(u*12)+(v*3)+2] = 0.0f;

                        /* Yellow. */
                    pts4[(u*12)+(v*3)+0] = 2.0f*((float)u);
                    pts4[(u*12)+(v*3)+1] = 2.0f*((float)v - 3.0f);
                    if((u==1 || u == 2 || u == 3) && (v == 1 || v == 2))
                        if(v == 1) 
                            pts4[(u*12)+(v*3)+2] = -2.0f;   /* Push down front middle and right squares. */
                        else
                            pts4[(u*12)+(v*3)+2] = 5.0f;    /* Pull up back middle and right squares. */
                    else
                        pts4[(u*12)+(v*3)+2] = 0.0f;
                }
            }

                /* Stretch up red's far right corner. */
            pts1[(3*12)+(3*3)+2] = 6;
                /* Pull down green's near left corner a little. */
            pts2[(0*12)+(0*3)+2] = -2;
                /* Turn up meeting of four corners. */
            pts1[(0*12)+(0*3)+2] = 1;
            pts2[(3*12)+(3*3)+2] = 1;
            pts3[(3*12)+(0*3)+2] = 1;
            pts4[(0*12)+(3*3)+2] = 1;

            gl.glMatrixMode(GL_PROJECTION);
            glu.gluPerspective(55.0f, 1.0f, 2.0f, 24.0f);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glTranslatef(0.0f, 0.0f, -15.0f);
            gl.glRotatef(330.0f, 1.0f, 0.0f, 0.0f);
            
            gl.glNewList(1, GL_COMPILE);

                /* Render red hill. */
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_red_diffuse);
            glu.gluBeginSurface(nurb);
            glu.gluNurbsSurface
                (nurb,
                 8,
                 knots,
                 8,
                 knots,
                 (4 * 3),
                 3,
                 pts1,
                 4,
                 4,
                 GL_MAP2_VERTEX_3);
            glu.gluEndSurface(nurb);
            
                /* Render green hill. */
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_green_diffuse);
            glu.gluBeginSurface(nurb);
            glu.gluNurbsSurface
                (nurb,
                 8,
                 knots,
                 8,
                 knots,
                 (4 * 3),
                 3,
                 pts2,
                 4,
                 4,
                 GL_MAP2_VERTEX_3);
            glu.gluEndSurface(nurb);
            
                /* Render blue hill. */
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_blue_diffuse);
            glu.gluBeginSurface(nurb);
            glu.gluNurbsSurface
                (nurb,
                 8,
                 knots,
                 8,
                 knots,
                 (4 * 3),
                 3,
                 pts3,
                 4,
                 4,
                 GL_MAP2_VERTEX_3);
            glu.gluEndSurface(nurb);
            
                /* Render yellow hill. */
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_yellow_diffuse);
            glu.gluBeginSurface(nurb);
            glu.gluNurbsSurface
                (nurb,
                 8,
                 knots,
                 8,
                 knots,
                 (4 * 3),
                 3,
                 pts4,
                 4,
                 4,
                 GL_MAP2_VERTEX_3);
            glu.gluEndSurface(nurb);

            gl.glEndList();

            glj.gljCheckGL();
        }
    
        public void cvsDispose()
        {
            System.out.println("destroy(): " + this);
            super.cvsDispose();
        }
    
        public void reshape(int width, int height)
        {
            gl.glViewport(0,0,width,height);
            gl.glMatrixMode(GL_PROJECTION);
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            gl.glCallList(1);
            gl.glFlush();

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
        }
    }
}
