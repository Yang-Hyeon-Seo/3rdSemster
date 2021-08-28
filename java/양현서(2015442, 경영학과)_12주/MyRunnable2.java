
public class MyRunnable2 implements Runnable
{
	int sum;
	
	public void run()
	{
		sum = 0;
		for(int i = 10; i>=0; i--)
		{
			sum = sum + i;
			System.out.println("Hyeon" + i + " ");
			try
			{
				Thread.sleep(1000);
			} catch(Exception e)
			{}
		}
		System.out.println("Hyeon: Sum " + sum + " ");
	}
}
