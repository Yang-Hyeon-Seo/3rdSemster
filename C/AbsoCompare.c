#include <stdio.h>

int AbsoCompare(int, int);
int GetAbsoValue(int num);


int main_AbsoCompare(void)
{
	int num1, num2;
	printf("�� ���� ���� �Է� :  ");
	scanf_s("%d %d", &num1, &num2);

	printf("%d�� %d �� ������ ū ���� :  %d\n", num1, num2, AbsoCompare(num1, num2));

	return 0;
}

int AbsoCompare(int num1, int num2)
{
	//int ab_num1 = GetAbsoValue(num1);
	//int ab_num2 = GetAbsoValue(num2);

	if (GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1;
	else //if (ab_num1 < ab_num2)
		return num2;
}

int GetAbsoValue(int num)
{
	/*
	if (num >= 0)
		return num;
	else
		return -num;
		*/
	//���ǿ�����
	return (num >= 0) ? num : -num;
}