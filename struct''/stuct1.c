#include <stdio.h>

typedef struct student{

	int studentNo;				// �й�
	char studentName[200];	// �̸�
	int studentAge;				// ����

}STUDENT;

// ������ ������Ÿ���� ���Ӱ� ������ ���ڴ�
typedef int INT;

// 208byte�� ���´�


void main(){

	//����ü ���� -> java ��ü
	// type
	STUDENT stu1;
	// ����� ���ÿ� �ʱ�ȭ
	int no = 100;
	STUDENT stu2 ={ 2015, "ȫ�浿", 20};
	
//	stu3[0] = {2015, "��ö��", 21};
	INT a;

	printf("-- %d \n", sizeof(struct student));

	// ����ü ����� ����
	// ����ü����.����̸�(.) ������

	printf("�й�: %d �̸�: %s ����: %d \n", stu2.studentNo, stu2.studentName, stu2.studentAge );

	

}