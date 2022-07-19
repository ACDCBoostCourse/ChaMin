#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;

	int* ptr;

	ptr = &a;
	printf("ptr_a가 가리키는 변수의 값 : %d\n", *ptr);

	ptr = &b;
	printf("ptr_a가 가리키는 변수의 값 : %d\n", *ptr);
	
}