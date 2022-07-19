#include <stdio.h>

int main() {
	int a = 10;

	int* ptr;
	ptr = &a; //a의 주소값을 가르키는 포인터 

	int** ptr_ptr;
	ptr_ptr = &ptr;

	printf("a =  %d\n",a);
	printf("&a =  %d\n", &a);

	printf("ptr =  %d\n", ptr);
	printf("&ptr =  %d\n", &ptr);

	printf("ptr_ptr =  %d\n", ptr_ptr);
	
}