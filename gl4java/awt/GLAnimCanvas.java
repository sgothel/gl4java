/**
 * @(#) GLAnimCanvas.java
 */

package gl4java.awt;

import gl4java.*;

import java.awt.*;
import java.awt.event.*;
import java.lang.Math;


/**
 * This is meant as an base class writing
 * Animations. A clean usage of multi-threading compatible
 * with JAVA2 is implemented here !
 *
 * <p>
 *
 * If you are interessting in further Documentation and/or
 * the history of GL4Java follow the following link.
 * 
 * <pre>
        <a href="../../GL4Java.html">The GL4Java Documentation</a>
 * </pre>
 *
 * <p>
 * There are two ways of using a GLAnimCanvas: the {@link
 * gl4java.GLEventListener} model or the subclassing model. Earlier
 * versions of OpenGL for Java only supported the subclassing model.
 * The default implementations of {@link gl4java.awt.GLCanvas#init}, 
 * {@link gl4java.awt.GLCanvas#display}, 
 * {@link gl4java.awt.GLCanvas#reshape} and 
 # {@link gl4java.awt.GLCanvas#doCleanup} 
 * now send events to GLEventListeners; they can
 * still be overridden as before to support the subclassing model.
 * 
 * <p>
 * If using the subclassing model, you should override the following
 * methods for your needs:
 * <pre>
        <a href="GLCanvas.html#init()">preInit - initialisation before creating GLContext</a>
        <a href="GLAnimCanvas.html#init()">init - 1st initialisation</a>
        <a href="GLCanvas.html#doCleanup()">doCleanup - OGL cleanup prior to context deletion</a>
        <a href="GLAnimCanvas.html#display()">display - render one frame</a>
        <a href="GLCanvas.html#reshape(int, int)">reshape - to reshape (window resize)</a>
        <a href="GLAnimCanvas.html#ReInit()">ReInit - ReInitialisation after stop for setSuspended(false)</a>
 * </pre>
 *
 * <p>
 *
 * This code uses repaint() to fire a sDisplay call by the AWT-Event thread !
 * and sleep to suspend for a given Frames per secounds value as default !!
 *
 * To switch this behavior for a better performance, and responsiveness
 * so that sDisplay is called by the animation thread itself
 * call:
 *
 * <pre>
        <a href="GLAnimCanvas.html#setUseRepaint(boolean)">setUseRepaint(false)</a>
 * </pre>
 * <p>
 *
 * This code sleep's for a given Frames per secounds after each frame 
 * as default !!
 *
 * To switch this behavior for a better performance,
 * so that much frames are rendered as the machine can do !
 * call:
 *
 * <pre>
        <a href="GLAnimCanvas.html#setUseFpsSleep(boolean)">setUseFpsSleep(false)</a>
 * </pre>
 * <p>
 * But be sure, that the other threads may not have enough time or i
 * may not get the cpu power ...
 *
 * The following settings for setUseRepaint and setUseFpsSleep looks fine:
 *
 * <pre>
 	<p>
	A JVM with operating system threads has: <b>native-threads</b>
 	<p>
	A JVM where all JVM threads runs in one operating-system-thread
	has: <b>green-threads</b>

	<a name="table">
	<table border>
	<tr>
	<th><th>green-threads<th>native-threads
	<tr>
	<td align=center><a href="GLAnimCanvas.html#setUseRepaint(boolean)"><code>setUseRepaint</code></a>
	<td align=center><code>true</code>
	<td align=center><code> true & false </code>
	<tr>
	<td align=center><a href="GLAnimCanvas.html#setUseFpsSleep(boolean)"><code>setUseFpsSleep</code></a>
	<td align=center><code>true</code>
	<td align=center><code> true & false </code>

	</table>
	</a>
 * </pre>
 *
 * If you play with setUseRepaint or setUseFpsSleep, 
 * be shure to have a Java VM with native-thread support,
 * because a GL-Context can be shared by many threads,
 * but one thread can have just one GL-Context !
 *
 * <p>
 *
 * Since GL4Java 2.5.2 and using a JVM >= 1.3
 * the multithreading support is stable !
 *
 * <p>
 *
 * (comments welcome)
 * 
 * <p>
 * To use real fps settings, the following functions provides you to do so:
 * <pre>
        <a href="GLAnimCanvas.html#setAnimateFps(double)">setAnimateFps</a>
        <a href="GLAnimCanvas.html#getMaxFps()">getMaxFps</a>
 * </pre>
 * Like the first animation run, this class renders a view frames (default 10)
 * to subtract the render time from the sleep time !
 *
 * @see gl4java.awt.GLCanvas
 * @version         2.0, 21. April 1999
 * @author      Sven Goethel
 * 
 */
public class GLAnimCanvas extends GLCanvas
  implements GLRunnable
{
        /**
         * To support frames per scounds,
         * instead of killing the machine :-)
         *
         * A little GUI is supported !
         *
         * @see gl4java.awt.GLAnimCanvas#run    
         */
        protected double FramesPerSec=20;
        protected long   mSecPerFrame=0;

        protected static int    globalThreadNumber=0;

        public static int getGlobalThreadNumber()
	{
		return globalThreadNumber;
	}

	/**
	 * the delays ..
	 */
	protected long dFpsMilli  = 0;
                                                                     
        /**
         * The thread  for  referencing Thread (Animation)
         *
         * @see gl4java.awt.GLAnimCanvas#stop
         * @see gl4java.awt.GLAnimCanvas#start
         * @see gl4java.awt.GLAnimCanvas#run
         */      
        protected Thread killme = null;

        /**
         * Instead of using suspend (JAVA2)
         *
         * @see gl4java.awt.GLAnimCanvas#run
         */      
        protected boolean threadSuspended = false;

        static {
	    if(GLContext.doLoadNativeLibraries(null, null, null)==false)
	      System.out.println("GLAnimCanvas could not load def. native libs.");
        }

        /**
         *
         * Constructor
         *
         * @see gl4java.awt.GLCanvas#GLCanvas
         *
         */
        public GLAnimCanvas( int width, int height,
                                  String gl_Name, 
                                  String glu_Name
                           )
        {
                super( width, height, gl_Name, glu_Name );
		setAnimateFps(FramesPerSec);
        }

        /**
         *
         * Constructor
         *
         * Uses the default GLFunc and GLUFunc implementation !
         *
         * @see gl4java.awt.GLCanvas#GLCanvas
         *
         */
        public GLAnimCanvas( int width, int height )
        {
                super( width, height);
		setAnimateFps(FramesPerSec);
        }

        /**
         *
         * Constructor
         *
         * @see gl4java.awt.GLCanvas#GLCanvas
         *
         */
        public GLAnimCanvas( GLCapabilities capabilities,
	                          int width, int height,
                                  String gl_Name, 
                                  String glu_Name
                           )
        {
                super( capabilities, width, height, gl_Name, glu_Name );
		setAnimateFps(FramesPerSec);
        }

        /**
         *
         * Constructor
         *
         * Uses the default GLFunc and GLUFunc implementation !
         *
         * @see gl4java.awt.GLCanvas#GLCanvas
         *
         */
        public GLAnimCanvas( GLCapabilities capabilities,
			     int width, int height )
        {
                super( capabilities, width, height);
		setAnimateFps(FramesPerSec);
        }

        /**
         *
         * Constructor
         *
         * @see gl4java.awt.GLCanvas#GLCanvas
         */
        public GLAnimCanvas( GraphicsConfiguration config,
                             GLCapabilities capabilities,
                             int width, int height,
                                  String gl_Name, 
                                  String glu_Name
                           )
        {
                super( config, capabilities, 
		       width, height, gl_Name, glu_Name );
		setAnimateFps(FramesPerSec);
        }

        /**
         *
         * Constructor
         *
         * Uses the default GLFunc and GLUFunc implementation !
         *
         * @see gl4java.awt.GLCanvas#GLCanvas
         */
        public GLAnimCanvas( GraphicsConfiguration config, 
                             GLCapabilities capabilities,
	                     int width, int height )
        {
                super( config, capabilities, 
		        width, height);
		setAnimateFps(FramesPerSec);
        }

        /**
         * ReInit should be overwritten by you,
         * to enter your re-initialisation within setSuspended(false) 
         * 
         * @see gl4java.awt.GLAnimCanvas#setSuspended
         */
        public void ReInit()
        {
        }

        protected boolean useRepaint = false;

        protected boolean useFpsSleep = true;

        protected boolean useYield = true;

        /**
         * The normal behavior is to use 'repaint'
         * within the AWT-Event Thread to render.
         * <p>
         * If you have serious reasons, e.g. measuring performance,
         * you can change it while invoke this function with 'false'.
         * In this case, the thread itself calls the sDisplay method !
	 * 
	 * On fast good multi-threading machines (native-thread-JVM), 
	 * this should increase the performance and the responsiveness !
         * <p>
         * 
         * @param b if true, uses repaint (default), otherwise directly sDisplay
         * @see gl4java.awt.GLCanvas#sDisplay
         * @see gl4java.awt.GLAnimCanvas#setUseFpsSleep
         */
        public synchronized void setUseRepaint(boolean b)
        {
                useRepaint = b;
        }

        /**
         * The normal behavior is to use FpsSleep
	 *
         * But you can overwrite this behavior and 
	 * drop the Frame Per Secound sleeps -
	 * so that much frames are rendered as the machine can do !
         * <p>
         * 
         * @param b if true, uses Fps sleeping, else not !
         * @see gl4java.awt.GLCanvas#sDisplay
         * @see gl4java.awt.GLAnimCanvas#setUseRepaint
         */
        public synchronized void setUseFpsSleep(boolean b)
        {
	     useFpsSleep = b;
        }

        /** If useFpsSleep is disabled, the library still performs a
            Thread.yield() automatically -- use this to disable this */
        public void setUseYield(boolean b) {
          useYield = b;
        }

        public boolean getUseRepaint()
        {
                return useRepaint;
        }

        public boolean getUseFpsSleep()
        {
                return useFpsSleep;
        }

        public boolean getUseYield()
        {
                return useYield;
        }

	/**
	 * Identifies this object with the given thread ..
	 * If this object owns this thread, it must return true !
	 */
	public boolean ownsThread(Thread thread)
	{
		return killme!=null && killme==thread ;
	}

        /** 
         *  HERE WE DO HAVE OUR RUNNING THREAD !
         *  WE NEED STUFF LIKE THAT FOR ANIMATION ;-)
         */
        public void start() 
        {
            if(killme == null) 
            {
              killme = new Thread(this);
              killme.start();

              resetFpsCounter();
            }
        }

        public synchronized void stop() 
        {
            killme = null;
	    threadSuspended=false;

            notifyAll();
        }

        /**
          * You should call this before releasing/dispose this Window ! 
          * Also you can overwrite this class,
          * to dispose your own elements, e.g. a Frame etc. - 
          * but be shure that you call
          * cvsDispose implementation call this one !
          * 
          * This function calls gljDestroy of GLContext !
          *
          * @see gl4java.GLContext#gljDestroy
          * @see gl4java.awt.GLCanvas#cvsDispose
          * @see gl4java.awt.GLCanvas#doCleanup
          */
    	public void cvsDispose()
    	{
		stop();
		super.cvsDispose();
	}

        protected boolean shallWeRender = true;
        protected boolean isRunning     = false;
        protected boolean forceGLFree   = false;

	private long _fDelay = 0;
	private long _fDelay_Frames = 10;
	private boolean _fDelaySync=true;
	private boolean _fDelayRun=false;

         /** 
          * Forcec this thread to release it's GLContext !
	  * 
	  * To ensure this, this thread enables itself,
	  * and calls gljFree(true) to force the release !
          *
          * @see gl4java.awt.GLAnimCanvas#run
          * @see gl4java.GLContext#gljMakeCurrent
          */
	public void freeGLContext()
	{
		forceGLFree=true;
	}

         /** 
          *  The running loop for animations
          *  which initiates the call of display
          *
          * @see gl4java.awt.GLAnimCanvas#setSuspended
          * @see gl4java.awt.GLCanvas#display
          */
        public void run() 
        {
            Thread thisThread = Thread.currentThread();

	    isRunning = true;

            int numInitRetries = 1;

	    synchronized (this) {
	    	globalThreadNumber++;
	    }

            while (killme==thisThread)
            {
		  if(cvsIsInit())
		  {
		    // if another thread want's to do use do ..
		    if(forceGLFree)
		    {
		        glj.gljFree(true);
			forceGLFree=false;
		        if(GLContext.gljThreadDebug)
			    System.out.println("GLAnimCanvas: forceGLFree(1) - gljFree");
		    } 
		    else if (shallWeRender) 
		    {
		      /* DRAW THE TINGS .. */
		      if(useRepaint)
			    repaint();
		      else 
			    sDisplay();

		      if(fps_isCounting) 
			fps_frames++; 

		    } else {
		      synchronized (this) {
		              glj.gljFree(true);
			      threadSuspended=true;
		      }
		    }

		  } else {
		    if(GLContext.gljThreadDebug)
		    {
			    System.err.println("Waiting for canvas to initialize (" +
					       numInitRetries + ")...");
		    }
		    ++numInitRetries;
                    try {
                      Thread.currentThread().sleep(100);
                    } catch (Exception e) {
                    }
                  }

		  // if another thread want's to do use do ..
		  if(forceGLFree)
		  {
		        glj.gljFree(true);
			forceGLFree=false;
		        if(GLContext.gljThreadDebug)
			    System.out.println("GLAnimCanvas: forceGLFree(2) - gljFree");
		  } 

		  try {
		       if(useFpsSleep)
		       {
		          if(useRepaint)
			  {
				  if(mSecPerFrame<_f_dur)
				        dFpsMilli=_f_dur;
				  else
					dFpsMilli=mSecPerFrame;
			  }
			  else 
			  {
				  dFpsMilli= mSecPerFrame - _f_dur;
			          if (dFpsMilli<=0)
					dFpsMilli= 1;
			   } 

                          Thread.currentThread().sleep(dFpsMilli, 0 );
                       } else {
                         if (useYield) {
                           Thread.yield();
                         }
		       }

                       if (threadSuspended) {
		           glj.gljFree(true);
                           stopFpsCounter();
                           synchronized (this) {
                                while (threadSuspended)
                                        wait();
                           }
                       } 
		  } catch (InterruptedException e)
	          {}
            }

            if(glj!=null)
                glj.gljFree(true); // just to be sure .. force freeing the context

	    synchronized (this) {
	    	globalThreadNumber--;
	    }

	    isRunning = false;
        }

         /** 
          *  Here we can (re)start or suspend animation ...
	  *
	  * If the thread should be (re)started and is not alive -> killed, 
	  * or never be started, it will be started !
	  *
	  * @param suspend  if true the thread will be suspended,
	  *                 if false, the thread will be (re)started
	  *
          * @see gl4java.awt.GLAnimCanvas#isAlive
          * @see gl4java.awt.GLAnimCanvas#start
          */
        public synchronized void setSuspended(boolean suspend)
        {
		setSuspended(suspend, false);
        }

         /** 
          *  Here we can (re)start or suspend animation ...
	  *
	  * If the thread should be (re)started and is not alive -> killed, 
	  * or never be started, it will be started !
	  *
	  * @param suspend  if true the thread will be suspended,
	  *                 if false, the thread will be (re)started
	  *
	  * @param reInit   if true the ReInit will be called additionally,
	  *                 where the user can set additional initialisations
	  *
          * @see gl4java.awt.GLAnimCanvas#ReInit
          * @see gl4java.awt.GLAnimCanvas#isAlive
          * @see gl4java.awt.GLAnimCanvas#start
          * @see gl4java.awt.GLAnimCanvas#run
          */
        public synchronized void setSuspended(boolean suspend, boolean reInit)
        {
	    if(suspend) {
		    shallWeRender=false;
	    } else if(isAlive()==false) {
		    start();
	    } else {
	            // the thread is alive, but suspended and should be 
		    // re-started
		    shallWeRender=true;
		    resetFpsCounter();

		    if(reInit)
			    ReInit();

		    threadSuspended=false;
		    notifyAll();
	    }
        }

        /**
         * is the thread alive, means is started and not died ?
         *
         * @see gl4java.awt.GLAnimCanvas#run
         * @see gl4java.awt.GLAnimCanvas#setSuspended
         * @see gl4java.awt.GLAnimCanvas#start
         * @see gl4java.awt.GLAnimCanvas#stop
         */      
        public boolean isAlive()
	{ 
		if(killme==null) return false;
		return killme.isAlive();
	}

        /**
         * is the thread suspended, means is started but waiting, 
	 * or not alive (ok :-| - but it is practical)
         *
         * @see gl4java.awt.GLAnimCanvas#run
         * @see gl4java.awt.GLAnimCanvas#setSuspended
         * @see gl4java.awt.GLAnimCanvas#start
         * @see gl4java.awt.GLAnimCanvas#stop
         */      
        public boolean isSuspended()
	{ 
		if(killme==null) return true;
		return threadSuspended;
	}

        private double  fps=0;            // frame-per-sec
        private long    fps_duration =0;  // milli-secs
        private long    fps_start=0;      // milli-secs
        private long    fps_frames =0;    // number of frames
        private boolean fps_isCounting =true; // shall i count

        /**
         * resets the Fps Counter
         * <p>
         * this function is called automatically by
         * start and after setSuspended suspends the
	 * animation thread !
         *
         * @see gl4java.awt.GLAnimCanvas#start
         * @see gl4java.awt.GLAnimCanvas#setSuspended
         * @see gl4java.awt.GLAnimCanvas#resetFpsCounter
         * @see gl4java.awt.GLAnimCanvas#stopFpsCounter
         * @see gl4java.awt.GLAnimCanvas#getFps
         * @see gl4java.awt.GLAnimCanvas#getFpsDuration
         * @see gl4java.awt.GLAnimCanvas#getFpsFrames
         * @see gl4java.awt.GLAnimCanvas#setVerboseFps
         */
        public void resetFpsCounter()
        {
		fps=0;            // frame-per-sec
		fps_duration =0;  // milli-secs
		fps_frames =0;    // number of frames
		fps_isCounting =true; // shall i count
                fps_start=System.currentTimeMillis();    
        }

        /**
         * stops the Fps Counter and sets all values
         * fot the getFps* methods
         * <p>
         * this function is called automatically by
         * run, if the thread is suspended via setSuspended(true)
         * <p>
         * All data's are print out on System.out 
         * if GLContext.gljClassDebug is set !
         *
         * @see gl4java.awt.GLAnimCanvas#run
         * @see gl4java.awt.GLAnimCanvas#setSuspended
         * @see gl4java.awt.GLAnimCanvas#resetFpsCounter
         * @see gl4java.awt.GLAnimCanvas#getFps
         * @see gl4java.awt.GLAnimCanvas#getFpsDuration
         * @see gl4java.awt.GLAnimCanvas#getFpsFrames
         * @see gl4java.awt.GLAnimCanvas#setVerboseFps
         */
        public void stopFpsCounter()
        {
           if(fps_isCounting==true)
           {
                long fps_end=System.currentTimeMillis();
                fps_duration = fps_end-fps_start;
                double timed= ((double)fps_duration)/1000.0;
                if(timed==0) timed=1.0;
                fps  = ((double)fps_frames)/timed ;     
                fps_isCounting=false;
           }
           if(GLContext.gljClassDebug)
           {
                System.out.println("\nfps    = "+String.valueOf(fps));
                System.out.println("time   = "+String.valueOf(fps_duration)+" ms");
                System.out.println("frames = "+String.valueOf(fps_frames));
		if(fps_frames==0) fps_frames=1;
                System.out.println("time/f = "+String.valueOf(fps_duration/fps_frames)+" ms");
           }
        }

        /**
         * sets if the Fps data shall be printed to System.out
         * while stopFpsCounter is called !
         * <p>
         * GLContext.gljClassDebug is set to true by default !
         *
         * @see gl4java.awt.GLAnimCanvas#run
         * @see gl4java.awt.GLAnimCanvas#setSuspended
         * @see gl4java.awt.GLAnimCanvas#resetFpsCounter
         * @see gl4java.awt.GLAnimCanvas#stopFpsCounter
         * @see gl4java.awt.GLAnimCanvas#getFps
         * @see gl4java.awt.GLAnimCanvas#getFpsDuration
         * @see gl4java.awt.GLAnimCanvas#getFpsFrames
         * @see gl4java.awt.GLAnimCanvas#setVerboseFps
	 *
	 * @deprecated Now GLContext.gljClassDebug is used !
	 * calculated, no pre-sync needed.
         * @see gl4java.GLContext#gljClassDebug
         */
        public void setVerboseFps(boolean v)
        {
		System.out.println("GLAnimCanvas.setVerboseFps(boolean) is deprecated and without functionality. Please set gl4java.GLContext.gljClassDebug instead for verbose output !");
        }

        /**
         * returns the calculated frames per secounds
         * <p>
         * this data is avaiable after calling stopFpsCounter
         *
         * @see gl4java.awt.GLAnimCanvas#resetFpsCounter
         * @see gl4java.awt.GLAnimCanvas#stopFpsCounter
         * @see gl4java.awt.GLAnimCanvas#getFps
         * @see gl4java.awt.GLAnimCanvas#getFpsDuration
         * @see gl4java.awt.GLAnimCanvas#getFpsFrames
         * @see gl4java.awt.GLAnimCanvas#setVerboseFps
         */
        public double getFps()
        {
                return fps;
        }

        /**
         * returns the calculated duration in millisecs
         * <p>
         * this data is avaiable after calling stopFpsCounter
         *
         * @see gl4java.awt.GLAnimCanvas#resetFpsCounter
         * @see gl4java.awt.GLAnimCanvas#stopFpsCounter
         * @see gl4java.awt.GLAnimCanvas#getFps
         * @see gl4java.awt.GLAnimCanvas#getFpsDuration
         * @see gl4java.awt.GLAnimCanvas#getFpsFrames
         * @see gl4java.awt.GLAnimCanvas#setVerboseFps
         */
        public long getFpsDuration()
        {
                return fps_duration;
        }

        /**
         * returns the calculated frames number
         * <p>
         * this data is avaiable after calling stopFpsCounter
         *
         * @see gl4java.awt.GLAnimCanvas#resetFpsCounter
         * @see gl4java.awt.GLAnimCanvas#stopFpsCounter
         * @see gl4java.awt.GLAnimCanvas#getFps
         * @see gl4java.awt.GLAnimCanvas#getFpsDuration
         * @see gl4java.awt.GLAnimCanvas#getFpsFrames
         * @see gl4java.awt.GLAnimCanvas#setVerboseFps
         */
        public long getFpsFrames()
        {
                return fps_frames;
        }

         /** 
          * Just set the FramePerSecounds for Animation
	  *
	  * @deprecated Now the frames per seconds are allways 
	  * calculated, no pre-sync needed.
          * @see #setAnimateFps(double)
          */
        public void setAnimateFps(double fps, int synFrames)
        {
		setAnimateFps(fps);
	}

         /** 
          * Just set the FramePerSecounds for Animation
	  *
          * @see gl4java.awt.GLAnimCanvas#getMaxFps    
          */
        public void setAnimateFps(double fps)
        {
		FramesPerSec=fps;
	        mSecPerFrame = (long) ( (1.0/FramesPerSec) * 1000.0 ) ;
                if(GLContext.gljClassDebug)
                {
			System.out.println("\nset fps    := "+
			                   String.valueOf(fps)+
					   " -> "+String.valueOf(mSecPerFrame)+
					   " [ms/frame]"
					  );
		}
                resetFpsCounter();
	}

         /** 
          * Just get the maximum number of Frames per secounds,
	  * which is calculated with the time, one frame needs to render !
	  *
	  * this value is avaiable after the thread is started
	  * and the first frames are rendered !
	  *
          * @see gl4java.awt.GLAnimCanvas#setAnimateFps    
          */
        public double getMaxFps()
        {
		return  (1.0/(double)_f_dur)*1000.0;
        }

}

