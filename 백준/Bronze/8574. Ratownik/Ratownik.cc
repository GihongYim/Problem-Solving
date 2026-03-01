#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k, x, y;

    cin >> n >> k >> x >> y;

    int ans = 0;
    
    int distSquare = k * k;

    for (int i = 0; i < n; i++) {
        int a, b;

        cin >> a >> b;

        int dSquare = (x - a) * (x - a) + (y - b) * (y - b);

        if (dSquare > distSquare) {
            ans++;
        }
    }
    cout << ans << "\n";

    return 0;
}