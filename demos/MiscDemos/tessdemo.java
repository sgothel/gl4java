/* $Id$ */

/*
 * A demo of the GLU polygon tesselation functions written by Bogdan Sikorski.
 * This demo isn't built by the Makefile because it needs GLUT.  After you've
 * installed GLUT you can try this demo.
 * Here's the command for IRIX, for example:
   cc -g -ansi -prototypes -fullwarn -float -I../include -DSHM tess_demo.c -L../lib -lglut -lMesaGLU -lMesaGL -lm -lX11 -lXext -lXmu -lfpe -lXext -o tess_demo
 */

/*
 * Updated for GLU 1.3f tessellation by Gareth Hughes <garethh@bell-labs.com>
 */

/*
 * $Log$
 * Revision 1.1.1.1  2000/11/18 06:53:19  sven
 * Initial import into CVS.
 * Version 2.5.0.0 beta 1
 *
 * Revision 1.3f.2.1f  1999/11/16 11:09:09  gareth
 * Added combine callback.  Converted vertices from ints to floats.
 *
 * Revision 1.3f  1999/11/04 04:00:42  gareth
 * Updated demo for new GLU 1.3f tessellation.  Added optimized rendering
 * by saving the output of the tessellation into display lists.
 *
 * Revision 1.2f  1999/09/19 20:09:00  tanner
 *
 * lots of autoconf updates
 *
 * Revision 1.1f.1.1f  1999/08/19 00:55:40  jtg
 * Imported sources
 *
 * Revision 3.5f  1999/03/28 18:24:37  brianp
 * minor clean-up
 *
 * Revision 3.4f  1999/02/14 03:37:07  brianp
 * fixed callback problem
 *
 * Revision 3.3f  1998/07/26 01:25:26  brianp
 * removed include of gl.h and glu.h
 *
 * Revision 3.2f  1998/06/29 02:37:30  brianp
 * minor changes for Windows (Ted Jump)
 *
 * Revision 3.1f  1998/06/09 01:53:49  brianp
 * main() should return an int
 *
 * Revision 3.0f  1998/02/14 18:42:29  brianp
 * initial rev
 *
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

public class tessdemo extends Applet {

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

		tessdemo applet = new tessdemo();
    		applet.isAnApplet = false;

		applet.setSize(400, 400);
		applet.init();
		applet.start();

		mainFrame.add(applet);

		mainFrame.pack();
		mainFrame.setVisible(true);

		System.out.println(applet.canvas.usage());
	}

    public void start()
    {
    }


    public void stop()
    {
    }

    static final int MAX_POINTS		= 256;
    static final int MAX_CONTOURS	= 32;
    static final int MAX_TRIANGLES	= 256;
    static final String MENU_DONE = "Done";
    static final String MENU_TESS = "Tesselate";
    static final String MENU_CLR = "Clear";
    static final String MENU_SNAPSHOT = "Snapshot";
    static final int MODE_DONE		=0;
    static final int MODE_CLR 		=1;
    static final int MODE_DEFINE	=2;
    static final int MODE_TESSELATE 	=3;
    static final int MODE_TESSELATED 	=4;
    
    protected class Contour
    {
       float	p[][];
       int	point_cnt;

       public Contour()
       {
       		p = new float[MAX_POINTS][2];
		point_cnt = 0;
       }
    }
    
    protected class Triangle
    {
       int		no;
       float	p[][];
       float	color[][];

       public Triangle()
       {
       		no = 0;
       		p = new float[3][2];
       		color = new float[3][3];
       }
    }

    protected class MyCanvas extends GLCanvas 
        implements MouseListener, ActionListener
    {
        protected GLUTFunc glut = null;
    

        private PopupMenu menu = null;
        private boolean menu_showing = false;
    
	int		contour_cnt;
	int		triangle_cnt;

	int	 	mode;

	int		list_start;

	float		edge_color[];

	Contour contours[/*MAX_CONTOURS*/];

	Triangle triangles[/*MAX_TRIANGLES*/];

	TGATextureGrabber textgrab = null;

	boolean doSnapshot=false;

	public MyCanvas(int w, int h) {
	    super(w,h);
	    GLContext.gljNativeDebug = false;
	    GLContext.gljClassDebug  = false;
	}

	public void init() {
	    int i;
	    glut = new GLUTFuncLightImplWithFonts(gl, glu);
	    textgrab = new TGATextureGrabber(gl);
	    contours = new Contour[MAX_CONTOURS];
	    for(i=0; i<MAX_CONTOURS; i++)
	    	contours[i] = new Contour();
	    triangles = new Triangle[MAX_TRIANGLES];
	    for(i=0; i<MAX_TRIANGLES; i++)
	    	triangles[i] = new Triangle();
	    edge_color = new float[3];

	   /* clear background to gray */
	   gl.glClearColor( 0.4f, 0.4f, 0.4f, 0.0f );
	   gl.glShadeModel( GL_FLAT );
	   gl.glPolygonMode( GL_FRONT, GL_FILL );

	   contour_cnt = 0;
	   mode = MODE_DEFINE;

	    reshape(getSize().width, getSize().height);

		glj.gljCheckGL();

		menu = new PopupMenu("Options");
		menu.add(MENU_DONE);
		menu.add(MENU_TESS);
		menu.add(MENU_CLR);
    		if(!isAnApplet)
			menu.add(MENU_SNAPSHOT);
		menu.addActionListener(this);
		add(menu);

                addMouseListener(this);
	}
	

	public void error_callback( int err )
	{
	   String       str;

	   gl.glColor3f( 0.9f, 0.9f, 0.9f );
	   gl.glRasterPos2i( 5, 5 );

	   str = glu.gluErrorString( err );

	   glut.glutBitmapString(glut.GLUT_BITMAP_9_BY_15, str);
	}

	public void begin_callback( int mode )
	{
	   /* Allow multiple triangles to be output inside the begin/end pair. */
	   triangle_cnt = 0;
	   triangles[triangle_cnt].no = 0;
	}

	public void edge_callback( boolean flag )
	{
	   /* Persist the edge flag across triangles. */
	   if ( flag == GL_TRUE )
	   {
	      edge_color[0] = 1.0f;
	      edge_color[1] = 1.0f;
	      edge_color[2] = 0.5f;
	   }
	   else
	   {
	      edge_color[0] = 1.0f;
	      edge_color[1] = 0.0f;
	      edge_color[2] = 0.0f;
	   }
	}

	public void end_callback()
	{
	   int	i;

	   gl.glBegin( GL_LINES );

	   /* Output the three edges of each triangle as lines colored
	      according to their edge flag. */
	   for ( i = 0 ; i < triangle_cnt ; i++ )
	   {
	      gl.glColor3f( triangles[i].color[0][0],
			 triangles[i].color[0][1],
			 triangles[i].color[0][2] );

	      gl.glVertex2f( triangles[i].p[0][0], triangles[i].p[0][1] );
	      gl.glVertex2f( triangles[i].p[1][0], triangles[i].p[1][1] );

	      gl.glColor3f( triangles[i].color[1][0],
			 triangles[i].color[1][1],
			 triangles[i].color[1][2] );

	      gl.glVertex2f( triangles[i].p[1][0], triangles[i].p[1][1] );
	      gl.glVertex2f( triangles[i].p[2][0], triangles[i].p[2][1] );

	      gl.glColor3f( triangles[i].color[2][0],
			 triangles[i].color[2][1],
			 triangles[i].color[2][2] );

	      gl.glVertex2f( triangles[i].p[2][0], triangles[i].p[2][1] );
	      gl.glVertex2f( triangles[i].p[0][0], triangles[i].p[0][1] );
	   }

	   gl.glEnd();
	}

	public void vertex_callback( float[/*2*/] data )
	{
	   int	no;

	   no = triangles[triangle_cnt].no;

	   triangles[triangle_cnt].p[no][0] = data[0];
	   triangles[triangle_cnt].p[no][1] = data[1];

	   triangles[triangle_cnt].color[no][0] = edge_color[0];
	   triangles[triangle_cnt].color[no][1] = edge_color[1];
	   triangles[triangle_cnt].color[no][2] = edge_color[2];

	   /* After every three vertices, initialize the next triangle. */
	   if ( ++(triangles[triangle_cnt].no) == 3 )
	   {
	      triangle_cnt++;
	      triangles[triangle_cnt].no = 0;
	   }
	}

	public void combine_callback( double coords[/*3*/],
			       double vertex_data[/*4xn(=0)*/],
			       float weight[/*4*/], float[/*m(=2)*/] data )
	{
	   data[0] = (float) coords[0];
	   data[1] = (float) coords[1];
	}

	public void tesse( )
	{
	   int			tobj;
	   double		data[] = new double[3];
	   int			i, j, point_cnt;

	   list_start = gl.glGenLists( 2 );

	   tobj = glu.gluNewTess();

	   if ( tobj != 0 )
	   {
	      glu.gluTessCallback ( tobj, GLU_TESS_BEGIN, gl,
				"glBegin", "(I)V",
				0, 0, 0, 0, 0);
	      glu.gluTessCallback ( tobj, GLU_TESS_VERTEX, gl,
				"glVertex2fv", "([F)V",
				2, 0, 0, 0, 0);
	      glu.gluTessCallback ( tobj, GLU_TESS_END, gl,
				"glEnd", "()V",
				0, 0, 0, 0, 0);
	      glu.gluTessCallback ( tobj, GLU_TESS_ERROR, this,
				"error_callback", "(I)V",
				0, 0, 0, 0, 0);
	      glu.gluTessCallback ( tobj, GLU_TESS_COMBINE, this,
				"combine_callback", "([D[D[F[F)V",
				2, 0, 0, 2, 0);

	      gl.glNewList( list_start, GL_COMPILE );
	      glu.gluBeginPolygon( tobj );

	      for ( j = 0 ; j <= contour_cnt ; j++ )
	      {
		 point_cnt = contours[j].point_cnt;
		 glu.gluNextContour( tobj, GLU_UNKNOWN );

		 for ( i = 0 ; i < point_cnt ; i++ )
		 {
		    data[0] = (double)( contours[j].p[i][0] );
		    data[1] = (double)( contours[j].p[i][1] );
		    data[2] = 0.0;
		    glu.gluTessVertex( tobj, data, contours[j].p[i] );
		 }
	      }

	      glu.gluEndPolygon( tobj );
	      gl.glEndList();

	      glu.gluTessCallback ( tobj, GLU_TESS_BEGIN, this,
				"begin_callback", "(I)V",
				0, 0, 0, 0, 0);
	      glu.gluTessCallback ( tobj, GLU_TESS_VERTEX, this,
				"vertex_callback", "([F)V",
				2, 0, 0, 0, 0);
	      glu.gluTessCallback ( tobj, GLU_TESS_END, this,
				"end_callback", "()V",
				0, 0, 0, 0, 0);
	      glu.gluTessCallback ( tobj, GLU_TESS_EDGE_FLAG, this,
				"edge_callback", "(Z)V",
				0, 0, 0, 0, 0);

	      gl.glNewList( list_start + 1, GL_COMPILE );
	      glu.gluBeginPolygon( tobj );

	      for ( j = 0 ; j <= contour_cnt ; j++ )
	      {
		 point_cnt = contours[j].point_cnt;
		 glu.gluNextContour( tobj, GLU_UNKNOWN );

		 for ( i = 0 ; i < point_cnt ; i++ )
		 {
		    data[0] = (double)( contours[j].p[i][0] );
		    data[1] = (double)( contours[j].p[i][1] );
		    data[2] = 0.0f;
		    glu.gluTessVertex( tobj, data, contours[j].p[i] );
		 }
	      }

	      glu.gluEndPolygon( tobj );
	      gl.glEndList();

	      glu.gluDeleteTess( tobj );
	   }
	}

        public void mouseClicked(MouseEvent evt)
        {
    	   if(mode != MODE_DEFINE)
	   	return;

	   int x1 = evt.getX();
	   int y1 = evt.getY();
	   x1 -= x1%10;
	   y1 -= y1%10;

	   float[] P = new float[2];
	   int	point_cnt;

	   /* translate GLUT into GL coordinates */

	   P[0] = x1;
	   P[1] = getSize().height -y1;

	   point_cnt = contours[contour_cnt].point_cnt;

	   contours[contour_cnt].p[point_cnt][0] = P[0];
	   contours[contour_cnt].p[point_cnt][1] = P[1];

	   contours[contour_cnt].point_cnt++;
	   repaint();
	}

	public void donePlaceing()
	{
	   int	point_cnt;

	   point_cnt = contours[contour_cnt].point_cnt;

	   if ( point_cnt > 2 )
	   {
	      /*
	      gl.glBegin( GL_LINES );

	      gl.glVertex2fv( contours[contour_cnt].p[0] );
	      gl.glVertex2fv( contours[contour_cnt].p[point_cnt-1] );

	      gl.glEnd();
	      */
	      contours[contour_cnt].p[point_cnt][0] = -1;

	      contour_cnt++;
	      contours[contour_cnt].point_cnt = 0;
	   }
	}

        public void display()
	{

	   /* Standard GL4Java Init */
	   if( glj.gljMakeCurrent() == false ) 
	   {
		System.out.println("problem in use() method");
		return;
	   }

	   int i,j;
	   int point_cnt;

	   gl.glClear( GL_COLOR_BUFFER_BIT );

	   switch ( mode )
	   {
	   case MODE_DONE:
	      mode=MODE_DEFINE;
	      donePlaceing();
	      repaint();
	      break;

	   case MODE_CLR:
	      mode=MODE_DEFINE;
	      clear();
	      repaint();
	      break;

	   case MODE_DEFINE:
	      /* draw grid */
	      gl.glColor3f( 0.6f, 0.5f, 0.5f );

	      gl.glBegin( GL_LINES );

	      int width = getSize().width;
	      int height = getSize().height;
	      for ( i = 0 ; i < width ; i += 10 )
	      {
		 for ( j = 0 ; j < height ; j += 10 )
		 {
		    gl.glVertex2i( 0, j );
		    gl.glVertex2i( width, j );
		    gl.glVertex2i( i, height );
		    gl.glVertex2i( i, 0 );
		 }
	      }

	      gl.glEnd( );

	      gl.glColor3f( 1.0f, 1.0f, 0.0f );

	      for ( i = 0 ; i <= contour_cnt ; i++ )
	      {
		 point_cnt = contours[i].point_cnt;

		 gl.glBegin( GL_LINES );

		 switch ( point_cnt )
		 {
		 case 0:
		    break;
		 case 1:
		    gl.glVertex2fv( contours[i].p[0] );
		    gl.glVertex2fv( contours[i].p[0] );
		    break;
		 case 2:
		    gl.glVertex2fv( contours[i].p[0] );
		    gl.glVertex2fv( contours[i].p[1] );
		    break;
		 default:
		    --point_cnt;
		    for ( j = 0 ; j < point_cnt ; j++ )
		    {
		       gl.glVertex2fv( contours[i].p[j] );
		       gl.glVertex2fv( contours[i].p[j+1] );
		    }
		    if ( contours[i].p[j+1][0] == -1 )
		    {
		       gl.glVertex2fv( contours[i].p[0] );
		       gl.glVertex2fv( contours[i].p[j] );
		    }
		    break;
		 }

		 gl.glEnd();
	      }

	      // gl.glFinish();
	      break;

	   case MODE_TESSELATE:
	      mode=MODE_TESSELATED;
	      tesse();
	      glj.gljCheckGL();
	      repaint();
	      break;

	   case MODE_TESSELATED:
	      /* draw triangles */
	      gl.glColor3f( 0.7f, 0.7f, 0.0f );
	      gl.glCallList( list_start );

	      gl.glLineWidth( 2.0f );
	      gl.glCallList( list_start + 1 );
	      gl.glLineWidth( 1.0f );

	      // gl.glFlush();
	      glj.gljCheckGL();
	      break;
	   }

	   gl.glColor3f( 1.0f, 1.0f, 0.0f );

	   if(!isAnApplet && doSnapshot)
	   {
	   	doSnapshot=false;
		textgrab.grabPixels(GL_BACK, 
				    0, 0, cvsGetWidth(), cvsGetHeight());
		textgrab.write2File("tessdemo.tga");
	   }
	   /* For your animation dutys ;-) */
	   glj.gljSwap();
	   glj.gljCheckGL();
	   glj.gljFree();
	}

	public void clear( )
	{
	   contour_cnt = 0;
	   contours[0].point_cnt = 0;
	   triangle_cnt = 0;

	   gl.glDeleteLists( list_start, 2 );
	   list_start = 0;
	}

	public void reshape(int w, int h)
	{
	   gl.glViewport( 0, 0, w, h );

	   gl.glMatrixMode( GL_PROJECTION );
	   gl.glLoadIdentity();
	   gl.glOrtho( 0.0, (double)w, 0.0, (double)h, -1.0, 1.0 );

	   gl.glMatrixMode( GL_MODELVIEW );
	   gl.glLoadIdentity();
	}


	public String usage( )
	{
	   return "Use left mouse button to place vertices.\n" +
	          "Select done from the pop-up menu,\n"+
	          "if you are done with placing vertices.\n"+
	          "Select tesselate from the pop-up menu.\n";
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
    
        public void mouseReleased(MouseEvent evt)
        {
        }
    
        // Method required for the implementation of ActionListener
        public void actionPerformed(ActionEvent evt)
        {
            String c = evt.getActionCommand();
            if (c.equals(MENU_TESS))
            {
	    	mode=MODE_TESSELATE;
            }
            else if (c.equals(MENU_CLR))
            {
	    	mode=MODE_CLR;
            }
            else if (c.equals(MENU_DONE))
            {
	    	mode=MODE_DONE;
            }
            else if (c.equals(MENU_SNAPSHOT))
            {
	   	doSnapshot=true;
            }
            if (menu_showing)
            {
                menu_showing = false;
            }
	    repaint();
        }
    }
}
