#include <stdio.h>
#define ARRAY_SIZE 5


void main(){


	//int arrays[ARRAY_SIZE] = {0}; // [1][2][3][0][0]_������ 0���� �ʱ�ȭ
	//int arrays[ARRAY_SIZE] = {1,}; // �̰� ������ 0���� �ʱ�ȭ�ϰڴ� (�����)
	//int arrays[ARRAY_SIZE] =0; // �迭 �ʱ�ȭ���� �߰�ȣ�� �־���մϴ�

	int arrays[ARRAY_SIZE] = {0,1,2,3,4,5};
	// �̴ϼȶ������� �ʹ� �����ϴ�
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