#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    int result = 0;

    cin >> a >> b;
    
    if ((a % 2) == 0) {
        a--;
    }

    if ((b % 2) == 1) {
        b++;
    }

    cout << (b - a + 1) / 2 << '\n';

    return 0;
}