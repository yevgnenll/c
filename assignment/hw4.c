#include<stdio.h>

void main(){
/*
	int nResult, w = 0, x = -1, y = -1, z = 1;
	nResult = w++ || x++ && ++y || ++z;
	
	printf("%d %d %d %d %d\n", w, x, y, z, nResult);
	*/
/*
	int s;
	puts("put a number");
	scanf("%d", &s);

	s>10?puts("1"):puts("0");
*/
	
	int a, b,c;

	scanf("%d %d %d", &a, &b, &c);

	if(a-b>0){
			if(a-c>0){
					printf("%d \n", a);
			} else {
					printf("%d \n", c);
			}
	} else if( a==b) {
			if( a -c >0 ){
					printf("%d \n", a);
			} else {
					printf("%d, %d", a, b);
			}
	} else {
			if(b-c>0){
					printf("%d", b);
			} else {
					printf("%d", c);
			}
	}

	puts("");

}

