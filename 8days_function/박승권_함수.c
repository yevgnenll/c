#include <stdio.h>
//---------------------------------------------------------------------
// 함수만들기 실습
// 1. 문자 2개를 매개변수로 받아 화면에 출력 a, c -> A B C
	void printCh(char start, char end);

// 2. 대문자 1개를 매개변수로 전달받아 소문자로 변환하여 리턴하는 함수 A -> a
	char lower(char ch);

// 3. 실수 1개와 정수 1개를 매개변수로 전달받아서 합을 리턴하는 함수: 3.24, 3 -> 6.24
	double sum(float f, int i);

// 4. 정수 3개를 매개변수로 전달받아서 평균값 리턴
	double avg(int a, int b, int c);

// 5. 정수 2개를 매개변수로 전달받아서 두수가 같으면 1 다르면 0 리턴
	int isSame(int a, int b);

// 6. 1개의 소문자를 매개변수로 전달받아서 대문자를 리턴하시오
	char littleToCapital(char a);

// 7. 3개의 정수를 매개변수로 전달받아서 가장 작은수를 리턴
	int smallest(int a, int b, int c);

// 8. 화면에 bit를 매개변수로 전달받은 정수만큼 출력하는 함수
	void printBitCount(int number);

// 9. 사용자가 0을 입력할때까지 입력받은 수의 갯수를 리턴하는 함수(count)
	int count();

// 10. 사용자에게 3개의 정수를 입력받아서 모두 리턴하는 함수
//	int[3] number3();
	// 지금까지 배운 지식으로 불가능함 정적배열로는 가능하다

// 11. 사용자에게 키와 몸무게를 입력받아 리턴하는 함수
//	char[] tallWeight();
	// 배열, 구조체를 이용하여 구현 -> 현재 지식내에선 불가능하다
	// 함수는 항상 단일값만 반환한다

// 12. 2개의 매개변수를 입력받아 4칙연산 + % 연산을 수행하는 함수
// 총 5개의 함수를 만들어라
	int plus(int a, int b);
	double minus(int a, int b);
	int multiple(int a, int b);
	double divide(int a, int b); 
	int modd(int a, int b);
// 9개 함수의 정의 구현
// 5개 함수를 정의하고 계산기 작성하라


	void main(){

			int a, b;
			char op;
			puts("1번 입력받은 두 문자 사이의 값을 출력");
			printCh('A', 'D');

			puts("대문자 입력시 소문자 출력");
			putchar(lower('D'));
			puts("");

			puts("실수 한개 정수 한개를 매개변수로 하여 결과값 반환");
			printf("결과 %f \n",sum(1.44, 2));

			puts("3개 정수의 평균");
			printf("평균값: %f \n", avg(5, 10, 7));

			puts("두 수가 같으면 1 다르면 0: 10 19 입력");
			printf("같으면 1, 다르면 0: %d \n", isSame(10, 19));

			puts("소문자를 입력하여 대문자 리턴 h 입력");
			putchar(littleToCapital('h'));
			puts("");

			puts("3개의 정수중 가장 작은수");
			printf("작은수는: %d \n", smallest(3, 10, 40));

			puts("내가 입력한 숫자만큼 bit 출력 3 입력");
			printBitCount(3);

			puts("");
			printf("횟수: %d \n",count());


			puts("put 2 numbers");
			scanf("%d %d", &a, &b);

			puts("연산을 입력하시오");
			scanf(" %c", &op);

			printf("연산은 %d %c %d =", a, op, b);

			switch(op){

				case '+' :
						printf("%d \n",plus(a, b));
						break;

				case '-':
						printf("%f \n", minus(a,b));
						break;
				
				case '*':
						printf("%d \n",	multiple(a, b));
						break;

				case '/':
						printf("%f \n", divide(a, b));
						break;

				case '%':
						printf("%d \n", modd(a, b));
						break;

				default:
						puts("연산자는 + - * / % 가 있습니다");
						
						break;

			}

			puts("");
			printf("plus: %d, minus: %f, mul: %d, divide: %f, modd: %d", plus(a, b), minus(a, b), multiple(a, b), divide(a, b), modd(a,b));
			puts("");

	}

	void printCh(char start, char end){
		
			for(char ch = start; ch <= end; ch ++)
					putchar(ch);

			puts("");

	}

	
	char lower(char ch){
		return ch + 32;
	}

	double sum(float f, int i){

			return (double)(f+i);
	}
	
	double avg(int a, int b, int c){

			return (double)((a+b+c)/3);
	}

	int isSame(int a, int b){
			return (a == b) ? 1 : 0;
	}


	char littleToCapital(char a){

			return a-32;
	}


	int smallest(int x, int y, int z){
			int min;

			min = ( x -y) >0 ? y : x;
			min = (min -z)>0 ? z: min;

			return min;
	}

	void printBitCount(int number){
			for(int i=0; i< number; i++){
					puts("bit");
			}
	}
		

	int count(){
			puts("정수 입력 0 이면 종료함");
			int number= 1;
			int count = 0;

			while(number != 0)
			{
					puts("정수를 입력하시오");
					scanf(" %d", &number);
					count++;
			}
			return count;
	}

	int plus(int x, int y){
			return x + y;
	}

	double minus(int x, int y) {
			return (double)(x-y);
	}

	int multiple(int a, int b){
			return a * b;
	}

	double divide(int a, int b){
			return (double)( a/b);
	}

	int modd(int a, int b){
			return a % b;
	}

	void operator(int a, char op, int b){

		printf("%d %c %d = ", a, op, b);
			switch(op){

				case '+' :
						printf("%d \n",plus(a, b));
						break;

				case '-':
						printf("%f \n", minus(a,b));
						break;
				
				case '*':
						printf("%d \n",	multiple(a, b));
						break;

				case '/':
						printf("%f \n", divide(a, b));
						break;

				case '%':
						printf("%d \n", modd(a, b));
						break;

				default:
						puts("연산자는 + - * / % 가 있습니다");
						
						break;

		}
	}
