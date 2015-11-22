//-----------------------------------
// app.c
//-----------------------------------
#include "main.h"


void appRun(){

	int key;

		while(1){
			display();
			scanf(" %d", &key);

			switch(key){
				case 1:	insert(); 	break;
				case 2: print();	break;
				case 3: find(); 	break;
				case 4: delete(); 	break;
				case 0: exit(0); 	break;

			}

		}
}

void display(){

	puts("1. 입력");
	puts("2. 출력");
	puts("3. 검색");
	puts("4. 삭제");
	puts("0. 종료");
		
}
