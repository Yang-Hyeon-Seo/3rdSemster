/*전압 = 전류*저항 프로그램 만들기
	작성일: 2021.02.06*/
#include <stdio.h>
void main() {
	//변수 선언
	double i = 2.0, r = 4.0, v;
	v = i * r;
	printf("v = %lf", v);
}