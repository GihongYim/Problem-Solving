#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int T, W;
int dp[1001][3][31];
int fruit[1001];

void dfs(int n, int pos, int moved, int cnt) {
    if (n == T) {
        return;
    }

    if (cnt <= dp[n][pos][moved]) {
        return;
    }

    dp[n][pos][moved] = cnt;

    if (moved < W) {
        if (pos == 1) {
            if (fruit[n + 1] == 1) {
                dfs(n + 1, 1, moved, cnt + 1);
                dfs(n + 1, 2, moved + 1, cnt);
            } else {
                dfs(n + 1, 1, moved, cnt);
                dfs(n + 1, 2, moved + 1, cnt + 1);
            }
        } else if (pos == 2) {
            if (fruit[n + 1] == 2) {
                dfs(n + 1, 2, moved, cnt + 1);
                dfs(n + 1, 1, moved + 1, cnt);
            } else {
                dfs(n + 1, 2, moved, cnt);
                dfs(n + 1, 1, moved + 1, cnt + 1);
            }
        }
    } else {
        if (pos == 1) {
            if (fruit[n + 1] == 1) {
                dfs(n + 1, 1, moved, cnt + 1);
            } else {
                dfs(n + 1, 1, moved, cnt);
            }
        } else {
            if (fruit[n + 1] == 2) {
                dfs(n + 1, 2, moved, cnt + 1);
            } else {
                dfs(n + 1, 2, moved, cnt);
            }
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> T >> W;
    for (int i = 0; i < T; i++) {
        cin >> fruit[i];
    }
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < 3; j++) {
            fill(dp[i][j], dp[i][j] + W + 1, -1);
        }

    }
    if (fruit[0] == 1) {
        dfs(0, 1, 0, 1);
        dfs(0, 2, 1, 0);
    }
    else {
        dfs(0, 1, 0, 0);
        dfs(0, 2, 1, 1);
    }

    int maxCount = -1;
    for (int i = 0; i <= W; i++) {
        maxCount = max(maxCount, dp[T - 1][1][i]);
        maxCount = max(maxCount, dp[T - 1][2][i]);
    }
    cout << maxCount << '\n';
    return 0;
}