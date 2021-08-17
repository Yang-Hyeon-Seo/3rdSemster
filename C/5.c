#include <stdio.h>

int main_5(void)
{
	//sizeof연산자 활용, 자료형의 크기 확인
	/*
	printf("char의 크기 : %d\n", sizeof(char));
	printf("short의 크기 : %d\n", sizeof(short));
	printf("int의 크기 : %d\n", sizeof(int));
	printf("long의 크기 : %d\n", sizeof(long));
	printf("long long의 크기 : %d\n", sizeof(long long));
	printf("float의 크기 : %d\n", sizeof(float));
	printf("double의 크기 : %d\n", sizeof(double));
	printf("long double의 크기 : %d\n", sizeof(long double));
	*/

	//CircleArea.c
	/*
	double rad;
	double area;
	float area1;
	printf("원의 반지름 입력 : ");
	scanf_s("%lf", &rad);

	area = rad * rad * 3.1415;
	area1 = rad * rad * 3.1415;

	printf("원의 넓이 : %f\n", area);
	printf("원의 넓이 : %f\n", area1);
	//실제로 flrat와 double의 결과 값이 다르다
	*/

	//5-1
	//1
	/*
	int x1, y1, x2, y2;
	int length_x, length_y;
	int result;

	printf("좌 상단의 x, y좌표 : ");
	scanf_s("%d %d", &x1, &y1);
	printf("우 하단의 x, y좌표 : ");
	scanf_s("%d %d", &x2, &y2);
	//scanf_s에서 값을 구분할 때 콤마를 넣으면 입력할 때 콤마를 입력해야 인식하는가? 그리고 콤마를 하지 않고 두 값을 넣으면 뒤의 scanf_s가 왜 실행이 안되는가?

	length_x = x2 - x1;
	length_y = y2 - y1;

	result = length_x * length_y;

	printf("두 점이 이루는 직사각형의 넓이는 %d입니다\n", result);
	*/

	//2
	/*
	double num1, num2;

	printf("두 개의 실수를 입력하세요 : ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("%f + %f = %f\n", num1, num2, num1 + num2);
	printf("%f - %f = %f\n", num1, num2, num1 - num2);
	printf("%f * %f = %f\n", num1, num2, num1 * num2);
	printf("%f / %f = %f\n", num1, num2, num1 / num2);
	*/
	
	//4
	/*
	int code;

	printf("아스키코드값을 입력하세요 : ");
	scanf_s("%d", &code);

	printf("%d 해당 코드에 해당하는 문자는 %c입니다\n", code, code);
	*/

	//5
	/*.
	char asc;

	printf("문자를 입력하세요 : ");
	scanf_s("%c", &asc);

	printf("%c의 아스키코드는 %d입니다\n", asc, asc);
	*/

	//LiteralSize
	/*
	printf("literal int size :  %d\n", sizeof(7));
	printf("literal double size :  %d\n", sizeof(7.14));
	printf("literal char size :  %d\n", sizeof('A'));
	//문자도 컴파일 과정에서 정수의 형태가 되기 때문에 int형이 된다
	*/

	//AutoConvOne
	/*
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("정수 245를 실수로 :  %f\n", num1);
	printf("실수 3.1415를 정수로 :  %d\n", num2);
	printf("큰 정수 129를 작은 정수로 :  %d\n", ch);
	*/

	//강제 형변환
	//나눗셈 결과를 소수 형태로 받기
	int num1 = 3, num2 = 4;
	double divResult;
	divResult = num1 / num2;
	printf("나눗셈 결과 : %f\n", divResult);
	//연산결과의 자료형은 피연산자의 자료형과 일치>>나눗셈의 결과는 0(몫)이 됨
	//소수형태로 받기 위해서는 피연산자의 자료형을 float나 double형으로 바꿔주어야 함
	divResult = (double)num1 / num2;
	printf("나눗셈 결과 : %f\n", divResult);

	
	
	
	return 0;
}