#include <bits/stdc++.h>
using namespace std;

int dp[35][20];

int getNumOfSubseqence(const string& line, const string& target) {
    int n = line.size();
    int m = target.size();

    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j > 0 && line[i - 1] == target[j - 1]) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % 10000;
            }
        }
    }
    return dp[n][m];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    string line = "";
    string target = "welcome to code jam";

    cin >> N;

    
    for (int i = 1; i <= N; i++) {
        getline(cin, line);
        while (line == "")
            getline(cin, line);

        cout << "Case #" << i << ": " << setw(4) << setfill('0') << getNumOfSubseqence(line, target) << '\n';
    }
    return 0;
}