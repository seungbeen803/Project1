#include<stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)

int compute_sum(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += i; //���� ���Ѵ�
	}
	return (sum);
}
void main(void) {
	int result, data;
	printf("���� ���մϴ� : ");
	scanf("%d", &data); //�Է��� �޴´�
	result = compute_sum(data);
	printf("%d\n", result);
	system("pause");
}