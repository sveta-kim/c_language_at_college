#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Hello, World!\n\n\n\n\n\n");
	printf("\t\t홍길동\n");
	printf("나이 : %d\n", 26);
	printf("성별 : %c\n", 'W');			// 하나의 문자 : 작은 따옴표('')로 감싸서 표현
	printf("이름 : %s\n", "김시현");	//문자열 : 큰 따옴표("")로 감싸서 표현
	printf("키 : %.1lf\n", 161.9);
	return 0;
}


// 1. 소스코드 작성(main.c) ==> 컴파일(컴파일러)
// 2. 기계어(object file) ==> main.obj  ==> 링크(링커)
// 3. 실행파일(executable file) ==> 프로젝트이름.exe ==> 1.1주차복습.exe
// 4. 실행(로딩(로더))

//printf() ==> print + formatted (서식을 이용해서)
//  %d(decimal, 10진수) : 정수출력 ==> integer (int)
//	%c(character, 한 문자) : 문자출력 ==> character (char) ==> 데이터 ('A')
//	%lf(long float, 실수) : 실수출력 ==> long float (double)
//	%s(string, 문자열) : 문자열출력 ==> string (char*) ==> 데이터 ("Hello")

// printf()에서 사용되는 제어문자
// \n(new line) : 줄바꿈
