#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, seed, x1, x2;
    if (!(cin >> m >> seed >> x1 >> x2)) return 0;
    for (int a = 0; a < m; ++a) {
        int c = (x1 - (a * seed) % m) % m;
        if (c < 0) c += m;
        int check = ( (a * x1) % m + c ) % m;
        if (check == x2) {
            cout << a << " " << c << "\n";
            return 0;
        }
    }

    return 0;
}