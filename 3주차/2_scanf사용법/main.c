//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int age = 0;			// 실수를 저장할 수 있는 4byte 크기의 저장공간을 만들어
	char gender = 0;		// 한 문자를 저장할 수 있는 1byte 크기의 저장공간을 만들어
	double weight = 0;		// 실수를 저장할 수 있는 8byte 크기의 저장공간을 만들어
	char name[10] = { 0 };	// 문자열를 저장할 수 있는 10byte 크기의 저장공간을 만들어
	
	printf("나이를 입력 : ");
	scanf("%d", &age);					//scanf("서식", &변수명), &(주소연산자) age의 주소를 찾아가서 그 주소에 있는 값을 덮어써서 바꿔야하기 때문에 반드시 주소 연산자를 사용해야 함
	//scanf_s("%d", &age, sizeof(age));
	printf("성별 입력 : ");
	scanf("%c", &gender);				//scanf("서식", &변수명), &(주소연산자) gender의 주소를 찾아가서 그 주소에 있는 값을 덮어써서 바꿔야하기 때문에 반드시 주소 연산자를 사용해야 함)

	printf("입력 나이는 : %d세 입니다.\n", age);
	printf("입력 성별은 : %c 입니다.\n", gender);

	return 0;
}

// 변수 : 프로그램에서 일시적으로 데이터를 저장하는 공간
// 변수 선언 : 컴파일러에게 어떤 타입의 데이터를 저장할 지 미리 알려주는 행위

// scanf() 함수 : 표준입력함수 ==> DDoS 공격에 취약함, 입력값이 예상보다 많으면 버퍼 오버플로우 발생 가능
// security warning 방지 방법
//		1. scanf_s() 함수 사용
//		2. 첫 줄에 #define _CRT_SECURE_NO_WARNINGS 추가
//		3. Visual Studio 프로젝트 속성에서 C/C++ -> 코드 생성 -> 보안 개발 모드 사용을 "아니오(/GS-)"로 변경