/*
#include <stdio.h>

int Max(int x, int y, int z);
int Min(int x, int y, int z);

int main_9again(void)
{
	int num1, num2, num3;
	printf("세 정수를 입력하세요 :  ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("최댓값 :  %d\n", Max(num1, num2, num3));
	printf("최솟값 :  %d\n", Min(num1, num2, num3));

	return 0;
}

int Max_9again(int x, int y, int z)
{
	if (x > y)
		return (x > z) ? x : z; //거짓 : x가 y보다 크고 z 가 x보다 큰 경우 
								//x가 z보다 크면 x 반환, 그렇지 않으면 z반환, x와 z가 같은 경우에도 z반환, 값이 같아서 의미 동일
	else /*if (y > z)//y가 x보다 크거나 같은 상황
		return y;
	else//y가 x 보다 크고 z 가 y보다 큰 상황
		return z;*/
/*		return (y > z) ? y : z;
}


int Min_9again(int x, int y, int z)
{
	if (x < y)
		return (x < z) ? x : z; //거짓 : x가 y보다 작고 z 가 x 보다 작음
	else /*if (y < z)//y가 x보다 작음
		return y;
	else
		return z;*/
/*		return (y < z) ? y : z;
}
*/