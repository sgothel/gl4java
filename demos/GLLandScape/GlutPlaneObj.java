/**
 * @(#) glutplane.java
 * @(#) author: Mark J. Kilgard (converted to Java by Ron Cemer)
 */

/* This program is freely distributable without licensing fees 
   and is provided without guarantee or warrantee expressed or 
   implied. This program is -not- in the public domain. */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;
import gl4java.GLContext;
import gl4java.GLFunc;
import gl4java.GLUFunc;
import gl4java.GLEnum;
import gl4java.GLUEnum;
import gl4java.awt.GLAnimCanvas;
import gl4java.applet.SimpleGLAnimApplet1;

public class GlutPlaneObj
	implements GLEnum, GLUEnum
{
        float speed = 0.0f;          /* zero speed means not flying */
        float red = 0.0f, green = 0.0f, blue = 0.0f;
        float theta = 0.0f;
        public float x = 0.0f, y = 0.0f, z = 0.0f, angle = 0.0f;

        public void setPosition(float x, float y, float z)
        {
            this.x=x;
            this.y=y;
            this.z=z;
        }


        public void setColor(float r, float g, float b)
        {
            red = r;
            green = g;
            blue = b;
        }


        private final double M_PI = 3.14159265;
        private final double M_PI_2 = 1.57079632;

	GLFunc gl;
	GLUFunc glu;

        public GlutPlaneObj(GLFunc gl, GLUFunc glu)
        {
	    this.gl=gl;
	    this.glu=glu;
        }
    
        public void display()
        {

            if (speed != 0.0f)
            {
            	    tick();
		    // System.out.println("plane: ("+x+"/"+y+"/"+z+")");
                    gl.glPushMatrix();
                    gl.glTranslatef(x, y, z);
                    gl.glRotatef(290.0f, 1.0f, 0.0f, 0.0f);
                    gl.glRotatef(angle, 0.0f, 0.0f, 1.0f);
                    // gl.glScalef(1.0f / 3.0f, 1.0f / 4.0f, 1.0f / 4.0f);
                    gl.glScalef(5.0f, 5.0f, 5.0f);
                    gl.glTranslatef(0.0f, -4.0f, -1.5f);
                    gl.glBegin(GL_TRIANGLE_STRIP);
                        /* left wing */
                    gl.glVertex3f(-7.0f, 0.0f, 2.0f);
                    gl.glVertex3f(-1.0f, 0.0f, 3.0f);
                    gl.glColor3f(red,green,blue);
                    gl.glVertex3f(-1.0f, 7.0f, 3.0f);
                        /* left side */
                    gl.glColor3f(0.6f * red, 0.6f * green, 0.6f * blue);
                    gl.glVertex3f(0.0f, 0.0f, 0.0f);
                    gl.glVertex3f(0.0f, 8.0f, 0.0f);
                        /* right side */
                    gl.glVertex3f(1.0f, 0.0f, 3.0f);
                    gl.glVertex3f(1.0f, 7.0f, 3.0f);
                        /* final tip of right wing */
                    gl.glColor3f(red, green, blue);
                    gl.glVertex3f(7.0f, 0.0f, 2.0f);
                    gl.glEnd();
                    gl.glPopMatrix();
            }
        }

        public void tick()
        {
	/*
      posx = 4500.0f;
      posy = 256.0f;
      posz = 4500.0f;
	*/
            theta += speed;
            z = 4500.0f + 600.0f * (float)Math.cos(theta);
            x = 4500.0f + 600.0f * (float)Math.sin(2.0f * theta);
            y = 280.0f + (float)Math.sin(theta / 3.4f) * 20.0f;
            angle = (float)
                (((Math.atan(2.0) + M_PI_2) * Math.sin(theta) - M_PI_2) *
                 180.0 / M_PI);
            if (speed < 0.0f) angle += 180.0f;
        }
}
