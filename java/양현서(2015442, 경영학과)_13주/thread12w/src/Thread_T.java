
public class Thread_T extends Thread
{
	Thread_T()
	{
		
	}
	
	public void run()
	{
		try {
			sleep(8000);
		} catch (InterruptedException e) {
		}
		System.out.println("���� �������� �ð��Դϴ�");
		System.out.println("����, �ֺ�, ���, ���Ĵ� ���� ������ �ϰ� �־��");
		System.exit(0);
	}
}
