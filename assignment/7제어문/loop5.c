#include <stdio.h>

void main(){

	int i;
	int a=0;
	int j = 1;

	for(i=1; i<=5; i++){
		j *= i;
		a += j;
	}

	printf("%d \n", a);
}