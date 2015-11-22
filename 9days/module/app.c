#include "main.h"


void display(){

		puts("1. 조회");
		puts("2. 입력");
		puts("2. 수정");
		puts("3. 삭제");
		puts("0. 종료");

}

void runApp(){

		int key;
		scanf(" %d", &key);

		switch(key){

				case 0: exit(0); break;
		/*		case 1: 	break;
				case 2:		break;
				case 3:		break;
				case 4:		break;*/
				default: display(); break;


		}
}
