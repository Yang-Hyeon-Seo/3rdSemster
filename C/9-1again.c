/*
#include <stdio.h>

int Max(int x, int y, int z);
int Min(int x, int y, int z);

int main_9again(void)
{
	int num1, num2, num3;
	printf("�� ������ �Է��ϼ��� :  ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("�ִ� :  %d\n", Max(num1, num2, num3));
	printf("�ּڰ� :  %d\n", Min(num1, num2, num3));

	return 0;
}

int Max_9again(int x, int y, int z)
{
	if (x > y)
		return (x > z) ? x : z; //���� : x�� y���� ũ�� z �� x���� ū ��� 
								//x�� z���� ũ�� x ��ȯ, �׷��� ������ z��ȯ, x�� z�� ���� ��쿡�� z��ȯ, ���� ���Ƽ� �ǹ� ����
	else /*if (y > z)//y�� x���� ũ�ų� ���� ��Ȳ
		return y;
	else//y�� x ���� ũ�� z �� y���� ū ��Ȳ
		return z;*/
/*		return (y > z) ? y : z;
}


int Min_9again(int x, int y, int z)
{
	if (x < y)
		return (x < z) ? x : z; //���� : x�� y���� �۰� z �� x ���� ����
	else /*if (y < z)//y�� x���� ����
		return y;
	else
		return z;*/
/*		return (y < z) ? y : z;
}
*/