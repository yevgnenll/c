#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

	int randoms();

void main(){

	int five_number[SIZE];
	int i, sum, mid, j;
	int lotto[6] = {0,};
	char str[1000], midd;
	int check=0;
	char hello[5] = "HELLO";
	
//1. 사용자에게 5개의 정수를 입력받아 배열에 저장하고 평균, 합계
	/*
	puts(" 5개의 숫자를 입력해");
	for( i=0; i< SIZE; i++){
		scanf(" %d", &five_number[i]);
	}

	for( i=0; i< 5; i++){

			sum += five_number[i];
	}
	printf("sum: %d, avg: %f \n", sum, (double)sum/5);
*/

//2. 로또추첨!! -> 배열에 중복된 값을 제거!
	/*
	
	i=0;
	while(1){
		
			mid = randoms();
			check = 0;
			for ( j =0; j<6; j++){
					if (lotto[j] == mid )
							check = 1;
			}
		
			if( check == 0){
					lotto[i] = mid;
					i+=1;
			}

			if(i == 6) 
					break;
	}


	printf("result of lotto: ");
	for(i =0; i<6; i++)
			printf("[ %d ] ", lotto[i]);

	puts("");

	*/


//3. 사용자에게 문자열을 입력받아 문자열의 갯수를 화면에 출력하라
		puts("input character");

			gets( str );

			while(1){
				if(str[i] == '\0')
					break;
					i+=1;
			}
	printf("number of char is: %d \n", i);
	//ex) hello -> 5
//4. [H][E][L][L][O] ---->[h][e][l][l][o] 대문자를 소문자로 변경
	/*
		puts("대문자를 입력하시오");
		gets (str);
		for(i=0; i<1000; i++){

				if(str[i] < 65 || str[i] > 90){
						puts("대문자 입력하라고");
						break;
				}
				
				if(str[i] == '\0')
								break;

				str[i] += 32;
				
		}

		puts(str);
*/


//5. [H][E][L][L][O] -> 사용자 입력: L 출력은 2

	/*
		scanf(" %c", &midd);
		sum =0; i= 0;
		for(i = 0; i< 5; i++){
				if(hello[i] == '\0' ) 
						break;

					sum =(hello[i] == midd) ? sum+1 : sum;
			}

		printf(" 갯수: %d \n", sum);
		*/		


}

	int randoms(){

			srand( (unsigned) time(NULL) );
			int retVal = rand() % 45 + 1;

			return retVal;
	}
