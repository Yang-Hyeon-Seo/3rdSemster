#include <stdio.h>
#include <time.h>//���� �̿�


int main(void)
{
	srand(time(NULL));
	printf("===�ƺ��� ��Ӹ� ����===\n\n");
	
	int answer; // ����� �Է°�
	int treatment = rand() % 4; // �߸���

	int countShowBottle = 0; //�̹� ���ӿ��� ������ ���� ����
	int previousShowBottle = 0;//�հ��ӿ��� ������ ���� ����
	//���� �����ִ� ���� ������ �ٸ����Ͽ� ����� ���(2��>3��)

	//3���� ��ȸ(�߸��� ���� �õ� Ƚ��)
	for (int i = 0; i < 3; i++)
	{
		int bottle[4] = { 0,0,0,0 }; //4���� ��, 1�� �߸���, 0�� �߸����� �ƴ�
		do
		{
			countShowBottle = rand() % 2 + 2;//2~3
		} while (countShowBottle == previousShowBottle);
		previousShowBottle = countShowBottle;

		//countShowBottle != previousShowBottle

		int isIncluded = 0; // ������ �� �߿� �߸����� ���ԵǾ����� ���� (1�̸� ����, 0�̸� �������� ����)

		printf("%d��° �õ� : ", i + 1);
		//������ �� ���� ����
		for (int j = 0; j < countShowBottle; i++) 
		{
			int randBottle = rand() % 4;//0~3������ �� ����

			//���õ� ���̸� ���� 1�� ���� / ����ó��
			if (bottle[randBottle] == 0) {
				bottle[randBottle] = 1;

				//������ ��Ʋ�� �߸����� ��� �Ӹ��� ���ٰ� ǥ���ؾ� ��(isIncluded = 1�� �Ǿ�� ��)
				if (randBottle == treatment)
				{
					isIncluded = 1;

				}

			}
			//���õ� ���̸� �ٽ� �̴´�
			else {
				j--;//j�� ���� 1 ����߷��� �ٽ� �̾Ƶ� j�� ���� �þ�� �ʵ��� / �ٽ� ���� ���� ��ȿ�� �ϱ� ����
			}
		}

		//����ڿ��� ���� ǥ��
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1) {
				printf("%d ", k + 1);
			}
		}
		printf("������ �Ӹ��� �ٸ��ϴ�\n\n");//���õ� ��ȣ�� ������ �Ӹ��� �ٸ��ϴ� / bottle[k]�� 1�� ���� ���õ� �����

		if (isIncluded == 1) 
		{
			printf("����>>�Ӹ��� �����!\n");
		}
		else
		{
			printf("����>>�Ӹ��� ���� �ʾҾ��...\n");
		}
		
		printf("\n����Ϸ��� �ƹ�Ű�� ��������");
		getchar(); // ����ڰ� � Ű�� ���� ������ ����ϴ� ����

	}

	printf("\n�߸����� �� ���ϱ��?\n");
	scanf_s("%d", &answer);

	if (answer == treatment + 1)
	{
		printf("\n�����Դϴ�\n");
	}
	else
	{
		printf("\nƲ�Ƚ��ϴ� ������ %d�Դϴ�\n", treatment + 1);
	}




	return 0;
}