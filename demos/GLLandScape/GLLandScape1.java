/**
 * @(#) GLLandScape1.java
 */
import gl4java.GLContext;
import gl4java.awt.GLAnimCanvas;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;

/**
 * This is meant as an skellekton for porting/writing
 * OpenGL to gl4java
 *
 * If you are interessting in further Documentation and/or
 * the history of gl4java follow the following link.
 *
 * <pre>
   <a href="gl4java.html#_top_">The gl4java Documentation</a>
 * </pre>
 * <p>
 *
 * This NEW dummy code uses repaint(),
 * the std. java thread, and sleep to suspend with a given
 * Frames per secounds value !!
 * (of course - sDisplay is still avaiable,
 *  but i guess it is not that reliable ... comments welcome )
 *
 *
 * @see WinDataAccess
 * @version 	1.1, 3. MAI 1999
 * @author      Sven Goethel
 *
 */
class GLLandScape1 extends GLAnimCanvas 
{
   /**
    * Variables for the LandScape
    */
   class COLOUR 
   {
      public float r, g, b;

      public COLOUR()
      {
         r = 0.0f;
         g = 0.0f;
         b = 0.0f;
      }

   }

   /* The constant MAP is used throughout the program and represents the MAP of
      the matrix/landscape. */
   static final int MAP = 256;

   /* This is the holding space for the landscape. */
   float y[/*MAP+2*/][/*MAP+2*/];

   char object[/*MAP+1*/][/*MAP+1*/];

   /* This is the holding space for the landscape colours. */
   COLOUR c[/*MAP+1*/][/*MAP+1*/];

   public static final int FORWARD = 1;

   public static final int UP = 2;

   public static final int TURNLEFT = 3;

   public static final int STRAFELEFT = 4;

   public static final int LOOKUP = 5;

   public static final int LOOKSET = 6;

   static final int TRUE = 1;

   static final int FALSE = 0;

   static final int WIDTH = 32;

   /* The width of the texture map. */
   byte texImg[/*WIDTH * WIDTH * 4*/];

   int texName[/*1*/] = {0};

   short comp = 32;

   /* Scale modifier. */
   short temp, texture_mapping = FALSE, land_fogging = TRUE, 
         flat_shading = FALSE;

   /* Initial eye position and vector of sight. */
   float posx, posy, posz;

   float lookx, looky, lookz;

   float mySpeed = 0;

   int myDir = FORWARD;

   // the display list for the land ..
   int theLand;

   
   public GLLandScape1(int w, int h)
   {
      super(w,h);
   }

   public void init_pos()
   {
      posx = 4500.0f;
      posy = 256.0f;
      posz = 4500.0f;
      lookx = 4096.0f;
      looky = 0.0f;
      lookz = 4096.0f;
      mySpeed = 0;
      System.out.println("init_pos");
   }

   public void init()
   {
      int i, j;
      /* here we should add and initialize our JAVA components */
      texImg = new byte[WIDTH * WIDTH * 4];
      y = new float[MAP + 2][MAP + 2];
      object = new char[MAP + 1][MAP + 1];
      c = new COLOUR[MAP + 1][MAP + 1];
      for(i = 0;i <= MAP;i++)
      {
         for(j = 0;j <= MAP;j++)
         {
            c[i][j] = new COLOUR();
         }
      }
      float fogColor[] = {0.75f, 0.75f, 1.0f, 1.0f};
      init_pos();
      // srand(224);

      create_fractal();
      genLand();

      // srand((unsigned)time(NULL));
      makeTexture();
      /* ... and furthet OpenGL init's - like you want to */
      gl.glPixelStorei(GL_UNPACK_ALIGNMENT,1);
      if(texture_mapping == TRUE)
         gl.glEnable(GL_TEXTURE_2D);
      gl.glGenTextures(1,texName);
      gl.glBindTexture(GL_TEXTURE_2D,texName[0]);
      gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_REPEAT);
      gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_REPEAT);
      gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
      gl.glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);
      gl.glTexImage2D(GL_TEXTURE_2D,0,GL_RGBA,WIDTH,WIDTH,0,GL_RGBA,GL_UNSIGNED_BYTE,texImg);
      gl.glEnable(GL_DEPTH_TEST);
      if(flat_shading == FALSE)
         gl.glShadeModel(GL_SMOOTH);
      else
         gl.glShadeModel(GL_FLAT);
      if(land_fogging == TRUE)
         gl.glEnable(GL_FOG);
      else
         gl.glDisable(GL_FOG);
      gl.glFogi(GL_FOG_MODE,GL_LINEAR);
      gl.glFogfv(GL_FOG_COLOR,fogColor);
      gl.glFogf(GL_FOG_DENSITY,0.4f);
      gl.glFogf(GL_FOG_START,800.0f);
      gl.glFogf(GL_FOG_END,1000.0f);
      gl.glClearColor(0.75f,0.75f,1.0f,1.0f);
      // FreeConsole();
      glj.gljCheckGL();


      Dimension dim = getSize();
      reshape(dim.width,dim.height);
      myMove(FORWARD,mySpeed,true);
      check_height();
      repaint();
      /* and start our working thread ... */
      start();
   }

   public void display()
   {
      int i;
      /* Standard gl4java Init */
      if(!cvsIsInit() || glj.gljMakeCurrent() == false)
      {
         System.out.println("problem in use() method");
         return;
      }
      // ... just render it

      gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
      gl.glCallList(theLand);

      myMove(FORWARD,mySpeed,true);
      check_height();

      setSuspended(mySpeed==0); 

      /* For your animation dutys ;-) */
      glj.gljSwap();
      glj.gljCheckGL();
      glj.gljFree();
   }

   /*************************************************************/
   /*************************************************************/
   /*************************************************************/
   /*************************************************************/
   /*************************************************************/
   /*************************************************************/
   void create_fractal()
   {
      int bsize, csize;
      int x, z, i;
      int r = 256;
      /* The maximum random value. */
      float gradient, shadow = 0.5f, n;
      /* Make the matrix flat. */
      for(x = 0;x < MAP + 2;x++)
         for(z = 0;z < MAP + 2;z++)
            y[x][z] = 0L;
      bsize = MAP;
      for(i = 0;i < 8;i++)
      {
         for(x = 0;x < MAP;x += bsize)
            for(z = 0;z < MAP;z += bsize)
               y[x][z] += (Math.random() * r - r / 2);
         if(i > 4)
            r = r / 2;
         csize = bsize / 2;
         if(csize > 0)
         {
            for(x = 0;x < MAP;x += bsize)
               for(z = 0;z < MAP;z += bsize)
               {
                  if(x < MAP)
                     y[x + csize][z] = (y[x + bsize][z] + y[x][z]) / 2;
                  if(z < MAP)
                     y[x][z + csize] = (y[x][z + bsize] + y[x][z]) / 2;
                  if(x < MAP && z < MAP)
                     y[x + csize][z + csize] = (y[x][z] + y[x + bsize][z] + y[x][z + bsize] + y[x + bsize][z + bsize]) / 4;
               }
         }
         bsize = csize;
      }
      for(x = 0;x < MAP;x++)
      {
         for(z = 0;z < MAP;z++)
         {
            y[x][z] = y[x][z] + y[x + 1][z] + y[x + 1][z + 1] + y[x][z + 1];
            y[x][z] /= 4.0f;
         }
      }
      for(x = MAP;x > 0;x--)
      {
         for(z = 0;z < MAP;z++)
         {
            y[x][z] = y[x][z] + y[x - 1][z] + y[x - 1][z + 1] + y[x][z + 1];
            y[x][z] /= 4.0f;
         }
      }
      /* put trees in various places on grassland. */
      for(x = 0;x < MAP;x++)
      {
         for(z = 0;z < MAP;z++)
         {
            if(((int)(Math.random() * 256.0f)) % 8 == 0 && y[x][z] > 0 && y[x][z] < 64)
            {
               object[x][z] = 't';
            }
            else
            {
               object[x][z] = 'n';
            }
         }
      }
      for(x = 0;x < MAP;x++)
         for(z = 0;z < MAP;z++)
            if(y[x][z] > 8)
            {
               n = y[x][z];
               y[x][z] *= n;
               y[x][z] /= 256.0f;
            }
      for(x = 0;x <= MAP;x++)
      {
         for(z = 0;z <= MAP;z++)
         {
            gradient = ((float)(y[x][z] - y[x + 1][z])) / 100.0f;
            if(y[x][z] > 64)
            {
               if((y[x][z] - y[x][z + 1]) < 8 && (y[x][z] - y[x][z + 1]) > -8 && (y[x][z] - y[x + 1][z]) < 8 && (y[x][z] - y[x + 1][z]) > -8)
               {
                  c[x][z].g = gradient + 0.75f;
                  c[x][z].r = c[x][z].g;
                  c[x][z].b = c[x][z].g;
               }
               else
               {
                  c[x][z].r = gradient + 0.75f;
                  c[x][z].g = c[x][z].r * 0.8f;
                  c[x][z].b = c[x][z].r * 0.5f;
               }
            }
            else
               if(y[x][z] > 0)
               {
                  c[x][z].g = gradient + 0.75f;
                  c[x][z].r = c[x][z].g * 0.6f;
                  c[x][z].b = 0.0f;
               }
               else
               {
                  c[x][z].r = gradient + 1.0f;
                  c[x][z].g = c[x][z].r * 0.75f;
                  c[x][z].b = c[x][z].r * 0.5f;
               }
         }
      }
      for(x = 0;x <= MAP;x++)
         for(z = 0;z <= MAP;z++)
         {
            if(y[x][z] < 0)
               y[x][z] /= 4.0f;
         }

   }

   void makeTexture()
   {
      int i, j, h, c;
      for(i = 0;i < WIDTH;i++)
      {
         for(j = 0;j < WIDTH;j++)
         {
            c = (int)(Math.random() * 15 + 240);
            h = i * WIDTH * 4 + j * 4;
            texImg[h + 0] = (byte)c;
            texImg[h + 1] = (byte)c;
            texImg[h + 2] = (byte)c;
            texImg[h + 3] = (byte)255;
         }
      }
   }

   void check_height()
   {
      float x0, x1, lx, lz, x, z, midpoint;
      int fx, fz;
      x = (posx / (comp * 1.0f));
      z = (posz / (comp * 1.0f));
      fx = (int)(x);
      fz = (int)(z);
      lx = x - fx;
      lz = z - fz;
      if(fx >= MAP + 2 || fz >= MAP + 2 || fx < 0 || fz < 0)
      {
         init_pos();
         return;
      }
      x0 = y[fx][fz] + (y[fx][fz + 1] - y[fx][fz]) * lz;
      x1 = y[fx + 1][fz] + (y[fx + 1][fz + 1] - y[fx + 1][fz]) * lz;
      midpoint = x0 + (x1 - x0) * lx;
      posy = midpoint + 16.0f;
   }

   /* Function that moves the eye / turns the angle of sight. */
   /* Updates scene if update. */
   void myMove(int dir, float amount, boolean update)
   {
      float diff = (float)Math.sqrt(lookx * lookx + lookz * lookz);
      /*
         float alpha = (float)
         Math.atan(Math.abs(lookz)/Math.abs(lookx));
         if(lookx<0&&lookz>=0)
         alpha+=(float)(Math.PI/2.0);
         else if(lookx>=0&&lookz>=0)
         alpha+=0;
         else if(lookx<0&&lookz<0)
         alpha+=(float)Math.PI;
         else if(lookx>=0&&lookz<0)
         alpha+=(float)((3.0*Math.PI)/2.0);
         float _alpha = (float) (alpha*180f/Math.PI );
       */
      boolean do_repaint = false;
      lookx /= diff;
      lookz /= diff;
      //myDir=dir;
      switch(dir)
      {
         case FORWARD:
            posx += lookx * amount;
            posz += lookz * amount;
            break;
         case TURNLEFT:
            lookx = lookx * (float)Math.cos(amount) + lookz * (float)Math.sin(amount);
            lookz = lookz * (float)Math.cos(amount) - lookx * (float)Math.sin(amount);
            // lookx^2 + lookz^2 != 1 for some reason. Fix.
            lookx /= diff;
            lookz /= diff;
            do_repaint = true;
            break;
         case STRAFELEFT:
            posx += lookz * amount;
            posz -= lookx * amount;
            break;
         case UP:
            posy += amount;
            do_repaint = true;
            break;
         case LOOKUP:
            looky += amount;
            do_repaint = true;
            break;
         case LOOKSET:
            looky = amount;
            do_repaint = true;
            break;
      }
      int x = (int)(posx / (comp * 1.0f));
      int z = (int)(posz / (comp * 1.0f));
      if(x > MAP)
         posx = 0;
      if(z > MAP)
         posz = 0;
      if(posx < 0)
         posx = MAP * comp;
      if(posz < 0)
         posz = MAP * comp;
      if (update)
      {
	      gl.glMatrixMode(GL_MODELVIEW); gl.glLoadIdentity();
	      glu.gluLookAt(posx, posy, posz,
	      posx+lookx, posy+looky,
	      posz+lookz, 0.0f,1.0f,0.0f);
	      if( do_repaint )
		      repaint();
      }
   }

   void draw_tree(int x, int z)
   {
      int x1, y1, z1;
      y1 = (int)y[x][z];
      x1 = x * comp;
      z1 = z * comp;
      gl.glBegin(GL_POLYGON);
      gl.glColor3f(0.6f,0.4f,0.0f);
      gl.glVertex3f(x1 - 2,y1 + 5,z1);
      gl.glVertex3f(x1 + 2,y1 + 5,z1);
      gl.glVertex3f(x1 + 2,y1,z1);
      gl.glVertex3f(x1 - 2,y1,z1);
      gl.glEnd();
      gl.glBegin(GL_POLYGON);
      gl.glVertex3f(x1,y1 + 5,z1 - 2);
      gl.glVertex3f(x1,y1 + 5,z1 + 2);
      gl.glVertex3f(x1,y1,z1 + 2);
      gl.glVertex3f(x1,y1,z1 - 2);
      gl.glEnd();
      gl.glBegin(GL_POLYGON);
      gl.glColor3f(0.35f,0.7f,0.0f);
      gl.glTexCoord2f(0.0f,0.0f);
      gl.glVertex3f(x1 - 10,y1 + 5,z1);
      gl.glTexCoord2f(0.5f,1.0f);
      gl.glVertex3f(x1,y1 + 25,z1);
      gl.glTexCoord2f(1.0f,0.0f);
      gl.glVertex3f(x1 + 10,y1 + 5,z1);
      gl.glEnd();
      gl.glBegin(GL_POLYGON);
      gl.glColor3f(0.4f,0.8f,0.0f);
      gl.glTexCoord2f(0.0f,0.0f);
      gl.glVertex3f(x1,y1 + 5,z1 - 10);
      gl.glTexCoord2f(0.5f,1.0f);
      gl.glVertex3f(x1,y1 + 25,z1);
      gl.glTexCoord2f(1.0f,0.0f);
      gl.glVertex3f(x1,y1 + 5,z1 + 10);
      gl.glEnd();
   }

   void genLand()
   {
      int x, z, position_x, position_z;
      float x1, x2, z1, z2;

      theLand = gl.glGenLists(1);
      gl.glNewList(theLand, GL_COMPILE);

      position_x = (int)(posx / comp);
      position_z = (int)(posz / comp);
      for(x = position_x - 16;x < position_x + 17;x++)
         for(z = position_z - 16;z < position_z + 17;z++)
         {
            if(x > 0 && x < MAP && z > 0 && z < MAP)
            {
               x1 = x * comp;
               x2 = x * comp + comp;
               z1 = z * comp;
               z2 = z * comp + comp;
               gl.glBegin(GL_POLYGON);
               gl.glColor3f(c[x][z].r,c[x][z].g,c[x][z].b);
               gl.glTexCoord2f(0.0f,0.0f);
               gl.glVertex3f(x1,y[x][z],z1);
               gl.glColor3f(c[x + 1][z].r,c[x + 1][z].g,c[x + 1][z].b);
               gl.glTexCoord2f(1.0f,0.0f);
               gl.glVertex3f(x2,y[x + 1][z],z1);
               gl.glColor3f(c[x][z + 1].r,c[x][z + 1].g,c[x][z + 1].b);
               gl.glTexCoord2f(0.0f,1.0f);
               gl.glVertex3f(x1,y[x][z + 1],z2);
               gl.glEnd();
               gl.glBegin(GL_POLYGON);
               gl.glColor3f(c[x + 1][z + 1].r,c[x + 1][z + 1].g,c[x + 1][z + 1].b);
               gl.glTexCoord2f(1.0f,1.0f);
               gl.glVertex3f(x2,y[x + 1][z + 1],z2);
               gl.glColor3f(c[x][z + 1].r,c[x][z + 1].g,c[x][z + 1].b);
               gl.glTexCoord2f(0.0f,1.0f);
               gl.glVertex3f(x1,y[x][z + 1],z2);
               gl.glColor3f(c[x + 1][z].r,c[x + 1][z].g,c[x + 1][z].b);
               gl.glTexCoord2f(1.0f,0.0f);
               gl.glVertex3f(x2,y[x + 1][z],z1);
               gl.glEnd();
               if(object[x][z] == 't')
                  draw_tree(x,z);
            }
         }
      gl.glEndList();
      glj.gljCheckGL();
   }

   public void reshape(int w, int h)
   {
      glj.gljResize(w,h);
      gl.glViewport(0,0,w,h);
      gl.glMatrixMode(GL_PROJECTION);
      gl.glLoadIdentity();
      glu.gluPerspective(60.0,(double)w / (double)h,1.0,1000.0);
      gl.glMatrixMode(GL_MODELVIEW);
      gl.glLoadIdentity();
      glu.gluLookAt(posx,posy,posz,posx + lookx,posy + looky,posz + lookz,0.0,1.0,0.0);
   }

   public float getMySpeed()
   {
      return mySpeed;
   }

   public void setMySpeed(float s)
   {
      mySpeed = s;
      setSuspended(false);
   }

   public boolean getTextureState()
   {
      return texture_mapping == TRUE;
   }

   public void setTexture(boolean t)
   {
      if(t)
      {
         if(texture_mapping == FALSE)
         {
            if(glj!=null)
	    {
		    if(glj.gljMakeCurrent() == false)
		    {
		       System.out.println("problem in use() method");
		       return;
		    }
		    gl.glEnable(GL_TEXTURE_2D);
		    texture_mapping = TRUE;
		    glj.gljCheckGL();
		    glj.gljFree();
		    repaint();
	    }
         }
      }
      else
      {
         if(texture_mapping == TRUE)
         {
            if(glj!=null)
	    {
		    if(glj.gljMakeCurrent() == false)
		    {
		       System.out.println("problem in use() method");
		       return;
		    }
		    gl.glDisable(GL_TEXTURE_2D);
		    texture_mapping = FALSE;
		    glj.gljCheckGL();
		    glj.gljFree();
		    repaint();
	    }
         }
      }
      setSuspended(false);
   }

   public boolean getFogState()
   {
      return land_fogging == TRUE;
   }

   public void setFog(boolean t)
   {
      if(t)
      {
         if(land_fogging == FALSE)
         {
            if(glj!=null)
	    {
		    if(glj.gljMakeCurrent() == false)
		    {
		       System.out.println("problem in use() method");
		       return;
		    }
		    gl.glEnable(GL_FOG);
		    land_fogging = TRUE;
		    glj.gljCheckGL();
		    glj.gljFree();
		    repaint();
            }
         }
      }
      else
      {
         if(land_fogging == TRUE)
         {
            if(glj!=null)
	    {
		    if(glj.gljMakeCurrent() == false)
		    {
		       System.out.println("problem in use() method");
		       return;
		    }
		    gl.glDisable(GL_FOG);
		    land_fogging = FALSE;
		    glj.gljCheckGL();
		    glj.gljFree();
		    repaint();
            }
         }
      }
      setSuspended(false);
   }

   public boolean getFlatShadeState()
   {
      return flat_shading == TRUE;
   }

   public void setFlatShading(boolean t)
   {
      if(t)
      {
         if(flat_shading == FALSE)
         {
            if(glj!=null)
	    {
		    if(glj.gljMakeCurrent() == false)
		    {
		       System.out.println("problem in use() method");
		       return;
		    }
		    gl.glShadeModel(GL_FLAT);
		    flat_shading = TRUE;
		    glj.gljCheckGL();
		    glj.gljFree();
		    repaint();
            }
         }
      }
      else
      {
         if(flat_shading == TRUE)
         {
            if(glj!=null)
	    {
		    if(glj.gljMakeCurrent() == false)
		    {
		       System.out.println("problem in use() method");
		       return;
		    }
		    gl.glShadeModel(GL_SMOOTH);
		    flat_shading = FALSE;
		    glj.gljCheckGL();
		    glj.gljFree();
		    repaint();
            }
         }
      }
      setSuspended(false);
   }

   public void newFractal()
   {
      create_fractal();
      if(!cvsIsInit() || glj.gljMakeCurrent() == false)
      {
         System.out.println("problem in use() method");
         return;
      }
      gl.glFinish();
      gl.glDeleteLists(theLand, 1);
      genLand();
      check_height();
      glj.gljFree();
      repaint();
      setSuspended(false);
   }

}

