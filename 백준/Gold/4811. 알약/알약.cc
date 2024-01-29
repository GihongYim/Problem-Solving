#include <bits/stdc++.h>
using namespace std;

long long dp[31][31];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;

	for (int i = 0; i <= 30; i++) {
		for (int j = 0; j <= 30; j++) {
			if (i > j) continue;
			if (i == 0) dp[j][i] = 1;
			else dp[j][i] = dp[j - 1][i] + dp[j][i - 1];
		}
	}

	while (1) {
		cin >> n;
		if (n == 0)
			break;
		cout << dp[n][n] << '\n';
	}

	return 0;
}
