
public class RunnableTest {
	RunnableTest()
	{
		Thread t1 = new Thread(new MyRunnable1(), "Yang");
		Thread t2 = new Thread(new MyRunnable2(), "Hyeon");
		Thread t3 = new Thread(new MyRunnable3(), "Seo");
		
		t1.start();
		t2.start();
		t3.start();
				
	}
}
