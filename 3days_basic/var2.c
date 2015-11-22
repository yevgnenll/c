
#include <stdio.h>

int main(){

// ***************************************************
// C언어에서 기본으로 제공하는 변수 타입!
// ***************************************************
	short s = 32767;
	short s1 = 32768;
// 1) 숫자
// 	- 정수형 타입: int, short, long
// 	- 실수형 타입: float
	printf("short: %d byte \n", sizeof(short));
	printf("int: %d byte \n", sizeof(int));
	
	printf("32767: %d 32768: %d", s, s1);
	puts("");

	printf("long: %d byte \n", sizeof(long));
	printf("longlong: %d byte \n", sizeof(long long));


	printf("float: %d byte \n", sizeof(float));
	printf("double: %d byte \n", sizeof(double));
// 2) 문자
// 	- 문자: char
	pritnf("char: %d byte \n", sizeof(char));
// 	- 문자열: 문자의 배열 char a[100]
// 3) 복함
//	- 배열, 구조체..


}
