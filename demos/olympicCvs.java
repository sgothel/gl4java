/**
 * @(#) olympicCvs.java
 */

import gl4java.GLContext;
import gl4java.awt.GLAnimCanvas;
import java.awt.*;
import java.awt.event.*;
import java.lang.Math;


class olympicCvs extends GLAnimCanvas
{
/**
 * Instead of using suspend (JAVA2)
 *
 * @see run
 */      
	protected boolean threadSuspended = true;

	static final double M_PI= 3.141592654;
	static final double M_2PI= 2*3.141592654;

	static final int 
		XSIZE=   100,
		YSIZE=   75,
		RINGS= 5,
		BLUERING= 0,
		BLACKRING= 1,
		REDRING= 2,
		YELLOWRING =3,
		GREENRING =4,
		BACKGROUND =8,
		BLACK = 0,
		RED=1,
		GREEN=2,
		YELLOW=3,
		BLUE=4,
		MAGENTA=5,
		CYAN=6,
		WHITE=7;

	byte rgb_colors[][];
	int mapped_colors[];
	float dests[][];
	float offsets[][];
	float angs[];
	float rotAxis[][];
	int iters[];
	int theTorus;

        float lmodel_ambient[] = {0.0f, 0.0f, 0.0f, 0.0f};
        float lmodel_twoside[] = {0.0f, 0.0f, 0.0f, 0.0f};
        float lmodel_local[] = {0.0f, 0.0f, 0.0f, 0.0f};
        float light0_ambient[] = {0.1f, 0.1f, 0.1f, 1.0f};
        float light0_diffuse[] = {1.0f, 1.0f, 1.0f, 0.0f};
        float light0_position[] = {0.8660254f, 0.5f, 1f, 0f};
        float light0_specular[] = {1.0f, 1.0f, 1.0f, 0.0f};
        float bevel_mat_ambient[] = {0.0f, 0.0f, 0.0f, 1.0f};
        float bevel_mat_shininess[] = {40.0f, 0f, 0f, 0f};
        float bevel_mat_specular[] = {1.0f, 1.0f, 1.0f, 0.0f};
        float bevel_mat_diffuse[] = {1.0f, 0.0f, 0.0f, 0.0f};

	public olympicCvs (int w, int h, 
			   String glClass, String gluClass )
	{
		super(w, h, glClass, gluClass );
	}

        public void preInit() 
	{
	    doubleBuffer = true;
	    stereoView = true; 
	}

        public void init() 
	{
		rgb_colors=new byte[RINGS][3];
		mapped_colors=new int [RINGS];
		dests=new float [RINGS][3];
		offsets=new float[RINGS][3];
		angs=new float[RINGS];
		rotAxis=new float[RINGS][3];
		iters=new int[RINGS];

		int i;
		float top_y = 1.0f;
		float bottom_y = 0.0f;
		float top_z = 0.15f;
		float bottom_z = 0.69f;
		float spacing = 2.5f;

		ReInit();
		for (i = 0; i < RINGS; i++) {
		  rgb_colors[i][0] = rgb_colors[i][1] = rgb_colors[i][2] = (byte)0;
		}
		rgb_colors[BLUERING][2] = (byte)255;
		rgb_colors[REDRING][0] = (byte)255;
		rgb_colors[GREENRING][1] = (byte)255;
		rgb_colors[YELLOWRING][0] = (byte)255;
		rgb_colors[YELLOWRING][1] = (byte)255;
		mapped_colors[BLUERING] = BLUE;
		mapped_colors[REDRING] = RED;
		mapped_colors[GREENRING] = GREEN;
		mapped_colors[YELLOWRING] = YELLOW;
		mapped_colors[BLACKRING] = BLACK;

		dests[BLUERING][0] = -spacing;
		dests[BLUERING][1] = top_y;
		dests[BLUERING][2] = top_z;

		dests[BLACKRING][0] = 0.0f;
		dests[BLACKRING][1] = top_y;
		dests[BLACKRING][2] = top_z;

		dests[REDRING][0] = spacing;
		dests[REDRING][1] = top_y;
		dests[REDRING][2] = top_z;

		dests[YELLOWRING][0] = -spacing / 2.0f;
		dests[YELLOWRING][1] = bottom_y;
		dests[YELLOWRING][2] = bottom_z;

		dests[GREENRING][0] = spacing / 2.0f;
		dests[GREENRING][1] = bottom_y;
		dests[GREENRING][2] = bottom_z;

		theTorus = gl.glGenLists(1);
		gl.glNewList(theTorus, GL_COMPILE);
		FillTorus(0.1f, 8, 1.0f, 25);
		gl.glEndList();

		gl.glEnable(GL_CULL_FACE);
		gl.glCullFace(GL_BACK);
		gl.glEnable(GL_DEPTH_TEST);
		gl.glClearDepth(1.0);

		gl.glLightfv(GL_LIGHT0, GL_AMBIENT, light0_ambient);
		gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, light0_diffuse);
		gl.glLightfv(GL_LIGHT0, GL_SPECULAR, light0_specular);
		gl.glLightfv(GL_LIGHT0, GL_POSITION, light0_position);
		gl.glEnable(GL_LIGHT0);

		gl.glLightModelfv(GL_LIGHT_MODEL_LOCAL_VIEWER, lmodel_local);
		gl.glLightModelfv(GL_LIGHT_MODEL_TWO_SIDE, lmodel_twoside);
		gl.glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
		gl.glEnable(GL_LIGHTING);

		gl.glClearColor(0.5f, 0.5f, 0.5f, 0.0f);

		gl.glMaterialfv(GL_FRONT, GL_AMBIENT, bevel_mat_ambient);
		gl.glMaterialfv(GL_FRONT, GL_SHININESS, bevel_mat_shininess);
		gl.glMaterialfv(GL_FRONT, GL_SPECULAR, bevel_mat_specular);
		gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, bevel_mat_diffuse);

		gl.glColorMaterial(GL_FRONT_AND_BACK, GL_DIFFUSE);
		gl.glEnable(GL_COLOR_MATERIAL);
		gl.glShadeModel(GL_SMOOTH);

		gl.glMatrixMode(GL_PROJECTION);
		glu.gluPerspective(45f, 1.33f, 0.1f, 100.0f);
		gl.glMatrixMode(GL_MODELVIEW);
                glj.gljCheckGL();
	}


	public void display()
	{
	  int i;

	  /* Standard GL4Java Init */
	  if( glj.gljMakeCurrent() == false ) 
	  {
		return;
	  }

	  gl.glPushMatrix();

	  gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	  glu.gluLookAt(0, 0, 10, 0, 0, 0, 0, 1, 0);

	  for (i = 0; i < RINGS; i++) {
	    gl.glColor3ubv(rgb_colors[i]);
	    gl.glPushMatrix();
	    gl.glTranslatef(dests[i][0] + offsets[i][0], dests[i][1] + offsets[i][1],
	      dests[i][2] + offsets[i][2]);
	    gl.glRotatef(angs[i], rotAxis[i][0], rotAxis[i][1], rotAxis[i][2]);
	    gl.glCallList(theTorus);
	    gl.glPopMatrix();
	  }

	  gl.glPopMatrix();
	  glj.gljSwap();
	  glj.gljCheckGL();
	  glj.gljFree();
	  animationCalc(); 
	}

	public void animationCalc() 
	{
	          int i, j;

		  for (i = 0; i < RINGS; i++) {
		    if (iters[i]!=0) {
		      for (j = 0; j < 3; j++) {
			offsets[i][j] = Clamp(iters[i], offsets[i][j]);
		      }
		      angs[i] = Clamp(iters[i], angs[i]);
		      iters[i]--;
		    }
		  }
	          if (iters[0]==0)
		  {
			  shallWeRender=false;
		  }
	}

	public void ReInit()
	{
	  int i;
	  float deviation;

	  deviation = MyRand() / 2;
	  deviation = deviation * deviation;
	  for (i = 0; i < RINGS; i++) {
	    offsets[i][0] = MyRand();
	    offsets[i][1] = MyRand();
	    offsets[i][2] = MyRand();
	    angs[i] = (float) (260.0 * MyRand());
	    rotAxis[i][0] = MyRand();
	    rotAxis[i][1] = MyRand();
	    rotAxis[i][2] = MyRand();
	    iters[i] = ( int ) (deviation * MyRand() + 60.0);
	  }
	}

	public void FillTorus(float rc, int numc, float rt, int numt)
	{
	  int i, j, k;
	  double s, t;
	  float x, y, z;

	  for (i = 0; i < numc; i++) {
	    gl.glBegin(GL_QUAD_STRIP);
	    for (j = 0; j <= numt; j++) {
	      for (k = 1; k >= 0; k--) {
		s = (i + k) % numc + 0.5;
		t = j % numt;

		x = (float) Math.cos(t * M_2PI / numt) * (float) Math.cos(s * M_2PI / numc);
		y = (float) Math.sin(t * M_2PI / numt) * (float) Math.cos(s * M_2PI / numc);
		z = (float) Math.sin(s * M_2PI / numc);
		gl.glNormal3f(x, y, z);

		x = (rt + rc * (float) Math.cos(s * M_2PI / numc)) * (float) Math.cos(t * M_2PI / numt);
		y = (rt + rc * (float) Math.cos(s * M_2PI / numc)) * (float) Math.sin(t * M_2PI / numt);
		z = rc * (float) Math.sin(s * M_2PI / numc);
		gl.glVertex3f(x, y, z);
	      }
	    }
	    gl.glEnd();
	  }
	}

	public float Clamp(int iters_left, float t)
	{

	  if (iters_left < 3) {
	    return 0.0f;
	  }
	  return (iters_left - 2) * t / iters_left;
	}

	public float MyRand()
	{
	  // return 10.0 * (drand48() - 0.5);
	  return (float) ( 10.0 * (Math.random() - 0.5) );
	}

}

