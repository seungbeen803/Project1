#include<stdio.h>
#include <Windows.h>

void gugudan(int a)
{
	for (int i = 1; i < 10; i++)
	{
		printf("%d*%d =%2d\n", a, i, (a * i));
	}
}
int main(void) {
	for (int k = 2; k <= 9; k++) {
		gugudan(k);
		printf("\n");
	}
	system("pause");
}
