
public class ThreadTest {
	MyThread t1, t2, t3;
	
	ThreadTest()
	{
		t1 = new MyThread("Yang");
		t2 = new MyThread("Hyeon");
		t3 = new MyThread("Seo");
		
		t1.start();
		t2.start();
		t3.start();
	}

}
