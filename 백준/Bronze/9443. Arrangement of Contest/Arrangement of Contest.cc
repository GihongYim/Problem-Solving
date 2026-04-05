#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<bool> exist(26, false);

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        exist[s[0] - 'A'] = true;
    }

    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        if (exist[i]) cnt++;
        else break;
    }

    cout << cnt << '\n';
}