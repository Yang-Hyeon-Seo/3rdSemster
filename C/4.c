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

	printf("0.1�� 100�� ���� ����� %f�Դϴ�", num);
	*/

	//BitRightShift
	/*
	int num = -16;
	printf("2ĭ ������ �̵��� ��� : %d \n", num >> 2);
	printf("3ĭ ������ �̵��� ��� : %d \n", num >> 3);
	//�� ��Ʈ���� ��ȣ ��Ʈ�� �����ϴ� �ý���
	*/

	//2-1����
	/*
	//1
	printf("������\n�� �� ��\n��  ��  ��\n");

	//2
	printf("�̸� : ������ \n");
	printf("�ּ� : ��⵵ ������\n");
	printf("��ȭ��ȣ : 01037010650\n");

	//2-2����
	//1
	printf("�� �̸��� �������Դϴ�.\n�� ���̴� %d���̰��.\n���� ��� ���� �������� %d�Դϴ�.\n", 22, 17);

	//2
	printf("%dX%d=%d\n", 4, 5, 4 * 5);
	printf("%dX%d=%d", 7, 9, 7 * 9);
	*/

	//3-1����
	//1��
	/*
	int num1, num2;

	printf("�� ������ �Է��ϼ���: ");
	scanf_s("%d %d", &num1, &num2);
	
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	*/

	//2��
	/*
	int num1, num2, num3;

	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("%dx%d+%d=%d\n", num1, num2, num3, num1 * num2 + num3);
	*/

	//3��
	/*
	int num;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);

	printf("%d\n", num * num);
	*/

	//4��
	/*
	int num1, num2;

	printf("�� ������ �Է��ϼ��� : ");
	scanf_s("%d %d", &num1, &num2);

	printf("%d ������ %d�� ���� %d�̰�, �������� %d�Դϴ�\n", num1, num2, num1/num2, num1%num2);
	*/

	//5��
	/*
	int num1, num2, num3;

	printf("�� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("(%d-%d)x(%d+%d)x(%d%%%d) = %d", num1, num2, num2, num3, num3, num1, (num1 - num2) * (num2 + num3) * (num3 % num1));
	*/

	//4-4����
	//1
	/*
	int num, result;

	printf("������ �Է��ϼ��� : ");
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