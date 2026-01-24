#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (cin >> s) {
        if (s == "*") break;

        bool ok = true;
        int n = s.size();

        for (int d = 0; d <= n - 2 && ok; d++) {
            set<string> seen;
            for (int i = 0; i + d + 1 < n; i++) {
                string p;
                p += s[i];
                p += s[i + d + 1];
                if (seen.count(p)) {
                    ok = false;
                    break;
                }
                seen.insert(p);
            }
        }

        if (ok)
            cout << s << " is surprising.\n";
        else
            cout << s << " is NOT surprising.\n";
    }

    return 0;
}
