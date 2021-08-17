/*
프로젝트명 : Project#5 : Singly Circular Linked List for Escaping Island
작성자 : 2015442 양현서(경영학부)
작성일 : 2021.05.27(목)
사용언어 : C언어
알고리즘 설명 : 
		11명의 사람들이 무인도에서 불시착했고, 3명만 섬을 탈출할 수 있는 기회가 생겨 제비뽑기로 번호를 뽑아 한명씩 제외하고, 3명이 남을 때까지 반복하기로 했다.
		한 방향으로 돌아가는 Linked List를 통해 세명이 남을 때까지 제비뽑기를 반복한다.
		Linked List를 만들기 위해 Person이라는 이름의 구조체로 노드를 만들어 연결하고, 구조체 속에는 int형 num(번호), 문자열 name(이름), 
		다음 노드를 가리키는 Person형 포인터변수  link가 필요하다. 그리고 제비를 뽑는 첫번째 사람과 끝을 표시하기 위한 Head구조체를 만든다.
		Head 구조체 안에는 시작 노드를 가리키는 Person형 포인터변수 start, end와 리스트 안의 노드의 수를 의미하는 int형 변수 count가 필요하다.
		제비를 뽑기 위한 난수를 생성하기 위해 <stdlib.h>와 <time.h>를 include한다

		Main
		실행마다 다른 결과를 얻기 위해 srand(time(NULL));를 선언한다
		아직 노드가 존재하지 않기 때문에 Circular Linked List를 가리키는 Head를 {NULL, NULL, 0}으로 초기화하고, head의 start와 end를 가리키기 위한 
		Person형 포인터 변수 head_start와 head_end를 선언한다.
		11명의 사람들의 번호와 이름은 순서대로 “1-hana, 2-dul, 3-set, 4-net, 5-dasut, 6-yusut, 7-ilgob, 8-yadul, 9-ahob, 10-ten, 11-elev”로 
		input함수를 통해 Circular Linked List를 생성한다.
		->	Input함수
			Linked List를 가리키는 head와 사람의 번호, 이름을 인자로 받는다.
			시작과 끝을 가리키는 Person형 포인터변수를 선언, Person노드를 생성하기 위해 malloc을 통한 동적할당을 받고, person 변수로 이를 가리킨다.
			Person이 가리키는 노드 안에 차례대로 번호, 이름을 저장한 후
			첫번째 노드라면, head의 start가 person을 가리키도록 하고, 
			그 이후 노드라면 head의 end가 person을 가리키도록 하여 노드들을 연결한다.
			그 이후 head의 count를 1 증가시킨다.
			지금까지 Linked List에 연결된 사람들을 확인하기 위해 for문을 이용하여 리스트의 모든 사람들의 번호와 이름을 출력한다.
			출력할 때는 번호 숫자”의 형태로 출력하고, 사람마다 “/”로 구분, 마지막 사람 뒤에는 “/”를 넣지 않는다.
		11명의 사람들을 모두 리스트에 추가한 후 head.end와 head.start를 head_end와 head_start가 가리키도록 한 후 head_end가 head.start를 가리키도록 하여 최종적으로 원형 리스트를 만든다.

		head.count가 3이 되기 전까지 반복하여 제비뽑기를 수행해 남는 사람을 결정한다.
		->	left함수를 이용한다.
			리스트의 시작과 끝에 대한 정보를 활용하기 위해 head를 인자로 받는다
			랜덤으로 제비를 뽑아 리스트가 연결된 방향으로 뽑힌 숫자만큼 이동하여 걸린 사람은 빠진다.
			제비는 난수를 생성하는 rand()함수를 이용하고, 1~9 사이의 숫자를 얻기 위해 이를 9로 나눈 나머지에 +을 더한다.
			뽑힌 사람을 의미하는 Person형 포인터변수 leftPerson을 생성, head의 start를 가리킨다.
			뽑힌 숫자를 출력하고, 뽑힌 숫자만큼 for문을 반복하여 사람들을 이동한 후 뽑힌 사람을 출력한다.
			뽑힌 사람을 빼고 리스트를 연결, count를 1 감소시킨다.
			그리고 for문을 이용해 남은 사람들의 번호를 출력한다
		3명만 남게 되면 탈출할 수 있는 세명의 이름을 for문을 통해 출력한 후 “탈출!”이라고 출력한다.
		최종적으로 n^2의 성능을 가졌고, 적절한 줄바꿈과 tab을 이용하여 출력 결과의 가독성을 늘리도록 했다.
참고한 알고리즘 : 프로젝트#6의 알고리즘을 참고
		https://yeolco.tistory.com/64 : 랜덤한 정수를 얻는 방법을 알기 위해 참고했다.(난수 생성 함수)
		https://www.clien.net/service/board/kin/2809795 : 배열 한 칸에 문자열을 넣을 수 있는지 알기 위해 참고했다
		https://docs.microsoft.com/ko-kr/cpp/error-messages/tool-errors/linker-tools-error-lnk2019?f1url=%3FappId%3DDev16IDEF1%26l%3DKO-KR%26k%3Dk(LNK2019)%26rd%3Dtrue&view=msvc-160 
		: 프로그램 실행하면서 오류가 발생해 참고했다.
도움을 준 동료 : 없다
*/

/*
#include<stdio.h>
#include<stdlib.h>//rand()함수가 들어있는 라이브러리
#include<time.h>//time()함수가 들어있는 라이브러리

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
	//printf("여기까진 괜찮아");
	head->end = person;
	//printf("여기까진 괜찮아");
	head->count++;
	//printf("여기까진 괜찮아");

	start = head->start;
	end = head->end;
	
	//printf("%d %s %d\n", person->num, person->name, head->count);

	printf("\nLinked List : ");
	for (int i = 0; i < head->count; i++)
	{
		//printf("for여기까진 괜찮아");

		if (i == head->count-1)
		{
			//printf("여기까진 괜찮아");

			printf("%d %s", start->num, start->name);
		}
		else
		{
			//printf("else여기까진 괜찮아");

			printf("%d %s / ", start->num, start->name);
		}
		if (start->link != NULL)
			start = start->link;
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
		head->end = leftPerson->link;
		leftPerson = leftPerson->link;
		//printf("\n뛰어 넘는 사람 %d", leftPerson->num);
	}
	printf("\n\t뽑힌 사람 : %d\n", leftPerson->num);
	head->start = leftPerson->link;
	//head->end = leftPerson->link;
	head->count--;
	//printf("현재 count : %d\n", head->count);
	Person* startNode = head->start;
	Person* endNode = head->end;
	//startNode->llink = endNode;
	endNode->link = startNode;

	printf("남은 사람들 : ");
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
	printf("시작한다\n");
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
	//원형리스트 완성


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
	printf("탈출!");
	//printf("끝");

	

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