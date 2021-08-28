
public class threadMain extends Thread{
	public static void main(String args[]) throws InterruptedException
	{
		System.out.println("현서와 주비, 비니, 그리고 고파가 같이 게임하기로 했다.\n그들은 만나기 전에 무슨 일을 했을까?");
		sleep(500);
		Thread_P person1 = new Thread_P("현서", 1);
		Thread_P person2 = new Thread_P("주비", 2);
		Thread_P person3 = new Thread_P("비니", 3);
		Thread_P person4 = new Thread_P("고파", 3);
		Thread_T timer = new Thread_T();
//		sleep(1000);
		person1.start();
//		sleep(1000);
		person2.start();
//		sleep(1000);
		person3.start();
		person4.start();
		timer.start();
//		sleep(800);
//		person1.run();
		
	}
}
