#include<stdio.h>
#include <Windows.h>
#include<time.h>

int count;//초기화 없이 사용할 수 있다
int sum_it(int money) {
	static int sum = 0;
	sum += money;
	printf(" 현재의 합계는 %d 입니다\n", sum);
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