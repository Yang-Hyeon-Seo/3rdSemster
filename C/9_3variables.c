//#include <stdio.h>
//void Add(int val);
//int num;//�������� �⺻������ 0���� �ʱ�ȭ�ȴ�
//
//int main(void)
//{
//	printf("num : %d \n", num);
//	Add(3);
//	printf("num: %d \n", num);
//	num++;
//	printf("num: %d \n", num);
//	return 0;
//}
//
//void Add(int val)
//{
//	num += val;
//}

//#include <stdio.h>
//
//void SimpleFunc(void)
//{
//	static int num1 = 0;
//	int num2 = 0;
//	num1++, num2++;
//	printf("static: %d \t local: %d\n", num1, num2);
//}
//
//int main(void)
//{
//	int i;
//	for (i = 0; i < 3; i++)
//		SimpleFunc();
//	return 0;
//}

//#include <stdio.h>
//
//int AddToTotal(int num)
//{
//	static int total = 0;
//	total += num;
//	return total;
//}
//
//int main(void)
//{
//	int num, i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("�Է�%d: ", i+1);
//		scanf_s("%d", &num);
//		printf("����: %d \n", AddToTotal(num));
//	}
//	return 0;
//