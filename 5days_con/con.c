//-------------------------------------------------------------------
// 제어문
// - 프로그램의 실행 흐름을 제어하는 구문
//-------------------------------------------------------------------
// - 분기문 ? :, if - else
// true false으로 이중 분기문
// 다중분기문: 경우의 수가 여러개
// if~else 구문
//-------------------------------------------------------------------
// if~else if ~ else
// switch ~ case
//-------------------------------------------------------------------
// if ~ else : 
// 	-true, false를 판단하기 위해서 사용하는 구문
// 	-if문은 생략 불가능 else 구문은 생략 가능
// 	- {}를 사용하지 않으면 바로아래 1개 line만 유효하다
//-------------------------------------------------------------------
// 문법
//-------------------------------------------------------------------
//	if(조건식) // true false로 나오는것만 조건식에 해당. 0: false 나머지 :true
//	
#include <stdio.h>

void main(){
/*
	// 사용자에게 입력받은 정수가 짝수이면 1 홀수이면 0
	int val = 0;
	puts("정수 입력"); 
	scanf("%d", &val);

	if(val % 2 == 0)
			puts("1");
		else
			puts("0");

*/
/*
		char ch;
	ch = getchar();
	if(ch >= 'A' && ch <= 'Z') // c에서는 문자도 숫자야
	{	putchar(ch +  32 );
			puts("정상적으로 잘 출력됨. 프로그램을 종료함");
	}
		else
				puts("대문자가 아닙니다");

		puts("bye~ bye");

// else 구문은 생략이 가능하다

	puts("");
*/

// ex) 369 game 
/*
		int game;
		puts("369 game start!");
		scanf("%d", &game);

		if(   (game % 10 == 3) || (game % 10 == 6) || (game % 10 == 9) ) {
				puts("짝");
		}

		if ( (game/ 10 == 3)|| (game /10 == 6) || (game / 10 == 9)){
				puts("짝");
		}
		
		puts("");
*/

		/*
	int key = 0;

	puts("학년 입력");
	scanf("%d", &key);
	if(key == 1){

			puts(" hi freshman");
	} else if (key == 2){
			puts(" you have to go army");

	} else if( key == 3){
			puts("it's late to study toeic");
	} else if(key == 4){
			puts("do not visit MT");
	} else {
			puts("who are you?");
	}
*/
//-------------------------------------------------------------------
// switch ~ case 가독성  good!
//-------------------------------------------------------------------
	
	/*	
	switch( 키값(정수, 문자)) {
		case 값1: code ; break;
		case 값2: code ; break;
	}
	
	*/
/*
		int grade = 0;
		printf("학년: ");
		scanf("%d", &grade);


		switch(grade){
				case 1: puts("1학년"); break;
				case 2: puts("2선택"); break;
				case 3: puts("3이다"); break;
				case 4: puts("배고파"); break;
				default: puts("gg"); break;
		}

*/











}







