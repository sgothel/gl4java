/*
 * Copyright (c) 1993-1997, Silicon Graphics, Inc.
 * ALL RIGHTS RESERVED 
 * Permission to use, copy, modify, and distribute this software for 
 * any purpose and without fee is hereby granted, provided that the above
 * copyright notice appear in all copies and that both the copyright notice
 * and this permission notice appear in supporting documentation, and that 
 * the name of Silicon Graphics, Inc. not be used in adverti(float)Math.sing
 * or publicity pertaining to distribution of the software without specific,
 * written prior permission. 
 *
 * THE MATERIAL EMBODIED ON THIS SOFTWARE IS PROVIDED TO YOU "AS-IS"
 * AND WITHOUT WARRANTY OF ANY KIND, EXPRESS, IMPLIED OR OTHERWISE,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF MERCHANTABILITY OR
 * FITNESS FOR A PARTICULAR PURPOSE.  IN NO EVENT SHALL SILICON
 * GRAPHICS, INC.  BE LIABLE TO YOU OR ANYONE ELSE FOR ANY DIRECT,
 * SPECIAL, INCIDENTAL, INDIRECT OR CONSEQUENTIAL DAMAGES OF ANY
 * KIND, OR ANY DAMAGES WHATSOEVER, INCLUDING WITHOUT LIMITATION,
 * LOSS OF PROFIT, LOSS OF USE, SAVINGS OR REVENUE, OR THE CLAIMS OF
 * THIRD PARTIES, WHETHER OR NOT SILICON GRAPHICS, INC.  HAS BEEN
 * ADVISED OF THE POSSIBILITY OF SUCH LOSS, HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, ARISING OUT OF OR IN CONNECTION WITH THE
 * POSSESSION, USE OR PERFORMANCE OF THIS SOFTWARE.
 * 
 * US Government Users Restricted Rights 
 * Use, duplication, or disclosure by the Government is subject to
 * restrictions set forth in FAR 52.227f.19(c)(2) or subparagraph
 * (c)(1)(ii) of the Rights in Technical Data and Computer Software
 * clause at DFARS 252.227f-7013 and/or in similar or successor
 * clauses in the FAR or the DOD or NASA FAR Supplement.
 * Unpublished-- rights reserved under the copyright laws of the
 * United States.  Contractor/manufacturer is Silicon Graphics,
 * Inc., 2011 N.  Shoreline Blvd., Mountain View, CA 94039-7311.
 *
 * OpenGL(R) is a registered trademark of Silicon Graphics, Inc.
 */

/*
 *  tesswind.c
 *  This program demonstrates the winding rule polygon 
 *  tessellation property.  Four tessellated objects are drawn, 
 *  each with very different contours.  When the w key is pressed, 
 *  the objects are drawn with a different winding rule.
 */
import gl4java.utils.glut.*;
import gl4java.utils.glut.fonts.*;
import gl4java.utils.textures.*;

import gl4java.awt.*;
import java.applet.*;
import java.awt.*;
import java.awt.Dimension;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import gl4java.*;

public class tesswind extends Applet {

    MyCanvas canvas = null;
    boolean isAnApplet = true;

    public void init()
    {
        Dimension d = getSize();
        setLayout(new BorderLayout());
	canvas = new MyCanvas (d.width, d.height);
        add("Center", canvas);
    }

	public static void main( String args[] ) 
	{
		Frame mainFrame = new Frame("tessdemo");

		tesswind applet = new tesswind();
    		applet.isAnApplet = false;

		applet.setSize(400, 400);
		applet.init();
		applet.start();

		mainFrame.add(applet);

		mainFrame.pack();
		mainFrame.setVisible(true);
	}

    public void start()
    {
    }


    public void stop()
    {
    }

	   static final String MENU_1 = "Odd Winding";
	   static final String MENU_2 = "Nonzero Winding";
	   static final String MENU_3 = "Positive Winding";
	   static final String MENU_4 = "Negative Winding";
	   static final String MENU_5 = "ABS >= 2 Winding";
           static final String MENU_SNAPSHOT = "Snapshot";

	   public static double rects[/*12*/][/*3*/] = 
	      { { 50.0, 50.0, 0.0}, 
	        { 300.0, 50.0, 0.0}, 
	        { 300.0, 300.0, 0.0}, 
		{ 50.0, 300.0, 0.0},
	        { 100.0, 100.0, 0.0}, 
		{ 250.0, 100.0, 0.0}, 
	        { 250.0, 250.0, 0.0}, 
		{ 100.0, 250.0, 0.0},
	        { 150.0, 150.0, 0.0}, 
		{ 200.0, 150.0, 0.0}, 
	        { 200.0, 200.0, 0.0}, 
		{ 150.0, 200.0, 0.0} };

	   public static double spiral[/*16*/][/*3*/] = 
	      { { 400.0, 250.0, 0.0}, 
	        { 400.0, 50.0, 0.0}, 
	        { 50.0, 50.0, 0.0}, 
		{ 50.0, 400.0, 0.0}, 
	        { 350.0, 400.0, 0.0}, 
		{ 350.0, 100.0, 0.0}, 
	        { 100.0, 100.0, 0.0}, 
		{ 100.0, 350.0, 0.0}, 
	        { 300.0, 350.0, 0.0}, 
		{ 300.0, 150.0, 0.0}, 
	        { 150.0, 150.0, 0.0}, 
		{ 150.0, 300.0, 0.0}, 
	        { 250.0, 300.0, 0.0}, 
		{ 250.0, 200.0, 0.0}, 
	        { 200.0, 200.0, 0.0}, 
		{ 200.0, 250.0, 0.0} };

	   public static double quad1[/*4*/][/*3*/] = 
	      { {50.0, 150.0, 0.0}, 
	        {350.0, 150.0, 0.0}, 
	        {350.0, 200.0, 0.0}, 
		{50.0, 200.0, 0.0} };

	   public static double quad2[/*4*/][/*3*/] =
	      { {100.0, 100.0, 0.0}, 
	        {300.0, 100.0, 0.0}, 
	        {300.0, 350.0, 0.0}, 
		{100.0, 350.0, 0.0} };

	   public static double tri[/*3*/][/*3*/] =
	      { {200.0, 50.0, 0.0}, 
	        {250.0, 300.0, 0.0},
	        {150.0, 300.0, 0.0} };
	 
    protected class MyCanvas extends GLCanvas 
        implements MouseListener, ActionListener
    {
        protected GLUTFunc glut = null;
    
	boolean exit = false;
	boolean mkNewLists = false;

	int startList=-1;

        private PopupMenu menu = null;
        private boolean menu_showing = false;
    
	TGATextureGrabber textgrab = null;

	boolean doSnapshot=false;

	public MyCanvas(int w, int h) {
	    super(w,h);
	    GLContext.gljNativeDebug = false;
	    GLContext.gljClassDebug  = false;
	}

	double currentWinding = GLU_TESS_WINDING_ODD;
	int currentShape = 0;
	long tobj;
	int list;

	public void init() {
	    int i;
	    glut = new GLUTFuncLightImplWithFonts(gl, glu);

	    textgrab = new TGATextureGrabber(gl);

	   gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	   gl.glShadeModel(GL_FLAT);    

	   tobj = glu.gluNewTess();

	   glu.gluTessCallback ( tobj, GLU_TESS_VERTEX, gl,
				"glVertex3dv", "([D)V",
				3, 0, 0, 0, 0);
	   glu.gluTessCallback ( tobj, GLU_TESS_BEGIN, this,
				"beginCallback", "(I)V",
				0, 0, 0, 0, 0);
	   glu.gluTessCallback ( tobj, GLU_TESS_END, this,
				"endCallback", "()V",
				0, 0, 0, 0, 0);
	   glu.gluTessCallback ( tobj, GLU_TESS_ERROR, this,
				"errorCallback", "(I)V",
				0, 0, 0, 0, 0);
	   glu.gluTessCallback ( tobj, GLU_TESS_COMBINE, this,
				"combineCallback", "([D[D[F[D)V",
				3, 0, 0, 3, 0);


	   list = gl.glGenLists(4);
	   makeNewLists();

	    reshape(getSize().width, getSize().height);

		glj.gljCheckGL();

		menu = new PopupMenu("Options");
		menu.add(MENU_1);
		menu.add(MENU_2);
		menu.add(MENU_3);
		menu.add(MENU_4);
		menu.add(MENU_5);
    		if(!isAnApplet)
			menu.add(MENU_SNAPSHOT);
		menu.addActionListener(this);
		add(menu);
                addMouseListener(this);
	}


	/*  Make four display lists, 
	 *  each with a different tessellated object. 
	 */
	void makeNewLists () 
	{
	   int i;
	   glu.gluTessProperty(tobj, GLU_TESS_WINDING_RULE, 
			   currentWinding);

	   gl.glNewList(list, GL_COMPILE);
	      glu.gluTessBeginPolygon(tobj, (double[])null);
		 glu.gluTessBeginContour(tobj);
		 for (i = 0; i < 4; i++)
		    glu.gluTessVertex(tobj, rects[i], rects[i]);
		 glu.gluTessEndContour(tobj);
		 glu.gluTessBeginContour(tobj);
		 for (i = 4; i < 8; i++)
		    glu.gluTessVertex(tobj, rects[i], rects[i]);
		 glu.gluTessEndContour(tobj);
		 glu.gluTessBeginContour(tobj);
		 for (i = 8; i < 12; i++)
		    glu.gluTessVertex(tobj, rects[i], rects[i]);
		 glu.gluTessEndContour(tobj);
	      glu.gluTessEndPolygon(tobj);
	   gl.glEndList();

	   gl.glNewList(list+1, GL_COMPILE);
	      glu.gluTessBeginPolygon(tobj, (double[])null);
		 glu.gluTessBeginContour(tobj);
		 for (i = 0; i < 4; i++)
		    glu.gluTessVertex(tobj, rects[i], rects[i]);
		 glu.gluTessEndContour(tobj);
		 glu.gluTessBeginContour(tobj);
		 for (i = 7; i >= 4; i--)
		    glu.gluTessVertex(tobj, rects[i], rects[i]);
		 glu.gluTessEndContour(tobj);
		 glu.gluTessBeginContour(tobj);
		 for (i = 11; i >= 8; i--)
		    glu.gluTessVertex(tobj, rects[i], rects[i]);
		 glu.gluTessEndContour(tobj);
	      glu.gluTessEndPolygon(tobj);
	   gl.glEndList();

	   gl.glNewList(list+2, GL_COMPILE);
	      glu.gluTessBeginPolygon(tobj, (double[])null);
		 glu.gluTessBeginContour(tobj);
		 for (i = 0; i < 16; i++)
		    glu.gluTessVertex(tobj, spiral[i], spiral[i]);
		 glu.gluTessEndContour(tobj);
	      glu.gluTessEndPolygon(tobj);
	   gl.glEndList();

	   gl.glNewList(list+3, GL_COMPILE);
	      glu.gluTessBeginPolygon(tobj, (double[])null);
		 glu.gluTessBeginContour(tobj);
		 for (i = 0; i < 4; i++)
		    glu.gluTessVertex(tobj, quad1[i], quad1[i]);
		 glu.gluTessEndContour(tobj);
		 glu.gluTessBeginContour(tobj);
		 for (i = 0; i < 4; i++)
		    glu.gluTessVertex(tobj, quad2[i], quad2[i]);
		 glu.gluTessEndContour(tobj);
		 glu.gluTessBeginContour(tobj);
		 for (i = 0; i < 3; i++)
		    glu.gluTessVertex(tobj, tri[i], tri[i]);
		 glu.gluTessEndContour(tobj);
	      glu.gluTessEndPolygon(tobj);
	   gl.glEndList();
	}

        public void display()
	{

	   if(exit) return;

	   /* Standard GL4Java Init */
	   if( glj.gljMakeCurrent() == false ) 
	   {
		System.out.println("problem in use() method");
		return;
	   }

	   if(mkNewLists)
	   {
           	makeNewLists();
		mkNewLists = false;
	   }

	   gl.glClear(GL_COLOR_BUFFER_BIT);
	   gl.glColor3f(1.0f, 1.0f, 1.0f);
	   gl.glPushMatrix(); 
	   gl.glCallList(list);
	   gl.glTranslatef(0.0f, 500.0f, 0.0f);
	   gl.glCallList(list+1);
	   gl.glTranslatef(500.0f, -500.0f, 0.0f);
	   gl.glCallList(list+2);
	   gl.glTranslatef(0.0f, 500.0f, 0.0f);
	   gl.glCallList(list+3);
	   gl.glPopMatrix(); 

	   if(!isAnApplet && doSnapshot)
	   {
	   	doSnapshot=false;
		textgrab.grabPixels(GL_BACK, 
				    0, 0, cvsGetWidth(), cvsGetHeight());
		textgrab.write2File("tesswind.tga");
	   }

	   /* For your animation dutys ;-) */
	   glj.gljSwap();
	   glj.gljCheckGL();
	   glj.gljFree();
	}

	public void beginCallback(int which)
	{
	   gl.glBegin(which);
	}

	public void errorCallback(int errorCode)
	{
	   String       str;

	   gl.glColor3f( 0.9f, 0.9f, 0.9f );
	   gl.glRasterPos2i( 5, 5 );

	   str = glu.gluErrorString( errorCode );

	   glut.glutBitmapString(glut.GLUT_BITMAP_9_BY_15, str);
	   exit = true;
	}

	public void endCallback()
	{
	   gl.glEnd();
	}

	/*  combineCallback is used to create a new vertex when edges
	 *  intersect.  coordinate location is trivial to calculate,
	 *  but weight[4] may be used to average color, normal, or texture 
	 *  coordinate data.
	 */
	/* ARGSUSED */
	public void combineCallback(double coords[/*3*/], double data[/*4xn*/],
			     float weight[/*4*/], double[/*3*/] dataOut )
	{
	   dataOut[0] = coords[0];
	   dataOut[1] = coords[1];
	   dataOut[2] = coords[2];
	}

	public void reshape(int w, int h)
	{
	   gl.glViewport( 0, 0, w, h );

	   gl.glMatrixMode( GL_PROJECTION );
	   gl.glLoadIdentity();
	   if (w <= h)
	      glu.gluOrtho2D(0.0f, 1000.0f, 0.0f, 1000.0f * (double)h/(double)w);
	   else
	      glu.gluOrtho2D(0.0f, 1000.0f * (double)w/(double)h, 0.0f, 1000.0f);
	   gl.glMatrixMode(GL_MODELVIEW);
	   gl.glLoadIdentity();
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
            if (!menu_showing)
            {
                if ((evt.getModifiers() & evt.BUTTON3_MASK) != 0)
                {
                    menu_showing = true;
                    menu.show(this,evt.getX(),evt.getY());
                }
            }
            else
            {
                menu_showing = false;
            }
        }
    
        public void mouseClicked(MouseEvent evt)
        {
	}

        public void mouseReleased(MouseEvent evt)
        {
        }
    
        // Method required for the implementation of ActionListener
        public void actionPerformed(ActionEvent evt)
        {
            String c = evt.getActionCommand();
            if (c.equals(MENU_1))
            {
		    currentWinding = GLU_TESS_WINDING_ODD;
            }
            else if (c.equals(MENU_2))
            {
		    currentWinding = GLU_TESS_WINDING_NONZERO;
            }
            else if (c.equals(MENU_3))
            {
		    currentWinding = GLU_TESS_WINDING_POSITIVE;
            }
            else if (c.equals(MENU_4))
            {
		    currentWinding = GLU_TESS_WINDING_NEGATIVE;
            }
            else if (c.equals(MENU_5))
            {
		    currentWinding = GLU_TESS_WINDING_ABS_GEQ_TWO;
            }
            else if (c.equals(MENU_SNAPSHOT))
            {
	   	doSnapshot=true;
            }
            if (menu_showing)
            {
                menu_showing = false;
            }
	    mkNewLists = true;
	    repaint();
        }
    }
}
