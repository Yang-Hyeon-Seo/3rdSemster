
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
		System.out.println("이제 만나러갈 시간입니다");
		System.out.println("현서, 주비, 비니, 고파는 지금 게임을 하고 있어요");
		System.exit(0);
	}
}
