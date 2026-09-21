#include "header.h"

int main(void) {
	char choice = 0;

	while (1) {
		printf("선택(q.종료, t(Trianle), r(Rectangle), c(Circle) : ");
		scanf("%c", &choice);

		if (choice == 'q' || choice == 'Q') {
			printf("프로그램 종료\n");
			exit(0);
		}

		else if (choice == 't' || choice == 'T')
			funcA();

		else if (choice == 'r' || choice == 'R')
			funcB();

		else if (choice == 'c' || choice == 'C')
			funcC();

		system("pause");
		system("cls");
		getchar();
	}

	return 0;
}