#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m;

    cin >> n >> m;

    vector<string> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (v[i][j] == '1' && v[i][j + 1] == '1' && v[i + 1][j] == '1' && v[i + 1][j + 1] == '1') {
                cout << "1\n";
                return 0;
            }
        }
    }

    cout << "0\n";

    return 0;
}