#include <stdio.h>

int main_array(void) {
	
	//배열
	/*int subway_1 = 30;//지하철 1호선에 사람이 30명 타고 있다
	int subway_2 = 40;
	int subway_3 = 50;

	printf("지하철 1호차에 사람이 %d명 타고 있습니다\n", subway_1);
	printf("지하철 2호차에 사람이 %d명 타고 있습니다\n", subway_2);
	printf("지하철 3호차에 사람이 %d명 타고 있습니다\n", subway_3);
	*/

	//지하철 한 칸이 int 라고 하면 연속된 공간에 정수형 변수를 여러개 만드는 것>>배열

	//subway_array라는 변수에 3개의 정수형 변수를 가지는 칸을 만들 것이다
	//(여러개의 변수를 함께, 동시에 형성)

	/*int subway_array[3];//[0][1][2] 인덱스는 0부터 시작
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i+1,  subway_array[i]);
	}*/

	//값 설정 방법
	/*
	int arr[10];// = { 1,2,3,4,5,6,7,8,9,10 }; // 중괄호를 이용하여 한번에 값을 넣을 수 있다
	//값을 초기화하지 않으면 알 수 없는 값이 나온다 / 알 수 없는 값을 '더미값'(쓰레기값)이라고 부른다
	//>>반드시 초기화를 해야 함
	for (int i = 0; i < 10; i++) {
		printf("%d번째 숫자: %d\n", i + 1, arr[i]);
	}*/

	/*
	int size = 10;
	int array[size];//배열 크기에는 변수가 들어갈 수 없음 무조건 상수
	*/

	/*
	int arr[10] = { 1,2 }; //하나라도 선언을 하면 그 외의 값은 0으로 들어가고 선언하지 않으면 더미값이 들어간다
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

	/*
	int arr[] = { 1,2 };// = arr[2]
	for (int i = 0; i < 5; i++) { //초과하는 부분은 더미값이 들어감
		printf("%d\n", arr[i]);
	}
	*/

	/*
	char str[6] = "coding"; // [c][o][d][i][n][g]
	printf("%s\n", str); //뒷 부분에 알 수 없는 문자가 함께 나옴>>NULL문자가 없기 때문
	

	//문자열에는 문자열이 끝난다는 표시의 NULL문자가 한 공간을 차지한다
	//NULL문자는 \0으로 표현
	//NULL문자의 자리까지 포함하여 str은 7자리가 있어야 함

	char str[7] = "coding";//[c][o][d][i][n][g][\0]
	printf("%s\n", str);
	*/

	/*
	char str[] = "coding";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));//sizeof()함수는 괄호 안의 대상의 크기를 반환하는 함수 / 6글자면 6, 7글자면 7이 나올 것임
	
	for (int i = 0; i < sizeof(str); i++) {
		printf("%c\n", str[i]);
	}
	*/

	//한글의 size
	/*
	char kor[] = "양현서";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor)); //7 /  2*3+1(null문자)
	*/
	//영어 1글자 : 1byte
	//한글 1글자 : 2byte
	//char의 크기 : 1byte >> 한글을 담을 수 없음

	/*
	char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	printf("%s\n", c_array);
	char c_arr[6] = { 'c', 'o', 'd', 'i', 'n', 'g'};
	printf("%s\n", c_arr);
	char c[10] = { 'c', 'o', 'd', 'i', 'n', 'g' }; // 남는 공간이 있으면 자동으로 들어감(문제 없음)
	printf("%s\n", c_arr);
	for (int i = 0; i < sizeof(c); i++) {
		printf("%c\n", c[i]);
	}
	for (int i = 0; i < sizeof(c); i++) {
		printf("%d\n", c[i]); //ASCII코드값 출력
	}
	*/

	//ASCII코드
	/*
	7bit ( 총 128개의 코드(0~127))
	a : 97
	A : 65
	0 : 48
	*/

	//0부터 127까지의 아스키코드 값 출력
	/*
	for (int i = 0; i < 128; i++)
	{
		printf("%d : %c\n", i, i);
	}*/

	return 0;
}