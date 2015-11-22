#include<stdio.h>

void main()
{
	int firstNumber, secondNumber;
	double avg;

		printf("두개의 숫자를 입력하시오 \n");

		scanf("%d %d", &firstNumber, &secondNumber);
	
		avg = (firstNumber + secondNumber)/2; 
		printf("평균: %0.1f \n", avg);
					
	   
}

