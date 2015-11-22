#include <stdio.h>

void main(){

		
	int no;
	int sum=0;

	for(int i=0; i<5; i++){
			scanf("%d", &no);
			sum += no;
	}
	printf("sum = %d \n", sum);
	



/*
	int i, j;

	// 6번

	for(i=0; i<5; i++){

			for(j=0; j<5; j++)
					((j+i)%2)==0?printf("$"):printf("#");
			
			puts("");

	}
*/
}
