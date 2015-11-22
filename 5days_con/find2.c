#include <stdio.h>

void main(){

	int b;
	int ch[1000];
	int i = 0;

	puts("write down a number what you want to convert binary");
	scanf("%d", &b);
	printf("input: %d \n", b);
	while(b != 1){

		ch[i] = b % 2;
		i+=1;
		b /= 2;
		printf("b = %d \n", b);
	}
	ch[i] = 1;
	printf("i= %d \n",i);

	for ( int a= i; a >= 0; a--){
		printf("%d", ch[a]);
	}

	puts("");
}
