#include<stdio.h>
#include <Windows.h>
#include<time.h>

int count;//�ʱ�ȭ ���� ����� �� �ִ�
int sum_it(int money) {
	static int sum = 0;
	sum += money;
	printf(" ������ �հ�� %d �Դϴ�\n", sum);
}
int random() {
	int rand_num = rand() % 10;
	printf("%d", rand_num);
	return rand_num;
}
void main() {
	srand(time(NULL));
	for(int i=0;i<5;i++){
		sum_it(random());
	}
	system("pause");
}