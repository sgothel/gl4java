//-? IMPORTS
import gl4java.awt.GLCanvas;
import gl4java.GLContext;
import gl4java.utils.textures.*;

import javax.swing.*;
import javax.swing.event.*;
import javax.swing.border.*;

import java.awt.*;
import java.awt.Color.*;
import java.awt.event.*;
import java.applet.*;
import java.io.*;
import java.net.*;

//// TEST
// UniversalFileAccess -> netscape
/////////////////////////////////////////////////////////////////
public class testTextPPM1 extends JApplet 
{

//-? VARIABLES GLOBALS APPLET
	JPanel				panelControl,panelDibuix;
	JButton				botoShading,botoTexture;
	dibuix				dib;	
//  ActionsListener		Actions;
//	SliderListener		Sliders;

	//-? VARIABLES de CONTROL	
	double obsX=0 , obsY=0 , obsZ=1.0;	//-? POSICIO OBSERVADOR
	JSlider				sl_alfaUsu,sl_betaUsu;
	
	//-? VARIABLES GL
	int					tipusPolMode;

	boolean isAnApplet = true;

//---------------------------------------------------------------

public void init() {


//	Actions = new ActionsListener();		

	panelDibuix  = iniDibuix();
	panelControl = iniControl();


	getContentPane().setLayout(new BoxLayout(getContentPane(),BoxLayout.Y_AXIS));
        getContentPane().add(panelControl);
        getContentPane().add(panelDibuix);    

	getContentPane().repaint();		
}
	public static void main( String args[] ) {
		testTextPPM1 applet = 
		         new testTextPPM1();

		Frame f = new Frame("testTextPPM1");

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
		applet.isAnApplet = false;
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

//---------------------------------------------------------------	
public void paint(Graphics g) {							
	getContentPane().repaint();
	dib.display();
}		

//---------------------------------------------------------------
public JPanel iniControl() {

	panelControl = new JPanel();

	sl_alfaUsu = new JSlider(JSlider.HORIZONTAL,-180,180,0);
	sl_alfaUsu.setMajorTickSpacing(45);
	sl_alfaUsu.setMinorTickSpacing(15);
	sl_alfaUsu.setPaintTicks(true);
	sl_alfaUsu.setPaintLabels(true);			
	sl_alfaUsu.setPreferredSize(new Dimension(350,50));
	sl_alfaUsu.setMaximumSize(new Dimension(350,50));
	sl_alfaUsu.setMinimumSize(new Dimension(350,50));

	sl_betaUsu = new JSlider(JSlider.HORIZONTAL,-90,90,0);
	sl_betaUsu.setMajorTickSpacing(30);
	sl_betaUsu.setMinorTickSpacing(10);
	sl_betaUsu.setPaintTicks(true);
	sl_betaUsu.setPaintLabels(true);			
	sl_betaUsu.setPreferredSize(new Dimension(350,50));
	sl_betaUsu.setMaximumSize(new Dimension(350,50));
	sl_betaUsu.setMinimumSize(new Dimension(350,50));	
	
	sl_alfaUsu.addChangeListener(dib);
	sl_betaUsu.addChangeListener(dib);

	//-? PANEL DE BOTONS
	JPanel panelBotons = new JPanel();
	panelBotons.setLayout(new BoxLayout(panelBotons,BoxLayout.X_AXIS));
	
	botoShading = new JButton("Shading Model");
    botoShading.addActionListener(dib);
    botoShading.setActionCommand("bS");

	botoTexture = new JButton("Textures");
    botoTexture.addActionListener(dib);
    botoTexture.setActionCommand("bT");

	panelBotons.add(botoShading);
	panelBotons.add(botoTexture);

	//-? PANEL GLOBAL DE CONTROLS
	panelControl.setLayout(new BoxLayout(panelControl,BoxLayout.Y_AXIS));
	panelControl.add(sl_alfaUsu);
	panelControl.add(sl_betaUsu);
	panelControl.add(panelBotons);
	
	return panelControl;
}

//---------------------------------------------------------------
public JPanel iniDibuix() {

	dib = new dibuix(550,550);
		
	panelDibuix = new JPanel();
	panelDibuix.setLayout(new BoxLayout(panelDibuix,BoxLayout.X_AXIS));
	panelDibuix.setBorder(new SoftBevelBorder(BevelBorder.LOWERED));
	panelDibuix.add(dib);
		
	return panelDibuix;
}

/////////////////////////////////////////////////////////////////
//// DIBUIX
/////////////////////////////////////////////////////////////////
class dibuix extends GLCanvas
	implements ActionListener,ChangeListener,MouseMotionListener,MouseListener
{
	//-? VARIABLES GLOBALS DE LA CLASSE

	float 	n[][] = null;		//-? NORMALS
	int 	f[][] = null;		//-? FACES
	float	v[][] = null;		//-? VERTEXS
	
	//-? POSICIO OBSERVADOR
	//L'HEM POSADA GLOBAL double obsX=0 , obsY=0 , obsZ=5.0;	

	float	llum_d[];			//-? LLUM DIFOSA
	float	llum_d_pos[];		//-? POSICIO LLUM DIFOSA
	float	llum_d2[];			//-? LLUM DIFOSA
	float	llum_d2_pos[];		//-? POSICIO LLUM DIFOSA

	int	texName[]={0};
	boolean	textures=false;

	int anclaX,anclaY,anclaAlfa,anclaBeta;	
//---------------------------------------------------------------	
public dibuix(int x, int y){

	//-? PASSEM A CLASSE SUPERIOR ELS 2 PARAMS. DE CONSTRUCTOR
	super(x,y);
}
//---------------------------------------------------------------	

public void init(){

	System.out.println("-- INIT");	

	addMouseMotionListener(this);
	addMouseListener(this);
	
	//-? INICIALITZEM NORMALS, VERTEXS , CARES i LLUMS
	n = new float[6][3];
	n[0][0]=-1f;
	n[0][1]=0f;
	n[0][2]=0f;
	n[1][0]=0f;
	n[1][1]=1f;
	n[1][2]=0f;
	n[2][0]=1f;
	n[2][1]=0f;
	n[2][2]=0f;
	n[3][0]=0f;
	n[3][1]=-1f;
	n[3][2]=0f;
	n[4][0]=0f;
	n[4][1]=0f;
	n[4][2]=1f;
	n[5][0]=0f;
	n[5][1]=0f;
	n[5][2]=-1f;

	f = new int[6][4];
	f[0][0]=0;
	f[0][1]=1;
	f[0][2]=2;
	f[0][3]=3;
	f[1][0]=3;
	f[1][1]=2;
	f[1][2]=6;
	f[1][3]=7;
	f[2][0]=7;
	f[2][1]=6;
	f[2][2]=5;
	f[2][3]=4;
	f[3][0]=4;
	f[3][1]=5;
	f[3][2]=1;
	f[3][3]=0;
	f[4][0]=5;
	f[4][1]=6;
	f[4][2]=2;
	f[4][3]=1;
	f[5][0]=7;
	f[5][1]=4;
	f[5][2]=0;
	f[5][3]=3;
		
	v = new float[8][3];
	v[0][0] = v[1][0] = v[2][0] = v[3][0] = -1;
	v[4][0] = v[5][0] = v[6][0] = v[7][0] = 1;
	v[0][1] = v[1][1] = v[4][1] = v[5][1] = -1;
	v[2][1] = v[3][1] = v[6][1] = v[7][1] = 1;
	v[0][2] = v[3][2] = v[4][2] = v[7][2] = 1;
	v[1][2] = v[2][2] = v[5][2] = v[6][2] = -1;
	
	//-? DEFINICIO DE LLUMS
	//-? LLUM DIFOSA 1
	llum_d = new float[4];  
	llum_d[0] = 1.0f;
	llum_d[1] = 0.0f;
	llum_d[2] = 0.0f;
	llum_d[3] = 1.0f;
	
	llum_d_pos = new float[4];
	llum_d_pos[0] = -3.0f;
	llum_d_pos[1] = -3.0f;
	llum_d_pos[2] = -4.0f;
	llum_d_pos[3] = 0.0f;

	//-? LLUM DIFOSA 2
	llum_d2 = new float[4];  
	llum_d2[0] = 1.0f;
	llum_d2[1] = 1.0f;
	llum_d2[2] = 0.0f;
	llum_d2[3] = 1.0f;
	
	llum_d2_pos = new float[4];
	llum_d2_pos[0] = 3.0f;
	llum_d2_pos[1] = 3.0f;
	llum_d2_pos[2] = 4.0f;
	llum_d2_pos[3] = 0.0f;

	//-? INICIALITZACIO GL -> NOPE

	gl.glClearColor( 0.4f, 0.4f, 5.0f, 1.0f );
	gl.glShadeModel(GL_SMOOTH);
	gl.glEnable(GL_DEPTH_TEST);

	//-? CREEM LA TEXTURA
	TextureLoader txtLoader1 = new PPMAsciiTextureLoader(gl, glu);
	if(isAnApplet)
		 txtLoader1.readTexture(getCodeBase(), "lunaL.ppm");
	else {
		txtLoader1.readTexture("lunaL.ppm");
	}

	gl.glPixelStorei(GL_UNPACK_ALIGNMENT,1);	
        gl.glGenTextures(1,texName);
	gl.glBindTexture(GL_TEXTURE_2D,texName[0]);
	
	gl.glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	gl.glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	gl.glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	gl.glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

	txtLoader1.texImage2DNonScaled(true);
	// The Scaled Way
	// txtLoader1.texImage2DScaled2Pow2();

	//-? ILUMINACIO 
	gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, llum_d);
	gl.glLightfv(GL_LIGHT0, GL_POSITION, llum_d_pos);
	gl.glLightfv(GL_LIGHT1, GL_DIFFUSE, llum_d2);
	gl.glLightfv(GL_LIGHT1, GL_POSITION, llum_d2_pos);
	gl.glEnable(GL_LIGHTING);
	gl.glEnable(GL_LIGHT0);	
	gl.glEnable(GL_LIGHT1);	
	
	puntVista();
}		
//---------------------------------------------------------------
public void display()
{
	int i;
	
	if (cvsIsInit()==false || glj.gljMakeCurrent() == false)
	{
		System.out.println("-- Tenim algun problema glj.gljUse -2-");
		return;
	}	
	puntVista();

	gl.glLineWidth(1.4f);
	gl.glPolygonMode(GL_FRONT_AND_BACK,tipusPolMode);
	gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	

	if (textures)
	{
		gl.glEnable(GL_TEXTURE_2D);
		gl.glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
		gl.glBindTexture(GL_TEXTURE_2D,texName[0]);
	}

	for(i=0;i<6;i++)
	{
		gl.glBegin(GL_QUADS);	
	    gl.glNormal3fv(n[i]);	    
		gl.glTexCoord2f(0.0f,0.0f);gl.glVertex3fv(v[f[i][0]]);
	    gl.glTexCoord2f(0.0f,1.0f);gl.glVertex3fv(v[f[i][1]]);
	    gl.glTexCoord2f(1.0f,1.0f);gl.glVertex3fv(v[f[i][2]]);
	    gl.glTexCoord2f(1.0f,0.0f);gl.glVertex3fv(v[f[i][3]]);
	    	    
	    gl.glEnd();		
	    gl.glFlush();
	}
	if (textures)	gl.glDisable(GL_TEXTURE_2D);
	glj.gljSwap();
	glj.gljFree();
}		
//---------------------------------------------------------------

public void puntVista()
{
	
	if (cvsIsInit()==false )
	{
		System.out.println("-- Tenim algun problema glj.gljUse -3-");
		return;
	}
	//-? Actualitzem PUNT OBS

	Integer IaU = new Integer(sl_alfaUsu.getValue());
	Integer IbU = new Integer(sl_betaUsu.getValue());

	double daU =-(((double)IaU.doubleValue())*((double)2.0*java.lang.Math.PI))/ (double)360.0;
	double dbU = (((double)IbU.doubleValue())*((double)2.0*java.lang.Math.PI))/ (double)360.0;

	obsX = 5.0 * java.lang.Math.sin(-daU) * java.lang.Math.cos(dbU);
	obsY = 5.0 * java.lang.Math.sin(dbU);
	obsZ = 5.0 * java.lang.Math.cos(-daU) * java.lang.Math.cos(dbU);

	//-? PUNT DE VISTA 
	gl.glMatrixMode(GL_PROJECTION);
	gl.glLoadIdentity();
	glu.gluPerspective( /* field of view in degree */ 90.0,
	    			           /* aspect ratio */ 1.0,
	    							 /* Z near */ 1.0, 
	    							 /* Z far */ 100.0);
	gl.glMatrixMode(GL_MODELVIEW);
	gl.glLoadIdentity();
	glu.gluLookAt(obsX, obsY, obsZ,   /* eye is at (0,0,5) */
	    	  0.0, 0.0, 0.0,      /* center is at (0,0,0) */
	    	  0.0, 1.0, 0.);      /* up is in positive Y direction */



	//gl.glTranslatef(0.0f, 0.0f, -1.0f);
	//gl.glRotatef(-60f, 1.0f, 0.0f, 0.0f);
	//gl.glRotatef(-20f, 0.0f, 0.0f, 1.0f);	

}
//---------------------------------------------------------------	
    public void actionPerformed(java.awt.event.ActionEvent e)
      {

	if (e.getActionCommand().equals("bS"))
	  {			
	  		if (tipusPolMode == GL_LINE)
	  		{	
	  			tipusPolMode=GL_FILL;
			}
	  		else
	  		{
				tipusPolMode=GL_LINE;
	  		}
	  		display();
	  }
	if (e.getActionCommand().equals("bT"))
	  {			
	  		if (textures)
	  			textures = false;
	  		else
				textures = true;					  		
	  		display();
	  }

      }

//---------------------------------------------------------------	
public void mouseClicked(MouseEvent e)
{

}
//---------------------------------------------------------------	
public void mouseEntered(MouseEvent e)
{

}
//---------------------------------------------------------------	
public void mouseExited(MouseEvent e)
{

}
//---------------------------------------------------------------	
public void mousePressed(MouseEvent e)
{
	anclaX=e.getX();	
	anclaY=e.getY();
	
	anclaAlfa=sl_alfaUsu.getValue();
	anclaBeta=sl_betaUsu.getValue();
}
//---------------------------------------------------------------	
public void mouseReleased(MouseEvent e)
{
}
//---------------------------------------------------------------	
public void mouseDragged(MouseEvent e)
{
	int difX=anclaX-e.getX();
	int difY=e.getY()-anclaY;

	sl_alfaUsu.setValue(anclaAlfa+difX);		
	sl_betaUsu.setValue(anclaBeta+difY);			

	repaint();
}
//---------------------------------------------------------------	
public void mouseMoved(MouseEvent e)
{

}
//---------------------------------------------------------------
public void stateChanged(ChangeEvent e)
{
	JSlider source = (JSlider) e.getSource();
	
	dib.repaint();
	
	if (source.equals(sl_alfaUsu))
	{
		
	}

	if (source.equals(sl_betaUsu))
	{

	}
}
//---------------------------------------------------------------
} //-? Fi CLASSE Dibuix

//---------------------------------------------------------------	
}// Fi Applet testTextPPM1

