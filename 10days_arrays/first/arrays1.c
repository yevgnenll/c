#include <stdio.h>
#define ARRAY_SIZE 5


void main(){


	//int arrays[ARRAY_SIZE] = {0}; // [1][2][3][0][0]_나머진 0으로 초기화
	//int arrays[ARRAY_SIZE] = {1,}; // 이건 나머진 0으로 초기화하겠다 (명시적)
	//int arrays[ARRAY_SIZE] =0; // 배열 초기화에는 중괄호가 있어야합니다

	int arrays[ARRAY_SIZE] = {0,1,2,3,4,5};
	// 이니셜라이저가 너무 많습니다
/*
	int i;

	for(i =0; i< ARRAY_SIZE ; i++){
	
		printf("[ %d ] \n", arrays[i]);
	
	}
	*/

/*
	printf("%d \n", arrays[0]);
	
	for (i=0; i<MAX_SIZE ; i++){
		arrays[i] = i;
		printf("%d \n", arrays[i]);
	}
*/
}