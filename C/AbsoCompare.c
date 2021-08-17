#include <stdio.h>

int AbsoCompare(int, int);
int GetAbsoValue(int num);


int main_AbsoCompare(void)
{
	int num1, num2;
	printf("두 개의 정수 입력 :  ");
	scanf_s("%d %d", &num1, &num2);

	printf("%d와 %d 중 절댓값이 큰 정수 :  %d\n", num1, num2, AbsoCompare(num1, num2));

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
	//조건연산자
	return (num >= 0) ? num : -num;
}