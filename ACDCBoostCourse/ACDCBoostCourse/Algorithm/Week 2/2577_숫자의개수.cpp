#include <iostream>
#include <string>

using namespace std;

#define NUM 10


int main()
{
    int size;
    int A, B, C;

    int numCount[NUM] = { 0, };

    cin >> A >> B >> C;

    int multipl = A * B * C;

    string s = to_string(multipl);

    size = s.length();


    for (int i = 0; i < size; i++) {
        numCount[s[i]-'0'] += 1;


    }

   
    for (int i = 0; i < NUM; i++) {
        cout << numCount[i] << endl; 
    }
   

}