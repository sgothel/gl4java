/**
 * @(#) moth.java
 * @(#) author: Robert Doyle (converted to Java by Ron Cemer)
 */

/* 
	"moth" by Robert Doyle, Naval Research Laboratory, Washington, DC.
    Scene objects are built into display lists in the 'init()' method.
    Objects are assembled and motion described in the 'display()' method.
*/

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;
import gl4java.GLContext;
import gl4java.awt.GLAnimCanvas;
import gl4java.applet.SimpleGLAnimApplet1;

public class moth extends SimpleGLAnimApplet1 
{

        /* Initialize the applet */


	public void init()
	{
	super.init();
        Dimension d = getSize();
        canvas = new mothCanvas(d.width, d.height);
        add("Center", canvas);
	}


        /* Local GLAnimCanvas extension class */


    private class mothCanvas extends GLAnimCanvas implements MouseListener
    {
        float wall_color[] = {1.0f, 1.0f, 1.0f, 1.0f};
        float wall_ambient[] = {0.5f, 0.5f, 0.5f, 1.0f};
        float floor_color[] = {0.5f, 1.0f, 0.5f, 0.5f};
        float column_color[] = {1.0f, 0.0f, 0.0f, 1.0f};
        float column_ambient[] = {0.25f, 0.0f, 0.0f, 1.0f};

        float panel_color[] = {0.1f, 0.1f, 1.0f, 1.0f};
        float panel_ambient[] = {0.01f, 0.01f, 0.3f, 1.0f};

        float lamp_ambient[] = {1.0f, 1.0f, 1.0f, 1.0f};
        float lamp_diffuse[] = {1.0f, 1.0f, 1.0f, 1.0f};
        float lamp_specular[] = {1.0f, 1.0f, 1.0f, 1.0f};
        float lamp_post_diffuse[] = {0.8f, 0.0f, 0.0f, 1.0f};
        float lamp_post_specular[] = {0.8f, 0.0f, 0.0f, 1.0f};
        float lamp_post_ambient[] = {0.25f, 0.0f, 0.0f, 1.0f};

        float satellite_diffuse[] = {1.0f, 0.69f, 0.0f, 1.0f};
        float satellite_shiny[] = {128.0f};
        float satellite_specular[] = {1.0f, 1.0f, 1.0f, 1.0f};
        float satellite_ambient[] = {0.37f, 0.25f, 0.0f, 1.0f};

        float cube_color[] = {1.0f, 1.0f, 0.0f, 1.0f};
        float cube_shiny[] = {99.0f};
        float cube_specular[] = {0.9f, 0.9f, 0.9f, 1.0f};
        float cube_ambient[] = {0.1f, 0.1f, 0.1f, 1.0f};

        float shadow_ambient[] = {0.0f, 0.0f, 0.0f, 1.0f};
        float shadow_diffuse[] = {0.0f, 0.0f, 0.0f, 0.3f};
        float shadow_shiny[] = {0.0f};
        float shadow_specular[] = {0.0f, 0.0f, 0.0f, 1.0f};

        int column = 3;
        int ground_shadow_matrix = 16;
        int left_wall_shadow_matrix = 17;
        int ground = 30;
        int left_wall = 40;
        int right_wall = 50;
        int four_columns = 7;
        int two_columns = 32;
        int satellite1 = 301;
        int satellite2 = 302;
        int panel1 = 303;
        int panel2 = 304;

        float default_Tx = -0.01f;
        float default_Ty = -0.01f;
        float default_Tz = -0.02f;

        float default_mvt_x = -15.0f;
        float default_mvt_y = -15.0f;
        float default_mvt_z = -30.7f;

        float default_mvr_d = 150.0f;

        float Tx = default_Tx;
        float Ty = default_Ty;
        float Tz = default_Tz;

        float mvt_x = default_mvt_x;
        float mvt_y = default_mvt_y;
        float mvt_z = default_mvt_z;

        float mvr_d = default_mvr_d;

        float mvr_x = 1.0f;
        float mvr_y = -1.0f;
        float mvr_z = -1.0f;

        float Rx = 0.1f;

        float cubeXform[] = new float[16];
        float column1Xform[] = new float[16];
        float column2Xform[] = new float[16];
        float column3Xform[] = new float[16];
        float four_columnsXform[] = new float[16];

        float shadowMat_ground[] = new float[16];
        float shadowMat_left[] = new float[16];
        float shadowMat_back[] = new float[16];
        float shadowMat_column[] = new float[16];
        float shadowMat_right[] = new float[16];

        float shadowMat1_ground[] = new float[16];
        float shadowMat1_left[] = new float[16];
        float shadowMat1_back[] = new float[16];
        float shadowMat1_right[] = new float[16];

        int tick = -1;

        boolean moving = true;

        float lightPos[] = {1.0f, 2.5f, 3.0f, 1.0f};

        float light1Pos[] = {0.0f, 1.6f, -5.0f, 1.0f};
        float light1Amb[] = {1.0f, 1.0f, 1.0f, 1.0f};
        float light1Diff[] = {1.0f, 1.0f, 1.0f, 1.0f};
        float light1Spec[] = {1.0f, 1.0f, 1.0f, 1.0f};
        
        float leftPlane[] = {1.0f, 0.0f, 0.0f, 4.88f}; /* X = -4.88 */
        float rightPlane[] = {-1.0f, 0.0f, 0.0f, 4.88f}; /* X = 4.98 */
        float groundPlane[] = {0.0f, 1.0f, 0.0f, 1.450f}; /* Y = -1.480 */
        float columnPlane[] = {0.0f, 0.0f, 1.0f, 0.899f}; /* Z = -0.899 */
        float backPlane[] = {0.0f, 0.0f, 1.0f, 8.98f}; /* Z = -8.98 */
        
        final float S = 0.7071f;
        final float NS = 0.382683f;
        final float NC = 0.923880f;

            /* satellite body. */
        float oct_vertices[][][] =
        {
            {
                {0.0f, 0.0f, 0.0f, 1.0f},
                {0.0f, 1.0f, 0.0f, 1.0f},
                {-S, S, 0.0f, 1.0f}},
             
            {
                {0.0f, 0.0f, 0.0f, 1.0f},
                {-S, S, 0.0f, 1.0f},
                {-1.0f, 0.0f, 0.0f, 1.0f}},
         
            {
                {0.0f, 0.0f, 0.0f, 1.0f},
                {-1.0f, 0.0f, 0.0f, 1.0f},
                {-S, -S, 0.0f, 1.0f}},
             
            {
                {0.0f, 0.0f, 0.0f, 1.0f},
                {-S, -S, 0.0f, 1.0f},
                {0.0f, -1.0f, 0.0f, 1.0f}},
             
            {
                {0.0f, 0.0f, 0.0f, 1.0f},
                {0.0f, -1.0f, 0.0f, 1.0f},
                {S, -S, 0.0f, 1.0f}},
             
            {
             
                {0.0f, 0.0f, 0.0f, 1.0f},
                {S, -S, 0.0f, 1.0f},
                {1.0f, 0.0f, 0.0f, 1.0f}},
             
            {
                {0.0f, 0.0f, 0.0f, 1.0f},
                {1.0f, 0.0f, 0.0f, 1.0f},
                {S, S, 0.0f, 1.0f}},
             
            {
                {0.0f, 0.0f, 0.0f, 1.0f},
                {S, S, 0.0f, 1.0f},
                {0.0f, 1.0f, 0.0f, 1.0f}}
         
        };

        float oct_side_vertices[][][] =
        {
            {
                {-S, S, 0.0f, 1.0f},
                {0.0f, 1.0f, 0.0f, 1.0f},
                {0.0f, 1.0f, -1.0f, 1.0f},
                {-S, S, -1.0f, 1.0f}},
             
            {
                {-1.0f, 0.0f, 0.0f, 1.0f},
                {-S, S, 0.0f, 1.0f},
                {-S, S, -1.0f, 1.0f},
                {-1.0f, 0.0f, -1.0f, 1.0f}},
             
            {
                {-S, -S, 0.0f, 1.0f},
                {-1.0f, 0.0f, 0.0f, 1.0f},
                {-1.0f, 0.0f, -1.0f, 1.0f},
                {-S, -S, -1.0f, 1.0f}},
             
            {
                {0.0f, -1.0f, 0.0f, 1.0f},
                {-S, -S, 0.0f, 1.0f}, 
                {-S, -S, -1.0f, 1.0f},
                {0.0f, -1.0f, -1.0f, 1.0f}},
             
            {
                {S, -S, 0.0f, 1.0f},
                {0.0f, -1.0f, 0.0f, 1.0f},
                {0.0f, -1.0f, -1.0f, 1.0f},
                {S, -S, -1.0f, 1.0f}},
             
            {
                {1.0f, 0.0f, 0.0f, 1.0f},
                {S, -S, 0.0f, 1.0f},
                {S, -S, -1.0f, 1.0f},
                {1.0f, 0.0f, -1.0f, 1.0f}},
             
            {
                {S, S, 0.0f, 1.0f},
                {1.0f, 0.0f, 0.0f, 1.0f},
                {1.0f, 0.0f, -1.0f, 1.0f},
                {S, S, -1.0f, 1.0f}},
             
            {
                {0.0f, 1.0f, 0.0f, 1.0f},
                {S, S, 0.0f, 1.0f},
                {S, S, -1.0f, 1.0f},
                {0.0f, 1.0f, -1.0f, 1.0f}}
             
        };       
			
        float oct_side_normals[][] =
        {
            {-NS, NC, 0.0f},
            {-NC, NS, 0.0f},
            {-NC, -NS, 0.0f},
            {-NS, -NC, 0.0f},     
            {NS, -NC, 0.0f},
            {NC, -NS, 0.0f},
            {NC, NS, 0.0f},
            {NS, NC, 0.0f}
        };

        float cube_vertexes[][][] =
        {
          {
            {-1.0f, -1.0f, -1.0f, 1.0f},
            {-1.0f, -1.0f, 1.0f, 1.0f},
            {-1.0f, 1.0f, 1.0f, 1.0f},
            {-1.0f, 1.0f, -1.0f, 1.0f}},
        
          {
            {1.0f, 1.0f, 1.0f, 1.0f},
            {1.0f, -1.0f, 1.0f, 1.0f},
            {1.0f, -1.0f, -1.0f, 1.0f},
            {1.0f, 1.0f, -1.0f, 1.0f}},
        
          {
            {-1.0f, -1.0f, -1.0f, 1.0f},
            {1.0f, -1.0f, -1.0f, 1.0f},
            {1.0f, -1.0f, 1.0f, 1.0f},
            {-1.0f, -1.0f, 1.0f, 1.0f}},
        
          {
            {1.0f, 1.0f, 1.0f, 1.0f},
            {1.0f, 1.0f, -1.0f, 1.0f},
            {-1.0f, 1.0f, -1.0f, 1.0f},
            {-1.0f, 1.0f, 1.0f, 1.0f}},
        
          {
            {-1.0f, -1.0f, -1.0f, 1.0f},
            {-1.0f, 1.0f, -1.0f, 1.0f},
            {1.0f, 1.0f, -1.0f, 1.0f},
            {1.0f, -1.0f, -1.0f, 1.0f}},
        
          {
            {1.0f, 1.0f, 1.0f, 1.0f},
            {-1.0f, 1.0f, 1.0f, 1.0f},
            {-1.0f, -1.0f, 1.0f, 1.0f},
            {1.0f, -1.0f, 1.0f, 1.0f}}
        };
        
        float cube_normals[][] =
        {
          {-1.0f, 0.0f, 0.0f, 0.0f},
          {1.0f, 0.0f, 0.0f, 0.0f},
          {0.0f, -1.0f, 0.0f, 0.0f},
          {0.0f, 1.0f, 0.0f, 0.0f},
          {0.0f, 0.0f, -1.0f, 0.0f},
          {0.0f, 0.0f, 1.0f, 0.0f}
        };

        public mothCanvas(int w, int h)
        {
            super(w, h);
            GLContext.gljNativeDebug = false;
            GLContext.gljClassDebug = false;
            setAnimateFps(30.0);
        }
    
        public void preInit()
        {
            doubleBuffer = true;
            stereoView = false;
        }
    
        public void init()
        {
            System.out.println("init(): " + this);
            reshape(getSize().width, getSize().height);

                /*** Initial light position is declared in the display function ***/

            gl.glLightfv(GL_LIGHT1, GL_AMBIENT, light1Amb);
            gl.glLightfv(GL_LIGHT1, GL_DIFFUSE, light1Diff);
            gl.glLightfv(GL_LIGHT1, GL_SPECULAR, light1Spec);
            gl.glEnable(GL_LIGHT1);
            
            gl.glEnable(GL_LIGHTING);

            gl.glLightf(GL_LIGHT1, GL_QUADRATIC_ATTENUATION, 0.07f); /* try 0.07 w/ 24 bit color */

                /*....Shadow Matrices For Floor, Left Wall, Back Wall, and Right Wall......*/

                    /* For light0 */

            myShadowMatrix(groundPlane, lightPos, shadowMat_ground);
            myShadowMatrix(leftPlane, lightPos, shadowMat_left);
            myShadowMatrix(columnPlane, lightPos, shadowMat_column);
            myShadowMatrix(backPlane, lightPos, shadowMat_back);   
            myShadowMatrix(rightPlane, lightPos, shadowMat_right);

                    /* For light1 */

            myShadowMatrix(groundPlane, light1Pos, shadowMat1_ground);
            myShadowMatrix(leftPlane, light1Pos, shadowMat1_left);
            myShadowMatrix(backPlane, light1Pos, shadowMat1_back);
            myShadowMatrix(rightPlane, light1Pos, shadowMat1_right);   

                /*sssssssssssssssss Make Satellite Body and Shadow ssssssssssssssssssssssss*/

            gl.glNewList(satellite1, GL_COMPILE);
            gl.glPushMatrix();
            drawSatellite(satellite_diffuse, satellite_ambient, satellite_specular, satellite_shiny);
            gl.glPopMatrix();
            gl.glEndList();
            gl.glNewList(satellite2, GL_COMPILE);
            gl.glPushMatrix();
            drawSatellite(shadow_diffuse, shadow_ambient, shadow_specular, shadow_shiny);
            gl.glPopMatrix();
            gl.glEndList();

                /*ppppppppppppppppppppppppppp Make Solar Panels and Shadows pppppppppppppppppp*/

            gl.glNewList(panel1, GL_COMPILE);
            gl.glPushMatrix();
            drawPanels(panel_color, panel_ambient);
            gl.glPopMatrix();
            gl.glEndList();
            
            gl.glNewList(panel2, GL_COMPILE);
            gl.glPushMatrix();
            drawPanels(shadow_diffuse, shadow_ambient);
            gl.glPopMatrix();
            gl.glEndList();  

                /*========= Make Floor ==============*/ 

            gl.glNewList(ground, GL_COMPILE);
            gl.glPushMatrix();
            gl.glPushAttrib(GL_LIGHTING_BIT);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, floor_color);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, shadow_ambient);
            gl.glTranslatef(0.0f, -1.5f, -5.0f);
            gl.glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
            gl.glScalef(5.0f, 5.0f, 1.0f);           
      		drawGround();  /* draw ground */
            gl.glPopAttrib();
            gl.glPopMatrix();
            gl.glEndList();

                /*@@@@@@@@@@ Make Lamp Post and Lamp @@@@@@@@@@@@*/

            gl.glNewList(21, GL_COMPILE);
            gl.glPushMatrix(); 
            gl.glPushAttrib(GL_LIGHTING_BIT); 
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, lamp_post_specular);
            gl.glTranslatef(0.0f, -0.1f, -5.0f);
            gl.glScalef(0.07f, 1.45f, 0.07f);    
	      	drawCube(lamp_post_diffuse, lamp_post_ambient);  /* draw lamp post */ 
            gl.glPopAttrib();
            gl.glPopMatrix();
            gl.glPushMatrix();
            gl.glTranslatef(0.0f, -1.45f, -5.0f);      
            gl.glScalef(0.3f, 0.05f, 0.3f);
            drawCube(wall_color, cube_ambient);  /* draw lamp post base */
            gl.glPopMatrix();
            gl.glEndList();

            gl.glNewList(22, GL_COMPILE);
            gl.glPushMatrix();
            gl.glPushAttrib(GL_LIGHTING_BIT); 
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, lamp_ambient);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, lamp_diffuse);            
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, lamp_specular);          
            gl.glTranslatef(0.0f, 1.6f, -5.0f);

                /* draw lamp */
            int qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,0.3f,20,20);
            glu.gluDeleteQuadric(qobj);

            gl.glPopAttrib();
            gl.glPopMatrix();
            gl.glEndList();

                /*** Lamp post base shadow ***/

            gl.glNewList(501, GL_COMPILE);
            gl.glPushMatrix();
            gl.glPushAttrib(GL_LIGHTING_BIT); 
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, shadow_ambient);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, shadow_diffuse);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, shadow_specular);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, shadow_shiny);
            gl.glTranslatef(0.0f, -1.49f, -5.0f);
            gl.glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
            gl.glScalef(0.7f, 0.7f, 1.0f);
            drawOct();
            gl.glPopAttrib();
            gl.glPopMatrix();
            gl.glEndList();

                /*||||||||||| Make Left Wall |||||||||||||*/

            gl.glNewList(left_wall, GL_COMPILE);
            gl.glPushMatrix();      
            gl.glPushAttrib(GL_LIGHTING_BIT);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, wall_color);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, wall_ambient);
            gl.glTranslatef(0.0f, -1.5f, 0.0f);
            gl.glTranslatef(0.0f, 1.2f, 0.0f);      
            gl.glTranslatef(0.0f, 0.0f, -5.0f);
            gl.glTranslatef(-5.0f, 0.0f, 0.0f);
            gl.glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
            gl.glScalef(4.5f, 1.2f, 1.0f);       
            gl.glNormal3f(0.0f, 0.0f, 1.0f);
            drawGround();  /* draw left wall */
            gl.glPopAttrib();
            gl.glPopMatrix();
            gl.glEndList();

                /*\\\\\\\\\\\\\ Make Right Wall \\\\\\\\\\\\\\\\\\\*/

            gl.glNewList(right_wall, GL_COMPILE);
            gl.glPushMatrix();
            gl.glPushAttrib(GL_LIGHTING_BIT);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, wall_color);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, wall_ambient);
            gl.glTranslatef(0.0f, -1.5f, 0.0f);
            gl.glTranslatef(0.0f, 1.2f, 0.0f);
            
            gl.glTranslatef(0.0f, 0.0f, -5.0f);
            gl.glTranslatef(5.0f, 0.0f, 0.0f);
            gl.glRotatef(270.0f, 0.0f, 1.0f, 0.0f);
                    
            gl.glScalef(4.5f, 1.2f, 1.0f);
            gl.glNormal3f(0.0f, 0.0f, 1.0f);      
            drawGround();  /* draw right wall */
            gl.glPopAttrib();
            gl.glPopMatrix();
            gl.glEndList();                        

                /*[[[[[[[[[[[ Build Columns ]]]]]]]]]]]*/
	
            gl.glPushMatrix();    
            gl.glNewList(1, GL_COMPILE);
            gl.glPushMatrix(); 
            gl.glScalef(0.4f, 1.4f, 0.4f);
            drawCube(column_color, column_ambient);  /* draw column1 */ 
            gl.glPopMatrix();
            gl.glEndList();
            
            gl.glNewList(2, GL_COMPILE);
            gl.glPushMatrix();
            gl.glTranslatef(0.0f, -1.45f, 0.0f);
            gl.glScalef(0.5f, 0.1f, 0.5f);
            drawCube(wall_color, cube_ambient); /* draw base */
            gl.glPopMatrix();
            gl.glPushMatrix();     
            gl.glTranslatef(0.0f, 1.45f, 0.0f);
            gl.glScalef(0.5f, 0.1f, 0.5f);
            drawCube(wall_color, cube_ambient); /* draw top */
            gl.glPopMatrix();
            gl.glEndList();          
            gl.glPopMatrix();
    
            gl.glNewList(column, GL_COMPILE);
            gl.glPushMatrix();
            gl.glCallList(1);
            gl.glCallList(2);
            gl.glPopMatrix();
            gl.glEndList(); 

                /***** Place columns at front of scene. *****/

            gl.glNewList(4, GL_COMPILE);
            gl.glPushMatrix();
            gl.glTranslatef(-5.0f, 0.0f, -0.5f);
            gl.glCallList(column); 
            gl.glPopMatrix();
            gl.glEndList();
                    	
            gl.glNewList(5, GL_COMPILE);
            gl.glPushMatrix();
            gl.glTranslatef(-1.75f, 0.0f, -0.5f);
            gl.glCallList(column); 
            gl.glPopMatrix();
            gl.glEndList();       

            gl.glNewList(6, GL_COMPILE);
            gl.glPushMatrix();
            gl.glTranslatef(1.75f, 0.0f, -0.5f);
            gl.glCallList(column); 
            gl.glPopMatrix();
            gl.glEndList();       
            
            gl.glNewList(17, GL_COMPILE);
            gl.glPushMatrix();
            gl.glTranslatef(5.0f, 0.0f, -0.5f);
            gl.glCallList(column); 
            gl.glPopMatrix();
            gl.glEndList();     

                /*** Get the modelview matrix once ***/
            gl.glPushMatrix();
            gl.glRotatef(-mvr_d, mvr_x, mvr_y, mvr_z);
            gl.glTranslatef(-mvt_x, -mvt_y, -mvt_z);
            gl.glGetFloatv(GL_MODELVIEW_MATRIX, four_columnsXform);
            gl.glPopMatrix();

            gl.glNewList(four_columns, GL_COMPILE);
            gl.glPushMatrix();
            gl.glCallList(4);
            gl.glCallList(5);
            gl.glCallList(6);
            gl.glCallList(17);
            gl.glPopMatrix(); 
            gl.glEndList();

                /***** Make two columns for sides of scene *****/

            gl.glNewList(two_columns, GL_COMPILE);
            gl.glPushMatrix();
            gl.glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
            gl.glTranslatef(5.0f, 0.0f, -5.0f);
            gl.glPushMatrix();
            gl.glTranslatef(0.0f, 0.0f, -0.3f);
            gl.glCallList(column); 
            gl.glPopMatrix();
            gl.glPushMatrix();
            gl.glTranslatef(0.0f, 0.0f, 10.3f);
            gl.glCallList(column); 
            gl.glPopMatrix();
            gl.glPopMatrix();
            gl.glEndList();     

                /* .......................Make shadows .........................*/

            gl.glPushMatrix();
            gl.glNewList(8, GL_COMPILE);
            gl.glPushMatrix(); 
            gl.glScalef(0.4f, 1.4f, 0.4f);
            drawCube(shadow_diffuse, shadow_ambient);   /* draw column1 */ 
            gl.glPopMatrix();
            gl.glEndList();


            gl.glNewList(9, GL_COMPILE);
            gl.glPushMatrix();
            gl.glTranslatef(0.0f, -1.45f, 0.0f);
            gl.glScalef(0.5f, 0.1f, 0.5f);
            drawCube(shadow_diffuse, shadow_ambient); /* draw base. */
            gl.glPopMatrix();
            gl.glPushMatrix(); 
            gl.glTranslatef(0.0f, 1.45f, 0.0f);
            gl.glScalef(0.5f, 0.1f, 0.5f);
            drawCube(shadow_diffuse, shadow_ambient); /* draw top. */
            gl.glPopMatrix();
            gl.glEndList();
            gl.glPopMatrix();
            
            gl.glNewList(10, GL_COMPILE);
            gl.glPushMatrix(); 
            gl.glCallList(8);
            gl.glCallList(9);
            gl.glPopMatrix();
            gl.glEndList();

            gl.glNewList(11, GL_COMPILE);
            gl.glPushMatrix();
            gl.glTranslatef(-5.0f, 0.0f, -0.5f);
            gl.glCallList(10); 
            gl.glPopMatrix();
            gl.glEndList();

            gl.glNewList(12, GL_COMPILE);
            gl.glPushMatrix();
            gl.glTranslatef(-1.75f, 0.0f, -0.5f);
            gl.glCallList(10); 
            gl.glPopMatrix();
            gl.glEndList(); 
            
            gl.glNewList(13, GL_COMPILE);
            gl.glPushMatrix();
            gl.glTranslatef(1.75f, 0.0f, -0.5f);
            gl.glCallList(10); 
            gl.glPopMatrix();
            gl.glEndList(); 
            
            gl.glNewList(14, GL_COMPILE);
            gl.glPushMatrix();
            gl.glTranslatef(5.0f, 0.0f, -0.5f);
            gl.glCallList(10); 
            gl.glPopMatrix();
            gl.glEndList(); 
            
            gl.glNewList(15, GL_COMPILE);
            gl.glPushMatrix();
            gl.glCallList(11);
            gl.glCallList(12);
            gl.glCallList(13);
            gl.glCallList(14); 
            gl.glPopMatrix();
            gl.glEndList();
            
            gl.glNewList(100, GL_COMPILE);
            gl.glPushMatrix();
            gl.glMultMatrixf(shadowMat_ground); 
            gl.glTranslatef(-mvt_x, -mvt_y, -mvt_z); /* correct for modelview matrix */
            gl.glRotatef(-mvr_d, mvr_x, mvr_y, mvr_z);
            gl.glMultMatrixf(four_columnsXform);
            gl.glCallList(15);
            gl.glPopMatrix();
            gl.glEndList();
            
            gl.glNewList(101, GL_COMPILE);
            gl.glPushMatrix();
            gl.glMultMatrixf(shadowMat_left); 
            gl.glTranslatef(-mvt_x, -mvt_y, -mvt_z); /* correct for modelview matrix */
            gl.glRotatef(-mvr_d, mvr_x, mvr_y, mvr_z);
            gl.glMultMatrixf(four_columnsXform);
            gl.glCallList(15);
            gl.glPopMatrix();
            gl.glEndList();
            
            gl.glNewList(102, GL_COMPILE);
            gl.glPushMatrix();
            gl.glMultMatrixf(shadowMat_back); 
            gl.glRotatef(-mvr_d, mvr_x, mvr_y, mvr_z);
            gl.glTranslatef(-mvt_x, -mvt_y, -mvt_z); /* correct for modelview matrix */
            gl.glMultMatrixf(four_columnsXform);
            gl.glCallList(15);
            gl.glPopMatrix();
            gl.glEndList();
            
            gl.glNewList(103, GL_COMPILE);
            gl.glPushMatrix();
            gl.glMultMatrixf(shadowMat_right); 
            gl.glRotatef(-mvr_d, mvr_x, mvr_y, mvr_z);
            gl.glTranslatef(-mvt_x, -mvt_y, -mvt_z); /* correct for modelview matrix */
            gl.glMultMatrixf(four_columnsXform);
            gl.glCallList(15);
            gl.glPopMatrix();
            gl.glEndList();
            
            glj.gljCheckGL();

            addMouseListener(this);
        }
    
        public void doCleanup()
        {
            System.out.println("destroy(): " + this);
            removeMouseListener(this);
        }
    
        public void reshape(int width, int height)
        {
            gl.glViewport(0,0,width,height);
            gl.glMatrixMode(GL_PROJECTION);


            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();

            gl.glFrustum(-0.9f, 0.9f, -0.9f, 0.9f, 1.0f, 35.0f);

            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();

            gl.glEnable(GL_NORMALIZE);
            gl.glEnable(GL_CULL_FACE);
            gl.glCullFace(GL_BACK);      /* double your fun */
            gl.glShadeModel(GL_SMOOTH);
            gl.glDepthFunc(GL_LESS);
            gl.glDepthMask(true);
            gl.glEnable(GL_DEPTH_TEST);
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            tick++;
            if (tick >= 60) tick = 0;

            gl.glPushMatrix();

            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            gl.glLoadIdentity();

                /*@@@@@@ Rotation and Translation of Entire Scene @@@@@*/
		
            if (mvt_x < 0.0f && mvt_y < 0.0f)
            {
                gl.glTranslatef(mvt_x ,mvt_y ,mvt_z );
                mvt_x = mvt_x - Tx;
                mvt_y = mvt_y - Ty;
                mvt_z = mvt_z - Tz;

                gl.glRotatef(mvr_d, mvr_x, mvr_y, mvr_z);
                mvr_d = mvr_d - Rx;
            }
            else
                gl.glTranslatef(0.0f, 0.0f ,mvt_z);

                /*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

            gl.glPushMatrix();
            gl.glLightfv(GL_LIGHT1, GL_POSITION, light1Pos);
            gl.glPopMatrix();

                /*______________________ Draw Floor _______________________*/
  
            gl.glPushMatrix();
            gl.glCallList(ground);
            gl.glPopMatrix();

                /*@@@@@@@@@ Draw Lamp Post amd Lamp @@@@@@@@@@*/

            gl.glPushMatrix();
            gl.glCallList(21);
            gl.glPopMatrix(); 

            gl.glPushMatrix();
            gl.glCallList(22);
            gl.glPopMatrix();

            gl.glPushMatrix();
            gl.glEnable(GL_BLEND);
            gl.glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            gl.glCallList(501);
            gl.glDisable(GL_BLEND);
            gl.glPopMatrix(); 

                /*||||||||||||||||||| Draw Left Wall ||||||||||||||||||*/  

            gl.glCallList(left_wall); 
    
                /*\\\\\\\\\\\\\\\\ Draw Right Wall \\\\\\\\\\\\\\*/
  
            gl.glCallList(right_wall);

                /*[[[[[[[[[[[[[[[[[[[ Draw Columns ]]]]]]]]]]]]]]]]]]]*/

                    /***** Place columns at front of scene. *****/

            gl.glCallList(four_columns); 
       
                    /***** Place columns at back of scene. *****/

            gl.glPushMatrix();
            gl.glTranslatef(0.0f, 0.0f, -9.0f);
            gl.glCallList(four_columns); 
            gl.glPopMatrix();

                    /***** Place columns at centers of left and right walls. *****/  

            gl.glCallList(two_columns); 

                    /************************* CUBE ***********************/

            gl.glMaterialf(GL_FRONT, GL_SHININESS, 99.0f);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, cube_specular);

            gl.glPushMatrix();
            gl.glTranslatef(0.0f, 0.0f, -5.0f);
            gl.glRotatef((360.0f / (30 * 2)) * tick, 0, 1, 0);   
            gl.glPushMatrix();
            gl.glTranslatef(0.0f, 0.2f, 2.0f);
            gl.glRotatef((360.0f / (30 * 1)) * tick, 1, 0, 0);
            gl.glRotatef((360.0f / (30 * 2)) * tick, 0, 1, 0);
            gl.glRotatef((360.0f / (30 * 4)) * tick, 0, 0, 1);
    
            gl.glGetFloatv(GL_MODELVIEW_MATRIX, cubeXform);

            gl.glCallList(satellite1);
            gl.glCallList(panel1);

            gl.glPopMatrix();
            gl.glPopMatrix();

            gl.glMaterialf(GL_FRONT, GL_SHININESS, 0.0f);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, shadow_specular);

                /*................... CUBE SHADOWS .............................*/  

            gl.glEnable(GL_BLEND);
            gl.glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
  
            gl.glPushMatrix();
            gl.glMultMatrixf(shadowMat1_ground);  
            gl.glRotatef(-mvr_d, mvr_x, mvr_y, mvr_z);
            gl.glTranslatef(-mvt_x, -mvt_y, -mvt_z);   /* correct for modelview matrix */   
            gl.glMultMatrixf(cubeXform);


            gl.glCallList(satellite2);
            gl.glTranslatef(0.0f, -.040f, 0.0f);
            gl.glCallList(panel2);
            gl.glPopMatrix(); 

                /* Shadow left wall only if cube is in front of left wall. */
            if((tick*6) >= 220 && (tick*6) <= 320)
            {
                gl.glPushMatrix();
                gl.glMultMatrixf(shadowMat1_left);
                gl.glRotatef(-mvr_d, mvr_x, mvr_y, mvr_z);
                gl.glTranslatef(-mvt_x, -mvt_y, -mvt_z);   /* correct for modelview matrix */
                gl.glMultMatrixf(cubeXform);
                drawSatellite(shadow_diffuse, shadow_ambient, shadow_specular, shadow_shiny);      /* draw left shadow */
                drawPanels(shadow_diffuse, shadow_ambient);
                gl.glPopMatrix();
            }
	
                /* Shadow back wall only if cube is in front of back wall. */
            if((tick*6) >= 125 && (tick*6) <= 330)
            {
                gl.glPushMatrix();
                gl.glMultMatrixf(shadowMat1_back);  
                gl.glRotatef(-mvr_d, mvr_x, mvr_y, mvr_z);
                gl.glTranslatef(-mvt_x, -mvt_y, -mvt_z);   /* correct for modelview matrix */
                gl.glMultMatrixf(cubeXform);
                drawSatellite(shadow_diffuse, shadow_ambient, shadow_specular, shadow_shiny);      /* draw back wall shadow */
                drawPanels(shadow_diffuse, shadow_ambient);
                gl.glPopMatrix();
            }

                /* Shadow right wall only if cube is in front of right wall.  */
            if((tick*6) >= 40 && (tick*6) <= 145)
            {
                gl.glPushMatrix();
                gl.glMultMatrixf(shadowMat1_right);  
                gl.glRotatef(-mvr_d, mvr_x, mvr_y, mvr_z);
                gl.glTranslatef(-mvt_x, -mvt_y, -mvt_z);   /* correct for modelview matrix */
                gl.glMultMatrixf(cubeXform);
                drawSatellite(shadow_diffuse, shadow_ambient, shadow_specular, shadow_shiny);      /* draw right wall shadow */
                drawPanels(shadow_diffuse, shadow_ambient);
                gl.glPopMatrix();
            }

            gl.glDisable(GL_BLEND);

            gl.glPopMatrix(); /* Clear the matrix stack */

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
    
            //if (!isSuspended()) repaint();  // Animate at full speed.
        }

        // Methods required for the implementation of MouseListener
        public void mouseEntered( MouseEvent evt )
        {
        }
    
        public void mouseExited( MouseEvent evt )
        {
        }
    
        public void mousePressed( MouseEvent evt )
        {
            if ((evt.getModifiers() & evt.BUTTON3_MASK) != 0)
            {
                Tx = default_Tx;
                Ty = default_Ty;
                Tz = default_Tz;
        
                mvt_x = default_mvt_x;
                mvt_y = default_mvt_y;
                mvt_z = default_mvt_z;

                mvr_d = default_mvr_d;

                tick = -1;

                setSuspended(false);
                moving = true;
            }
            else
            {
                setSuspended(moving);
                moving = !moving;
            }
        }
    
        public void mouseReleased( MouseEvent evt )
        {
        }
    
        public void mouseClicked( MouseEvent evt )
        {
        }
            /*%%%%%%%%%%%%%%%%%%%% DRAW CUBE %%%%%%%%%%%%%%%%%%*/

        private void drawCube(float color[], float ambient[])
        {
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, color);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, ambient);
        
            for (int i = 0; i < 6; ++i)
            {
                gl.glNormal3fv(cube_normals[i]);
                gl.glBegin(GL_POLYGON);
                gl.glVertex4fv(cube_vertexes[i][0]);
                gl.glVertex4fv(cube_vertexes[i][1]);
                gl.glVertex4fv(cube_vertexes[i][2]);
                gl.glVertex4fv(cube_vertexes[i][3]);
                gl.glEnd();
            }
        }

            /*OOOOOOOOOOO DRAW OCTOGON TOP OOOOOOOOOOOOO*/

        private void drawOct()
        {
            for (int i = 0; i < 8; ++i)
            {
                gl.glNormal3f(0.0f, 0.0f, 1.0f);
                gl.glBegin(GL_TRIANGLE_FAN);
                gl.glVertex4fv(oct_vertices[i][0]);
                gl.glVertex4fv(oct_vertices[i][1]);
                gl.glVertex4fv(oct_vertices[i][2]);    
                gl.glEnd();
            }
        }

            /*oooooooooooDRAW OCTOGON SIDES ooooooooo*/
        
        private void drawOctSides()
        {
            for (int i = 0; i < 8; ++i)
            {
                gl.glNormal3fv(oct_side_normals[i]);
                gl.glBegin(GL_POLYGON);
                gl.glVertex4fv(oct_side_vertices[i][0]);
                gl.glVertex4fv(oct_side_vertices[i][1]);
                gl.glVertex4fv(oct_side_vertices[i][2]);
                gl.glVertex4fv(oct_side_vertices[i][3]);
                gl.glEnd();
            }
        }
        
            /*SSSSSSSSSSSSSSSS DRAW SATELLITE BODY SSSSSSSSSSSSSSSSSSS*/
        
        private void drawSatellite(float diffuse[], float ambient[], float specular[], float shiny[])
        {
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuse);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, ambient);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, specular);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, shiny); 
        
            gl.glPushMatrix();
            gl.glScalef(0.3f, 0.3f, 0.9f);
            gl.glPushMatrix();
            drawOctSides();
            gl.glPopMatrix();
    
            gl.glPushMatrix();
            gl.glTranslatef(0.0f, 0.0f, 0.0f);
            drawOct();   
            gl.glPopMatrix();
            gl.glPushMatrix();
            gl.glRotatef(180f, 1.0f, 0.0f, 0.0f);
            gl.glTranslatef(0.0f, 0.0f, 1.0f);
            drawOct();
            gl.glPopMatrix(); 
            gl.glPopMatrix(); 
        }
        
            /*PPPPPPPPPPPPPPPP DRAW SOLAR PANELS PPPPPPPPPPPP*/
        
        private void drawPanels(float color[], float ambient[])
        {
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, color);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, ambient); 
        
            gl.glPushMatrix();
            gl.glTranslatef(0.95f, 0.0f, -0.45f);
            gl.glRotatef(45.0f, 1.0f, 0.0f, 0.0f);
            gl.glScalef(0.65f, 0.20f, 0.02f);
            drawCube(color, ambient);
            gl.glPopMatrix();
            gl.glPushMatrix();
            gl.glTranslatef(-0.95f, 0.0f, -0.45f);
            gl.glRotatef(45.0f, 1.0f, 0.0f, 0.0f);
            gl.glScalef(0.65f, 0.20f, 0.02f);
            drawCube(color, ambient);
            gl.glPopMatrix();
        }
        
            /*################ DRAW FLOOR ################*/
        
        private void drawFloor(float f_color[], float ambient[])
        {
                
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, f_color);
            gl.glMaterialfv(GL_FRONT, GL_AMBIENT, ambient);
        
            gl.glBegin(GL_QUADS);    
            gl.glVertex3f(-1.0f, -1.0f, 0.0f);    
            gl.glVertex3f(1.0f, -1.0f, 0.0f); 
            gl.glVertex3f(1.0f, 1.0f, 0.0f);
            gl.glVertex3f(-1.0f, 1.0f, 0.0f);  
            gl.glEnd();
        }
        
            /*||||||||||||||| DRAW GROUND |||||||||||||||||*/
        
            /* Ground coordinates are in drawGround() below. Subdivision */
            /* of triangles id done by subDivide(). */
        
        private void subDivide(float u1[], float u2[], float u3[], int depth)
        {
            float u12[] = new float[3];
            float u23[] = new float[3];
            float u31[] = new float[3]; 
        
            if (depth == 0)
            {
                gl.glBegin(GL_POLYGON);
                gl.glNormal3f(0.0f, 0.0f, 1.0f); gl.glVertex3fv(u1);
                gl.glNormal3f(0.0f, 0.0f, 1.0f); gl.glVertex3fv(u2);
                gl.glNormal3f(0.0f, 0.0f, 1.0f); gl.glVertex3fv(u3);
                gl.glEnd();
                return;
            }
        
            for (int i = 0; i < 3; i++)
            {
                u12[i] = (u1[i] + u2[i]) / 2.0f;
                u23[i] = (u2[i] + u3[i]) / 2.0f;
                u31[i] = (u3[i] + u1[i]) / 2.0f; 
            } 
            subDivide(u1, u12, u31, depth - 1);  
            subDivide(u2, u23, u12, depth - 1);
            subDivide(u3, u31, u23, depth - 1);
            subDivide(u12, u23, u31, depth - 1); 
        }
        
        private void drawGround()
        {
                /* Use two subdivided triangles for the unscaled 1X1 square. */
                /* Subdivide to this depth: */
        
            int maxdepth = 2;
        
                /* Coordinates of first triangle: */
        
            float u1[] = {-1.0f, -1.0f, 0.0f};
            float u2[] = {1.0f, -1.0f, 0.0f};
            float u3[] = {1.0f, 1.0f, 0.0f};  
        
                /* Coordinates of second triangle: */
                
            float v1[] = {-1.0f, -1.0f, 0.0f};
            float v2[] = {1.0f, 1.0f, 0.0f};
            float v3[] = {-1.0f, 1.0f, 0.0f};
        
            subDivide(u1, u2, u3, maxdepth);
            subDivide(v1, v2, v3, maxdepth);
        }
         
            /* Matrix for shadow. From Mark Kilgard's "scube". */
        
        private void myShadowMatrix(float ground[], float light[], float shadowMat[])
        {
            float dot;
        
            dot =
                ground[0] * light[0] +
                ground[1] * light[1] +
                ground[2] * light[2] +
                ground[3] * light[3];

            shadowMat[0] = dot - light[0] * ground[0];
            shadowMat[4] = -light[0] * ground[1];
            shadowMat[8] = -light[0] * ground[2];
            shadowMat[12] = -light[0] * ground[3];
            
            shadowMat[1] = -light[1] * ground[0];
            shadowMat[5] = dot - light[1] * ground[1];
            shadowMat[9] = -light[1] * ground[2];
            shadowMat[13] = -light[1] * ground[3];
            
            shadowMat[2] = -light[2] * ground[0];
            shadowMat[6] = -light[2] * ground[1];
            shadowMat[10] = dot - light[2] * ground[2];
            shadowMat[14] = -light[2] * ground[3];
            
            shadowMat[3] = -light[3] * ground[0];
            shadowMat[7] = -light[3] * ground[1];
            shadowMat[11] = -light[3] * ground[2];
            shadowMat[15] = dot - light[3] * ground[3];
        }
    }
}
