#include <stdio.h>

//����
void p (int num);
void function_without_return();
int function_with_return();//������ �� ��ȯ
void funtion_without_params();
void funtion_with_params(int a, int b, int c);

//���� �Լ� ����
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int apple(int total, int ate);//��ü total���� ate����ŭ ���� �� ���� �� ����

int main_function(void) {
	//fuction
	//����

	/*int num = 2;
	//printf("num�� %d�Դϴ�\n", num);
	p(num);

	// 2 + 3
	num += 3;
	//printf("num�� %d�Դϴ�\n", num);
	p(num);
	
	//5-1
	num -= 1;
	//printf("num�� %d�Դϴ�\n", num);
	p(num);

	//4*3
	num *= 3;
	//printf("num�� %d�Դϴ�\n", num);
	p(num);

	//12/6
	num /= 6;
	//printf("num�� %d�Դϴ�\n", num);
	p(num);*/

	//��ȯ���� ���� �Լ�
	//void�Լ�
	//function_without_return();
	

	//��ȯ���� �ִ� �Լ�
	//int ret = function_with_return();
	//p(ret);

	//���ް��� ���� �Լ�
	//�Ķ����(=���ް�)
	//funtion_without_params();

	//���ް��� �ִ� �Լ�
	//funtion_with_params(27, 50, 39);

	//���ް��� �ְ� ��ȯ���� �ִ� �Լ�
	/*int ret = apple(5, 2); // 5���� ��� �߿� 2���� �Ծ����
	printf("��� 5���߿� 2���� ������ %d���� ���ƿ�\n", ret);
	*/

	//��� 10 �߿� 4���� ������? %d���� ���ƿ� / apple���� Ȱ��
	//printf("��� %d�� �߿� %d���� ������? %d���� ���ƿ�", 10, 4, apple(10, 4));

	//���� �Լ�
	/*int num = 2;
	num = add(num, 3);//���ϱ�
	p(num);

	num = sub(num, 1);//����
	p(num);

	num = mul(num, 3);//���ϱ�
	p(num);

	num = div(num, 6);//������
	p(num);*/

	return 0;
}


//����
//��ȯ�� �Լ��̸� (�Ű�����) { �Լ� ���ο��� ������ ���� }
//���Ǻκп��� ���� �Լ��� ����(��ȯ��~�Ű�����)������ ����κп����� ���¿� �����ؾ� ��
void p(int num) {
	printf("num�� %d�Դϴ�\n", num);
};

void function_without_return() {
	printf("��ȯ���� ���� �Լ��Դϴ�\n");
}


int function_with_return() {
	printf("��ȯ���� �ִ� �Լ��Դϴ�\n");
	return 10;
}

void funtion_without_params() {
	printf("���ް��� ���� �Լ��Դϴ�\n");
}

void funtion_with_params(int a, int b, int c) {
	printf("���ް��� �ִ� �Լ��Դϴ�\n");
	printf("%d, %d, %d �� ���޹޾ҽ��ϴ�\n", a, b, c);
}

int apple(int total, int ate) {//��ü total���� ate����ŭ ���� �� ���� �� ����
	printf("���ް��� ���ϰ��� ��� �ִ� �Լ��Դϴ�\n");
	printf("��ü ��� %d������ %d����ŭ �԰�, %d����ŭ ���ҽ��ϴ�\n", total, ate, total - ate);
	return total - ate;
}

//���� �Լ� ����
int add(int num1, int num2) {
	return num1 + num2;
}

int sub(int num1, int num2) {
	return num1 - num2;
}

int mul(int num1, int num2) {
	return num1 * num2;
}

int div(int num1, int num2) {
	return num1 / num2;
}