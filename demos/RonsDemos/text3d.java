/**
 * @(#) text3d.java
 * @(#) author: Robert J. Doyle, Jr. (converted to Java by Ron Cemer)
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

public class text3d extends SimpleGLAnimApplet1 
{
    private static final float letterM[][] =
    { 
        {-3.125000f, 0.000000f, 0.000000f},
        {-3.125000f, 6.208000f, 0.000000f},
        {-1.233000f, 6.208000f, 0.000000f},
        {0.003000f, 1.484000f, 0.000000f},
        {1.223000f, 6.208000f, 0.000000f},
        {3.123000f, 6.208000f, 0.000000f},
        {3.123000f, 0.000000f, 0.000000f},
        {1.923000f, 0.000000f, 0.000000f},
        {1.923000f, 5.010000f, 0.000000f},
        {0.659000f, 0.000000f, 0.000000f},
        {-0.649000f, 0.000000f, 0.000000f},
        {-1.925000f, 5.010000f, 0.000000f},
        {-1.925000f, 0.000000f, 0.000000f}
    };
    private static final int letterMtris[][] =
    {
        { 1, 0, 12 },
        { 1, 12, 11 },
        { 1, 11, 2 },
        { 2, 11, 3 },
        { 11, 10, 3 },
        { 3, 10, 9 },
        { 3, 9, 8 },
        { 3, 8, 4 },
        { 4, 8, 5 },
        { 5, 8, 7 },
        { 5, 7, 6 },
    };
    private static final float letterO[][] =
    { 
        {-3.038000f, 3.102000f, 0.0f},
        {-2.974000f, 3.874000f, 0.0f},
        {-2.827000f, 4.440000f, 0.0f},
        {-2.802000f, 4.508000f, 0.0f},
        {-2.544000f, 5.042000f, 0.0f},
        {-2.502000f, 5.110000f, 0.0f},
        {-2.223000f, 5.479000f, 0.0f},
        {-2.132000f, 5.576000f, 0.0f},
        {-1.784000f, 5.869000f, 0.0f},
        {-1.678000f, 5.940000f, 0.0f},
        {-1.260000f, 6.155000f, 0.0f},
        {-1.148000f, 6.198000f, 0.0f},
        {-0.677000f, 6.321000f, 0.0f},
        {-0.638000f, 6.328000f, 0.0f},
        {-0.002000f, 6.378000f, 0.0f},
        {0.634000f, 6.328000f, 0.0f},
        {1.107000f, 6.210000f, 0.0f},
        {1.144000f, 6.198000f, 0.0f},
        {1.570000f, 6.002000f, 0.0f},
        {1.674000f, 5.940000f, 0.0f},
        {2.038000f, 5.661000f, 0.0f},
        {2.128000f, 5.576000f, 0.0f},
        {2.428000f, 5.217000f, 0.0f},
        {2.504000f, 5.104000f, 0.0f},
        {2.762000f, 4.598000f, 0.0f},
        {2.798000f, 4.508000f, 0.0f},
        {2.960000f, 3.913000f, 0.0f},
        {2.970000f, 3.862000f, 0.0f},
        {3.034000f, 3.102000f, 0.0f},
        {2.970000f, 2.342000f, 0.0f},
        {2.815000f, 1.745000f, 0.0f},
        {2.798000f, 1.696000f, 0.0f},
        {2.554000f, 1.182000f, 0.0f},
        {2.504000f, 1.100000f, 0.0f},
        {2.221000f, 0.726000f, 0.0f},
        {2.128000f, 0.628000f, 0.0f},
        {1.776000f, 0.332000f, 0.0f},
        {1.674000f, 0.264000f, 0.0f},
        {1.256000f, 0.049000f, 0.0f},
        {1.144000f, 0.006000f, 0.0f},
        {0.672000f, -0.117000f, 0.0f},
        {0.634000f, -0.124000f, 0.0f},
        {-0.002000f, -0.174000f, 0.0f},
        {-0.638000f, -0.124000f, 0.0f},
        {-1.112000f, -0.006000f, 0.0f},
        {-1.148000f, 0.006000f, 0.0f},
        {-1.576000f, 0.202000f, 0.0f},
        {-1.678000f, 0.264000f, 0.0f},
        {-2.041000f, 0.540000f, 0.0f},
        {-2.132000f, 0.628000f, 0.0f},
        {-2.430000f, 0.983000f, 0.0f},
        {-2.502000f, 1.094000f, 0.0f},
        {-2.773000f, 1.622000f, 0.0f},
        {-2.802000f, 1.696000f, 0.0f},
        {-2.962000f, 2.258000f, 0.0f},
        {-2.974000f, 2.330000f, 0.0f},
        {-1.736000f, 3.102000f, 1.0f},          // Begin new strip
        {-1.710000f, 3.578000f, 0.0f},
        {-1.644000f, 3.934000f, 0.0f},
        {-1.503000f, 4.328000f, 0.0f},
        {-1.494000f, 4.346000f, 0.0f},
        {-1.352000f, 4.593000f, 0.0f},
        {-1.306000f, 4.656000f, 0.0f},
        {-1.120000f, 4.857000f, 0.0f},
        {-1.040000f, 4.926000f, 0.0f},
        {-0.825000f, 5.067000f, 0.0f},
        {-0.726000f, 5.116000f, 0.0f},
        {-0.480000f, 5.200000f, 0.0f},
        {-0.402000f, 5.218000f, 0.0f},
        {-0.041000f, 5.257000f, 0.0f},
        {-0.002000f, 5.258000f, 0.0f},
        {0.361000f, 5.227000f, 0.0f},
        {0.400000f, 5.220000f, 0.0f},
        {0.650000f, 5.147000f, 0.0f},
        {0.726000f, 5.116000f, 0.0f},
        {0.950000f, 4.990000f, 0.0f},
        {1.038000f, 4.926000f, 0.0f},
        {1.239000f, 4.736000f, 0.0f},
        {1.306000f, 4.656000f, 0.0f},
        {1.462000f, 4.413000f, 0.0f},
        {1.498000f, 4.342000f, 0.0f},
        {1.635000f, 3.964000f, 0.0f},
        {1.644000f, 3.934000f, 0.0f},
        {1.710000f, 3.568000f, 0.0f},
        {1.736000f, 3.102000f, 0.0f},
        {1.710000f, 2.636000f, 0.0f},
        {1.642000f, 2.268000f, 0.0f},
        {1.508000f, 1.886000f, 0.0f},
        {1.496000f, 1.860000f, 0.0f},
        {1.351000f, 1.610000f, 0.0f},
        {1.304000f, 1.546000f, 0.0f},
        {1.115000f, 1.343000f, 0.0f},
        {1.036000f, 1.276000f, 0.0f},
        {0.823000f, 1.135000f, 0.0f},
        {0.724000f, 1.086000f, 0.0f},
        {0.480000f, 1.001000f, 0.0f},
        {0.400000f, 0.984000f, 0.0f},
        {0.035000f, 0.946000f, 0.0f},
        {-0.002000f, 0.946000f, 0.0f},
        {-0.368000f, 0.979000f, 0.0f},
        {-0.402000f, 0.986000f, 0.0f},
        {-0.653000f, 1.057000f, 0.0f},
        {-0.726000f, 1.088000f, 0.0f},
        {-0.952000f, 1.213000f, 0.0f},
        {-1.040000f, 1.278000f, 0.0f},
        {-1.240000f, 1.467000f, 0.0f},
        {-1.306000f, 1.548000f, 0.0f},
        {-1.460000f, 1.788000f, 0.0f},
        {-1.494000f, 1.858000f, 0.0f},
        {-1.639000f, 2.251000f, 0.0f},
        {-1.644000f, 2.270000f, 0.0f},
        {-1.710000f, 2.626000f, 0.0f}
    };
    private static final int letterOtris[][] =
    {
        { 0, 56, 1 },
        { 1, 56, 57 },
        { 1, 57, 2 },
        { 2, 57, 58 },
        { 2, 58, 3 },
        { 3, 58, 59 },
        { 3, 59, 4 },
        { 4, 59, 60 },
        { 4, 60, 5 },
        { 5, 60, 61 },
        { 5, 61, 6 },
        { 6, 61, 62 },
        { 6, 62, 7 },
        { 7, 62, 63 },
        { 7, 63, 8 },
        { 8, 63, 64 },
        { 8, 64, 9 },
        { 9, 64, 65 },
        { 9, 65, 10 },
        { 10, 65, 66 },
        { 10, 66, 11 },
        { 11, 66, 67 },
        { 11, 67, 12 },
        { 12, 67, 68 },
        { 12, 68, 13 },
        { 13, 68, 69 },
        { 13, 69, 14 },
        { 14, 69, 70 },
        { 14, 70, 15 },
        { 15, 70, 71 },
        { 15, 71, 16 },
        { 16, 71, 72 },
        { 16, 72, 17 },
        { 17, 72, 73 },
        { 17, 73, 18 },
        { 18, 73, 74 },
        { 18, 74, 19 },
        { 19, 74, 75 },
        { 19, 75, 20 },
        { 20, 75, 76 },
        { 20, 76, 21 },
        { 21, 76, 77 },
        { 21, 77, 22 },
        { 22, 77, 78 },
        { 22, 78, 23 },
        { 23, 78, 79 },
        { 23, 79, 24 },
        { 24, 79, 80 },
        { 24, 80, 25 },
        { 25, 80, 81 },
        { 25, 81, 26 },
        { 26, 81, 82 },
        { 26, 82, 27 },
        { 27, 82, 83 },
        { 27, 83, 28 },
        { 28, 83, 84 },
        { 28, 84, 29 },
        { 29, 84, 85 },
        { 29, 85, 30 },
        { 30, 85, 86 },
        { 30, 86, 31 },
        { 31, 86, 87 },
        { 31, 87, 32 },
        { 32, 87, 88 },
        { 32, 88, 33 },
        { 33, 88, 89 },
        { 33, 89, 34 },
        { 34, 89, 90 },
        { 34, 90, 35 },
        { 35, 90, 91 },
        { 35, 91, 36 },
        { 36, 91, 92 },
        { 36, 92, 37 },
        { 37, 92, 93 },
        { 37, 93, 38 },
        { 38, 93, 94 },
        { 38, 94, 39 },
        { 39, 94, 95 },
        { 39, 95, 40 },
        { 40, 95, 96 },
        { 40, 96, 41 },
        { 41, 96, 97 },
        { 41, 97, 42 },
        { 42, 97, 98 },
        { 42, 98, 43 },
        { 43, 98, 99 },
        { 43, 99, 44 },
        { 44, 99, 100 },
        { 44, 100, 45 },
        { 45, 100, 101 },
        { 45, 101, 46 },
        { 46, 101, 102 },
        { 46, 102, 47 },
        { 47, 102, 103 },
        { 47, 103, 48 },
        { 48, 103, 104 },
        { 48, 104, 49 },
        { 49, 104, 105 },
        { 49, 105, 50 },
        { 50, 105, 106 },
        { 50, 106, 51 },
        { 51, 106, 107 },
        { 51, 107, 52 },
        { 52, 107, 108 },
        { 52, 108, 53 },
        { 53, 108, 109 },
        { 53, 109, 54 },
        { 54, 109, 110 },
        { 54, 110, 55 },
        { 55, 110, 111 },
        { 55, 111, 0 },
        { 0, 111, 56 },
    };
    private static final float letterT[][] = 
    {
        {-0.640000f, 0.000000f, 0.0f},
        {-0.640000f, 5.104000f, 0.0f},
        {-2.476000f, 5.104000f, 0.0f},
        {-2.476000f, 6.208000f, 0.0f},
        {2.476000f, 6.208000f, 0.0f},
        {2.476000f, 5.104000f, 0.0f},
        {0.640000f, 5.104000f, 0.0f},
        {0.640000f, 0.000000f, 0.0f}
    };
    private static final int letterTtris[][] =
    {
        { 1, 0, 7 },
        { 1, 7, 6 },
        { 3, 2, 1 },
        { 3, 1, 6 },
        { 3, 6, 4 },
        { 4, 6, 5 },
    };
    private static final float letterH[][] = 
    {
        {-2.570000f, 0.000000f, 0.0f},
        {-2.570000f, 6.208000f, 0.0f},
        {-1.282000f, 6.208000f, 0.0f},
        {-1.282000f, 3.900000f, 0.0f},
        {1.280000f, 3.900000f, 0.0f},
        {1.280000f, 6.208000f, 0.0f},
        {2.568000f, 6.208000f, 0.0f},
        {2.568000f, 0.000000f, 0.0f},
        {1.280000f, 0.000000f, 0.0f},
        {1.280000f, 2.760000f, 0.0f},
        {-1.282000f, 2.760000f, 0.0f},
        {-1.282000f, 0.000000f, 0.0f}
    };
    private static final int letterHtris[][] =
    {
        { 1, 0, 11 },
        { 1, 11, 10 },
        { 1, 10, 3 },
        { 1, 3, 2 },
        { 3, 10, 9 },
        { 3, 9, 4 },
        { 6, 5, 4 },
        { 6, 4, 9 },
        { 6, 9, 8 },
        { 6, 8, 7 },
    };


        /* Initialize the applet */


	public void init()
	{
	super.init();
        Dimension d = getSize();
        canvas = new text3dCanvas(d.width, d.height);
        add("Center", canvas);
	}


        /* Local GLAnimCanvas extension class */


    private class text3dCanvas extends GLAnimCanvas
    {
        private final int
            M_SIDE = 1,  M_EDGE = 2,  M_WHOLE = 3,
            O_SIDE = 4,  O_EDGE = 5,  O_WHOLE = 6,
            T_SIDE = 7,  T_EDGE = 8,  T_WHOLE = 9,
            H_SIDE = 10, H_EDGE = 11, H_WHOLE = 12,
            REPEAT_SIDE  = 13, REPEAT_EDGE = 14,  REPEAT1 = 15,
            REPEAT2_SIDE = 16, REPEAT2_EDGE = 17, REPEAT2 = 18,
            REPEAT3_SIDE = 19, REPEAT3_EDGE = 20, REPEAT3 = 21,
            REPEAT4_SIDE = 22, REPEAT4_EDGE = 23, REPEAT4 = 24;
        private float sideColor[] = {0.0f, 0.0f, 0.5f, 1.0f};
        private float edgeColor[] = {0.7f, 0.7f, 0.0f, 1.0f};
        private float shininess[] = {128.0f};
        private float mat_specular[] = {0.7f, 0.7f, 0.7f, 1.0f};
        private float width = 0.0f, width2 = 2.0f;

        public text3dCanvas(int w, int h)
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
	    accumSize = 8;
        }
    
        public void init()
        {
            System.out.println("init(): " + this);
            reshape(getSize().width, getSize().height);

            int count1 = letterM.length;
            int count2 = letterO.length;
            int count3 = letterT.length;
            int count4 = letterH.length;
        
            int i;
         
            float light_ambient[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            float light_diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
            float light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
                /* light_position is NOT default value */
            float light_position[] = { -1.0f, -1.0f, 1.0f, 0.0f };
        
            gl.glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
            gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
            gl.glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
            gl.glLightfv(GL_LIGHT0, GL_POSITION, light_position);
            
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            gl.glDepthFunc(GL_LESS);
            gl.glEnable(GL_DEPTH_TEST);
        
            gl.glDrawBuffer(GL_FRONT_AND_BACK);
            gl.glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
            gl.glClear(GL_COLOR_BUFFER_BIT);
            gl.glClear(GL_ACCUM_BUFFER_BIT);
            gl.glDrawBuffer(GL_BACK); 

                /* Zero position of text */

            for(i = 0; i < count1; i++)
                letterM[i][1] -= 3.175f;
            for(i = 0; i < count2; i++)
                letterO[i][1] -= 3.175f;
            for(i = 0; i < count3; i++)
                letterT[i][1] -= 3.175f;
            for(i = 0; i < count4; i++)
                letterH[i][1] -= 3.175f;

            glj.gljCheckGL();
        }
    
        public void reshape(int width, int height)
        {
            gl.glViewport(0,0,width,height);
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            gl.glFrustum(-7.0f, 7.0f, -7.0f, 7.0f, 6.0f, 20.0f);
            gl.glMatrixMode(GL_MODELVIEW);
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            int i, j;
            float xPos = -0.34f;
            gl.glLoadIdentity();
            gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
             
            gl.glTranslatef(0.0f, 0.0f, -10.0f);
        
            extrudeSolidFromPolygon
                (letterM, letterMtris, width2, REPEAT_SIDE, REPEAT_EDGE, REPEAT1);
            extrudeSolidFromPolygon
                (letterO, letterOtris, width2, REPEAT2_SIDE, REPEAT2_EDGE, REPEAT2);
            extrudeSolidFromPolygon
                (letterT, letterTtris, width2, REPEAT3_SIDE, REPEAT3_EDGE, REPEAT3);
            extrudeSolidFromPolygon
                (letterH, letterHtris, width2, REPEAT4_SIDE, REPEAT4_EDGE, REPEAT4);      

            for (j = 1; j < 5; j++)
            {
                width = 0.0f;
                glj.gljCheckGL();
                for (i = 0; i < 10; i++)
                {
                    gl.glPushMatrix();
                    repeat(j);
                    gl.glPopMatrix();
                    gl.glPushMatrix();
                    gl.glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
                    switch (j)
                    {
                    case 1:
                        extrudeSolidFromPolygon
                            (letterM, letterMtris, width, M_SIDE, M_EDGE, M_WHOLE);
                        gl.glCallList(M_WHOLE);                 
                        break;
                    case 2:
                        extrudeSolidFromPolygon
                            (letterO, letterOtris, width, O_SIDE, O_EDGE, O_WHOLE);
                        gl.glCallList(O_WHOLE);
                        break;
                    case 3:
                        extrudeSolidFromPolygon
                            (letterT, letterTtris, width, T_SIDE, T_EDGE, T_WHOLE);
                        gl.glCallList(T_WHOLE);
                        break;
                    case 4:
                        extrudeSolidFromPolygon
                            (letterH, letterHtris, width, H_SIDE, H_EDGE, H_WHOLE);
                        gl.glCallList(H_WHOLE);
                        break;
                    }
                    glj.gljSwap();

                    gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
                    width += 0.2f;
                    gl.glPopMatrix();
                }
                for (i = 0; i < 45 ; i++)
                {
                    gl.glPushMatrix();
                    repeat(j);
                    gl.glPopMatrix();               
			
                    gl.glPushMatrix();              
                    gl.glRotatef(90.0f - (2.0f * i), 0.0f, 1.0f, 0.0f);
                    switch (j)
                    {
                    case 1:
                        gl.glCallList(M_WHOLE);
                        break;
                    case 2:
                        gl.glCallList(O_WHOLE);
                        break;
                    case 3:
                        gl.glCallList(T_WHOLE);
                        break;
                    case 4:
                        gl.glCallList(H_WHOLE);
                        break;
                    }
                    glj.gljSwap();
                    gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);  
                    gl.glPopMatrix();
                }
                for (i = 1; i < 32 ; i++)
                {
                    gl.glPushMatrix();
                    repeat(j);
                    gl.glPopMatrix();
			
                    gl.glPushMatrix();
                    gl.glTranslatef(i * xPos, i * 0.3f, i * -0.3f);
                    switch (j)
                    {
                    case 1:
                        gl.glCallList(M_WHOLE);
                        break;
                    case 2:
                        gl.glCallList(O_WHOLE);
                        break;
                    case 3:
                        gl.glCallList(T_WHOLE);
                        break;
                    case 4:
                        gl.glCallList(H_WHOLE);
                        break;
                    }
                    glj.gljSwap();
                    gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);          
                    gl.glPopMatrix();
                }            
                if (j == 1)
                    xPos += 0.25f;
                else
                    xPos += 0.21f;
            }
            gl.glFlush();

            glj.gljCheckGL();
            glj.gljFree();
    
            //if (!isSuspended()) repaint();  // Animate at full speed.
        }

            /* Mark Kilgard's tessellation code from the "dino" demos.
               Bug fixes and re-write without GLU tesselator
               by Ronald B. Cemer */
        private void extrudeSolidFromPolygon
            (float data[][],
             int outlineTriIndices[][],
             float thickness,
             int side,
             int edge,
             int whole)
        {
            double dx, dy, len;
            int i, j0, j1, j2;
            int min, max, range;
            float x0, y0, x1, y1;
            int count = data.length;
            int tricount = outlineTriIndices.length;

            gl.glNewList(side, GL_COMPILE);
            gl.glShadeModel(GL_SMOOTH);
            gl.glBegin(GL_TRIANGLES);
            for (i = 0; i < tricount; i++)
            {
                j0 = outlineTriIndices[i][0];
                j1 = outlineTriIndices[i][1];
                j2 = outlineTriIndices[i][2];
                gl.glVertex3f(data[j0][0],data[j0][1],0.0f);
                gl.glVertex3f(data[j1][0],data[j1][1],0.0f);
                gl.glVertex3f(data[j2][0],data[j2][1],0.0f);
            }
            gl.glEnd();
            gl.glEndList();

            gl.glNewList(edge, GL_COMPILE);
            for (min = max = 0; min < count; min = max)
            {
                for (max = min+1; max < count; max++)
                    if (data[max][2] != 0.0f) break;
                range = max-min;
                gl.glBegin(GL_QUAD_STRIP);
                for (i = min; i <= max; i++)
                {
                    j0 = i;
                    j1 = i+1;
                    if (j0 >= max) j0 -= range;
                    if (j1 >= max) j1 -= range;
                    x0 = data[j0][0];
                    y0 = data[j0][1];
                    x1 = data[j1][0];
                    y1 = data[j1][1];
                    gl.glVertex3f(x0, y0, 0.0f);
                    gl.glVertex3f(x0, y0, thickness);
                        // Normals
                    dx = y1 - y0;
                    dy = x0 - x1;
                    len = Math.sqrt(dx * dx + dy * dy);
                    gl.glNormal3f((float)(dx / len), (float)(dy / len), 0.0f);
                }
                gl.glEnd();
            }
            gl.glEndList();
	
            gl.glNewList(whole, GL_COMPILE);
            gl.glFrontFace(GL_CW);

            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, edgeColor);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, shininess);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);           
            gl.glCallList(edge);

            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, sideColor);
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, shininess);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);   
            gl.glNormal3f(0.0f, 0.0f, -1.0f);
            gl.glCallList(side);
            gl.glPushMatrix();
            gl.glTranslatef(0.0f, 0.0f, thickness);
            gl.glFrontFace(GL_CCW);
            gl.glNormal3f(0.0f, 0.0f, 1.0f);
            gl.glCallList(side);
            gl.glPopMatrix();

            gl.glEndList();
        }

        private void repeat(int j)
        {
            if (j == 2)
            {
                gl.glPushMatrix();
                gl.glTranslatef((31.0f * -0.34f) , 9.3f, -9.6f);
                gl.glCallList(REPEAT1);
                gl.glPopMatrix();           
            }
            if (j == 3)
            {
                gl.glPushMatrix();
                gl.glTranslatef(31.0f * -0.34f, 9.3f, -9.6f);
                gl.glCallList(REPEAT1);
                gl.glPopMatrix();
                gl.glPushMatrix();
                gl.glTranslatef(31.0f * -0.09f, 9.3f, -9.6f);
                gl.glCallList(REPEAT2);
                gl.glPopMatrix(); 
            }
            if (j == 4)
            {
                gl.glPushMatrix();
                gl.glTranslatef(31.0f * -0.34f, 9.3f, -9.6f);
                gl.glCallList(REPEAT1);
                gl.glPopMatrix();
                gl.glPushMatrix();
                gl.glTranslatef(31.0f * -0.09f, 9.3f, -9.6f);
                gl.glCallList(REPEAT2);
                gl.glPopMatrix(); 
                gl.glPushMatrix();
                gl.glTranslatef(31.0f * 0.12f, 9.3f, -9.6f);
                gl.glCallList(REPEAT3);
                gl.glPopMatrix();
            } 
        }
    }
}
