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

    sort(s.begin(), s.end());

    char ch = 'A';
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i][0] == ch) {
            cnt++;
            ch++;
        } else if (s[i][0] > ch) {
            break;
        }
    }
    cout << cnt << endl;

    return 0;
}