#include <stdio.h>

int main_6(void)
{
	//string printf
	/*
	printf("I like programming \n");
	printf("I love puppy!\n");
	printf("I am so happy\n");
	*/

	//경고음
	//printf("\a");
	
	//printf 예시
	//"제 나이는 10진수로 12살, 16진수로 C살입니다, 나이 정보는 프로그램 사용자로부터 직접 입력"
	/*
	int age;

	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);

	printf("제 나이는 10진수로 %d살, 16진수로 %X살 입니다\n", age, age);
	//x와 X의 차이>>출력하는 16진수의 소문자 대문자를 의미
	*/

	//OctHex
	/*
	int num1 = 7, num2 = 13;
	printf("%o  %#o", num1, num1);
	printf("%x, %#x, %#X\n", num2, num2, num2);
	*/

	//%f와 %e차이 비교
	/*
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234);

	printf("%f \n", 0.12345678);
	printf("%e \n", 0.12345678);
	*/
	
	//FieldWidth
	/*
	printf("%8s %14s %5s \n", "이  름", "전공학과", "학년");
	printf("%8s %14s %5d \n", "김동수", "전자공학", 3);
	printf("%8s %14s %5d \n", "이을수", "컴퓨터공학", 2);
	printf("%8s %14s %5d \n", "한선영", "미술교육학", 4);
	*/

	//ScanfConvTwo
	/*
	float num1;
	double num2;
	long double num3;

	printf("실수 입력 1(e 표기법으로) :  ");
	scanf_s("%f", &num1);
	printf("입력된 실수 :  %f\n", num1);

	printf("실수 입력 2(e 표기법으로) :  ");
	scanf_s("%lf", &num2);
	printf("입력된 실수 :  %f\n", num2);

	printf("실수 입력 3(e 표기법으로) :  ");
	scanf_s("%Lf", &num3);
	printf("입력된 실수 :  %Lf\n", num3);
	*/









	return 0;
}