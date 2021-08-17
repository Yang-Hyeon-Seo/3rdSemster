/*
#include <stdio.h>

/*
int ReturnMaxMin(int num1, int num2, int num3)
{
	int max, min;
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			max = num1;
			if (num2 > num3) // num1> num2 > num3
			{
				min = num3;
			}
			else //num1 > num3 > num2
			{
				min = num2;
			}
		}
		else //num3> num1> num2
		{
			max = num3;
			min = num2;
		}
	}
	else if (num2 > num3)//num2>num1, num2>num3
	{
		max = num2;
		if (num1 > num3)//num2>num1>num3
		{
			min = num3;
		}
		else//num2>num3>num1
		{
			min = num1;
		}
	}
	else //num3>num2>num1
	{
		max = num3;
		min = num1;
	}
	return max , min;
}
*/

/*
int Max_9(int num1, int num2, int num3)
{
	if (num1 > num2)
	{
		if (num1 > num3)
			return num1;
		else //num3>num1>num2
			return num3;
	}
	else if (num2 > num3)//num2>num1, num3
		return num2;
	else//num3>num2>num1
		return num3;
}

int Min_9(int num1, int num2, int num3)
{
	if (num1 < num2)
	{
		if (num1 < num3)//num1<num2, num3
			return num1;
		else//num3<num1<num2
			return num3;
	}
	else if (num2 < num3)//num2<num1, num3
		return num2;
	else //num3<num2<num1
		return num3;
}

int main_9_1(void)
{
	int num1, num2, num3;
	int max, min;
	printf("세 정수를 입력하세요 :  ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	//max = ReturnMaxMin(num1, num2, num3), min = ReturnMaxMin(num1, num2, num3);
	printf("%d, %d, %d 중 가장 큰 정수 : %d\n 가장 작은 정수 : %d\n", num1, num2, num3, Max(num1, num2, num3), Min(num1, num2, num3));
	return 0;
}
*/