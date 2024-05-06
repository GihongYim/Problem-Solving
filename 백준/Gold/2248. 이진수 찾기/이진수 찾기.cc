#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll dp[32][32];
string answer;

void findBin(int N, int L, long long I)
{
	if (N == 0) return;
	if (L == 0) {
		for (int i = 0; i < N; i++) {
			answer += '0';
		}
		return;
	}

	long long skip = 0;

	for (int i = 0; i <= L; i++) {
		skip += dp[N - 1][i];
	}
	if (skip >= I) {
		answer += '0';
		findBin(N - 1, L, I);
	} else {
		answer += '1';
		findBin(N - 1, L - 1, I - skip);

	}

}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N, L;
	long long I;

	cin >> N >> L >> I;

	dp[0][0] = 1;
	for (int i = 1; i <= N; i++) {
		dp[i][0] = 1;
		dp[i][i] = 1;
	}
	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
		}
	}
	findBin(N, L, I);
	cout << answer;
	return 0;
}