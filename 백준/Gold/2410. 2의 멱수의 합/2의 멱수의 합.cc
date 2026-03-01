#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000000;
int dp[1000001];

int f(int n) 
{
    if (dp[n] != 0)
        return dp[n];
    if (n == 1)
        return 1;
    
    if (n % 2 == 0)
        dp[n] = (f(n - 1) + f(n / 2)) % MOD;
    else
        dp[n] = f(n - 1);
    
    return dp[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    cout << f(N) << '\n';

    return 0;
}