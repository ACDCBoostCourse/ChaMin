#include <stdio.h>

int main() {
	int a = 20;
	int* ptr_a;

	char c = 'h';
	char* ptr_c;

	ptr_a = &a;  // &a : address of a
	ptr_c = &c;

	printf("a의 값 : %d\n", a);
	printf("a의 주소값 : %d\n", &a);
	printf("ptr_a에 저장된 값 : %d\n", ptr_a);
	printf("ptr_a가 가리키는 변수의 값 : %d\n", *ptr_a);
	
}