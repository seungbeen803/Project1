#include<stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)

void display_star(int n, int m) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
void main(void) {
	int a, b;
	printf("���ڸ� 2�� �Է��ϼ���\n");
	scanf("%d %d", &a, &b);
	display_star(a,b);
	system("pause");
}