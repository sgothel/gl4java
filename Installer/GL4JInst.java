/**
 * @(#) GL4JInst.java
 * @(#) author: Ronald B. Cemer, Sven Goethel
 * @(#) copyright: Copyright (c) 1999 Ronald B. Cemer under GNU GPL
 * @(#) version: 2.00
 */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.net.*;
import java.util.*;
import java.util.zip.*;
import java.lang.reflect.*;

public class GL4JInst
    extends Applet
    implements Runnable, WindowListener, ActionListener
{
    boolean isAnApplet = true;
    URL codeBase = null;

    static private final String gl4javaWWW = 
    			"http://www.jausoft.com/Files/Java/1.1.X/GL4Java/Installer";

    static private final String version = "2.05b";

    static private final String cannot_install_title =
        "Cannot install GL4Java";
    static private final String gl4java_not_installed_string =
        "*** GL4Java INSTALLATION HAS FAILED ***";

        // Status display:
    private TextArea statustextarea = null;

        // Popup window:
    private Frame errorframe = null;
    private TextArea errortextarea = null;
    private Button errorokbutton = null;

    Button bFinish = null;

        // Misc:
    private Thread myThread = null;
    private String archive = null;
    private String gl4j_archive = null;
    private String glutfont_archive = null;
    private boolean install_opengl = false;
    private String opengl_archive = null;
    private String png_archive = null;
    private String gl_lib = null;
    private String glu_lib = null;
    private Vector lib_dir_list = null;
    private String targetDirs[] = null;
    private URL gl4javaURL = null;
    private URL sourceURL = null;
    private boolean initfailed = false;
    private String initfailedreason = null;
    private String tryrefresh = new String("");;

    private MachineCtrl mctrl = null;

    private String errstr = null;
    boolean ok=true;

    FilelistOS osFileLists = null;
    FilelistWin95I386OpenGL osFileWin95OpenGL = new FilelistWin95I386OpenGL();
    FilelistGL4JClasses fileGL4JClasses= new FilelistGL4JClasses();
    FilelistGL4JArchiv fileGL4JArchiv= new FilelistGL4JArchiv();
    FilelistGLUTFontClasses fileGLUTFontClasses= new FilelistGLUTFontClasses();
    FilelistGLUTFontArchiv fileGLUTFontArchiv= new FilelistGLUTFontArchiv();
    FilelistPNGClasses filePNGClasses= new FilelistPNGClasses();
    FilelistPNGArchiv filePNGArchiv= new FilelistPNGArchiv();

        /* Initialize the applet */


    public void init()
    {
        // Create the status text area.
        setLayout(new BorderLayout());
        statustextarea = new TextArea();
        statustextarea.setEditable(false);
        statustextarea.setLocation(0,0);
        statustextarea.setSize(getSize().width,getSize().height);
        add("Center", statustextarea);
	if(!isAnApplet)
	{
		bFinish = new Button("Quit");
		bFinish.setActionCommand("quit");
		bFinish.addActionListener(this);
		add("South", bFinish);
		try {
                  String current_dir = System.getProperty("user.dir");
		  if(current_dir!=null)
		  {
		    current_dir=current_dir.replace('\\','/');
		    if(!current_dir.endsWith("/"))
		      current_dir=current_dir+"/";
		    if(!current_dir.startsWith("/"))
		      current_dir="/"+current_dir;
		    codeBase = new URL ("file://"+current_dir);
		    gl4javaURL = new URL (gl4javaWWW);
	          }
	        } catch (Exception e) {
		  System.out.println("could not convert the current directory to a code-base !\n"+e);
		}
	} else {
		codeBase = getCodeBase();
	}

	mctrl = new MachineCtrl("GL4Java Installation");
	ok = mctrl.isError()==false;

	if(!ok) 
	{
		errstr=mctrl.errstr;
		statustextarea.setText
		    (statustextarea.getText() + errstr +"\n");
		return;
	}
    }


    public void start()
    {
        if (!ok)
        {
		statustextarea.setText
		    (statustextarea.getText() + mctrl.errstr +"\n");
            return;
        }
	    mctrl.enablePrivilege();
	    if(mctrl.isError())
	    {
		statustextarea.setText
		    (statustextarea.getText() + mctrl.errstr +"\n");
	        mctrl.clearError();
	    }
	    mctrl.fetchPrivilegedInfos();
	    if(mctrl.isError())
	    {
		statustextarea.setText
		    (statustextarea.getText() + mctrl.errstr +"\n");
	        mctrl.clearError();
	    }
            osFileLists = FilelistTool.GetMyInstance(mctrl);
	    if(osFileLists==null)
	    {
		statustextarea.setText
		    (statustextarea.getText() + 
                     "No Package Found for:\n"+
                     "Java VM vendor is: " + mctrl.jvmVendor + "\n" +
		     "OS: "+
		     mctrl.osName+" "+mctrl.osVersion+" "+mctrl.osArch+"\n");
	    	ok=false;
	    } else {

	      String[] descrText = {
	    	"GL4Java Installer Version "+ getAppletInfo(),
		"GL4Java Classes     Version "+FilelistGL4JClasses.version,
		"GL4Java Native-Libs Version "+osFileLists.getVersion(),
		"------------------------------------------------------------"};

	      mctrl.machineOptionWindow(this, descrText, "Start Installation", 
					(isAnApplet==true)?this:null);

	      if(mctrl.isError())
	      {
		statustextarea.setText
		    (statustextarea.getText() + mctrl.errstr +"\n");
	        mctrl.clearError();
	      }
	    }
    }

    public void startInstallation()
    {
        if (!ok)
        {
		statustextarea.setText
		    (statustextarea.getText() + mctrl.errstr +"\n");
            return;
        }
        osFileLists = FilelistTool.GetMyInstance(mctrl);
	if(osFileLists==null)
	{
		statustextarea.setText
		    (statustextarea.getText() + 
                     "No Package Found for:\n"+
                     "Java VM vendor is: " + mctrl.jvmVendor + "\n" +
		     "OS: "+
		     mctrl.osName+" "+mctrl.osVersion+" "+mctrl.osArch+"\n");
	    	ok=false;
	}
        myThread = new Thread(this);
        myThread.start();
    }


    public void stop()
    {
        // Don't stop until we're done.
        while (myThread != null)
        {
            try
            {
                Thread.currentThread().sleep(100);
            }
            catch (Exception e)
            { }
        }
    }


    public void destroy()
    {
    }


    public String getAppletInfo()
    {
        return version + " (c) 1999 Ronald B. Cemer & Sven Goethel";
    }


    public String[][] getParameterInfo()
    {
        String s[][] =
        {
            { "sourcedir", "URL", "directory containing installable files (overrides default zip files)" },
        };
        return s;
    }


        /* This is the run() method of the
           thread which does the actual work. */


    public void run()
    {
        
	if(ok) 
	{

		Cursor oldCursor = getCursor();
		setCursor(new Cursor(Cursor.WAIT_CURSOR));

        	// Initialize values for replaceable strings.
        	statustextarea.setText
            	(statustextarea.getText() +
	    	"GL4Java Installer Version "+ getAppletInfo()+"\n"+
		"GL4Java Classes     Version "+FilelistGL4JClasses.version+"\n"+
		"GL4Java Native-Libs Version "+osFileLists.getVersion()+"\n\n");

                // Check for existence of GL and GLU libraries.
            String fixstring = "";
            lib_dir_list = new Vector();
            if (mctrl.isWin32)
            {
                gl_lib = "OPENGL32.DLL";
                glu_lib = "GLU32.DLL";
                if (mctrl.os_lib_dir != null)
                    lib_dir_list.addElement(new String(mctrl.os_lib_dir));
                fixstring =
                    "\n" +
                    "\n" +
                    "If you are running the first release of Windows 95, your\n" +
                    "system may not have OpenGL functionality.  You can download\n" +
                    "OpenGL from the following URL:\n" +
                    "    ftp://ftp.microsoft.com/softlib/MSLFILES/OPENGL95.EXE\n" +
                    "Be sure to save the file to an empty directory, then extract\n" +
                    "its contents using WinZip or another zip extractor, then copy\n" +
                    "the OPENGL32.DLL and GLU32.DLL files into your WINDOWS\\SYSTEM\n" +
                    "directory.  Then return to this web page and run the GL4Java\n" +
                    "installation again.\n" +
                    "\n" +
                    "If you are running NT 4.0, you must have Service Pack 3 or\n" +
                    "later installed in order for your system to support OpenGL.\n" +
                    "NT 4.0 service packs can be downloaded from:\n" +
                    "     www.microsoft.com/downloads\n";
            }
            else if (mctrl.isMacOs)
            {
	    	// TODO !!!
                gl_lib = "GL.DLL";
                glu_lib = "GLU.DLL";
                if (mctrl.os_lib_dir != null)
                    lib_dir_list.addElement(new String(mctrl.os_lib_dir));
                fixstring =
                    "\n" +
                    "\n" +
                    "Your system does not appear to have OpenGL functionality.\n" +
                    "You can download OpenGL for the Macintosh from the following URL:\n" +
                    "    http://www.apple.com/opengl/\n" +
                    "Follow their installation instructions to install OpenGL.\n" +
                    "Then return to this web page and run the GL4Java installation\n" +
                    "again.";
            }
            else if (mctrl.isUnix)
            {
                gl_lib = "libGL.so";
                glu_lib = "libGLU.so";
                lib_dir_list.addElement(new String("/lib"));
                lib_dir_list.addElement(new String("/usr/lib"));
                lib_dir_list.addElement(new String("/usr/X11/lib"));
                lib_dir_list.addElement(new String("/usr/X11R6/lib"));
                lib_dir_list.addElement(new String("/usr/local/lib"));
                fixstring =
                    "\n" +
                    "\n" +
                    "Your system does not appear to have OpenGL functionality.\n" +
                    "You can probably find a version of Mesa3D (a free OpenGL\n" +
                    "clone) at the following URL:\n" +
                    "    http://www.mesa3d.org/\n" +
                    "Follow their installation instructions to install Mesa3D.\n" +
                    "Then return to this web page and run the GL4Java installation\n" +
                    "again.";
            }

            if (   (ok)
                && (gl_lib != null)
                && (gl_lib.length() > 0)
                && (lib_dir_list != null)
                && (lib_dir_list.size() > 0)   )
            {
                if (!FileTool.libraryExists(mctrl,gl_lib,lib_dir_list))
                {
                    if (mctrl.isWin95)
                        install_opengl = true;
                    else
                    {
                        ok = false;
			statustextarea.setText
			(statustextarea.getText() +
                            cannot_install_title+"\n"+
                             "GL4Java cannot be installed because\n" +
                             "the OpenGL library:\n" +
                             "    " + gl_lib + "\n" +
                             "cannot be found." + fixstring);
                        return;
                    }
                }
            }

            if (   (ok)
                && (glu_lib != null)
                && (glu_lib.length() > 0)
                && (lib_dir_list != null)
                && (lib_dir_list.size() > 0)   )
            {
                if (!FileTool.libraryExists(mctrl,glu_lib,lib_dir_list))
                {
                    if (mctrl.isWin95)
                        install_opengl = true;
                    else
                    {
                        ok = false;
			statustextarea.setText
			(statustextarea.getText() +
                             "GL4Java cannot be installed because\n" +
                             "the GLU library:\n" +
                             "    " + glu_lib + "\n" +
                             "cannot be found." + fixstring);
                        return;
                    }
                }
            }
	    setCursor(oldCursor);
        }

        if (ok)
        {
                statustextarea.setText
                    (statustextarea.getText() +
                     "done.\n" +
                     "Java VM vendor is: " + mctrl.jvmVendor + "\n" +
		     "OS: "+
		     mctrl.osName+" "+mctrl.osVersion+" "+mctrl.osArch+"\n");
                statustextarea.setText
                    (statustextarea.getText() +
                     "Classes will be installed to: " +
			mctrl.browser_classes + "\n");
                statustextarea.setText
                    (statustextarea.getText() +
                     "Native libraries will be installed to: " + 
		        mctrl.browser_natives +"\n");

                if (mctrl.isWin32)
                {
                    if (mctrl.isWin95)
                    {
                        opengl_archive = osFileWin95OpenGL.getArchiv() ;
                    }
		    if(mctrl.isMicrosoftJvm)
		    {
		    	gl4j_archive = fileGL4JClasses.getArchiv();
			glutfont_archive = fileGLUTFontClasses.getArchiv();
		    	png_archive = filePNGClasses.getArchiv();
		    } else {
		    	gl4j_archive = fileGL4JArchiv.getArchiv();
			glutfont_archive = fileGLUTFontArchiv.getArchiv();
		    	png_archive = filePNGArchiv.getArchiv();
		    }
                } else {
		    gl4j_archive = fileGL4JArchiv.getArchiv();
		    glutfont_archive = fileGLUTFontArchiv.getArchiv();
		    png_archive = filePNGArchiv.getArchiv();
		}
                archive = osFileLists.getArchiv();

        
                // Install OpenGL if needed.

                if (   ok
                    && (install_opengl)
                    && (opengl_archive != null)
                    && (opengl_archive.length() > 0) )
                {
		    if(!isAnApplet && !FileTool.fileExists(mctrl, opengl_archive)) 
		    {
			    statustextarea.setText
			       (statustextarea.getText() +
			       "Getting File(s): OpenGL for Win95\n");

                            ok = FileTool.copyFileFromDir(mctrl,
    					         gl4javaURL,
    				                 opengl_archive,  opengl_archive,
				                 statustextarea);
		    }
		    if(ok)
		    {
			    statustextarea.setText
			       (statustextarea.getText() +
			       "Install OpenGL for Win95\n");
			    try
			    {
				sourceURL = new URL(codeBase,opengl_archive);
			    }
			    catch (Exception e)
			    { 
				ok=false;
				statustextarea.setText
				    (statustextarea.getText() +
				     "File does not exist: "+codeBase+","+opengl_archive+" !\n");
			    }
		    }
		    if(ok)
		    {
			    targetDirs = new String[1];
			    targetDirs[0] = mctrl.os_lib_dir;
			    ok = FileTool.copyFilesFromZip 
					(mctrl, sourceURL, targetDirs, statustextarea);
		    }
                }
        
                // Now install the GL4Java files.

                if (   ok
                    && (gl4j_archive != null)
                    && (gl4j_archive.length() > 0)   )
                {
		    if(!isAnApplet && !FileTool.fileExists(mctrl, gl4j_archive)) 
		    {
			    statustextarea.setText
			       (statustextarea.getText() +
			       "Getting File(s): GL4Java Java Classes\n");

                            ok = FileTool.copyFileFromDir(mctrl,
    					         gl4javaURL,
    				                 gl4j_archive,  gl4j_archive,
				                 statustextarea);
		    }
		    if(ok)
		    {
			    statustextarea.setText
			       (statustextarea.getText() +
			       "Install GL4Java Java Classes\n");
			    try
			    {
				sourceURL = new URL(codeBase,gl4j_archive);
			    }
			    catch (Exception e)
			    { 
				ok=false;
				statustextarea.setText
				    (statustextarea.getText() +
				     "File does not exist: "+codeBase+","+gl4j_archive+" !\n");
			    }
		    }
		    if(ok)
		    {
			    targetDirs = new String[1];
			    targetDirs[0] = mctrl.browser_classes;
			    ok = FileTool.copyFilesFromZip 
					(mctrl, sourceURL, targetDirs,statustextarea);
		    }
		}

                if (   ok
		    && mctrl.installGLUTFontSupport 
                    && (glutfont_archive != null)
                    && (glutfont_archive.length() > 0)   )
                {
		    if(!isAnApplet && !FileTool.fileExists(mctrl, glutfont_archive)) 
		    {
			    statustextarea.setText
			       (statustextarea.getText() +
			       "Getting File(s): GL4Java GLUT-FONT Java Classes\n");

                            ok = FileTool.copyFileFromDir(mctrl,
    					         gl4javaURL,
    				                 glutfont_archive,  glutfont_archive,
				                 statustextarea);
		    }
		    if(ok)
		    {
			    statustextarea.setText
			       (statustextarea.getText() +
			       "Install GL4Java GLUT-FONT Java Classes\n");
			    try
			    {
				sourceURL = new URL(codeBase,glutfont_archive);
			    }
			    catch (Exception e)
			    { 
				ok=false;
				statustextarea.setText
				    (statustextarea.getText() +
				     "File does not exist: "+codeBase+","+glutfont_archive+" !\n");
			    }
		    }
		    if(ok)
		    {
			    targetDirs = new String[1];
			    targetDirs[0] = mctrl.browser_classes;
			    ok = FileTool.copyFilesFromZip 
					(mctrl, sourceURL, targetDirs,statustextarea);
		    }
		}

                if (   ok
                    && (png_archive != null)
                    && (png_archive.length() > 0)   )
                {
		    if(!isAnApplet && !FileTool.fileExists(mctrl, png_archive)) 
		    {
			    statustextarea.setText
			       (statustextarea.getText() +
			       "Getting File(s): PNG Java Classes\n");

                            ok = FileTool.copyFileFromDir(mctrl,
    					         gl4javaURL,
    				                 png_archive,  png_archive,
				                 statustextarea);
		    }
		    if(ok)
		    {
			    statustextarea.setText
			       (statustextarea.getText() +
			       "Install PNG Java Classes\n");
			    try
			    {
				sourceURL = new URL(codeBase,png_archive);
			    }
			    catch (Exception e)
			    { 
				ok=false;
				statustextarea.setText
				    (statustextarea.getText() +
				     "File does not exist: "+codeBase+","+png_archive+" !\n");
			    }
		    }
		    if(ok)
		    {
			    targetDirs = new String[1];
			    targetDirs[0] = mctrl.browser_classes;
			    ok = FileTool.copyFilesFromZip 
					(mctrl, sourceURL, targetDirs,statustextarea);
		    }
		}

                if (   ok
                    && (archive != null)
                    && (archive.length() > 0)   )
                {
		    if(!isAnApplet && !FileTool.fileExists(mctrl, archive)) 
		    {
			    statustextarea.setText
			       (statustextarea.getText() +
			       "Getting File(s): GL4Java Native Libs\n");

                            ok = FileTool.copyFileFromDir(mctrl,
    					         gl4javaURL,
    				                 archive,  archive,
				                 statustextarea);
		    }
		    if(ok)
		    {
			    statustextarea.setText
			       (statustextarea.getText() +
			       "Install GL4Java Native Libs\n");
			    try
			    {
				sourceURL = new URL(codeBase,archive);
			    }
			    catch (Exception e)
			    { 
				ok=false;
				statustextarea.setText
				    (statustextarea.getText() +
				     "File does not exist: "+codeBase+","+archive+" !\n");
			    }
		    }
		    if(ok)
		    {
			    targetDirs = new String[1];
			    targetDirs[0] = mctrl.browser_natives;
			    ok = FileTool.copyFilesFromZip 
					(mctrl, sourceURL, targetDirs,statustextarea);
		    }
		}
	} else {
            statustextarea.setText
            	(statustextarea.getText() +
                 "GL4Java cannot be installed because\n" +
                 "your combination of browser, Java Virtual\n" +
                 "Machine and operating system may not currently.\n" +
                 "supported.\n" +
                 "\n" +
                 "Operating system: " + mctrl.osName + "\n" +
                 "Java VM vendor..: " + mctrl.jvmVendor + "\n" +
                 gl4java_not_installed_string);
        }

        statustextarea.setText
            (statustextarea.getText() +
             (ok==false ? "*** INSTALLATION FAILED ***\n" : "done.\n"));

        if (ok)
        {
            statustextarea.setText
            	(statustextarea.getText() +
                 "The GL4Java libraries have been\n" +
                 "successfully installed on your\n" +
                 "system.\n" +
                 "\n" +
		 "Please restart your browser!\n"+
                 "\n" +
                 "You should now be able to run 3D web\n" +
                 "applets which use GL4Java.");
	    if(isAnApplet)
	    	showStatus("Installation complete! Please restart your browser!");
        } else if(isAnApplet)
	  showStatus("Installation failed!");

        myThread = null;
    }

    public void windowActivated(WindowEvent e)
    {
    }

    public void windowClosed(WindowEvent e)
    {
    }

    public void windowClosing(WindowEvent e)
    {
    }

    public void windowDeactivated(WindowEvent e)
    {
    }

    public void windowDeiconified(WindowEvent e)
    {
    }

    public void windowIconified(WindowEvent e)
    {
    }

    public void windowOpened(WindowEvent e)
    {
    }

        /* ActionListener methods used to kill errorframe and its contents: */

    public void actionPerformed(ActionEvent e)
    {
        if (e.getActionCommand().equals("quit"))
	{
		stop();
		if(myThread == null && !isAnApplet)
		   if(mctrl!=null && mctrl.dialog==null)
			System.exit(0);

	}
        if (e.getActionCommand().equals("Start Installation"))
	{
		if(mctrl.checkTextFields()==false)
			return;
		if(mctrl.dialog!=null)
		{
			mctrl.dialog.setVisible(false);
			mctrl.dialog.dispose();
			mctrl.dialog=null;
		}
		startInstallation();
	}
    }

    public static void main( String args[] ) 
    {
		Frame mainFrame = new Frame("GL4Java Installation");

		GL4JInst applet = new GL4JInst();

		applet.isAnApplet=false;
		applet.setSize(400, 600);
		applet.init();
		applet.start();

		mainFrame.add(applet);

		mainFrame.pack();
		mainFrame.setVisible(true);
    }
}
