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
 *  tess.c
 *  This program demonstrates polygon tessellation.
 *  Two tesselated objects are drawn.  The first is a
 *  rectangle with a triangular hole.  The second is a
 *  smooth shaded, self-intersecting star.
 *
 *  Note the exterior rectangle is drawn with its vertices
 *  in counter-clockwise order, but its interior clockwise.
 *  Note the combineCallback is needed for the self-intersecting
 *  star.  Also note that removing the TessProperty for the
 *  star will make the interior unshaded (WINDING_ODD).
 */

import gl4java.utils.glut.*;
import gl4java.utils.glut.fonts.*;

import gl4java.*;
import gl4java.awt.*;
import gl4java.swing.*;
import java.applet.*;
import java.awt.*;
import java.awt.Dimension;
import java.awt.event.*;
import java.lang.*;
import java.util.*;

public  class TessJPanel extends GLJPanel 
{
	public static double rect[/*4*/][/*3*/] = 
	                          {{50.0, 50.0, 0.0},
				  {200.0, 50.0, 0.0},
				  {200.0, 200.0f, 0.0},
				  {50.0, 200.0, 0.0}};
	public static double tri[/*3*/][/*3*/] = 
	                        {{75.0, 75.0, 0.0},
				 {125.0, 175.0, 0.0},
				 {175.0, 75.0, 0.0}};
	public static double star[/*5*/][/*6*/] = 
	                         {{250.0, 50.0, 0.0, 1.0, 0.0, 1.0},
				  {325.0, 200.0, 0.0, 1.0, 1.0, 0.0},
				  {400.0, 50.0, 0.0, 0.0, 1.0, 1.0},
				  {250.0, 150.0, 0.0, 1.0, 0.0, 0.0},
				  {400.0, 150.0, 0.0, 0.0, 1.0, 0.0}};

        protected GLUTFunc glut = null;
    
	int startList=-1;
	boolean exit = false;

	public TessJPanel() {
	    super();
	}

	public void init() {
	    int i;
	    glut = new GLUTFuncLightImplWithFonts(gl, glu);

	   long tobj;

	   gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

	   startList = gl.glGenLists(2);

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

	   /*  rectangle with triangular hole inside  */
	   gl.glNewList(startList, GL_COMPILE);
	   gl.glShadeModel(GL_FLAT);
	   glu.gluTessBeginPolygon(tobj, (double[])null);
	      glu.gluTessBeginContour(tobj);
		 glu.gluTessVertex(tobj, rect[0], rect[0]);
		 glu.gluTessVertex(tobj, rect[1], rect[1]);
		 glu.gluTessVertex(tobj, rect[2], rect[2]);
		 glu.gluTessVertex(tobj, rect[3], rect[3]);
	      glu.gluTessEndContour(tobj);
	      glu.gluTessBeginContour(tobj);
		 glu.gluTessVertex(tobj, tri[0], tri[0]);
		 glu.gluTessVertex(tobj, tri[1], tri[1]);
		 glu.gluTessVertex(tobj, tri[2], tri[2]);
	      glu.gluTessEndContour(tobj);
	   glu.gluTessEndPolygon(tobj);
	   gl.glEndList();

	   glu.gluTessCallback ( tobj, GLU_TESS_VERTEX, this,
				"vertexCallback", "([D)V",
				6, 0, 0, 0, 0);
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
				3, 4*6, 4, 6, 0);

	   /*  smooth shaded, self-intersecting star  */
	   gl.glNewList(startList + 1, GL_COMPILE);
	   gl.glShadeModel(GL_SMOOTH);
	   glu.gluTessProperty(tobj, GLU_TESS_WINDING_RULE,
			   GLU_TESS_WINDING_POSITIVE);
	   glu.gluTessBeginPolygon(tobj, (double[])null);
	      glu.gluTessBeginContour(tobj);
		 glu.gluTessVertex(tobj, star[0], star[0]);
		 glu.gluTessVertex(tobj, star[1], star[1]);
		 glu.gluTessVertex(tobj, star[2], star[2]);
		 glu.gluTessVertex(tobj, star[3], star[3]);
		 glu.gluTessVertex(tobj, star[4], star[4]);
	      glu.gluTessEndContour(tobj);
	   glu.gluTessEndPolygon(tobj);
	   gl.glEndList();

	   glu.gluDeleteTess(tobj);

	   reshape(getSize().width, getSize().height);

	   glj.gljCheckGL();
	}
	
        public void display()
	{
	   if(exit) return;

	   gl.glClear(GL_COLOR_BUFFER_BIT);
	   gl.glColor3f(1.0f, 1.0f, 1.0f);
	   gl.glCallList(startList);
	   gl.glCallList(startList + 1);
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

	public void vertexCallback(double[/*6*/] vertex)
	{
	   double[] col = new double[3];
	   System.arraycopy(vertex, 3, col, 0, 3);

	   gl.glColor3dv(col);
	   gl.glVertex3dv(vertex);
	}

	/*  combineCallback is used to create a new vertex when edges
	 *  intersect.  coordinate location is trivial to calculate,
	 *  but weight[4] may be used to average color, normal, or texture
	 *  coordinate data.  In this program, color is weighted.
	 */
	public void combineCallback(double coords[/*3*/],
			     double vertex_data[/*4x6*/],
			     float weight[/*4*/], double[/*6*/] dataOut )
	{
	   int i;

	   dataOut[0] = coords[0];
	   dataOut[1] = coords[1];
	   dataOut[2] = coords[2];
	   for (i = 3; i < 6; i++)
	      dataOut[i] = weight[0] * vertex_data[0*6+i]
			  + weight[1] * vertex_data[1*6+i]
			  + weight[2] * vertex_data[2*6+i]
			  + weight[3] * vertex_data[3*6+i];
	}

	public void reshape(int w, int h)
	{
	   gl.glViewport( 0, 0, w, h );

	   gl.glMatrixMode( GL_PROJECTION );
	   gl.glLoadIdentity();
	   //
	   // draw this upside down, because of 
	   // the reversed swing orientation
	   //
	   glu.gluOrtho2D(0.0f, (double) w, (double) h, 0.0f);
	}
}
