#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long k;
    long long a, x;
    long long b, y;

    cin >> k;

    cin >> a >> x;
    cin >> b >> y;

    long long result = max(max(0LL, k - a) * x + max(0LL, k - a - b) * y, max(0LL, k - b) * y + max(0LL, k - a - b) * x);
    cout << result << "\n";
    return 0;
}