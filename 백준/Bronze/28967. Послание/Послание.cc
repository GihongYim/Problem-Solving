#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string c;
    string s;

    int cnt = 0;
    int curr = 0;
    cin >> c >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c[curr]) {
            curr++;
        }
        if (curr == c.length()) {
            cnt++;
            curr = 0;
        }
    }

    cout << cnt << '\n';

    return 0;
}