import java.applet.*;
import java.awt.*;
import java.awt.event.*;

public class FullScreenGears {
 public static void main(String[] args) {
  final Applet a = new gears();  /*from ronsdemos*/
  final Window w = new Window(new Frame());
  w.setLayout(new BorderLayout());
  w.add("Center",a);
  a.init();
  a.start();
  Toolkit tk = Toolkit.getDefaultToolkit();
  Dimension screensize = tk.getScreenSize();
  w.setBounds(0,0,screensize.width,screensize.height);
  w.setVisible(true);
 }
}
