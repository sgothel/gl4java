
import java.awt.*;
import java.util.*;
import java.awt.event.*;
import java.applet.*;

public class MSJVMVersionApplet extends Applet 
{
	public void init()
	{
		Properties props = 
		  com.ms.util.SystemVersionManager.getVMVersion();
		String build = props.getProperty("BuildIncrement");
		int buildI = 0;
		try {
			buildI = Integer.valueOf(build).intValue();
		} catch (Exception ex) {}
		String descr = props.getProperty("Description");
		setLayout(new BorderLayout());
		String state = null;
		if(buildI>=3186)
			state = "!!!! YOUR MS-JVM VERSION LOOKS FINE !!!!";
		else
			state = "!!!! YOUR MS-JVM VERSION IS TOO OLD, PLEASE UPDATE !!!!";
		TextArea text = new TextArea(
			descr + "." + build + "\n"+
			"Build: " + build + "\n\n" + state);

		add("Center", text);

	        setBackground(Color.white);  
	} 
}
