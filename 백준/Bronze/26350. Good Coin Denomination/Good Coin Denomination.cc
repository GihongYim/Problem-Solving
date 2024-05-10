#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, d, coin[10];
    
    cin >> n;
    while (n--) {
        cin >> d;
        for (int i = 0; i < d; i++)
            cin >> coin[i];
        cout << "Denominations: ";
        for (int i = 0; i < d; i++)
            cout << coin[i] << ' ';
        cout << '\n';
        bool good = true;
        for (int i = 0; i < d - 1; i++) {
            if (coin[i] * 2 > coin[i + 1]) {
                good = false;
                break;
            }
        }
        if (good) {
            cout << "Good coin denominations!\n";
        } else {
            cout << "Bad coin denominations!\n";
        }
        cout << '\n';
    }

    return 0;
}