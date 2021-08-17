//#include <stdio.h>
//
//void P(int);
//
//int main_9_3(void)
//{
//	int num;
//	printf("어디까지 출력할까요?  ");
//	scanf_s("%d", &num);
//	printf("");
//	P(num);
//	return 0;
//}
//
//void P(int x)
//{
//	int now0, now1;
//	for (int i = 0; i < x; i++)
//	{
//		
//		if (i == 0)
//		{
//			now0 = 0;
//			printf("%d\t", now0);
//		}
//		else if (i == 1)
//		{
//			now1 = 1;
//			printf("%d\t", now1);
//		}
//		else if (i % 2 == 0) 
//		{
//			now0 = now0 + now1;
//			printf("%d\t", now0);
//		}
//		else
//		{
//			now1 = now0 + now1;
//			printf("%d\t", now1);
//		}
//	}
//}