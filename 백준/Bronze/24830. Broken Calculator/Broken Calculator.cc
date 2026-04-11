#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    
    long long ans = 1;
    for (int i = 0; i < n; i++) {
        long long x, y;
        char op;

        cin >> x >> op >> y;

        if (op == '+') {
            ans = (x + y) - ans;
        } else if (op == '-') {
            ans = ans * (x - y);
        } else if (op == '*') {
            ans = (x * y);
            ans = ans * ans;
        } else if (op == '/') {
            if (x % 2 == 0) {
                ans = x / 2;
            } else {
                ans = (x + 1) / 2;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}