/*
 * Copyright (c) 1991, 1992, 1993 Silicon Graphics, Inc.
 *
 * Permission to use, copy, modify, distribute, and sell this software and
 * its documentation for any purpose is hereby granted without fee, provided
 * that (i) the above copyright notices and this permission notice appear in
 * all copies of the software and related documentation, and (ii) the name of
 * Silicon Graphics may not be used in any adverti(float)Math.sing or
 * publicity relating to the software without the specific, prior written
 * permission of Silicon Graphics.
 *
 * THE SOFTWARE IS PROVIDED "AS-IS" AND WITHOUT WARRANTY OF
 * ANY KIND,
 * EXPRESS, IMPLIED OR OTHERWISE, INCLUDING WITHOUT LIMITATION, ANY
 * WARRANTY OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT SHALL SILICON GRAPHICS BE LIABLE FOR
 * ANY SPECIAL, INCIDENTAL, INDIRECT OR CONSEQUENTIAL DAMAGES OF ANY KIND,
 * OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
 * WHETHER OR NOT ADVISED OF THE POSSIBILITY OF DAMAGE, AND ON ANY THEORY OF
 * LIABILITY, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE
 * OF THIS SOFTWARE.
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

public class select extends Applet 
{
    selectCanvas canvas = null;

        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new selectCanvas(d.width, d.height);
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

	public static void main( String args[] ) {
            GLContext.gljNativeDebug = true;
            GLContext.gljClassDebug = true;

		select applet = 
		         new select();

		Frame f = new Frame("select");

		f.addWindowListener( new WindowAdapter()
				{
					public void windowClosed(WindowEvent e)
					{
						System.exit(0);
					}
					public void windowClosing(WindowEvent e)
					{
						windowClosed(e);
					}
				}
			);

		f.setLayout(new BorderLayout());
		f.add("Center", applet);
		applet.setSize(500,300);
		applet.init();
		applet.start();
		Dimension ps = applet.getPreferredSize();
		f.setBounds(-100,-100,99,99);
		f.setVisible(true);
		f.setVisible(false);
		Insets i = f.getInsets();
		f.setBounds(0,0,
			    ps.width+i.left+i.right, 
		            ps.height+i.top+i.bottom);
		f.setVisible(true);
	}

        /* Local GLCanvas extension class */

	static final int MAXOBJS =10000;
	static final int MAXSELECT =100;
	static final int MAXFEED =300;
	static final int	SOLID =1;
	static final int	LINE =2;
	static final int	POINT =3;

	protected class object {
	    float v1[];
	    float v2[];
	    float v3[];
	    float color[];

	    public object()
	    {
	    	v1=new float[2];
	    	v2=new float[2];
	    	v3=new float[2];
	    	color=new float[3];
	    }
	} /* objects[MAXOBJS] */


    private class selectCanvas extends GLCanvas
        implements MouseListener
    {
	int windW, windH;

	object[] objects=null;
	int selectBuf[/*MAXSELECT*/];
	float feedBuf[/*MAXFEED*/];
	int vp[/*4*/];
	float zRotation = 90.0f;
	float zoom = 1.0f;
	int objectCount;
	int numObjects;
	boolean linePoly = false;

        public selectCanvas(int w, int h)
        {
            super(w, h);
        }
    
        public void preInit()
        {
            doubleBuffer = true;
            stereoView = false;
        }
    

	public void init()
	{
		int i;

	        windW = getSize().width;
	        windH = getSize().height;

		objects = new object[MAXOBJS];
		for(i=0; i<MAXOBJS; i++)
			objects[i]=new object();

		selectBuf=new int[MAXSELECT];
		feedBuf=new float[MAXFEED];
		vp=new int[4];

		    numObjects = 10;
		    InitObjects(numObjects);
		    gl.glGetIntegerv(GL_VIEWPORT, vp);

                addMouseListener(this);
	}

	public void InitObjects(int num)
	{
	    int i;
	    double x, y;

	    if (num > MAXOBJS) {
		num = MAXOBJS;
	    }
	    if (num < 1) {
		num = 1;
	    }
	    objectCount = num;

	    // srand((unsigned int)time(NULL));
	    for (i = 0; i < num; i++) {
	    	/*
		x = (rand() % 300) - 150;
		y = (rand() % 300) - 150;
		*/
		x = (Math.random() * 300.0) - 150.0;
		y = (Math.random() * 300.0) - 150.0;

		objects[i].v1[0] = (float) (x + (Math.random() * 50.0) - 25.0);
		objects[i].v2[0] = (float) (x + (Math.random() * 50.0) - 25.0);
		objects[i].v3[0] = (float) (x + (Math.random() * 50.0) - 25.0);
		objects[i].v1[1] = (float) (y + (Math.random() * 50.0) - 25.0);
		objects[i].v2[1] = (float) (y + (Math.random() * 50.0) - 25.0);
		objects[i].v3[1] = (float) (y + (Math.random() * 50.0) - 25.0);
		objects[i].color[0] = (float) 
			(((Math.random() * 100.0) + 50.0) / 150.0f);
		objects[i].color[1] = (float) 
			(((Math.random() * 100.0) + 50.0) / 150.0f);
		objects[i].color[2] = (float) 
			(((Math.random() * 100.0) + 50.0) / 150.0f);
	    }
	}


	public void reshape(int width, int height)
	{

	    windW = (int)width;
	    windH = (int)height;
	}

	public void Render(int mode)
	{
	    int i;

	    for (i = 0; i < objectCount; i++) {
		if (mode == GL_SELECT) {
		    gl.glLoadName(i);
		}
		gl.glColor3fv(objects[i].color);
		gl.glBegin(GL_POLYGON);
		    gl.glVertex2fv(objects[i].v1);
		    gl.glVertex2fv(objects[i].v2);
		    gl.glVertex2fv(objects[i].v3);
		gl.glEnd();
	    }
	}

	public int DoSelect(int x, int y)
	{
	    int hits;

	    gl.glSelectBuffer(MAXSELECT, selectBuf);
	    gl.glRenderMode(GL_SELECT);
	    gl.glInitNames();
	    gl.glPushName(~0);

	    gl.glPushMatrix();

	    gl.glViewport(0, 0, windW, windH);
	    gl.glGetIntegerv(GL_VIEWPORT, vp);

	    gl.glMatrixMode(GL_PROJECTION);
	    gl.glLoadIdentity();
	    glu.gluPickMatrix(x, windH-y, 4, 4, vp);
	    glu.gluOrtho2D(-175, 175, -175, 175);
	    gl.glMatrixMode(GL_MODELVIEW);

	    gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	    gl.glClear(GL_COLOR_BUFFER_BIT);

	    gl.glScalef(zoom, zoom, zoom);
	    gl.glRotatef(zRotation, 0, 0, 1);

	    Render(GL_SELECT);

	    gl.glPopMatrix();
	    
	    hits = gl.glRenderMode(GL_RENDER); 
	    if (hits <= 0) {
		return -1;
	    }

	    return selectBuf[(hits-1)*4+3];
	}

	public void RecolorTri(int h)
	{

	    objects[h].color[0] = (float) 
	    	(((Math.random() * 100.0) + 50.0) / 150.0);
	    objects[h].color[1] = (float)
	    	(((Math.random() * 100.0) + 50.0) / 150.0);
	    objects[h].color[2] = (float)
	    	(((Math.random() * 100.0) + 50.0) / 150.0);
	}

	public void DeleteTri(int h)
	{

	    objects[h] = objects[objectCount-1];
	    objectCount--;
	}

	public void GrowTri(int h)
	{
	    float v[/*2*/];
	    int i;

	    v = new float[2];

	    v[0] = objects[h].v1[0] + objects[h].v2[0] + objects[h].v3[0];
	    v[1] = objects[h].v1[1] + objects[h].v2[1] + objects[h].v3[1];
	    v[0] /= 3f;
	    v[1] /= 3f;

	    for (i = 0; i < 3; i++) {
		switch (i) {
		  case 0:
		    objects[h].v1[0] = 1.5f * (objects[h].v1[0] - v[0]) + v[0];
		    objects[h].v1[1] = 1.5f * (objects[h].v1[1] - v[1]) + v[1];
		    break;
		  case 1:
		    objects[h].v2[0] = 1.5f * (objects[h].v2[0] - v[0]) + v[0];
		    objects[h].v2[1] = 1.5f * (objects[h].v2[1] - v[1]) + v[1];
		    break;
		  case 2:
		    objects[h].v3[0] = 1.5f * (objects[h].v3[0] - v[0]) + v[0];
		    objects[h].v3[1] = 1.5f * (objects[h].v3[1] - v[1]) + v[1];
		    break;
		}
	    }
	}

        // Methods required for the implementation of MouseListener
        public void mouseEntered(MouseEvent evt)
        {
        }
    
        public void mouseExited(MouseEvent evt)
        {
        }
    
        public void mousePressed(MouseEvent evt)
        {
        }
    
        public void mouseReleased(MouseEvent evt)
        {
        }
    
        public void mouseClicked(MouseEvent evt)
        {
	   int x1 = evt.getX();
	   int y1 = evt.getY();

	   /* translate GLUT into GL coordinates */
	   // y1 = getSize().height -y1;

	   int hit;

	   if( glj.gljMakeCurrent() == false ) 
	   {
		System.out.println("mouseClicked: problem in GL-use() method");
		return;
	   }

	   hit = DoSelect(x1, y1);

	   glj.gljCheckGL();
	   glj.gljFree();

	   if (hit != -1) {
                if ((evt.getModifiers() & evt.BUTTON1_MASK) != 0) {
		    RecolorTri(hit);
		}
                if ((evt.getModifiers() & evt.BUTTON2_MASK) != 0) {
		    GrowTri(hit);
		}
                if ((evt.getModifiers() & evt.BUTTON3_MASK) != 0) {
		    DeleteTri(hit);
		}
	   }

	   repaint();
	}

        public void display()
	{

	   /* Standard GL4Java Init */
	   if( glj.gljMakeCurrent() == false ) 
	   {
		System.out.println("problem in use() method");
		return;
	   }

	    gl.glPushMatrix();

	    gl.glViewport(0, 0, windW, windH);
	    gl.glGetIntegerv(GL_VIEWPORT, vp);

	    gl.glMatrixMode(GL_PROJECTION);
	    gl.glLoadIdentity();
	    glu.gluOrtho2D(-175, 175, -175, 175);
	    gl.glMatrixMode(GL_MODELVIEW);

	    gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	    gl.glClear(GL_COLOR_BUFFER_BIT);

	    gl.glScalef(zoom, zoom, zoom);
	    gl.glRotatef(zRotation, 0, 0, 1);

	    Render(GL_RENDER);

	    gl.glPopMatrix();

	   /* For your animation dutys ;-) */
	   glj.gljSwap();
	   glj.gljCheckGL();
	   glj.gljFree();
	}

	public void DrawZoom(int x, int y)
	{

	    gl.glPushMatrix();

	    gl.glViewport(0, 0, windW, windH);
	    gl.glGetIntegerv(GL_VIEWPORT, vp);

	    gl.glMatrixMode(GL_PROJECTION);
	    gl.glLoadIdentity();
	    glu.gluPickMatrix(x, windH-y, 4, 4, vp);
	    glu.gluOrtho2D(-175, 175, -175, 175);
	    gl.glMatrixMode(GL_MODELVIEW);

	    gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	    gl.glClear(GL_COLOR_BUFFER_BIT);

	    gl.glScalef(zoom, zoom, zoom);
	    gl.glRotatef(zRotation, 0, 0, 1);

	    Render(GL_RENDER);

	    gl.glPopMatrix();
	}

	public int DumpFeedbackVert(int i, int n)
	{
	    int index;

	    index = i;
	    if (index+7 > n) {
		System.out.println("  ???");
		return n;
	    }
	    System.out.println(" ("+feedBuf[index]+" "+
				    feedBuf[index+1]+" "+
				    feedBuf[index+2]+"), color = ("+
				    feedBuf[index+3]+" "+
				    feedBuf[index+4]+" "+
				    feedBuf[index+5]+")");
	    return index + 7;
	}

	public void DrawFeedback(int n)
	{
	    int i;
	    int verts;

	    System.out.println("Feedback results ("+n+" floats):");
	    for (i = 0; i < n; i++) {
		switch ((int)feedBuf[i]) {
		  case GL_POLYGON_TOKEN:
		    System.out.print("Polygon");
		    i++;
		    if (i < n) {
			verts = (int)feedBuf[i];
			i++;
			System.out.print(": "+verts+" vertices");
		    } else {
			verts = 0;
		    }
		    System.out.print("\n");
		    while (verts>0) {
			i=DumpFeedbackVert(i, n);
			verts--;
		    }
		    i--;
		    break;
		  case GL_LINE_TOKEN:
		    System.out.print("Line:");
		    i++;
		    i=DumpFeedbackVert(i, n);
		    i=DumpFeedbackVert(i, n);
		    i--;
		    break;
		  case GL_LINE_RESET_TOKEN:
		    System.out.print("Line Reset:\n");
		    i++;
		    i=DumpFeedbackVert(i, n);
		    i=DumpFeedbackVert(i, n);
		    i--;
		    break;
		  default:
		    System.out.print(feedBuf[i]+"\n");
		    break;
		}
	    }
	    if (i == MAXFEED) {
		System.out.print("...\n");
	    }
	    System.out.print("\n");
	}

	public void DoFeedback() 
	{
	    int x;

	    gl.glFeedbackBuffer(MAXFEED, GL_3D_COLOR, feedBuf);
	    gl.glRenderMode(GL_FEEDBACK);

	    gl.glPushMatrix();

	    gl.glViewport(0, 0, windW, windH);
	    gl.glGetIntegerv(GL_VIEWPORT, vp);

	    gl.glMatrixMode(GL_PROJECTION);
	    gl.glLoadIdentity();
	    glu.gluOrtho2D(-175, 175, -175, 175);
	    gl.glMatrixMode(GL_MODELVIEW);

	    gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	    gl.glClear(GL_COLOR_BUFFER_BIT);

	    gl.glScalef(zoom, zoom, zoom);
	    gl.glRotatef(zRotation, 0, 0, 1);

	    Render(GL_FEEDBACK);

	    gl.glPopMatrix();
	    
	    x = gl.glRenderMode(GL_RENDER); 
	    if (x == -1) {
		x = MAXFEED;
	    }

	    DrawFeedback((int)x);
	}

	/*
	static void Key2(int key, int x, int y)
	{
	    switch (key) {
	      case GLUT_KEY_LEFT:
		zRotation += 0.5f;
		break;
	      case GLUT_KEY_RIGHT:
		zRotation -= 0.5f;
		break;
	      default:
		return;
	    }

	    glut.glutPostRedisplay();
	}

	static void Key(unsigned char key, int x, int y)
	{
	    switch (key) {
	      case 27:
		exit(1);
	      case 'Z':
		zoom /= 0.75f;
		break;
	      case 'z':
		zoom *= 0.75f;
		break;
	      case 'f':
		DoFeedback();
		break;
	      case 'd':
		DrawZoom(x, y);
		break;
	      case 'l':
		linePoly = !linePoly;
		if (linePoly) {
		    gl.glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
		} else {
		    gl.glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
		}
		break;
	      default:
		return;
	    }

	    glut.glutPostRedisplay();
	}
	*/

    }
}
