/*
������Ʈ�� : Project#5 : Singly Circular Linked List for Escaping Island
�ۼ��� : 2015442 ������(�濵�к�)
�ۼ��� : 2021.05.27(��)
����� : C���
�˰��� ���� : 
		11���� ������� ���ε����� �ҽ����߰�, 3�� ���� Ż���� �� �ִ� ��ȸ�� ���� ����̱�� ��ȣ�� �̾� �Ѹ� �����ϰ�, 3���� ���� ������ �ݺ��ϱ�� �ߴ�.
		�� �������� ���ư��� Linked List�� ���� ������ ���� ������ ����̱⸦ �ݺ��Ѵ�.
		Linked List�� ����� ���� Person�̶�� �̸��� ����ü�� ��带 ����� �����ϰ�, ����ü �ӿ��� int�� num(��ȣ), ���ڿ� name(�̸�), 
		���� ��带 ����Ű�� Person�� �����ͺ���  link�� �ʿ��ϴ�. �׸��� ���� �̴� ù��° ����� ���� ǥ���ϱ� ���� Head����ü�� �����.
		Head ����ü �ȿ��� ���� ��带 ����Ű�� Person�� �����ͺ��� start, end�� ����Ʈ ���� ����� ���� �ǹ��ϴ� int�� ���� count�� �ʿ��ϴ�.
		���� �̱� ���� ������ �����ϱ� ���� <stdlib.h>�� <time.h>�� include�Ѵ�

		Main
		���ึ�� �ٸ� ����� ��� ���� srand(time(NULL));�� �����Ѵ�
		���� ��尡 �������� �ʱ� ������ Circular Linked List�� ����Ű�� Head�� {NULL, NULL, 0}���� �ʱ�ȭ�ϰ�, head�� start�� end�� ����Ű�� ���� 
		Person�� ������ ���� head_start�� head_end�� �����Ѵ�.
		11���� ������� ��ȣ�� �̸��� ������� ��1-hana, 2-dul, 3-set, 4-net, 5-dasut, 6-yusut, 7-ilgob, 8-yadul, 9-ahob, 10-ten, 11-elev���� 
		input�Լ��� ���� Circular Linked List�� �����Ѵ�.
		->	Input�Լ�
			Linked List�� ����Ű�� head�� ����� ��ȣ, �̸��� ���ڷ� �޴´�.
			���۰� ���� ����Ű�� Person�� �����ͺ����� ����, Person��带 �����ϱ� ���� malloc�� ���� �����Ҵ��� �ް�, person ������ �̸� ����Ų��.
			Person�� ����Ű�� ��� �ȿ� ���ʴ�� ��ȣ, �̸��� ������ ��
			ù��° �����, head�� start�� person�� ����Ű���� �ϰ�, 
			�� ���� ����� head�� end�� person�� ����Ű���� �Ͽ� ������ �����Ѵ�.
			�� ���� head�� count�� 1 ������Ų��.
			���ݱ��� Linked List�� ����� ������� Ȯ���ϱ� ���� for���� �̿��Ͽ� ����Ʈ�� ��� ������� ��ȣ�� �̸��� ����Ѵ�.
			����� ���� ��ȣ ���ڡ��� ���·� ����ϰ�, ������� ��/���� ����, ������ ��� �ڿ��� ��/���� ���� �ʴ´�.
		11���� ������� ��� ����Ʈ�� �߰��� �� head.end�� head.start�� head_end�� head_start�� ����Ű���� �� �� head_end�� head.start�� ����Ű���� �Ͽ� ���������� ���� ����Ʈ�� �����.

		head.count�� 3�� �Ǳ� ������ �ݺ��Ͽ� ����̱⸦ ������ ���� ����� �����Ѵ�.
		->	left�Լ��� �̿��Ѵ�.
			����Ʈ�� ���۰� ���� ���� ������ Ȱ���ϱ� ���� head�� ���ڷ� �޴´�
			�������� ���� �̾� ����Ʈ�� ����� �������� ���� ���ڸ�ŭ �̵��Ͽ� �ɸ� ����� ������.
			����� ������ �����ϴ� rand()�Լ��� �̿��ϰ�, 1~9 ������ ���ڸ� ��� ���� �̸� 9�� ���� �������� +�� ���Ѵ�.
			���� ����� �ǹ��ϴ� Person�� �����ͺ��� leftPerson�� ����, head�� start�� ����Ų��.
			���� ���ڸ� ����ϰ�, ���� ���ڸ�ŭ for���� �ݺ��Ͽ� ������� �̵��� �� ���� ����� ����Ѵ�.
			���� ����� ���� ����Ʈ�� ����, count�� 1 ���ҽ�Ų��.
			�׸��� for���� �̿��� ���� ������� ��ȣ�� ����Ѵ�
		3�� ���� �Ǹ� Ż���� �� �ִ� ������ �̸��� for���� ���� ����� �� ��Ż��!���̶�� ����Ѵ�.
		���������� n^2�� ������ ������, ������ �ٹٲް� tab�� �̿��Ͽ� ��� ����� �������� �ø����� �ߴ�.
������ �˰��� : ������Ʈ#6�� �˰����� ����
		https://yeolco.tistory.com/64 : ������ ������ ��� ����� �˱� ���� �����ߴ�.(���� ���� �Լ�)
		https://www.clien.net/service/board/kin/2809795 : �迭 �� ĭ�� ���ڿ��� ���� �� �ִ��� �˱� ���� �����ߴ�
		https://docs.microsoft.com/ko-kr/cpp/error-messages/tool-errors/linker-tools-error-lnk2019?f1url=%3FappId%3DDev16IDEF1%26l%3DKO-KR%26k%3Dk(LNK2019)%26rd%3Dtrue&view=msvc-160 
		: ���α׷� �����ϸ鼭 ������ �߻��� �����ߴ�.
������ �� ���� : ����
*/

/*
#include<stdio.h>
#include<stdlib.h>//rand()�Լ��� ����ִ� ���̺귯��
#include<time.h>//time()�Լ��� ����ִ� ���̺귯��

typedef struct
{
	int num;
	char name[64];
	struct Person* link;
} Person;

typedef struct
{
	struct Person* start;
	struct Person* end;
	int count;
}Head;

void input(Head* head, int number, char* str)
{
	Person* start = head->start;
	Person* end = head->end;
	Person* person = (Person*)malloc(sizeof(Person));
	
	//person->llink = head->end;
	
	person->num = number;
	
	for (int i = 0; i < 10; i++)
	{
		person->name[i] = str[i];
	}
	person->link = NULL;
	
	if (head->count == 0)
		head->start = person;

	if(head->count >0)
		end->link = person;
	//printf("������� ������");
	head->end = person;
	//printf("������� ������");
	head->count++;
	//printf("������� ������");

	start = head->start;
	end = head->end;
	
	//printf("%d %s %d\n", person->num, person->name, head->count);

	printf("\nLinked List : ");
	for (int i = 0; i < head->count; i++)
	{
		//printf("for������� ������");

		if (i == head->count-1)
		{
			//printf("������� ������");

			printf("%d %s", start->num, start->name);
		}
		else
		{
			//printf("else������� ������");

			printf("%d %s / ", start->num, start->name);
		}
		if (start->link != NULL)
			start = start->link;
	}
}


void left(Head* head)
{
	//������ ������. �ɸ� ����� ���� ��
	//head.start���� ����, 1~9������ ������ ���� �̴´�
	//������ ��ŭ �̵�(for���� ���� �̵��Ѵ�)
	//������ ���� ������(head.start�� �� ����� rlink, end�� llink�� �缳��
	//count�� �ϳ� ���δ�
	//count�� ����ŭ for���� ���鼭 ����Ʈ ���
	int random = rand() % 9 + 1;
	Person* leftPerson = head->start;
	printf("\n���� ���� : %d", random);
	//printf("\n�����ϴ� ��� : %d", leftPerson->num);
	for (int i = 0; i < random; i++)
	{
		head->end = leftPerson->link;
		leftPerson = leftPerson->link;
		//printf("\n�پ� �Ѵ� ��� %d", leftPerson->num);
	}
	printf("\n\t���� ��� : %d\n", leftPerson->num);
	head->start = leftPerson->link;
	//head->end = leftPerson->link;
	head->count--;
	//printf("���� count : %d\n", head->count);
	Person* startNode = head->start;
	Person* endNode = head->end;
	//startNode->llink = endNode;
	endNode->link = startNode;

	printf("���� ����� : ");
	for (int i = 0; i < head->count; i++)
	{
		printf("%d ", startNode->num);
		startNode = startNode->link;
	}

}




int main(void)
{
	srand(time(NULL));
	Head head = { NULL, NULL, 0 };
	Person* head_end;
	Person* head_start;
	printf("�����Ѵ�\n");
	//Person* people[11];
	//Person person = { 1, "hana", NULL };
	//head.start = &person;
	//head.end = &person;
	//head.count = 1;

	input(&head, 1, "hana");
	input(&head, 2, "dul");
	input(&head, 3, "set");
	input(&head, 4, "net");
	input(&head, 5, "dasut");
	input(&head, 6, "yusut");
	input(&head, 7, "ilgob");
	input(&head, 8, "yadul");
	input(&head, 9, "ahob");
	input(&head, 10, "ten");
	input(&head, 11, "elev");
	
	head_end = head.end;
	head_start = head.start;
	head_end->link = head.start;
	//��������Ʈ �ϼ�


	while (head.count > 3)
	{
		left(&head);
	}

	head_start = head.start;
	printf("\n\n\t");
	for (int i = 0; i < 3; i++)
	{
		printf("%s ", head_start->name);
		head_start = head_start->link;
	}
	printf("Ż��!");
	//printf("��");

	

}
*/


/*
	//9�� ������ 0~8������ ���� �������� ���´�
	//srand(time(NULL))�� ���� ����ؾ� �Ѵ�
	srand(time(NULL));
	int random = 0;//������ ���� ����
	for (int i = 0; i < 10; i++)
	{
		random = rand() % 9;//���� ����
		//rand�� 0~32767������ ������ ����
		//�̸� ���ϴ� ����ŭ�� ������ �ϰ� �ʹٸ� ������ ��� �̿�

		printf("%d\n", random);//���� ���
	}
*/