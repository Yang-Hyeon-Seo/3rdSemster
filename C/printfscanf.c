#include <stdio.h>
int main_printfscanf(void) {


	/*�ϳ��� ������Ʈ�� �������� �����Լ��� �����ϸ� ������ �߻�
	�ӽ������� main�Լ� �ڿ� �ٸ� �̸��� �ٿ� �ϳ��� ������Ʈ��
	�������� main�Լ��� �������� �ʰ� �������� ��*/




	//������ ���� ����
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	//�Ǽ��� ���� ����
	/*float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);*/

	//���>�� �� �����ϸ� �ٲ� �� ����, ���� �빮�ڷ� ǥ��
	/*const int YEAR = 2000;
	prntf("�¾ �⵵ : %d\n", YEAR);*/
	//YEAR = 2000;

	//printf
	//����
	/*
	int add = 3 + 7;//10 ���Ǿ ����
	printf("%d\n", add);
	printf("%d * %d = %d\n", 30, 79, 30 * 79);
	*/

	//scanf
	//Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);//& : input�̶�� ������ ���ǵ� ���� ���� �Է¹޴´ٴ� �ǹ�
	printf("�Է°�: %d\n", input);*/

	/*int one, two, three;
	printf("������ ���� �Է��ϼ���: ");
	scanf_s("%d, %d, %d", &one, &two, &three);*/
	/*scanf_s �� �̿��Ͽ� ���� ���� ���� ���� �������� �����ϴ� ���
	(�Է� �ÿ��� �����ϰ� �Է��ؾ� ��, �ƴϸ� �ν����� ����)
	%d, %d, %d �� ��� �޸��� �� ����>1, 2, 3�̷��� �Է��ؾ� �� 1,2,3�̷��� �Է��ص� ����
	%d %d %d �� ��� ����� ����> 1 2 3 �̷��� �Է��ؾ� ��
	*/
	/*printf("ù ��° �� : %d\n", one);
	printf("�� ��° �� : %d\n", two);
	printf("�� ��° �� : %d\n", three);*/

	//����(�� ����)�� ���ڿ�(�� ���� �̻��� ���� ����)
	//���� : char
	/*
	char c = 'A';
	printf("%c\n", c);
	//���ڿ�: ���� ���ڰ� �ѹ��� ���� ������ ���� �迭�� �̿�
	char str[256];//char���� �޴� ���� 256�� ����, �迭
	printf("���ڿ��� �Է��ϼ���\n");
	scanf_s("%s", str, sizeof(str));
	printf("%s", str);
	*/

	//������Ʈ / ������ ��������
	//�������� �������� ������ �Լ�(���� �ۼ�)
	//�̸�, ����, ������, Ű, ���˸�

	//���ڿ��� �� �ޱ�
	char name[256], crime[256];
	int age;
	float weight, height;
	printf("�̸��� ������\n");
	scanf_s("%s", name, sizeof(name));
	printf("���̴� ���̿���\n");
	scanf_s("%d", &age);
	printf("�����Դ� ���̿���\n");
	scanf_s("%f", &weight);
	printf("Ű�� ���̿���\n");
	scanf_s("%f", &height);
	printf("������ �߸��߳���\n");
	scanf_s("%s", crime, sizeof(crime));
	printf("\n\n�̸� : %s\n���� : %d\n������ : %.2f\nŰ : %.2f\n���˸� : %s\n", name, age, weight, height, crime);

	return 0;
}
