/*
������Ʈ�� : Project#2 : Selection Sort using Linked List
�ۼ��� : 2015442 ������(�濵�к�)
�ۼ��� : 2021.05.26(��)
����� : C���

�˰��� ���� :
		
		����� Linked List(LList)�� �����ϴ� ��带 ����� ���� Node����ü, Linked List�� ù ��带 ����ų Head����ü�� �����Ѵ�.
		Node����ü�� ����� ����Ʈ�� �����ϱ� ������ �ڽ��� ���� ������ int�� data�� ����, ������ ������ Node�� ����ų Node������ llink�� rlink�� �ʿ��ϴ�
		Head����ü�� Linked List�� ó���� ��, �׸��� ������ ������ �����ؾ� �ϱ� ������ Node������ start, end�� int�� count�� �ʿ��ϴ�.

		Main
		Lined List�� ��带 ����ų Node�� ������ tmp, Linked List�� ����ų Head����ü ����LList�� �����Ѵ�.
		1)	10���� �Է��� �ް�, �Է��� ���� ������ �迭�� ��ü�� ����Ѵ�.
		->	�迭�� ���� ������ ���� input�Լ�
		 for���� �̿��ϸ� 10ȸ�� �ݺ��ϸ� 10���� ������ �Է� �޾� ����Ʈ�� �߰��Ѵ�
		 for���� �����԰� ���ÿ� Node����ü�� ũ�⸸ŭ �����Ҵ��� �ް�, �̸� Node�� �����ͺ��� node�� ����Ų��. 
		 ���� ù��° �Է��� ���
			���� �Էµ� ����� ��/�쿡 �ƹ��� ��尡 �������� �ʱ� ������ llink�� rlink�� NULL�� ����, head(LLink)�� start�� end�� ��� node�� ����Ű���� �ϰ�, count�� 1�� �����
		 �� ���ĺ��ʹ� 
			Node�� �����ͺ��� tmp�� head�� end(Linked List�� ������ ���)�� ����Ű���� �� �� ������ ���(tmp)�� rlink�� ���ο� node�� ����Ű���� �Ѵ�.
			���ο� node�� llink�� ������ node�� ����Ű��, rlink�� NULL�� ����Ű���� �Ѵ�.
			����� ���� �þ�� ������ count�� 1 �÷��ش�.
		 �Է��� ���� ������ ���ݱ��� �Է� ���� ��� ��带 ����ؾ� �ϱ� ������ for���� ��ø�Ͽ� ���ݱ����� ��� ��(count)��ŭ �ݺ��ϸ� ����� data���� ����Ѵ�.
		2)	�迭�� ���Ҹ� �����Ѵ�
		->	tmp�� Linked List�� ù��° ��带 ����Ų��.
		->	(�ܺ� for��)
		 for���� 9�� �ݺ��Ѵ�. �ݺ��� ������ tmp�� ����Ű�� ���� �ڷ� �ϳ��� �̵��Ͽ� ������ 9��°�� �� 9��° ����� data���� ��ġ�� �����ϸ� 10��° ����� ��ġ�� 
		 �ڵ������� �����Ǳ� ������ 9���� �ݺ��Ѵ�
		->	(���� for��)
		 �ܺ� for������ ���� ���� ��带 ����Ű�� min�� min�� ���� �ٷ� ���� ��带 ����Ű�� min_compare������ ������ �� tmp�� ����Ű�� ������ ������ ������ 
		 ��� ��带 Ȯ���ϸ鼭 tmp�� ����Ű�� ��ġ(���� ù��° ��ġ)�� �;� �ϴ� data���� ã�� tmp�� �ڸ��� �ٲ۴�.
		 for���� ���鼭 min�� min_compare���� ũ�� min�� ����Ű�� ��带 min_compare�� �ٲ��ش�.
		->	(�ٽ� �ܺ� for��)
		 ���� min�� tmp�� ���� ��带 ����Ų�ٸ� �̹� ���� ���� ��尡 ���� �տ� �ִٴ� �ǹ�������, �׷��� �ʴٸ� min�� ����Ű�� data���� exc��� int�� ������ ������ �� 
		 tmp�� data���� min�� data���� �����ϰ�, min�� data�� exc�� ���� �־��ش�. �� �� for���� �̿��Ͽ� ��� Linked List�� ����� ���� ����Ѵ�.
		 ���� tmp�� ������ ��尡 �ƴ϶�� tmp�� ���������� �ѹ� �̵���Ų��.

		 ���� ù��° ��ġ�� �� ���� ���� ���Ҹ� for���� �̿��Ͽ� �迭 ��ü���� ã�´�. ���� ���� ���Ҹ� ���� �� ��ġ�� �ű�� ������ ���� �տ� �ִ� ���Ҹ� ���� ���� ���Ұ� �ִ� �ڸ��� �ű��
	 	 �迭�� ù��° ������ ��ġ�� �ܺ�for���� �ݺ��Ҽ��� �ڷ� �̵��ϰ�, for���� �̿��� ���� ���� ���Ҹ� Ž���ϴ� ������ �迭�� ù��° ���Һ��� ������ ���ұ����̱� ������ 
		 Ž���ϴ� ������ �ϳ��� �پ���
		->	(�ܺ� for��)
	 	 ���� �迭�� ���̸�ŭ for���� �ݺ��ϸ鼭 ���� for���� �̿��� Ž���� �迭�� ���� ù��° ���Ұ������ش�
		 �迭�� ù��° ������ ��ġ�� for���� �ݺ��ϸ鼭 1�� �þ�� �ȴ�.
		3)	�ε��� 9���� 0���� ���ҵ��� �������� ����Ѵ�
		->	�������� ���ҵ��� ����ϱ� ���� printReverse�Լ�
		->for���� �̿��Ͽ� tmp�� llink�� ���� Linked List�� ���ʹ���(����)���� ��� ��带 ����Ѵ�.


������ �˰��� : �˰��� ��� �� ���� ������Ʈ�� �˰����� �����߰�,
					�ڵ��ϸ鼭 C�� �����ϸ� ������ ���� ��Ʈ�� ����,
					���������� ������ �κ��� ���� C���α׷��� å�� ������ �����߽��ϴ�.
					�ڵ� ������ ���� ���� �˻��̳� ������ ���� ������ ã�ƺ��ҽ��ϴ�.
					
������ �� ���� : ����

*/

/*
#include<stdio.h>

typedef struct
{
	struct Node* llink;
	int data;
	struct Node* rlink;
} Node;

typedef struct
{
	struct Node* start;
	struct Node* end;
	int count;
} Head;

void input(Head* head)
{
	for (int i = 0; i < 10; i++)
	{
		Node* node = (Node*)malloc(sizeof(Node));
		
		if (i == 0)//ù��° ��� ����
		{
			//node->data = 0;
			node->llink = NULL;
			node->rlink = NULL;

			head->start = node;
			head->end = node;
			head->count = 1;

		}
		else
		{
			Node* tmp = head->end;

			node->llink = head->end;
			node->rlink = NULL;

			tmp->rlink = node;
			head->end = node;
			head->count++;

		}
		printf("\n������ �Է��ϼ��� : ");
		scanf_s("%d", &node->data);

		//���Ҹ� �ϳ� ���� �� ����Ʈ ��� ���
		printf("Linked List : ");
		Node* tmp = head->start;
		for (int j = 0; j < head->count; j++)
		{
			printf("%d ", tmp->data);
			tmp = tmp->rlink;
		}
	}
}

void printReverse(Head* head)
{
	Node* tmp = head->end;
	printf("Linked List ���� ���: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", tmp->data);
		tmp = tmp->llink;
	}
}


int main(void)
{
	Node* tmp;
	Head LList = { NULL, NULL, 0 };
	input(&LList);

	//���� ���� n^2

	//printf("%d\n", head.count);//10��
	printf("\n");

	//Sort
	tmp = LList.start;
	for (int i = 0; i < 9; i++)//10ȸ �ݺ�
	{
		//printf("%d��° : \n", i);

		Node* min = tmp;
		Node* min_compare=min->rlink;
		for (int j = i; j < 9 ; j++)
		{
			//printf("-%d��°\n", j);
			//min_compare = min->rlink;
			//printf("\n\n����\nmin : %d\tmin_compare : %d", min->data, min_compare->data);
			if (min->data > min_compare->data && min->rlink!=NULL)
			{
				min = min_compare;
				//printf("\nmin�̵�");
			}
			else
			{
				//printf("\n�̵�����");
			}
			if (min_compare->rlink != NULL)
			{
				min_compare = min_compare->rlink;
			}
		}

		if (tmp != min)
		{
			int exc = tmp->data;
			//*tmp = *min;
			//*min = exc;
			tmp->data = min->data;
			min->data = exc;

			min = LList.start;
			printf("\nLinked List : ");
			for (int j = 0; j < LList.count; j++)
			{
				printf("%d ", min->data);
				if(min->rlink != NULL)
					min = min->rlink;
			}

		}

		if (tmp->rlink != NULL)
			tmp = tmp->rlink;
		//printf("������� ������ %d", i);
	}
	//printf("\n�����?");
	//���� ���� n^2
	
	printf("\n\n");
	printReverse(&LList);

	return 0;
}  

*/