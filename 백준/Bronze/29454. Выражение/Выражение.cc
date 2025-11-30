#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    
    cin >> n;
    
    vector<int> a(n);
    int total = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total += a[i];
    }

    for (int i = 0; i < n; i++) {
        if (total - a[i] == a[i]) {
            cout << i + 1 << '\n';
            break;
        }
    }
    
    return 0;
}