#include "myheader.h"
double funcA(double dollar) {
	return USD * dollar;
}

double funcB(void) {
	int yen = 0;
	printf("엔화를 입력하세요: ");
	scanf("%lf", &yen);
	return JPY * yen;
}

void funcC(double yuan) {
	printf("입력하신 위안은 원화로 %.2lf KRW입니다.\n", yuan * CHY);
}