#include <stdio.h>
//-------------------------------------------------------------------
// 사용자에게 1개의 문자를 입력받아 대문자와 소문자를 변경한다
//-------------------------------------------------------------------
// 사용자에게 성정을 입력받아 학점 출력 if switch 
// 90 - B
// 91~100 - A, 
// 81~90 B, 61~ 70 C , 60 below F
//-------------------------------------------------------------------

void main(){
/* 1번 문제
	char ch;
	puts("write a letter");
	ch = getchar();

	if(ch >= 65 && ch<= 90) {
			putchar( ch + 32 );
			puts("");
	} else if ( ch >= 'a' && ch <= 'z'){
			putchar( ch - 32 );
			puts("");
	}
*/

		// 2번

		int grade = 0;
		puts("put your grade");

		scanf("%d", &grade);

		/*
		if( grade >= 91 && grade <= 100 ) {
				puts("A");
		} else if ( grade >= 81 && grade <= 90) {
				puts("B");
		} else if ( grade >=71 && grade <= 80) {
				puts("C");
		} else if (grade >= 61 && grade <= 70) {
				puts("D");
		} else if( grade <= 60 ){
				puts("F");
		} else {
				puts(" 100이상임");
		}
		*/

		if( grade <= 100 ){

			switch(grade) {
					case 100: case 99: case 98: case 97: case 96: case 95: case 94: case 93: case 92: case 91: puts("A"); break;
					case 90: case 89: case 88: case 87: case 86: case 85: case 84: case 83: case 82: case 81: puts("B"); break;
					case 80: case 79: case 78: case 77: case 76: case 75: case 74: case 73: case 72: case 71: puts("C"); break;
					case 70: case 69: case 68: case 67: case 66: case 65: case 64: case 63: case 62: case 61: puts("D"); break;
					default: puts("F"); break;
			}

		} else {
				puts("it's not grade");
		}

}
