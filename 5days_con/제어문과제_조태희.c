/*#include <stdio.h>
void main(){
	char ch;
	printf("1���� ���ĺ��� �Է��� �Ͻÿ�: \n");
	scanf("%c", &ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("%c",ch+32);
	}
	else 
		printf("%c",ch-32);
	
}
#include <stdio.h>
void main() {
	int num;
	printf("������ �Է��Ͻÿ�\n");
	scanf("%d", &num);
	if(num>=91&&num<=100)
	{
		printf("A \n");
	}
	else if(num>=81&&num<=90)
	{
		printf("B \n");
	}
	else if(num>=71&&num<=80)
	{
		printf("C \n");
	}
	else if(num>=61&&num<=70)
	{
		printf("D \n");
	}
	else 
		printf("F \n");
}
*/
#include <stdio.h>
void main(){
	int num;
	printf("������ �Է��ϼ���\n");
	scanf("%d", &num);
	switch (num/10) {
     case 10:
     case 9:
          printf("A�Դϴ�.\n");
          break;
     case 8:
          printf("B�Դϴ�.\n");
          break;
     case 7:
          printf("C�Դϴ�.\n");
          break;
     case 6:
          printf("D�Դϴ�.\n");
          break;
     default:
          printf("F�Դϴ�.\n");
          break;
     }
}