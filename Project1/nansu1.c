#include<stdio.h>
#include<Windows.h>
#include<time.h>

void main(void) {
	srand(time(NULL));
	int i;
	for (i = 0; i < 6; i++) {
		printf("%d", 1 + (rand() % 45);
	}
	printf("\n");
	system("pause");
}