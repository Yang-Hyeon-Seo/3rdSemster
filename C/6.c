#include <stdio.h>

int main_6(void)
{
	//string printf
	/*
	printf("I like programming \n");
	printf("I love puppy!\n");
	printf("I am so happy\n");
	*/

	//�����
	//printf("\a");
	
	//printf ����
	//"�� ���̴� 10������ 12��, 16������ C���Դϴ�, ���� ������ ���α׷� ����ڷκ��� ���� �Է�"
	/*
	int age;

	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);

	printf("�� ���̴� 10������ %d��, 16������ %X�� �Դϴ�\n", age, age);
	//x�� X�� ����>>����ϴ� 16������ �ҹ��� �빮�ڸ� �ǹ�
	*/

	//OctHex
	/*
	int num1 = 7, num2 = 13;
	printf("%o  %#o", num1, num1);
	printf("%x, %#x, %#X\n", num2, num2, num2);
	*/

	//%f�� %e���� ��
	/*
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234);

	printf("%f \n", 0.12345678);
	printf("%e \n", 0.12345678);
	*/
	
	//FieldWidth
	/*
	printf("%8s %14s %5s \n", "��  ��", "�����а�", "�г�");
	printf("%8s %14s %5d \n", "�赿��", "���ڰ���", 3);
	printf("%8s %14s %5d \n", "������", "��ǻ�Ͱ���", 2);
	printf("%8s %14s %5d \n", "�Ѽ���", "�̼�������", 4);
	*/

	//ScanfConvTwo
	/*
	float num1;
	double num2;
	long double num3;

	printf("�Ǽ� �Է� 1(e ǥ�������) :  ");
	scanf_s("%f", &num1);
	printf("�Էµ� �Ǽ� :  %f\n", num1);

	printf("�Ǽ� �Է� 2(e ǥ�������) :  ");
	scanf_s("%lf", &num2);
	printf("�Էµ� �Ǽ� :  %f\n", num2);

	printf("�Ǽ� �Է� 3(e ǥ�������) :  ");
	scanf_s("%Lf", &num3);
	printf("�Էµ� �Ǽ� :  %Lf\n", num3);
	*/









	return 0;
}