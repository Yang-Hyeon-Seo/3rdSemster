#include <stdio.h>

int main_5(void)
{
	//sizeof������ Ȱ��, �ڷ����� ũ�� Ȯ��
	/*
	printf("char�� ũ�� : %d\n", sizeof(char));
	printf("short�� ũ�� : %d\n", sizeof(short));
	printf("int�� ũ�� : %d\n", sizeof(int));
	printf("long�� ũ�� : %d\n", sizeof(long));
	printf("long long�� ũ�� : %d\n", sizeof(long long));
	printf("float�� ũ�� : %d\n", sizeof(float));
	printf("double�� ũ�� : %d\n", sizeof(double));
	printf("long double�� ũ�� : %d\n", sizeof(long double));
	*/

	//CircleArea.c
	/*
	double rad;
	double area;
	float area1;
	printf("���� ������ �Է� : ");
	scanf_s("%lf", &rad);

	area = rad * rad * 3.1415;
	area1 = rad * rad * 3.1415;

	printf("���� ���� : %f\n", area);
	printf("���� ���� : %f\n", area1);
	//������ flrat�� double�� ��� ���� �ٸ���
	*/

	//5-1
	//1
	/*
	int x1, y1, x2, y2;
	int length_x, length_y;
	int result;

	printf("�� ����� x, y��ǥ : ");
	scanf_s("%d %d", &x1, &y1);
	printf("�� �ϴ��� x, y��ǥ : ");
	scanf_s("%d %d", &x2, &y2);
	//scanf_s���� ���� ������ �� �޸��� ������ �Է��� �� �޸��� �Է��ؾ� �ν��ϴ°�? �׸��� �޸��� ���� �ʰ� �� ���� ������ ���� scanf_s�� �� ������ �ȵǴ°�?

	length_x = x2 - x1;
	length_y = y2 - y1;

	result = length_x * length_y;

	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�\n", result);
	*/

	//2
	/*
	double num1, num2;

	printf("�� ���� �Ǽ��� �Է��ϼ��� : ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("%f + %f = %f\n", num1, num2, num1 + num2);
	printf("%f - %f = %f\n", num1, num2, num1 - num2);
	printf("%f * %f = %f\n", num1, num2, num1 * num2);
	printf("%f / %f = %f\n", num1, num2, num1 / num2);
	*/
	
	//4
	/*
	int code;

	printf("�ƽ�Ű�ڵ尪�� �Է��ϼ��� : ");
	scanf_s("%d", &code);

	printf("%d �ش� �ڵ忡 �ش��ϴ� ���ڴ� %c�Դϴ�\n", code, code);
	*/

	//5
	/*.
	char asc;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%c", &asc);

	printf("%c�� �ƽ�Ű�ڵ�� %d�Դϴ�\n", asc, asc);
	*/

	//LiteralSize
	/*
	printf("literal int size :  %d\n", sizeof(7));
	printf("literal double size :  %d\n", sizeof(7.14));
	printf("literal char size :  %d\n", sizeof('A'));
	//���ڵ� ������ �������� ������ ���°� �Ǳ� ������ int���� �ȴ�
	*/

	//AutoConvOne
	/*
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("���� 245�� �Ǽ��� :  %f\n", num1);
	printf("�Ǽ� 3.1415�� ������ :  %d\n", num2);
	printf("ū ���� 129�� ���� ������ :  %d\n", ch);
	*/

	//���� ����ȯ
	//������ ����� �Ҽ� ���·� �ޱ�
	int num1 = 3, num2 = 4;
	double divResult;
	divResult = num1 / num2;
	printf("������ ��� : %f\n", divResult);
	//�������� �ڷ����� �ǿ������� �ڷ����� ��ġ>>�������� ����� 0(��)�� ��
	//�Ҽ����·� �ޱ� ���ؼ��� �ǿ������� �ڷ����� float�� double������ �ٲ��־�� ��
	divResult = (double)num1 / num2;
	printf("������ ��� : %f\n", divResult);

	
	
	
	return 0;
}