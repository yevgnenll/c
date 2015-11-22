#include<stdio.h>

void main(){
/*
	float fResult = 0.0f;
	int i = 0;

	for(i =0; i<20; ++i)
			fResult += 0.1f;

	printf("%.10f \n", fResult);


	for (i =0; i<30 ; ++i)
			fResult += 0.1f;

	printf("%.10f\n", fResult);

*/
/*
		double dblData = 123.45;
		float flData = -123.45f;

		printf("%d\n", sizeof(123.45));
		printf("%d\n", sizeof(123.45f));
*/


		int nData = 10;
		int *pnData = &nData;
		*pnData = 5;
		
		printf("%d", *pnData);

}
