#include<stdio.h>
#include <Windows.h>

//static����
int count;//�ʱ�ȭ ���� ����� �� �ִ�
int sub() {
	count = 1;
	static int acount = 10;//���������� ��������
	printf("count=%d,acount=%d\n", ++count, ++acount);
}
void main() {
	sub();//2, 11
	sub();//2, 12
	sub();//2, 13
	system("pause");
}