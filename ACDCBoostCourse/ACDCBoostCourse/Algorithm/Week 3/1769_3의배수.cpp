#include <iostream>
#include <string.h>
#include <string>

using namespace std;

void process(char num[])
{
    int cnt = 0;

    int sum;
    while (strlen(num) > 1)
    {
        sum = 0;
        for (int i = 0; i < strlen(num); i++) {
            sum += num[i] - '0';
        }
        sprintf(num, "%d", sum);
        cnt++;
    }
    cout << cnt << '\n';
    if (stoi(num) != 3 && stoi(num) != 6 && stoi(num) != 9) cout << "NO";
    else cout << "YES";
}
int main() {
    char num[1000001];
    cin >> num;
    process(num);
}