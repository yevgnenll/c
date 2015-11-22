#include <stdio.h>
//---------------------------------------------------------------------------------------
// ex) 구구단을 출력해봐 - 같은부분을 여러번 반복하는것을 한번에 처리하기위함
//---------------------------------------------------------------------------------------
void main(){

	int i, j, k, l;
	char ch;
	// 7단 출력
	/*
	for(i= 1; i<=9; i++){
			printf("7 x %d= %d \n", i, i*7);
	}
	 */
	/*
	for (i =1; i<=9; i++){
		printf("%d단 \n", i);
		for(j =1; j<=9; j++){
			printf("%d * %d = %d \n", i, j, i*j);
		}
	}
	*/
/*
	puts(" how many prints the object do you want?");
	scanf("%d", &k);
	puts(" how many rows?");
	scanf("%d", &j);

	for(i =0; i<j; i++){
			for( int c = 0; c <=k; c++){
					printf("G ");
			}
			puts("");
	}
*/
/*
	for(i =1; i<=9; i++){

			for(j=1; j<=9; j++){
				if( j == 0){
						printf("%d단       ", i);
				}
				printf("%d * %d = %d  ", j, i, i *j);
			}
			puts("");

	}
*/


//♥ 코드의 반복되는 규칙을 찾아라 그냥 삽질 코드도 도움이 된다. 
/*
	puts("");	
	printf("♥");
	puts("");
	printf("♥");
	printf("♥");
	puts("");
*/
//---------------------------------------------------------------------------------------
// @@@@   @@@@@					@				@
//  @@@   @@@@				 @@			 @@@
//   @@   @@@					@@@			@@@@@
//    @   @@         @@@@			 @@@
//    		@											@
//---------------------------------------------------------------------------------------

	for(i =1; i<=5; i++){

			if( i <= 3 ){
			
					for( j =0; j<3-i; j++){
							printf(" ");
					}
					for(j =0; j< (2*i -1); j++)
							printf("@");

			} else {
					for( j= 0; j< i-3 ;j++)
						printf(" ");

					for (j =0; j < (-2*i+11); j++)
							printf("@");
					
			}
	
				puts("");

	}

	/*
		 puts("");
		 puts("how many cols");
		 scanf("%d", &k);
		 puts("how many rows");
		 scanf("%d", &l);

		 for(i=0; i<k; i++){

		 for(j=0; j<i; j++){
		 printf(" ");
		 }

		 for(j=0; j < l-i; j++){
		 printf("@");
		 }
		 puts("");
		 }
	 */

/*
	for(i=0; i<5; i++){

			for( j=0; j < 5-i ; j++){
					printf("@");
			}
			puts("");
	}
*/
/*
	for(i=0; i <5; i++){

			for(j=0; j < 5-i ; j++){
					printf(" ");
			}
			for(j=0; j< i; j++){
					printf("@");
			}
			puts("");


	}
*/

		
//		int n1, n2, n3, i, j;
//		int max;
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
		while(ch != 'A'){
				fflush(stdin);
				printf("문자입력 : ");
				ch=getchar(); 				
				printf("[%c] \n",ch);
//				fflush(stdin);
				//__fpurge(stdin); 
		}





}
