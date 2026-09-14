#include <stdio.h>

int funcA(int, int);
double funcB(void);
void funcC(int, double);
void funcD(void);

int main(void) {
	printf("두 수의 덧셈 : %d\n", funcA(100, 200));			// 영문자()	==> 함수
	printf("두 수의 뺄셈 : %lf\n", funcB());
	funcC(10, 3.0);												// 출력X ==> 함수 내부에서 출력 ==> printf() 사용
	funcD();
	return 0;
}

// 주석(comments) : 프로그램에 대한 설명문 ==> /* */
// #(preprocessor) : 전처리기 지시자 ==> #include ==> <stdio.h> ==> printf() : 출력, scanf() : 입력
// 함수
//		1. 함수의 입출력 타입 결정		==> 함수의_출력		함수이름		(함수의_입력)
//			char(문자), int(정수), double(실수), lf(실수; long float), char*(문자열), void(없음)
//		2. 함수의 형태
//			11(출력 O, 입력 O), 10(출력 O, 입력 X), 01(출력 X, 입력 O), 00(출력 X, 입력 X)
// printf() ==> %d(정수), %lf(실수; long float), %c(문자), %s(문자열)

int funcA(int x, int y) {		// return 예약어를 사용하여 함수의 출력값을 결정(출력값이 존재)
	return x + y;
}

double funcB(void) {
	double x = 1.0, y = 2.0;
	return x - y;
}

void funcC(int x, double y) {			// return X ==> printf()
	printf("두 수의 곱셈 : %lf\n", x * y);
}

void funcD(void) {
	double x = 1.0, y = 2.0;
	printf("두 수의 나눗셈 : %lf\n", x / y);
}