#include<stdio.h>
#include <Windows.h>

//��������
int count; //�ʱ�ȭ ���� ����� �� �ִ�
int sub() {
	printf("count=%d\n", ++count);
}
void main() {
	sub();//1
	sub();//2
	sub();//3
	system("pause");
}

/*int count; //�ʱ�ȭ ���� ����� �� �ִ�
int sub() {
	count = 1;
	printf("count=%d\n", ++count);
}
void main() {
	sub();//2
	sub();//2
	sub();//2
	system("pause");
}*/