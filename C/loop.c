#include <stdio.h>

int main_loop(void) 
{
	//printf("Hello World\n");

	//++연산자
	/*int a = 10;
	printf("a는 %d\n", a);//10
	a++;
	printf("a는 %d\n", a);//11
	a++;
	printf("a는 %d\n", a);//12*/

	/*int b = 20;
	//++b, b++ 는 b = b + 1을 의미
	printf("b는 %d\n", ++b);//문장을 수행할 때 제일 먼저 ++b를 수행 / 21출력
	printf("b는 %d\n", b++);//문장을 수행할 때 가장 마지막에 b++을 수행 / 21출력 후 b는 22가 됨
	printf("b는 %d\n", b);//문장 수행 직전에 b가 22가 되었기 때문에 22출력
	*/

	/*int i = 1;
	printf("Hello World %d\n", i++);//출력되는 i =1 / i는 2가 됨
	printf("Hello World %d\n", i++);//i = 2 // 3이 됨
	printf("Hello World %d\n", i++);//i=3
	printf("Hello World %d\n", i++);//i=4
	printf("Hello World %d\n", i++);//i=5
	printf("Hello World %d\n", i++);//i=6
	printf("Hello World %d\n", i++);//i=7
	printf("Hello World %d\n", i++);//i=8
	printf("Hello World %d\n", i++);//i=9
	printf("Hello World %d\n", i++);//i=10 / i는 11이 됨
	printf("\n");
	printf("i = %d\n", i);
	*/

	//반복문
	//for, whlie, do whlie
	//for (선언; 조건; 증감){}
	
	//for
	/*
	int i;
	for (i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}
	printf("%d", i);
	printf("\n\n");
	for (i = 1; i <= 10; ++i) {			
		printf("Hello World %d\n", i);
	}
	printf("%d", i);//i는 11, 조건에 맞지 않아 반복문을 나옴
	*/


	/*두 경우의 결과가 동일
	1. 선언
	2. 조건
	3. 내부 명령 수행
	4. 증감(i++혹은 ++i 등)
	5. 2번으로 돌아감(조건을 확인)
	*/

	//while (조건) {}
	/*변수 선언을 while 밖에서 먼저 하고
	조건을 확인한 후 문장을 수행할지 말지 결정
	while 함수 내에서 조건을 빠져나갈 수 있는 환경을 만들어야 함
	(조건을 충족하지 않는 상황)
	while 문 안에 있는 모든 문장을 수행한 후에 while로 돌아가 조건을 다시 확인하고
	조건을 충족하면 while안의 문장 수행, 충족하지 않으면 while문을 빠져나온다*/
	/*int i = 1;
	while (i <= 10) {
		printf("Hello World %d", i);
		i++
	}
	*/

	//do {} while (조건);
	/*
	int i = 1;
	do {
		printf("Hello World %d\n", i);
		i++;
		//printf("Hello World %d\n", i++);과 동일하다
	} while (i <= 10);
	*/

	//2중 반목문
	/*for (int i = 1; i <= 3; i++) {
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("       두 번째 반복문 : %d\n", j);
		}
		
	}*/
	
	//구구단 표 만들기
	/*for (int i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}*/

	/*
	*
	**
	***
	****
	*****
	만들기*/

	/*for (int i = 1; i <= 5; i++)       //줄을 표현
	{
		for (int j = 1; j <= i; j++) { //각 줄의 *을 표현, for 문을 돌면서 한개씩 *을 찍는다
			printf("*");
		}
		printf("\n");
	}*/

	/*
	     *
	    **
	   ***
	  ****
	 *****
	 만들기*/
	
	/*for (int i = 1; i <= 5; i++)
	{
		for (int a = 1; a <= 5 - i; a++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//피라미드를 쌓아라 프로젝트
	
	int floor;

	printf("몇층으로 쌓을 것인가?");
	scanf_s("%d", &floor);

	/*
	1층 1개
	2층 3개
	3층 5개
	4층 7개
	n층 2n-1개

	5층짜리를 쌓는다
	가로 수 : 총 9개
	ssss*       s의 수 9//2의 값 / 소수점이 되고, 비교연산자 이용하면 될 듯
	sss***
	ss*****
	s*******
	*********

	n층 짜리를 쌓는다
	가로 수 : 총 2n-1개
	s n-1개 *1개
	만든다*/

	//floor수 만큼 반복
	for (int i = 1; i <= floor; i++) {                 //floor 만큼 층 생성
		for (int j = 1; j <= floor - i; j++) {         //공백 층에 따라서 줄여야 함
			printf(" ");							   //n층>위에서부터 n-1개, n-2개, ..., 0개
		}											   //총 n층, 현재 i층(위에서부터)>공백의 개수는 n-i
		for (int k = 1; k <= i * 2 - 1; k++) {		   //각 층에서 *의 개수는 2*i-1개(층은 위에서부터 1층)
			printf("*");
		}
		printf("\n");
	}
	/*
	첫번째
	*/





	return 0;
}