#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COL 10
#define ROW 10

int selectRank();
char maps[6];
char * map(int count);

void main(){

		int i, j, count;
		count = selectRank();
		// 중복되지 않는 좌표




}

int selectRank(){

		char rank;
		int count;
		puts("select your game difficulty");
		scanf(" %c", &rank);

			switch(rank){

				case 'a': count = 6;
									break;
				case 'b': count =5;
									break;
				case 'c': count =4;
									break;
	 			default: 
							puts("you can choose a, b, c");
							count = selectRank();
							break;
			}

			return count;
}

char map(int count){

		int i, j;
		
		srand( (unsigned) time(NULL) );
		for(i =0; i<count ; i++){
				for(j =0; j<6; j++){
					maps[i][j] = 

				}
		}

}
