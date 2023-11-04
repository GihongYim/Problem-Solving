#include <iostream>
using namespace std;

long long dp[1000002];

long long fib(int n) {
    int m;

    dp[0] = 0;
    dp[1] = 1;

    if (n < 0) {
        m = -1;
        n = -n;
    } else if (n > 0) {
        m = 1;
    } else {
        m = 0;
    }
    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i -2]) % 1000000000;
    }
    if (m < 0 && n % 2 == 0) {
        cout << -1 << '\n';
    } else if (n == 0) {
        cout << 0 << '\n';
    } else {
        cout << 1 << '\n';
    }
    cout << dp[n] << '\n';
    return 0;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;
    fib(n);
    return 0;
}