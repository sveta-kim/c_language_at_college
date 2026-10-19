#include "myheader.h"

int main() {
	char choice = 0;

	while (1) {
		printf("선택(q.종료, u.달러, j.엔화, c.위안) : ");
		scanf("%c", &choice);

		if (choice == 'q' || choice == 'Q') {
			printf("프로그램 종료/n");
			exit(0);
		}

		else if (choice == 'u' || choice == 'U') {		// 11
			double dollar = 0;
			printf("달러를 입력하세요: ");
			scanf("%lf", &dollar);
			printf("입력하신 달러는 원화로 %.2lf KRW입니다.\n",funcA(dollar));
		}

		else if (choice == 'j' || choice == 'J') {		// 10
			printf("입력하신 엔화는 원화로 %.2lf KRW입니다.\n",funcB());
		}

		else if (choice == 'c' || choice == 'C') {		// 01
			double yuan = 0;
			printf("위안을 입력하세요: ");
			scanf("%lf", &yuan);
			funcC(yuan);
		}

		system("pause");
		system("cls");

		getchar();
	}
	return 0;
}