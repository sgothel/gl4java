



#include <stdio.h>
#include <stdlib.h>

#include <GL/gl.h>
#include <GL/glut.h>

double width = 250;
double height = 250;
double fps = 25.0;

  static float lmodel_twoside[] =
  {GL_FALSE};
  static float lmodel_local[] =
  {GL_FALSE};
  static float lmodel_ambient[] =
  {0.0, 0.0, 0.0, 0.0};

void CylinderDraw( ) 
{
    glBegin( GL_TRIANGLE_STRIP );
    glNormal3f ( 1.0, 0.0, -5.0 );
    glVertex3f ( 1.0, 0.0, -5.0 );
    glNormal3f ( 1.0, 0.0, -5.0 );
    glVertex3f (1.000000, 0.000000, 5.000000);
    glNormal3f (0.707107, 0.707107, -5.000000);
    glVertex3f (0.707107, 0.707107, -5.000000);
    glNormal3f (0.707107, 0.707107, -5.000000);
    glVertex3f (0.707107, 0.707107, 5.000000);
    glNormal3f (0.000000, 1.000000, -5.000000);
    glVertex3f (0.000000, 1.000000, -5.000000);
    glNormal3f (0.000000, 1.000000, -5.000000);
    glVertex3f (0.000000, 1.000000, 5.000000);
    glNormal3f (-0.707107, 0.707107, -5.00000);
    glVertex3f (-0.707107, 0.707107, -5.00000);
    glNormal3f (-0.707107, 0.707107, -5.00000);
    glVertex3f (-0.707107, 0.707107, 5.00000);
    glNormal3f (-1.000000, 0.000000, -5.000000);
    glVertex3f (-1.000000, 0.000000, -5.000000);
    glNormal3f (-1.000000, 0.000000, -5.000000);
    glVertex3f (-1.000000, 0.000000, 5.00000);
    glNormal3f (-0.707107, -0.707107, -5.000000);
    glVertex3f (-0.707107, -0.707107, -5.000000);
    glNormal3f (-0.707107, -0.707107, -5.000000);
    glVertex3f (-0.707107, -0.707107, 5.00000);
    glNormal3f (0.000000, -1.000000, -5.000000);
    glVertex3f (0.000000, -1.000000, -5.000000);
    glNormal3f (0.000000, -1.000000, -5.000000);
    glVertex3f (0.000000, -1.000000, 5.00000);
    glNormal3f (0.707107, -0.707107, -5.00000);
    glVertex3f (0.707107, -0.707107, -5.00000);
    glNormal3f (0.707107, -0.707107, -5.00000);
    glVertex3f (0.707107, -0.707107, 5.000000);
    glNormal3f (1.000000, 0.000000, -5.00000);
    glVertex3f (1.000000, 0.000000, -5.00000);
    glNormal3f (1.000000, 0.000000, -5.00000);
    glVertex3f (1.000000, 0.000000, 5.00000);
    glEnd();
}

void reshape(int width, int height)
{
	double fov    = 45.0,
	aspect = width / height,
	near_   = 1.0,
	far_    = 200.0;

	glViewport( 0, 0, width, height );

	glMatrixMode( GL_PROJECTION );
	glLoadIdentity();

	gluPerspective( fov, aspect, near_, far_ );

	glMatrixMode( GL_MODELVIEW );
	glLoadIdentity();

}

void display()
{
        static int FrameStep = 0;

	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
	glPushMatrix();
	glTranslatef( 0.0, 0.0, -65.0 );
	glRotatef(  40.0+(2*FrameStep), 0.0, 0.0, 1.0 );
	glRotatef( 190.0+(2*FrameStep), 0.0, 1.0, 0.0 );
	glRotatef( 200.0+(FrameStep*2), 1.0, 0.0, 0.0 );
	glPushMatrix();
	glScalef( 1.0, 1.0, 10.0 );
	CylinderDraw( );
	glPopMatrix();
	glPushMatrix();
	glRotatef( 90.0, 0.0, 1.0, 0.0 );
	glScalef( 1.0, 1.0, 10.0 );
	CylinderDraw( );
	glPopMatrix();
	glPushMatrix();
	glRotatef( 90.0, 1.0, 0.0, 0.0 );
	glScalef( 1.0, 1.0, 10.0 );
	CylinderDraw( );
	glPopMatrix();
	glPopMatrix();

	glutSwapBuffers();
	/* glFlush(); */

	FrameStep++;

	if(FrameStep>100000) FrameStep=0;

}

void init()
{
	double fov    = 45.0;
	double aspect = width / height ;
	double near_   = 1.0;
	double far_    = 200.0;
	float lightArr[4];
	float farr[4];

	/* initialize the widget */
	glClearColor( 0.8f, 0.8f, 1.0f, 1.0f );
	glFrontFace( GL_CW );
	glEnable( GL_DEPTH_TEST );

	glViewport( 0, 0, width, height );

	glMatrixMode( GL_PROJECTION );
	glLoadIdentity();

	gluPerspective( fov, aspect, near_, far_ );

	/* render three rotated cylinders */
	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

	glMatrixMode( GL_MODELVIEW );
	glLoadIdentity();

	/* enable lighting */
	lightArr[0] = 1.0f; lightArr[1] = 1.0f;
	lightArr[2] = 1.0f; lightArr[3] = 1.0f;
	glLightfv( GL_LIGHT0, GL_DIFFUSE, lightArr );
	lightArr[0] = 90.0f; lightArr[1] = 90.0f;
	lightArr[2] = 0.0f; lightArr[3] = 0.0f;
	glLightfv( GL_LIGHT0, GL_POSITION, lightArr );
	lightArr[0] = 0.1f; lightArr[1] = 0.1f;
	lightArr[2] = 0.1f; lightArr[3] = 1.0f;
	glLightfv( GL_LIGHT0, GL_AMBIENT, lightArr );
	glEnable( GL_LIGHT0 );

		/*
		glLightModelfv(GL_LIGHT_MODEL_LOCAL_VIEWER, lmodel_local);
		glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
		*/
		glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, 1);
		glEnable( GL_LIGHTING );

		/*
        glLightModelfv(GL_LIGHT_MODEL_LOCAL_VIEWER, lmodel_local);
        glLightModelfv(GL_LIGHT_MODEL_TWO_SIDE, lmodel_twoside);
        glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
	glEnable( GL_LIGHTING );
	*/


	glMaterialf( GL_FRONT, GL_SHININESS, 30.0f );

	farr[0] = 0.0f; farr[1] = 0.0f; farr[2] = 0.0f; farr[3] = 1.0f;
	glMaterialfv( GL_FRONT, GL_SPECULAR, farr );

	farr[0] = 0.0f; farr[1] = 1.0f; farr[2] = 0.0f; farr[3] = 1.0f;
	glMaterialfv( GL_FRONT, GL_DIFFUSE, farr );

	glMaterialf( GL_BACK, GL_SHININESS, 50.0f );

	farr[0] = 0.0f; farr[1] = 0.0f; farr[2] = 1.0f; farr[3] = 1.0f;
	glMaterialfv( GL_BACK, GL_SPECULAR, farr );

	farr[0] = 1.0f; farr[1] = 1.0f; farr[2] = 0.0f; farr[3] = 1.0f;
	glMaterialfv( GL_BACK, GL_DIFFUSE, farr );

}

void idle()
{
	glutPostRedisplay();
}

int main( int argc, char **argv)
{
	fprintf(stderr,"1\n");
	if(argc>2 && strcmp(argv[1], "-fps")==0)
	{
		fprintf(stderr,"2\n");
		fps = atof(argv[2]);
		argc-=2;
		argv+=2;
	}
	fprintf(stderr, "Frame Per Secounds %d\n ( will be ignored this time )\n", fps);

	glutInit(&argc, argv);
	glutInitDisplayMode (   GLUT_DOUBLE 
			      | GLUT_DEPTH
			      | GLUT_RGBA 
			    );
        glutInitWindowSize(width,height);
	glutInitWindowPosition(100,100);
	glutCreateWindow("OpenGL GLUT/NATIVE");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutIdleFunc(idle);
	glutMainLoop();
	return 0;
} 

