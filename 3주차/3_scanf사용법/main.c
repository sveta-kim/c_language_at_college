#include <stdio.h>
#include <stdlib.h>			// exit(), system()

void funcA(void);
void funcB(void);
void funcC(void);
void funcD(void);

int main() {
	char choice = 0;

	while (1) {			// 조건 ==> 1(참) ==> 무한히 반복 ==> 무한 루프
		printf("선택(q.종료, a.나이, g.성별, w.몸무게, n.이름) : ");
		scanf("%c", &choice);

		if (choice == 'q' || choice == 'Q') {		// ||(또는, or)
			exit(0);								// return 0;
		}

		else if (choice == 'a' || choice == 'A') {
			funcA();
		}

		else if (choice == 'g' || choice == 'G') {
			funcB();
		}

		else if (choice == 'w' || choice == 'W') {
			funcC();
		}

		else if (choice == 'n' || choice == 'N') {
			funcD();
		}

		system("pause");			// 잠시 멈춤 (이전 결과를 확인하기 위해) ==> 아무 키나 누르세요
		system("cls");				// 화면 지우고 다시 그리기 (cls; clear screen)
		//system("dir");

		// system() 함수는 터미널 명령어를 사용할 수 있게 해줌

		getchar();
	}
	return 0;
}

void funcA(void) {
	int age = 0;

	printf("나이를 입력 : ");
	scanf("%d", &age);

	printf("입력하신 나이는 %d세 입니다.\n", age);
}

void funcB(void) {
	char gender = 0;

	printf("성별 입력 : ");
	scanf(" %c", &gender);

	printf("입력하신 성별은 %c입니다.\n", gender);
}

void funcC(void) {
	double weight = 0;

	printf("체중 입력 : ");
	scanf("%lf", &weight);

	printf("입력하신 체중은 %lf입니다.\n", weight);
}

void funcD(void) {
	char name[10] = { 0 };

	printf("이름 입력 : ");
	scanf("%s", name);

	printf("입력하신 이름은 %s입니다.\n", name);
}