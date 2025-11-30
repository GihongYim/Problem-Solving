#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x;
    int total = 0;
    cin >> n >> x;

    vector<int> p(n);

    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        total += p[i];
    }

    if (total % x != 0) {
        cout << 0 << '\n';
    } else {
        cout << 1 << '\n';
    }

    
    return 0;
}