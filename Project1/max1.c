#include<stdio.h>
#include <Windows.h>
int get_Large(int a, int b) {
	if (a > b)return a;
	else return b;
}
void main() {
	int i, j;
	printf("�� ���� ���ڸ� �Է��ϼ���\n");
	scanf("%d %d", &i, &j);
	int result = get_Large(i, j);
	printf("�� �� �߿� ū ���� : %d \n", result);
	system("pause");
}