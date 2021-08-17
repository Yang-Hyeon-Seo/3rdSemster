/*
프로젝트명 : Project#2 : Selection Sort using Linked List
작성자 : 2015442 양현서(경영학부)
작성일 : 2021.05.26(수)
사용언어 : C언어

알고리즘 설명 :
		
		양방향 Linked List(LList)를 구성하는 노드를 만들기 위한 Node구조체, Linked List의 첫 노드를 가리킬 Head구조체를 생성한다.
		Node구조체는 양방향 리스트를 구성하기 때문에 자신의 값을 저장할 int형 data와 왼쪽, 오른쪽 방향의 Node를 가리킬 Node포인터 llink와 rlink가 필요하다
		Head구조체는 Linked List의 처음과 끝, 그리고 사이의 개수를 저장해야 하기 때문에 Node포인터 start, end와 int형 count가 필요하다.

		Main
		Lined List의 노드를 가리킬 Node형 포인터 tmp, Linked List를 가리킬 Head구조체 변수LList를 선언한다.
		1)	10개의 입력을 받고, 입력을 받을 때마다 배열의 전체를 출력한다.
		->	배열에 원소 삽입을 위한 input함수
		 for문을 이용하며 10회를 반복하며 10개의 정수를 입력 받아 리스트에 추가한다
		 for문을 시작함과 동시에 Node구조체의 크기만큼 동적할당을 받고, 이를 Node형 포인터변수 node가 가리킨다. 
		 만약 첫번째 입력인 경우
			새로 입력된 노드의 좌/우에 아무런 노드가 존재하지 않기 때문에 llink와 rlink에 NULL을 저장, head(LLink)의 start와 end가 모두 node를 가리키도록 하고, count를 1로 만든다
		 그 이후부터는 
			Node형 포인터변수 tmp가 head의 end(Linked List의 마지막 노드)를 가리키도록 한 후 마지막 노드(tmp)의 rlink가 새로운 node를 가리키도록 한다.
			새로운 node의 llink는 이전의 node를 가리키고, rlink는 NULL을 가리키도록 한다.
			노드의 수가 늘어나기 때문에 count를 1 늘려준다.
		 입력을 받을 때마다 지금까지 입력 받은 모든 노드를 출력해야 하기 때문에 for문을 중첩하여 지금까지의 노드 수(count)만큼 반복하며 노드의 data값을 출력한다.
		2)	배열의 원소를 정렬한다
		->	tmp가 Linked List의 첫번째 노드를 가리킨다.
		->	(외부 for문)
		 for문을 9번 반복한다. 반복할 때마다 tmp가 가리키는 노드는 뒤로 하나씩 이동하여 마지막 9번째일 때 9번째 노드의 data값의 위치를 결정하면 10번째 노드의 위치는 
		 자동적으로 결정되기 때문에 9번만 반복한다
		->	(내부 for문)
		 외부 for문에서 제일 작은 노드를 가리키는 min과 min과 비교할 바로 다음 노드를 가리키는 min_compare변수를 설정한 후 tmp가 가리키는 노드부터 마지막 노드까지 
		 모든 노드를 확인하면서 tmp가 가리키는 위치(제일 첫번째 위치)에 와야 하는 data값을 찾아 tmp와 자리를 바꾼다.
		 for문을 돌면서 min이 min_compare보다 크면 min이 가리키는 노드를 min_compare로 바꿔준다.
		->	(다시 외부 for문)
		 만약 min이 tmp와 같은 노드를 가리킨다면 이미 제일 작은 노드가 제일 앞에 있다는 의미이지만, 그렇지 않다면 min이 가리키는 data값을 exc라는 int형 변수에 저장한 후 
		 tmp의 data값에 min의 data값을 저장하고, min의 data에 exc의 값을 넣어준다. 그 후 for문을 이용하여 모든 Linked List의 노드의 값을 출력한다.
		 만약 tmp가 마지막 노드가 아니라면 tmp를 오른쪽으로 한번 이동시킨다.

		 제일 첫번째 위치에 올 제일 작은 원소를 for문을 이용하여 배열 전체에서 찾는다. 제일 작은 원소를 제일 앞 위치로 옮기고 기존에 제일 앞에 있던 원소를 제일 작은 원소가 있던 자리로 옮긴다
	 	 배열의 첫번째 원소의 위치는 외부for문을 반복할수록 뒤로 이동하고, for문을 이용해 제일 작은 원소를 탐색하는 범위도 배열의 첫번째 원소부터 마지막 원소까지이기 때문에 
		 탐색하는 범위도 하나씩 줄어든다
		->	(외부 for문)
	 	 위를 배열의 길이만큼 for문을 반복하면서 내부 for문을 이용해 탐색할 배열의 제일 첫번째 원소결정해준다
		 배열의 첫번째 원소의 위치는 for문을 반복하면서 1씩 늘어나게 된다.
		3)	인덱스 9부터 0까지 원소들을 역순으로 출력한다
		->	역순으로 원소들을 출력하기 위한 printReverse함수
		->for문을 이용하여 tmp의 llink를 따라 Linked List의 왼쪽방향(역순)으로 모든 노드를 출력한다.


참고한 알고리즘 : 알고리즘 고안 시 이전 프로젝트의 알고리즘을 참고했고,
					코딩하면서 C언어를 공부하며 정리한 문법 노트를 참고,
					문법적으로 부족한 부분은 열혈 C프로그래밍 책을 읽으며 보완했습니다.
					코딩 오류가 많이 나서 검색이나 오류에 대한 설명을 찾아보았습니다.
					
도움을 준 동료 : 없다

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
		
		if (i == 0)//첫번째 노드 생성
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
		printf("\n정수를 입력하세요 : ");
		scanf_s("%d", &node->data);

		//원소를 하나 더한 후 리스트 모두 출력
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
	printf("Linked List 역순 출력: ");
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

	//현재 성능 n^2

	//printf("%d\n", head.count);//10개
	printf("\n");

	//Sort
	tmp = LList.start;
	for (int i = 0; i < 9; i++)//10회 반복
	{
		//printf("%d번째 : \n", i);

		Node* min = tmp;
		Node* min_compare=min->rlink;
		for (int j = i; j < 9 ; j++)
		{
			//printf("-%d번째\n", j);
			//min_compare = min->rlink;
			//printf("\n\n현재\nmin : %d\tmin_compare : %d", min->data, min_compare->data);
			if (min->data > min_compare->data && min->rlink!=NULL)
			{
				min = min_compare;
				//printf("\nmin이동");
			}
			else
			{
				//printf("\n이동안함");
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
		//printf("여기까진 오케이 %d", i);
	}
	//printf("\n여기는?");
	//현재 성능 n^2
	
	printf("\n\n");
	printReverse(&LList);

	return 0;
}  

*/