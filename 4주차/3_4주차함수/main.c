#include "myheader.h"

int main() {
	char choice = 0;

	while (1) {
		printf("선택(q.종료, p.파운드입력, m.마일입력) : ");
		scanf("%c", &choice);

		if (choice == 'q' || choice == 'Q') {
			printf("프로그램 종료\n");
			exit(0);
		}

		else if (choice == 'p' || choice == 'P') {
			double pound = 0;
			printf("파운드 입력: ");
			scanf("%lf", &pound);
			printf("%.3lflb는 %.3lfkg 입니다.", pound, funcA(pound));
		}

		else if (choice == 'm' || choice == 'M') {
			double mile = 0;
			printf("마일 입력: ");
			scanf("%lf", &mile);
			printf("%.3lfmile은 %.3lfkm 입니다.", mile, funcB(mile));
		}

		system("pause");
		system("cls");

		getchar();
	}
	return 0;
}