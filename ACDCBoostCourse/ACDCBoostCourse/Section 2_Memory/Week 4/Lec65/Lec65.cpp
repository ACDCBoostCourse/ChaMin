// 정적할당 : int a;
// 동적할당 : 프로그램 실행 중에 변수를 메모리에 할당하는 것 

#include <iostream>

using namespace std;

class Vector2 {
public:
	Vector2() : x(0), y(0) {
		cout << this << " : Vector2()" << endl;
	}
	Vector2(const float x, const float y) : x(x), y(y) {
		cout << this << " : Vector2(const float x, const float y)" << endl;
	}
	~Vector2(){
		cout << this << " : ~Vector2()" << endl;
	}
	float GetX() const { return x; }
	float GetY() const { return y; }

private:
	float x;
	float y;

};

int main() {
	//1. 변수의 동적할당
	int *a = new int(5);
	 
	cout << a << endl;
	cout << *a << endl;

	*a = 10;

	cout << a << endl;
	cout << *a << endl;

	delete a;  // 메모리 해제


	//2. 배열의 동적할당
	int *arr;
	int len;

	cout << "동적할당할 배열 길이 입력 : ";
	cin >> len;

	arr = new int[len];

	for (int i = 04; i < len; i++) {
		arr[i] = len - i;
	}
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}

	delete[] arr;


	//3. 객체 동적할당
	Vector2 s1 = Vector2(); // 객체 생성
	Vector2 s2 = Vector2(3, 2);

	Vector2* d1 = new Vector2();
	Vector2* d2 = new Vector2(3, 2);

	cout << "(" << d1->GetX() << "," << d1->GetY() << endl;
	cout << "(" << d2->GetX() << "," << d2->GetY() << endl;

	delete d1;
	delete d2;
}