#include<stdio.h>
#include <Windows.h>

//static변수
int count;//초기화 없이 사용할 수 있다
int sub() {
	count = 1;
	static int acount = 10;//지역변수가 정적변수
	printf("count=%d,acount=%d\n", ++count, ++acount);
}
void main() {
	sub();//2, 11
	sub();//2, 12
	sub();//2, 13
	system("pause");
}