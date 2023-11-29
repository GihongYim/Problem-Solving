#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int N;
int t[15000055];
ll p[1500055];
ll dp[1500055];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    fill(dp, dp + N + 55, 0);
    for (int i = 1; i <= N; i++) {
        cin >> t[i] >> p[i];
    }
    ll currMax=0;
    for (int i = 1; i <= N; i++) {
        currMax = max(currMax, dp[i]);
        dp[i + t[i]] = max(currMax + p[i], dp[i + t[i]]);
    }
    
    ll answer = 0;
    for (int i = 1; i <= N + 1; i++) {
        answer = max(answer, dp[i]);
    }
    cout << answer << '\n';
    return 0;
}