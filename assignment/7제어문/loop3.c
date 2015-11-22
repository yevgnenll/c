#include <stdio.h>

void main(){

	int i, j;

	for (i=0; i<15; i++){


		for(j=0; j<15-i; j++){
			printf(" ");
		}
			
		for(j =0; j<i; j++){
	
			printf(" *");
		}

		puts("");
	}
	


}
