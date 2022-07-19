#include <stdio.h>

int main() {

	/*
	1. ptr == &ptr[0]
	2. *ptr == ptr[0]
	3. ptr+1 == ptr에 sizeof(*ptr)을 더한 값
	*/

	int arr[2][3] = {{ 1,2,3 } ,{4,5,6} };

	printf("%d\n", &arr);
	printf("%d\n", &arr[0]);
	printf("%d\n", &arr[0][0]);

	int(*ptr)[3] = arr;

	for (int i=0; i<2; i++){
		for (int j = 0; j < 3; j++) {
			printf("%d", ptr[i][j]);
		}
		printf("\n");
	}

	for (int(*row)[3] = arr; row < arr + 2; row++) {
		for (int* col = *row; col < *row + 3; col++) {
			printf("%d", *col);
		}
		printf("\n");
	}

}