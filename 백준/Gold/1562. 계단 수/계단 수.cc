#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

const int MAX = 1 << 10;
const ll MOD = 1000000000;
int N;
ll dp[101][MAX][10];
int nextK;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N;
    for (int i = 0; i <= N; i++)
        for (int j = 0; j < MAX; j++)
            fill(dp[i][j], dp[i][j] + 10, 0);
    for (int i = 1; i < 10; i++) {
        dp[1][1 << i][i] = 1;
    }
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < MAX; j++) {
            for (int k = 0; k < 10; k++) {
                if (dp[i][j][k]) {
                    nextK = k - 1;
                    if (nextK >= 0) {
                        dp[i + 1][j | (1 << nextK)][nextK] += dp[i][j][k];
                        dp[i + 1][j | (1 << nextK)][nextK] %= MOD;
                    }
                    nextK = k + 1;
                    if (nextK < 10) {
                        dp[i + 1][j | (1 << nextK)][nextK] += dp[i][j][k];
                        dp[i + 1][j | (1 << nextK)][nextK] %= MOD;
                    }
                }
            }
        }
    }
    ll total = 0;
    for (int i = 0; i < 10; i++) {
        total += dp[N][MAX - 1][i];
        total %= MOD;
    }
    cout << total << '\n';
    return 0;
}