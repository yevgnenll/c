#include<stdio.h>
void main(){

//------------------------------------------------------
// 변수에 이름주기
//------------------------------------------------------
// 1. 기존 키워드는 변수의 이름으로 줄 수 없다.
// 타입 이름
//	int while; // 이런거 안됨 -> 예약어 사용x
//	int mutable; // nono

//	int While; // 대소문자를 구분하기때문에 가능함
//	int Mutable; 

// 가능은 하지만 사용은 하지 말자

// 2. 맨 앞에 숫자가 올 수 없다.
//	int x1; //-> 가능하다
//	int 119money; // x 맨앞에 숫자가 나오면 안된다.
	int money119; // 가능

// 3. 특수기호를 사용할수 없다. (단 _는 가능하다)

//	int student-no; // - 가 들어가면 불가능
	int student_no; // _ 는 가능하다

	int *pArray; // no 포인터변수를 사용하는것이다. 이건 가능하다
	// *가 타입으로 인식되기 때문에 가능하다
	int _119_;
//	int @sno; // 이거 안됨 db에서는 @를 사용하는데 c에선 아니다


// java와 비슷함

//	4. tip!
//------------------------------------------------------
//	1) 널리 알려진 명령법을 사용하자!
//		- 헝가리언표기법!!
//		- 파스칼표기법
//		- 카멜표기법	
//	2) 의미있는 이름의 변수를 선언하자
//  ex. 학번!				자동차이름				수강번호
//	int studentNo;	char carName;		char LecNum;
//	3) 가독성과 직결이 된다.

//------------------------------------------------------

//********************************************************************
//	자동차이름				지구의나이			사람의몸무게				사람의혈액형		야구점수
//		- 헝가리언표기법!!
	char cCarName; int nAgeEarth;   double dWeightHuman; char cBloodType; int nBaseballPoint;

//		- 파스칼표기법
	char CarName;	int AgeEarth;	double WeightHuman;		char BloodType; int BaseballPoint;
//		- 카멜표기법	
	char carName;	int ageEarth;		double weightHuman;		char bloodType; int baseballPoint;
	
//********************************************************************

	char bit[]= "bit";
	int oneChar;
// 2) 사용자에게 2개의 정수를 입력 받아서 두수의 합계와 평균을 출력 하는 코드 
	int firstNumber, secondNumber;
/*
	double avg;

	printf("두개의 숫자를 입력하시오 \n");

	scanf("%d %d", &firstNumber, &secondNumber);

	avg = (firstNumber + secondNumber)/2; 
	printf("평균: %0.1f \n", avg);
*/
/*
	printf("두개의 숫자를 입력하시오 \n");

	scanf("%d %d", &firstNumber, &secondNumber);
	printf("평균: %f \n", (firstNumber + secondNumber) /2);
*/	

// 3) 화면에 "bit"를 출력할수있는 모든 함수를 이용해서 출력하세요.

	printf("'bit' will be printed \n");
	
	printf("1. bit \n");
	printf("2. %c %c %c \n", bit);
	printf("2. %s \n", bit);
	puts("3. bit");

// 4) 사용자에게 1개의 문자를 입력 받아서 아스키 코드를 출력하세요. 

	printf("write a char \n");
	oneChar = getchar();
	printf("written ascii %d :", oneChar);

// 5) 다음 코드에서 잘못된 부분을 수정하세요. 


	//printf("%c %c %c" , 97, 98, 99); 
	int x;
	puts("write a variable X");
	scanf("%d", x); 
	printf("%s %d %d", "sam", 1, &x); 
	
	int c,y,z;
	char Char; 
	int u1= 0, u2 = 0; 









//------------------------------------------------------
}
