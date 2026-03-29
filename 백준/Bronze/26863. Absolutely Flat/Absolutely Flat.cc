#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> a(4);
    int b;

    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    cin >> b;
    sort(a.begin(), a.end());

    if (a[1] != a[2] || a[2] != a[3]) {
        cout << 0 << '\n';
    } else {
        if (a[0] == a[1]) {
            cout << 1 << '\n';
        } else if (a[0] + b == a[1]) {
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }
    return 0;
}