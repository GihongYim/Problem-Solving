#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    const long long SHIFT_Y = 1LL << 29;

    while (tc--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            long long x, y;
            cin >> x >> y;

            cout << i << ' '
                 << x + 1 << ' '
                 << y + SHIFT_Y << '\n';
        }
    }

    return 0;
}