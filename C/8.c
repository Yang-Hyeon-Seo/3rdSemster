#include <stdio.h>

int main_8(void)
{
	/*
	int opt;
	double num1, num2;
	double result;

	printf("1. ����   2. ����   3. ����   4. ������\n�����ϼ��� :   ");
	scanf_s("%d", &opt);
	printf("�� ���� �Է��ϼ��� :   ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
	{
		printf("������ �����ϼ̽��ϴ�.\n");
		result = num1 + num2;
		printf("%f + %f = %f\n", num1, num2, result);

	}

	else if (opt == 2)
	{
		printf("������ �����ϼ̽��ϴ�.\n");
		result = num1 - num2;
		printf("%f - %f = %f\n", num1, num2, result);

	}

	else if (opt == 3)
	{
		printf("������ �����ϼ̽��ϴ�.\n");
		result = num1 * num2;
		printf("%f X %f = %f\n", num1, num2, result);

	}

	//if (opt == 4)
	else
	{
		printf("�������� �����ϼ̽��ϴ�.\n");
		result = num1 / num2;
		printf("%f / %f = %f", num1, num2, result);

	}

	printf("��� :   %f\n", result);
	*/

	/*
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 || num % 4 == 0)
		{
			printf("%d�� 3 �Ǵ� 4�� ����Դϴ�.\n", num);
		}
	}
	*/

	//����
	/*
	int num, abs;

	printf("���� �Է� :  ");
	scanf_s("%d", &num);

	abs = (num >= 0) ? num : num * (-1);

	printf("��� :  %d", abs);
	*/

	//8-1
	//1
	/*
	for (int i = 1; i < 100; i++)
	{
		//if (i % 7 == 0 || i % 9 == 0)
			//printf("%d\t", i);
		//(i % 7 == 0 || i % 9 == 0) ? printf("%d\t", i) : 0;//data2�κп� �ƹ��͵� ���� ������ ������ ����� ������? 0�� ������ ��� �Ǵ� ������?
	}
	*/
	

	//2
	
	/*
	int num1, num2;
	int max, min;

	printf("�� ������ �Է��ϼ��� :  ");
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

	//4(����2�� ���ǿ����ڷ�)
	/*
	int num1, num2, result;

	printf("�� ������ �Է��ϼ��� :  ");
	scanf_s("%d %d", &num1, &num2);

	//(num1 > num2) ? result = num1 - num2 : result = num2 - num1;
	//�� ���� �ȵǴ� ���� : ���ǿ������� �켱������ = �����ں��� ���Ƽ� ���� ������ ������ ����
	result = (num1 > num2) ? num1 - num2 : num2 - num1;


	printf("�� ���� �� :  %d\n", result);
	*/

	//3
	/*
	double kor, math, eng;
	double average;
	char score;

	printf("���� ���� :  ");
	scanf_s("%lf", &kor);
	printf("���� ���� :  ");
	scanf_s("%lf", &math);
	printf("���� ���� :  ");
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

	printf("��� : %f\n", average);
	printf("���� : %c", score);
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
			printf("%d��\n", dan);

			for (int num = 1; num <= 9; num++)
			{
				printf("%d X %d = %d\n", dan, num, dan * num);
			}
		}
	}
	*/
	
	//continue���
	/*
	for (int dan = 2; dan < 10; dan++)
	{
		if (dan % 2 != 0) 
		{
			continue;
		}

		printf("%d��\n", dan);
		
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

	//���
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
				printf("0�̻� 10�̸�\n");
				break;

			case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19:
				printf("10�̻� 20�̸�\n");
				break;
			
			case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29:
				printf("20�̻� 30�̸�\n");
				break;

			default :
				printf("30�̻�\n");

		
		}
	}
	*/

	//GoToBasic
	int num;
	printf("�ڿ��� �Է� :  ");
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
		printf("1�� �Է��ϼ̽��ϴ� \n");
		goto END;
	TWO:
		printf("2�� �Է��ϼ̽��ϴ� \n");
		goto END;

	OTHER:
		printf("3Ȥ�� �ٸ� ���� �Է��ϼ̱��� \n");

	END:
		printf("��\n");
		return 0;



	//return 0;
}