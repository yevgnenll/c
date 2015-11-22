int search(int (* map)[4], int isSec, int y, int x );



int search(int (* map)[4], int isSec, int y, int x){

	int isPoss = 0; // 불가능해
	// 1 이면 가능해

	// first
	if(isSec == 0){

		puts("검색을 원한는 값을 입력하세요");
		printf("가로: [ ]\b\b");
		scanf("%d", &y);
		pritnf("세로: [ ]\b\b");
		scanf("%d", &x);

		// 1 1칸 위
		isPoss = map[y-1][x] == 0? isPoss : 1;
		// 2 1칸 위, 1칸 오른쪽 
		isPoss =map[y-1][x+1] == 0? isPoss : 1;
		// 3 1칸 오른쪽
		isPoss =map[y][x+1] == 0? isPoss : 1;
		// 4 1칸 아래 1칸 오른쪽
		isPoss =map[y+1][x+1] == 0? isPoss : 1;

		//5 5 1칸 아래
		isPoss =map[y+1][x] == 0? isPoss : 1;

		isPoss =map[y+1][x-1] == 0? isPoss : 1;

		isPoss =map[y][x-1]== 0? isPoss : 1;

		isPoss =map[y-1][x-1]== 0? isPoss : 1;

	} else {
		// second
		// 1 1칸 위
		isPoss = map[y-1][x] == 0? isPoss : 1;
		// 2 1칸 위, 1칸 오른쪽 
		isPoss =map[y-1][x+1] == 0? isPoss : 1;
		isPoss =map[y-1][x-1]== 0? isPoss : 1;

	}

	
	

	if(isPoss == 0)
		search(map, 1, x, y); // 한칸위로 올라가서 테스트한다

}