/**
 * @(#) GLAnimJPanel.java
 */

package gl4java.swing;

import gl4java.GLContext;

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
        <a href="GLAnimJPanel.html#setUseRepaint(boolean)">setUseRepaint(false)</a>
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
        <a href="GLAnimJPanel.html#setUseFpsSleep(boolean)">setUseFpsSleep(false)</a>
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
	<td align=center><a href="GLAnimJPanel.html#setUseRepaint(boolean)"><code>setUseRepaint</code></a>
	<td align=center><code>true</code>
	<td align=center><code> true & false </code>
	<tr>
	<td align=center><a href="GLAnimJPanel.html#setUseFpsSleep(boolean)"><code>setUseFpsSleep</code></a>
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
 * (comments welcome)
 * 
 * <p>
 * To use real fps settings, the following functions provides you to do so:
 * <pre>
        <a href="GLAnimJPanel.html#setAnimateFps(double, int)">setAnimateFps</a>
        <a href="GLAnimJPanel.html#getMaxFps()">getMaxFps</a>
 * </pre>
 * Like the first animation run, this class renders a view frames (default 10)
 * to subtract the render time from the sleep time !
 * <p>
 * You should overwrite the following methods for your needs:
 * <pre>
        <a href="GLAnimJPanel.html#init()">init - 1st initialisation</a>
        <a href="GLAnimJPanel.html#display()">display - render one frame</a>
        <a href="GLCanvas.html#reshape(int, int)">reshape - to reshape (window resize)</a>
        <a href="GLAnimJPanel.html#ReInit()">ReInit - ReInitialisation after stop for setSuspended(false)</a>
 * </pre>
 *
 * @see GLCanvas
 * @version         2.0, 21. April 1999
 * @author      Sven Goethel
 * 
 */
public class GLAnimJPanel extends GLJPanel
  implements Runnable
{
        /**
         * To support frames per scounds,
         * instead of killing the machine :-)
         *
         * A little GUI is supported !
         *
         * @see GLAnimJPanel#run    
         */
        protected double FramesPerSec=20;
        protected long   mSecPerFrame=0;

	/**
	 * the delays ..
	 */
	protected long dFpsMilli  = 0;
                                                                     
        /**
         * The thread  for  referencing Thread (Animation)
         *
         * @see GLAnimJPanel#stop
         * @see GLAnimJPanel#start
         * @see GLAnimJPanel#run
         */      
        protected Thread killme = null;

        /**
         * Instead of using suspend (JAVA2)
         *
         * @see GLAnimJPanel#run
         */      
        protected boolean threadSuspended = false;

        static {
	    if(GLContext.loadNativeLibraries(null, null, null)==false)
	      System.out.println("GLAnimJPanel could not load def. native libs.");
        }

    /**
     *
     * Constructor
     *
     * @param gl_Name     The name of the GLFunc implementation
     *                    If gl_Name==null, the default class will be used !
     *
     * @param glu_Name    The name of the GLUFunc implementation
     *                    If gl_LibName==null, the default class will be used !
     *
     * @param layout    	the layout manager
     * @param isDoubleBuffered  the flag indicates, 
     *                          if double buffer should be used
     *
     */
    public GLAnimJPanel( String gl_Name, 
     	             String glu_Name,
                     LayoutManager layout, boolean isDoubleBuffered
		  )
    {
	super( gl_Name, glu_Name, layout, isDoubleBuffered );
	setAnimateFps(FramesPerSec);

    }

    /**
     *
     * Constructor
     *
     * @param layout    	the layout manager
     * @param isDoubleBuffered  the flag indicates, 
     *                          if double buffer should be used
     *
     */
    public GLAnimJPanel( LayoutManager layout, boolean isDoubleBuffered )
    {
	super(layout, isDoubleBuffered);
	setAnimateFps(FramesPerSec);
    }

    /**
     *
     * Constructor
     *
     * Uses the default GLFunc and GLUFunc implementation !
     *
     * @param isDoubleBuffered  the flag indicates, 
     *                          if double buffer should be used
     */
    public GLAnimJPanel( boolean isDoubleBuffered )
    {
	super(isDoubleBuffered);
	setAnimateFps(FramesPerSec);
    }

    /**
     *
     * Constructor
     *
     * Uses the default GLFunc and GLUFunc implementation !
     *
     * @param layout    	the layout manager
     */
    public GLAnimJPanel(LayoutManager layout)
    {
	super(layout);
	setAnimateFps(FramesPerSec);
    }
	
        /**
         *
         * Constructor
         *
         * Uses the default GLFunc and GLUFunc implementation !
         *
         * @see GLCanvas#GLCanvas
         *
         */
        public GLAnimJPanel( )
        {
		super();
		setAnimateFps(FramesPerSec);
        }

         /** 
          *  init should be overwritten by you,
          *  to enter your initialisation code
          *
          */
        public void init() 
        {
                /* here we should add and initialize our JAVA components */

                /* ... and furthet OpenGL init's - like you want to */

                glj.gljCheckGL();

                ReInit();

                /* and start our working thread ... */
                start();
        }

        /**
         *
         * This is the rendering-method called by sDisplay 
         * (and sDisplay is called by paint, or by the thread directly !).
         * The derived-class (Your Subclass) will redefine this, 
         * to draw it's own animation !
	 *
         * <p>
         *
         * You should set shallWeRender here,
         * to signalize the animation-loop 'run' to supsend
         * <p>
         * To restart the thread, just call setSuspended(false)
         *
         * @see GLAnimJPanel#shallWeRender
         * @see GLAnimJPanel#run
         * @see GLAnimJPanel#setSuspended
         * @see GLCanvas#sDisplay
         * @see GLCanvas#paint
         */ 
         public void display()
         {
		  int i;

		  // ... just render it

         }

        /**
         * ReInit should be overwritten by you,
         * to enter your re-initialisation within setSuspended(false) 
         * 
         * @see GLAnimJPanel#setSuspended
         */
        public void ReInit()
        {
        }

        protected boolean useRepaint = true;

        protected boolean useFpsSleep = true;

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
         * @see GLCanvas#sDisplay
         * @see GLAnimJPanel#setUseFpsSleep
         */
        public void setUseRepaint(boolean b)
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
         * @see GLCanvas#sDisplay
         * @see GLAnimJPanel#setUseRepaint
         */
        public void setUseFpsSleep(boolean b)
        {
	     useFpsSleep = b;
        }

        public boolean getUseRepaint()
        {
                return useRepaint;
        }

        public boolean getUseFpsSleep()
        {
                return useFpsSleep;
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
            notify();
        }

        /**
         * Should be set in display,
         * whether to render or not while the animation loop
         * <p>
         * If shallWeRender is false,
         * this thread will suspend !
         *
         * @see GLAnimJPanel#display
         * @see GLAnimJPanel#run
         */
        protected boolean shallWeRender = true;

	private long _fDelay = 0;
	private long _fDelay_Frames = 10;
	private boolean _fDelaySync=true;
	private boolean _fDelayRun=false;

         /** 
          *  The running loop for animations
          *  which initiates the call of display
          *
          * @see GLAnimJPanel#shallWeRender
          * @see GLAnimJPanel#display
          * @see GLAnimJPanel#diplay
          */
        public void run() 
        {
            Thread thisThread = Thread.currentThread();


            while (killme==thisThread)
            {
		  if(cvsIsInit())
		  {
			  /* DRAW THE TINGS .. */
			  if (shallWeRender) 
			  {
			      if(useRepaint)
				      repaint();
			      else 
				      sDisplay();
			  } else {
			      // lets sleep ...
			      synchronized (this) {
				      threadSuspended=true;
			      }
			  }

			  if(fps_isCounting) 
				fps_frames++; 

		  }

		  try {
		       if(useFpsSleep)
		       {
		          if(useRepaint)
			  {
				  if(mSecPerFrame<_f_dur_total)
				        dFpsMilli=_f_dur_total;
				  else
					dFpsMilli=mSecPerFrame;
			  }
			  else 
			  {
				  dFpsMilli= mSecPerFrame - _f_dur_total;
			          if (dFpsMilli<=0)
					dFpsMilli= 1;
			   } 

                          Thread.currentThread().sleep(dFpsMilli, 0 );
                       }

                       if (threadSuspended) {
                           stopFpsCounter();
                           synchronized (this) {
                                while (threadSuspended)
                                        wait();
                           }
                       } 
		  } catch (InterruptedException e)
	          {}
            }
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
          * @see GLAnimJPanel#isAlive
          * @see GLAnimJPanel#start
          */
        public void setSuspended(boolean suspend)
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
          * @see GLAnimJPanel#isAlive
          * @see GLAnimJPanel#start
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
		    notify();
	    }
        }

        /**
         * is the thread alive, means is started and not died ?
         *
         * @see GLAnimJPanel#run
         * @see GLAnimJPanel#setSuspended
         * @see GLAnimJPanel#start
         * @see GLAnimJPanel#stop
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
         * @see GLAnimJPanel#run
         * @see GLAnimJPanel#setSuspended
         * @see GLAnimJPanel#start
         * @see GLAnimJPanel#stop
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
        private boolean verboseFps =true; // shall i be verbose

        /**
         * resets the Fps Counter
         * <p>
         * this function is called automatically by
         * start and setSuspended
         *
         * @see GLAnimJPanel#start
         * @see GLAnimJPanel#setSuspended
         * @see GLAnimJPanel#resetFpsCounter
         * @see GLAnimJPanel#stopFpsCounter
         * @see GLAnimJPanel#getFps
         * @see GLAnimJPanel#getFpsDuration
         * @see GLAnimJPanel#getFpsFrames
         * @see GLAnimJPanel#setVerboseFps
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
         * run, if the thread is suspended via shallWeRender
         * <p>
         * All data's are print out on System.out 
         * if verboseFps is set !
         *
         * @see GLAnimJPanel#run
         * @see GLAnimJPanel#shallWeRender
         * @see GLAnimJPanel#resetFpsCounter
         * @see GLAnimJPanel#stopFpsCounter
         * @see GLAnimJPanel#getFps
         * @see GLAnimJPanel#getFpsDuration
         * @see GLAnimJPanel#getFpsFrames
         * @see GLAnimJPanel#setVerboseFps
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
           if(verboseFps)
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
         * verboseFps is set to true by default !
         *
         * @see GLAnimJPanel#run
         * @see GLAnimJPanel#shallWeRender
         * @see GLAnimJPanel#resetFpsCounter
         * @see GLAnimJPanel#stopFpsCounter
         * @see GLAnimJPanel#getFps
         * @see GLAnimJPanel#getFpsDuration
         * @see GLAnimJPanel#getFpsFrames
         * @see GLAnimJPanel#setVerboseFps
         */
        public void setVerboseFps(boolean v)
        {
                verboseFps=v;
        }

        /**
         * returns the calculated frames per secounds
         * <p>
         * this data is avaiable after calling stopFpsCounter
         *
         * @see GLAnimJPanel#resetFpsCounter
         * @see GLAnimJPanel#stopFpsCounter
         * @see GLAnimJPanel#getFps
         * @see GLAnimJPanel#getFpsDuration
         * @see GLAnimJPanel#getFpsFrames
         * @see GLAnimJPanel#setVerboseFps
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
         * @see GLAnimJPanel#resetFpsCounter
         * @see GLAnimJPanel#stopFpsCounter
         * @see GLAnimJPanel#getFps
         * @see GLAnimJPanel#getFpsDuration
         * @see GLAnimJPanel#getFpsFrames
         * @see GLAnimJPanel#setVerboseFps
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
         * @see GLAnimJPanel#resetFpsCounter
         * @see GLAnimJPanel#stopFpsCounter
         * @see GLAnimJPanel#getFps
         * @see GLAnimJPanel#getFpsDuration
         * @see GLAnimJPanel#getFpsFrames
         * @see GLAnimJPanel#setVerboseFps
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
          * @see GLAnimJPanel#getMaxFps    
          */
        public void setAnimateFps(double fps)
        {
		FramesPerSec=fps;
	        mSecPerFrame = (long) ( (1.0/FramesPerSec) * 1000.0 ) ;
                if(verboseFps)
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
          * @see GLAnimJPanel#setAnimateFps    
          */
        public double getMaxFps()
        {
		return  (1.0/(double)_f_dur_total)*1000.0;
        }

}

