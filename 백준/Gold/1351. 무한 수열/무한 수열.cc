#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

#define ll long long
ll n, p, q;
unordered_map<ll, ll> dp;

ll solve(ll n) {

    ll ret;

    if (dp.find(n) == dp.end()) {
        ret = solve(n / p) + solve(n / q);
        dp.insert(make_pair(n, 0));
        dp[n] = ret;
        return dp[n];
    } else {
        return dp[n];
    }
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n >> p >> q;

    dp[0] = 1;
    cout << solve(n) << '\n';
    return 0;
}
