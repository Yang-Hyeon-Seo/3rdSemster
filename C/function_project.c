//��й�ȣ ������ ������Ʈ
#include <stdio.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int i, int num1, int num2);
void success();
void fail();



int main_function_project(void) {

	//���� 5���� �ְ�, �� ������ ���� ����� ������� ���� + ����
	//������ ���, Ʋ���� ����

	srand(time(NULL));
	/*int count = 0, num1, num2;
	num1 = rand()%;
	num2 = rand()%;*/

	int count = 0;//���
	for (int i = 1; i <= 5; i++) {
		//printf("%d��° ����\n", i);
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		//printf("%d X %d �� ���� ���Դϱ�?\n", num1, num2);
		showQuestion(i, num1, num2);
		int answer;
		scanf_s("%d", &answer);
		if (answer == num1 * num2) {
			/*  ���� �Լ� �����
			printf("�����Դϴ�\n");
			count += 1;
			printf("%d���� ���� �������ϴ�\n", count);
			*/
			success();
			count += 1;
		}
		else if (answer == -1) {
			printf("���α׷��� �����մϴ�\n");
			exit(0); //���α׷��� ������� �Լ�, ���� �ڵ带 ���̻� �������� �ʰ� �����Ѵ�
		}
		else {
			/*  ���� �Լ� �����
			printf("�������� �ڸ��� �Ѱ���� �Ѵٴ�...\n");
			break;
			*/
			fail();
			break;//���� ����
		}
	}

		printf("����� %d���� ���� �������ϴ�\n", count);


	return 0;
}



int getRandomNumber(int level) {
	return rand() % (level*10) + 1;
}
void showQuestion(int i, int num1, int num2) {
	printf("#########%d��° ��й�ȣ#########\n", i);
	printf("\n\t%d X %d ?\n\n", num1, num2);
	printf("��й�ȣ�� �Է��ϼ���(���Ḧ ���� �� -1�Է�) : ");
}

void success() {
	printf("���� �����ϴ�\n");
}

void fail() {
	printf("������ �ڸ��� �Ѱ���� �Ѵٴ�\n");
}

