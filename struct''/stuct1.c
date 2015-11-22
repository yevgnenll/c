#include <stdio.h>

typedef struct student{

	int studentNo;				// 학번
	char studentName[200];	// 이름
	int studentAge;				// 나이

}STUDENT;

// 기존의 데이터타입을 새롭게 변형해 쓰겠다
typedef int INT;

// 208byte가 나온다


void main(){

	//구조체 변수 -> java 객체
	// type
	STUDENT stu1;
	// 선언과 동시에 초기화
	int no = 100;
	STUDENT stu2 ={ 2015, "홍길동", 20};
	
//	stu3[0] = {2015, "김철수", 21};
	INT a;

	printf("-- %d \n", sizeof(struct student));

	// 구조체 멤버의 접근
	// 구조체변수.멤버이름(.) 연산자

	printf("학번: %d 이름: %s 나이: %d \n", stu2.studentNo, stu2.studentName, stu2.studentAge );

	

}