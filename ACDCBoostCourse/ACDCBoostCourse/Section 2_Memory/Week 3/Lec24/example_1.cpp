#include <stdio.h>

int main() {
	int a = 20;
	int* ptr_a;

	char c = 'h';
	char* ptr_c;

	ptr_a = &a;  // &a : address of a
	ptr_c = &c;

	printf("a�� �� : %d\n", a);
	printf("a�� �ּҰ� : %d\n", &a);
	printf("ptr_a�� ����� �� : %d\n", ptr_a);
	printf("ptr_a�� ����Ű�� ������ �� : %d\n", *ptr_a);
	
}