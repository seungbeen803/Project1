#include<stdio.h>
#include <Windows.h>

//전역변수
int count; //초기화 없이 사용할 수 있다
int sub() {
	printf("count=%d\n", ++count);
}
void main() {
	sub();//1
	sub();//2
	sub();//3
	system("pause");
}

/*int count; //초기화 없이 사용할 수 있다
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