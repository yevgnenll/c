#include <stdio.h>
//------------------------------------------------------------------------
// 지역변수: local변수, 자동변수, auto변수

	void foo();
	int g_x = 100; // global 변수 소스코드 전체에서 호출이 가능하다

	

void main(){


		// 지역(함수)변수
		int x= 10, y= 20;
		g_x++;
		foo();


}

	void foo(){
			extern int g_x;
			//extern은 외부에서 선언된 전역변수를 로컬에서 사용하기 위해 선언하는 것 

			// 더 좁은 범위의 변수를 우선순위로 한다 
			printf("%d", g_x);
			// 이 상황에선 전역변수 g_x를 불러올 방법이 없다
			// printf("%d", ::g_x); scope연산자를 사용해서 c++에서는 이렇게 하면
			// 전역변수를 불러올 수 있다.
			// 전역변수가 선언되어있다면 매개변수 없이 코딩이 가능하다 

	}
