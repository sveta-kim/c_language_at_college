#include "myheader.h"

int main() {
	char choice = 0;

	while (1) {
		printf("메뉴선택(q.종료, t.삼각형의 넓이, r.사각형의 넓이, c.원의 넓이) : ");
		scanf("%c", &choice);

		if (choice == 'q' || choice == 'Q') {
			printf("프로그램 종료\n");
			exit(0);								// return 0;
		}
		
		else if (choice == 't' || choice == 'T') {		// 11
			int width = 0;
			printf("밑변 입력: ");
			scanf("%d", &width);
			printf("삼각형의 넓이: %.2lf\n", funcA(width));
		}

		else if (choice == 'r' || choice == 'R') {
			printf("사각형의 넓이 : %.2lf\n", funcB());
		}

		else if (choice == 'c' || choice == 'C') {
			int radius = 0;
			printf("반지름 입력: ");
			scanf("%d", &radius);
			funcC(radius);
		}

		system("pause");
		system("cls");

		getchar();
	}
	return 0;
}

// 상수 : 어떤 상황에서도 변하지 않는 값 (10, 'C', 3.14, "Hello", true(false))
//			- 리터럴 상수: 값 그 자체를 그대로 소스코드에 사용
//						정수: 10진수(0-9), 8진수(0-7) ==> 07, 16진수(0-F) ==> 0x
//						실수: 소수점이 있는 숫자(3.14)	==> 정규화 314 * 10^(-2)
//						문자: 'A' ==> 작은 따옴표로 데이터를 묶어서 표현, 숫자로 변환되어 저장
//						문자열: "Hello" ==> 큰 따옴표로 묶어서 표현, 배열 형태로 데이터 저장
//						논리: true(0이 아닌 값), false(0)
//			- 심볼릭 상수
//				#define ==> 상수를 기호로 만들어
//				#define PHI 3.14
//				const: 변수를 상수로 변환
//				const int x = 10;
//				x = 20;				// 변할 수 없는 수
//	