import java.lang.*;
import java.awt.*;
import java.applet.*;
import java.awt.event.*;
import java.io.*;
import java.net.*;
import java.util.*;
import java.util.zip.*;
import java.lang.reflect.*;


public class MachineCtrl 
    implements ActionListener, ItemListener
{

    public String title = null;
    Frame dialog  = null;
    public Button goToJausoftGL4Java = null;
    public Button buttonOk = null;
    public Button buttonCancel = null;
    public Button buttonFileClasses = null;
    public Button buttonFileNatives = null;
    public TextField tf_browser_classes = null;
    public TextField tf_browser_natives = null;
    private Choice glVendorChoice = null;
    public String glVendor = null;
    public boolean installGLUTFontSupport = true;
    private Checkbox checkboxInstallGLUTFontSupport = null;

    // Values for replaceable strings:
    public String browser_classes = null;
    public String browser_natives = null;
    public String os_dir 	  = null;   
    public String os_lib_dir 	  = null;

    // Java VM vendor and operating system stuff:
    public String  jvmVendor = null;
    public String  jvmVersion = null;
	    public boolean isNetscapeJvm = false;
	    public boolean isSunJvm = false;
	    public boolean isMacJvm = false;
	    public boolean isMicrosoftJvm = false;

    public String osName = null;
    public String osVersion = null;
    public String osArch = null;
	    public boolean isWin32 = false;
	    public boolean isWin95 = false;
	    public boolean isMacOs = false;
	    public boolean isMacOs9 = false;
	    public boolean isUnix = false;
	    public int unixFlavor = unixFlavor_Unknown;
	    static public final int
		unixFlavor_Unknown = 0,
		unixFlavor_Linux = 1,
		unixFlavor_Solaris = 2,
		unixFlavor_Aix = 3,
		unixFlavor_Irix = 4,
		unixFlavor_HPUX = 5;

    private String pathsep = null;
    private String filesep = null;

    public String controlKey = null;
    public String refreshButton = null;
    public String refreshInfo = null;
    public String errstr = null;

    Applet applet = null;

    public boolean isError()
    { return errstr!=null; }

    public void clearError()
    { errstr=null; }

    public MachineCtrl(String title)
    {
    	this.title = title;

        // Query Java VM vendor and operating system.
        jvmVendor = java.lang.System.getProperty("java.vendor").toLowerCase();
        jvmVersion = java.lang.System.getProperty("java.version").toLowerCase();

        osName = System.getProperty("os.name").toLowerCase();
        osVersion = System.getProperty("os.version").toLowerCase();
        osArch = System.getProperty("os.arch").toLowerCase();

        isNetscapeJvm = ( (jvmVendor!=null) && (jvmVendor.indexOf("netscape")>=0) );
        isSunJvm = ( (jvmVendor!=null) && (jvmVendor.indexOf("sun")>=0) );
        isMacJvm = ( (jvmVendor!=null) && (jvmVendor.indexOf("apple")>=0) );
        isMicrosoftJvm = ( (jvmVendor!=null) && (jvmVendor.indexOf("microsoft")>=0) );
	if( !isNetscapeJvm && !isMicrosoftJvm )
	{
		isSunJvm=true; // default, also for mac ...
	}

        isWin32 = osName.startsWith("wind");
        isWin95 =
            (   (isWin32)
             && (osName.indexOf("windows 95") >= 0)
             && (osVersion.startsWith("4.0"))   );

        isMacOs = osName.startsWith("mac os");
	isMacOs9 = osVersion.startsWith("9.");

        isUnix  = ( (!isWin32) && (!isMacOs) );

        pathsep = System.getProperty("path.separator");
        filesep = System.getProperty("file.separator");

        if (isUnix)
        {
            if (osName.indexOf("linux") >= 0)
                unixFlavor = unixFlavor_Linux;
            else if (osName.indexOf("solaris") >= 0)
                unixFlavor = unixFlavor_Solaris;
            else if (osName.indexOf("aix") >= 0)
                unixFlavor = unixFlavor_Aix;
            else if (osName.indexOf("irix") >= 0)
                unixFlavor = unixFlavor_Irix;
            else if (osName.indexOf("hp-ux") >= 0)
                unixFlavor = unixFlavor_HPUX;
        }
	System.out.println("Machine Info:");
	System.out.println("\tosName: "+osName);
	System.out.println("\tosVersion: "+osVersion);
	System.out.println("\tosArch: "+osArch);
	System.out.println("");
	System.out.println("jvmVendor: "+jvmVendor);
	System.out.println("jvmVersion: "+jvmVersion);
	System.out.println("");
	System.out.println("pathsep: "+pathsep);
	System.out.println("filesep: "+filesep);
	System.out.println("");
	System.out.println("End of Machine Info !");

            // Fail if unsupported VM.
        if ( (!isNetscapeJvm) && (!isMicrosoftJvm) && (!isSunJvm) )
        {
            errstr = new String
                ("GL4Java cannot be installed because\n" +
                 "your Java Virtual Machine is not recognized\n" +
                 "by the installer.\n" +
                 "\n" +
                 "Operating system: " + osName + "\n" +
                 "Java VM vendor..: " + jvmVendor + "\n" +
                 "Java VM version..: " + jvmVersion + "\n" +
                 "\n" +
                 "NOTE: You must be running Netscape Communicator\n" +
                 "      or Microsoft Internet Explorer to install\n" +
                 "      GL4Java.");
        }

            // Fail if unsupported operating system.
        if ( (isUnix) && (unixFlavor == unixFlavor_Unknown) )
        {
            errstr = new String
                ("GL4Java cannot be installed because\n" +
                 "your operating system is not recognized\n" +
                 "by the installer.\n" +
                 "\n" +
                 "Operating system: " + osName + "\n" +
                 "Java VM vendor..: " + jvmVendor +"\n" +
                 "Java VM version..: " + jvmVersion );
        }

        {
            if (isNetscapeJvm || isSunJvm)
            {
                controlKey = new String("Shift");
                refreshButton = new String("Reload");
            }
            else if (isMicrosoftJvm)
            {
                controlKey = new String("Ctrl");
                refreshButton = new String("Refresh");
            }
            if ( (controlKey != null) && (refreshButton != null) )
            {
                refreshInfo = new String
                    ("\n\n" +
                     "Under some circumstances, a failed\n" +
                     "installation can be corrected by\n" +
                     "holding down the " + controlKey + " key and\n" +
                     "clicking the " + refreshButton + " button on your\n" +
                     "browser's command bar.");
            }
        }
    }

    public boolean enablePrivilege()
    {
        // Attempt to assert the needed permissions.
        if (isNetscapeJvm)
        {
            try
            {
		netscape.security.PrivilegeManager.enablePrivilege
			("UniversalFileAccess");
		netscape.security.PrivilegeManager.enablePrivilege
			("UniversalExecAccess");
		netscape.security.PrivilegeManager.enablePrivilege
			("UniversalConnect");
		netscape.security.PrivilegeManager.enablePrivilege
			("UniversalFdRead");
            }
            catch (Exception e)
            { 
                errstr = new String 
                ("Netscape denied privileges, or a failure occurred.\n"+
                 "Here is the exception that was caught:\n"+e+"\n");
		return false;
            }
        }
        else if (isMicrosoftJvm)
        {
	    try
	    {
		com.ms.security.PolicyEngine.assertPermission                                     (com.ms.security.PermissionID.FILEIO);
		com.ms.security.PolicyEngine.assertPermission
		                  (com.ms.security.PermissionID.PROPERTY);
		com.ms.security.PolicyEngine.assertPermission
		                  (com.ms.security.PermissionID.SYSTEM);
            }
	    catch (Exception e)
            { 
                errstr = new String 
                ("Microsoft VM denied privileges, or a failure occurred.\n"+
                 "Here is the exception that was caught:\n"+e+"\n");
		return false;
            }
	}
	return true;
    }


    public boolean fetchPrivilegedInfos()
    {
        if (isNetscapeJvm)
        {
            try
            {
		netscape.security.PrivilegeManager.enablePrivilege
			("UniversalFileAccess");
		netscape.security.PrivilegeManager.enablePrivilege
			("UniversalExecAccess");
		netscape.security.PrivilegeManager.enablePrivilege
			("UniversalConnect");
		netscape.security.PrivilegeManager.enablePrivilege
			("UniversalFdRead");
            }
            catch (Exception e)
            { 
                errstr = new String 
                ("Netscape denied privileges, or a failure occurred.\n"+
                 "Here is the exception that was caught:\n"+e+"\n");
		return false;
            }
        }
        else if (isMicrosoftJvm)
        {
	    try
	    {
		com.ms.security.PolicyEngine.assertPermission                                     (com.ms.security.PermissionID.FILEIO);
		com.ms.security.PolicyEngine.assertPermission
		                  (com.ms.security.PermissionID.PROPERTY);
		com.ms.security.PolicyEngine.assertPermission
		                  (com.ms.security.PermissionID.SYSTEM);
            }
	    catch (Exception e)
            { 
                errstr = new String 
                ("Microsoft VM denied privileges, or a failure occurred.\n"+
                 "Here is the exception that was caught:\n"+e+"\n");
		return false;
            }
	}
        if (isMicrosoftJvm)
        {
            if (isWin32)
            {
                int buflen = 1024;
                StringBuffer buf = null;
                int len = 0;
    
                Class[] parameterTypes = null;
                Method m = null;
                Object args[] = null;
                File f = null;
    
                try
                {
                    Class kernel32 = Class.forName("com.ms.win32.Kernel32");
                    try
                    {
                        parameterTypes = new Class[2];
                        parameterTypes[0] = Class.forName("java.lang.StringBuffer");
                        parameterTypes[1] = Integer.TYPE;
                        m = kernel32.getMethod("GetWindowsDirectory",parameterTypes);
                        args = new Object[2];
                        buf = new StringBuffer(buflen+1);
                        buf.setLength(buflen);
                        args[0] = buf;
                        args[1] = new Integer(buflen);
                        len = ((Integer)m.invoke(kernel32,args)).intValue();
                        buf.setLength(len);
                        f = new File(new String(buf));
                        os_dir = f.getAbsolutePath().replace('\\','/');
                        browser_classes = os_dir + "/JAVA/trustlib";
                    }
                    catch (Exception e)
                    {
                        browser_classes = null;
			System.out.println(e);
			System.out.println("call to get the win dir failed:\n"+ buf);
                    }
                    try
                    {
                        parameterTypes = new Class[2];
                        parameterTypes[0] = Class.forName("java.lang.StringBuffer");
                        parameterTypes[1] = Integer.TYPE;
                        m = kernel32.getMethod("GetSystemDirectory",parameterTypes);
                        args = new Object[2];
                        buf = new StringBuffer(buflen+1);
                        buf.setLength(buflen);
                        args[0] = buf;
                        args[1] = new Integer(buflen);
                        len = ((Integer)m.invoke(kernel32,args)).intValue();
                        f = new File(new String(buf));
                        os_lib_dir = f.getAbsolutePath().replace('\\','/');
                        browser_natives = os_lib_dir;
                    }
                    catch (Exception e)
                    {
                        browser_natives = null;
			System.out.println(e);
			System.out.println("call to get the sys dir failed:\n"+ buf);
                    }
                }
                catch (Exception e2)
                {
		    System.out.println(e2);
                    browser_classes = null;
                    browser_natives = null;
                }
                if ( (browser_classes == null) || (browser_natives == null) )
                {
                    errstr = new String (
                         "Hmmm...Looks as if you may have an early version of\n" +
                         "IE 4, or perhaps even a version older than IE 4.\n" +
                         "Because the installer is not able to get the\n" +
                         "privileges it needs, the installation will be\n" +
                         "aborted.\n" +
                         "\n" +
                         "If you DID receive a question about security but\n" +
                         "answered \"No\", you must hold down the Ctrl key\n" +
                         "and click on the browser's \"Refresh\" button, then\n" +
                         "answer \"Yes\" to the security question in order to\n" +
                         "grant the required privileges to the installer.\n" +
                         "\n" +
                         "If you did NOT receive a question about security, you\n" +
                         "should upgrade to the latest version of IE, then attempt\n" +
                         "the installation again.  To do this, go to:\n" +
                         "    http://www.microsoft.com/windows/ie/default.htm\n" +
                         "\n" +
                         "Operating system: " + osName + "\n" +
                         "Java VM vendor..: " + jvmVendor + "\n" );
                    return false;
                }
            }   // if (isWin32)
            else if (isMacOs)
            {
// TODO: Add IE init here for browser_classes and browser_natives directories
//       under MacOs.
            }   // if (isMacOs)
            else if (isUnix)
            {
// TODO: Add IE init here for browser_classes and browser_natives directories
//       under Unix flavors.
            }   // if (isUnix)
        }   // if (isMicrosoftJvm)
        else if (isNetscapeJvm || isSunJvm)
        {
            if (isWin32)
            {
                    // Find WINDOWS and WINDOWS\SYSTEM directories for Win9x,
                    // or WINNT and WINNT\SYSTE23 directories for WinNT.
                Process proc = null;
                String path = "";
                try
                {
                    proc = Runtime.getRuntime().exec
                        ("COMMAND.COM /C ECHO %PATH%");
                }
                catch (Exception e)
                { }
                if (proc != null)
                {
                    StringBuffer sb = new StringBuffer(4096);
                    sb.setLength(0);
                    try
                    {
                        InputStream is = proc.getInputStream();
                        int c;
                        int pos = 0;
                        while ((c = is.read()) != -1)
                        {
                            if ( (((char)c) == '\r') || (((char)c) == '\n') )
                                break;
                            sb.setLength(pos+1);
                            sb.setCharAt(pos,(char)c);
                            pos++;
                        }
                    }
                    catch (Exception e)
                    { }
                    if (sb.length() > 0) path = new String(sb);
                }
                if ( (path != null) && (path.length() > 0) )
                {
                    while ( (path != null) && (path.length() > 0) )
                    {
                        int p = path.indexOf(pathsep);
                        String thispath = null;
                        if (p < 0)
                        {
                            thispath = path;
                            path = null;
                        }
                        else
                        {
                            thispath = path.substring(0,p);
                            if ((p+1) < path.length())
                                path = path.substring(p+1,path.length());
                            else
                                path = null;
                        }
                        if ( (thispath != null) && (thispath.length() > 0) )
                        {
                            File f = null;
                            thispath = thispath.replace('\\','/');
                            while (thispath.endsWith("/"))
                            {
                                if (thispath.length() > 1)
                                    thispath = thispath.substring
                                        (0,thispath.length()-1);
                                else
                                    thispath = "";
                            }
                            f = new File(thispath+"/WIN.INI");
                            if (f.exists())
                            {
                                f = new File(thispath+"/SYSTEM.INI");
                                if (f.exists())
                                {
                                    // Looks like a windows directory.
                                    if (   (os_dir == null)
                                        || (os_dir.length() < 1)   )
                                        os_dir = thispath;
                                    // See if system or system32 exists and
                                    // contains GL4JavaGljMSJDirect and
				    // (kernel32.dll or user32.dll).

                                    String thispathA =thispath+"/SYSTEM";
                                    String thispathB =thispath+"/system32";
                                    String thispath2 = null;
				    boolean found = false;
				    String fname = null;
				    int i;

				    // check an existing GL4JavaGljMSJDirect
				    // to overwrite !
                                    for (i = 0; 
				         found == false && i < 2; 
					 i++)
                                    {
                                        thispath2 =
                                            (i == 0 ? thispathA : thispathB);

                                        fname = thispath2 + 
					        "/GL4JavaGljMSJDirect.dll";
                                        f = new File (fname);

                                        if (f.exists())
                                        {
					    found=true;
					    System.out.println(fname + " found !!!");
                                        } else
					    System.out.println(fname + " not found");
                                    }

				    // if GL4JavaGljMSJDirect was never 
				    // installed, find an appropiate path !
                                    for (i = 0; 
				         found == false && i < 2; 
					 i++)
                                    {
                                        thispath2 =
                                            (i == 0 ? thispathA : thispathB);

                                        fname = thispath2 + "/KERNEL32.DLL";

                                        f = new File (fname);

                                        if (f.exists())
                                        {
					    System.out.println(fname + " found !!!");
                                            fname = thispath2 + "/USER32.DLL";
                                            f = new File (fname);

                                            if (f.exists())
                                            {
                                                // Looks like a windows/sytem
                                                // or winnt/system32 directory.
					        System.out.println(fname + " found !!!");
						found=true;
                                            } else
					      System.out.println(fname + " not found");
                                        } else
				          System.out.println(fname + " not found");
                                    }
				    if(found)
				    {
					if (   (os_lib_dir == null)
					    || (os_lib_dir.length()
						< 1)   )
					    os_lib_dir = thispath2;
				    }
                                }
                            }

                            // If there are two path separators, then
                            // it could be a windows system directory.
                            int idx = thispath.indexOf("/");
                            if (idx >= 0)
                            {
                                idx = thispath.indexOf("/",idx+1);
                                if (idx >= 0)
                                {
                                    for (int i = 0; i < 2; i++)
                                    {
                                        f = new File
                                            (thispath + "/KERNEL32.DLL");
                                        if (f.exists())
                                        {
                                            f = new File
                                                (thispath + "/USER32.DLL");
                                            if (f.exists())
                                            {
                                                // Looks like a windows/sytem
                                                // or winnt/system32 directory.
                                                if (   (os_lib_dir == null)
                                                    || (os_lib_dir.length()
                                                        < 1)   )
                                                    os_lib_dir = thispath;
                                                if (   (os_dir == null)
                                                    || (os_dir.length() < 1) )
                                                {
                                                    idx = thispath.lastIndexOf
                                                        ("/");
                                                    if (idx > 0)
                                                        os_dir = thispath.
                                                            substring(0,idx);
                                                }
                                            }
                                        }
                                    }

                                }
                            }
                        }
                    }
                }
            }
            if ( (isWin32) || (isUnix) || (isMacOs) )
            {
                String classpath =
                    System.getProperty("java.class.path").replace('\\','/');
                String javahome = System.getProperty("java.home");
		if(javahome!=null)
		{
                    javahome=javahome.replace('\\','/');
                    if(javahome.toLowerCase().endsWith("/jre"))
                	classpath+=pathsep+javahome+"/lib/ext/gl4java.jar";
		}
                if (classpath != null)
                {
                    while ( (classpath != null) && (classpath.length() > 0) )
                    {
                        int p = classpath.indexOf(pathsep);
                        String thispath = null;
                        if (p < 0)
                        {
                            thispath = classpath;
                            classpath = null;
                        }
                        else
                        {
                            thispath = classpath.substring(0,p);
                            if ((p+1) < classpath.length())
                                classpath = classpath.substring(p+1,classpath.length());
                            else
                                classpath = null;
                        }
                        if (   (thispath != null)
                            && (thispath.length() > 0)
                            && thispath.toLowerCase().endsWith(".jar")
			   )
                        {
                            int lastpos = -1, newpos;
                            while ( (newpos = 
			               thispath.indexOf('/',lastpos+1)) 
				      >= 0
				  )
                                lastpos = newpos;
                            if (lastpos >= 0)
                            {
                                thispath = thispath.substring(0,lastpos);
                                if (thispath.toLowerCase().endsWith("/java/classes") 
                                || thispath.toLowerCase().endsWith("/jre/lib/ext") ) 
                                {
                                    browser_classes = new String(thispath);
                                    if (isUnix)
                                    {
                                        switch (unixFlavor)
                                        {
                                            case unixFlavor_Linux:
                                                browser_natives = new String("/usr/lib");
                                                break;
                                            case unixFlavor_Solaris:
                                                browser_natives = new String("/usr/lib");
                                                break;
                                            case unixFlavor_Aix:
                                                browser_natives = new String("/usr/lib");
                                                break;
                                            case unixFlavor_Irix:
                                                browser_natives = new String("/usr/lib");
                                                break;
                                        }
                                    }
                                    else
                                        browser_natives = thispath.substring(0,thispath.length()-7) + "bin";
                                    break;
                                }
                            }
                        }
                    }
                }
            }   // if ( (isWin32) || (isUnix) || (isMacOs) )
	    /*
            else if (isMacOs)
            {
            }
	    */
        }   // if (isNetscapeJvm)

	return true;
    }

    public void machineOptionWindow(ActionListener action, 
    				    String[] headerText,
				    String oktxt,
				    Applet _applet)
    {
    	int i;
	Panel panFlow = null;

	applet = _applet;

	dialog  = new Frame (title);
	dialog.setLayout(new BorderLayout());

	if(headerText!=null && headerText.length>0)
	{
		Panel panNorth = new Panel();
		panNorth.setLayout(new GridLayout(headerText.length+2,1));

		for(i=0; i<headerText.length; i++)
		{
			panFlow = new Panel();
			panFlow.setLayout(new FlowLayout(FlowLayout.LEFT,0,0));
			panFlow.add(new Label(headerText[i]));
			panNorth.add(panFlow);
		}
		panFlow = new Panel();
		panFlow.setLayout(new FlowLayout(FlowLayout.LEFT,0,0));
		panFlow.add((goToJausoftGL4Java = new Button("goto")));
		goToJausoftGL4Java.addActionListener(this);
		panFlow.add(new Label("http://www.jausoft.com/gl4java/"));
		panNorth.add(panFlow);
		panFlow = new Panel();
		panFlow.setLayout(new FlowLayout(FlowLayout.LEFT,0,0));
		panFlow.add(new Label("------------------------------------------------------------"));
		panNorth.add(panFlow);

		dialog.add("North", panNorth);
	}

	Panel panMain = new Panel();
	panMain.setLayout(new GridLayout(10,1));

	if(osVersion!=null && osArch!=null)
		panMain.add(new Label("OS: "+osName+" "+osVersion+" "+osArch));
	else
		panMain.add(new Label("OS: none"));

	panFlow = new Panel();
	panFlow.setLayout(new FlowLayout(FlowLayout.LEFT,0,0));
	panFlow.add(new Label("os-dir/os-library-dir:"));
	if(os_dir!=null && os_lib_dir!=null)
		panFlow.add(new Label(os_dir.trim()+"/"+os_lib_dir.trim()));
	else
		panFlow.add(new Label("none/none"));
	panMain.add(panFlow);

	Panel panGL4JSpecials = new Panel();
	panGL4JSpecials.setLayout(new GridLayout(1,2));
        installGLUTFontSupport = true;
        checkboxInstallGLUTFontSupport = new Checkbox("with GLUT-Fonts", true);
	checkboxInstallGLUTFontSupport.addItemListener(this);
	panGL4JSpecials.add(checkboxInstallGLUTFontSupport);
	panGL4JSpecials.add(new Label("(takes up to 200kBytes)"));
	panMain.add(panGL4JSpecials);

	Panel panOS = new Panel();
	panOS.setLayout(new GridLayout(2,2));
	Checkbox cb1 = new Checkbox("Win32", isWin32);
	cb1.setEnabled(false);
	panOS.add(cb1);
	cb1 = new Checkbox("Win95", isWin95);
	cb1.setEnabled(false);
	panOS.add(cb1);
	cb1 = new Checkbox("MacOS", isMacOs);
	cb1.setEnabled(false);
	panOS.add(cb1);
	cb1 = new Checkbox("Unix", isUnix);
	cb1.setEnabled(false);
	panOS.add(cb1);
	panMain.add(panOS);

	if(isUnix)
	{
		Panel panOSUnix = new Panel();
		panOSUnix.setLayout(new GridLayout(2,2));
		cb1 = new Checkbox("GNU/Linux", unixFlavor==unixFlavor_Linux);
		cb1.setEnabled(false);
		panOSUnix.add(cb1);
		cb1 = new Checkbox("Solaris", unixFlavor==unixFlavor_Solaris);
		cb1.setEnabled(false);
		panOSUnix.add(cb1);
		cb1 = new Checkbox("Aix", unixFlavor==unixFlavor_Aix);
		cb1.setEnabled(false);
		panOSUnix.add(cb1);
		cb1 = new Checkbox("Irix", unixFlavor==unixFlavor_Irix);
		cb1.setEnabled(false);
		panOSUnix.add(cb1);
		panMain.add(panOSUnix);

		if(unixFlavor==unixFlavor_Linux)
		{
			panFlow = new Panel();
			panFlow.setLayout(new FlowLayout(FlowLayout.LEFT,0,0));
			panFlow.add(new Label("OpenGL Vendor:"));
			glVendorChoice = new Choice();
			glVendorChoice.addItemListener(this);
			glVendor = "generic";
			glVendorChoice.add(glVendor);
			panFlow.add(glVendorChoice);
			panMain.add(panFlow);
		}
	}

	if(jvmVendor!=null)
		panMain.add(new Label("JVM: "+jvmVendor.trim()));
	else
		panMain.add(new Label("JVM: none"));

	Panel panJVM = new Panel();
	panJVM.setLayout(new GridLayout(1,3));
	cb1 = new Checkbox("Sun", isSunJvm);
	cb1.setEnabled(false);
	panJVM.add(cb1);
	cb1 = new Checkbox("Netscape", isNetscapeJvm);
	cb1.setEnabled(false);
	panJVM.add(cb1);
	cb1 = new Checkbox("Microsoft", isMicrosoftJvm);
	cb1.setEnabled(false);
	panJVM.add(cb1);
	panMain.add(panJVM);

	panFlow = new Panel();
	//panFlow.setLayout(new GridLayout(1,3));
	panFlow.setLayout(new FlowLayout(FlowLayout.LEFT));
	panFlow.add(new Label("Java-Classes Path:"));
    	tf_browser_classes = new TextField(browser_classes,60);
    	tf_browser_classes.addActionListener(this);
	panFlow.add(tf_browser_classes);
	buttonFileClasses = new Button("...");
	buttonFileClasses.addActionListener(this);
	panFlow.add(buttonFileClasses);
	panMain.add(panFlow);
	panFlow = new Panel();
	//panFlow.setLayout(new GridLayout(1,3));
	panFlow.setLayout(new FlowLayout(FlowLayout.LEFT));
	panFlow.add(new Label("Native-Lib's-Path:"));
    	tf_browser_natives = new TextField(browser_natives,60);
    	tf_browser_natives.addActionListener(this);
	panFlow.add(tf_browser_natives);
	buttonFileNatives = new Button("...");
	buttonFileNatives.addActionListener(this);
	panFlow.add(buttonFileNatives);
	panMain.add(panFlow);

	dialog.add("Center", panMain);

	Panel panButtons = new Panel();
	buttonOk=new Button(oktxt);
	buttonOk.setActionCommand(oktxt);
	buttonOk.addActionListener(this);
	if(action!=null)
		buttonOk.addActionListener(action);
	buttonCancel=new Button("Cancel");
	buttonCancel.addActionListener(this);
	panButtons.add(buttonOk);
	panButtons.add(buttonCancel);

	dialog.add("South", panButtons);
	dialog.pack();
	dialog.setVisible(true);
    }

    public boolean checkTextFields()
    {
        boolean ok = true;
	String str = null;

	try {
		String fname;
		fname = tf_browser_classes.getText().replace('\\','/');
		fname = fname.trim();
		File f = new File(fname);
		if(f.exists() && f.isDirectory())
		{
			browser_classes = fname;
			System.out.println("Set Classes-Dir to: "+
						browser_classes);
		} else {
			str = new String ("directory <"+
			tf_browser_classes.getText().trim()+
			"> is invalid");
			ok=false;
		}
	} catch (Exception ex) {
			str = new String ("directory <"+
			tf_browser_classes.getText().trim()+
			"> is invalid\n"+ex);
			ok=false;
	}
	try {
		String fname;
		fname = tf_browser_natives.getText().replace('\\','/');
		fname = fname.trim();
		File f = new File(fname);
		if(f.exists() && f.isDirectory())
		{
			browser_natives = fname;
			System.out.println("Set Native-Dir to: "+
						browser_natives);
		} else {
			str = new String ("directory <"+
			tf_browser_natives.getText().trim()+
			"> is invalid");
			ok=false;
		}
	} catch (Exception ex) {
			str = new String ("directory <"+
			tf_browser_natives.getText().trim()+
			"> is invalid\n"+ex);
			ok=false;
	}
	if(!ok && str!=null)
	{
		System.out.println("\007\n"+str+"\n");
	}
	return ok;
    }

    public void actionPerformed(ActionEvent e)
    {
    	Object src = e.getSource();
        if (src.equals(buttonOk) || src.equals(buttonCancel))
	{
        	if (src.equals(buttonOk) && checkTextFields()==false)
			return;
		if(dialog!=null)
		{
			dialog.setVisible(false);
			dialog.dispose();
			dialog = null;
		}
	} else if(src.equals(tf_browser_classes)) 
	{
	    checkTextFields();
	} else if(src.equals(tf_browser_natives)) 
	{
	    checkTextFields();
	} else if(src.equals(buttonFileClasses)) 
	{
	    FileDialog fd = 
	    		new FileDialog(dialog,"GL4Java Classes Dir",FileDialog.SAVE);
	    fd.setDirectory(tf_browser_classes.getText());
	    fd.show();
	    tf_browser_classes.setText(fd.getDirectory());
	    checkTextFields();
	} else if(src.equals(buttonFileNatives)) 
	{
	    FileDialog fd = 
	    		new FileDialog(dialog,"GL4Java Classes Dir",FileDialog.SAVE);
	    fd.setDirectory(tf_browser_natives.getText());
	    fd.show();
	    tf_browser_natives.setText(fd.getDirectory());
	    checkTextFields();
	} else if(src.equals(goToJausoftGL4Java) && applet!=null) 
	{
		try {
			URL home = new URL("http://www.jausoft.com/gl4java/");
			applet.getAppletContext().showDocument(home, "GL4Java Homepage");
		} catch (Exception ex) {
			applet.showStatus("cannot open http://www.jausoft.com/gl4java/");
		}
	}
    }

    public void itemStateChanged(ItemEvent e)
    {
    	if(glVendorChoice!=null &&
	   glVendorChoice.equals(e.getItemSelectable()) &&
	   e.getStateChange()==ItemEvent.SELECTED
	  )
	{
		Object item = e.getItem();

		// System.out.println("selected ITEM:"+item.getClass()+", "+item);

		if(item instanceof String)
		{
			String str = (String)item;
			glVendor = str;
		}
	} else if(checkboxInstallGLUTFontSupport.equals(e.getItemSelectable()))
	{
		installGLUTFontSupport = 
			checkboxInstallGLUTFontSupport.getState();
	}
    	
    }

    public static void main( String args[] )
    {
	    MachineCtrl mctrl = new MachineCtrl("Test Class MachineCtrl");
	    if(mctrl.isError())
	    {
	    	System.out.println(mctrl.errstr);
	        mctrl.clearError();
	    }
	    mctrl.enablePrivilege();
	    if(mctrl.isError())
	    {
	    	System.out.println(mctrl.errstr);
	        mctrl.clearError();
	    }
	    mctrl.fetchPrivilegedInfos();
	    if(mctrl.isError())
	    {
	    	System.out.println(mctrl.errstr);
	        mctrl.clearError();
	    }
	    String[] header = { "Info Text", "2nd Line" };
	    mctrl.machineOptionWindow(null, header, "exit", null);
	    if(mctrl.isError())
	    {
	    	System.out.println(mctrl.errstr);
	        mctrl.clearError();
	    }
    }
}

