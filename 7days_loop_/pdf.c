#include <stdio.h>

void main(){

		char ch;
		int mid, i;
//		int n1, n2, n3, i, j;
//		int max;

		printf("%d", 1 % 10);
		puts("숫자를 입력");
		scanf("%d", &mid);

		for(i =1; i <= mid * mid; i++){

				printf("%d	", i);
				(mid % i == 0) ? puts("") : printf("");
		}


/*
		puts("3 numbers");
		scanf("%d %d %d", &n1, &n2, &n3);
		
		max = n1 -n2 > 0 ? n1 : n2;
	  max = max -n3 >0 ? max : n3;

		for(i =0 ; i < max ; i++){
				
					(i < n1 )? printf("*	"): printf("	");
					(i < n2 )? printf("*	"): printf("	");
					(i < n3 )? printf("*	"): printf("	");

			puts("");
							
		}
		
	*/
		/*
		while(ch != 'A'){
				fflush(stdin);
				printf("문자입력 : ");
				ch=getchar(); 				
				printf("[%c] \n",ch);
//				fflush(stdin);
				//__fpurge(stdin); 
		}
*/
}
