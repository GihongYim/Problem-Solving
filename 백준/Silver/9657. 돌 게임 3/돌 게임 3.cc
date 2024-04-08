#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
int dp[1001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> N;
    fill(dp, dp + N + 1, false);
    dp[1] = dp[3] = dp[4] = dp[5] = 1;

    for (int i = 6; i <= N; i++) {
        if (dp[i - 1] == 0)
			dp[i] = 1;
		if (dp[i - 3] == 0)
			dp[i] = 1;
		if (dp[i - 4] == 0)
			dp[i] = 1;
    }
    if (dp[N]) 
        cout << "SK\n";
    else 
        cout << "CY\n";
    return 0;
}


// dp[N] = 숫자 N 일때 이긴사람
// dp[1], dp[3], dp[4] -> SK
// dp[2] = CY
// dp[5] = SK 3 선택  CY 1선택  SY 1 선택 SK 승
// dp[6] = SK 4 선택
// dp[7] = dp[5] 
