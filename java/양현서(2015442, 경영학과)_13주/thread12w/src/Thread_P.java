//������ ģ���� ���� ��ٰ� ������ �Ǵ� ��
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
		randomDoing = new String[] {"TV����", "��å�ϱ�", "�����ñ�", "�丮�ϱ�", "å�б�"};
		
		//random.nextInt(5);
		
	}
	
	public void run()
	{
		for(int i=0; i<10; i++)
		{
//			System.out.println((10-i) + "�ð� ��");
			index = random.nextInt(5);
			if(index == 0)
				System.out.println(name + "�� ���� �ϴ� �� : " + randomDoing[0]);
			else if(index==1)
				System.out.println(name + "�� ���� �ϴ� �� : " + randomDoing[1]);
			else if(index==2)
				System.out.println(name + "�� ���� �ϴ� �� : " + randomDoing[2]);
			else if(index==3)
				System.out.println(name + "�� ���� �ϴ� �� : " + randomDoing[3]);
			else if(index==4)
				System.out.println(name + "�� ���� �ϴ� �� : " + randomDoing[4]);
//			else
//				System.out.print("�̻��� ���� ����");
			try {
				sleep(1500);
			} catch(Exception e)
			{}
		}
		
	}
}
