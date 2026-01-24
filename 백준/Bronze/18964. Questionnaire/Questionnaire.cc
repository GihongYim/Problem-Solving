#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;

    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m = 2;
    int mod1 = 0;
    for (int i = 0; i < n; i++) {
        mod1 += (a[i] % m);
    }

    int k;
    if (mod1 * 2 > n) {
        k = 1;
    } else {
        k = 0;
    }

    cout << m << ' ' << k << '\n';

    return 0;
}