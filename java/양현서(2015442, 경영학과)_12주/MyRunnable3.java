
public class MyRunnable3 implements Runnable
{
	int sum;
	
	public void run()
	{
		sum = 0;
		for(int i = 10; i>=0; i--)
		{
			sum = sum + i;
			System.out.println("Seo" + i + " ");
			try
			{
				Thread.sleep(1000);
			} catch(Exception e)
			{}
		}
		System.out.println("Seo: Sum " + sum + " ");
	}
}
