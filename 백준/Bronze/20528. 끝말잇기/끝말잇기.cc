#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    
    cin >> n;

    vector<string> s(n);

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    bool isSame = true;

    char c = s[0][0];

    for (int i = 1; i < n; i++) {
        if (s[i][0] != c) {
            isSame = false;
        }
    }

    if (isSame) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }

    return 0;
}