/**
 * @(#) DrawColoredPrimitives.java
 * @(#) author: Joe Zimmerman (converted to Java by Sven Goethel)
 */

/* This program is free software under the license of LGPL */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;
import gl4java.GLContext;
import gl4java.swing.*;

public class DrawColoredPrimitivesJPanel extends GLAnimJPanel 
{
	float rotate;

	float LightAmbient[]  = { 0.75f, 0.75f, 0.75f, 1.5f};
	float LightDiffuse[]  = { 1.0f, 1.0f, 1.0f, 0.9f};
	float LightSpecular[] = { 0.8f, 0.8f, 0.8f, 1.0f};

        public DrawColoredPrimitivesJPanel()
        {
            super(false);
            setAnimateFps(30.0);
        }
    
        public void preInit()
        {
            stereoView = false;
        }
    
        public void init()
        {
		reshape(getSize().width, getSize().height);

		gl.glEnable(GL_LIGHT0);
		gl.glLightfv(GL_LIGHT0, GL_AMBIENT, LightAmbient);
		gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, LightDiffuse);
		gl.glLightfv(GL_LIGHT0, GL_SPECULAR, LightSpecular);

		glj.gljCheckGL();
        }
    
        public void reshape(int width, int height)
        {
		gl.glMatrixMode(GL_PROJECTION);
		gl.glLoadIdentity();
		glu.gluPerspective(45, (float)width/(float)height, 1, 700);
		gl.glMatrixMode(GL_MODELVIEW);
		gl.glLoadIdentity();
            	gl.glViewport(0,0,width,height);
        }

        public void display()
        {
		gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		gl.glMatrixMode(GL_MODELVIEW);
		gl.glLoadIdentity();

		gl.glColor4f(1, 1, 1, 1);

		rotate++;

		gl.glTranslatef(0, 0, -5);
		gl.glRotatef(rotate, 0, 1, 0);
		gl.glBegin(GL_POLYGON);
			gl.glNormal3f( 1, 0, 0);
			gl.glColor4f(1, 0, 0, 1); gl.glVertex3f( 0,  1, 0);
			gl.glColor4f(0, 1, 0, 1); gl.glVertex3f(-1, -1, 0);
			gl.glColor4f(0, 0, 1, 1); gl.glVertex3f( 1, -1, 0);
		gl.glEnd();
        }
}
