public class MyMultiDarray 
{
	public static void main(String args[])
	{
		char stars[] [];
		
		char sign[] = new char[3];//3ĭ¥�� ĳ���� �迭�� �����
		
		sign[0] = 'Y';
		sign[1] = 'H';
		sign[2] = 'S';
		
		stars = new char[6][];//6ĭ�� nĭ¥���� ĳ���� �迭�� ����� ��ĭ������ ����
		for (int i = 0; i <stars.length; i++)//stars�� �迭 ����
		{
			stars[i] = new char [i + 5];
			for (int j = 0; j < stars[i].length; j++)//stars�� i��°�� �迭�� ����
			{
				if (j>=5-i && j<=5+i)
				{
					stars[i][j] = '*';
					System.out.print((char)stars[i][j]);
				} else
				{
					stars[i][j] = ' ';
					System.out.print(stars[i][j]);
				}
				
			}
			System.out.println();
		}
		System.out.print((char)sign[0]);
		System.out.print((char)sign[1]);
		System.out.print((char)sign[2]);
	}
}
