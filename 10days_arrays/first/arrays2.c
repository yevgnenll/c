#include <stdio.h>
#include <stdlib.h> // rand, srand
#include <time.h>


#define SIZE 5
void main(){

	// int Array[5]; 
	// ������ ���� �ʱ�ȭ
	int i;
	int arrays[SIZE];
	int array2[SIZE];
	int array3[SIZE];
	int array4[SIZE];

	for (i =0; i <SIZE; i++){

		arrays[i] = 0;
		array2[i] = (i+1) * 10;
//		printf("arrays3 [ %d ]�� �Է��ϼ���: [  ]\b\b", i);
	//	scanf(" %d", &array3[i]);
		array4[i] = srand( (unsigned) time(NULL)  );
		
	}
	//1
	for (i =0; i <SIZE; i++){
			printf("arrays��: %d \n", arrays[i]);
	}

	for (i =0; i <SIZE; i++){
			printf("array2��: %d \n", array2[i]);
	}

	for (i =0; i <SIZE; i++){
	
//		printf("array3[%d]��: %d \n",i, array3[i]);
	}


	puts("rand");
	for (i =0; i<SIZE; i++)
		printf("[ %d ] ", array4[i]);
	// [0][0][0][0][0]
	//[10][20]
	// [16][2] ����ڿ��� �Է�
	// random�ϰ� rand() �Լ�
	puts("");

	

	for( i =0 ; i< 6; i++)
		printf("%d ,", (srand((unsigned)time(NULL));%45+1) );

}