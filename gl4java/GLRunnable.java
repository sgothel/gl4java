/**
 * @(#) GLRunnable.java
 */
package gl4java;

import java.lang.*;

/**
 * This is the interface for a threaded renderer (animator thread).
 *
 * If an animation class, e.g. {@link gl4java.awt.GLAnimCanvas},
 * implements {@link gl4java.drawable.GLDrawable} and this interface,
 * you will benefit from the new context handling {@link gl4java.GLContext#gljFree}.
 *
 * @see gl4java.GLContext
 * @see gl4java.drawable.GLDrawable
 * @see gl4java.awt.GLAnimCanvas
 */
public interface GLRunnable extends Runnable
{
        /** 
         *  This creates and start one singleton unique thread !
         */
        public void start();

        /** 
         *  This stops and destroys (deferred) our singleton unique thread !
         */
        public void stop();

	/**
	 * Identifies this object with the given thread ..
	 * If this object owns this thread, it must return true !
	 */
	public boolean ownsThread(Thread thread);

        /** 
         *  The running loop for animations
         *  which initiates the call of display
         *
	 *  Be sure to force freeing the GL context 
	 *  with {@link gl4java.GLContext#gljFree}(true), if:
	 *  <pre>
	 	- you exit this run loop
		- you suspend your thread -> wait
		- you kill your thread ..
	 *  </pre>
	 *
	 *  Also be sure, to implement this Runnable as Java2 does recomends !
	 *  Look at the example implementation {@link gl4java.awt.GLAnimCanvas#run} !
	 *
         * @see gl4java.awt.GLAnimCanvas#run
         * @see #setSuspended
         */
        public void run();

        /** 
         *  Here we can (re)start or suspend animation ...
	 *
	 * If the thread should be (re)started and is not alive -> killed, 
	 * or never be started, it will be started !
	 *
	 * @param suspend  if true the thread will be suspended,
	 *                 if false, the thread will be (re)started
	 *
         * @see #isAlive
         * @see #start
         */
        public void setSuspended(boolean suspend);

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
         * @see #ReInit
         * @see #isAlive
         * @see #start
         * @see #run
         */
        public void setSuspended(boolean suspend, boolean reInit);

        /**
         * is the thread alive, means is started and not died ?
         *
         * @see #run
         * @see #setSuspended
         * @see #start
         * @see #stop
         */      
        public boolean isAlive();

        /**
         * is the thread suspended, means is started but waiting, 
	 * or not alive (ok :-| - but it is practical)
         *
         * @see #run
         * @see #setSuspended
         * @see #start
         * @see #stop
         */      
        public boolean isSuspended();

        /**
         * ReInit should be overwritten by you,
         * to enter your re-initialisation within setSuspended(false) 
         * 
         * @see #setSuspended
         */
        public void ReInit();

        /** 
         * Forces this thread to release it's GLContext !
	 * 
	 * To ensure this, this thread enables itself,
	 * and calls gljFree(true) to force the release !
         *
         * @see #setSuspended
         * @see #run
         */
	public void freeGLContext();
}
