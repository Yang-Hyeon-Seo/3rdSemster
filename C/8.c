#include <stdio.h>

int main_8(void)
{
	/*
	int opt;
	double num1, num2;
	double result;

	printf("1. 덧셈   2. 뺄셈   3. 곱셈   4. 나눗셈\n선택하세요 :   ");
	scanf_s("%d", &opt);
	printf("두 수를 입력하세요 :   ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
	{
		printf("덧셈을 선택하셨습니다.\n");
		result = num1 + num2;
		printf("%f + %f = %f\n", num1, num2, result);

	}

	else if (opt == 2)
	{
		printf("뺄셈을 선택하셨습니다.\n");
		result = num1 - num2;
		printf("%f - %f = %f\n", num1, num2, result);

	}

	else if (opt == 3)
	{
		printf("곱셈을 선택하셨습니다.\n");
		result = num1 * num2;
		printf("%f X %f = %f\n", num1, num2, result);

	}

	//if (opt == 4)
	else
	{
		printf("나눗셈을 선택하셨습니다.\n");
		result = num1 / num2;
		printf("%f / %f = %f", num1, num2, result);

	}

	printf("결과 :   %f\n", result);
	*/

	/*
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 || num % 4 == 0)
		{
			printf("%d는 3 또는 4의 배수입니다.\n", num);
		}
	}
	*/

	//절댓값
	/*
	int num, abs;

	printf("정수 입력 :  ");
	scanf_s("%d", &num);

	abs = (num >= 0) ? num : num * (-1);

	printf("결과 :  %d", abs);
	*/

	//8-1
	//1
	/*
	for (int i = 1; i < 100; i++)
	{
		//if (i % 7 == 0 || i % 9 == 0)
			//printf("%d\t", i);
		//(i % 7 == 0 || i % 9 == 0) ? printf("%d\t", i) : 0;//data2부분에 아무것도 넣지 않으면 오류가 생기는 이유는? 0을 넣으면 어떻게 되는 것인지?
	}
	*/
	

	//2
	
	/*
	int num1, num2;
	int max, min;

	printf("두 정수를 입력하세요 :  ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		max = num1;
		min = num2;
	}
	else
	{
		max = num2;
		min = num1;
	}


	(num1 > num2) ? max = num1, min = num2 : max = num2, min = num1;

	printf("%d - %d = %d\n", max, min, max - min);
	*/

	//4(문제2를 조건연산자로)
	/*
	int num1, num2, result;

	printf("두 정수를 입력하세요 :  ");
	scanf_s("%d %d", &num1, &num2);

	//(num1 > num2) ? result = num1 - num2 : result = num2 - num1;
	//위 식이 안되는 이유 : 조건연산자의 우선순위가 = 연산자보다 높아서 연산 순서가 꼬였기 때문
	result = (num1 > num2) ? num1 - num2 : num2 - num1;


	printf("두 수의 차 :  %d\n", result);
	*/

	//3
	/*
	double kor, math, eng;
	double average;
	char score;

	printf("국어 점수 :  ");
	scanf_s("%lf", &kor);
	printf("수학 점수 :  ");
	scanf_s("%lf", &math);
	printf("영어 점수 :  ");
	scanf_s("%lf", &eng);

	printf("\n");

	average = (kor + math + eng) / 3;

	if (average >= 90)
	{
		score = 'A';
	}
	else if (average >= 80)
	{
		score = 'B';
	}
	else if (average >= 70)
	{
		score = 'C';
	}
	else if (average >= 50)
	{
		score = 'D';
	}
	else
	{
		score = 'F';
	}

	printf("평균 : %f\n", average);
	printf("학점 : %c", score);
	*/

	//WhenOver5000
	/*
	int sum = 0, num = 0;

	while (1)
	{
		sum += num;
		
		if (sum > 5000)
		{
			break;
		}

		num++;
	}

	printf("sum : %d", sum);
	printf("num : %d", num);
	*/

	//ExceptMul2Mul3
	/*
	int num;

	printf("start!\n\n");

	for (num = 1; num < 20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
		{
			continue;
		}

		printf("%d  ", num);
	}

	printf("end!\n");
	*/

	//8-2
	//1
	/*
	for (int dan = 2; dan <= 9; dan++)
	{
		if (dan % 2 == 0)
		{
			printf("%d단\n", dan);

			for (int num = 1; num <= 9; num++)
			{
				printf("%d X %d = %d\n", dan, num, dan * num);
			}
		}
	}
	*/
	
	//continue사용
	/*
	for (int dan = 2; dan < 10; dan++)
	{
		if (dan % 2 != 0) 
		{
			continue;
		}

		printf("%d단\n", dan);
		
		for (int num = 1; num < 10; num++)
		{
			printf("%d X %d = %d\n", dan, num, dan * num);
		}
	}
	*/

	//2
	/*
	int num1, num2, result_;

	//printf("(A, Z)\n");

	for (num1 = 0; num1 <= 9; num1++)
	{
		num2 = 9 - num1;

		//printf("(%d, %d)\n", num1, num2);
		result_ = (num1 * 10 + num2) + (num2 * 10 + num1);

		if (result_ == 99)
		{
			printf("%d%d + %d%d = %d\n", num1, num2, num2, num1, result_);
		}
	}
	
	printf("\n");

	//답안
	int A, Z;
	int result;
	
	for (A = 0; A < 10; A++)
	{
		for (Z = 0; Z < 10; Z++)
		{
			if (A == Z)
			{
				continue;
			}
			
			result = (A * 10 + Z) + (Z * 10 + A);
			
			if (result == 99)
			{
				printf("%d%d + %d%d = %d \n", A, Z, Z, A, result);
			}
		}
	}
	*/

	/*
	int A, Z;
	int result;
	
	for (A = 0; A < 10; A++)
	{
		Z = 9 - A;
	
		result = (A * 10 + Z) + (Z * 10 + A);

		if (result != 99)
		{
			continue;
		}

		printf("%d%d + %d%d = %d\n", A, Z, Z, A, result);
	
	}
	*/

	//8-3
	/*
	for (int i = 0; i < 40; i++)
	{
		switch (i)
		{
			case 0 : case 1 : case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
				printf("0이상 10미만\n");
				break;

			case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19:
				printf("10이상 20미만\n");
				break;
			
			case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29:
				printf("20이상 30미만\n");
				break;

			default :
				printf("30이상\n");

		
		}
	}
	*/

	//GoToBasic
	int num;
	printf("자연수 입력 :  ");
	scanf_s("%d", &num);

	if (num == 1)
	{
		goto ONE;
	}
	else if (num == 2)
	{
		goto TWO;
	}
	else
	{
		goto OTHER;
	}

	ONE:
		printf("1을 입력하셨습니다 \n");
		goto END;
	TWO:
		printf("2를 입력하셨습니다 \n");
		goto END;

	OTHER:
		printf("3혹은 다른 값을 입력하셨군요 \n");

	END:
		printf("끝\n");
		return 0;



	//return 0;
}