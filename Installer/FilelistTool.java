
public class FilelistTool
{
    public static final FilelistOS GetMyInstance(MachineCtrl mctrl)
    {
        if(mctrl==null)
		return null;
	if(mctrl.isWin32)
	{
	   if(mctrl.isOsArchX86)
	   {
		return new FilelistWin32I386();
	   }
	   return null;
	}
	if(mctrl.isUnix)
	{
		if(mctrl.unixFlavor==mctrl.unixFlavor_Linux)
		{
		   if(mctrl.isOsArchX86)
		   {
			return new FilelistLinuxI386GlibcXF86();
		    } else if(mctrl.isOsArchPPC)
		    {
			return new FilelistLinuxPPCGlibcXF86();
		    }
		} else if(mctrl.unixFlavor==mctrl.unixFlavor_Solaris)
		{
		    if(mctrl.isOsArchSPARC)
			return new FilelistSUNSolaris26Sparc();
		} else if(mctrl.unixFlavor==mctrl.unixFlavor_Irix)
		{
		    if(mctrl.isOsArchMIPS)
			return new FilelistSGIIrix62Mips();
		} else if(mctrl.unixFlavor==mctrl.unixFlavor_HPUX)
		{
		    if(mctrl.isOsArchPARISC)
			return new FilelistHPUXPaRisc();
		} else if(mctrl.unixFlavor==mctrl.unixFlavor_MacOsX)
		{
		    if(mctrl.isOsArchPPC)
		    {
			return new FilelistMacOsXPPC();
		    }
		}
	}
	if(mctrl.isMacOs9)
	{
	    if(mctrl.isOsArchPPC)
		return new FilelistMacOSPPC();
	}
	return null;
    }
}
