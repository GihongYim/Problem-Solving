#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


const int MAX = 101;
int N;
int M;
int m[MAX];
int c[MAX];
int dp[MAX][10001];

int total = 0;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
        cin >> m[i];
    for (int i = 1; i <= N; i++) {
        cin >> c[i];
        total += c[i];
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= total; j++) {
            if (j - c[i] >= 0) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - c[i]] + m[i]);
            }
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
        }
    }
    for (int i = 0; i <= total; i++) {
        if (dp[N][i] >= M) {
            cout << i << '\n';
            break;
        }
    }
    
    return 0;
}