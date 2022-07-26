#include <iostream>

using namespace std;

class String {
public : 
	String() {
		strData = NULL;
		len = 0;
	}
	String(const char* str) {
		len = strlen(str);
		strData = new char[len+1];
		strcpy(strData, str); // 깊은 복사
	}
	~String() {
		delete[] strData;
	}
	char* GetStrData() const {
		return strData;
	}
	int GetLen() const {
		return len;
	}
private:
	char* strData;
	int len;

};

int main() {
	int *a = new int(5);
	int* b = new int(3);

	a = b; // 얕은 복사(참조만 복사)
	*a = *b; // 깊은 복사(값을 복사)

	delete a;
	delete b;
}