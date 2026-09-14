#include <stdio.h>

int funcA(int, int);
double funcB(void);
void funcC(double, int);
void funcD(void);

int main() {
	printf("덧셈결과 : %d\n", funcA(100, 200));
	printf("뺄셈결과 : %.3lf\n", funcB());		// 실수 - 실수 = 실수
	funcC(2.0, 5);		// 2.0 * 5 = 10.0 (소수점 1자리)
	funcD();			// 3 / 2.0 = 1.50 (소수점 2자리)

	return 0;
}

int funcA(int num1, int num2) {
	return num1 + num2;
}

double funcB(void) {
	double num1 = 1.2556, num2 = 3.24359;
	return num1 - num2;
}

void funcC(double num1, int num2) {
	printf("곱셈결과 : %.1lf\n", num1 * num2);
}

void funcD(void) {
	int num1 = 3;
	double num2 = 2.0;
	printf("나눗셈결과 : %.2lf\n", num1 / num2);
}