#include <stdio.h>

#include <time.h> //�����Լ��� ����ϱ� ���� �߰��ϴ� ��
//#include <stdlib.h>//time.h������ �����Լ��� ����� �� ���� ��� �߰��ϴ� ��

int main_random(void) {
	
	//������ ���� �ʹٸ� ���� �ʱ�ȭ�� �ؾ� ��
	//srand(time(NULL)); //���� �ʱ�ȭ


	//int num = rand() % � ��(�̰� ���� ������ ���� ����)
	//rand();

	//int num = rand() % 3; //0~2 �� �ƹ��ų� ���õ� / �߿��� ���� 0���� ����, 3�� �������� ����
	//���� 1���� 3������ ���ڸ� �̰� �ϰ� �ʹٸ�
	//int num = rand() % 3 + 1  //0~2�� ���� 1�� ����>>1~3

	//���� �ʱ�ȭ
	printf("���� �ʱ�ȭ ����\n");
	for (int i = 0; i < 10; i++) {
		printf("%d", rand() % 10);
	}
	srand(time(NULL));
	printf("\n\n���� �ʱ�ȭ ����\n");
	for (int i = 0; i < 10; i++) {
		printf("%d", rand() % 10);
	}

	return 0;
}