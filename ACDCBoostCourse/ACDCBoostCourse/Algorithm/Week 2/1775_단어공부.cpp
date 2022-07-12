#include <iostream>
#include <string>

using namespace std;

#define ALPHABET_NUM 26



int main()
{
    string s;
    int size;
    int alphabetCount[ALPHABET_NUM] = { 0, };
    int max = 0;
    char answer;

    cin >> s;
    size = s.length();

    for (int i = 0; i < size; i++) {
        if (s[i] >= 'a') alphabetCount[s[i] - 'a'] += 1;
        else alphabetCount[s[i] - 'A'] += 1;

    }

    for (int i = 0; i < ALPHABET_NUM; i++) {
        if (alphabetCount[i] == max) {
            answer = '?';
        }
        else if (alphabetCount[i] > max) {
            max = alphabetCount[i];
            answer = 'A' + i;
        }
    }

    cout << answer << endl;

}