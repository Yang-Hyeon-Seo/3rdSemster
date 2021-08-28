
public class MultiDarray 
{
	public static void main(String args[])
	{
		char stars[] [];
		
		char sign[] = new char[3];//3칸짜리 캐릭터 배열을 만든다
		
		sign[0] = 'Y';
		sign[1] = 'H';
		sign[2] = 'S';
		
		stars = new char[6][];//6칸과 n칸짜리의 캐릭터 배열을 만든다 몇칸인지는 미정
		for (int i = 0; i <stars.length; i++)//stars의 배열 길이
		{
			stars[i] = new char [i + 1];
			for (int j = 0; j < stars[i].length; j++)//stars의 i번째의 배열의 길이
			{
				stars[i][j] = '*';
				System.out.print(stars[i][j]);
			}
			System.out.println();
		}
		System.out.print((char)sign[0]);
		System.out.print((char)sign[1]);
		System.out.print((char)sign[2]);
	}
}
