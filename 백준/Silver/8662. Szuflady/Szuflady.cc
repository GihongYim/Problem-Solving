#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int cnt = 0;

    for (int i = n - 2; i >= 0; i--) {
        if (v[i] >= v[i + 1]) {
            v[i] = v[i + 1] - 1;
            if (v[i] <= 0) {
                cout << -1 << '\n';
                return 0;
            }
            cnt++;
        }
    }

    if (v[0] < 0) {
        cout << -1 << '\n';
        return 0;
    }

    cout << cnt << '\n';
    return 0;
}