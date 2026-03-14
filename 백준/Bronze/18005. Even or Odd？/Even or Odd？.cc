#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;

    cin >> n;
    if (n % 2 == 0) {
        if ((n / 2) % 2 == 0) {
            cout << 2 << '\n';
        } else {
            cout << 1 << '\n';
        }
    } else {
        cout << 0 << '\n';
    }

    return 0;
}