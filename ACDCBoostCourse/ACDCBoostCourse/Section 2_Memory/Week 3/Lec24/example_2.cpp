#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;

	int* ptr;

	ptr = &a;
	printf("ptr_a�� ����Ű�� ������ �� : %d\n", *ptr);

	ptr = &b;
	printf("ptr_a�� ����Ű�� ������ �� : %d\n", *ptr);
	
}