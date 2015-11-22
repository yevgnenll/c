#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COL 10
#define ROW 10

// 상수설정
#define BOM 0 // 0 is 
#define SAFE_ZONE 1

int level = 10; // default - 10 mines were burried
void gameStart(int (*MAP)[COL]){

	int i, j, val;

	srand( (unsigned)time(NULL));

	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			
			val = rand() % level;
			printf("val: %d ", val);
			if( val == 0 )
				MAP[i][j] = BOM;
			else
				MAP[i][j] = SAFE_ZONE;
		}
	}

}

void gameShow(int (*MAP)[COL]){

	int i, j, val;
	puts("");
	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			if(MAP[i][j] == BOM)
				printf("[@]");
			else
				printf("[ ]");
		}
		puts("");
	}

}

void main(){

	int MAP[ROW][COL];
	// 1 game start -> setup mines
	gameStart(MAP);

	gameShow(MAP);
}