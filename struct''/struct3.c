//---------------------------------------------------------------------------------------------
// ����ü �迭�� �Լ��� �����ϱ�!!
//---------------------------------------------------------------------------------------------
// -> ����ü �迭: ����ü ������ ������ �ִ� ����!
//---------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>
#define SIZE 5

typedef struct score{

	char Name[20];	// �̸�
	  int kor;			// ����
	  int eng;			// ����
	  int math;		// ����

} SCORE;
//---------------------------------------------------------------------------------------------
// SCORE ����ü�� �Ű������� ���޹޾Ƽ� ����ڿ��� �̸��� ������ �Է��ϰ� ����
//---------------------------------------------------------------------------------------------
// �����͸� ����ϴ� ����
void inputScore(SCORE * score){

	gets( (*score).Name);
	printf("���� ���� ����:");
	scanf("%d %d %d",	score->kor,
							score->eng, 
							score->math);
	// �������� �����ϰ� ����� ã�ƶ�: ->
	// * -> [] �� ���� �������� �ϴ� �������̴�

}

void printScore(SCORE score){

	printf("�̸�: %s ����: %d ����: %d ����: %d \n", 
		score.Name, score.kor, score.eng, score.math);
}


void init(SCORE * score){

	int i;

	for (i =0; i<SIZE; i++)
	{
		score[i].kor = 0;	//���ȣ�� ������
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
	//memset(scoreList, 0, sizeof(scoreList) ); // ��ü�� 0���� �ʱ�ȭ �ȴ�
	for (i =0; i<SIZE; i++) {
		scoreList[i].kor = 0;
		scoreList[i].eng = 0;
		scoreList[i].math = 0;
	}
*/

}
