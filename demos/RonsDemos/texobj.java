/**
 * @(#) texobj.java
 * @(#) author: Brian Paul (converted to Java by Ron Cemer)
 */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;

import gl4java.GLContext;
import gl4java.awt.GLAnimCanvas;
import gl4java.applet.SimpleGLAnimApplet1;

public class texobj extends SimpleGLAnimApplet1 
{

        /* Initialize the applet */


	public void init()
	{
	super.init();
        Dimension d = getSize();
        canvas = new texobjCanvas(d.width, d.height);
        add("Center", canvas);
	}


        /* Local GLAnimCanvas extension class */


    private class texobjCanvas extends GLAnimCanvas
    {
        private int TexObj[];
        float Angle = 0.0f;

        public texobjCanvas(int w, int h)
        {
            super(w, h);
            GLContext.gljNativeDebug = false;
            GLContext.gljClassDebug = false;
            setAnimateFps(30.0);

            TexObj = new int[2];
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
            
            int width = 8, height = 8;
            byte tex1[] =
            {
                0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 1, 0, 0, 0,
                0, 0, 0, 1, 1, 0, 0, 0,
                0, 0, 0, 0, 1, 0, 0, 0,
                0, 0, 0, 0, 1, 0, 0, 0,
                0, 0, 0, 0, 1, 0, 0, 0,
                0, 0, 0, 1, 1, 1, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0
            };
            byte tex2[] =
            {
                0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 2, 2, 0, 0, 0,
                0, 0, 2, 0, 0, 2, 0, 0,
                0, 0, 0, 0, 0, 2, 0, 0,
                0, 0, 0, 0, 2, 0, 0, 0,
                0, 0, 0, 2, 0, 0, 0, 0,
                0, 0, 2, 2, 2, 2, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0
            };
            byte tex[] = new byte[64*3];
            int i, j;

            gl.glDisable(GL_DITHER);

                /* Setup texturing */
            gl.glEnable(GL_TEXTURE_2D);
            gl.glTexEnvi(GL_TEXTURE_ENV,GL_TEXTURE_ENV_MODE,GL_DECAL);
            gl.glHint(GL_PERSPECTIVE_CORRECTION_HINT,GL_FASTEST);

                /* generate texture object IDs */
            gl.glGenTextures(2, TexObj);

                /* setup first texture object */
            gl.glBindTexture(GL_TEXTURE_2D, TexObj[0]);
                /* red on white */
            for (i = 0; i < height; i++)
            {
                for (j = 0; j < width; j++)
                {
                    int p = i*width+j;
                    if ((tex1[(height-i-1)*width+j]) != (byte)0)
                    {
                        tex[p*3] = (byte)255;
                        tex[(p*3)+1] = (byte)0;
                        tex[(p*3)+2] = (byte)0;
                    }
                    else
                    {
                        tex[p*3] = (byte)255;
                        tex[(p*3)+1] = (byte)255;
                        tex[(p*3)+2] = (byte)255;
                    }
                }
            }
            gl.glTexImage2D
                (GL_TEXTURE_2D,
                 0,
                 3,
                 width,
                 height,
                 0,
                 GL_RGB,
                 GL_UNSIGNED_BYTE,
                 tex);
            gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);
            gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
            gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_REPEAT);
            gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_REPEAT);
                /* end of texture object */

                /* setup second texture object */
            gl.glBindTexture(GL_TEXTURE_2D,TexObj[1]);
                /* green on blue */
            for (i = 0; i < height; i++)
            {
                for (j = 0; j < width; j++)
                {
                    int p = i*width+j;
                    if ((tex2[(height-i-1)*width+j]) != (byte)0)
                    {
                        tex[p*3] = (byte)0;
                        tex[(p*3)+1] = (byte)255;
                        tex[(p*3)+2] = (byte)0;
                    }
                    else
                    {
                        tex[p*3] = (byte)0;
                        tex[(p*3)+1] = (byte)0;
                        tex[(p*3)+2] = (byte)255;
                    }
                }
            }
            gl.glTexImage2D
                (GL_TEXTURE_2D,
                 0,
                 3,
                 width,
                 height,
                 0,
                 GL_RGB,
                 GL_UNSIGNED_BYTE,
                 tex);
            gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);
            gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
            gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_REPEAT);
            gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_REPEAT);
                /* end texture object */

            glj.gljCheckGL();
        }
    
        public void reshape(int width, int height)
        {
            gl.glViewport(0,0,width,height);

            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            gl.glFrustum(-2.0, 2.0, -2.0, 2.0, 6.0, 20.0);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
            gl.glTranslatef(0.0f, 0.0f, -8.0f);
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;
    
            Angle += 0.2f;
            
            gl.glDepthFunc(GL_EQUAL);
            gl.glClear(GL_COLOR_BUFFER_BIT);
            
            gl.glColor3f(1.0f, 1.0f, 1.0f);
            
            /* draw first polygon */
            gl.glPushMatrix();
            gl.glTranslatef(-1.0f, 0.0f, 0.0f);
            gl.glRotatef(Angle, 0.0f, 0.0f, 1.0f);
            gl.glBindTexture(GL_TEXTURE_2D, TexObj[0]);
            gl.glBegin(GL_POLYGON);
            gl.glTexCoord2f(0.0f, 0.0f);   gl.glVertex2f(-1.0f, -1.0f);
            gl.glTexCoord2f(1.0f, 0.0f);   gl.glVertex2f( 1.0f, -1.0f);
            gl.glTexCoord2f(1.0f, 1.0f);   gl.glVertex2f( 1.0f,  1.0f);
            gl.glTexCoord2f(0.0f, 1.0f);   gl.glVertex2f(-1.0f,  1.0f);
            gl.glEnd();
            gl.glPopMatrix();
            
            /* draw second polygon */
            gl.glPushMatrix();
            gl.glTranslatef(1.0f, 0.0f, 0.0f);
            gl.glRotatef(Angle-90.0f, 0.0f, 1.0f, 0.0f);
            gl.glBindTexture(GL_TEXTURE_2D, TexObj[1]);
            gl.glBegin(GL_POLYGON);
            gl.glTexCoord2f(0.0f, 0.0f);   gl.glVertex2f(-1.0f, -1.0f);
            gl.glTexCoord2f(1.0f, 0.0f);   gl.glVertex2f( 1.0f, -1.0f);
            gl.glTexCoord2f(1.0f, 1.0f);   gl.glVertex2f( 1.0f,  1.0f);
            gl.glTexCoord2f(0.0f, 1.0f);   gl.glVertex2f(-1.0f,  1.0f);
            gl.glEnd();
            gl.glPopMatrix();
        
            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
    
            //if (!isSuspended()) repaint();  // Animate at full speed.
        }
    }
}
