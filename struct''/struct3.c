//---------------------------------------------------------------------------------------------
// 구조체 배열과 함수로 전달하기!!
//---------------------------------------------------------------------------------------------
// -> 구조체 배열: 구조체 변수가 여러개 있는 집합!
//---------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>
#define SIZE 5

typedef struct score{

	char Name[20];	// 이름
	  int kor;			// 국어
	  int eng;			// 영어
	  int math;		// 수학

} SCORE;
//---------------------------------------------------------------------------------------------
// SCORE 구조체를 매개변수로 전달받아서 사용자에게 이름과 성적을 입력하고 저장
//---------------------------------------------------------------------------------------------
// 포인터를 사용하는 이유
void inputScore(SCORE * score){

	gets( (*score).Name);
	printf("국어 영어 수학:");
	scanf("%d %d %d",	score->kor,
							score->eng, 
							score->math);
	// 역참조를 먼저하고 멤버를 찾아라: ->
	// * -> [] 는 같은 역참조를 하는 연산자이다

}

void printScore(SCORE score){

	printf("이름: %s 국어: %d 영어: %d 수학: %d \n", 
		score.Name, score.kor, score.eng, score.math);
}


void init(SCORE * score){

	int i;

	for (i =0; i<SIZE; i++)
	{
		score[i].kor = 0;	//대괄호가 역참조
		score[i].eng = 0;
		score[i].math = 0;
	}

}


void main(){

	SCORE scoreList[SIZE];
	SCORE score1;
	
	init(scoreList);
	inputScore(&score1);
	printScore(score1);
	
/*
	//memset(scoreList, 0, sizeof(scoreList) ); // 전체가 0으로 초기화 된다
	for (i =0; i<SIZE; i++) {
		scoreList[i].kor = 0;
		scoreList[i].eng = 0;
		scoreList[i].math = 0;
	}
*/

}
