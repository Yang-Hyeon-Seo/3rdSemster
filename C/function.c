#include <stdio.h>

//선언
void p (int num);
void function_without_return();
int function_with_return();//정수형 값 반환
void funtion_without_params();
void funtion_with_params(int a, int b, int c);

//계산기 함수 선언
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int apple(int total, int ate);//전체 total에서 ate개만큼 먹은 후 남을 양 리턴

int main_function(void) {
	//fuction
	//계산기

	/*int num = 2;
	//printf("num은 %d입니다\n", num);
	p(num);

	// 2 + 3
	num += 3;
	//printf("num은 %d입니다\n", num);
	p(num);
	
	//5-1
	num -= 1;
	//printf("num은 %d입니다\n", num);
	p(num);

	//4*3
	num *= 3;
	//printf("num은 %d입니다\n", num);
	p(num);

	//12/6
	num /= 6;
	//printf("num은 %d입니다\n", num);
	p(num);*/

	//반환값이 없는 함수
	//void함수
	//function_without_return();
	

	//반환값이 있는 함수
	//int ret = function_with_return();
	//p(ret);

	//전달값이 없는 함수
	//파라미터(=전달값)
	//funtion_without_params();

	//전달값이 있는 함수
	//funtion_with_params(27, 50, 39);

	//전달값도 있고 반환값도 있는 함수
	/*int ret = apple(5, 2); // 5개의 사과 중에 2개를 먹었어요
	printf("사과 5개중에 2개를 먹으면 %d개가 남아요\n", ret);
	*/

	//사과 10 중에 4개를 먹으면? %d개가 남아요 / apple직접 활용
	//printf("사과 %d개 중에 %d개를 먹으면? %d개가 남아요", 10, 4, apple(10, 4));

	//계산기 함수
	/*int num = 2;
	num = add(num, 3);//더하기
	p(num);

	num = sub(num, 1);//빼기
	p(num);

	num = mul(num, 3);//곱하기
	p(num);

	num = div(num, 6);//나누기
	p(num);*/

	return 0;
}


//정의
//반환형 함수이름 (매개변수) { 함수 내부에서 실행할 문장 }
//정의부분에서 만들 함수의 형태(반환형~매개변수)까지는 선언부분에서의 형태와 동일해야 함
void p(int num) {
	printf("num은 %d입니다\n", num);
};

void function_without_return() {
	printf("반환값이 없는 함수입니다\n");
}


int function_with_return() {
	printf("반환값이 있는 함수입니다\n");
	return 10;
}

void funtion_without_params() {
	printf("전달값이 없는 함수입니다\n");
}

void funtion_with_params(int a, int b, int c) {
	printf("전달값이 있는 함수입니다\n");
	printf("%d, %d, %d 를 전달받았습니다\n", a, b, c);
}

int apple(int total, int ate) {//전체 total에서 ate개만큼 먹은 후 남을 양 리턴
	printf("전달값과 리턴값이 모두 있는 함수입니다\n");
	printf("전체 사과 %d개에서 %d개만큼 먹고, %d개만큼 남았습니다\n", total, ate, total - ate);
	return total - ate;
}

//계산기 함수 정의
int add(int num1, int num2) {
	return num1 + num2;
}

int sub(int num1, int num2) {
	return num1 - num2;
}

int mul(int num1, int num2) {
	return num1 * num2;
}

int div(int num1, int num2) {
	return num1 / num2;
}