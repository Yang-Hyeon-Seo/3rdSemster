#include <stdio.h>

int main_7(void)
{
	//while
	
	//int num = 0;

	/*
	while (num < 5)
	{
		printf("Hello World %d\n", num);
		//num++;
	}
	*/

	/*
	while (num < 5)
	{
		printf("Hello World %d\n", num++);
	}
	*/

	/*
	while (num < 5)
		printf("Hello World %d \n", num), num++;
	*/

	//콤마 연산자 예제
	/*
	int num1 = 1, num2 = 2;
	printf("Hello "), printf("World\n");
	num1++, num2++;
	printf("%d ", num1), printf("%d ", num2), printf("\n");
	*/

	//구구단
	/*int dan = 0, num = 1;
	printf("몇단?  ");
	scanf_s("%d", &dan);
	*/

	/*
	while (num < 10)
	{
		printf("%d X %d = %d\n", dan, num, dan * num);
		num++;
	}
	*/

	/*
	while (1)
	{
		printf("%d X %d = %d\n", dan, num, dan * num);
		num++;
	}
	*/

	//7-1
	//1
	/*
	unsigned int num, again = 0;

	printf("양의 정수를 입력하세요 : ");
	scanf_s("%u", &num);

	while (again < num)
	{
		printf("Hello World %d\n", again);
		again++;
	}
	*/

	//2
	/*
	unsigned int num, again = 0;
	printf("양의 정수를 입력하세요 :  ");
	scanf_s("%u", &num);
	
	while (again < num)
	{
		printf("3의 %d번째 배수 : %u\n", again+1, 3 * (again+1));
		again++;
	}
	*/

	//3
	/*
	int num = 1, result = 0;

	while (num)
	{
		printf("정수를 입력하세요 :  ");
		scanf_s("%d", &num);
		result += num;
		printf("%d\n", result);
	}
	printf("합 :  %d", result);
	*/

	//4
	/*
	int dan, num = 9;

	printf("몇 단?  ");
	scanf_s("%d", &dan);

	while (num > 0)
	{
		printf("%d X %d = %d\n", dan, num, dan * num);
		num--;
	}
	*/

	//5
	/*
	int num, loop = 0, input, add = 0;//반복할 횟수, 현재 반복 횟수, 입력값, 합
	double average;//평균

	printf("몇 회 반복할까?  ");
	scanf_s("%d", &num);

	while (loop < num)
	{
		printf("정수를 입력하세요(%d번째) :  ", loop + 1);
		scanf_s("%d", &input);
		add += input;
		printf("현재까지의 합 : %d\n", add);

		loop++;
	}

	average = (double)add / num;
	printf("평균 : %f", average);
	*/

	/* while문 괄호 안에 ++연산을 넣는 경우>>비교연산 이후에 증가
	int total = 0, i = 0;
	int number, input;

	printf("입력할 정수의 수는?  ");
	scanf_s("%d", &number);

	while (i++ < number)
	{
		printf("%d", i);
	}
	*/

	//구구단while 중첩
	/*
	int dan = 2, num;
	
	while (dan < 10)
	{
		printf("%d단\n", dan);
		num = 1;
		while (num < 10)
		{
			printf("%d X %d = %d\n", dan, num, dan * num);
			num++;
		}
		dan++;
	}
	*/

	//7-2
	//1
	/*
	int num = 0, input, result = 0;//받은 정수의 개수, 입력한 값, 합

	while (num < 5)//정수를 5개 받을 때까지
	{
		input = 0;//중첩 while문이 돌아가기 위한 input값 초기화
		while (input < 1) //입력한 값이 1보다 작으면 참>>다시 실행
		{
			printf("1 이상의 정수를 입력하세요 : ");
			scanf_s("%d", &input);
		}
		result += input;
		num++;//정수를 하나 받았으니까 개수 카운트
	}

	printf("결과 : %d", result);
	*/

	//2
	/*
	int star = 0, circle;

	while (star < 5)
	{
		circle = 0;
		while (circle < star)
		{
			printf("0");
			circle++;
		}
		printf("*\n");
		star++;	
	}
	*/

	//do while
	//99단
	/*
	int dan = 1, num;

	do
	{
		dan++;
		printf("%d단 \n", dan);

		num = 1;//구구단을 출력하기 위한 num초기화

		do
		{
			printf("%d X %d = %d\n", dan, num, dan * num);
			num++;
		} while (num < 10);

	} while (dan < 9);
	*/

	//0을 입력할 때까지 정수를 더해간다
	/*
	int num=0, result=0;

	do
	{
		result += num;
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &num);

	} while (num);
	printf("%d", result);
	*/

	//7-3
	//1
	/*
	int num = 1, result = 0;

	while (num) //num이 0(거짓)이 아니면(=참) 반복
	{
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &num);
		result += num;
	}
	
	printf("%d", result);
	*/
	
	/*
	int num = 0, result = 0;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);
	result += num;
	while (num)
	{
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &num);
		result += num;
	}
	printf("%d", result);
	*/

	//2
	/*
	int num = 1, result = 0;

	do
	{
		result += num * 2;
		num++;
	} while (num < 51);

	printf("%d\n", result);
	*/
	
	/*
	int num = 0, result = 0;

	do
	{
		result += num;
		num += 2;
	} while (num <= 100);
	printf("%d\n", result);
	*/

	//3
	/*
	int dan = 2, num;

	do
	{
		printf("%d 단\n", dan);
		num = 1;
		do
		{
			printf("%d X %d = %d\n", dan, num, dan * num);
			num++;
		} while (num < 10);
		dan++;
	} while (dan < 10);
	*/

	//for
	/*
	int num, result=0;//사용자 입력값, 합

	do
	{
		printf("0이상의 정수를 입력하세요 :  ");
		scanf_s("%d", &num);
	} while (num < 0);

	for (int i = 0; i <= num; i++)
	{
		result += i;
	}
	printf("합 : %d\n", result);
	*/
	
	/*
	double num = 0, average, add = 0;
	int loop = 0;

	//0보다 작은 음의 실수가 입력될 때까지 입력을 받아 더해놓는다
	for (; num >= 0;)
	{
		add += num;
		printf("0이상의 실수를 입력하세요(탈출하려면 0보다 작음 음의 실수를 입력하세요) :  ");
		scanf_s("%lf", &num);//마지막값(음의 실수는 더하지 않는다
		loop++;
	}

	average = add / (loop-1);
	printf("%f", average);
	*/

	//7-4
	//1
	/* 조건
	int num, num1, num2, result = 0;
	
	printf("두 정수를 입력하세요(단, 작은 수 먼저 입력) :  ");
	scanf_s("%d %d", &num1, &num2);
	*/

	/*
	for (num = num1; num <= num2; num++)
	{
		result += num;
	}
	*/

	/*
	num = num1;

	while (num <= num2)
	{
		result += num;
		num++;
	}
	*/

	/*
	num = num1;

	do
	{
		result += num;
		num++;
	} while (num <= num2);



	printf("두 수의 합 :  %d\n", result);
	*/

	//2 factorial
	/*
	int num, mul=1, mulnum;//mulnum은 곱할 숫자
	
	printf("숫자를 입력하세요 :  ");
	scanf_s("%d", &num);
	*/

	/*
	for (int i = 1; i <= num; i++)
	{
		mul *= i;
	}
	*/
	
	/*
	mulnum = 1;
	while (mulnum <= num)
	{
		mul *= mulnum;
		mulnum++;
	}
	*/

	/*
	mulnum = 1;
	
	do
	{
		mul *= mulnum;
		mulnum++;
	} while (mulnum <= num);

	printf("%d! = %d\n", num, mul);
	*/

	//for 중첩
	//구구단
	int dan, num;

	for (dan = 2; dan <= 9; dan++)
	{
		printf("%d단\n", dan);

		for (num = 1; num <= 9; num++)
		{
			printf("%d X %d = %d\n", dan, num, dan * num);

		}
	}


	return 0;
}