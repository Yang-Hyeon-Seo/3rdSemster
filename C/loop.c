#include <stdio.h>

int main_loop(void) 
{
	//printf("Hello World\n");

	//++������
	/*int a = 10;
	printf("a�� %d\n", a);//10
	a++;
	printf("a�� %d\n", a);//11
	a++;
	printf("a�� %d\n", a);//12*/

	/*int b = 20;
	//++b, b++ �� b = b + 1�� �ǹ�
	printf("b�� %d\n", ++b);//������ ������ �� ���� ���� ++b�� ���� / 21���
	printf("b�� %d\n", b++);//������ ������ �� ���� �������� b++�� ���� / 21��� �� b�� 22�� ��
	printf("b�� %d\n", b);//���� ���� ������ b�� 22�� �Ǿ��� ������ 22���
	*/

	/*int i = 1;
	printf("Hello World %d\n", i++);//��µǴ� i =1 / i�� 2�� ��
	printf("Hello World %d\n", i++);//i = 2 // 3�� ��
	printf("Hello World %d\n", i++);//i=3
	printf("Hello World %d\n", i++);//i=4
	printf("Hello World %d\n", i++);//i=5
	printf("Hello World %d\n", i++);//i=6
	printf("Hello World %d\n", i++);//i=7
	printf("Hello World %d\n", i++);//i=8
	printf("Hello World %d\n", i++);//i=9
	printf("Hello World %d\n", i++);//i=10 / i�� 11�� ��
	printf("\n");
	printf("i = %d\n", i);
	*/

	//�ݺ���
	//for, whlie, do whlie
	//for (����; ����; ����){}
	
	//for
	/*
	int i;
	for (i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}
	printf("%d", i);
	printf("\n\n");
	for (i = 1; i <= 10; ++i) {			
		printf("Hello World %d\n", i);
	}
	printf("%d", i);//i�� 11, ���ǿ� ���� �ʾ� �ݺ����� ����
	*/


	/*�� ����� ����� ����
	1. ����
	2. ����
	3. ���� ��� ����
	4. ����(i++Ȥ�� ++i ��)
	5. 2������ ���ư�(������ Ȯ��)
	*/

	//while (����) {}
	/*���� ������ while �ۿ��� ���� �ϰ�
	������ Ȯ���� �� ������ �������� ���� ����
	while �Լ� ������ ������ �������� �� �ִ� ȯ���� ������ ��
	(������ �������� �ʴ� ��Ȳ)
	while �� �ȿ� �ִ� ��� ������ ������ �Ŀ� while�� ���ư� ������ �ٽ� Ȯ���ϰ�
	������ �����ϸ� while���� ���� ����, �������� ������ while���� �������´�*/
	/*int i = 1;
	while (i <= 10) {
		printf("Hello World %d", i);
		i++
	}
	*/

	//do {} while (����);
	/*
	int i = 1;
	do {
		printf("Hello World %d\n", i);
		i++;
		//printf("Hello World %d\n", i++);�� �����ϴ�
	} while (i <= 10);
	*/

	//2�� �ݸ�
	/*for (int i = 1; i <= 3; i++) {
		printf("ù ��° �ݺ��� : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("       �� ��° �ݺ��� : %d\n", j);
		}
		
	}*/
	
	//������ ǥ �����
	/*for (int i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}*/

	/*
	*
	**
	***
	****
	*****
	�����*/

	/*for (int i = 1; i <= 5; i++)       //���� ǥ��
	{
		for (int j = 1; j <= i; j++) { //�� ���� *�� ǥ��, for ���� ���鼭 �Ѱ��� *�� ��´�
			printf("*");
		}
		printf("\n");
	}*/

	/*
	     *
	    **
	   ***
	  ****
	 *****
	 �����*/
	
	/*for (int i = 1; i <= 5; i++)
	{
		for (int a = 1; a <= 5 - i; a++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//�Ƕ�̵带 �׾ƶ� ������Ʈ
	
	int floor;

	printf("�������� ���� ���ΰ�?");
	scanf_s("%d", &floor);

	/*
	1�� 1��
	2�� 3��
	3�� 5��
	4�� 7��
	n�� 2n-1��

	5��¥���� �״´�
	���� �� : �� 9��
	ssss*       s�� �� 9//2�� �� / �Ҽ����� �ǰ�, �񱳿����� �̿��ϸ� �� ��
	sss***
	ss*****
	s*******
	*********

	n�� ¥���� �״´�
	���� �� : �� 2n-1��
	s n-1�� *1��
	�����*/

	//floor�� ��ŭ �ݺ�
	for (int i = 1; i <= floor; i++) {                 //floor ��ŭ �� ����
		for (int j = 1; j <= floor - i; j++) {         //���� ���� ���� �ٿ��� ��
			printf(" ");							   //n��>���������� n-1��, n-2��, ..., 0��
		}											   //�� n��, ���� i��(����������)>������ ������ n-i
		for (int k = 1; k <= i * 2 - 1; k++) {		   //�� ������ *�� ������ 2*i-1��(���� ���������� 1��)
			printf("*");
		}
		printf("\n");
	}
	/*
	ù��°
	*/





	return 0;
}