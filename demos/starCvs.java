/*
 * Leo Chan
 *
 * October 1995
 *
 * -----------
 *
 * Sven Goethel
 * September 1997
 *
 * @version 	1.0, 23. JUNI 1998
 */


import gl4java.awt.*;
import java.awt.*;
import java.awt.event.*;


class starCvs extends GLAnimCanvas 
{
	protected int FrameStep =0;

  	float lmodel_twoside[] = null;
  	float lmodel_local[] = null;
  	float lmodel_ambient[] = null;

	public starCvs(int w, int h, String glClass, String gluClass)
	{
		super( w, h, glClass, gluClass);
	}

        public void init()
        {
		  lmodel_twoside= new float[4];
		  lmodel_twoside[0]=0f;
		  lmodel_twoside[1]=0f;
		  lmodel_twoside[2]=0f;
		  lmodel_twoside[3]=0f;
		  lmodel_local= new float[4];
		  lmodel_local[0]=0f;
		  lmodel_local[1]=0f;
		  lmodel_local[2]=0f;
		  lmodel_local[3]=0f;
		  lmodel_ambient= new float[4];
		  lmodel_ambient[0]=0f;
		  lmodel_ambient[1]=0f;
		  lmodel_ambient[2]=0f;
		  lmodel_ambient[3]=0f;

		/* initialize the widget */
		gl.glClearColor( 0.8f, 0.8f, 1.0f, 1.0f );
		gl.glFrontFace( GL_CW );
		gl.glEnable( GL_DEPTH_TEST );

		int width  = cvsGetWidth();
		int height = cvsGetHeight();

		gl.glViewport( 0, 0, width, height );
	
		gl.glMatrixMode( GL_PROJECTION );
		gl.glLoadIdentity();

		double fov    = 45.0,
		aspect = width / height,
		near   = 1.0,
		far    = 200.0;
		glu.gluPerspective( fov, aspect, near, far );

		gl.glMatrixMode( GL_MODELVIEW );
		gl.glLoadIdentity();
	
		/* render three rotated cylinders */
		gl.glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );


		float lightArr[] = new float[4];
		float farr[] = new float[4];

		/* enable lighting */

		lightArr[0] = 1.0f; lightArr[1] = 1.0f; 
		lightArr[2] = 1.0f; lightArr[3] = 1.0f;
		gl.glLightfv( GL_LIGHT0, GL_DIFFUSE, lightArr );
		lightArr[0] = 90.0f; lightArr[1] = 90.0f; 
		lightArr[2] = 0.0f; lightArr[3] = 0.0f;
		gl.glLightfv( GL_LIGHT0, GL_POSITION, lightArr );
		lightArr[0] = 0.1f; lightArr[1] = 0.1f; 
		lightArr[2] = 0.1f; lightArr[3] = 1.0f;
		gl.glLightfv( GL_LIGHT0, GL_AMBIENT, lightArr );
		gl.glLightModeli( GL_LIGHT_MODEL_TWO_SIDE, 
					1 );
		gl.glEnable( GL_LIGHT0 );

		/*
		gl.glLightModelfv(GL_LIGHT_MODEL_LOCAL_VIEWER, lmodel_local);
		gl.glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
		*/
		gl.glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, 1);
		gl.glEnable( GL_LIGHTING );

	
		gl.glMaterialf( GL_FRONT, GL_SHININESS, 30.0f );
	
		farr[0] = 0.0f; farr[1] = 0.0f; farr[2] = 0.0f; farr[3] = 1.0f;
		gl.glMaterialfv( GL_FRONT, GL_SPECULAR, farr );

		farr[0] = 0.0f; farr[1] = 1.0f; farr[2] = 0.0f; farr[3] = 1.0f;
		gl.glMaterialfv( GL_FRONT, GL_DIFFUSE, farr );

		gl.glMaterialf( GL_BACK, GL_SHININESS, 50.0f );

		farr[0] = 0.0f; farr[1] = 0.0f; farr[2] = 1.0f; farr[3] = 1.0f;
		gl.glMaterialfv( GL_BACK, GL_SPECULAR, farr );

		farr[0] = 1.0f; farr[1] = 1.0f; farr[2] = 0.0f; farr[3] = 1.0f;
		gl.glMaterialfv( GL_BACK, GL_DIFFUSE, farr );
	}

	public void animationCalc() 
	{
	      FrameStep+=1;
	      if(FrameStep>100000) FrameStep=0;
	}

        public void display()
        {
	    /* Standard gl4java Init */
	    if( glj.gljMakeCurrent() == false ) 
	    {
		System.out.println("problem in use() method");
		return;
	    }

	    gl.glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
	    gl.glPushMatrix();
	    gl.glTranslatef( 0.0f, 0.0f, -65.0f );
	    gl.glRotatef(  40.0f+(2f*FrameStep), 0.0f, 0.0f, 1.0f );
	    gl.glRotatef( 190.0f+(2f*FrameStep), 0.0f, 1.0f, 0.0f );
	    gl.glRotatef( 200.0f+(FrameStep*2f), 1.0f, 0.0f, 0.0f );
	    gl.glPushMatrix();
	    gl.glScalef( 1.0f, 1.0f, 10.0f );
	    drawCylinder();
	    gl.glPopMatrix();
	    gl.glPushMatrix();
	    gl.glRotatef( 90.0f, 0.0f, 1.0f, 0.0f );
	    gl.glScalef( 1.0f, 1.0f, 10.0f );
	    drawCylinder();
	    gl.glPopMatrix();
	    gl.glPushMatrix();
	    gl.glRotatef( 90.0f, 1.0f, 0.0f, 0.0f );
	    gl.glScalef( 1.0f, 1.0f, 10.0f );
	    drawCylinder();
	    gl.glPopMatrix();
	    gl.glPopMatrix();

	    glj.gljSwap();
	    glj.gljCheckGL();
	    glj.gljFree();
	    animationCalc() ;
        }

	public void drawCylinder() 
	{
	    gl.glBegin( GL_TRIANGLE_STRIP );
	    gl.glNormal3f ( 1.0f, 0.0f, -5.0f);
	    gl.glVertex3f ( 1.0f, 0.0f, -5.0f);
	    gl.glNormal3f ( 1.0f, 0.0f, -5.0f);
	    gl.glVertex3f (1.000000f, 0.000000f, 5.000000f);
	    gl.glNormal3f (0.707107f, 0.707107f, -5.000000f);
	    gl.glVertex3f (0.707107f, 0.707107f, -5.000000f);
	    gl.glNormal3f (0.707107f, 0.707107f, -5.000000f);
	    gl.glVertex3f (0.707107f, 0.707107f, 5.000000f);
	    gl.glNormal3f (0.000000f, 1.000000f, -5.000000f);
	    gl.glVertex3f (0.000000f, 1.000000f, -5.000000f);
	    gl.glNormal3f (0.000000f, 1.000000f, -5.000000f);
	    gl.glVertex3f (0.000000f, 1.000000f, 5.000000f);
	    gl.glNormal3f (-0.707107f, 0.707107f, -5.00000f);
	    gl.glVertex3f (-0.707107f, 0.707107f, -5.00000f);
	    gl.glNormal3f (-0.707107f, 0.707107f, -5.00000f);
	    gl.glVertex3f (-0.707107f, 0.707107f, 5.00000f);
	    gl.glNormal3f (-1.000000f, 0.000000f, -5.000000f);
	    gl.glVertex3f (-1.000000f, 0.000000f, -5.000000f);
	    gl.glNormal3f (-1.000000f, 0.000000f, -5.000000f);
	    gl.glVertex3f (-1.000000f, 0.000000f, 5.00000f);
	    gl.glNormal3f (-0.707107f, -0.707107f, -5.000000f);
	    gl.glVertex3f (-0.707107f, -0.707107f, -5.000000f);
	    gl.glNormal3f (-0.707107f, -0.707107f, -5.000000f);
	    gl.glVertex3f (-0.707107f, -0.707107f, 5.00000f);
	    gl.glNormal3f (0.000000f, -1.000000f, -5.000000f);
	    gl.glVertex3f (0.000000f, -1.000000f, -5.000000f);
	    gl.glNormal3f (0.000000f, -1.000000f, -5.000000f);
	    gl.glVertex3f (0.000000f, -1.000000f, 5.00000f);
	    gl.glNormal3f (0.707107f, -0.707107f, -5.00000f);
	    gl.glVertex3f (0.707107f, -0.707107f, -5.00000f);
	    gl.glNormal3f (0.707107f, -0.707107f, -5.00000f);
	    gl.glVertex3f (0.707107f, -0.707107f, 5.000000f);
	    gl.glNormal3f (1.000000f, 0.000000f, -5.00000f);
	    gl.glVertex3f (1.000000f, 0.000000f, -5.00000f);
	    gl.glNormal3f (1.000000f, 0.000000f, -5.00000f);
	    gl.glVertex3f (1.000000f, 0.000000f, 5.00000f);
	    gl.glEnd();
	}
}

