#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    
    cin >> n >> m;
    vector<int> s(n + m + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }

    vector<int> t[n + 1];
    for (int i = 1; i <= n; i++) {
        t[i].resize(n + m + 1, 0);
        for (int j = 1; j <= n + m; j++) {
            cin >> t[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n + m; j++) {
            if (i == j) continue;
            s[i] -= t[i][j];
            s[j] += t[i][j];
        }
    }

    for (int i = 1; i <= n + m; i++) {
        cout << s[i] << ' ';
    }
    cout << '\n';

    return 0;
}