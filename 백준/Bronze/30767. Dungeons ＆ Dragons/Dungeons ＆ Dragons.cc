#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    long long a, b, c, d;

    cin >> n;

    cin >> a >> b;
    cin >> c >> d;

    cout << max(0LL, min(d, n - a) - max(c, n - b) + 1) << '\n';
    return 0;
}