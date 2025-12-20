#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int q;
    int a, b;

    cin >> q;
    while (q--) {
        cin >> a >> b;

        int inner;
        int outer;
        if (a < b) {
            inner = b - a;
            outer = 43 - inner;
        } else {
            inner = 43 - (a - b);
            outer = 43 - inner;
        }
        if (inner <= outer) {
            cout << "Inner circle line\n";
        } else {
            cout << "Outer circle line\n";
        }
    }

    return 0;
}