import java.awt.*;
import java.io.*;
import java.net.*;
import java.util.*;
import java.util.zip.*;

public class FileTool
{
    public static final boolean fileExists(MachineCtrl mctrl,
    				  String filename
                                 )
    {
        if (mctrl.isNetscapeJvm)
        {
            try
            {
		netscape.security.PrivilegeManager.enablePrivilege
			("UniversalFileAccess");
		netscape.security.PrivilegeManager.enablePrivilege
			("UniversalConnect");
		netscape.security.PrivilegeManager.enablePrivilege
			("UniversalFdRead");
            }
            catch (Exception e)
            { 
                System.out.println
                ("Netscape denied privileges, or a failure occurred.\n"+
                 "Here is the exception that was caught:\n"+e+"\n");
		return false;
            }
        }
        else if (mctrl.isMicrosoftJvm)
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
                System.out.println
                ("Microsoft VM denied privileges, or a failure occurred.\n"+
                 "Here is the exception that was caught:\n"+e+"\n");
		return false;
            }
	}
	File f = new File(filename);
	return f.exists();
    }

    public static final String libraryExists(MachineCtrl mctrl,
    				  String libname, Vector libdirlist
                                 )
    {
        if (mctrl.isNetscapeJvm)
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
                System.out.println
                ("Netscape denied privileges, or a failure occurred.\n"+
                 "Here is the exception that was caught:\n"+e+"\n");
		return null;
            }
        }
        else if (mctrl.isMicrosoftJvm)
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
                System.out.println
                ("Microsoft VM denied privileges, or a failure occurred.\n"+
                 "Here is the exception that was caught:\n"+e+"\n");
		return null;
            }
	}
        if (mctrl.isUnix)
	{
                File f = new File("/etc/ld.so.conf");
                if (f.exists())
                {
                    try
                    {
                        BufferedReader br =
                            new BufferedReader(new FileReader(f));
                        try
                        {
                            while (true)
                            {
                                String s = br.readLine();
                                if (s == null) break;
                                if (s.length() > 0)
                                    libdirlist.addElement(new String(s));
                            }
                        }
                        catch (Exception e)
                        {
                            br.close();
                        }
                    }
                    catch (Exception e)
                    { }
                }
	}
        if (libdirlist != null)
        {
            for (int i = 0; i < libdirlist.size(); i++)
            {
                String s = (String)libdirlist.elementAt(i);
                if ( (s != null) && (s.length() > 0) )
                {
                    if (new File(s + "/" + libname).exists())
		    {
                        System.out.println
			    ("File found: "+s + "/" + libname+"\n");
                        return s;
		    }
                }
            }
        }
        return null;
    }

    /**
      * Create all directory entries,
      * which the given path contains !
      *
      * The given path can contain a file at the end,
      * only elements finishing with a "/" are interpreted as an
      * directory, therefor only for these, directories are created !
      *
      * E.g. "../binpkg/test.zip"
      * 	The following directories will be created:
      *			..		-> error is catched and ignored
      *			../binpkg/
      *
      *
      * This is the same, like "mkdir -P /hello/dirs/" !
      */
    public static final boolean MkdirWithParents(MachineCtrl mctrl, String path)
    {
    	if(path==null) return true;

        if (mctrl.isNetscapeJvm)
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
                System.out.println
                ("Netscape denied privileges, or a failure occurred.\n"+
                 "Here is the exception that was caught:\n"+e+"\n");
		return false;
            }
        }
        else if (mctrl.isMicrosoftJvm)
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
                System.out.println
                ("Microsoft VM denied privileges, or a failure occurred.\n"+
                 "Here is the exception that was caught:\n"+e+"\n");
		return false;
            }
	}
	int dl = path.length();
	int pos = 0;
        File tmpdir = null;
        String thisPath = null;

	while(0<=pos && pos<dl)
	{
		pos = path.indexOf('/', pos+1);
		if(pos>0)
		{
		    thisPath = path.substring(0,pos);
		    tmpdir = new File (thisPath);
		    try
		    {
			tmpdir.mkdir();
			System.out.println("mkdir "+thisPath);
		    }
		    catch (Exception e0)
		    { }
		    tmpdir = null;
		}
	}
    	
	return true;
    }

    /**
      * Copy all files from the zip
      * or jar archive pointed to by zipURL to their
      * corresponding destination given in targetDirs !
      *
      * The status window is updated with the name of the
      * source file being copied.
      *
      * Each listed source file is simultaneously copied to
      * all of its destination files.  This means that the
      * zip archive is only read once to minimize the amount
      * of data that is transferred over the network.
      */
    public static final boolean copyFilesFromZip 
    					(MachineCtrl mctrl, 
					 URL zipURL, Vector targetDirs,
					 TextArea statustextarea,
					 ProgressBar bar
					)
    {
        int i, j;
	boolean ok = true;
	int nFiles = targetDirs.size();
        String srcFile = null;
        String destFiles[] = new String[nFiles];
        File dstfils[] = new File[nFiles];
        FileOutputStream fos[] = new FileOutputStream[nFiles];

	if(targetDirs==null||nFiles==0) return true;

        if (mctrl.isNetscapeJvm)
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
                System.out.println
                ("Netscape denied privileges, or a failure occurred.\n"+
                 "Here is the exception that was caught:\n"+e+"\n");
		return false;
            }
        }
        else if (mctrl.isMicrosoftJvm)
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
                System.out.println
                ("Microsoft VM denied privileges, or a failure occurred.\n"+
                 "Here is the exception that was caught:\n"+e+"\n");
		return false;
            }
	}
        for (i = 0; i < nFiles; i++)
	{
	  //
	  // adding a trailing path-seperator, if needed !
	  //
	  if(targetDirs.elementAt(i)!=null)
	  {
        	String targetDir = (String) targetDirs.elementAt(i);
        	targetDir = targetDir.trim();
        	if(targetDir.indexOf('/', targetDir.length()-1)<0)
	    		targetDir += "/";
		System.out.println("targetDir: "+targetDir);
        	targetDirs.setElementAt(targetDir, i);
	  }
	}

        ZipInputStream zis = null;
        CountedBufferedInputStream cis = null;
	int totalLength = 0;

        // Open the archive.
        try
        {
	    URLConnection conn = zipURL.openConnection();
	    conn.connect();
	    totalLength = conn.getContentLength();
	    bar.setMin(0);
	    bar.setMax(totalLength);
            cis = new CountedBufferedInputStream(zipURL.openStream());
            zis = new ZipInputStream(cis);
        }
        catch (Exception e0)
        {
		if(statustextarea!=null)
		{
		 statustextarea.setText
		    (statustextarea.getText() +
		     "Cannot open file: " + zipURL + "\n");
		 statustextarea.setCaretPosition(Integer.MAX_VALUE);
		}
                return false;   // Should never happen!
        }

        try
        {
            while (ok)
            {
                ZipEntry entry = zis.getNextEntry();
		if(entry==null)
			break;

                if (!entry.isDirectory())
                {
                    srcFile = entry.getName();

		    for(i=0; ok && i<nFiles; i++)
		    {
	  		    String targetDir = (String) targetDirs.elementAt(i);
			    destFiles[i] = targetDir + srcFile;
			    dstfils[i] = new File(destFiles[i]);

			    if (dstfils[i].exists())
			    {
				try
				{
				    dstfils[i].delete();
				}
				catch (Exception e0)
				{ }
			    } else {
				FileTool.MkdirWithParents(mctrl, destFiles[i]);
			    }
		
			    try
			    {
				fos[i] = new FileOutputStream(dstfils[i]);
			    }
			    catch (Exception e0)
			    {
				fos[i] = null;

				if(statustextarea!=null)
				{
				 statustextarea.setText
				    (statustextarea.getText() +
				     "Cannot create file: " + destFiles[i] + "\n");
				 statustextarea.setCaretPosition(Integer.MAX_VALUE);
				}
				ok= false;
				break; // breaks the beast ...
			    }
		    }

		    if(ok)
			    if(statustextarea!=null)
			    {
			      statustextarea.setText
				(statustextarea.getText() +
				"Installing source file: " + srcFile );
			      statustextarea.setCaretPosition(Integer.MAX_VALUE);
			    }

                    try
                    {
                        byte[] buf = new byte[4096];
                        int bytesread;
                        while (ok &&
			       (bytesread = zis.read(buf,0,buf.length)) >= 0 
			      )
                        {
                            if (bytesread < 1) continue;
                            try
                            {
                                // Write the data to the destination files.
                                for (i = 0; ok && i < nFiles; i++)
                                {
                                    if (fos[i] != null)
                                        fos[i].write(buf,0,bytesread);
                                }
				if(bar!=null)
					bar.setValue(cis.getReadTotalLen());
                            }
                            catch (Exception e0)
                            {
                                // We got a write error.

				if(statustextarea!=null)
				{
                                  statustextarea.setText
                                    (statustextarea.getText() +
                                     "\nCannot write file: " + destFiles[i] +
                                        "\n");
				  statustextarea.setCaretPosition(Integer.MAX_VALUE);
				}

				ok = false;
			        continue; // breaks the beast ...
                            }
                        }
                    }
                    catch (Exception e0)
                    { }     // Should never happen!

		    if(statustextarea!=null)
		    {
			  statustextarea.setText
			    (statustextarea.getText() + "\n");
			  statustextarea.setCaretPosition(Integer.MAX_VALUE);
		    }

	            for (j = 0; j < i; j++)
	            {
			    if (fos[j] != null)
			    {
				try
				{
				    fos[j].close();
				}
				catch(Exception e1)
				{ }
			    }
			    if (!ok && dstfils[j] != null)
			    {
				try
				{
				    dstfils[j].delete();
				}
				catch (Exception e1)
				{ }
				fos[j] = null;
			    }
	            }
                }
            }
        }
        catch (Exception e0)
        { }     // End of archive.

	try
	{
	    zis.close();
	}
	catch(Exception e1)
	{ }

	if(!ok)
	{
		if(statustextarea!=null)
		{
                  statustextarea.setText
                    (statustextarea.getText() +
                     "INSTALLATION INCOMPLETE !!\n"+
		     "Please check this log files for reasons !\n");
		  statustextarea.setCaretPosition(Integer.MAX_VALUE);
		}
		return false;
        }

        return true;
    }

    /**
      * Copy srcFile from the remote directory pointed to by
      * baseURL to the local path pointed to by destFile.
      *
      * If baseURL is null, 
      * an ordinary filecopy is used (Local Harddisk)
      */
    public static final boolean copyFileFromDir(MachineCtrl mctrl,
    					        URL baseURL, 
    				                String srcFile, String destFile,
				                TextArea statustextarea)
    {
        URL srcURL = null;
        InputStream is = null;
        FileOutputStream fos = null;
        File srcfil = null;
        File dstfil = null;
	boolean ok = true;

        if (mctrl.isNetscapeJvm)
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
                System.out.println
                ("Netscape denied privileges, or a failure occurred.\n"+
                 "Here is the exception that was caught:\n"+e+"\n");
		return false;
            }
        }
        else if (mctrl.isMicrosoftJvm)
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
                System.out.println
                ("Microsoft VM denied privileges, or a failure occurred.\n"+
                 "Here is the exception that was caught:\n"+e+"\n");
		return false;
            }
	}
        try
        {
	    if(baseURL!=null)
		    srcURL = new URL(baseURL.toString() + "/" + srcFile);
        }
        catch (Exception e)
        {
		if(statustextarea!=null)
		 statustextarea.setText
		    (statustextarea.getText() +
		     "Cannot get URL: " + baseURL.toString()+"/"+srcFile+"\n");
                return false;
        }

        dstfil = new File(destFile);

        // Open the source file.
        try
        {
	    if(srcURL!=null)
		    is = srcURL.openStream();
	    else {
        	    srcfil = new File(srcFile);
		    is = new FileInputStream(srcfil);
	    }
        }
        catch (Exception e0)
        {
		if(statustextarea!=null)
		 statustextarea.setText
		    (statustextarea.getText() +
		     "Cannot open file: " + srcURL + "\n");
                return false;
        }

	FileTool.MkdirWithParents(mctrl, destFile);

        // If the destination file exists, attempt to
        // delete it.
        if (dstfil.exists())
        {
            try
            {
                dstfil.delete();
            }
            catch (Exception e0)
            { }
        }

            // Create the destination file.
        try
        {
            fos = new FileOutputStream(dstfil);
        }
        catch (Exception e0)
        {
		if(statustextarea!=null)
		 statustextarea.setText
		    (statustextarea.getText() +
		     "Cannot create file: " + destFile + "\n");
	        ok=false;
        }

            // Copy the data from the source to the destination.
        try
        {
            byte[] buf = new byte[4096];
            int bytesread;
            while (ok && (bytesread = is.read(buf,0,buf.length)) >= 0)
            {
                if (bytesread < 1) continue;
                try
                {
                        // Write the data to the destination file.
                    fos.write(buf,0,bytesread);
                }
                catch (Exception e0)
                {
                    // Write error.
			if(statustextarea!=null)
			  statustextarea.setText
			    (statustextarea.getText() +
			     "Cannot write file: " + destFile + "\n");
		        ok = false;
                }
            }
        }
        catch (Exception e0)
        { }     // Should never happen!

	try
	{
		if(is!=null)
			is.close();
	}
	catch(Exception e1)
	{ }

	try
	{
		if(fos!=null)
			fos.close();
	}
	catch(Exception e1)
	{ }
	try
	{
		if(!ok && dstfil!=null)
			dstfil.delete();
	}
	catch(Exception e1)
	{ }

        return ok;
    }


}
