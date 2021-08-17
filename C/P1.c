/*
프로젝트명 : Project#1 : Selection Sort using Array
작성자 : 2015442 양현서(경영학부)
작성일 : 2021.05.25(화)
사용언어 : C언어
알고리즘 설명 :
		10개의 정수를 저장할 int형 Array(배열)를 만든다
		1)	10개의 입력을 받고, 입력을 받을 때마다 배열의 전체를 출력한다.
		 ->배열에 원소 삽입을 위한 input함수
		 for문을 이용하며 10회를 반복하며 10개의 정수를 입력 받아 배열에 추가한다
		 각 for문 안에서 입력을 받은 후 for문을 중첩하여 현재 배열의 모든 원소를 출력한다. 이때 반복 횟수는 현재 배열의 원소 수
		2)	배열의 원소를 정렬한다
		 ->	(내부 for문)
		 배열의 제일 첫번째 위치에 올 제일 작은 원소를 for문을 이용하여 배열 전체에서 찾는다. 제일 작은 원소를 제일 앞 위치로 옮기고 
		 기존에 제일 앞에 있던 원소를 제일 작은 원소가 있던 자리로 옮긴다
		 배열의 첫번째 원소의 위치는 외부for문을 반복할수록 뒤로 이동하고, for문을 이용해 제일 작은 원소를 탐색하는 범위도 
		 배열의 첫번째 원소부터 마지막 원소까지이기 때문에 탐색하는 범위도 하나씩 줄어든다
		 ->	(외부 for문)
		 위를 배열의 길이만큼 for문을 반복하면서 내부 for문을 이용해 탐색할 배열의 제일 첫번째 원소결정해준다
	 	 배열의 첫번째 원소의 위치는 for문을 반복하면서 1씩 늘어나게 된다.
		3)	인덱스 9부터 0까지 원소들을 역순으로 출력한다
		 -> 역순으로 원소들을 출력하기 위한 printReverse함수
		 for문을 이용해 9번째 인덱스부터 0번째 인덱스까지 ArrList를 출력한다


참고한 알고리즘 : 알고리즘 고안 시에는 아무것도 참고하지 않았고,
					코딩하면서 C언어를 공부하며 정리한 문법 노트를 참고,
					프로그램 작동 확인 후 더 좋은 방법이 있을지 궁금해 인터넷을 찾아보았지만
					활용하진 않았다
도움을 준 동료 : 없다

*/

/*
#include<stdio.h>

void input(int* ArrList)
{
	for (int i = 0; i < 10; i++)
	{
		printf("\n");
		printf("정수를 입력하세요 : ");
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
	printf("\nArrList 역순 : ");
	for (int i = 9; i >= 0; i--)
	{
		printf("%d ", ArrList[i]);
	}

	printf("\n\n");
}

int main(void)
{
	int ArrList[10] = { 0 };
	input(ArrList);//리스트 이름은 그 자체로 주소를 가리킨다
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("\n");
	//	printf("정수를 입력하세요 : ");
	//	scanf_s("%d", &ArrList[i]);

	//	printf("ArrList : ");
	//	for (int j = 0; j <= i; j++)
	//	{
	//		printf("%d ", ArrList[j]);
	//	}
	//}

	
	////input함수가 잘 수행되었는지 확인하는 코드
	//printf("ArrList : ");
	//for (int j = 0; j < sizeof(ArrList)/sizeof(int); j++)
	//{
	//	printf("\n%d ", ArrList[j]);
	//}
	

	//현재 성능 n^2

	//정렬하기

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
	//}  //불필요한 반복문

	//현재 성능 n^2

	//역순으로 출력하기
	//printf("\nArrList 역순 : ");
	//for (int i = 9; i >= 0; i--)
	//{
	//	printf("%d ", ArrList[i]);
	//}

	//printf("\n\n");

	printReverse(ArrList);

	return 0;
}

*/