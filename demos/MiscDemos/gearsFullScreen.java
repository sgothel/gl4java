/**
 * @(#) gearsFullScreen.java
 * @(#) author: Brian Paul (converted to Java by Ron Cemer and Sven Goethel)
 *
 * This version is equal to Brian Paul's version 1.2 1999/10/21
 */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import gl4java.*;
import gl4java.drawable.*;
import gl4java.awt.GLAnimCanvas;
import gl4java.applet.SimpleGLAnimApplet1;

public class gearsFullScreen extends SimpleGLAnimApplet1 
  implements MouseListener
{

  /* Initialize the applet */
  public void init() {
    init(false);
  }

  public void init(boolean showGL) {
    super.init();

    Dimension d = getSize();

    GLCapabilities caps = new GLCapabilities();

    canvas =
      GLDrawableFactory.getFactory().createGLAnimCanvas(caps, d.width, d.height);

    gearRenderer gear = new gearRenderer(showGL);
    canvas.addGLEventListener(gear);

    add("Center", canvas);
    addMouseListener(this);
  }

  public void destroy() {
    removeMouseListener(this);
    super.destroy();
  }


  public static void main(String args[]) {
    int i = 0;
    String gljLib = null;
    String glLib = null;
    String gluLib = null;
    boolean perftest=false;

    GLContext.gljNativeDebug = false;
    GLContext.gljClassDebug = false;
    GLContext.gljThreadDebug = false;

    while(args.length > i) {
      if(args[i].equals("-perftest")) {
        perftest=true;
      } else if(args[i].equals("-gljLib")) {
        i++;
        if(args.length>i)
          gljLib=args[i];
      } else if(args[i].equals("-glLib")) {
        i++;
        if(args.length>i)
          glLib=args[i];
      } else if(args[i].equals("-gluLib")) {
        i++;
        if(args.length>i)
          gluLib=args[i];
      } else {
        System.out.println("illegal arg "+i+": "+args[i]);
      }
      i++;
    }

    if(perftest) {
      GLContext.gljNativeDebug = false;
      GLContext.gljThreadDebug = false;
      GLContext.gljClassDebug = false;
    }

    if(perftest)
      GLContext.gljClassDebug=true;
    GLContext.doLoadNativeLibraries(gljLib, glLib, gluLib);
    if(perftest)
      GLContext.gljClassDebug=false;

    GraphicsEnvironment env = 
      GraphicsEnvironment.getLocalGraphicsEnvironment();
    final GraphicsDevice device = env.getDefaultScreenDevice();
    Frame mainFrame = null;
    final DisplayMode origMode = device.getDisplayMode();
    DisplayMode newMode = null;
    int initWidth = 400;
    int initHeight = 300;

    System.out.println("isFullScreenSupported: " +
                       device.isFullScreenSupported());

    if (device.isFullScreenSupported()) {
      newMode = ScreenResSelector.showSelectionDialog();
      if (newMode != null) {
        initWidth = newMode.getWidth();
        initHeight = newMode.getHeight();
      }
    }

    try {
      mainFrame = new Frame();
      gearsFullScreen applet = new gearsFullScreen();
      mainFrame.add(applet);

      if (device.isFullScreenSupported()) {
        mainFrame.setUndecorated(true);
      }

      applet.init();
      if(perftest) {
          applet.canvas.setUseFpsSleep(false);
          applet.canvas.setUseRepaint(false);
          applet.canvas.setUseYield(false);
        
          System.out.println("useFpsSleep: "+
                             applet.canvas.getUseFpsSleep());
          System.out.println("useRepaint: "+
                             applet.canvas.getUseRepaint());
        
          System.out.println("useFpsSleep: "+
                             applet.canvas.getUseFpsSleep());
        }

      mainFrame.setResizable(true);
      mainFrame.setSize(initWidth, initHeight);
      mainFrame.show();
      mainFrame.setLocation(0, 0);

      if (device.isFullScreenSupported()) {
        device.setFullScreenWindow(mainFrame);
        if (device.isDisplayChangeSupported()) {
          if (newMode != null) {
            device.setDisplayMode(newMode);
          }
          final DisplayMode tmpMode = newMode;
          Runtime.getRuntime().addShutdownHook(new Thread() {
              public void run() {
                if (tmpMode != null) {
                  try {
                    device.setDisplayMode(origMode);
                  } catch (Exception e) {
                  }
                }
                device.setFullScreenWindow(null);
              }
            });
        } else {
          // Not much point in having a full-screen window in this case
          device.setFullScreenWindow(null);
          mainFrame.setSize(origMode.getWidth(), origMode.getHeight());
        }
      }
        
      applet.start();
    } catch (Exception e) {
      e.printStackTrace();
    } finally {
      device.setFullScreenWindow(null);
    }
  }

  // Methods required for the implementation of MouseListener
  public void mouseEntered( MouseEvent evt ) {
    //System.out.println("mouse entered: ");
    super.mouseEntered(evt);
  }
    
  public void mouseExited( MouseEvent evt ) {
    //System.out.println("mouse exit: ");
    super.mouseExited(evt);
  }
    
  public void mousePressed( MouseEvent evt ) {
    //System.out.println("mouse pressed: ");
    super.mousePressed(evt);
  }
    
  public void mouseReleased( MouseEvent evt ) {
    //System.out.println("mouse released: ");
    super.mouseReleased(evt);
  }
    
  public void mouseClicked( MouseEvent evt ) {
    //System.out.println("mouse clicked: ");
    super.mouseClicked(evt);

    if ((evt.getModifiers() & evt.BUTTON2_MASK) != 0) {
        System.out.println("stopping applet now .. (after 1s, restart)");
        stop();
        try {
          Thread.sleep(1000);
        } catch (Exception e) {
          System.out.println("oops, somebody woke us up .."); }
        System.out.println("restarting applet now .. ");
        canvas.setVisible(true);
        start();
      }
  }
}
