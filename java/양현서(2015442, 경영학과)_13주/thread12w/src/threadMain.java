
public class threadMain extends Thread{
	public static void main(String args[]) throws InterruptedException
	{
		System.out.println("������ �ֺ�, ���, �׸��� ���İ� ���� �����ϱ�� �ߴ�.\n�׵��� ������ ���� ���� ���� ������?");
		sleep(500);
		Thread_P person1 = new Thread_P("����", 1);
		Thread_P person2 = new Thread_P("�ֺ�", 2);
		Thread_P person3 = new Thread_P("���", 3);
		Thread_P person4 = new Thread_P("����", 3);
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
