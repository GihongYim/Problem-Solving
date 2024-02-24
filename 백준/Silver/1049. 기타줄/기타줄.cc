#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long N, M;
    long long min_package = 500000;
    long long min_one = 500000;
    long long dp[101];

    long long package, one;

    cin >> N >> M;
    fill(dp, dp + N + 7, 1000000);
    for (int i = 0; i < M; i++) {
        cin >> package >> one;
        min_package = min(min_package, package);
        min_one = min(min_one, one);
    }
    dp[0] = 0;
    for (int i = 0; i < N; i++) {
        dp[i + 1] = min(dp[i + 1], dp[i] + min_one);
        dp[i + 6] = min(dp[i + 6], dp[i] + min_package);
    }
    long long result = 1000000;
    for (int i = N; i < N + 6; i++) {
        result = min(result, dp[i]);
    }
    cout << result << '\n';
    

    return 0;
}