#include <iostream>
#include <algorithm>
using namespace std;

int N;
long long m[501][2];
long long dp[501][501];

long long dfs(int s, int e) {
    if (dp[s][e] != -1)
        return dp[s][e];
    
    long long ste;
    for (int t = s; t <= e; t++) {
        ste = dfs(s, t) + dfs(t + 1, e) + m[s][0] * m[t][1] * m[e][1];
        if (dp[s][e] == -1 || ste < dp[s][e])
            dp[s][e] = ste;
    }
    return dp[s][e];
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> m[i][0] >> m[i][1];
    }
    for (int i = 0; i < N; i++) {
        fill(dp[i], dp[i] + N, -1);
    }
    for (int i = 0; i < N; i++) {
        dp[i][i] = 0;
    }
    for (int i = 0; i < N - 1; i++) {
        dp[i][i + 1] = m[i][0] * m[i][1] * m[i + 1][1];
    }
    
    cout << dfs(0, N - 1) << '\n';
    return 0;
}