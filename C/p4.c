/*
프로젝트명 : Project#4 : Expression Stack Linked List
작성자 : 2015442 양현서(경영학부)
작성일 : 2021.05.28(금)
사용언어 : C언어

알고리즘 설명 :
		이 프로그램은 F_original을 후위연산으로 바꿔 F_posftfix에 저장한 후 이를 계산한다.
		이 프로그램을 두가지 기능으로 구분할 수 있는데, 먼저 F_original을 스택을 이용하여 후위연산으로 바꿔 F_postfix에 저장하는 연산을
		수행한 후, 그 다음으로 F_postfix를 스택을 이용하여 계산한다.

		스택을 만들기 위한 Node와 NumNode 구조체를 만든다. Node구조체는 F_original을 F_postfix로 바꿀 때 사용할 스택을 위한 구조체이고, 연산자를 담는 노드이다. 
		가장 먼저, 연산자의 값을 받아야 하기 때문에 char형 data변수가 필요하고, 연산자의 우선순위를 받기 위해 int형 rank도 필요하다. 
		마지막으로 이전 노드와 연결하기 위해 Node형 포인터변수 link도 필요하다. 
		그리고 NumNode는 F_postfix를 계산할 때 사용할 스택을 위한 구조체이고, 피연산자를 담을 char형 data, 이전 노드를 가리킬 NumNode형 포인터변수 link가 필요하다.
		Main
		F_original을 {“(3+5)*((2+6)/(9-7))-1" }로선언 및 초기화한다. 이 식을 postfix로 바꿔야 하기 때문에 postfix식을 받기 위한 F_postfix도 선언, 충분한 공간을 위해 50개의 공간을 만든다.
		makePosftix함수(이후 F_original을 F_postfix로 바꿀 함수)를 위한 스택을 위해 top이라는 이름의 빈 Node형 포인터변수를 선언 및 초기화하고, 
		F_calculate함수(이후 F_postfix를 계산할 함수)를 위한 스택을 위해 top_n이라는 빈 NumNode형 포인터변수를 선언 및 초기화한다. 
		이후 postfix를 계산한 결과를 받기 위해 int형 result 변수를 선언한다.
		변수 선언이 끝났으면 makePostfix함수를 실행하여 F_original을 F_postfix로 변환한다
		->	makePostfix함수
			스택의 제일 상위를 가리킬 Node형 포인터변수 top, F_original을 받을 char형 포인터변수 str과 F_postfix를 만들 때 사용할 char형 포인터변수 F_postfix를 인자로 받는다.
			makePostfix 함수에서는 str의 i번째가 \0(NULL)이 아닐 때까지 돌면서 피연산자는 F_postfix에 추가하고, 연산자는 스택에 추가하면서 자신보다 우선순위가 높은 연산자가 나오면 
			자신이 들어갈 수 있을 때까지 pop(스택의 상위 데이터부터 하나씩 뺀다)을 한 후 pop한 데이터는 F_postfix에 추가하고, 자신이 들어갈 수 있게 되면 자신을 push(스택의 상위에 자신을 넣는다)한다.
			F_original의 모든 요소들을 반복한 후(str의 i번째가 \0이 된 이후)에는 스택에 남은 모든 연산자들을 F_postfix에 추가한다.
			최종적인 결과인 F_postfix의 모든 요소들을 ‘ ‘(공백)으로 구분해 출력한다.
			이를 위해서 우선 F_postfix의 인덱스 역할을 할 index변수와 str의 인덱스 역할을 할 i변수를 0으로 초기화한 후 스택의 상위 요소를 가리키는 top도 NULL로 초기화한다.

			while문을 통해 str[i]가 \0이 될 때까지 반복한다
			우선 새로운 노드를 만들기 위해 Node형 포인터변수 node로 Node를 동적할당 받고, top이 NULL이면 “빈스택”을 출력, NULL이 아니면 “스택의 top\n\t”과 함께 스택의 제일 상위 요소를 출력한다
			
			만약 str[i]가 (인경우
			Node의 data에는 str[i]값을, (는 스택에 들어오면 가장 낮은 순위가 되기 때문에 rank에는 0값을, link에는 NULL을 대입해준다.
			이후 else if문을 빠져나가서 만약 top이 NULL이 아니라면 새로운 노드인 node가 제일 상위 스택이 되기 때문에 node의 link를 top에 연결하고, top을 node로 갱신시켜 줌으로 스택을 하나 늘린다. 
			while문을 반복하면서 탈출 조건을 채우고, F_original의 요소를 이동하기 위해 i를 1 늘린다.(이 부분은 반복적이기 때문에 코드 상에서는 if-else if-else문 바깥에 존재한다)
			
			else if +나 -인 경우
			스택의 가장 상위 요소가 자신보다 우선순위가 높으면 pop, 같으면 pop한 후 push, 낮으면 push를 한다. F_original을 postfix로 바꾸는 과정에서 
			스택의 가장 상위 요소가 자신과 우선순위가 동일한 경우는 없고, 우선순위가 낮은 경우와 높은 경우만 존재한다.
			우선 node의 data엔 str[i]값을, rank에는 1을, link에는 NULL을 대입해준다.
			-	스택의 상위 요소가 자신보다 우선순위가 높은 경우 while문을 통해 node의 rank가 top의 rank보다 작지 않을 때까지 아래를 반복한다.
				F_postfix[index]에 top의 data를 추가하고 index를 1 증가시킨다. 그리고 “F_postfix에 추가 : “+top의 data를 출력한다.
				만약 top의 link가 NULL이라면 top엔  NULL을 넣고 break를 통해 반복문을 탈출하고, 
				top의 link가 NULL이 아니라면 top은 link방향으로 이동한다.
				현재 연산자가 스택의 가상 상위 요소보다 커지면, node의 link를 top에 연결하고 top이 node를 가리키도록 한다.
				이후 else if문을 빠져나가지 않고 바로 반복문을 다시 수행한다
			-	스택의 상위 요소가 자신보다 우선순위가 높지 않은 경우에는 위를 수행하지 않고 else if를 빠져나간다.
				만약 top이 NULL이 아니라면 새로운 노드인 node가 제일 상위 스택이 되기 때문에 node의 link를 top에 연결하고, top을 node로 갱신시켜 줌으로 스택을 하나 늘린다. 
				while문을 반복하면서 탈출 조건을 채우고, F_original의 요소를 이동하기 위해 i를 1 늘린다.(이 부분은 반복적이기 때문에 코드 상에서는 if-else if-else문 바깥에 존재한다)
			
			else if *나 /인 경우
			*와 /도 스택의 상위 요소가 자신보다 우선순위가 높으면 pop, 같으면 pop후 push, 낮으면 push를 하지만 F_original의 경우 
			상위요소가 자신보다 우선순위가 높거나 같은 경우가 존재하지 않는다
			따라서 node의 data에는 str[i]를, rank에는 2를, link에는 NULL을 대입해준다
			이후 else if문을 빠져나가서 만약 top이 NULL이 아니라면 새로운 노드인 node가 제일 상위 스택이 되기 때문에 node의 link를 top에 연결하고, 
			top을 node로 갱신시켜 줌으로 스택을 하나 늘린다. while문을 반복하면서 탈출 조건을 채우고, F_original의 요소를 이동하기 위해 i를 1 늘린다.
			(이 부분은 반복적이기 때문에 코드 상에서는 if-else if-else문 바깥에 존재한다)
			
			else if  )인 경우
			top의 data가 )가 아니면서 top이 NULL이 아닐때까지 while문을  통해 아래 문장을 반복적으로 수행한다.
			F_postfix[index]에 top의 data를 대입하고 index를 1 증가시킨다.
			“F_postfix에 추가 : “ + top의 data를 출력한다.
			top은 link를 따라 한 번 이동한다
			만약 top의 link가 NULL이라면 top은 NULL이 되고, 그렇지 않다면 top은 link를 따라 한번 이동한다.
			i를 1 증가시키고 외부 while문을 다시 실행한다
			
			else (피연산자)
			이 경우 str[i]의 값을 F_postfix[index]에 추가하고, index를 1 늘린 후 “F_postfix에 추가 : “ + str[i]를 출력한다.
			만약에 top이 NULL이 아니라면 새로운 노드인 node가 제일 상위 스택이 되기 때문에 node의 link를 top에 연결하고, top을 node로 갱신시켜 줌으로 스택을 하나 늘린다. 
			while문을 반복하면서 탈출 조건을 채우고, F_original의 요소를 이동하기 위해 i를 1 늘린다.

			str[i]가 \0이 된 이후에는 다시 while문 안에 들어가 top이 NULL이 될 때까지 아래 문장을 반복한다
			F_postfix[index]에 top 의 data를 대입하고 index를 증가시킨다.
			“F_postfix에 추가 : “ + top의 data를 출력한다.
			만약 top의 link가 NULL이라면 top은 NULL이 되고, 그렇지 않다면 top은 자신의 link를 따라 한 칸 이동하게 한다.
			그 후 F_postfix를 모두 출력하기 위해 “ F_postfix : “를 출력한 후 반복문을 돌면서 F_posftix의 모든 요소를 ‘ ‘로 구분하며 출력한다.
		makePostfix를 수행한 후 F_postfix가 잘 만들어졌는지 확인할 겸 F_postfix를 공백없이 출력한다.
		Result에 F_calculate함수의 리턴 값을 대입한다
		->	F_calculate함수는 F_postfix식과 스택을 가리킬 NumNode형 포인터변수 top_n을 인자로 받는다.
			F_postfix의 인덱스를 의미하는 int형 변수 i를 이용하여 F_postfix[i]가 피연산자이면 스택에 추가하고, 연산자가 나오면 스택에서 2개의 숫자들을 꺼내 연산을 한 후 다시 스택에 넣는다
			연산자가 나온 경우 2개의 숫자를 받을 num1, num2 변수를 선언하고, F_postfix[i]의 피연산자를 계산할 수 있도록 ‘0’을 빼준다. 
			문자는 아스키코드를 기준으로 출력되기 때문에 그냥 계산하면 전혀 다른 값이 나온다.
			F_postfix - ‘0’를 받기 위해postfix라는 변수도 선언한다
			F_postfix가 ‘\0’이 될 때까지 while문을 반복한다. 
			우선 스택의 새로운 노드를 생성하기 위해 num이라는 NumNode형 포인터 변수에 NumNode를 동적할당 받는다.
			postfix에는 F_postfix[i]-‘0’을 저장하고, 만약 F_postfix가 연산자라면 스택의 제일 윗 숫자를 num2, 그 다음 숫자를 num1에 넣고, 이 둘을 계산한다.
			만약 top_n(스택 top을 가리키는 포인터변수)이 NULL이 아니라면 num의 link에 top_n을 넣고, top_n이 NULL이라면 num의 link에 NULL을 넣는다. 
			그 후 top_n이 num을 가리키도록 한다.
			이후 스택에 계산결과를 push했으니 이를 나타내기 위해 “Stack – push : “와 함께 num1과 num2를 계산한 결과를 출력한다.
			F_postfix[i]가 연산자가 아니라면(피연산자라면) num의 data에 postfix값을 넣고, top_n이 NULL이 아니라면 num의 link에 top_n을, NULL이라면 num->link에 NULL을 넣는다. 
			그리고 top_n이 num을 가리키도록 한다
			이후 스택에 push했으니 이를 나타내기 위해 “Stack – push : “와 함께 피연산자를 출력한다.
			외부 while문을 탈출 조건을 충족시키면서 F_postfix의 요소를 변화시키기 위해 i를 1 증가시킨다.

			모든 연산이 끝나면 스택에는 최종적인 계산 결과인 31만 남는다.
			이를 return 한다.
		F_calculate함수를 수행한 후 원래 식이었던 F_original의 식 = F_calculate함수의 최종 계산 결과 의 형태로 출력하여 “(3+5)*((2+6)/(9-7))-1 = 31”를 출력한다.

		최종적인 성능은 n^2이고, F_original을 F_postfix로 바꾸는 과정과 F_postfix를 계산하는 과정을 구분하기 위해
		출력 형태를 다르게 만들었다. 스택이나 배열이 변화하게 되면 이를 모두 표시했다.
		최대한 출력이 보기 좋게 만들려고 했다.


참고한 알고리즘 : : https://overit.tistory.com/m/502?category=0 : 문자(char)형 또는 문자열 로 만들어진 수식을 계산하는 방법을 찾아보려고 참고했다
					데이터구조 7주차 2번째 강의와 강의자료를 참고했다
					


도움을 준 동료 : 같이 다른 과목 프로젝트를 진행하고 있는 "이효원님", "송혜진님"과 함께 식을 후위배열로 변환한 결과가 맞는지 비교해보는 도움을 받았습니다
*/

/*

#include<stdio.h>

typedef struct
{
	char data;
	int rank;//우선순위
	struct Node* link;
} Node;

typedef struct
{
	char data;
	struct NumNode* link;
} NumNode;

//void makeStack(Node* top, char* str)
////이젠 rank에 따라서 변화하도록 수정하기
////현재의 rank가 높다 : push
////현재의 rank와 같다 : pop한번하고 push
////현재의 rank가 낮다 : pop
//{
//	int i = 0;
//	//Node* node = (Node*)malloc(sizeof(Node));
//	Node* tmp;
//
//	while (str[i] != '\0')
//	{
//		Node* node = (Node*)malloc(sizeof(Node));
//		
//		printf("\n스택의 top\n\t%c\n", top->data);
//		//top->data;
//		if (str[i] == '(')
//		{
//			node->data = str[i];//식에서는 항상 우선순위가 가장 높다
//			node->rank = 0;//(는 스택 안에서 가장 낮은 우선순위 
//			node->link = NULL;
//			printf("\n( 스택에 추가");
//		}
//		else if (str[i] == '+' || str[i] == '-')
//			//자신보다 우선순위가 높으면 pop, 같으면 pop후 push, 낮으면 push
//		{
//			//우선순위가 동일 pop후 push
//			//경우 없다
//			//우선순위가 낮아 push
//			node->data = str[i];
//			node->rank = 1;
//			node->link = NULL;
//			printf("\n+또는 - 스택에 추가");
//
//			//우선순위가 높아 pop
//			while (node->rank < top->rank)
//			{
//				printf("높은 우선순위 연산자 빼내기\n");
//				printf("%c", top->data);
//				if (top->link == NULL)
//					top = NULL;
//				else
//					top = top->link;
//			}
//
//		}
//		else if (str[i] == '*' || str[i] == '/')
//			//자신보다 우선순위가 높으면 pop, 같으면 pop후 push, 낮으면 push : 경우 없음
//		{
//			node->data = str[i];
//			node->rank = 2;
//			node->link = NULL;
//			printf("\n*또는 / 스택에 추가");
//		}
//		else if (str[i] == ')')
//		{
//			printf("\n)가 나타났다");
//			while (top->data != '(' && top != NULL)//(가 나올 때까지
//			{
//				//printf("여기까진 괜찮아\n");
//				printf("\n%c ", top->data);
//
//				top = top->link;
//				printf("\n(top안%c ", top->data);
//
//				//tmp = top;
//				//top = top->link;
//				//if (top->link == NULL)
//				//	top = NULL;
//				//else
//				//	top = top->link;
//				//free(tmp);
//			}
//			if (top->link == NULL)
//				top = NULL;
//			else
//				top = top->link;
//			i++;
//			continue;
//			//printf("여기도?\n");
//			//if (top->link == NULL)
//			//	top = NULL;
//			 //else
//				//top = top->link;
//		}
//		else
//		{
//			printf("\n%c", str[i]);
//			i++;
//
//			continue;
//		}
//
//		if (top != NULL)
//			node->link = top;
//		top = node;
//
//		i++;
//	}
//	while (top != NULL)
//	{
//		printf("\n%c ", top->data);
//		if (top->link == NULL)
//			top = NULL;
//		else
//		{
//			top = top->link;
//			printf("\n(top안%c ", top->data);
//		}
//
//	}
//
//}

//char* makeStack(Node* top, char* str, char* F_postfix)
void makePostfix(Node* top, char* str, char* F_postfix)

//이젠 rank에 따라서 변화하도록 수정하기
//현재의 rank가 높다 : push
//현재의 rank와 같다 : pop한번하고 push
//현재의 rank가 낮다 : pop
{
	//char F_postfix[50];
	int index = 0;
	int i = 0;
	//Node* node = (Node*)malloc(sizeof(Node));
	//Node* tmp;
	top = NULL;

	//printf("\nmakeStack함수 시작\n");

	while (str[i] != '\0')
	{
		//printf("while문 시작");
		Node* node = (Node*)malloc(sizeof(Node));
		if (top != NULL)
			printf("\n스택의 top\n\t%c\n", top->data);
		else
			printf("\n빈스택\n");
		//top->data;
		if (str[i] == '(')
		{
			node->data = str[i];//식에서는 항상 우선순위가 가장 높다
			node->rank = 0;//(는 스택 안에서 가장 낮은 우선순위 
			node->link = NULL;
			//printf("\n( 스택에 추가");
		}
		else if (str[i] == '+' || str[i] == '-')
			//자신보다 우선순위가 높으면 pop, 같으면 pop후 push, 낮으면 push
		{
			//우선순위가 동일 pop후 push
			//경우 없다
			//우선순위가 낮아 push
			node->data = str[i];
			node->rank = 1;
			node->link = NULL;
			//printf("\n+또는 - 스택에 추가");
			

			//우선순위가 높아 pop
			if (top == NULL)
			{}
			else if(node->rank < top->rank)// && top->link != NULL)
			{
				while (node->rank < top->rank)
				{
					//printf("높은 우선순위 연산자 빼내기\n");
					//printf("%c", top->data);
					//printf("top->link : %d", top->link);

					F_postfix[index] = top->data;
					index++;
					printf("F_postfix에 추가 : %c", top->data);

					if (top->link == NULL)
					{
						top = NULL;
						break;
					}
					else
						top = top->link;
				}

				if (top != NULL)
				{
					node->link = top;
					top = node;
				}

				continue;
			}

		}
		else if (str[i] == '*' || str[i] == '/')
			//자신보다 우선순위가 높으면 pop, 같으면 pop후 push, 낮으면 push : 경우 없음
		{
			node->data = str[i];
			node->rank = 2;
			node->link = NULL;
			//printf("\n*또는 / 스택에 추가");
		}
		else if (str[i] == ')')
		{
			//printf("\n)가 나타났다");
			while (top->data != '(' && top != NULL)//(가 나올 때까지
			{
				//printf("여기까진 괜찮아\n");
				//printf("\n%c ", top->data);

				F_postfix[index] = top->data;
				index++;
				printf("F_postfix에 추가 : %c", top->data);

				top = top->link;
				//printf("\n(top안%c ", top->data);

				//tmp = top;
				//top = top->link;
				//if (top->link == NULL)
				//	top = NULL;
				//else
				//	top = top->link;
				//free(tmp);
			}
			//if (top == NULL)
			//{
			//	//top = NULL;
			//	node->link = NULL;
			//	top = node;
			//}
			//else
			//{
			//	printf("\ntop->link : %d", top->link);
			//	printf("\nnode->link : %d", node->link);
			//	node->link = top;
			//	top = node;
				//top = top->link;
			//}
			if (top->link == NULL)
			
				top = NULL;
			else
				top = top->link;
			i++;
			continue;
			//printf("여기도?\n");
			//if (top->link == NULL)
			//	top = NULL;
			 //else
				//top = top->link;
		}
		else
		{
			//printf("\n%c", str[i]);

			F_postfix[index] = str[i];
			index++;
			printf("F_postfix에 추가 : %c", str[i]);


			i++;

			continue;
		}

		if (top != NULL)
			node->link = top;
		top = node;
		//printf("\n스택과 연결");
		i++;
	}

	//중간점검
	//printf("\nF_postfix : ");
	//for (int i = 0; i <= index; i++)
	//{
	//	printf("%c  ", F_postfix[i]);
	//}
	//printf("\n%d", top->link);
	//printf("\n%c", top->data);

	while (top != NULL)
	{
		//printf("\n%c ", top->data);

		F_postfix[index] = top->data;
		index++;
		printf("F_postfix에 추가 : %c\n", top->data);


		if (top->link == NULL)
			top = NULL;
		else
		{
			top = top->link;
			//printf("\n%d", top->link);
			//printf("\ntop안%c ", top->data);
		}


	}

	printf("\nF_postfix : ");
	for (int i = 0; i <= index; i++)
	{
		printf("%c  ", F_postfix[i]);
	}
	//printf("\n%s ", F_postfix);



	//return F_postfix;
}

int F_calculate(char* F_postfix, NumNode* top_n)
{
	//F_postfix의 숫자들을 스택에 넣으면서 연산식이 나오면 2개씩 꺼내서 계산 후 스택에 넣는다
	int i = 0;
	int num1, num2;// , result;
	int postfix;
	while (F_postfix[i] != '\0')
	{
		NumNode* num = (NumNode*)malloc(sizeof(NumNode));
		postfix = F_postfix[i] - '0';
		printf("\nF_postfix : %c", F_postfix[i]);
		if (F_postfix[i] == '+' || F_postfix[i] == '-' || F_postfix[i] == '*' || F_postfix[i] == '/')
		{
			num2 = top_n->data;
			top_n = top_n->link;
			num1 = top_n->data;
			top_n = top_n->link;
			printf("\n%d %c %d\n", num1, F_postfix[i], num2);

			if (F_postfix[i] == '+')
				num->data = num1 + num2;
			else if (F_postfix[i] == '-')
				num->data = num1 - num2;
			else if (F_postfix[i] == '*')
				num->data = num1 * num2;
			else if (F_postfix[i] == '/')
				num->data = num1 / num2;
			//else
			//	printf("\n무언가 잘못되었다\n");

			if (top_n != NULL)
				num->link = top_n;
			else
				num->link = NULL;
			top_n = num;

			printf("\nStack - push : %d", num->data);
			
		}
		else
		{
			
			num->data = postfix;
			
			if (top_n != NULL)
				num->link = top_n;
			else
				num->link = NULL;
			top_n = num;
			
			printf("\nStack - push : %d", postfix);
		}

		printf("\nStack Top : %d\n", top_n->data);
		i++;
	}
	return top_n->data;
}

int main(void)
{
	//Linked List Stack
	char F_original[] = { "(3+5)*((2+6)/(9-7))-1" };
	char F_postfix[50] = { "" };
	Node* top = NULL;//makePostfix의 스택
	//Node node;// = { NULL, NULL, NULL };
	NumNode* top_n = NULL;//F_calculate의 스택
	int result;

	//F_postfix[0] = 
	makePostfix(&top, F_original, F_postfix);

	printf("\n\nF_postfix : %s\n", F_postfix);

	//for (int i = 0; i < sizeof(F_original) / sizeof(char); i++)
	//{
	//	if (F_original[i] == '(')
	//	{
	//		node.data = F_original[i];
	//		node.rank = "0";//(는 스택 안에서 가장 낮은 우선순위 
	//	}
	//	else if (F_original[i] == '+' || F_original[i] == '-')
	//	{

	//	}
	//	else if (F_original[i] == '*' || F_original[i] == '/')
	//	{

	//	}
	//	else if (F_original[i] == ')')
	//	{

	//	}
	//	else
	//	{

	//	}
	//	
	//}
	
	result = F_calculate(F_postfix, top_n);

	printf("\n%s = %d", F_original, result);
	return 0;
}

*/