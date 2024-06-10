#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[500];
int dp[501][501];

int dfs(int cur, int cnt) {
	int& ret = dp[cur][cnt];
	if (ret != -1) return dp[cur][cnt];
	ret = 1;

	for (int i = cur + 1; i < n; i++) {
		if (a[cur] > a[i] && cnt > 0) ret = max(ret, dfs(i, cnt - 1) + 1);
		if (a[cur] <= a[i]) ret = max(ret, dfs(i, cnt) + 1);
	}
	return ret;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		fill(dp[i], dp[i] + k + 1, -1);
	}

	cout << dfs(0, k);

	return 0;
}