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

	//�޸� ������ ����
	/*
	int num1 = 1, num2 = 2;
	printf("Hello "), printf("World\n");
	num1++, num2++;
	printf("%d ", num1), printf("%d ", num2), printf("\n");
	*/

	//������
	/*int dan = 0, num = 1;
	printf("���?  ");
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

	printf("���� ������ �Է��ϼ��� : ");
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
	printf("���� ������ �Է��ϼ��� :  ");
	scanf_s("%u", &num);
	
	while (again < num)
	{
		printf("3�� %d��° ��� : %u\n", again+1, 3 * (again+1));
		again++;
	}
	*/

	//3
	/*
	int num = 1, result = 0;

	while (num)
	{
		printf("������ �Է��ϼ��� :  ");
		scanf_s("%d", &num);
		result += num;
		printf("%d\n", result);
	}
	printf("�� :  %d", result);
	*/

	//4
	/*
	int dan, num = 9;

	printf("�� ��?  ");
	scanf_s("%d", &dan);

	while (num > 0)
	{
		printf("%d X %d = %d\n", dan, num, dan * num);
		num--;
	}
	*/

	//5
	/*
	int num, loop = 0, input, add = 0;//�ݺ��� Ƚ��, ���� �ݺ� Ƚ��, �Է°�, ��
	double average;//���

	printf("�� ȸ �ݺ��ұ�?  ");
	scanf_s("%d", &num);

	while (loop < num)
	{
		printf("������ �Է��ϼ���(%d��°) :  ", loop + 1);
		scanf_s("%d", &input);
		add += input;
		printf("��������� �� : %d\n", add);

		loop++;
	}

	average = (double)add / num;
	printf("��� : %f", average);
	*/

	/* while�� ��ȣ �ȿ� ++������ �ִ� ���>>�񱳿��� ���Ŀ� ����
	int total = 0, i = 0;
	int number, input;

	printf("�Է��� ������ ����?  ");
	scanf_s("%d", &number);

	while (i++ < number)
	{
		printf("%d", i);
	}
	*/

	//������while ��ø
	/*
	int dan = 2, num;
	
	while (dan < 10)
	{
		printf("%d��\n", dan);
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
	int num = 0, input, result = 0;//���� ������ ����, �Է��� ��, ��

	while (num < 5)//������ 5�� ���� ������
	{
		input = 0;//��ø while���� ���ư��� ���� input�� �ʱ�ȭ
		while (input < 1) //�Է��� ���� 1���� ������ ��>>�ٽ� ����
		{
			printf("1 �̻��� ������ �Է��ϼ��� : ");
			scanf_s("%d", &input);
		}
		result += input;
		num++;//������ �ϳ� �޾����ϱ� ���� ī��Ʈ
	}

	printf("��� : %d", result);
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
	//99��
	/*
	int dan = 1, num;

	do
	{
		dan++;
		printf("%d�� \n", dan);

		num = 1;//�������� ����ϱ� ���� num�ʱ�ȭ

		do
		{
			printf("%d X %d = %d\n", dan, num, dan * num);
			num++;
		} while (num < 10);

	} while (dan < 9);
	*/

	//0�� �Է��� ������ ������ ���ذ���
	/*
	int num=0, result=0;

	do
	{
		result += num;
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &num);

	} while (num);
	printf("%d", result);
	*/

	//7-3
	//1
	/*
	int num = 1, result = 0;

	while (num) //num�� 0(����)�� �ƴϸ�(=��) �ݺ�
	{
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &num);
		result += num;
	}
	
	printf("%d", result);
	*/
	
	/*
	int num = 0, result = 0;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);
	result += num;
	while (num)
	{
		printf("������ �Է��ϼ��� : ");
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
		printf("%d ��\n", dan);
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
	int num, result=0;//����� �Է°�, ��

	do
	{
		printf("0�̻��� ������ �Է��ϼ��� :  ");
		scanf_s("%d", &num);
	} while (num < 0);

	for (int i = 0; i <= num; i++)
	{
		result += i;
	}
	printf("�� : %d\n", result);
	*/
	
	/*
	double num = 0, average, add = 0;
	int loop = 0;

	//0���� ���� ���� �Ǽ��� �Էµ� ������ �Է��� �޾� ���س��´�
	for (; num >= 0;)
	{
		add += num;
		printf("0�̻��� �Ǽ��� �Է��ϼ���(Ż���Ϸ��� 0���� ���� ���� �Ǽ��� �Է��ϼ���) :  ");
		scanf_s("%lf", &num);//��������(���� �Ǽ��� ������ �ʴ´�
		loop++;
	}

	average = add / (loop-1);
	printf("%f", average);
	*/

	//7-4
	//1
	/* ����
	int num, num1, num2, result = 0;
	
	printf("�� ������ �Է��ϼ���(��, ���� �� ���� �Է�) :  ");
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



	printf("�� ���� �� :  %d\n", result);
	*/

	//2 factorial
	/*
	int num, mul=1, mulnum;//mulnum�� ���� ����
	
	printf("���ڸ� �Է��ϼ��� :  ");
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

	//for ��ø
	//������
	int dan, num;

	for (dan = 2; dan <= 9; dan++)
	{
		printf("%d��\n", dan);

		for (num = 1; num <= 9; num++)
		{
			printf("%d X %d = %d\n", dan, num, dan * num);

		}
	}


	return 0;
}