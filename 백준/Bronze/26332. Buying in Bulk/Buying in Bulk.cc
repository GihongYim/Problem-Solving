#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int c, p;

        cin >> c >> p;
        cout << c << ' ' << p << '\n';
        int price = c * p;
        if (c >= 2) {
            price -= (c - 1) * 2;
        }
        cout << price << '\n';
    }

    return 0;
}