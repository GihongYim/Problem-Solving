#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    long long n, m;

    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> n >> m;
        if (n == 1 || m == 1 || ((n + m) &1))
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    return 0;
}