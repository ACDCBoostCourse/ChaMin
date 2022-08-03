#include <iostream>
#include <string>

using namespace std;

int a[10], b[10];
int suma[10], sumb[10];

int main() {
    for (int i = 1; i <= 9; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= 9; i++) {
        cin >> b[i];
    }
    suma[1] = a[1];
    sumb[1] = b[1];
    for (int i = 2; i <= 9; i++) {
        suma[i] = suma[i - 1] + a[i];
        sumb[i] = sumb[i - 1] + b[i];
    }
    int cnt = 0;
    for (int i = 1; i <= 9; i++) {
        if (suma[i] > sumb[i - 1]) cnt++;
    }
    if (cnt == 0) cout << "No" << endl;
    else cout << "Yes" << endl;
}
