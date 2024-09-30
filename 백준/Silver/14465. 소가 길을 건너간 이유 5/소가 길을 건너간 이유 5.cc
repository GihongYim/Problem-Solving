#include <bits/stdc++.h>
using namespace std;

bool sign[100005];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, k, b;

	cin >> n >> k >> b;

	fill(sign, sign + n + 1, true);
	for (int i = 0; i < b; i++) {
		int tmp;
		cin >> tmp;
		sign[tmp] = false;
	}

	int cnt = 0;
	int minCnt = 0x3f3f3f3f;
	for (int i = 1; i <= k; i++) {
		if (!sign[i]) cnt++;
	}
	minCnt = min(cnt, minCnt);
	for (int i = 2; i <= n - k + 1; i++) {
		if (!sign[i - 1])cnt--;
		if (!sign[i + k - 1]) cnt++;
		minCnt = min(cnt, minCnt);
	}
	cout << minCnt << '\n';
	return 0;
}