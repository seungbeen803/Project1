#include<stdio.h>
#include <Windows.h>
void main() {
	int count = 0;
	printf("count=%d\n", count); //0
	int sub();
	{
		int count = 20; //지역 변수
		printf("count=%d\n", ++count); //21		

	}
	printf("count=%d\n", ++count); //1
	system("pause");
}	
