#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k;
    long long a, x;
    long long b, y;

    cin >> k;

    cin >> a >> x;
    cin >> b >> y;

    long long result = max((k - a) * x + (k - a - b) * y, (k - b) * y + (k - a - b) * x);
    cout << result << "\n";
    return 0;
}