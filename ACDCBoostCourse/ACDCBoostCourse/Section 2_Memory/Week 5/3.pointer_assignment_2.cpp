#include <iostream>
#include <cstring>

int* sorted(int* arr, bool isAscending);

using namespace std;

int main() {
	int items[4] = { 1,5,3,2 };
	int* newItems;
	newItems = sorted(items, true);

	for (int item : items) {
		cout << item << ' ';  // 1 5 3 2
	}

	cout << endl;

	for (int i = 0; i < 4; i++) {
		cout << newItems[i] << ' ';  // 1 2 3 5
	}
}
int a[4];
int* sorted(int* arr, bool isAscending) {
	memcpy(a, arr, sizeof(int)*4);
	

	for (int i = 0; i < 4; i++) {
		int min = a[i];
		int index = i;

		for (int j = i + 1; j < 4; ++j) {
			if (isAscending) {
				if (min > a[j]) {
					min = a[j];
					index = j;
				}
			}
			else {
				if (min < a[j]) {
					min = a[j];
					index = j;
				}
			}

		}
		int temp = a[i];
		a[i] = a[index];
		a[index] = temp;
	}


	return a;
}