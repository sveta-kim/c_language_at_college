#include "header.h"

int main() {
	char choice = 0;

	while (1) {
		printf("메뉴선택(q.종료, t.삼각형의넓이, r.사각형의넓이, c.원의넓이) : ");
		scanf("%c", &choice);

		if (choice == 'q' || choice == 'Q') {
			printf("프로그램 종료\n");
			exit(0);
		}

		else if (choice == 't' || choice == 'T') {			// 11
			int width = 0, height = 0;
			printf("밑변과 높이 입력 : ");
			scanf("%d, %d", &width, &height);
			printf("삼각형의 넓이 : %lf\n", funcA(width, height));
		}

		else if (choice == 'r' || choice == 'R') {		// 10
			printf("사각형의 넓이 : %d\n", funcB());
		}

		else if (choice == 'c' || choice == 'C') {		// 01
			double radius = 0;
			printf("반지름 입력 : ");
			scanf("%lf", &radius);
			funcC(radius);
		}

		system("pause");
		system("cls");

		getchar();			// 입력버퍼에서 엔터키를 읽어와서 삭제
	}
	return 0;
}

// scanf("서식", &변수명);
//		- 서식: %d, %c, %lf, %s
//		- %c : 입력버퍼를 통해 메모리로 로드 (엔터키가 버퍼에 남아있음)
//			getchar();

// 변수: 변할 수 있는 수  ==> 일시적으로 저장되는 저장공간
//		- 변수를 선언 시 데이터의 형태와 크기에 따라서 자료형을 지정할 필요
//			정수(int), 실수(double), 문자(char), 문자열(char[])
//			int num = 0;
//			변수이름은 의미있는 이름으로 한다.
//			변수이름 앞에 주소 연산자(&)를 붙여야 한다. ==> scanf("%d", &num);
//			배열 이름은 그 자체가 주소 ==> 배열이름은 주소 연산자를 붙이지 않는다.

// scanf()	==> 보안 해제 ==> SDL 해제