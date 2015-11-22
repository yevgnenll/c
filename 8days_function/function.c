#include <stdio.h>

//-------------------------------------------------------------------------
// 함수
// - 독립적인 기능을 수행하는 프로그램 구성단위!
// - 매개변수를 전달받아 고유의 기능을 수행하고 그 결과를 리턴하는 실행단위!
// - 하나의 코드 블럭 
//-------------------------------------------------------------------------
// 함수를 사용하는 이유
// 1) 재사용성: 이미 구현된 코드를 다시 사용한다
// 2) 모듈화	: 고유한 기능을 수행하는 프로그램 단위!
// 		- 프로그램의 부품화
//		- 하나의 함수는 하나의 기능만 가지고 있어야 한다.
// 3) 유지보수: 프로그램을 지속적으로 관리 확장하는 행위!

// 이게 함수를 만드는 방법:
void printBit(){

		int i;
		for(i = 0; i<5; i++)
				printf("bit\n");

}

void main(){

		// 반복문을 사용하기 위해선 실행코드가 연속적으로 수행해야한다:
		printf(); // 이것도 함수이다.
		printBit();

}