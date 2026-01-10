#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, k;
    int white = 0;
    int red = 0;

    cin >> n >> m >> k;

    // a + b * k = x

    for (int i = 1; i <= m; i++) {
        int div = i / k;
        int rem = i % k;
        white = max(white, div);
        red = max(red, rem);
    }

    cout << (white + red) * n << '\n';
    return 0;
}