/*
프로젝트명 : Project#3 : Expression Stack using Array
작성자 : 2015442 양현서(경영학부)
작성일 : 2021.05.30(일)
사용언어 : C언어

알고리즘 설명 : 
		이 프로그램은 F_original을 후위연산으로 바꿔 F_posftfix에 저장한 후 이를 계산한다.
		이 프로그램을 두가지 기능으로 구분할 수 있는데, 먼저 F_original을 스택을 이용하여 후위연산으로 바꿔 F_postfix에 저장하는 연산을 수행한 후, 그 다음으로 F_postfix를 스택을 이용하여 계산한다.
		Main
		F_original을 {“(3+5)*((2+6)/(9-7))-1" }로선언 및 초기화한다. 이 식을 postfix로 바꿔야 하기 때문에 postfix식을 받기 위한 F_postfix도 선언, 충분한 공간을 위해 50개의 공간을 만든다.
		postfix를 계산한 결과를 받기 위해 int형 result 변수를 선언한다.
		변수 선언이 끝났으면 makePostfix함수를 실행하여 F_original을 F_postfix로 변환한다
		->	makePostfix함수
			F_original과 F_postfix를 인자로 받아 F_original으로 F_postfix 배열 안에 후위연산식을 만든다.
			makePostfix 함수에서는 while문을 이용해 str의 i번째가 \0(NULL)이 아니면 계속 반복하게 만들었다. while문을 반복하면서 피연산자는 F_postfix[index]에 추가하고, 연산자는 스택에 추가하면서 
			자신보다 우선순위가 높은 연산자가 나오면 자신이 들어갈 수 있을 때까지 pop(스택의 상위 데이터부터 하나씩 뺀다)을 한 후 pop한 데이터는 F_postfix에 추가하고, 
			자신이 들어갈 수 있게 되면 자신을 push(스택의 상위에 자신을 넣는다)한다.
			배열로 스택을 만들기 위해 char형 배열 Stack를 만든다. 공간은 넉넉하게 50으로 설정하고, 더미값이 들어가지 않도록 “”으로 초기화한다.
			Stack의 인덱스 역할을 할 stackIndex와 F_postfix의 인덱스 역할을 할 index를 int형 변수로 선언, -1로 초기화한다.
			while문을 통해 str[i]가 \0이 될 때까지 반복한다
			우선 현재 F_original[i]를 출력하여 현재 요소가 무엇인지 확인할 수 있도록 한다.
			
			만약 str[i]가 (인경우
			stackIndex를 1증가시키고 stack[stackIndex]에 str[i]를 대입한다.
			Stack에 push된 요소가 무엇인지를 “Stack push : “에 더해 출력한다.
			
			else if +나 -인 경우
			스택의 가장 상위 요소가 자신보다 우선순위가 높으면 pop, 같으면 pop한 후 push, 낮으면 push를 한다. F_original을 postfix로 바꾸는 과정에서 
			스택의 가장 상위 요소가 자신과 우선순위가 동일한 경우는 없고, 우선순위가 낮은 경우와 높은 경우만 존재한다
			stackIndex가 -1(스택 안에 아무것도 들어있지 않은 경우)이 아니면서, 만약 이전에 들어있는 요소가 * 또는 /라면 스택의 가장 상위요소를 pop해 F_postfix 안에 넣는다.
			pop과 F_postfix가 일어났음을 각각 <“Stack pop : “+스택의 상위 요소>, <“F_postfix[index] : “+F_postfix에 추가된 요소>를 출력해 표시해준다
			stack에 +나 -와 같거나 우선순위가 높은 요소가 없거나 while문을 통해 높은 우선순위들을 모두 pop해준 후엔 stackIndex를 하나 늘린 후 stack에 +또는 -를 넣어준다.
			이를 “Stack push : “+스택에 추가한 요소를 출력해 표시한다.
			
			else if *나 /인 경우
			*와 /도 스택의 상위 요소가 자신보다 우선순위가 높으면 pop, 같으면 pop후 push, 낮으면 push를 하지만 F_original의 경우 스택의 상위요소가 자신보다 우선순위가 높거나 같은 경우가 존재하지 않는다
			따라서 이 경우에는 stackIndex를 1증가시킨 후 stack[stackIndex]에 요소를 추가해준 후 “Stack push : “+스택에 추가한 요소 를 출력한다.
			
			else if  )인 경우
			Stack에서 (가 나올때까지 스택의 요소들을 모두 pop한다
			스택의 가장 상위요소가 (가 나올 때까지 while문을 반복한다.
			스택의 가장 상위 요소(stack[stackIndex])를 pop하고, “Stack pop : “+stack[stackIndex]를 출력한다.
			F_postfix에 pop한 요소를 넣어주기 위해 index를 1증가시키고, F_postfix[index]에 pop한 요소(stack[stackIndex])를 대입한다
			그 후 “F_postfix[index] : ”+F_postfix[index]를 출력하여 F_postfix에 정상적으로 추가되었음을 출력한 후 “Stack top : “+stack[stackIndex]를 출력하여 현재 스택의 가장 상위요소를 출력한다
			( 전까지 모든 요소를 pop한 후 (는 postfix에 포함되지 않기 때문에 stackIndex를 1감소시킨다
			
			else (피연산자)
			이 경우 str[i]의 값을 F_postfix[index]에 추가하고, index를 1 늘린 후 “F_postfix에 추가 : “ + str[i]를 출력한다.
			while문을 반복하면서 탈출 조건을 채우고, F_original의 요소를 이동하기 위해 i를 1 늘리고 출력했을 때의 가독성을 위해 줄바꿈을 출력한다.

			F_original의 모든 요소들을 반복한 후(str의 i번째가 \0이 된 이후)에는 스택에 남은 모든 연산자들을 F_postfix에 추가한다.
			최종적인 결과인 F_postfix의 모든 요소들을 ‘ ‘(공백)으로 구분해 출력한다.

			str[i]가 \0이 된 이후에는 i를 0으로 초기화한 후 다시 while문을 이용하여 F_postfix[i]가 ‘\0’이 될 때까지 F_postfix[i]를 출력한다. F_postfix의 각 요소를 ‘ ‘(공백)로 구분하며 출력한다.
		
		makePostfix를 수행한 후 F_postfix를 계산한다. F_postfix가 잘 만들어졌는지 확인할 겸 F_postfix를 공백없이 출력한다.
		Result에 F_calculate함수의 리턴 값을 대입한다
		->	F_calculate함수는 F_postfix식을 인자로 받는다.
			F_postfix의 인덱스를 의미하는 int형 변수 i를 이용하여 F_postfix[i]가 피연산자이면 스택에 추가하고, 연산자가 나오면 스택에서 2개의 숫자들을 꺼내 연산을 한 후 다시 스택에 넣는다
			연산자가 나온 경우 2개의 숫자를 받을 num1, num2 변수를 선언하고, F_calculate함수에서 사용할 배열 스택stack을 만든다. 공간은 넉넉하게 50으로 설정한다.
			F_postfix가 ‘\0’이 될 때까지 while문을 반복한다.
				만약 F_postfix[i]가 연산자가 아니라면(피연산자라면) stack에 값을 넣어주어야 한다. 이를 위해 index를 1 증가시키고, 
				stack[index]에 F_postfix[i]의 피연산자를 계산할 수 있도록 ‘0’을 뺀 값을 대입한다. 문자는 아스키코드를 기준으로 출력되기 때문에 그냥 계산하면 전혀 다른 값이 나온다.
				만약 F_postfix가 연산자라면 스택의 제일 윗 숫자와 그 다음 숫자를 pop해 각각 num2, num1에 넣고, 이 둘을 계산한다. 두번의 pop을 하지만 push를 한 번 할것이기 때문에 index를 1만 감소시킨다.
				계산한 결과를 stack[index]에 추가한다
				이후 스택에 계산결과를 push했으니 이를 나타내기 위해 “Stack  push : “와 함께 num1과 num2를 계산한 결과를 출력한다.
			while문을 탈출 조건을 충족시키면서 F_postfix의 요소를 변화시키기 위해 i를 1 증가시킨다.
			모든 연산이 끝나면 스택에는 최종적인 계산 결과인 31만 남는다.
			이를 return 한다.

		F_calculate함수를 수행한 후 원래 식이었던 F_original의 식 = F_calculate함수의 최종 계산 결과의 형태로 출력하여 “(3+5)*((2+6)/(9-7))-1 = 31”를 출력한다.

		최종적인 성능은 n^2이고, F_original을 F_postfix로 바꾸는 과정과 F_postfix를 계산하는 과정을 구분하기 위해 출력 형태를 다르게 만들었다. 스택이나 배열이 변화하게 되면 이를 모두 표시했다.
		최대한 출력이 보기 좋게 만들려고 했다.


참고한 알고리즘 : 알고리즘 고안 시 프로젝트#4의 알고리즘을 참고했고,
				https://overit.tistory.com/m/502?category=0 : 문자(char)형 또는 문자열 로 만들어진 수식을 계산하는 방법을 찾아보려고 참고했다
				 https://docs.microsoft.com/ko-kr/cpp/code-quality/c6386?f1url=%3FappId%3DDev16IDEF1%26l%3DKO-KR%26k%3Dk(C6386)%26rd%3Dtrue&view=msvc-160 
				 : 프로그램 실행하면서 오류가 발생한 것을 해결하기 위해 참고한 링크
				데이터구조 7주차 2번째 강의와 강의자료를 참고했다


도움을 준 동료 : 같이 다른 과목 프로젝트를 진행하고 있는 "이효원님", "송혜진님"과 함께 식을 후위배열로 변환한 결과가 맞는지 비교해보는 도움을 받았습니다
*/



#include<stdio.h>

void makePostfix(char* str, char* F_postfix)//F_original, F_postfix
{
	char stack[50] = { "" };
	int i=0;//str의 index
	int stackIndex = -1;
	int index=-1;//F_postfix에 요소를 추가하기 위한 인덱스
	while (str[i] != '\0')
		//str string의 마지막 요소가 나오기 전까지
	{

		printf("\nF_original[%d] : %c", i, str[i]);
		if (str[i] == '(')
		{
			stackIndex++;
			stack[stackIndex] = str[i];
			//printf("\n 스택에추가 성공 : " + str[i]);
			//printf("\n(를 스택에 추가");
			printf("\nStack push : %c", stack[stackIndex]);

		}
		else if (str[i] == '+' || str[i] == '-')
		{
			//우선순위가 동일 pop후 push
			//경우 없다
			//우선순위가 낮아 push
			//if (arrStack[index - 1] == '*' || arrStack[index - 1] == '/')
			//{
				//pop
			if (stackIndex == -1)
			{
				//스택에 그냥 추가한다
				//stackIndex++;
				//stack[stackIndex] = str[i];
			}
			else//스택에 무언가 하나 이상 들어있는 경우
			{
				while (stack[stackIndex] == '*' || stack[stackIndex] == '/')
				{
					//pop
					printf("\n Stack pop : %c ", stack[stackIndex]);
					index++;
					F_postfix[index] = stack[stackIndex];
					printf("\nF_postfix[%d] : %c", index, F_postfix[index]);
					stack[stackIndex] = '\0';
					stackIndex--;
				}
				//stackIndex++;
				//stack[stackIndex] = str[i];
			}
			stackIndex++;
			stack[stackIndex] = str[i];
			//printf("\n+또는 -를 스택에 추가");
			printf("\nStack push : %c", stack[stackIndex]);
		}
		else if (str[i] == '*' || str[i] == '/')
		{
			//printf("\n*또는 /를 스택에 추가");
			stackIndex++;
			stack[stackIndex] = str[i];
			printf("\nStack push : %c", stack[stackIndex]);
		}
		else if (str[i] == ')')
		{
			//printf("\n)가 나타났다");
			if (stackIndex >= 0)
			{
				while (stack[stackIndex] != '(')//(가 나올 때까지
				{
					//printf("여기까진 괜찮아\n");
					printf("\nStack pop : %c ", stack[stackIndex]);

					index++;
					F_postfix[index] = stack[stackIndex];//postfix에 stack의 연산자를 추가한다
					
					stack[stackIndex] = '\0';
					stackIndex--;

					//printf("\nF_postfix에 추가 : %c", F_postfix[index]);
					printf("\nF_postfix[%d] : %c", index, F_postfix[index]);


					printf("\nStack의 top : %c ", stack[stackIndex]);
				}
				stackIndex--;//(부분 제거
				//printf("\n top : %c", stack[stackIndex]);
				//printf("\nStack  : %c", stack[stackIndex]);

			}
		}
		else//숫자가 나온 경우
		{
			//printf("\n%c", str[i]);

			index++;
			F_postfix[index] = str[i];
			
			printf("\nF_postfix[%d] : %c", index, F_postfix[index]);
			//printf("\nF_postfix에 추가 성공: %c", F_postfix[index]);//이상없음
			//i++;
			//continue;
		}
		i++;
		printf("\n");
	}

	//str의 마지막 요소(끝)
	while (stackIndex != -1)
	{
		//printf("\n%c가 남았습니다", stack[stackIndex]);
		printf("\nStack pop : %c ", stack[stackIndex]);

		index++;
		F_postfix[index] = stack[stackIndex];
		stackIndex--;
		printf("\nF_postfix[%d] : %c", index, F_postfix[index]);


	}

	printf("\n\nF_postfix : ");
	i = 0;
	while(F_postfix[i] != '\0')
	{
		printf("%c ", F_postfix[i]);
		i++;
	}
	printf("\n");
}

int F_calculate(char* F_postfix)
{
	//F_postfix의 숫자들을 스택에 넣으면서 연산식이 나오면 2개씩 꺼내서 계산 후 스택에 넣는다
	int i = 0;//postfix의 인덱스
	int index = -1;
	int num1, num2, result;
	int stack[50];//숫자가 들어갈 스택
	while (F_postfix[i] != '\0')
	{
		printf("\n");
		if (F_postfix[i] == '+' || F_postfix[i] == '-' || F_postfix[i] == '*' || F_postfix[i] == '/')
			//연산자가 나온 경우
		{
			num2 = stack[index];
			stack[index] = '\0';
			index--;
			num1 = stack[index];
			stack[index] = '\0';
			//index--;
			printf("\nStack pop : %d", num2);
			printf("\nStack pop : %d\n", num1);
			printf("\n%d %c %d\n", num1, F_postfix[i], num2);

			if (F_postfix[i] == '+')
				stack[index] = num1 + num2;
			else if (F_postfix[i] == '-')
				stack[index] = num1 - num2;
			else if (F_postfix[i] == '*')
				stack[index] = num1 * num2;
			else if (F_postfix[i] == '/')
				stack[index] = num1 / num2;
			//else
			//	printf("\n무언가 잘못되었다\n");

			printf("\nStack push : %d", stack[index]);

		}
		else
			//숫자가 나온 경우 -> 스택에 넣는다
		{
			index++;
			stack[index] = F_postfix[i] - '0';
			printf("\nStack push : %d", stack[index]);
		}

		i++;
	}
	return stack[index];//스택에 마지막에 남은 숫자(결과)를 리턴한다
}

int main(void)
{
	char F_original[] = { "(3+5)*((2+6)/(9-7))-1" };
	char F_postfix[50] = { "" };
	int result;

	printf("Postfix로 만든다\n");
	makePostfix(F_original, F_postfix);

	printf("\nPostfix 계산\n");
	printf("\nF_postfix : %s", F_postfix);

	result = F_calculate(F_postfix);

	//printf("\n\n계산 결과 : %d\n", result);
	printf("\n%s = %d", F_original, result);

	return 0;
}

