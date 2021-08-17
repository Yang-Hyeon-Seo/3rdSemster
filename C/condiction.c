#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main_condiction(void) {
	
	//if else
	//if (조건) {} else {}
	//버스를 탄다고 가정할 때 학생 아니면 일반인으로 구분
	/*int age = 25;
	if (age >= 20) {
		printf("일반인입니다\n");
	}
	else {
		printf("학생입니다\n");
	}*/

	//if / else if / else
	//초등학생 8~13 / 중학생 14~16 / 고등학생 17~19로 나누면?
	/*
	int age = 25;
	if (age >= 8 && age <= 13) {    //&&은 and의 의미, 동시에 충족해야 참
		printf("초등학생입니다");
	}
	else if (age >= 14 && age <= 16) {
		printf("중학생입니다");
	}
	else if (age >= 17 && age <= 19) {
		printf("고등학생입니다");
	}								//여기에 모두 포함되지 않으면 아무런 값이 나오지 않는다
	//값을 나오게 하기 위해서는 else를 추가하면 된다
	else {
		printf("학생이 아닌가봐요");
	}
	*/

	//switch구문으로 버스 학생 나누기
	/*int age;
	age = 7;

	switch (age) {
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("초등학생입니다\n"); break;
	case 14:
	case 15:
	case 16:printf("중학생입니다\n"); break;
	case 17:
	case 18:
	case 19:printf("고등학생입니다\n"); break;
	default:printf("학생이 아닙니다\n"); break;
	}
	*/



	//break continue
	//1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 한다
	/*
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("나머지 학생은 집에 가세요\n");
			break;				//for문을 탈출한다
		}
		printf("%d번 학생은 발표를 준비하세요\n", i);
	}
	*/
	//1번부터 30번까지 있는 반에서 7번이 아파서 결석
	//6번붜 10번까지 발표
	/*
	for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d번 학생은 결석입니다\n", i);
				continue;
			}
			printf("%d번 학생은 발표를 준비하세요\n", i);
		}
	}*/

	//&& ||
	/*
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;
	if (a == b || c == d) {
		printf("a와 b, 혹은 c와 d가 같습니다");
	}
	else {
		printf("값이 다르네요");
	}
	*/

	//가위0 바위1 보2
	/*
	srand(time(NULL));
	int i = rand() % 3;
	if (i == 0) {
		printf("가위");
	}
	else if (i == 1) {
		printf("바위");
	}
	else if (i == 2) {
		printf("보");
	}
	else {
		printf("몰라요");
	}
	*/

	//switch
	/*
	srand(time(NULL));
	int i = rand() % 3;//0~2

	switch (i) {
	case 0:printf("가위\n"); break;
	case 1:printf("바위\n"); break;
	case 2:printf("보\n"); break;
	default:printf("몰라요\n"); break;
	}
	*/

	//업 앤 다운
	//친구와 혹은 ai와 플레이
printf("UP & DOWN\n");
	int i = 0;
	while (i == 0) {
		printf("1. 친구와 플레이\n2. AI와 플레이\n");
		int choose, chance = 5;//친구와 플레이하거나 AI와 플레이하는 것 중 선택, 기회는 5번
		scanf_s("%d", &choose);
		//친구와 플레이하는 경우
		if (choose == 1) {
			int num, answer;//답과 답변
			printf("번호를 눌러주세요\n");
			scanf_s("%d", &num);
			printf("친구에게 넘겨주세요\n\n");
			while (chance > 0) {
				printf("기회는 %d번 남았습니다\n몇 번 일까요?\n", chance--);
				scanf_s("%d", &answer);
				if (answer == num) {
					printf("정답입니다\n");
					break;
				}
				else if (answer > num) {//숫자가 큰 경우
					printf("다운\n");
				}
				else {//숫자가 작은 경우
					printf("업\n");
				}
				//chance = chance - 1;
				if (chance == 0) {
					printf("기회를 모두 사용하였습니다.\n정답은 %d입니다", num);
				}
			}
			break;
		}
		//AI와 플레이하는 경우
		else if (choose == 2) {
			int num, answer = 5;//정답과 답변
			srand(time(NULL));
			num = rand() % 100 + 1; //정답은 1에서 100중 하나 랜덤
			while (chance > 0) {
				printf("기회는 %d번 남았습니다\n몇 번 일까요?\n", chance);
				scanf_s("%d", &answer);
				if (answer == num) {
					printf("정답입니다\n");
					break;
				}
				else if (answer > num) {//숫자가 큰 경우
					printf("다운\n");
				}
				else {//숫자가 작은 경우
					printf("업\n");
				}
				chance = chance - 1;
				if (chance == 0) {
					printf("기회를 모두 사용하였습니다.\n정답은 %d입니다", num);

				}
				
			}
			break;
		}
		//다른 값을 입력한 경우
		else {
			printf("잘못 누르셨습니다\n");
		}
	}








	return 0;
}