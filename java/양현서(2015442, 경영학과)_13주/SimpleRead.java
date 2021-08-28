import java.io.IOException;

public class SimpleRead {

	public static void main(String args[])
	{
		int b=0, count=0;
		try
		{
			b= System.in.read();
			while(b != 'z')
			{
				System.out.print((char)b);
				count++;
				b = System.in.read();
			}
		} catch(IOException e)
		{
			System.out.println();
			System.out.println("total byte : " + count);
			System.out.println(e);
		}
		System.out.println();
		System.out.println("total byte" + count);
	}
}
