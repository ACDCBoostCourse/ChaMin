#include <stdio.h>

int main() {
	int arr[10] = {  1,2,3,4,5,6,7,8,9,10 };
	printf("arrÀÇ °ª : %d\n", arr);
	for (int i = 0; i < 10; i++) {
		printf("&arr[%d]=%d\n", i, &arr[i]);
		printf("arr + %d = %d\n", i, arr + i);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d", *(arr + i));
	}
	printf("\n");

	for (int *ptr = arr; ptr < arr; ptr++) {
		printf("%d", *ptr);
	}
	printf("\n");


}