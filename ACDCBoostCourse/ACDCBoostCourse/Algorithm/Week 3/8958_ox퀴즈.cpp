#include <iostream>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int TestCase;
	string s;

	cin >> TestCase;
	for (int j = 0; j < TestCase; j++) {
		cin >> s;
		int sum, cnt;
		sum = cnt = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'O') cnt++;
			else cnt = 0;
			sum += cnt;
		}
		cout << sum << '\n';
	}
}