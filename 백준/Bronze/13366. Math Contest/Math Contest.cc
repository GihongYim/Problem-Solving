#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    string n;
    int mod = 0;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        cin >> n;
        mod = 0;
        for (int i = 0; i < n.length(); i++) {
            mod += (n[i] - '0');
            mod %= 9;
        }
        
        if (mod == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}