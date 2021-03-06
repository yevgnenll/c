#include <stdio.h>
#include <stdlib.h>
//------------------------------------------------------------------------
// - 함수의종류!
//	1) 매개변수와 return이 존재하는 경우
//		ex) 2개의 정수를 매개변수로 전달 받아서 두수의 합을 리턴한다
//------------------------------------------------------------------------
// 함수선언
	int sum(int a, int b);
// 	2) 매개변수도 없고 리턴도 없는 함수
//		ex) 화면에 사용자 메뉴를 출력하는 함수 -> void: 함수의 리턴값이 존재하지 않는다

	void display();
//	void display(void); // -> 아무거나 상관없음

//	3) 매개변수는 없는데 return은 있는 함수
//		ex) 사용자에게 한개의 정수를 입력받아서 리턴하는 함수
	int input( void );

//	4) return은 없는데 매개변수가 존재하는 함수
//		ex) 1개의 정수를 매개변수로 전달받아서 제곱을 화면에 출력해주는 함수
	void sqr(int a);
//-----------------------------------------------------------------------

	void main(){

			while(1)
			{
					display();
					switch(input()){
							case 1:
									puts("1번이 선택되었습니다");
									break;
							case 2:
									puts("2 번이 선택되었습니다");
									break;
							case 0:
									exit(0); // program kill

					}
			}
	}
//-----------------------------------------------------------------------
// 함수의 정의부
//-----------------------------------------------------------------------

	void sqr(int a){
		printf("%d * %d = %d \n", a,a,a*a);
	}

	int sum(int a, int b){
			return a + b;
	}

	void display(){
		puts("1. 조회 ");
		puts("2. 삭제 ");
		puts("0. 종료 "); 
	}

	int input(){
		int val;
		printf("intput number [ ] \b\b");
		scanf("%d", &val);
		return val;
	}
