#include <stdio.h>
int main_printfscanf(void) {


	/*하나의 프로젝트에 여러개의 메인함수가 존재하면 오류가 발생
	임시적으로 main함수 뒤에 다른 이름을 붙여 하나의 프로제트에
	여러개의 main함수가 존재하지 않게 만들어줘야 함*/




	//정수형 변수 예제
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	//실수형 변수 예제
	/*float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);*/

	//상수>한 번 정의하면 바꿀 수 없음, 보통 대문자로 표시
	/*const int YEAR = 2000;
	prntf("태어난 년도 : %d\n", YEAR);*/
	//YEAR = 2000;

	//printf
	//연산
	/*
	int add = 3 + 7;//10 계산되어서 대입
	printf("%d\n", add);
	printf("%d * %d = %d\n", 30, 79, 30 * 79);
	*/

	//scanf
	//키보드 입력을 받아서 저정
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);//& : input이라는 변수가 정의된 곳에 값을 입력받는다는 의미
	printf("입력값: %d\n", input);*/

	/*int one, two, three;
	printf("세개의 값을 입력하세요: ");
	scanf_s("%d, %d, %d", &one, &two, &three);*/
	/*scanf_s 를 이용하여 여러 개의 값을 받을 때값들을 구분하는 방법
	(입력 시에도 동일하게 입력해야 함, 아니면 인식하지 못함)
	%d, %d, %d 인 경우 콤마로 값 구분>1, 2, 3이렇게 입력해야 함 1,2,3이렇게 입력해도 무방
	%d %d %d 인 경우 띄어쓰기로 구분> 1 2 3 이렇게 입력해야 함
	*/
	/*printf("첫 번째 값 : %d\n", one);
	printf("두 번째 값 : %d\n", two);
	printf("세 번째 값 : %d\n", three);*/

	//문자(한 글자)와 문자열(한 글자 이상의 여러 문자)
	//문자 : char
	/*
	char c = 'A';
	printf("%c\n", c);
	//문자열: 여러 문자가 한번에 들어가기 때문에 보통 배열을 이용
	char str[256];//char값을 받는 변수 256개 생성, 배열
	printf("문자열을 입력하세요\n");
	scanf_s("%s", str, sizeof(str));
	printf("%s", str);
	*/

	//프로젝트 / 경찰서 조서쓰기
	//경찰관이 범죄자의 정보를 입수(조서 작성)
	//이름, 나이, 몸무게, 키, 범죄명

	//문자열에 값 받기
	char name[256], crime[256];
	int age;
	float weight, height;
	printf("이름에 뭐에요\n");
	scanf_s("%s", name, sizeof(name));
	printf("나이는 몇이에요\n");
	scanf_s("%d", &age);
	printf("몸무게는 몇이에요\n");
	scanf_s("%f", &weight);
	printf("키는 몇이에요\n");
	scanf_s("%f", &height);
	printf("무엇을 잘못했나요\n");
	scanf_s("%s", crime, sizeof(crime));
	printf("\n\n이름 : %s\n나이 : %d\n몸무게 : %.2f\n키 : %.2f\n범죄명 : %s\n", name, age, weight, height, crime);

	return 0;
}
