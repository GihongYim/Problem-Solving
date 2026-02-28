#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int d;

    int n1, n2;

    // (n2 + n1) * (n2 - n1) = d
    // (n2 + n1) = x
    // (n2 - n1) = y
    // n2 = (x + y) / 2
    // n1 = (x - y) / 2

    cin >> d;

    for (int i = 1; i * i <= d; i++) {
        if (d % i == 0) {
            int n2, n1;

            int x = d / i;
            int y = i;

            if ((x + y) % 2 == 1) continue;
            if ((x - y) % 2 == 1) continue;

            n2 = (x + y) / 2;
            n1 = (x - y) / 2;

            cout << n1 << ' ' << n2 << '\n';
            return 0;
        } 
    }

    cout << "impossible" << '\n';
    
    return 0;
}