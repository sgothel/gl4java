package gl4java.utils;

import java.lang.ref.PhantomReference;
import java.lang.ref.Reference;
import java.lang.ref.ReferenceQueue;
import java.nio.*;
import java.util.HashMap;
import java.util.Map;

/** Provides a cleanup mechanism for direct buffers instantiated via
    the JNI entry point <code>NewDirectByteBuffer</code>. A direct
    buffer can be <i>registered</i> with a DirectBufferCleanup. When
    that buffer is reclaimed by the garbage collector, the callback
    associated with that DirectBufferCleanup is called on the address
    the direct buffer was associated with. */

public class DirectBufferCleanup {

  // Put DirectBufferCleanup.c into its own library if extracting just
  // this mechanism
  //  static {
  //    System.loadLibrary("DirectBufferCleanup");
  //  }

  public static interface Callback {
    public void cleanup(long addr);
  }

  public DirectBufferCleanup(Callback cb) {
    this.cb = cb;
    refToAddrMap = new HashMap();
    queue = new ReferenceQueue();
    start();
  }

  /** The DirectBufferCleanup contains an internal thread which is
      started automatically upon construction. This method starts the
      thread again if it is manually stopped via the {@link #stop}
      method. */
  public synchronized void start() {
    if (t == null) {
      t = new Thread(new Runnable() {
          public void run() {
            while (!done) {
              try {
                Reference r = queue.remove();
                Long addr = (Long) refToAddrMap.remove(r);
                cb.cleanup(addr.longValue());
                r.clear();
              } catch (InterruptedException e) {
              }
            }
            t = null;
          }
        });
      done = false;
      t.start();
    }
  }

  /** Stops the internal thread of this DirectBufferCleanup. Should
      not typically be necessary. */
  public synchronized void stop() {
    done = true;
    while (t != null) {
      try {
        wait();
      } catch (InterruptedException e) {
      }
    }
  }

  /** Registers the given buffer (which must be a direct buffer) for
      later cleanup when it is reclaimed by the garbage collector.
   
      @throw IllegalArgumentException if the passed buffer is not
      direct.
  */

  public void register(Buffer buf) throws IllegalArgumentException {
    try {
      long addr = getDirectBufferAddress(buf);
      if (addr == 0) throw new IllegalArgumentException();
      refToAddrMap.put(new PhantomReference(buf, queue),
                       new Long(addr));
    } catch (ClassCastException e) {
      throw new IllegalArgumentException();
    }
  }

  //----------------------------------------------------------------------
  // Internals only below this point
  //

  private Callback cb;

  // Maps PhantomReferences to addresses
  private Map refToAddrMap;

  // Reference queue which gets notified
  private ReferenceQueue queue;

  // Thread watching reference queue
  private volatile Thread t;

  // Native method providing direct buffer address via JNI
  private static native long getDirectBufferAddress(Buffer buf);

  private volatile boolean done = false;
}
