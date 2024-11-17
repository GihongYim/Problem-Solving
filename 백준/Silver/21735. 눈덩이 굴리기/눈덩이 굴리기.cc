#include <bits/stdc++.h>
using namespace std;

int N, M;
int a[105];
int maxValue = 1;

void dfs(int n, int m, int size)
{
	if (m == M || n >= N - 1) {
		maxValue = max(maxValue, size);
		return;
	}

	if (n + 1 < N) {
		dfs(n + 1, m + 1, size + a[n + 1]);
	}

	if (n + 2 < N) {
		dfs(n + 2, m + 1, max(0, size / 2) + a[n + 2]);
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
		cin >> a[i];

	dfs(-1, 0, 1);

	cout << maxValue << '\n';
	return 0;
}