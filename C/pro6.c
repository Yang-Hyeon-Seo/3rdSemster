/*
프로젝트명 : Project#6 : Doubly Circular Linked List for Escaping Island
작성자 : 2015442 양현서(경영학부)
작성일 : 2021.05.27(목)
사용언어 : C언어
알고리즘 설명 :
		11명의 사람들이 무인도에서 불시착했고, 3명만 섬을 탈출할 수 있는 기회가 생겨 제비뽑기로 번호를 뽑아 한명씩 제외하고, 3명이 남을 때까지 반복하기로 했다.
		양방향으로 연결된 원형 Linked List를 통해 세명이 남을 때까지 제비뽑기를 반복한다.
		Linked List를 만들기 위해 Person이라는 이름의 구조체로 노드를 만들어 연결하고, 구조체 속에는 왼쪽 노드를 가리키는 llink, int형 변수 num(번호), 문자열 name(이름), 
		오른쪽 노드를 가리키는 rlink가 필요하다. 그리고 제비를 뽑는 첫번째 사람과 끝을 표시하기 위한 Head구조체를 만든다.
		Head구조체 안에는 시작 노드를 가리키는 Person형 포인터변수 start, end와 리스트 안의 노드의 수를 의미하는 int형 변수 count가 필요하다.
		제비를 뽑기 위한 난수를 생성하기 위해 <stdlib.h>와 <time.h>를 include한다
		
		Main
		실행마다 다른 결과를 얻기 위해 srand(time(NULL));를 선언한다
		현재 진행 방향이 순방향임을 출력하고, Head구조체 변수 head와 Person형 포인터변수 head_end, head_start를 생성해 추후 head의 end와 start를 가리키도록 한다. 
		지금부터 추가할 11명의 사람들의 번호와 이름은 순서대로 “1-hana, 2-dul, 3-set, 4-net, 5-dasut, 6-yusut, 7-ilgob, 8-yadul, 9-ahob, 10-ten, 11-elev”이다.
		가장 먼저 첫번째 노드를 person이라는 변수로 생성, 아직 연결될 앞, 뒤 노드가 존재하지 않기 때문에 {NULL, 1, “hana”, NULL}로 초기화한다. 
		첫번째 노드가 생성되었기 때문에 이를 가리키는 Head구조체 변수 head의 start와 end가 person을 가리키도록 하고, count를 1로 설정한다.
		리스트의 노드를 추가했으니 리스트의 노드를 출력한다. 
		이후 두번째 노드부터는 input함수를 활용하여 리스트를 만든다.
		->	input 
			리스트의 시작과 끝, 개수를 사용하기 때문에 head를 call-by-reference형식으로 받고, 번호와 이름을 인자로 받는다.
			시작 노드와 끝 노드를 가리키는 Person형 포인터변수 start와 end를 선언하고, Person을 동적할당 받기 위해 malloc을 사용, person으로 이를 받는다.
			새로 생성된 person의 왼쪽 링크(llink)는 이전의 노드인 head->end를 가리킴으로 이전 노드와 연결되고, num과 name에는 인자로 받은 값을 넣는다. 
			name은 문자열이기 때문에 이를 받기 위해 for문을 이용한다.
			다음 노드로 연결하는 rlink에는 나중에 연결시켜줄 것이기 때문에 NULL을 넣어준다.
			리스트의 마지막 노드를 가리키는 end를 새로운 노드와 연결시키기 위해 rlink를 활용, rlink에 person을 넣고, 마지막 노드가 변경되었기 때문에
			head의 end를 person으로 바꿔주면서 count를 1 증가시킨다
			노드가 추가되었기 때문에 현재 리스트 안의 모든 노드(모든 사람들의 번호와 이름)를 출력한다.
			이를 위해 for문을 사용한다. “번호 숫자”의 형태로 출력하고, 사람마다 “/”로 구분, 마지막 사람 뒤에는 “/”를 넣지 않는다.
		11명의 사람들을 모두 리스트에 추가한 후 head.end와 head.start를 head_end와 head_start가 가리키도록 한 후 
		head_end의 rlink에는 head.start, head_start에는 head.end를 가리키도록 하여 최종적으로 원형 리스트를 만든다.

		head.count가 3이 되기 전까지 반복하여 제비뽑기를 수행해 남는 사람을 결정한다.
		while문을 활용하여 11명의 사람들이 모두 있는 원형 양방향 링크드 리스트 안에 3명만 남을 때까지 left함수를 반복한다
		->	left함수
			리스트의 시작과 끝에 대한 정보를 활용하기 위해 head를 인자로 받는다
			랜덤으로 제비를 뽑아 리스트의 오른쪽 방향으로 뽑힌 숫자만큼 이동하여 걸린 사람은 빠진다.
			제비는 난수를 생성하는 rand()함수를 이용하고, 1~9 사이의 숫자를 얻기 위해 이를 9로 나눈 나머지에 +을 더한다.
			뽑힌 사람을 의미하는 Person형 포인터변수 leftPerson을 생성, head의 start를 가리킨다.
			뽑힌 숫자를 출력하고, 뽑힌 숫자만큼 for문을 반복하며 rlink를 따라 사람들을 이동한 후 뽑힌 사람을 출력한다.
			뽑힌 사람을 빼고 리스트를 연결, count를 1 감소시킨다.
			리스트를 연결할 때 head의 start에는 leftPerson의 오른쪽 노드(rlink), end에는 leftPerson의 왼쪽 노드(llink)를 대입한다. 
			그리고 start가 가리키는 첫번째 노드(startNode)의 llink가 end가 가리키는 마지막 노드(endNode)를 가리키고, 
			마지막 노드의 rlink가 첫번째 노드를 가리킴으로 원형리스트가 유지된다
			그리고 for문을 이용해 남은 사람들의 번호를 출력한다
		3명만 남게 되면 탈출할 수 있는 세명의 이름을 for문을 통해 출력한 후 “탈출!”이라고 출력한다.
		
		이제 역방향으로 출력한다.
		우선 역방향으로 출력한다는 것을 알리기 위해 “역방향”이라는 출력을 한 후 위에서 한 방법과 동일하게 다시 리스트를 생성한다.
		이미 person이 정의되어 있기 때문에 person의 값들과 head가 가리키는 노드를 바꿔주고 출력을 한다. 그 다음 2번째부터 11번째 사람까지 
		input함수를 통해 리스트를 생성하고, 리스트의 시작과 마지막을 연결해 원형 리스트로 만든다.(순방향의 방법과 동일)
		while문을 활용하여 11명의 사람들이 모두 있는 원형 양방향 링크드 리스트 안에 3명만 남을 때까지 leftReverse함수를 반복한다
		->	leftReverse함수
			리스트의 시작과 끝에 대한 정보를 활용하기 위해 head를 인자로 받는다
			랜덤으로 제비를 뽑아 리스트의 왼쪽 방향으로 뽑힌 숫자만큼 이동하여 걸린 사람은 빠진다.
			제비는 난수를 생성하는 rand()함수를 이용하고, 1~9 사이의 숫자를 얻기 위해 이를 9로 나눈 나머지에 +을 더한다.
			뽑힌 사람을 의미하는 Person형 포인터변수 leftPerson을 생성, head의 start를 가리킨다.
			뽑힌 숫자를 출력하고, 뽑힌 숫자만큼 for문을 반복하며 llink를 따라 사람들을 이동한 후 뽑힌 사람을 출력한다.(역방향으로 이동한다)
			뽑힌 사람을 빼고 리스트를 연결, count를 1 감소시킨다.
			리스트를 연결할 때 head의 start에는 leftPerson의 왼쪽 노드(llink), end에는 leftPerson의 오른쪽 노드(rlink)를 대입한다. 
			그리고 start가 가리키는 첫번째 노드(startNode)의 rlink가 end가 가리키는 마지막 노드(endNode)를 가리키고, 
			마지막 노드의 llink가 첫번째 노드를 가리킴으로 원형리스트가 유지된다
			그리고 for문을 이용해 남은 사람들의 번호를 출력한다
		3명만 남게 되면 탈출할 수 있는 세명의 이름을 for문을 통해 출력한 후 “탈출!”이라고 출력한다.
		최종적으로 n^2의 성능을 가졌고, 적절한 줄바꿈과 tab을 이용하여 출력 결과의 가독성을 늘리도록 했다.


참고한 알고리즘 : https://yeolco.tistory.com/64 : 랜덤한 정수를 얻는 방법을 알기 위해 참고했다.(난수 생성 함수)
				https://www.clien.net/service/board/kin/2809795 : 배열 한 칸에 문자열을 넣을 수 있는지 알기 위해 참고했다
				이 밖에 참고한 알고리즘은 없다

도움을 준 동료 : 없다

*/

/*
#include<stdio.h>
#include<stdlib.h>//rand()함수가 들어있는 라이브러리
#include<time.h>//time()함수가 들어있는 라이브러리

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
	//랜덤을 돌린다. 걸린 사람이 남는 것
	//head.start에서 시작, 1~9사이의 랜덤한 수를 뽑는다
	//랜덤한 만큼 이동(for문을 통해 이동한다)
	//도착한 노드는 빠진다(head.start는 이 노드의 rlink, end는 llink로 재설정
	//count도 하나 줄인다
	//count의 수만큼 for문을 돌면서 리스트 출력
	int random = rand() % 9 + 1;
	Person* leftPerson = head->start;
	printf("\n뽑힌 제비 : %d", random);
	//printf("\n시작하는 사람 : %d", leftPerson->num);
	for (int i = 0; i < random; i++)
	{
		leftPerson = leftPerson->rlink;
		//printf("\n뛰어 넘는 사람 %d", leftPerson->num);
	}
	printf("\n\t뽑힌 사람 : %d\n", leftPerson->num);
	head->start = leftPerson->rlink;
	head->end = leftPerson->llink;
	head->count--;
	//printf("현재 count : %d\n", head->count);
	Person* startNode = head->start;
	Person* endNode = head->end;
	startNode->llink = endNode;
	endNode->rlink = startNode;

	printf("남은 사람들 : ");
	for (int i = 0; i < head->count; i++)
	{
		printf("%d ", startNode->num);
		startNode = startNode->rlink;
	}

}


void leftReverse(Head* head)
{
	//left함수에서 이동 방향, head.start는 llink, end는 rlink,
	//for문을 통해 프린트 하는 방향도 반대

	int random = rand() % 9 + 1;
	Person* leftPerson = head->start;
	printf("\n뽑힌 제비 : %d", random);
	//printf("\n시작하는 사람 : %d", leftPerson->num);
	for (int i = 0; i < random; i++)
	{
		leftPerson = leftPerson->llink;
		//printf("\n뛰어 넘는 사람 %d", leftPerson->num);
	}
	printf("\n\t뽑힌 사람 : %d\n", leftPerson->num);
	head->start = leftPerson->llink;
	head->end = leftPerson->rlink;
	head->count--;
	//printf("현재 count : %d\n", head->count);
	Person* startNode = head->start;
	Person* endNode = head->end;
	startNode->rlink = endNode;
	endNode->llink = startNode;

	printf("남은 사람들 : ");
	for (int i = 0; i < head->count; i++)
	{
		printf("%d ", startNode->num);
		startNode = startNode->llink;
	}

}


int main(void)
{
	srand(time(NULL));

	printf("순방향\n");
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
	printf("탈출!");
	
	//다시 리스트 만들기(Reverse)
	printf("\n\n역방향\n");

	
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
	printf("탈출!");

}
*/


/*
	//9로 나누면 0~8까지의 수가 랜덤으로 나온다
	//srand(time(NULL))를 같이 사용해야 한다
	srand(time(NULL));
	int random = 0;//정수형 변수 선언
	for (int i = 0; i < 10; i++)
	{
		random = rand() % 9;//난수 생성
		//rand는 0~32767사이의 난수를 생성
		//이를 원하는 수만큼만 나오게 하고 싶다면 나머지 계산 이용

		printf("%d\n", random);//난수 출력
	}
*/