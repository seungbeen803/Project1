#include<stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)

int compute_sum(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += i; //합을 구한다
	}
	return (sum);
}
void main(void) {
	int result, data;
	printf("합을 구합니다 : ");
	scanf("%d", &data); //입력을 받는다
	result = compute_sum(data);
	printf("%d\n", result);
	system("pause");
}