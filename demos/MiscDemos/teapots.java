/**
 * @(#) teapots.java
 * @(#) author: Silicon Graphics, Inc. (converted to Java by Ron Cemer)
 */

/*
 *  This program demonstrates lots of material properties.
 *  A single light source illuminates the objects.
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

import gl4java.utils.glut.*;

public class teapots extends Applet 
{
    teapotsCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new teapotsCanvas(d.width, d.height);
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

	public static void main( String args[] ) 
	{
		Frame mainFrame = new Frame("teapots");

		teapots applet = new teapots();

		applet.setSize(400, 400);
		applet.init();
		applet.start();

		mainFrame.add(applet);

		mainFrame.pack();
		mainFrame.setVisible(true);
	}


        /* Local GLCanvas extension class */


    private class teapotsCanvas extends GLCanvas
    {
        int teapotList;
	GLUTFunc glut = null;

        public teapotsCanvas(int w, int h)
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

	    glut = new GLUTFuncLightImpl(gl, glu);
	
            reshape(getSize().width, getSize().height);

            float ambient[] = {0.0f, 0.0f, 0.0f, 1.0f};
            float diffuse[] = {1.0f, 1.0f, 1.0f, 1.0f};
            float specular[] = {1.0f, 1.0f, 1.0f, 1.0f};
            float position[] = {0.0f, 3.0f, 3.0f, 0.0f};
            
            float lmodel_ambient[] = {0.2f, 0.2f, 0.2f, 1.0f};
            float local_view[] = {0.0f};
            
            gl.glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
            gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
            gl.glLightfv(GL_LIGHT0, GL_POSITION, position);
            gl.glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
            gl.glLightModelfv(GL_LIGHT_MODEL_LOCAL_VIEWER, local_view);
            
            gl.glFrontFace(GL_CW);
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glEnable(GL_AUTO_NORMAL);
            gl.glEnable(GL_NORMALIZE);
            gl.glEnable(GL_DEPTH_TEST); 
                /* be efficient--make teapot display list  */
            teapotList = gl.glGenLists(1);
            gl.glNewList(teapotList, GL_COMPILE);
            glut.glutSolidTeapot(1.0);
            gl.glEndList();

            glj.gljCheckGL();
        }
    
        public void reshape(int width, int height)
        {
            gl.glViewport(0,0,width,height);
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            if (width <= height)
                gl.glOrtho
                    (0.0f,
                     16.0f,
                     0.0f,
                     16.0f*(float)height/(float)width,
                     -10.0f,
                     10.0f);
            else
                gl.glOrtho
                    (0.0f,
                     16.0f*(float)width/(float)height,
                     0.0f,
                     16.0,
                     -10.0f,
                     10.0f);
            gl.glMatrixMode(GL_MODELVIEW);
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            /**
             *  First column:  emerald, jade, obsidian, pearl, ruby, turquoise
             *  2nd column:  brass, bronze, chrome, copper, gold, silver
             *  3rd column:  black, cyan, green, red, white, yellow plastic
             *  4th column:  black, cyan, green, red, white, yellow rubber
             */
            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            renderTeapot
                (2.0f, 17.0f, 0.0215f, 0.1745f, 0.0215f,
                 0.07568f, 0.61424f, 0.07568f, 0.633f, 0.727811f, 0.633f, 0.6f);
            renderTeapot
                (2.0f, 14.0f, 0.135f, 0.2225f, 0.1575f,
                 0.54f, 0.89f, 0.63f, 0.316228f, 0.316228f, 0.316228f, 0.1f);
            renderTeapot
                (2.0f, 11.0f, 0.05375f, 0.05f, 0.06625f,
                 0.18275f, 0.17f, 0.22525f, 0.332741f, 0.328634f, 0.346435f, 0.3f);
            renderTeapot
                (2.0f, 8.0f, 0.25f, 0.20725f, 0.20725f,
                 1f, 0.829f, 0.829f, 0.296648f, 0.296648f, 0.296648f, 0.088f);
            renderTeapot
                (2.0f, 5.0f, 0.1745f, 0.01175f, 0.01175f,
                 0.61424f, 0.04136f, 0.04136f, 0.727811f, 0.626959f, 0.626959f, 0.6f);
            renderTeapot
                (2.0f, 2.0f, 0.1f, 0.18725f, 0.1745f,
                 0.396f, 0.74151f, 0.69102f, 0.297254f, 0.30829f, 0.306678f, 0.1f);
            renderTeapot
                (6.0f, 17.0f, 0.329412f, 0.223529f, 0.027451f,
                 0.780392f, 0.568627f, 0.113725f, 0.992157f, 0.941176f, 0.807843f,
                 0.21794872f);
            renderTeapot
                (6.0f, 14.0f, 0.2125f, 0.1275f, 0.054f,
                 0.714f, 0.4284f, 0.18144f, 0.393548f, 0.271906f, 0.166721f, 0.2f);
            renderTeapot
                (6.0f, 11.0f, 0.25f, 0.25f, 0.25f,
                 0.4f, 0.4f, 0.4f, 0.774597f, 0.774597f, 0.774597f, 0.6f);
            renderTeapot
                (6.0f, 8.0f, 0.19125f, 0.0735f, 0.0225f,
                 0.7038f, 0.27048f, 0.0828f, 0.256777f, 0.137622f, 0.086014f, 0.1f);
            renderTeapot
                (6.0f, 5.0f, 0.24725f, 0.1995f, 0.0745f,
                 0.75164f, 0.60648f, 0.22648f, 0.628281f, 0.555802f, 0.366065f, 0.4f);
            renderTeapot
                (6.0f, 2.0f, 0.19225f, 0.19225f, 0.19225f,
                 0.50754f, 0.50754f, 0.50754f, 0.508273f, 0.508273f, 0.508273f, 0.4f);
            renderTeapot
                (10.0f, 17.0f, 0.0f, 0.0f, 0.0f, 0.01f, 0.01f, 0.01f,
                 0.50f, 0.50f, 0.50f, .25f);
            renderTeapot
                (10.0f, 14.0f, 0.0f, 0.1f, 0.06f, 0.0f, 0.50980392f, 0.50980392f,
                 0.50196078f, 0.50196078f, 0.50196078f, .25f);
            renderTeapot
                (10.0f, 11.0f, 0.0f, 0.0f, 0.0f,
                 0.1f, 0.35f, 0.1f, 0.45f, 0.55f, 0.45f, .25f);
            renderTeapot
                (10.0f, 8.0f, 0.0f, 0.0f, 0.0f, 0.5f, 0.0f, 0.0f,
                 0.7f, 0.6f, 0.6f, .25f);
            renderTeapot
                (10.0f, 5.0f, 0.0f, 0.0f, 0.0f, 0.55f, 0.55f, 0.55f,
                 0.70f, 0.70f, 0.70f, .25f);
            renderTeapot
                (10.0f, 2.0f, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.0f,
                 0.60f, 0.60f, 0.50f, .25f);
            renderTeapot
                (14.0f, 17.0f, 0.02f, 0.02f, 0.02f, 0.01f, 0.01f, 0.01f,
                 0.4f, 0.4f, 0.4f, .078125f);
            renderTeapot
                (14.0f, 14.0f, 0.0f, 0.05f, 0.05f, 0.4f, 0.5f, 0.5f,
                 0.04f, 0.7f, 0.7f, .078125f);
            renderTeapot
                (14.0f, 11.0f, 0.0f, 0.05f, 0.0f, 0.4f, 0.5f, 0.4f,
                 0.04f, 0.7f, 0.04f, .078125f);
            renderTeapot
                (14.0f, 8.0f, 0.05f, 0.0f, 0.0f, 0.5f, 0.4f, 0.4f,
                 0.7f, 0.04f, 0.04f, .078125f);
            renderTeapot
                (14.0f, 5.0f, 0.05f, 0.05f, 0.05f, 0.5f, 0.5f, 0.5f,
                 0.7f, 0.7f, 0.7f, .078125f);
            renderTeapot
                (14.0f, 2.0f, 0.05f, 0.05f, 0.0f, 0.5f, 0.5f, 0.4f,
                 0.7f, 0.7f, 0.04f, .078125f);
            gl.glFlush();

	    glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
        }

            /*
             * Move object into position.  Use 3rd through 12th 
             * parameters to specify the material property.  Draw a teapot.
             */
        private void renderTeapot
            (float x,
             float y,
             float ambr,
             float ambg,
             float ambb,
             float difr,
             float difg,
             float difb,
             float specr,
             float specg,
             float specb,
             float shine)
        {
            float mat[] = new float[4];

            gl.glPushMatrix();
            gl.glTranslatef(x, y, 0.0f);
            mat[0] = ambr; mat[1] = ambg; mat[2] = ambb; mat[3] = 1.0f;
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, mat);
            mat[0] = difr; mat[1] = difg; mat[2] = difb;
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, mat);
            mat[0] = specr; mat[1] = specg; mat[2] = specb;
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat);
            gl.glMaterialf(GL_FRONT, GL_SHININESS, shine * 128.0f);
            gl.glCallList(teapotList);
            gl.glPopMatrix();
        }

    }
}
