
import java.io.*;

public class CountedBufferedInputStream extends BufferedInputStream
{
	public int totalLen;
	
	public CountedBufferedInputStream(InputStream in)
	{
		super(in);
		totalLen = 0;
	}

	public int read() throws IOException
	{
		totalLen++;
		return super.read();
	}

	public int read(byte[] buf, int a, int b) throws IOException
	{
		int c = super.read(buf,a,b);	
		if(c!=-1) totalLen = totalLen+c;
		return c;
	}

	public int read(byte[] buf) throws IOException
	{
		int c = super.read(buf);	
		if(c!=-1) totalLen += c;
		return c;
	}

	public int getReadTotalLen()
	{ return totalLen; }
}
