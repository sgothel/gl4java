/**
 * @(#) gltestperf.java
 * @(#) author: David Bucciarelli (tech.hmw@plus.it), Humanware s.r.l.
 *
 * This program is under the GNU GPL.
 * Use at your own risk.
 *
 * Transformed to java, using OpenGL[tm] for Java[tm] (gl4java),
 * by Sven Goethel sgoethel@jausoft.com, http://www.jausoft.com/gl4java
 *
 */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;

import gl4java.*;
import gl4java.drawable.*;
import gl4java.awt.*;

public class gltestperf extends GLCanvas
{

	static boolean frontbuffer = true;

	static final float BMARKS_TIME = 5.0f;

	static final int NUM_BMARKS = 6;

	static int firstBenchMark = 0;
	static int lastBenchMark = NUM_BMARKS-1;

	/* 554 ~= (float)Math.sqrt(640*480) */

	protected benchmark[/*NUM_BMARKS*/] bmarks = null;

	protected abstract class benchmark
	{
	   public String name;
	   public String unit;
	   public int type;
	   public int numsize;
	   public int[/*10*/] size;

	   public abstract void init ();
	   public abstract int run ( int size, int num ) ;

	   public String toString()
	   {
	   	return "benchmark \""+name+"\"\n    [ unit="+unit+
		                         ", type="+type+
					 ", numsize="+numsize+"]";
	   }
	}

	public benchmark[] getAllBenchmarks()
	{
	   benchmark[] _bmarks = new benchmark[NUM_BMARKS];
	   _bmarks[0] = new Pnts();
	   _bmarks[1] = new Lins();
	   _bmarks[2] = new Tris1();
	   _bmarks[3] = new Tris2();
	   _bmarks[4] = new Tris3();
	   _bmarks[5] = new Clrs();

	   return _bmarks;
	}

	public static void main( String args[] ) 
	{
		int i;

		gltestperf canvas  = null;
		Dimension d = new Dimension(640, 480);
		GLCapabilities glCaps = new GLCapabilities();

		gl4java.drawable.GLDrawableFactory df =
			gl4java.drawable.GLDrawableFactory.getFactory();
	 
		//Create our canvas and add it to the center of the applet
		if(df instanceof gl4java.drawable.SunJDK13GLDrawableFactory)
		{
		    gl4java.drawable.SunJDK13GLDrawableFactory sdf =
		      (gl4java.drawable.SunJDK13GLDrawableFactory)df;
		    canvas = new gltestperf
		      (sdf.getGraphicsConfiguration(glCaps), glCaps, d.width, d.height);
		} else {
		    canvas = new gltestperf(glCaps, d.width, d.height);
		}

		for(i=0; i<args.length; i++)
		{
			if(args[i].equals("--help"))
			{
				System.out.println("usage:");
				System.out.println("    --bm    <int> : run only this BenchMark");
				System.out.println("    --first <int> : firstBenchMark to run");
				System.out.println("    --last  <int> : lastBenchMark to run");
				System.out.println("    --help        : this message");
				benchmark[] _bmarks = canvas.getAllBenchmarks();

				System.out.println("Avaiable Benchmarks: ");
				for(int j=0; j<NUM_BMARKS; j++)
				{
				        System.out.println("Benchmarks Number: "+j);
					System.out.println(_bmarks[j]);
				        System.out.println();
				}

				System.exit(0);
			} 
			if(args[i].equals("--first"))
			{
				i++;
				try {
				    gltestperf.firstBenchMark=
					Integer.valueOf(args[i]).intValue();
				} catch (Exception ex) {}

				if(gltestperf.firstBenchMark<0) 
					gltestperf.firstBenchMark=0;
				if(gltestperf.firstBenchMark>=NUM_BMARKS) 
					gltestperf.firstBenchMark=NUM_BMARKS-1;
			} else if(args[i].equals("--last")) {
				i++;
				try {
				    gltestperf.lastBenchMark=
					Integer.valueOf(args[i]).intValue();
				} catch (Exception ex) {}

				if(gltestperf.lastBenchMark<0) 
					gltestperf.lastBenchMark=0;
				if(gltestperf.lastBenchMark>=NUM_BMARKS) 
					gltestperf.lastBenchMark=NUM_BMARKS-1;
			} else if(args[i].equals("--bm")) {
				i++;
				try {
				    gltestperf.lastBenchMark=
					Integer.valueOf(args[i]).intValue();
				} catch (Exception ex) {}
				if(gltestperf.lastBenchMark<0) 
					gltestperf.lastBenchMark=0;
				if(gltestperf.lastBenchMark>=NUM_BMARKS) 
					gltestperf.lastBenchMark=NUM_BMARKS-1;
				gltestperf.firstBenchMark=
					gltestperf.lastBenchMark;
			} else {
				System.out.println("ERROR Unknown Argument !");
				System.out.println("arg "+i+": "+args[i]);
				System.exit(1);
			}
		}

		if(gltestperf.firstBenchMark>gltestperf.lastBenchMark)
				gltestperf.firstBenchMark=
					gltestperf.lastBenchMark;

		Frame f = new Frame("gltestperf");

		GLContext.gljNativeDebug = false;
		GLContext.gljThreadDebug = false;
		GLContext.gljClassDebug = false;

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
		canvas.requestFocus();
		f.add("Center", canvas);
		Dimension ps = canvas.getPreferredSize();
		f.setBounds(-100,-100,99,99);
		f.setVisible(true);
		//f.setVisible(false);
		//f.setVisible(true);
		Insets is = f.getInsets();
		f.setBounds(0,0,
			    ps.width+is.left+is.right, 
		            ps.height+is.top+is.bottom);
		f.setVisible(true);
	}
	
	public gltestperf(GraphicsConfiguration g, GLCapabilities glCaps,
			     int w, int h)
	{
	    super(g, glCaps, w, h);
	}

	public gltestperf(GLCapabilities glCaps, int w, int h)
	{
	    super(glCaps, w, h);
	}

	public void init()
	{
	   System.out.println("**** Window Size: "+getSize());
	   System.out.println("**** Running Benchmarks ["+
	   	firstBenchMark+".."+lastBenchMark+"]");
	   bmarks = getAllBenchmarks();
	}

	public void display()
	{
	   int i;

	   if (glj.gljMakeCurrent() == false) return;

	   if (frontbuffer)
	      gl.glDrawBuffer(GL_FRONT);
	   else
	      gl.glDrawBuffer(GL_BACK);

	   for (i = firstBenchMark; i <= lastBenchMark; i++) {
	      System.out.println("**** Benchmark: "+i);

	      switch (bmarks[i].type) {
		      case 0:
		      case 3:
			 dotest0param(bmarks[i]);
			 break;
		      case 1:
		      case 2:
			 dotest1param(bmarks[i]);
			 break;
	      }
	   }

	  glj.gljSwap();
	  glj.gljCheckGL();
	  glj.gljFree();

	}

/***************************************************************************/

protected  void dotest0param(benchmark bmark)
{
   long stime, etime, tottime, maxtime, mintime;
   double dtime;
   int num=0, numelem=0, calibnum=0, j=0;

   gl.glPushAttrib(GL_ALL_ATTRIB_BITS);
   bmark.init();

   stime=System.currentTimeMillis();

   dtime = 0.0D;
   calibnum = 0;
   while (dtime < 2.0D) {
      bmark.run(0, 1);
      gl.glFinish();
      etime = System.currentTimeMillis();
      dtime = (etime - stime) / 1000.0D;
      calibnum++;
   }
   gl.glPopAttrib();

   System.out.println("***** Elapsed time for the calibration test ("+
              calibnum+"): "+dtime);

   num = (int) ((BMARKS_TIME / dtime) * calibnum);

   if (num < 1)
      num = 1;

   System.out.println("***** Selected number of benchmark iterations: "+
      		num);


   mintime = Long.MAX_VALUE;
   maxtime = Long.MIN_VALUE;

   for (tottime = 0, j = 0; j < 5; j++) {
      gl.glPushAttrib(GL_ALL_ATTRIB_BITS);
      bmark.init();

      stime = System.currentTimeMillis();
      numelem = bmark.run(0, num);
      gl.glFinish();
      etime = System.currentTimeMillis();

      gl.glPopAttrib();

      dtime = (etime - stime) / 1000.0D;
      tottime += dtime;

      System.out.println("****** Elapsed time for run "+
	 	j+": "+dtime);


      if (dtime < mintime)
	 mintime = (long)dtime;
      if (dtime > maxtime)
	 maxtime = (long)dtime;
   }

   tottime -= mintime + maxtime;

   System.out.println("***** "+bmark.name+"\n***** "+ 
                      (numelem / (tottime / 3.0D))+" "+bmark.unit+"/sec");

   if (bmark.type == 3)
      System.out.println(", MPixel Fill/sec: "+
	      ( (numelem * bmark.size[0] * (float) bmark.size[0]) /
	        (1000000.0D * tottime / 3.0D)
	      ) +"\n\n");
      	   
   else
      System.out.println("\n");
}

/***************************************************************************/

protected void dotest1param(benchmark bmark)
{
   double stime, etime, dtime, tottime, maxtime, mintime;
   int num, numelem, calibnum, j, k;

   System.out.println("***** "+bmark.name);

   for (j = 0; j < bmark.numsize; j++) {
      System.out.println("****** "+ "Current size: "+ bmark.size[j]);

      gl.glPushAttrib(GL_ALL_ATTRIB_BITS);
      bmark.init();

      stime = System.currentTimeMillis();

      dtime = 0.0D;
      calibnum = 0;
      while (dtime < 2.0D) {
	 bmark.run(bmark.size[j], 1);
	 gl.glFinish();
	 etime = System.currentTimeMillis();
	 dtime = (etime - stime) / 1000.0D;
	 calibnum++;
      }
      gl.glPopAttrib();

      System.out.println("****** Elapsed time for the calibration test ("+
              calibnum+"): "+dtime);

      num = (int) ((BMARKS_TIME / dtime) * calibnum);

      if (num < 1)
	 num = 1;

      System.out.println("****** Selected number of benchmark iterations: "+
      		num);

      mintime = Long.MAX_VALUE;
      maxtime = Long.MIN_VALUE;

      for (numelem = 1, tottime = 0.0D, k = 0; k < 5; k++) {
	 gl.glPushAttrib(GL_ALL_ATTRIB_BITS);
	 bmark.init();

	 stime = System.currentTimeMillis();
	 numelem = bmark.run(bmark.size[j], num);
	 gl.glFinish();
	 etime = System.currentTimeMillis();

	 gl.glPopAttrib();

	 dtime = (etime - stime) / 1000.0D;
	 tottime += dtime;

         System.out.println("******* Elapsed time for run "+
	 	k+": "+dtime);

	 if (dtime < mintime)
	    mintime = dtime;
	 if (dtime > maxtime)
	    maxtime = dtime;
      }

      tottime -= mintime + maxtime;

      System.out.print("****** "+ "SIZE="+bmark.size[j]+" => "+
      	      (numelem / (tottime / 3.0D)) + " "+bmark.unit+"/sec");

      if (bmark.type == 2)
	 System.out.println(", MPixel Fill/sec: "+
	       (
		 (numelem * bmark.size[j] * bmark.size[j] / 2) /
		 (1000000.0D * tottime / 3.0D)
	       ) );
      else
	 System.out.println();
   }

   System.out.println("\n");
}

/***************************************************************************/

protected class Clrs
	extends benchmark
{
   public Clrs() 
   { 
     name="Color/Depth Buffer Clears";
     unit="Clrs";
     type=3;
     numsize=0;
     size=new int[10];
     size[0]=554;
     size[1]=0;
     size[2]=0;
     size[3]=0;
     size[4]=0;
     size[5]=0;
     size[6]=0;
     size[7]=0;
     size[8]=0;
     size[9]=0;
   }

   public void init()
   {
	   gl.glMatrixMode(GL_PROJECTION);
	   gl.glLoadIdentity();
	   glu.gluOrtho2D(-0.5f, 639.5f, -0.5f, 479.5f);
	   gl.glMatrixMode(GL_MODELVIEW);

	   gl.glShadeModel(GL_SMOOTH);
	   gl.glEnable(GL_DEPTH_TEST);

	   gl.glClearColor(0.0f, 0.1f, 1.0f, 0.0f);
	   gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

   }

   public int run(int size, int num)
   {
	   int y;

	   for (y = 0; y < num; y++) {
	      gl.glClearColor(y / (float) num, 0.1f, 1.0f, 0.0f);
	      gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	   }

	   return num;
   }

}

protected class Tris3 
	extends benchmark
{
   public Tris3() 
   { 
     name="ZSmooth Tex Blend TMesh Triangles";
     unit="Tris";
     type=2;
     numsize=8;
     size=new int[10];
     size[0]=400;
     size[1]=250;
     size[2]=100;
     size[3]=50;
     size[4]=25;
     size[5]=10;
     size[6]=5;
     size[7]=2;
     size[8]=0;
     size[9]=0;
   }

   public void init()
   {
	   int x, y;
	   byte[] tex = new byte[128 * 128 * 3];
	   int gluerr;

	   gl.glMatrixMode(GL_PROJECTION);
	   gl.glLoadIdentity();
	   gl.glOrtho(-0.5f, 639.5f, -0.5f, 479.5f, -1.0f, 1.0f);

	   gl.glMatrixMode(GL_MODELVIEW);

	   gl.glShadeModel(GL_SMOOTH);
	   gl.glEnable(GL_DEPTH_TEST);

	   gl.glEnable(GL_BLEND);
	   gl.glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	   for (y = 0; y < 128; y++)
	      for (x = 0; x < 128; x++) {
		 tex[((x + (y * 128)) * 3) + 0] = (byte) ( ((x % (128 / 4)) < (128 / 8)) ? 255 : 0 );
		 tex[((x + (y * 128)) * 3) + 1] = (byte) ( ((y % (128 / 4)) < (128 / 8)) ? 255 : 0 );
		 tex[((x + (y * 128)) * 3) + 2] = (byte) x;
	      }

	   gl.glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
	   if (0<(gluerr = glu.gluBuild2DMipmaps(GL_TEXTURE_2D, 3, 128, 128, 
	                                       GL_RGB, GL_UNSIGNED_BYTE, tex)))
           {
	      System.out.println("!!!! GLULib"+ glu.gluErrorString(gluerr));
	      System.exit(1);
	   }

	   gl.glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	   gl.glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

	   gl.glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,
			   GL_LINEAR_MIPMAP_NEAREST);
	   gl.glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	   gl.glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
	   gl.glEnable(GL_TEXTURE_2D);

	   gl.glDepthFunc(GL_ALWAYS);

	   gl.glClearColor(0.0f, 0.1f, 1.0f, 0.0f);
	   gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   }

   public int run(int size, int num)
   {
	   int y;
	   float[] v0=new float[3], v1=new float[3], 
	         v2=new float[3], v3=new float[3];
	   float[] cv0=new float[3], cv1=new float[3], 
	         cv2=new float[3], cv3=new float[3];
	   float[] tv0=new float[3], tv1=new float[3], 
	         tv2=new float[3], tv3=new float[3];

	   v0[0] = 320 - size / 2;
	   v0[1] = 240 - size / 2;
	   v0[2] = 0.0f;
	   v1[0] = 320 + size / 2;
	   v1[1] = 240 - size / 2;
	   v1[2] = 0.0f;
	   v2[0] = 320 - size / 2;
	   v2[1] = 240 + size / 2;
	   v2[2] = 0.0f;
	   v3[0] = 320 + size / 2;
	   v3[1] = 240 + size / 2;
	   v3[2] = 0.0f;
	   cv0[0] = 1.0f;
	   cv0[1] = 0.0f;
	   cv0[2] = 0.0f;
	   cv1[0] = 1.0f;
	   cv1[1] = 1.0f;
	   cv1[2] = 0.0f;
	   cv2[0] = 1.0f;
	   cv2[1] = 0.0f;
	   cv2[2] = 1.0f;
	   cv3[0] = 1.0f;
	   cv3[1] = 1.0f;
	   cv3[2] = 1.0f;
	   tv0[0] = 0.0f;
	   tv0[1] = 0.0f;
	   tv0[2] = 0.0f;
	   tv1[0] = 1.0f;
	   tv1[1] = 0.0f;
	   tv1[2] = 0.0f;
	   tv2[0] = 0.0f;
	   tv2[1] = 1.0f;
	   tv2[2] = 0.0f;
	   tv3[0] = 1.0f;
	   tv3[1] = 1.0f;
	   tv3[2] = 0.0f;

	   gl.glBegin(GL_TRIANGLE_STRIP);
	   for (y = 0; y < num; y++) {
	      gl.glColor3fv(cv0);
	      gl.glTexCoord2fv(tv0);
	      gl.glVertex3fv(v0);

	      gl.glColor3fv(cv1);
	      gl.glTexCoord2fv(tv1);
	      gl.glVertex3fv(v1);

	      gl.glColor3fv(cv2);
	      gl.glTexCoord2fv(tv2);
	      gl.glVertex3fv(v2);

	      gl.glColor3fv(cv3);
	      gl.glTexCoord2fv(tv3);
	      gl.glVertex3fv(v3);
	   }
	   gl.glEnd();

	   return 4 * num - 2;
   }

}

protected class Tris2 
	extends benchmark
{
   public Tris2() 
   { 
     name="ZSmooth Tex Blend Triangles";
     unit="Tris";
     type=1;
     numsize=5;
     size=new int[10];
     size[0]=480;
     size[1]=250;
     size[2]=100;
     size[3]=50;
     size[4]=25;
     size[5]=0;
     size[6]=0;
     size[7]=0;
     size[8]=0;
     size[9]=0;
   }

   public void init()
   {
	   int x, y;
	   byte[] tex= new byte[128 * 128 * 3];
	   int gluerr;

	   gl.glMatrixMode(GL_PROJECTION);
	   gl.glLoadIdentity();
	   gl.glOrtho(-0.5f, 639.5f, -0.5f, 479.5f, 1.0f, -1000.0f * 480.0f);

	   gl.glMatrixMode(GL_MODELVIEW);

	   gl.glShadeModel(GL_SMOOTH);
	   gl.glEnable(GL_DEPTH_TEST);

	   gl.glEnable(GL_BLEND);
	   gl.glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	   for (y = 0; y < 128; y++)
	      for (x = 0; x < 128; x++) {
		 tex[((x + (y * 128)) * 3) + 0] = (byte) ( ((x % (128 / 4)) < (128 / 8)) ? 255 : 0 );
		 tex[((x + (y * 128)) * 3) + 1] = (byte) ( ((y % (128 / 4)) < (128 / 8)) ? 255 : 0 );
		 tex[((x + (y * 128)) * 3) + 2] = (byte) x;
	      }

	   gl.glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
	   if (0<(gluerr = glu.gluBuild2DMipmaps(GL_TEXTURE_2D, 3, 128, 128, 
	                                       GL_RGB, GL_UNSIGNED_BYTE, tex)))
           {
	      System.out.println("!!!! GLULib"+ glu.gluErrorString(gluerr));
	      System.exit(1);
	   }

	   gl.glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	   gl.glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

	   gl.glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,
			   GL_LINEAR_MIPMAP_NEAREST);
	   gl.glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	   gl.glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
	   gl.glEnable(GL_TEXTURE_2D);

	   gl.glClearColor(0.0f, 0.1f, 1.0f, 0.0f);
	   gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

   }

   public int run(int size, int num)
   {
	   int x, y, z;

	   gl.glBegin(GL_TRIANGLES);
	   for (y = 0; y < num; y++)
	      for (x = 0; x < size; x += 5) {
		 z = num * size - (y * size + x);
		 gl.glTexCoord2f(1.0f, 1.0f);
		 gl.glColor3f(1.0f, 0.0f, 0.0f);
		 gl.glVertex3i(0, x, z);

		 gl.glTexCoord2f(0.0f, 1.0f);
		 gl.glColor3f(0.0f, 1.0f, 0.0f);
		 gl.glVertex3i(size - 1 - x, 0, z);

		 gl.glTexCoord2f(1.0f, 0.0f);
		 gl.glColor3f(0.0f, 0.0f, 1.0f);
		 gl.glVertex3i(x, size - 1 - x, z);
	      }
	   gl.glEnd();

	   return num * size / 5;
   }

}

protected class Tris1 
	extends benchmark
{
   public Tris1() 
   { 
     name="ZSmooth Triangles";
     unit="Tris";
     type=1;
     numsize=5;
     size=new int[10];
     size[0]=480;
     size[1]=250;
     size[2]=100;
     size[3]=50;
     size[4]=25;
     size[5]=0;
     size[6]=0;
     size[7]=0;
     size[8]=0;
     size[9]=0;
   }

   public void init()
   {
	   gl.glMatrixMode(GL_PROJECTION);
	   gl.glLoadIdentity();
	   gl.glOrtho(-0.5f, 639.5f, -0.5f, 479.5f, 1.0f, -1000.0f * 480.0f);
	   gl.glMatrixMode(GL_MODELVIEW);

	   gl.glShadeModel(GL_SMOOTH);
	   gl.glEnable(GL_DEPTH_TEST);

	   gl.glClearColor(0.0f, 0.1f, 1.0f, 0.0f);
	   gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   }

   public int run(int size, int num)
   {
	   int x, y, z;

	   gl.glBegin(GL_TRIANGLES);
	   for (y = 0; y < num; y++)
	      for (x = 0; x < size; x += 5) {
		 z = num * size - (y * size + x);
		 gl.glColor3f(0.0f, 1.0f, 0.0f);
		 gl.glVertex3i(0, x, z);

		 gl.glColor3f(1.0f, 0.0f, x / (float) size);
		 gl.glVertex3i(size - 1 - x, 0, z);

		 gl.glColor3f(1.0f, x / (float) size, 0.0f);
		 gl.glVertex3i(x, size - 1 - x, z);
	      }
	   gl.glEnd();

	   return size * num / 5;
   }

}

protected class Lins 
	extends benchmark
{
   public Lins() 
   { 
     name="Smooth Lines";
     unit="Lins";
     type=1;
     numsize=5;
     size=new int[10];
     size[0]=480;
     size[1]=250;
     size[2]=100;
     size[3]=50;
     size[4]=25;
     size[5]=0;
     size[6]=0;
     size[7]=0;
     size[8]=0;
     size[9]=0;
   }

   public void init()
   {
	   gl.glMatrixMode(GL_PROJECTION);
	   gl.glLoadIdentity();
	   glu.gluOrtho2D(-0.5f, 639.5f, -0.5f, 479.5f);
	   gl.glMatrixMode(GL_MODELVIEW);

	   gl.glShadeModel(GL_SMOOTH);
	   gl.glDisable(GL_DEPTH_TEST);

	   gl.glClearColor(0.0f, 0.1f, 1.0f, 0.0f);
	   gl.glClear(GL_COLOR_BUFFER_BIT);
   }

   public int run(int size, int num)
   {
	   int x, y;

	   gl.glBegin(GL_LINES);
	   for (y = 0; y < num; y++)
	      for (x = 0; x < size; x++) {
		 gl.glColor3f(0.0f, 1.0f, y / (float) num);
		 gl.glVertex2i(0, size - 1);
		 gl.glColor3f(1.0f, 0.0f, x / (float) size);
		 gl.glVertex2i(x, x);
	      }
	   gl.glEnd();

	   return num * size;
   }

}


protected class Pnts 
	extends benchmark
{
   public Pnts() 
   { 
     name="Simple Points";
     unit="Pnts";
     type=0;
     numsize=0;
     size=new int[10];
     size[0]=0;
     size[1]=0;
     size[2]=0;
     size[3]=0;
     size[4]=0;
     size[5]=0;
     size[6]=0;
     size[7]=0;
     size[8]=0;
     size[9]=0;
   }

   public void init()
   {
	   gl.glMatrixMode(GL_PROJECTION);
	   gl.glLoadIdentity();
	   glu.gluOrtho2D(-0.5f, 639.5f, -0.5f, 479.5f);
	   gl.glMatrixMode(GL_MODELVIEW);

	   gl.glShadeModel(GL_FLAT);
	   gl.glDisable(GL_DEPTH_TEST);

	   gl.glClearColor(0.0f, 0.1f, 1.0f, 0.0f);
	   gl.glClear(GL_COLOR_BUFFER_BIT);
	   gl.glColor3f(1.0f, 0.0f, 0.0f);
   }

   public int run(int size, int num)
   {
	   int x, y;

	   gl.glBegin(GL_POINTS);
	   for (y = 0; y < num; y++)
	      for (x = 0; x < 480; x++)
		 gl.glVertex2i(x, x);
	   gl.glEnd();

	   return 480 * num;
   }

}



}
