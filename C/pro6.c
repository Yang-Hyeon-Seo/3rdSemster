/*
������Ʈ�� : Project#6 : Doubly Circular Linked List for Escaping Island
�ۼ��� : 2015442 ������(�濵�к�)
�ۼ��� : 2021.05.27(��)
����� : C���
�˰��� ���� :
		11���� ������� ���ε����� �ҽ����߰�, 3�� ���� Ż���� �� �ִ� ��ȸ�� ���� ����̱�� ��ȣ�� �̾� �Ѹ� �����ϰ�, 3���� ���� ������ �ݺ��ϱ�� �ߴ�.
		��������� ����� ���� Linked List�� ���� ������ ���� ������ ����̱⸦ �ݺ��Ѵ�.
		Linked List�� ����� ���� Person�̶�� �̸��� ����ü�� ��带 ����� �����ϰ�, ����ü �ӿ��� ���� ��带 ����Ű�� llink, int�� ���� num(��ȣ), ���ڿ� name(�̸�), 
		������ ��带 ����Ű�� rlink�� �ʿ��ϴ�. �׸��� ���� �̴� ù��° ����� ���� ǥ���ϱ� ���� Head����ü�� �����.
		Head����ü �ȿ��� ���� ��带 ����Ű�� Person�� �����ͺ��� start, end�� ����Ʈ ���� ����� ���� �ǹ��ϴ� int�� ���� count�� �ʿ��ϴ�.
		���� �̱� ���� ������ �����ϱ� ���� <stdlib.h>�� <time.h>�� include�Ѵ�
		
		Main
		���ึ�� �ٸ� ����� ��� ���� srand(time(NULL));�� �����Ѵ�
		���� ���� ������ ���������� ����ϰ�, Head����ü ���� head�� Person�� �����ͺ��� head_end, head_start�� ������ ���� head�� end�� start�� ����Ű���� �Ѵ�. 
		���ݺ��� �߰��� 11���� ������� ��ȣ�� �̸��� ������� ��1-hana, 2-dul, 3-set, 4-net, 5-dasut, 6-yusut, 7-ilgob, 8-yadul, 9-ahob, 10-ten, 11-elev���̴�.
		���� ���� ù��° ��带 person�̶�� ������ ����, ���� ����� ��, �� ��尡 �������� �ʱ� ������ {NULL, 1, ��hana��, NULL}�� �ʱ�ȭ�Ѵ�. 
		ù��° ��尡 �����Ǿ��� ������ �̸� ����Ű�� Head����ü ���� head�� start�� end�� person�� ����Ű���� �ϰ�, count�� 1�� �����Ѵ�.
		����Ʈ�� ��带 �߰������� ����Ʈ�� ��带 ����Ѵ�. 
		���� �ι�° �����ʹ� input�Լ��� Ȱ���Ͽ� ����Ʈ�� �����.
		->	input 
			����Ʈ�� ���۰� ��, ������ ����ϱ� ������ head�� call-by-reference�������� �ް�, ��ȣ�� �̸��� ���ڷ� �޴´�.
			���� ���� �� ��带 ����Ű�� Person�� �����ͺ��� start�� end�� �����ϰ�, Person�� �����Ҵ� �ޱ� ���� malloc�� ���, person���� �̸� �޴´�.
			���� ������ person�� ���� ��ũ(llink)�� ������ ����� head->end�� ����Ŵ���� ���� ���� ����ǰ�, num�� name���� ���ڷ� ���� ���� �ִ´�. 
			name�� ���ڿ��̱� ������ �̸� �ޱ� ���� for���� �̿��Ѵ�.
			���� ���� �����ϴ� rlink���� ���߿� ��������� ���̱� ������ NULL�� �־��ش�.
			����Ʈ�� ������ ��带 ����Ű�� end�� ���ο� ���� �����Ű�� ���� rlink�� Ȱ��, rlink�� person�� �ְ�, ������ ��尡 ����Ǿ��� ������
			head�� end�� person���� �ٲ��ָ鼭 count�� 1 ������Ų��
			��尡 �߰��Ǿ��� ������ ���� ����Ʈ ���� ��� ���(��� ������� ��ȣ�� �̸�)�� ����Ѵ�.
			�̸� ���� for���� ����Ѵ�. ����ȣ ���ڡ��� ���·� ����ϰ�, ������� ��/���� ����, ������ ��� �ڿ��� ��/���� ���� �ʴ´�.
		11���� ������� ��� ����Ʈ�� �߰��� �� head.end�� head.start�� head_end�� head_start�� ����Ű���� �� �� 
		head_end�� rlink���� head.start, head_start���� head.end�� ����Ű���� �Ͽ� ���������� ���� ����Ʈ�� �����.

		head.count�� 3�� �Ǳ� ������ �ݺ��Ͽ� ����̱⸦ ������ ���� ����� �����Ѵ�.
		while���� Ȱ���Ͽ� 11���� ������� ��� �ִ� ���� ����� ��ũ�� ����Ʈ �ȿ� 3�� ���� ������ left�Լ��� �ݺ��Ѵ�
		->	left�Լ�
			����Ʈ�� ���۰� ���� ���� ������ Ȱ���ϱ� ���� head�� ���ڷ� �޴´�
			�������� ���� �̾� ����Ʈ�� ������ �������� ���� ���ڸ�ŭ �̵��Ͽ� �ɸ� ����� ������.
			����� ������ �����ϴ� rand()�Լ��� �̿��ϰ�, 1~9 ������ ���ڸ� ��� ���� �̸� 9�� ���� �������� +�� ���Ѵ�.
			���� ����� �ǹ��ϴ� Person�� �����ͺ��� leftPerson�� ����, head�� start�� ����Ų��.
			���� ���ڸ� ����ϰ�, ���� ���ڸ�ŭ for���� �ݺ��ϸ� rlink�� ���� ������� �̵��� �� ���� ����� ����Ѵ�.
			���� ����� ���� ����Ʈ�� ����, count�� 1 ���ҽ�Ų��.
			����Ʈ�� ������ �� head�� start���� leftPerson�� ������ ���(rlink), end���� leftPerson�� ���� ���(llink)�� �����Ѵ�. 
			�׸��� start�� ����Ű�� ù��° ���(startNode)�� llink�� end�� ����Ű�� ������ ���(endNode)�� ����Ű��, 
			������ ����� rlink�� ù��° ��带 ����Ŵ���� ��������Ʈ�� �����ȴ�
			�׸��� for���� �̿��� ���� ������� ��ȣ�� ����Ѵ�
		3�� ���� �Ǹ� Ż���� �� �ִ� ������ �̸��� for���� ���� ����� �� ��Ż��!���̶�� ����Ѵ�.
		
		���� ���������� ����Ѵ�.
		�켱 ���������� ����Ѵٴ� ���� �˸��� ���� �������⡱�̶�� ����� �� �� ������ �� ����� �����ϰ� �ٽ� ����Ʈ�� �����Ѵ�.
		�̹� person�� ���ǵǾ� �ֱ� ������ person�� ����� head�� ����Ű�� ��带 �ٲ��ְ� ����� �Ѵ�. �� ���� 2��°���� 11��° ������� 
		input�Լ��� ���� ����Ʈ�� �����ϰ�, ����Ʈ�� ���۰� �������� ������ ���� ����Ʈ�� �����.(�������� ����� ����)
		while���� Ȱ���Ͽ� 11���� ������� ��� �ִ� ���� ����� ��ũ�� ����Ʈ �ȿ� 3�� ���� ������ leftReverse�Լ��� �ݺ��Ѵ�
		->	leftReverse�Լ�
			����Ʈ�� ���۰� ���� ���� ������ Ȱ���ϱ� ���� head�� ���ڷ� �޴´�
			�������� ���� �̾� ����Ʈ�� ���� �������� ���� ���ڸ�ŭ �̵��Ͽ� �ɸ� ����� ������.
			����� ������ �����ϴ� rand()�Լ��� �̿��ϰ�, 1~9 ������ ���ڸ� ��� ���� �̸� 9�� ���� �������� +�� ���Ѵ�.
			���� ����� �ǹ��ϴ� Person�� �����ͺ��� leftPerson�� ����, head�� start�� ����Ų��.
			���� ���ڸ� ����ϰ�, ���� ���ڸ�ŭ for���� �ݺ��ϸ� llink�� ���� ������� �̵��� �� ���� ����� ����Ѵ�.(���������� �̵��Ѵ�)
			���� ����� ���� ����Ʈ�� ����, count�� 1 ���ҽ�Ų��.
			����Ʈ�� ������ �� head�� start���� leftPerson�� ���� ���(llink), end���� leftPerson�� ������ ���(rlink)�� �����Ѵ�. 
			�׸��� start�� ����Ű�� ù��° ���(startNode)�� rlink�� end�� ����Ű�� ������ ���(endNode)�� ����Ű��, 
			������ ����� llink�� ù��° ��带 ����Ŵ���� ��������Ʈ�� �����ȴ�
			�׸��� for���� �̿��� ���� ������� ��ȣ�� ����Ѵ�
		3�� ���� �Ǹ� Ż���� �� �ִ� ������ �̸��� for���� ���� ����� �� ��Ż��!���̶�� ����Ѵ�.
		���������� n^2�� ������ ������, ������ �ٹٲް� tab�� �̿��Ͽ� ��� ����� �������� �ø����� �ߴ�.


������ �˰��� : https://yeolco.tistory.com/64 : ������ ������ ��� ����� �˱� ���� �����ߴ�.(���� ���� �Լ�)
				https://www.clien.net/service/board/kin/2809795 : �迭 �� ĭ�� ���ڿ��� ���� �� �ִ��� �˱� ���� �����ߴ�
				�� �ۿ� ������ �˰����� ����

������ �� ���� : ����

*/

/*
#include<stdio.h>
#include<stdlib.h>//rand()�Լ��� ����ִ� ���̺귯��
#include<time.h>//time()�Լ��� ����ִ� ���̺귯��

typedef struct
{
	struct Person* llink;
	int num;
	char name[64];
	struct Person* rlink;
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
	person->llink = head->end;
	for (int i = 0; i < 10; i++)
	{
		person->name[i] = str[i];
	}
	person->num = number;
	person->rlink = NULL;
	end->rlink = person;
	head->end = person;
	head->count++;

	
	//printf("%d %s %d\n", person->num, person->name, head->count);
	printf("\nLinked List : ");
	for (int i = 0; i < head->count; i++)
	{
		if (i == (head->count)-1)
		{
			printf("%d %s", start->num, start->name);
		}
		else
		{
			printf("%d %s / ", start->num, start->name);
		}
		if(start->rlink != NULL)
			start = start->rlink;
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
		leftPerson = leftPerson->rlink;
		//printf("\n�پ� �Ѵ� ��� %d", leftPerson->num);
	}
	printf("\n\t���� ��� : %d\n", leftPerson->num);
	head->start = leftPerson->rlink;
	head->end = leftPerson->llink;
	head->count--;
	//printf("���� count : %d\n", head->count);
	Person* startNode = head->start;
	Person* endNode = head->end;
	startNode->llink = endNode;
	endNode->rlink = startNode;

	printf("���� ����� : ");
	for (int i = 0; i < head->count; i++)
	{
		printf("%d ", startNode->num);
		startNode = startNode->rlink;
	}

}


void leftReverse(Head* head)
{
	//left�Լ����� �̵� ����, head.start�� llink, end�� rlink,
	//for���� ���� ����Ʈ �ϴ� ���⵵ �ݴ�

	int random = rand() % 9 + 1;
	Person* leftPerson = head->start;
	printf("\n���� ���� : %d", random);
	//printf("\n�����ϴ� ��� : %d", leftPerson->num);
	for (int i = 0; i < random; i++)
	{
		leftPerson = leftPerson->llink;
		//printf("\n�پ� �Ѵ� ��� %d", leftPerson->num);
	}
	printf("\n\t���� ��� : %d\n", leftPerson->num);
	head->start = leftPerson->llink;
	head->end = leftPerson->rlink;
	head->count--;
	//printf("���� count : %d\n", head->count);
	Person* startNode = head->start;
	Person* endNode = head->end;
	startNode->rlink = endNode;
	endNode->llink = startNode;

	printf("���� ����� : ");
	for (int i = 0; i < head->count; i++)
	{
		printf("%d ", startNode->num);
		startNode = startNode->llink;
	}

}


int main(void)
{
	srand(time(NULL));

	printf("������\n");
	Head head;
	Person* head_end;
	Person* head_start;
	Person person = { NULL, 1, "hana", NULL };
	head.start = &person;
	head.end = &person;
	head.count = 1;

	head_start = head.start;
	printf("\nLinked List : %d %s", head_start->num, head_start->name);

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
	head_end->rlink = head.start;
	head_start->llink = head.end;


	while (head.count > 3)
	{
		left(&head);
	}

	head_start = head.start;
	printf("\n\n\t");
	for (int i = 0; i < 3; i++)
	{
		printf("%s ", head_start->name);
		head_start = head_start->rlink;
	}
	printf("Ż��!");
	
	//�ٽ� ����Ʈ �����(Reverse)
	printf("\n\n������\n");

	
	//Person person = { NULL, 1, "hana", NULL };
	person.llink = NULL;
	person.num = 1;
	char str[] = "hana";
	for (int i = 0; i < 10; i++)
	{
		person.name[i] = str[i];
	}
	//person.name = "hana";
	person.rlink = "NULL";
	head.start = &person;
	head.end = &person;
	head.count = 1;

	head_start = head.start;
	printf("\nLinked List : %d %s", head_start->num, head_start->name);

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
	head_end->rlink = head.start;
	head_start->llink = head.end;


	while (head.count > 3)
	{
		leftReverse(&head);
	}

	head_start = head.start;
	printf("\n\n\t");
	for (int i = 0; i < 3; i++)
	{
		printf("%s ", head_start->name);
		head_start = head_start->rlink;
	}
	printf("Ż��!");

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