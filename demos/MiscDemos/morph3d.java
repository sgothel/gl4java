/*-
 * morph3d.c - Shows 3D morphing objects
 *
 * Converted to GLUT by brianp on 1/1/98
 *
 * This program was inspired on a WindowsNT(R)'s screen saver. It was written 
 * from scratch and it was not based on any other source code. 
 * 
 * Porting it to xlock (the final objective of this code (float)Math.since the moment I
 * decided to create it) was possible by comparing the original Mesa's gear
 * demo with it's ported version, so thanks for Danny Sung for his indirect
 * help (look at gear.c in xlock source tree). NOTE: At the moment this code
 * was sent to Brian Paul for package inclusion, the XLock Version was not
 * available. In fact, I'll wait it to appear on the next Mesa release (If you
 * are reading this, it means THIS release) to send it for xlock package 
 * inclusion). It will probably there be a GLUT version too.
 *
 * Thanks goes also to Brian Paul for making it possible and inexpensive
 * to use OpenGL at home.
 *
 * Since I'm not a native english speaker, my apologies for any gramatical
 * mistake.
 *
 * My e-mail addresses are
 *
 * vianna@cat.cbpf.br 
 *         and
 * marcelo@venus.rdc.puc-rio.br
 *
 * Marcelo F. Vianna (Feb-13-1997)
 */

/*
This document is VERY incomplete, but tries to describe the mathematics used
in the program. At this moment it just describes how the polyhedra are 
generated. On futhurer versions, this document will be probabbly improved.

Since I'm not a native english speaker, my apologies for any gramatical
mistake.

Marcelo Fernandes Vianna 
- Undergraduate in Computer Engeneering at Catholic Pontifical University
- of Rio de Janeiro (PUC-Rio) Brasil.
- e-mail: vianna@cat.cbpf.br or marcelo@venus.rdc.puc-rio.br
- Feb-13-1997

POLYHEDRA GENERATION

For the purpose of this program it's not sufficient to know the polyhedra
vertexes coordinates. Since the morphing algorithm applies a nonlinear 
transformation over the surfaces (faces) of the polyhedron, each face has
to be divided into smaller ones. The morphing algorithm needs to transform 
each vertex of these smaller faces individually. It's a very time consoming
task.

In order to reduce calculation overload, and (float)Math.since all the macro faces of
the polyhedron are transformed by the same way, the generation is made by 
creating only one face of the polyhedron, morphing it and then rotating it
around the polyhedron center. 

What we need to know is the face radius of the polyhedron (the radius of 
the inscribed sphere) and the angle between the center of two adjacent 
faces u(float)Math.sing the center of the sphere as the angle's vertex.

The face radius of the regular polyhedra are known values which I decided
to not waste my time calculating. Following is a table of face radius for
the regular polyhedra with edge length = 1:

    TETRAHEDRON  : 1/(2*(float)Math.sqrt(2))/(float)Math.sqrt(3)
    CUBE	 : 1/2
    OCTAHEDRON   : 1/(float)Math.sqrt(6)
    DODECAHEDRON : T^2 * (float)Math.sqrt((T+2)/5) / 2     -> where T=((float)Math.sqrt(5)+1)/2
    ICOSAHEDRON  : (3*(float)Math.sqrt(3)+(float)Math.sqrt(15))/12

I've not found any reference about the mentioned angles, so I needed to
calculate them, not a trivial task until I figured out how :)
Curiously these angles are the same for the tetrahedron and octahedron.
A way to obtain this value is inscribing the tetrahedron inside the cube
by matching their vertexes. So you'll notice that the remaining unmatched
vertexes are in the same straight line starting in the cube/tetrahedron
center and cros(float)Math.sing the center of each tetrahedron's face. At this point
it's easy to obtain the bigger angle of the isosceles triangle formed by
the center of the cube and two opposite vertexes on the same cube face.
The edges of this triangle have the following lenghts: (float)Math.sqrt(2) for the base
and (float)Math.sqrt(3)/2 for the other two other edges. So the angle we want is:
     +-----------------------------------------------------------+
     | 2*ARCSIN((float)Math.sqrt(2)/(float)Math.sqrt(3)) = 109.47122063449069174f degrees |
     +-----------------------------------------------------------+
For the cube this angle is obvious, but just for formality it can be
easily obtained because we also know it's isosceles edge lenghts:
(float)Math.sqrt(2)/2 for the base and 1/2 for the other two edges. So the angle we 
want is:
     +-----------------------------------------------------------+
     | 2*ARCSIN(((float)Math.sqrt(2)/2)/1)   = 90.000000000000000000f degrees |
     +-----------------------------------------------------------+
For the octahedron we use the same idea used for the tetrahedron, but now
we inscribe the cube inside the octahedron so that all cubes's vertexes
matches excatly the center of each octahedron's face. It's now clear that
this angle is the same of the thetrahedron one:
     +-----------------------------------------------------------+
     | 2*ARCSIN((float)Math.sqrt(2)/(float)Math.sqrt(3)) = 109.47122063449069174f degrees |
     +-----------------------------------------------------------+
For the dodecahedron it's a little bit harder because it's only relationship
with the cube is useless to us. So we need to solve the problem by another
way. The concept of Face radius also exists on 2D polygons with the name
Edge radius:
  Edge Radius For Pentagon (ERp)
  ERp = (1/2)/TAN(36 degrees) * VRp = 0.6881909602355867905f
  (VRp is the pentagon's vertex radio).
  Face Radius For Dodecahedron
  FRd = T^2 * (float)Math.sqrt((T+2)/5) / 2 = 1.1135163644116068404f
Why we need ERp? Well, ERp and FRd segments forms a 90 degrees angle, 
completing this triangle, the lesser angle is a half of the angle we are 
looking for, so this angle is:
     +-----------------------------------------------------------+
     | 2*ARCTAN(ERp/FRd)	 = 63.434948822922009981f degrees |
     +-----------------------------------------------------------+
For the icosahedron we can use the same method used for dodecahedron (well
the method used for dodecahedron may be used for all regular polyhedra)
  Edge Radius For Triangle (this one is well known: 1/3 of the triangle height)
  ERt = (float)Math.sin(60)/3 = (float)Math.sqrt(3)/6 = 0.2886751345948128655f
  Face Radius For Icosahedron
  FRi= (3*(float)Math.sqrt(3)+(float)Math.sqrt(15))/12 = 0.7557613140761707538f
So the angle is:
     +-----------------------------------------------------------+
     | 2*ARCTAN(ERt/FRi)	 = 41.810314895778596167f degrees |
     +-----------------------------------------------------------+

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
import gl4java.awt.GLAnimCanvas;
import gl4java.applet.SimpleGLAnimApplet1;
import gl4java.utils.textures.*;

public class morph3d extends SimpleGLAnimApplet1 
{
	static final float Scale                      =0.3f;
	static final float tetraangle               =  109.47122063449069174f;
	static final float cubeangle                =  90.000000000000000000f;
	static final float octaangle                =  109.47122063449069174f;
	static final float dodecaangle              =  63.434948822922009981f;
	static final float icoangle                 =  41.810314895778596167f;

	static final float Pi                       =  3.1415926535897932385f;
	static final float SQRT2                    =  1.4142135623730951455f;
	static final float SQRT3                    =  1.7320508075688771932f;
	static final float SQRT5                    =  2.2360679774997898051f;
	static final float SQRT6                    =  2.4494897427831778813f;
	static final float SQRT15                   =  3.8729833462074170214f;
	static final float cossec36_2   =              0.8506508083520399322f;
	static final float cos72        =              0.3090169943749474241f;
	static final float sin72        =              0.9510565162951535721f;
	static final float cos36        =              0.8090169943749474241f;
	static final float sin36        =              0.5877852522924731292f;

	static final float TAU          =              (SQRT5+1f)/2.0f;


        /* Initialize the applet */

        boolean isAnApplet = true;

	public void init()
	{
	super.init();
        Dimension d = getSize();
        canvas = new morph3dCanvas(d.width, d.height);
        add("Center", canvas);
	}

	public static void main( String args[] ) 
	{
		Frame mainFrame = new Frame("morph3d");

	        GLContext.gljNativeDebug = true;
	        GLContext.gljClassDebug = true;

		morph3d applet = new morph3d();

    		applet.isAnApplet = false;
		applet.setSize(400, 400);
		applet.init();
		applet.start();

		mainFrame.add(applet);

		mainFrame.pack();
		mainFrame.setVisible(true);
	}

        /* Local GLCanvas extension class */


    private class morph3dCanvas extends GLAnimCanvas
        implements MouseListener, ActionListener
    {
        private PopupMenu menu = null;
        private boolean menu_showing = false;
        private boolean save_suspended = false;
   	private final String MENUE_0 = "Tetrahedron";
   	private final String MENUE_1 = "Hexahedron (Cube)";
   	private final String MENUE_2 = "Octahedron";
   	private final String MENUE_3 = "Dodecahedron";
   	private final String MENUE_4 = "Icosahedron";
   	private final String MENUE_5 = "Toggle colored faces";
   	private final String MENUE_6 = "Toggle smooth/flat shading";
        private final String MENU_SNAPSHOT = "Snapshot";

	TGATextureGrabber textgrab = null;

	boolean doSnapshot=false;

	/* Increasing this values produces better image quality, 
	   the price is speed. */
	/* Very low values produces erroneous/incorrect plotting */
	int tetradivisions           =  23;
	int cubedivisions            =  20;
	int octadivisions            =  21;
	int dodecadivisions          =  10;
	int icodivisions             =  15;

	boolean       mono=false;
	boolean       smooth=true;
	int     WindH, WindW;
	float   step=0;
	float   seno;
	int       object;
	int       edgedivisions;
	float     Magnitude;
	// float     *MaterialColor[20];
	float     MaterialColor[][];

	float front_shininess[] =   {60.0f};
	float front_specular[]  =   { 0.7f, 0.7f, 0.7f, 1.0f };
	float ambient[]         =   { 0.0f, 0.0f, 0.0f, 1.0f };
	float diffuse[]         =   { 1.0f, 1.0f, 1.0f, 1.0f };
	float position0[]       =   { 1.0f, 1.0f, 1.0f, 0.0f };
	float position1[]       =   {-1.0f,-1.0f, 1.0f, 0.0f };
	float lmodel_ambient[]  =   { 0.5f, 0.5f, 0.5f, 1.0f };
	float lmodel_twoside[]  =   {1.0f};

	float MaterialRed[]     =   { 0.7f, 0.0f, 0.0f, 1.0f };
	float MaterialGreen[]   =   { 0.1f, 0.5f, 0.2f, 1.0f };
	float MaterialBlue[]    =   { 0.0f, 0.0f, 0.7f, 1.0f };
	float MaterialCyan[]    =   { 0.2f, 0.5f, 0.7f, 1.0f };
	float MaterialYellow[]  =   { 0.7f, 0.7f, 0.0f, 1.0f };
	float MaterialMagenta[] =   { 0.6f, 0.2f, 0.5f, 1.0f };
	float MaterialWhite[]   =   { 0.7f, 0.7f, 0.7f, 1.0f };
	float MaterialGray[]    =   { 0.2f, 0.2f, 0.2f, 1.0f };

        public morph3dCanvas(int w, int h)
        {
            super(w, h);
            setAnimateFps(30.0);
        }
    
        public void preInit()
        {
            doubleBuffer = true;
            stereoView = false;
	    rgba = true;
        }
    

	final float VectMulX(float Y1,float Z1,float Y2,float Z2) 
	{ return (Y1)*(Z2)-(Z1)*(Y2);
	}

	final float VectMulY(float X1,float Z1,float X2,float Z2) 
	{ return (Z1)*(X2)-(X1)*(Z2);
	}

	final float VectMulZ(float X1,float Y1,float X2,float Y2) 
	{ return (X1)*(Y2)-(Y1)*(X2);
	}

	final float sqr(float A)                
	{ return (A)*(A); }

	final void TRIANGLE(float Edge, float Amp, int Divisions, float Z)
	{                                                                                                                
	  float   Xf,Yf,Xa,Yb,Xf2,Yf2;                                                                                 
	  float   Factor,Factor1,Factor2;                                                                              
	  float   VertX,VertY,VertZ,NeiAX,NeiAY,NeiAZ,NeiBX,NeiBY,NeiBZ;                                               
	  float   Ax,Ay,Bx;                                                                                            
	  int       Ri,Ti;                                                                                               
	  float   Vr=(Edge)*SQRT3/3;                                                                                   
	  float   AmpVr2=(Amp)/sqr(Vr);                                                                                
	  float   Zf=(Edge)*(Z);                                                                                       
															 
	  Ax=(Edge)*(+0.5f/(Divisions)); Ay=(Edge)*(-SQRT3/(2*Divisions));                                                
	  Bx=(Edge)*(-0.5f/(Divisions));                                                                                  
	  for (Ri=1; Ri<=(Divisions); Ri++) {                                                                            
	    gl.glBegin(GL_TRIANGLE_STRIP);                                                                                  
	    for (Ti=0; Ti<Ri; Ti++) {                                                                                    
	      Xf=(float)(Ri-Ti)*Ax + (float)Ti*Bx;                                                                       
	      Yf=Vr+(float)(Ri-Ti)*Ay + (float)Ti*Ay;                                                                    
	      Xa=Xf+0.001f; Yb=Yf+0.001f;                                                                                  
	      Factor=1-(((Xf2=sqr(Xf))+(Yf2=sqr(Yf)))*AmpVr2);                                                           
	      Factor1=1-((sqr(Xa)+Yf2)*AmpVr2);                                                                          
	      Factor2=1-((Xf2+sqr(Yb))*AmpVr2);                                                                          
	      VertX=Factor*Xf;        VertY=Factor*Yf;        VertZ=Factor*Zf;                                           
	      NeiAX=Factor1*Xa-VertX; NeiAY=Factor1*Yf-VertY; NeiAZ=Factor1*Zf-VertZ;                                    
	      NeiBX=Factor2*Xf-VertX; NeiBY=Factor2*Yb-VertY; NeiBZ=Factor2*Zf-VertZ;                                    
	      gl.glNormal3f(VectMulX(NeiAY, NeiAZ, NeiBY, NeiBZ),
	                    VectMulY(NeiAX, NeiAZ, NeiBX, NeiBZ),
	                    VectMulZ(NeiAX, NeiAY, NeiBX, NeiBY));
	      gl.glVertex3f(VertX, VertY, VertZ);                                                                           
															 
	      Xf=(float)(Ri-Ti-1)*Ax + (float)Ti*Bx;                                                                     
	      Yf=Vr+(float)(Ri-Ti-1)*Ay + (float)Ti*Ay;                                                                  
	      Xa=Xf+0.001f; Yb=Yf+0.001f;                                                                                  
	      Factor=1-(((Xf2=sqr(Xf))+(Yf2=sqr(Yf)))*AmpVr2);                                                           
	      Factor1=1-((sqr(Xa)+Yf2)*AmpVr2);                                                                          
	      Factor2=1-((Xf2+sqr(Yb))*AmpVr2);                                                                          
	      VertX=Factor*Xf;        VertY=Factor*Yf;        VertZ=Factor*Zf;                                           
	      NeiAX=Factor1*Xa-VertX; NeiAY=Factor1*Yf-VertY; NeiAZ=Factor1*Zf-VertZ;                                    
	      NeiBX=Factor2*Xf-VertX; NeiBY=Factor2*Yb-VertY; NeiBZ=Factor2*Zf-VertZ;                                    
	      gl.glNormal3f(VectMulX(NeiAY, NeiAZ, NeiBY, NeiBZ),
	                    VectMulY(NeiAX, NeiAZ, NeiBX, NeiBZ),
	                    VectMulZ(NeiAX, NeiAY, NeiBX, NeiBY));
	      gl.glVertex3f(VertX, VertY, VertZ);                                                                           
															 
	    }                                                                                                            
	    Xf=(float)Ri*Bx;                                                                                             
	    Yf=Vr+(float)Ri*Ay;                                                                                          
	    Xa=Xf+0.001f; Yb=Yf+0.001f;                                                                                    
	    Factor=1-(((Xf2=sqr(Xf))+(Yf2=sqr(Yf)))*AmpVr2);                                                             
	    Factor1=1-((sqr(Xa)+Yf2)*AmpVr2);                                                                            
	    Factor2=1-((Xf2+sqr(Yb))*AmpVr2);                                                                            
	    VertX=Factor*Xf;        VertY=Factor*Yf;        VertZ=Factor*Zf;                                             
	    NeiAX=Factor1*Xa-VertX; NeiAY=Factor1*Yf-VertY; NeiAZ=Factor1*Zf-VertZ;                                      
	    NeiBX=Factor2*Xf-VertX; NeiBY=Factor2*Yb-VertY; NeiBZ=Factor2*Zf-VertZ;                                      
	      gl.glNormal3f(VectMulX(NeiAY, NeiAZ, NeiBY, NeiBZ),
	                    VectMulY(NeiAX, NeiAZ, NeiBX, NeiBZ),
	                    VectMulZ(NeiAX, NeiAY, NeiBX, NeiBY));
	    gl.glVertex3f(VertX, VertY, VertZ);                                                                             
	    gl.glEnd();                                                                                                     
	  }                                                                                                              
	}

	final void SQUARE(float Edge, float Amp, int Divisions, float Z)
	{                                                                                                                
	  int       Xi,Yi;                                                                                               
	  float   Xf,Yf,Y,Xf2,Yf2,Y2,Xa,Yb;                                                                            
	  float   Factor,Factor1,Factor2;                                                                              
	  float   VertX,VertY,VertZ,NeiAX,NeiAY,NeiAZ,NeiBX,NeiBY,NeiBZ;                                               
	  float   Zf=(Edge)*(Z);                                                                                       
	  float   AmpVr2=(Amp)/sqr((Edge)*SQRT2/2);                                                                    
															 
	  for (Yi=0; Yi<(Divisions); Yi++) {                                                                             
	    Yf=-((Edge)/2.0f) + ((float)Yi)/(Divisions)*(Edge);                                                           
	    Yf2=sqr(Yf);                                                                                                 
	    Y=Yf+1.0f/(Divisions)*(Edge);                                                                                 
	    Y2=sqr(Y);                                                                                                   
	    gl.glBegin(GL_QUAD_STRIP);                                                                                      
	    for (Xi=0; Xi<=(Divisions); Xi++) {                                                                          
	      Xf=-((Edge)/2.0f) + ((float)Xi)/(Divisions)*(Edge);                                                         
	      Xf2=sqr(Xf);                                                                                               
															 
	      Xa=Xf+0.001f; Yb=Y+0.001f;                                                                                   
	      Factor=1-((Xf2+Y2)*AmpVr2);                                                                                
	      Factor1=1-((sqr(Xa)+Y2)*AmpVr2);                                                                           
	      Factor2=1-((Xf2+sqr(Yb))*AmpVr2);                                                                          
	      VertX=Factor*Xf;        VertY=Factor*Y;         VertZ=Factor*Zf;                                           
	      NeiAX=Factor1*Xa-VertX; NeiAY=Factor1*Y-VertY;  NeiAZ=Factor1*Zf-VertZ;                                    
	      NeiBX=Factor2*Xf-VertX; NeiBY=Factor2*Yb-VertY; NeiBZ=Factor2*Zf-VertZ;                                    
	      gl.glNormal3f(VectMulX(NeiAY, NeiAZ, NeiBY, NeiBZ),
	                    VectMulY(NeiAX, NeiAZ, NeiBX, NeiBZ),
	                    VectMulZ(NeiAX, NeiAY, NeiBX, NeiBY));
	      gl.glVertex3f(VertX, VertY, VertZ);                                                                           
															 
	      Xa=Xf+0.001f; Yb=Yf+0.001f;                                                                                  
	      Factor=1-((Xf2+Yf2)*AmpVr2);                                                                               
	      Factor1=1-((sqr(Xa)+Yf2)*AmpVr2);                                                                          
	      Factor2=1-((Xf2+sqr(Yb))*AmpVr2);                                                                          
	      VertX=Factor*Xf;        VertY=Factor*Yf;        VertZ=Factor*Zf;                                           
	      NeiAX=Factor1*Xa-VertX; NeiAY=Factor1*Yf-VertY; NeiAZ=Factor1*Zf-VertZ;                                    
	      NeiBX=Factor2*Xf-VertX; NeiBY=Factor2*Yb-VertY; NeiBZ=Factor2*Zf-VertZ;                                    
	      gl.glNormal3f(VectMulX(NeiAY, NeiAZ, NeiBY, NeiBZ),
	                    VectMulY(NeiAX, NeiAZ, NeiBX, NeiBZ),
	                    VectMulZ(NeiAX, NeiAY, NeiBX, NeiBY));
	      gl.glVertex3f(VertX, VertY, VertZ);                                                                           
	    }                                                                                                            
	    gl.glEnd();                                                                                                     
	  }                                                                                                              
	}

	final void PENTAGON(float Edge, float Amp, int Divisions, float Z)
	{                                                                                                                
	  int       Ri,Ti,Fi;                                                                                            
	  float   Xf,Yf,Xa,Yb,Xf2,Yf2;                                                                                 
	  float   x[]=new float[6],y[]=new float[6];                                                                                           
	  float   Factor,Factor1,Factor2;                                                                              
	  float   VertX,VertY,VertZ,NeiAX,NeiAY,NeiAZ,NeiBX,NeiBY,NeiBZ;                                               
	  float   Zf=(Edge)*(Z);                                                                                       
	  float   AmpVr2=(Amp)/sqr((Edge)*cossec36_2);                                                                 
															 
	  for(Fi=0;Fi<6;Fi++) {                                                                                          
	    x[Fi]=-(float)Math.cos( Fi*2*Pi/5 + Pi/10 )/(Divisions)*cossec36_2*(Edge);                                                
	    y[Fi]=(float)Math.sin( Fi*2*Pi/5 + Pi/10 )/(Divisions)*cossec36_2*(Edge);                                                
	  }                                                                                                              
															 
	  for (Ri=1; Ri<=(Divisions); Ri++) {                                                                            
	    for (Fi=0; Fi<5; Fi++) {                                                                                     
	      gl.glBegin(GL_TRIANGLE_STRIP);                                                                                
	      for (Ti=0; Ti<Ri; Ti++) {                                                                                  
		Xf=(float)(Ri-Ti)*x[Fi] + (float)Ti*x[Fi+1];                                                             
		Yf=(float)(Ri-Ti)*y[Fi] + (float)Ti*y[Fi+1];                                                             
		Xa=Xf+0.001f; Yb=Yf+0.001f;                                                                                
		Factor=1-(((Xf2=sqr(Xf))+(Yf2=sqr(Yf)))*AmpVr2);                                                         
		Factor1=1-((sqr(Xa)+Yf2)*AmpVr2);                                                                        
		Factor2=1-((Xf2+sqr(Yb))*AmpVr2);                                                                        
		VertX=Factor*Xf;        VertY=Factor*Yf;        VertZ=Factor*Zf;                                         
		NeiAX=Factor1*Xa-VertX; NeiAY=Factor1*Yf-VertY; NeiAZ=Factor1*Zf-VertZ;                                  
		NeiBX=Factor2*Xf-VertX; NeiBY=Factor2*Yb-VertY; NeiBZ=Factor2*Zf-VertZ;                                  
	      gl.glNormal3f(VectMulX(NeiAY, NeiAZ, NeiBY, NeiBZ),
	                    VectMulY(NeiAX, NeiAZ, NeiBX, NeiBZ),
	                    VectMulZ(NeiAX, NeiAY, NeiBX, NeiBY));
		gl.glVertex3f(VertX, VertY, VertZ);                                                                         
															 
		Xf=(float)(Ri-Ti-1)*x[Fi] + (float)Ti*x[Fi+1];                                                           
		Yf=(float)(Ri-Ti-1)*y[Fi] + (float)Ti*y[Fi+1];                                                           
		Xa=Xf+0.001f; Yb=Yf+0.001f;                                                                                
		Factor=1-(((Xf2=sqr(Xf))+(Yf2=sqr(Yf)))*AmpVr2);                                                         
		Factor1=1-((sqr(Xa)+Yf2)*AmpVr2);                                                                        
		Factor2=1-((Xf2+sqr(Yb))*AmpVr2);                                                                        
		VertX=Factor*Xf;        VertY=Factor*Yf;        VertZ=Factor*Zf;                                         
		NeiAX=Factor1*Xa-VertX; NeiAY=Factor1*Yf-VertY; NeiAZ=Factor1*Zf-VertZ;                                  
		NeiBX=Factor2*Xf-VertX; NeiBY=Factor2*Yb-VertY; NeiBZ=Factor2*Zf-VertZ;                                  
	      gl.glNormal3f(VectMulX(NeiAY, NeiAZ, NeiBY, NeiBZ),
	                    VectMulY(NeiAX, NeiAZ, NeiBX, NeiBZ),
	                    VectMulZ(NeiAX, NeiAY, NeiBX, NeiBY));
		gl.glVertex3f(VertX, VertY, VertZ);                                                                         
															 
	      }                                                                                                          
	      Xf=(float)Ri*x[Fi+1];                                                                                      
	      Yf=(float)Ri*y[Fi+1];                                                                                      
	      Xa=Xf+0.001f; Yb=Yf+0.001f;                                                                                  
	      Factor=1-(((Xf2=sqr(Xf))+(Yf2=sqr(Yf)))*AmpVr2);                                                           
	      Factor1=1-((sqr(Xa)+Yf2)*AmpVr2);                                                                          
	      Factor2=1-((Xf2+sqr(Yb))*AmpVr2);                                                                          
	      VertX=Factor*Xf;        VertY=Factor*Yf;        VertZ=Factor*Zf;                                           
	      NeiAX=Factor1*Xa-VertX; NeiAY=Factor1*Yf-VertY; NeiAZ=Factor1*Zf-VertZ;                                    
	      NeiBX=Factor2*Xf-VertX; NeiBY=Factor2*Yb-VertY; NeiBZ=Factor2*Zf-VertZ;                                    
	      gl.glNormal3f(VectMulX(NeiAY, NeiAZ, NeiBY, NeiBZ),
	                    VectMulY(NeiAX, NeiAZ, NeiBX, NeiBZ),
	                    VectMulZ(NeiAX, NeiAY, NeiBX, NeiBY));
	      gl.glVertex3f(VertX, VertY, VertZ);                                                                           
	      gl.glEnd();                                                                                                   
	    }                                                                                                            
	  }                                                                                                              
	}

	void draw_tetra( )
	{
	  int list;

	  list = gl.glGenLists( 1 );
	  gl.glNewList( list, GL_COMPILE );
	  TRIANGLE(2,seno,edgedivisions,0.5f/SQRT6);
	  gl.glEndList();

	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[0]);
	  gl.glCallList(list);
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,0,1);
	  gl.glRotatef(-tetraangle,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[1]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-180+tetraangle,0.5f,SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[2]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-180+tetraangle,0.5f,-SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[3]);
	  gl.glCallList(list);

	  gl.glDeleteLists(list,1);
	}

	void draw_cube()
	{
	  int list;

	  list = gl.glGenLists( 1 );
	  gl.glNewList( list, GL_COMPILE );
	  SQUARE(2.0f, seno, edgedivisions, 0.5f);
	  gl.glEndList();

	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[0]);
	  gl.glCallList(list);
	  gl.glRotatef(cubeangle,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[1]);
	  gl.glCallList(list);
	  gl.glRotatef(cubeangle,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[2]);
	  gl.glCallList(list);
	  gl.glRotatef(cubeangle,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[3]);
	  gl.glCallList(list);
	  gl.glRotatef(cubeangle,0,1,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[4]);
	  gl.glCallList(list);
	  gl.glRotatef(2*cubeangle,0,1,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[5]);
	  gl.glCallList(list);

	  gl.glDeleteLists(list,1);
	}

	void draw_octa()
	{
	  int list;

	  list = gl.glGenLists( 1 );
	  gl.glNewList( list, GL_COMPILE );
	  TRIANGLE(2,seno,edgedivisions,1/SQRT6);
	  gl.glEndList();

	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[0]);
	  gl.glCallList(list);
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,0,1);
	  gl.glRotatef(-180+octaangle,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[1]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-octaangle,0.5f,SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[2]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-octaangle,0.5f,-SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[3]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glRotatef(180,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[4]);
	  gl.glCallList(list);
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,0,1);
	  gl.glRotatef(-180+octaangle,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[5]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-octaangle,0.5f,SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[6]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-octaangle,0.5f,-SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[7]);
	  gl.glCallList(list);

	  gl.glDeleteLists(list,1);
	}

	void draw_dodeca()
	{
	  int list;


	  list = gl.glGenLists( 1 );
	  gl.glNewList( list, GL_COMPILE );
	  PENTAGON(1,seno,edgedivisions,sqr(TAU) * (float)Math.sqrt((TAU+2)/5) / 2);
	  gl.glEndList();

	  gl.glPushMatrix();
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[0]);
	  gl.glCallList(list);
	  gl.glRotatef(180,0,0,1);
	  gl.glPushMatrix();
	  gl.glRotatef(-dodecaangle,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[1]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glPushMatrix();
	  gl.glRotatef(-dodecaangle,cos72,sin72,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[2]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glPushMatrix();
	  gl.glRotatef(-dodecaangle,cos72,-sin72,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[3]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glPushMatrix();
	  gl.glRotatef(dodecaangle,cos36,-sin36,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[4]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glRotatef(dodecaangle,cos36,sin36,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[5]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glRotatef(180,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[6]);
	  gl.glCallList(list);
	  gl.glRotatef(180,0,0,1);
	  gl.glPushMatrix();
	  gl.glRotatef(-dodecaangle,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[7]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glPushMatrix();
	  gl.glRotatef(-dodecaangle,cos72,sin72,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[8]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glPushMatrix();
	  gl.glRotatef(-dodecaangle,cos72,-sin72,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[9]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glPushMatrix();
	  gl.glRotatef(dodecaangle,cos36,-sin36,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[10]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glRotatef(dodecaangle,cos36,sin36,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[11]);
	  gl.glCallList(list);

	  gl.glDeleteLists(list,1);
	}

	void draw_ico()
	{
	  int list;

	  list = gl.glGenLists( 1 );
	  gl.glNewList( list, GL_COMPILE );
	  TRIANGLE(1.5f,seno,edgedivisions,(3*SQRT3+SQRT15)/12);
	  gl.glEndList();

	  gl.glPushMatrix();

	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[0]);
	  gl.glCallList(list);
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,0,1);
	  gl.glRotatef(-icoangle,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[1]);
	  gl.glCallList(list);
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-180+icoangle,0.5f,SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[2]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-180+icoangle,0.5f,-SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[3]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-180+icoangle,0.5f,SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[4]);
	  gl.glCallList(list);
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-180+icoangle,0.5f,SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[5]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glRotatef(180,0,0,1);
	  gl.glRotatef(-icoangle,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[6]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-180+icoangle,0.5f,-SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[7]);
	  gl.glCallList(list);
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-180+icoangle,0.5f,-SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[8]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glRotatef(180,0,0,1);
	  gl.glRotatef(-icoangle,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[9]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glRotatef(180,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[10]);
	  gl.glCallList(list);
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,0,1);
	  gl.glRotatef(-icoangle,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[11]);
	  gl.glCallList(list);
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-180+icoangle,0.5f,SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[12]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-180+icoangle,0.5f,-SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[13]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-180+icoangle,0.5f,SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[14]);
	  gl.glCallList(list);
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-180+icoangle,0.5f,SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[15]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glRotatef(180,0,0,1);
	  gl.glRotatef(-icoangle,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[16]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-180+icoangle,0.5f,-SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[17]);
	  gl.glCallList(list);
	  gl.glPushMatrix();
	  gl.glRotatef(180,0,1,0);
	  gl.glRotatef(-180+icoangle,0.5f,-SQRT3/2,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[18]);
	  gl.glCallList(list);
	  gl.glPopMatrix();
	  gl.glRotatef(180,0,0,1);
	  gl.glRotatef(-icoangle,1,0,0);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MaterialColor[19]);
	  gl.glCallList(list);

	  gl.glDeleteLists(list,1);
	}

	public void display()
	{
            if (glj.gljMakeCurrent() == false) return;

	  gl.glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

	  gl.glPushMatrix();

	    gl.glTranslatef( 0.0f, 0.0f, -10.0f );
	    gl.glScalef( Scale*WindH/WindW, Scale, Scale );
	    gl.glTranslatef(2.5f*WindW/WindH*(float)Math.sin(step*1.11f),2.5f*(float)Math.cos(step*1.25f*1.11f),0);
	    gl.glRotatef(step*100,1,0,0);
	    gl.glRotatef(step*95,0,1,0);
	    gl.glRotatef(step*90,0,0,1);

	  seno=((float)Math.sin(step)+1.0f/3.0f)*(4.0f/5.0f)*Magnitude;

	  switch(object) {
	  	case 1:
		      draw_tetra();
			break;
	  	case 2:
		      draw_cube();
			break;
	  	case 3:
		      draw_octa();
			break;
	  	case 4:
		      draw_dodeca();
			break;
	  	case 5:
		      draw_ico();
			break;
	  }

	  gl.glPopMatrix();


	   if(!isAnApplet && doSnapshot)
	   {
	   	doSnapshot=false;
		textgrab.grabPixels(GL_BACK, 
				    0, 0, cvsGetWidth(), cvsGetHeight());
		textgrab.write2File("morph3d.tga");
	   }

	  glj.gljSwap();
	  glj.gljCheckGL();
	  glj.gljFree();

	  step+=0.05f;
        }

	public void reshape(int width, int height)
	{
	  WindW=width; WindH=height;
	  gl.glViewport(0, 0, WindW, WindH);
	  gl.glMatrixMode(GL_PROJECTION);
	  gl.glLoadIdentity();
	  gl.glFrustum( -1.0f, 1.0f, -1.0f, 1.0f, 5.0f, 15.0f );
	  gl.glMatrixMode(GL_MODELVIEW);
	}

	final void pinit()
	{
	  switch(object) {
	    case 1:
	      MaterialColor[0]=MaterialRed;
	      MaterialColor[1]=MaterialGreen;
	      MaterialColor[2]=MaterialBlue;
	      MaterialColor[3]=MaterialWhite;
	      edgedivisions=tetradivisions;
	      Magnitude=2.5f;
	      break;
	    case 2:
	      MaterialColor[0]=MaterialRed;
	      MaterialColor[1]=MaterialGreen;
	      MaterialColor[2]=MaterialCyan;
	      MaterialColor[3]=MaterialMagenta;
	      MaterialColor[4]=MaterialYellow;
	      MaterialColor[5]=MaterialBlue;
	      edgedivisions=cubedivisions;
	      Magnitude=2.0f;
	      break;
	    case 3:
	      MaterialColor[0]=MaterialRed;
	      MaterialColor[1]=MaterialGreen;
	      MaterialColor[2]=MaterialBlue;
	      MaterialColor[3]=MaterialWhite;
	      MaterialColor[4]=MaterialCyan;
	      MaterialColor[5]=MaterialMagenta;
	      MaterialColor[6]=MaterialGray;
	      MaterialColor[7]=MaterialYellow;
	      edgedivisions=octadivisions;
	      Magnitude=2.5f;
	      break;
	    case 4:
	      MaterialColor[ 0]=MaterialRed;
	      MaterialColor[ 1]=MaterialGreen;
	      MaterialColor[ 2]=MaterialCyan;
	      MaterialColor[ 3]=MaterialBlue;
	      MaterialColor[ 4]=MaterialMagenta;
	      MaterialColor[ 5]=MaterialYellow;
	      MaterialColor[ 6]=MaterialGreen;
	      MaterialColor[ 7]=MaterialCyan;
	      MaterialColor[ 8]=MaterialRed;
	      MaterialColor[ 9]=MaterialMagenta;
	      MaterialColor[10]=MaterialBlue;
	      MaterialColor[11]=MaterialYellow;
	      edgedivisions=dodecadivisions;
	      Magnitude=2.0f;
	      break;
	    case 5:
	      MaterialColor[ 0]=MaterialRed;
	      MaterialColor[ 1]=MaterialGreen;
	      MaterialColor[ 2]=MaterialBlue;
	      MaterialColor[ 3]=MaterialCyan;
	      MaterialColor[ 4]=MaterialYellow;
	      MaterialColor[ 5]=MaterialMagenta;
	      MaterialColor[ 6]=MaterialRed;
	      MaterialColor[ 7]=MaterialGreen;
	      MaterialColor[ 8]=MaterialBlue;
	      MaterialColor[ 9]=MaterialWhite;
	      MaterialColor[10]=MaterialCyan;
	      MaterialColor[11]=MaterialYellow;
	      MaterialColor[12]=MaterialMagenta;
	      MaterialColor[13]=MaterialRed;
	      MaterialColor[14]=MaterialGreen;
	      MaterialColor[15]=MaterialBlue;
	      MaterialColor[16]=MaterialCyan;
	      MaterialColor[17]=MaterialYellow;
	      MaterialColor[18]=MaterialMagenta;
	      MaterialColor[19]=MaterialGray;
	      edgedivisions=icodivisions;
	      Magnitude=2.5f;
	      break;
	  }
	  if (mono) {
	    int loop;
	    for (loop=0; loop<20; loop++) MaterialColor[loop]=MaterialGray;
	  }
	  if (smooth) {
	    gl.glShadeModel( GL_SMOOTH );
	  } else {
	    gl.glShadeModel( GL_FLAT );
	  }

	}

	public void init()
	{
	    textgrab = new TGATextureGrabber(gl);
            reshape(getSize().width, getSize().height);

	  object=1;

	  MaterialColor = new float[20][];

	  gl.glClearDepth(1.0f);
	  gl.glClearColor( 0.0f, 0.0f, 0.0f, 1.0f );
	  gl.glColor3f( 1.0f, 1.0f, 1.0f );

	  gl.glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
	  glj.gljSwap();

	  gl.glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
	  gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
	  gl.glLightfv(GL_LIGHT0, GL_POSITION, position0);
	  gl.glLightfv(GL_LIGHT1, GL_AMBIENT, ambient);
	  gl.glLightfv(GL_LIGHT1, GL_DIFFUSE, diffuse);
	  gl.glLightfv(GL_LIGHT1, GL_POSITION, position1);
	  gl.glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
	  gl.glLightModelfv(GL_LIGHT_MODEL_TWO_SIDE, lmodel_twoside);
	  gl.glEnable(GL_LIGHTING);
	  gl.glEnable(GL_LIGHT0);
	  gl.glEnable(GL_LIGHT1);
	  gl.glEnable(GL_DEPTH_TEST);
	  gl.glEnable(GL_NORMALIZE);

	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, front_shininess);
	  gl.glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, front_specular);

	  gl.glHint(GL_FOG_HINT, GL_FASTEST);
	  gl.glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_FASTEST);
	  gl.glHint(GL_POLYGON_SMOOTH_HINT, GL_FASTEST);

	  pinit();

		menu = new PopupMenu("Options");
		menu.add(MENUE_0);
		menu.add(MENUE_1);
		menu.add(MENUE_2);
		menu.add(MENUE_3);
		menu.add(MENUE_4);
		menu.add(MENUE_5);
		menu.add(MENUE_6);
    		if(!isAnApplet)
			menu.add(MENU_SNAPSHOT);
		menu.addActionListener(this);
		add(menu);

                addMouseListener(this);
	  
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
                    save_suspended = isSuspended();
                    if (!save_suspended)
                    {
                        setSuspended(true);
                        repaint(100);
                        try
                        {
                            Thread.currentThread().sleep(200);
                        }
                        catch (Exception e)
                        { }
                    }
                    menu.show(this,evt.getX(),evt.getY());
                }
                else
                {
                        // Must be left button.
                    if (isSuspended()) repaint();
                }
            }
            else
            {
                menu_showing = false;
                setSuspended(save_suspended);
            }
        }
    
        public void mouseReleased(MouseEvent evt)
        {
        }
    
        public void mouseClicked(MouseEvent evt)
        {
        }

        // Method required for the implementation of ActionListener
        public void actionPerformed(ActionEvent evt)
        {
            String c = evt.getActionCommand();
            if (c.equals(MENUE_0))
            {
	    	object=1;
            }
            else if (c.equals(MENUE_1))
            {
	    	object=2;
            }
            else if (c.equals(MENUE_2))
            {
	    	object=3;
            }
            else if (c.equals(MENUE_3))
            {
	    	object=4;
            }
            else if (c.equals(MENUE_4))
            {
	    	object=5;
            }
            else if (c.equals(MENUE_5))
            {
	    	mono=!mono;
            }
            else if (c.equals(MENUE_6))
            {
	    	smooth=!smooth;
            }
            else if (c.equals(MENU_SNAPSHOT))
            {
	   	doSnapshot=true;
            }
            if (menu_showing)
            {
                menu_showing = false;
                setSuspended(save_suspended);
            }
	    pinit();
        }
     }
}

