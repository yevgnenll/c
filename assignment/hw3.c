#include <stdio.h>

void main(){


	char szBuffer[128] = {0};
	printf("Input your name : ");
	gets(szBuffer);
    printf("%d", sizeof(szBuffer));

	printf("your name is ");
	puts(szBuffer);
    printf("%d", sizeof(szBuffer));
	puts("");

}
