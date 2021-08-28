//세명의 친구가 각자 놀다가 만나게 되는 것
import java.util.Random;

public class Thread_P extends Thread 
{
	String[] randomDoing;
	int index;
	Random random;
	String name;
	
	public Thread_P(String str, int i)
	{
		name=str;
		random = new Random();
//		random.setSeed(System.currentTimeMillis());
		random.setSeed(i);
		randomDoing = new String[] {"TV보기", "산책하기", "차마시기", "요리하기", "책읽기"};
		
		//random.nextInt(5);
		
	}
	
	public void run()
	{
		for(int i=0; i<10; i++)
		{
//			System.out.println((10-i) + "시간 전");
			index = random.nextInt(5);
			if(index == 0)
				System.out.println(name + "가 지금 하는 일 : " + randomDoing[0]);
			else if(index==1)
				System.out.println(name + "가 지금 하는 일 : " + randomDoing[1]);
			else if(index==2)
				System.out.println(name + "가 지금 하는 일 : " + randomDoing[2]);
			else if(index==3)
				System.out.println(name + "가 지금 하는 일 : " + randomDoing[3]);
			else if(index==4)
				System.out.println(name + "가 지금 하는 일 : " + randomDoing[4]);
//			else
//				System.out.print("이상한 값이 나옴");
			try {
				sleep(1500);
			} catch(Exception e)
			{}
		}
		
	}
}
