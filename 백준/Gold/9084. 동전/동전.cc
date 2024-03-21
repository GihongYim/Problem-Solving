    #include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int N, M;
int coin[20];
int dp[10005][21];
int cnt = 0;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;

    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> N;
        for (int i = 0; i < N; i++){
            cin >> coin[i];
        }
        cin >> M;
        for (int i = 0; i <= M; i++)
            fill(dp[i], dp[i] + N + 1, 0);
        for (int i = 0; i < N; i++)
            dp[coin[i]][i] = 1;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (i + coin[j] > M) continue;  
                for (int k = 0; k <= j; k++) {
                    dp[i + coin[j]][j] += dp[i][k];
                }
            }
        }
        cnt = 0;
        for (int i = 0; i < N; i++) {
            cnt += dp[M][i];
        }
        cout << cnt << '\n';
    }

    return 0;
}