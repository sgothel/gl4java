 
/* 
 * @version 	1.0, 23. JUNI 1998
 */

import gl4java.GLContext;
import gl4java.awt.GLAnimCanvas;
import java.awt.*;
import java.awt.event.*;


class waveCvs extends GLAnimCanvas
  implements MouseListener
{

    class facet {
	public float color[];
	public float normal[];

	public facet()
	{ color = new float[3];
	  normal = new float[3];
	}
    }

    class coord {
	public float vertex[];
	public float normal[];

	public coord()
	{ vertex = new float[3];
	  normal = new float[3];
	}
    }

    class mesh {
	public int widthX, widthY;
	public int numFacets;
	public int numCoords;
	public int frames;
	coord  coords[];
	facet  facets[];
    }

/**
 * The thread  for  referencing Thread (Animation)
 *
 * @see sbin
 */
	boolean rgb;

	int colorIndexes1[];
	int colorIndexes2[];
	int clearMask = GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT;

	boolean smooth = GL_TRUE;
	boolean lighting = GL_TRUE;
	boolean depth = GL_TRUE;
	boolean stepMode = GL_FALSE;
	boolean spinMode = GL_FALSE;
	int contouring = 0;
	int widthX, widthY;

	int checkerSize;
	float height;

	int frames, curFrame = 0, nextFrame = 0;

	mesh theMesh;

	static final float PI =  3.14159265358979323846f;


	byte contourTexture1[] = {
	    (byte) 255, (byte)255, (byte) 255, (byte) 255,
	    (byte) 255, (byte)255, (byte) 255, (byte) 255,
	    (byte) 255, (byte)255, (byte) 255, (byte) 255,
	    (byte) 127, (byte)127, (byte) 127, (byte) 127
	};
	byte contourTexture2[] = {
	    (byte) 255, (byte) 255, (byte) 255, (byte) 255,
	    (byte) 255, (byte) 127, (byte) 127, (byte) 127,
	    (byte) 255, (byte) 127, (byte) 127, (byte) 127,
	    (byte) 255, (byte) 127, (byte) 127, (byte) 127
	};


	public waveCvs(int w, int h, String glClass, String gluClass)
	{
		super( w, h, glClass, gluClass);
	}

	Frame ctrl = null;

	Button ButtonCont; TextField TextCont;
	Button ButtonShade; TextField TextShade;
	Button ButtonLight; TextField TextLight;
	Button ButtonDepth; TextField TextDepth;
	Button ButtonStepMode; TextField TextStepMode;
	Button ButtonStep; TextField TextStep;
	Button ButtonSpinMode; TextField TextSpinMode;

        public void init()
        {
		ctrl = new Frame ("Wave-Features");

		ctrl.setLayout(new GridLayout(7,2));
		ctrl.add ( ButtonCont=new Button("Contour") );
		ctrl.add ( TextCont=new TextField() );
		ctrl.add ( ButtonShade=new Button("Shade") );
		ctrl.add ( TextShade=new TextField() );
		ctrl.add ( ButtonLight=new Button("Light") );
		ctrl.add ( TextLight=new TextField() );
		ctrl.add ( ButtonDepth=new Button("Depth") );
		ctrl.add ( TextDepth=new TextField() );
		ctrl.add ( ButtonStepMode=new Button("StepMod") );
		ctrl.add ( TextStepMode=new TextField() );
		ctrl.add ( ButtonStep=new Button("Step") );
		ctrl.add ( TextStep=new TextField() );
		ctrl.add ( ButtonSpinMode=new Button("SpinMod") );
		ctrl.add ( TextSpinMode=new TextField() );

		TextCont.setEditable(false);
		TextShade.setEditable(false);
		TextLight.setEditable(false);
		TextDepth.setEditable(false);
		TextStepMode.setEditable(false);
		TextStep.setEditable(false);
		TextSpinMode.setEditable(false);

		updateTextFields();

		ctrl.pack();
		ctrl.setVisible( true );

		ButtonCont.addMouseListener(this);
		ButtonShade.addMouseListener(this);
		ButtonLight.addMouseListener(this);
		ButtonDepth.addMouseListener(this);
		ButtonStepMode.addMouseListener(this);
		ButtonStep.addMouseListener(this);
		ButtonSpinMode.addMouseListener(this);

		rgb = GL_TRUE;
		frames = 10;
		widthX = 10;
		widthY = 10;
		checkerSize = 2;
		height = 0.2f;

		/* here we should add and initialize our JAVA components */
		colorIndexes1=new int [3];
		colorIndexes2=new int [3];

		/* Standard gl4java Init */
		if(rgb==GL_TRUE)
			System.out.println("using rgb...");
		else
			System.out.println("using color index...");

		gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

	        gl.glShadeModel(GL_SMOOTH);
		
		gl.glFrontFace(GL_CW);

		gl.glEnable(GL_DEPTH_TEST);

		InitMaterials();
		InitTexture();
		InitMesh();

		gl.glMatrixMode(GL_MODELVIEW);
		gl.glTranslatef(0.0f, 0.4f, -1.8f);
		gl.glScalef(2.0f, 2.0f, 2.0f);
		gl.glRotatef(-35.0f, 1.0f, 0.0f, 0.0f);
		gl.glRotatef(35.0f, 0.0f, 0.0f, 1.0f);
		/* ... and furthet OpenGL init's - like you want to */
                glj.gljCheckGL();
        }

	 public coord GETCOORD(int frame, int x, int y) 
	 {
	   return 
	    theMesh.coords[frame*theMesh.numCoords+(x)+(y)*(theMesh.widthX+1)];
	 }
	 public facet GETFACET(int frame, int x, int y) 
	 { 
	   return 
	    theMesh.facets[frame*theMesh.numFacets+(x)+(y)*(theMesh.widthX)];
	 }

	public void display()
	{
	    coord coord_;
	    facet facet_;
	    float lastColor[] = null;
	    float thisColor[] = null;
	    int i, j;

	    /* Standard gl4java Init */
	    if( glj.gljMakeCurrent() == false ) 
	    {
		return;
	    }

	    gl.glClear(clearMask);

	    if (nextFrame>0 || stepMode==GL_FALSE) {
		curFrame++;
	    }
	    if (curFrame >= theMesh.frames) {
		curFrame = 0;
	    }

	    if ((nextFrame>0 || stepMode==GL_FALSE) && spinMode==GL_TRUE) 
	    {
		gl.glRotatef(5.0f, 0.0f, 0.0f, 1.0f);
	    }
	    nextFrame = 0;

	    for (i = 0; i < theMesh.widthX; i++) {
		gl.glBegin(GL_QUAD_STRIP);
		lastColor = null;
		for (j = 0; j < theMesh.widthY; j++) {
		    facet_ = GETFACET(curFrame, i, j);
		    if (smooth==GL_FALSE && lighting==GL_TRUE) 
		    {
			gl.glNormal3fv(facet_.normal);
		    }
		    if (lighting==GL_TRUE) {
			if (rgb==GL_TRUE) {
			    thisColor = facet_.color;
			    gl.glColor3fv(facet_.color);
			} else {
			    thisColor = facet_.color;
			    gl.glMaterialfv(GL_FRONT_AND_BACK, GL_COLOR_INDEXES, 
					 facet_.color);
			}
		    } else {
			if (rgb==GL_TRUE) {
			    thisColor = facet_.color;
			    gl.glColor3fv(facet_.color);
			} else {
			    thisColor = facet_.color;
			    gl.glIndexf(facet_.color[1]);
			}
		    }

		    if (lastColor==null || 
		        (thisColor[0] != lastColor[0] && smooth==GL_TRUE)
		       ) 
		    {
			if (lastColor!=null) {
			    gl.glEnd();
			    gl.glBegin(GL_QUAD_STRIP);
			}
			coord_ = GETCOORD(curFrame, i, j);
			if (smooth==GL_TRUE && lighting==GL_TRUE) 
			{
			    gl.glNormal3fv(coord_.normal);
			}
			gl.glVertex3fv(coord_.vertex);

			coord_ = GETCOORD(curFrame, i+1, j);
			if (smooth==GL_TRUE && lighting==GL_TRUE) 
			{
			    gl.glNormal3fv(coord_.normal);
			}
			gl.glVertex3fv(coord_.vertex);
		    }

		    coord_ = GETCOORD(curFrame, i, j+1);
		    if (smooth==GL_TRUE && lighting==GL_TRUE) {
			gl.glNormal3fv(coord_.normal);
		    }
		    gl.glVertex3fv(coord_.vertex);

		    coord_ = GETCOORD(curFrame, i+1, j+1);
		    if (smooth==GL_TRUE && lighting==GL_TRUE) {
			gl.glNormal3fv(coord_.normal);
		    }
		    gl.glVertex3fv(coord_.vertex);

		    lastColor = thisColor;
		}
		gl.glEnd();
	    }

	    glj.gljSwap();
	    glj.gljCheckGL();
	    glj.gljFree();
	}

	public void InitMesh()
	{
	    coord coord_;
	    facet facet_;
	    float dp1[], dp2[];
	    float pt1[], pt2[], pt3[];
	    float angle, d, x, y;
	    int numFacets, numCoords, frameNum, i, j;

            dp1=new float[3];
            dp2=new float[3];

            theMesh = new mesh();
	    theMesh.widthX = widthX;
	    theMesh.widthY = widthY;
	    theMesh.frames = frames;

	    numFacets = widthX * widthY;
	    numCoords = (widthX + 1) * (widthY + 1);

	    theMesh.numCoords = numCoords;
	    theMesh.numFacets = numFacets;

	    theMesh.coords = new coord[frames*numCoords];
	    for(i=0; i<frames*numCoords; i++)
	      theMesh.coords[i]=new coord();

	    theMesh.facets = new facet[frames*numFacets];
	    for(i=0; i<frames*numFacets; i++)
	      theMesh.facets[i]=new facet();

	    for (frameNum = 0; frameNum < frames; frameNum++) {
		for (i = 0; i <= widthX; i++) {
		    x = i / (float)widthX;
		    for (j = 0; j <= widthY; j++) {
			y = j / (float)widthY;

			d = (float) Math.sqrt(x*x+y*y);
			if (d == 0.0) {
			    d = 0.0001f;
			}
			angle = 2 * (float)PI * d + 
			        (2 * (float)PI / frames * frameNum);

			coord_ = GETCOORD(frameNum, i, j);

			coord_.vertex[0] = x - 0.5f;
			coord_.vertex[1] = y - 0.5f;
			coord_.vertex[2] = (height - height * d) * 
			                   (float)Math.cos(angle);

			coord_.normal[0] = -(height / d) * x * ((1 - d) * 2 * 
			                   PI * (float)Math.sin(angle) + 
					  (float)Math.cos(angle));
			coord_.normal[1] = -(height / d) * y * ((1 - d) * 2 * 
			                   PI * (float)Math.sin(angle) + 
					   (float)Math.cos(angle));
			coord_.normal[2] = -1;

			d = 1.0f / 
			    (float)Math.sqrt(coord_.normal[0]*coord_.normal[0]+
				       coord_.normal[1]*coord_.normal[1]+1);
			coord_.normal[0] *= d;
			coord_.normal[1] *= d;
			coord_.normal[2] *= d;
		    }
		}
		for (i = 0; i < widthX; i++) {
		    for (j = 0; j < widthY; j++) {
			facet_ = GETFACET(frameNum, i, j);
			if ( ( ( (i/checkerSize)%2 ) ^ (j/checkerSize) %2 )
			     >0
			   ) 
			{
			    if (rgb==GL_TRUE) {
				facet_.color[0] = 1.0f;
				facet_.color[1] = 0.2f;
				facet_.color[2] = 0.2f;
			    } else {
				facet_.color[0] = colorIndexes1[0];
				facet_.color[1] = colorIndexes1[1];
				facet_.color[2] = colorIndexes1[2];
			    }
			} else {
			    if (rgb==GL_TRUE) {
				facet_.color[0] = 0.2f;
				facet_.color[1] = 1.0f;
				facet_.color[2] = 0.2f;
			    } else {
				facet_.color[0] = colorIndexes2[0];
				facet_.color[1] = colorIndexes2[1];
				facet_.color[2] = colorIndexes2[2];
			    }
			}
			pt1 = GETCOORD(frameNum, i, j).vertex;
			pt2 = GETCOORD(frameNum, i, j+1).vertex;
			pt3 = GETCOORD(frameNum, i+1, j+1).vertex;

			dp1[0] = pt2[0] - pt1[0];
			dp1[1] = pt2[1] - pt1[1];
			dp1[2] = pt2[2] - pt1[2];

			dp2[0] = pt3[0] - pt2[0];
			dp2[1] = pt3[1] - pt2[1];
			dp2[2] = pt3[2] - pt2[2];

			facet_.normal[0] = dp1[1] * dp2[2] - dp1[2] * dp2[1];
			facet_.normal[1] = dp1[2] * dp2[0] - dp1[0] * dp2[2];
			facet_.normal[2] = dp1[0] * dp2[1] - dp1[1] * dp2[0];

			d = 1.0f / (float)Math.sqrt(facet_.normal[0]*facet_.normal[0]+
				       facet_.normal[1]*facet_.normal[1]+
				       facet_.normal[2]*facet_.normal[2]);

			facet_.normal[0] *= d;
			facet_.normal[1] *= d;
			facet_.normal[2] *= d;
		    }
		}
	    }
	}

	static float ambient[] = {0.1f, 0.1f, 0.1f, 1.0f};
	static float diffuse[] = {0.5f, 1.0f, 1.0f, 1.0f};
	static float position[] = {90.0f, 90.0f, 150.0f, 0.0f};
	static float front_mat_shininess[] = {60.0f, 0f, 0f, 0f};
	static float front_mat_specular[] = {0.2f, 0.2f, 0.2f, 1.0f};
	static float front_mat_diffuse[] = {0.5f, 0.28f, 0.38f, 1.0f};
	static float back_mat_shininess[] = {60.0f, 0f, 0f, 0f};
	static float back_mat_specular[] = {0.5f, 0.5f, 0.2f, 1.0f};
	static float back_mat_diffuse[] = {1.0f, 1.0f, 0.2f, 1.0f};
	static float lmodel_ambient[] = {1.0f, 1.0f, 1.0f, 1.0f};
	static float lmodel_twoside[] = {1f, 0f, 0f, 0f};

	public void InitMaterials()
	{
	    gl.glMatrixMode(GL_PROJECTION);
	    glu.gluPerspective(450, 1.0, 0.5, 10.0);

	    gl.glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
	    gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
	    gl.glLightfv(GL_LIGHT0, GL_POSITION, position);
	    gl.glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
	    gl.glLightModelfv(GL_LIGHT_MODEL_TWO_SIDE, lmodel_twoside);
	    gl.glEnable(GL_LIGHTING);
	    gl.glEnable(GL_LIGHT0);
	    
	    gl.glMaterialfv(GL_FRONT, GL_SHININESS, front_mat_shininess);
	    gl.glMaterialfv(GL_FRONT, GL_SPECULAR, front_mat_specular);
	    gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, front_mat_diffuse);
	    gl.glMaterialfv(GL_BACK, GL_SHININESS, back_mat_shininess);
	    gl.glMaterialfv(GL_BACK, GL_SPECULAR, back_mat_specular);
	    gl.glMaterialfv(GL_BACK, GL_DIFFUSE, back_mat_diffuse);
	    if (rgb==GL_TRUE) {
		gl.glColorMaterial(GL_FRONT_AND_BACK, GL_DIFFUSE);
	    }

	    if (rgb==GL_TRUE) {
		gl.glEnable(GL_COLOR_MATERIAL);
	    } /* else {
		SetColorMap();
	    } */
	}

	public void InitTexture()
	{

	    gl.glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	    gl.glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	    gl.glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	    gl.glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	    gl.glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
	}

	// Methods required for the implementation of MouseListener
	public void mouseClicked( MouseEvent evt )
	{
	    Component comp = evt.getComponent();

	    if( cvsIsInit()==false ) return ;

	    if( glj.gljMakeCurrent() == false ) 
	    {
		    return;
	    } else {
		    gl.glFinish();
	    }

	    if(comp.equals(ButtonCont)) 
	    {
		contouring++;
		if (contouring == 1) {
		    float map[];
		    map=new float[4];
		    map[0]=0f;
		    map[1]=0f;
		    map[2]=20f;
		    map[3]=0f;

		    gl.glTexImage2D(GL_TEXTURE_2D, 0, 3, 4, 4, 0, GL_LUMINANCE,
				 GL_UNSIGNED_BYTE, contourTexture1);
		    gl.glTexGeni(GL_S, GL_TEXTURE_GEN_MODE, GL_OBJECT_LINEAR);
		    gl.glTexGeni(GL_T, GL_TEXTURE_GEN_MODE, GL_OBJECT_LINEAR);
		    gl.glTexGenfv(GL_S, GL_OBJECT_PLANE, map);
		    gl.glTexGenfv(GL_T, GL_OBJECT_PLANE, map);
		    gl.glEnable(GL_TEXTURE_2D);
		    gl.glEnable(GL_TEXTURE_GEN_S);
		    gl.glEnable(GL_TEXTURE_GEN_T);
		} else if (contouring == 2) {
		    float map[];
		    map=new float[4];
		    map[0]=0f;
		    map[1]=0f;
		    map[2]=20f;
		    map[3]=0f;

		    gl.glTexGeni(GL_S, GL_TEXTURE_GEN_MODE, GL_EYE_LINEAR);
		    gl.glTexGeni(GL_T, GL_TEXTURE_GEN_MODE, GL_EYE_LINEAR);
		    gl.glPushMatrix();
		    gl.glMatrixMode(GL_MODELVIEW);
		    gl.glLoadIdentity();
		    gl.glTexGenfv(GL_S, GL_EYE_PLANE, map);
		    gl.glTexGenfv(GL_T, GL_EYE_PLANE, map);
		    gl.glPopMatrix();
		} else {
		    contouring = 0;
		    gl.glDisable(GL_TEXTURE_GEN_S);
		    gl.glDisable(GL_TEXTURE_GEN_T);
		    gl.glDisable(GL_TEXTURE_2D);
		}
	    }
	    else if(comp.equals(ButtonShade)) 
	    {
		smooth = (smooth==GL_TRUE)?GL_FALSE:GL_TRUE;
		if (smooth==GL_TRUE) {
		    gl.glShadeModel(GL_SMOOTH);
		} else {
		    gl.glShadeModel(GL_FLAT);
		}
	    }
	    else if(comp.equals(ButtonLight)) 
	    {
		lighting = (lighting==GL_TRUE)?GL_FALSE:GL_TRUE;
		if (lighting==GL_TRUE) {
		    gl.glEnable(GL_LIGHTING);
		    gl.glEnable(GL_LIGHT0);
		    if (rgb==GL_TRUE) {
			gl.glEnable(GL_COLOR_MATERIAL);
		    }
		} else {
		    gl.glDisable(GL_LIGHTING);
		    gl.glDisable(GL_LIGHT0);
		    if (rgb==GL_TRUE) {
			gl.glDisable(GL_COLOR_MATERIAL);
		    }
		}
	    }
	    else if(comp.equals(ButtonDepth)) 
	    {
		depth = (depth==GL_TRUE)?GL_FALSE:GL_TRUE;
		if (depth==GL_TRUE) {
		    gl.glEnable(GL_DEPTH_TEST);
		    clearMask |= GL_DEPTH_BUFFER_BIT;
		} else {
		    gl.glDisable(GL_DEPTH_TEST);
		    clearMask &= ~GL_DEPTH_BUFFER_BIT;
		}
	    }
	    else if(comp.equals(ButtonStepMode)) 
	    {
		stepMode = (stepMode==GL_TRUE)?GL_FALSE:GL_TRUE;
		if (stepMode==GL_TRUE) {
		    stop();
		} else {
		    start();
		}
	    }
	    else if(comp.equals(ButtonStep)) 
	    {
		if (stepMode==GL_TRUE) {
		    nextFrame = 1;
		}
	    }
	    else if(comp.equals(ButtonSpinMode)) 
	    {
		spinMode = (spinMode==GL_TRUE)?GL_FALSE:GL_TRUE;
	    }

	    updateTextFields();

	    gl.glFinish();
	    glj.gljFree();

	    repaint();
	}

	public void updateTextFields()
	{
		TextCont.setText(String.valueOf(contouring));

		TextShade.setText((smooth==GL_TRUE)?"ON":"OFF");

		TextLight.setText((lighting==GL_TRUE)?"ON":"OFF");

		TextDepth.setText((depth==GL_TRUE)?"ON":"OFF");

		TextStepMode.setText((stepMode==GL_TRUE)?"ON":"OFF");

		TextStep.setText((stepMode==GL_TRUE)?"ON":"OFF");

		TextSpinMode.setText((spinMode==GL_TRUE)?"ON":"OFF");
	}

	public void mouseEntered( MouseEvent evt )
	{
	}

	public void mouseExited( MouseEvent evt )
	{
	}

	public void mousePressed( MouseEvent evt )
	{
	}

	public void mouseReleased( MouseEvent evt )
	{
	}

	 public void cvsDispose()
	 {
	 	if(ctrl!=null)
		{
			ctrl.dispose();
		}
		super.cvsDispose();
	 }
}
