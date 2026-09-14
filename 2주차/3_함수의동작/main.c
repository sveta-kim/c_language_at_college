#include <stdio.h>

int funcA(int, int);				// 추상화 ==> function prototype
double funcB(double, double);
double funcC(int, double);
double funcD(double, int);

int main() {
	printf("연산결과: %d\n", funcA(10, 20));
	printf("뺄셈결과: %.1lf\n", funcB(1.0, 2.0));
	printf("곱셈결과: %.2lf\n", funcC(2, 2.0));
	printf("나눗셈결과: %.3lf\n", funcD(2.5, 2));
	return 0;
}

// int(정수), double(실수), char(문자)

int funcA(int num1, int num2) {		// 구현
									// num1 = 10, num2 = 20
									// num1, num2 ==> 매개변수(parameter)
	return num1 + num2;
}

double funcB(double num1, double num2) {	// num1 = 1.0, num2 = 2.0
	return num1 - num2;
}

double funcC(int num1, double num2) {		// num1 = 2, num2 = 2.0
	return num1 * num2;
}

double funcD(double num1, int num2) {
	return num1 / num2;				// 실수 / 정수 ==> 실수 / 실수 (자동형변환)
									// 3 / 2 ==> (double)3 / 2 (강제형변환)
}