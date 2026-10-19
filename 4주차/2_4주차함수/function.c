#include "myheader.h"

double funcA(int width) {
	return width * HEIGHT / 2;
}

double funcB(void) {
	int width = 0;
	printf("밑변 입력: ");
	scanf("%d", &width);
	return width * HEIGHT;
}

void funcC(double radius) {
	printf("원의 넓이 : % .2lf\n", radius * radius * PHI);
}