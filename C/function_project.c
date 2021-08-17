//비밀번호 마스터 프로젝트
#include <stdio.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int i, int num1, int num2);
void success();
void fail();



int main_function_project(void) {

	//문이 5개가 있고, 각 문마다 점점 어려운 수식퀴즈가 출제 + 랜덤
	//맞히면 통과, 틀리면 실패

	srand(time(NULL));
	/*int count = 0, num1, num2;
	num1 = rand()%;
	num2 = rand()%;*/

	int count = 0;//대답
	for (int i = 1; i <= 5; i++) {
		//printf("%d번째 문제\n", i);
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		//printf("%d X %d 의 값은 얼마입니까?\n", num1, num2);
		showQuestion(i, num1, num2);
		int answer;
		scanf_s("%d", &answer);
		if (answer == num1 * num2) {
			/*  정답 함수 만들기
			printf("정답입니다\n");
			count += 1;
			printf("%d개의 문을 열었습니다\n", count);
			*/
			success();
			count += 1;
		}
		else if (answer == -1) {
			printf("프로그램을 종료합니다\n");
			exit(0); //프로그램을 끝내라는 함수, 이후 코드를 더이상 실행하지 않고 종료한다
		}
		else {
			/*  오답 함수 만들기
			printf("마스터의 자리를 넘겨줘야 한다니...\n");
			break;
			*/
			fail();
			break;//게임 종료
		}
	}

		printf("당신은 %d개의 문을 열었습니다\n", count);


	return 0;
}



int getRandomNumber(int level) {
	return rand() % (level*10) + 1;
}
void showQuestion(int i, int num1, int num2) {
	printf("#########%d번째 비밀번호#########\n", i);
	printf("\n\t%d X %d ?\n\n", num1, num2);
	printf("비밀번호를 입력하세요(종료를 원할 시 -1입력) : ");
}

void success() {
	printf("문이 열립니다\n");
}

void fail() {
	printf("마스터 자리를 넘겨줘야 한다니\n");
}

