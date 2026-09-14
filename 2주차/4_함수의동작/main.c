#include <stdio.h>

char* funcA(void);
int funcB(void);
char funcC(void);
double funcD(void);

int main() {
	printf("이름 : %s\n", funcA());
	printf("나이 : %d\n", funcB());
	printf("성별 : %c\n", funcC());
	printf("키 : %.2lf\n", funcD());
	return 0;
}

char* funcA(void) {
	return "홍길동";
}

int funcB(void) {
	return 26;
}

char funcC(void) {
	return 'W';
}

double funcD(void) {
	return 161.9;
}