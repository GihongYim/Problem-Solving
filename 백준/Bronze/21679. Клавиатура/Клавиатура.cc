#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> c(n);
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }

    int k;
    cin >> k;

    vector<int> p(k);
    for (int i = 0; i < k; ++i) {
        cin >> p[i];
        c[p[i] - 1]--;
    }

    for (int i = 0; i < n; i++) {
        if (c[i] < 0) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }

    return 0;
}