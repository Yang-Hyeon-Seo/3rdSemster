#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main_condiction(void) {
	
	//if else
	//if (����) {} else {}
	//������ ź�ٰ� ������ �� �л� �ƴϸ� �Ϲ������� ����
	/*int age = 25;
	if (age >= 20) {
		printf("�Ϲ����Դϴ�\n");
	}
	else {
		printf("�л��Դϴ�\n");
	}*/

	//if / else if / else
	//�ʵ��л� 8~13 / ���л� 14~16 / ����л� 17~19�� ������?
	/*
	int age = 25;
	if (age >= 8 && age <= 13) {    //&&�� and�� �ǹ�, ���ÿ� �����ؾ� ��
		printf("�ʵ��л��Դϴ�");
	}
	else if (age >= 14 && age <= 16) {
		printf("���л��Դϴ�");
	}
	else if (age >= 17 && age <= 19) {
		printf("����л��Դϴ�");
	}								//���⿡ ��� ���Ե��� ������ �ƹ��� ���� ������ �ʴ´�
	//���� ������ �ϱ� ���ؼ��� else�� �߰��ϸ� �ȴ�
	else {
		printf("�л��� �ƴѰ�����");
	}
	*/

	//switch�������� ���� �л� ������
	/*int age;
	age = 7;

	switch (age) {
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("�ʵ��л��Դϴ�\n"); break;
	case 14:
	case 15:
	case 16:printf("���л��Դϴ�\n"); break;
	case 17:
	case 18:
	case 19:printf("����л��Դϴ�\n"); break;
	default:printf("�л��� �ƴմϴ�\n"); break;
	}
	*/



	//break continue
	//1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ�� �Ѵ�
	/*
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("������ �л��� ���� ������\n");
			break;				//for���� Ż���Ѵ�
		}
		printf("%d�� �л��� ��ǥ�� �غ��ϼ���\n", i);
	}
	*/
	//1������ 30������ �ִ� �ݿ��� 7���� ���ļ� �Ἦ
	//6���� 10������ ��ǥ
	/*
	for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d�� �л��� �Ἦ�Դϴ�\n", i);
				continue;
			}
			printf("%d�� �л��� ��ǥ�� �غ��ϼ���\n", i);
		}
	}*/

	//&& ||
	/*
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;
	if (a == b || c == d) {
		printf("a�� b, Ȥ�� c�� d�� �����ϴ�");
	}
	else {
		printf("���� �ٸ��׿�");
	}
	*/

	//����0 ����1 ��2
	/*
	srand(time(NULL));
	int i = rand() % 3;
	if (i == 0) {
		printf("����");
	}
	else if (i == 1) {
		printf("����");
	}
	else if (i == 2) {
		printf("��");
	}
	else {
		printf("�����");
	}
	*/

	//switch
	/*
	srand(time(NULL));
	int i = rand() % 3;//0~2

	switch (i) {
	case 0:printf("����\n"); break;
	case 1:printf("����\n"); break;
	case 2:printf("��\n"); break;
	default:printf("�����\n"); break;
	}
	*/

	//�� �� �ٿ�
	//ģ���� Ȥ�� ai�� �÷���
printf("UP & DOWN\n");
	int i = 0;
	while (i == 0) {
		printf("1. ģ���� �÷���\n2. AI�� �÷���\n");
		int choose, chance = 5;//ģ���� �÷����ϰų� AI�� �÷����ϴ� �� �� ����, ��ȸ�� 5��
		scanf_s("%d", &choose);
		//ģ���� �÷����ϴ� ���
		if (choose == 1) {
			int num, answer;//��� �亯
			printf("��ȣ�� �����ּ���\n");
			scanf_s("%d", &num);
			printf("ģ������ �Ѱ��ּ���\n\n");
			while (chance > 0) {
				printf("��ȸ�� %d�� ���ҽ��ϴ�\n�� �� �ϱ��?\n", chance--);
				scanf_s("%d", &answer);
				if (answer == num) {
					printf("�����Դϴ�\n");
					break;
				}
				else if (answer > num) {//���ڰ� ū ���
					printf("�ٿ�\n");
				}
				else {//���ڰ� ���� ���
					printf("��\n");
				}
				//chance = chance - 1;
				if (chance == 0) {
					printf("��ȸ�� ��� ����Ͽ����ϴ�.\n������ %d�Դϴ�", num);
				}
			}
			break;
		}
		//AI�� �÷����ϴ� ���
		else if (choose == 2) {
			int num, answer = 5;//����� �亯
			srand(time(NULL));
			num = rand() % 100 + 1; //������ 1���� 100�� �ϳ� ����
			while (chance > 0) {
				printf("��ȸ�� %d�� ���ҽ��ϴ�\n�� �� �ϱ��?\n", chance);
				scanf_s("%d", &answer);
				if (answer == num) {
					printf("�����Դϴ�\n");
					break;
				}
				else if (answer > num) {//���ڰ� ū ���
					printf("�ٿ�\n");
				}
				else {//���ڰ� ���� ���
					printf("��\n");
				}
				chance = chance - 1;
				if (chance == 0) {
					printf("��ȸ�� ��� ����Ͽ����ϴ�.\n������ %d�Դϴ�", num);

				}
				
			}
			break;
		}
		//�ٸ� ���� �Է��� ���
		else {
			printf("�߸� �����̽��ϴ�\n");
		}
	}








	return 0;
}