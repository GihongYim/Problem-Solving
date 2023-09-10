#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    long long dp[2005];
    fill(dp, dp + n + 3, 0);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        dp[i + 1] += dp[i];
        dp[i + 2] += dp[i];
        dp[i + 1] %= 1234567;
        dp[i + 2] %= 1234567;
    }
    answer = dp[n];
    return answer;
}