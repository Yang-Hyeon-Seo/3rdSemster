#include <stdio.h>

int main_4(void)
{
	//FloatError
	/*
	int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
	{
		num += 0.1;
	}

	printf("0.1을 100번 더한 결과는 %f입니다", num);
	*/

	//BitRightShift
	/*
	int num = -16;
	printf("2칸 오른쪽 이동의 결과 : %d \n", num >> 2);
	printf("3칸 오른쪽 이동의 결과 : %d \n", num >> 3);
	//내 노트북은 부호 비트를 유지하는 시스템
	*/

	//2-1문제
	/*
	//1
	printf("양현서\n양 현 서\n양  현  서\n");

	//2
	printf("이름 : 양현서 \n");
	printf("주소 : 경기도 성남시\n");
	printf("전화번호 : 01037010650\n");

	//2-2문제
	//1
	printf("제 이름은 양현서입니다.\n제 나이는 %d살이고요.\n제가 사는 곳의 번지수는 %d입니다.\n", 22, 17);

	//2
	printf("%dX%d=%d\n", 4, 5, 4 * 5);
	printf("%dX%d=%d", 7, 9, 7 * 9);
	*/

	//3-1문제
	//1번
	/*
	int num1, num2;

	printf("두 정수를 입력하세요: ");
	scanf_s("%d %d", &num1, &num2);
	
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	*/

	//2번
	/*
	int num1, num2, num3;

	printf("세 개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("%dx%d+%d=%d\n", num1, num2, num3, num1 * num2 + num3);
	*/

	//3번
	/*
	int num;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);

	printf("%d\n", num * num);
	*/

	//4번
	/*
	int num1, num2;

	printf("두 정수를 입력하세요 : ");
	scanf_s("%d %d", &num1, &num2);

	printf("%d 나누기 %d의 몫은 %d이고, 나머지는 %d입니다\n", num1, num2, num1/num2, num1%num2);
	*/

	//5번
	/*
	int num1, num2, num3;

	printf("세 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("(%d-%d)x(%d+%d)x(%d%%%d) = %d", num1, num2, num2, num3, num3, num1, (num1 - num2) * (num2 + num3) * (num3 % num1));
	*/

	//4-4문제
	//1
	/*
	int num, result;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);

	result = ~num + 1;

	printf("%d\n", result);
	*/

	//2
	//3*8/4 = 6
	//int num1 = 3, num2 = 8, num3 = 4;
	/*
	int num1 = 3;
	int result1, result2;

	result1 = num1 << 3;
	result2 = result1 >> 2;
	
	printf("%d  %d\n", 3 * 8 / 4, result2);
	*/


	return 0;

}