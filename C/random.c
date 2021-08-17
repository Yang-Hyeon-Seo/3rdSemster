#include <stdio.h>

#include <time.h> //랜덤함수를 사용하기 위해 추가하는 것
//#include <stdlib.h>//time.h만으로 랜덤함수를 사용할 수 없는 경우 추가하는 것

int main_random(void) {
	
	//랜덤을 쓰고 싶다면 난수 초기화를 해야 함
	//srand(time(NULL)); //난수 초기화


	//int num = rand() % 어떤 수(뽑고 싶은 숫자의 범위 지정)
	//rand();

	//int num = rand() % 3; //0~2 중 아무거나 선택됨 / 중요한 것은 0부터 시작, 3을 포함하지 않음
	//만약 1부터 3까지의 숫자를 뽑게 하고 싶다면
	//int num = rand() % 3 + 1  //0~2에 각각 1씩 더함>>1~3

	//난수 초기화
	printf("난수 초기화 이전\n");
	for (int i = 0; i < 10; i++) {
		printf("%d", rand() % 10);
	}
	srand(time(NULL));
	printf("\n\n난수 초기화 이후\n");
	for (int i = 0; i < 10; i++) {
		printf("%d", rand() % 10);
	}

	return 0;
}