#include <iostream>
using namespace std;

int N;
int num[2005];
int dp[2005][2005];
int M;
int s, e;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> num[i];
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            dp[i][j] = 0;
        }
    }
    for (int i = 1; i <= N; i++) {
        dp[i][i] = 1;
        if (i != N && num[i] == num[i + 1])
            dp[i][i + 1] = 1;
    }
    for (int i = N - 2 ; i >= 1; i--) {
        for (int j = i + 1; j <= N; j++) {
            if (dp[i + 1][j - 1] == 1 && num[i] == num[j])
                dp[i][j] = 1;
        }
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> s >> e;
        cout << dp[s][e] << '\n';
    }
    return 0;
}