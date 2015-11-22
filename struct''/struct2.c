//---------------------------------------------------------------------
// 구조체의 크기
//---------------------------------------------------------------------
#include <stdio.h>

typedef struct test{
//+		t.buf	0x0020f79c "A"	char [10]
//+		t.buf	0x0020f79c "
//A"	char [10]

	int a
	char buf[10];
}TEST;

	void main(){
	TEST t = {10, 10, 65, 0, 97};
	printf("size: %d\n", sizeof(TEST));
	// char하나 꼇다고 왜 12가 나오지?

}
