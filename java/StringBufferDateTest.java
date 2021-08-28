import java.util.Date;

public class StringBufferDateTest 
{
	public static void main(String[] args)
	{
		StringBuffer buf = new StringBuffer();
		
		buf.append("Hello!! ");
		buf.append("Yang Hyeon Seo  --   ");
		
		System.out.println(buf.toString());
		
		Date date = new Date();
		buf.append(date);
		System.out.println(buf.toString());
	}
}
