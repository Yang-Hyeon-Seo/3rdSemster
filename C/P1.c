/*
������Ʈ�� : Project#1 : Selection Sort using Array
�ۼ��� : 2015442 ������(�濵�к�)
�ۼ��� : 2021.05.25(ȭ)
����� : C���
�˰��� ���� :
		10���� ������ ������ int�� Array(�迭)�� �����
		1)	10���� �Է��� �ް�, �Է��� ���� ������ �迭�� ��ü�� ����Ѵ�.
		 ->�迭�� ���� ������ ���� input�Լ�
		 for���� �̿��ϸ� 10ȸ�� �ݺ��ϸ� 10���� ������ �Է� �޾� �迭�� �߰��Ѵ�
		 �� for�� �ȿ��� �Է��� ���� �� for���� ��ø�Ͽ� ���� �迭�� ��� ���Ҹ� ����Ѵ�. �̶� �ݺ� Ƚ���� ���� �迭�� ���� ��
		2)	�迭�� ���Ҹ� �����Ѵ�
		 ->	(���� for��)
		 �迭�� ���� ù��° ��ġ�� �� ���� ���� ���Ҹ� for���� �̿��Ͽ� �迭 ��ü���� ã�´�. ���� ���� ���Ҹ� ���� �� ��ġ�� �ű�� 
		 ������ ���� �տ� �ִ� ���Ҹ� ���� ���� ���Ұ� �ִ� �ڸ��� �ű��
		 �迭�� ù��° ������ ��ġ�� �ܺ�for���� �ݺ��Ҽ��� �ڷ� �̵��ϰ�, for���� �̿��� ���� ���� ���Ҹ� Ž���ϴ� ������ 
		 �迭�� ù��° ���Һ��� ������ ���ұ����̱� ������ Ž���ϴ� ������ �ϳ��� �پ���
		 ->	(�ܺ� for��)
		 ���� �迭�� ���̸�ŭ for���� �ݺ��ϸ鼭 ���� for���� �̿��� Ž���� �迭�� ���� ù��° ���Ұ������ش�
	 	 �迭�� ù��° ������ ��ġ�� for���� �ݺ��ϸ鼭 1�� �þ�� �ȴ�.
		3)	�ε��� 9���� 0���� ���ҵ��� �������� ����Ѵ�
		 -> �������� ���ҵ��� ����ϱ� ���� printReverse�Լ�
		 for���� �̿��� 9��° �ε������� 0��° �ε������� ArrList�� ����Ѵ�


������ �˰��� : �˰��� ��� �ÿ��� �ƹ��͵� �������� �ʾҰ�,
					�ڵ��ϸ鼭 C�� �����ϸ� ������ ���� ��Ʈ�� ����,
					���α׷� �۵� Ȯ�� �� �� ���� ����� ������ �ñ��� ���ͳ��� ã�ƺ�������
					Ȱ������ �ʾҴ�
������ �� ���� : ����

*/

/*
#include<stdio.h>

void input(int* ArrList)
{
	for (int i = 0; i < 10; i++)
	{
		printf("\n");
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &ArrList[i]);

		printf("ArrList : ");
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", ArrList[j]);
		}
	}	
}

void printReverse(int* ArrList)
{
	printf("\nArrList ���� : ");
	for (int i = 9; i >= 0; i--)
	{
		printf("%d ", ArrList[i]);
	}

	printf("\n\n");
}

int main(void)
{
	int ArrList[10] = { 0 };
	input(ArrList);//����Ʈ �̸��� �� ��ü�� �ּҸ� ����Ų��
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("\n");
	//	printf("������ �Է��ϼ��� : ");
	//	scanf_s("%d", &ArrList[i]);

	//	printf("ArrList : ");
	//	for (int j = 0; j <= i; j++)
	//	{
	//		printf("%d ", ArrList[j]);
	//	}
	//}

	
	////input�Լ��� �� ����Ǿ����� Ȯ���ϴ� �ڵ�
	//printf("ArrList : ");
	//for (int j = 0; j < sizeof(ArrList)/sizeof(int); j++)
	//{
	//	printf("\n%d ", ArrList[j]);
	//}
	

	//���� ���� n^2

	//�����ϱ�

	//for (int i = 0; i < sizeof(ArrList) / sizeof(int); i++)
	//{
	for (int j = 0; j < sizeof(ArrList) / sizeof(int) ; j++)
	{
		int tmp = ArrList[j];
		int min = ArrList[j];
		int ind = j;
		for (int k = j; k < sizeof(ArrList) / sizeof(int) ; k++)
		{
			if (min < ArrList[k])
			{
				continue;
			}
			else
			{
				min = ArrList[k];
				ind = k;
			}
		}
		if (ind != j)
		{
			ArrList[j] = min;
			ArrList[ind] = tmp;
			printf("\nArrList : ");
			for (int arr = 0; arr < sizeof(ArrList) / sizeof(int); arr++)
			{
				printf("%d ", ArrList[arr]);
			}
		}
	}
	//}  //���ʿ��� �ݺ���

	//���� ���� n^2

	//�������� ����ϱ�
	//printf("\nArrList ���� : ");
	//for (int i = 9; i >= 0; i--)
	//{
	//	printf("%d ", ArrList[i]);
	//}

	//printf("\n\n");

	printReverse(ArrList);

	return 0;
}

*/