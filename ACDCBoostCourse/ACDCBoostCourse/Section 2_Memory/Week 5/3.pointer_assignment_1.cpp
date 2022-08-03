// 메인 함수에 아래 코드를 복사해서 붙여넣고 정상 작동하는지 검증하세요!
#include <iostream>

using namespace std;

void sorted(int* arr, bool isAscending);

int main() {
	int items[4] = { 1,5,3,2 };
	sorted(items, true);

	for (int item : items) {
		cout << item << ' ';  // 1 2 3 5
	}

	cout << endl;
	sorted(items, false);

	for (int item : items) {
		cout << item << ' ';  // 5 3 2 1
	}
}



void sorted(int* arr, bool isAscending) {
	for (int i = 0; i < 4; i++) {
		int min = arr[i];
		int index = i;

		for (int j = i + 1; j < 4; ++j) {
			if (isAscending) {
				if (min > arr[j]) {
					min = arr[j];
					index = j;
				}
			}
			else {
				if (min < arr[j]) {
					min = arr[j];
					index = j;
				}
			}
			
		}
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
}