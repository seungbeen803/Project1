#include <Windows.h>
#include<stdio.h>

void print_line()
{
	printf("-------------\n");
	printf("-------------\n");
}
void main(void)
{
	int i;
	print_line(); //함수 호출
	for (i = 0; i < 5; i++) {
		printf("%d의 제곱은 %d\n", i, i * i);
	}
	print_line();
	system("pause");
}