#include<stdio.h>
#include <Windows.h>
int get_Large(int a, int b) {
	if (a > b)return a;
	else return b;
}
void main() {
	int i, j;
	printf("두 개의 숫자를 입력하세요\n");
	scanf("%d %d", &i, &j);
	int result = get_Large(i, j);
	printf("두 수 중에 큰 수는 : %d \n", result);
	system("pause");
}