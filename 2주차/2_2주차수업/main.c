// 주석(comment) : 프로그램에 대한 설명문
// 한 줄 주석 (C++에서 1999년에 가져와서 C언어에 적용)
/*
		여러 줄 주석
*/
// 1
// 2
// 3


// 여러 줄 주석은 다른 여러 줄 주석을 포함할 수 없음.

// /* 
//		/* 
//		*/	==> 여기서 주석은 종료 됨.
// */		==> 중복이 안되므로 오류 발생


#include <stdio.h>			// #			: 전처리기 (preprocessor)
							// include		: 포함하다
							// stdio.h		: STandarD Input/Output (표준 입출력; 라이브러리 함수(Library Function))
								// printf() 와 같은 표준 입출력 함수를 사용하기 위해 포함시켜야 하는 헤더파일


int main(void) {			// Entry Function(entry point of the program)
// 함수의_출력		함수_이름		(함수의 입력값)
// int				main			(void)
// int(integer, 정수)				 void : 비어있다
	printf("Hello, World!\n");		// 함수 내부에 있는 문장의 끝에만 세미콜론(;) 붙이기
	return 0;						// OS가 0이 리턴되면 정상 종료, 0이 아닌 값이 리턴되면 비정상 종료(Error)로 판단
}