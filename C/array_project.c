#include <stdio.h>
#include <time.h>//랜덤 이용


int main(void)
{
	srand(time(NULL));
	printf("===아빠는 대머리 게임===\n\n");
	
	int answer; // 사용자 입력값
	int treatment = rand() % 4; // 발모제

	int countShowBottle = 0; //이번 게임에서 보여줄 병의 개수
	int previousShowBottle = 0;//앞게임에서 보여준 병의 개수
	//서로 보여주는 병의 개수를 다르게하여 정답률 향상(2개>3개)

	//3번의 기회(발모제 투여 시도 횟수)
	for (int i = 0; i < 3; i++)
	{
		int bottle[4] = { 0,0,0,0 }; //4개의 병, 1은 발모제, 0은 발모제가 아님
		do
		{
			countShowBottle = rand() % 2 + 2;//2~3
		} while (countShowBottle == previousShowBottle);
		previousShowBottle = countShowBottle;

		//countShowBottle != previousShowBottle

		int isIncluded = 0; // 보여준 병 중에 발모제가 포함되었는지 여부 (1이면 포함, 0이면 포함하지 않음)

		printf("%d번째 시도 : ", i + 1);
		//보여줄 병 종류 선택
		for (int j = 0; j < countShowBottle; i++) 
		{
			int randBottle = rand() % 4;//0~3까지의 수 랜덤

			//선택된 병이면 값을 1로 변경 / 선택처리
			if (bottle[randBottle] == 0) {
				bottle[randBottle] = 1;

				//선택한 보틀이 발모제인 경우 머리가 났다고 표현해야 함(isIncluded = 1이 되어야 함)
				if (randBottle == treatment)
				{
					isIncluded = 1;

				}

			}
			//선택된 값이면 다시 뽑는다
			else {
				j--;//j의 값을 1 떨어뜨려서 다시 뽑아도 j의 수가 늘어나지 않도록 / 다시 뽑은 것을 무효로 하기 위함
			}
		}

		//사용자에게 문제 표시
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1) {
				printf("%d ", k + 1);
			}
		}
		printf("물약을 머리에 바릅니다\n\n");//선택된 번호의 물약을 머리에 바릅니다 / bottle[k]가 1인 경우는 선택된 경우임

		if (isIncluded == 1) 
		{
			printf("성공>>머리가 났어요!\n");
		}
		else
		{
			printf("실패>>머리가 나지 않았어요...\n");
		}
		
		printf("\n계속하려면 아무키나 무르세요");
		getchar(); // 사용자가 어떤 키를 누를 때가지 대기하는 역할

	}

	printf("\n발모제는 몇 번일까요?\n");
	scanf_s("%d", &answer);

	if (answer == treatment + 1)
	{
		printf("\n정답입니다\n");
	}
	else
	{
		printf("\n틀렸습니다 정답은 %d입니다\n", treatment + 1);
	}




	return 0;
}