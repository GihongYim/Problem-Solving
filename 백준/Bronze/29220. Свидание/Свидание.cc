#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long k, n;

    cin >> k >> n;

    vector<long long> a(n);
    long long total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    bool isPossible = false;
    for (int i = 0; i < n; i++) {
        if (total - a[i] >= k) {
            isPossible = true;
            break;
        }
    }

    if (isPossible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}