#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char ch[26];
char ret[10][100];
int lot[5][6];

char * init(char * mid);
int count(char * bit, char one);
int * init2( int (*pArray)[4]);
void put_int( int (*pArray)[4] );
char * string();
void lotto();

void main(){
	
	int i, j;
	char * res = init(ch);
	int  m[12] = {0,};
	char str[10][100]; 
	memset(str, 0, 1000); // str변수의 1000byte를 0으로 초기화하겠다

	lotto();
	for(i=0; i<5; i++){

			for(j=0; j<6; j++){
				printf("[%d] ", lot[i][j]);
			}
			puts("");
	}

	string();	
	for(i=0; i<10; i++)
		puts( ret[i] );

/*
	put_int( init2( m ));

	printf("bit count: %d \n", count("Bit Computer", 'A'));


	for(i=0; i<26; i++){
			printf("%c ", res[i]);
	}
	puts("");
	*/
}

//6: lotto
void lotto(){

//		int lot[5][6];
		int i,j;
		int check, mid =0;
		int k = 0;

		srand( (unsigned) time(NULL));

		for(i=0; i<5; i++){

			while(1){	

				check = 0;
				mid = rand() % 45 +1;
				
				for(j=0; j<6; j++)
					check = (mid == lot[i][j]) ? 1 : check;

				printf("check: %d, mid: %d \n", check, mid);
				
				
				if(check == 0){
						lot[i][k] = mid;
						k +=1;
				}
				if(k==6){
						k =0;
						break;
				}
			}
		}


}

//5 - 2차원배열 포인터로 받는다
char * string( (*str)[100] ) {
	//char *str
					// 첫번째 주소값을 줘야해 
	// 100개짜리 1차원 배열이 10개 있는거다
	// 여기 그냥
		gets(ret); // 이거면 되나본데?
/*
		int i;
		for(i =0; i<10; i++){

				gets(ret[i]);
		}
*/
		return ret;

}


//4
void put_int(int (*pArray)[4] ){

		//[1][2][3][4]
		//[5][6][7][8]
		//[9][10][11][12]
		// 일때 첫번째것의 주소를 갖는데
		// 이때 [1][2][3][4]의 주소값을 알려줘야해서
		// pArray[4]를 보낸다

		int i, j;
		for(i =0; i<3; i++){

				for(j =0; j<4; j++){
					printf("%d ", pArray[i][j]);

				}
				puts("");
		}


}


// 3
int * init2( int (*pArray)[4]){

		int i, j;
		int sum =1;
		for(i =0; i< 3; i++){

				for(j=0; j<4; j++){
					
						// 1st method
						pArray[i][j] = sum;
						sum+=1;
						// 2nd pArray[i][j] = i*4+j+1;
						// 3rd [i][j] = [i][j-1]+1;
				}
		}

		return pArray;

}

// 2
int count(char * bit, char one){

		int i =0;
		// 입력받은 문자오 같은게 있을때 Bit Computer에서 겹치는 갯수를 리턴하래

		while(bit[i] != '\0'){
				i+=1;
		}
		return i+1;

}
// 1
char * init(char * mid){
	// 배열의 이름은 시작위치에 주소값을 가지고 있기 때문에 가능하다

		int i;
		char j= 'Z'+1;
		for(i=0; i<26; i++){
				j -= 1;
			mid[i]= j;
		}

		return mid;

}
