
public class FilelistTool
{
    public static final FilelistOS GetMyInstance(MachineCtrl mctrl)
    {
        if(mctrl==null)
		return null;
	if(mctrl.isWin32)
	{
	   if(mctrl.osArch.indexOf("x86")>=0)
	   {
		return new FilelistWin32I386();
	   }
	   return null;
	}
	if(mctrl.isUnix)
	{
		if(mctrl.unixFlavor==mctrl.unixFlavor_Linux)
		{
		   if(mctrl.osArch.indexOf("x86")>=0 || 
		      mctrl.osArch.indexOf("i86")>=0 ||
		      mctrl.osArch.indexOf("i686")>=0 || 
		      mctrl.osArch.indexOf("i586")>=0 || 
		      mctrl.osArch.indexOf("i486")>=0 || 
		      mctrl.osArch.indexOf("i386")>=0
		     )
		   {
			System.out.println("GLVendor: "+mctrl.glVendor);
			if(mctrl.glVendor!=null)
			{
			   if(mctrl.glVendor.indexOf("generic")>=0)
				return new FilelistLinuxI386GlibcXF86();
			}
			return new FilelistLinuxI386GlibcXF86();
		    } else if(mctrl.osArch.indexOf("ppc")>=0)
		    {
			System.out.println("GLVendor: "+mctrl.glVendor);
			if(mctrl.glVendor!=null)
			{
			   if(mctrl.glVendor.indexOf("generic")>=0)
				return new FilelistLinuxPPCGlibcXF86();
			}
			return new FilelistLinuxPPCGlibcXF86();
		    }
		} else if(mctrl.unixFlavor==mctrl.unixFlavor_Solaris)
		{
		    if(mctrl.osArch.indexOf("sparc")>=0)
			return new FilelistSUNSolaris26Sparc();
		} else if(mctrl.unixFlavor==mctrl.unixFlavor_Irix)
		{
		    if(mctrl.osArch.indexOf("mips")>=0)
			return new FilelistSGIIrix62Mips();
		} else if(mctrl.unixFlavor==mctrl.unixFlavor_HPUX)
		{
		    if(mctrl.osArch.indexOf("pa_risc")>=0)
			return new FilelistHPUXPaRisc();
		}
	}
	if(mctrl.isMacOs)
	{
	    if(mctrl.osArch.indexOf("powerpc")>=0)
		return new FilelistMacOSPPC();
	}
	return null;
    }
}
