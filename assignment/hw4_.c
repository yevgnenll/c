#include <stdio.h>

void main(){

	int a, b, c, max =0;

	puts("writ a number");
	scanf("%d %d %d", a, b, c);

	max = a-b>0 ? a : b;
	max = max - c >0 ? max: c;

	printf("%d", max);

}
