#include <stdio.h>

int funcA(int, int);		// 11 type		.return
int funcB();				// 10 type		.return
void funcC(int, int);		// 01 type		print()
void funcD(void);			// 00 type		print()

int main() {
	printf("두 정수 중에 큰 수는 : %d\n", funcA(100, 200));
	printf("두 정수 중에 큰 수는 : %d\n", funcB());
	funcC(600, 300);
	funcD();
	return 0;
}

int funcA(int num1, int num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}

int funcB(void) {
	int num1 = 500, num2 = 700;

	if (num1 > num2)
		return num1;
	else
		return num2;
}

void funcC(int num1, int num2) {		// num1 = 600, num2 = 300
	if (num1 > num2)
		printf("두 정수 중에 큰 수는 : %d\n", num1);
	else
		printf("두 정수 중에 큰 수는 : %d\n", num2);
}

void funcD(void) {
	int num1 = 800, num2 = 400;
	if (num1 > num2)
		printf("두 정수 중에 큰 수는 : %d\n", num1);
	else
		printf("두 정수 중에 큰 수는 : %d\n", num2);
}