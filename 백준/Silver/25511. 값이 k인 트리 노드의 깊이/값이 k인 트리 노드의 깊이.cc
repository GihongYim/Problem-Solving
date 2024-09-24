#include <bits/stdc++.h>
using namespace std;

int depth[100005];
int parent[100005];
int num[100005];

int dfs(int n, int cnt)
{
	if (n == 0) return cnt;
	return dfs(parent[n], cnt+1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N, k;

	cin >> N >> k;

	for (int i = 0; i < N - 1; i++) {
		int p, c;

		cin >> p >> c;
		parent[c] = p;
	}
	int targetIndex;
	for (int i = 0; i < N; i++) {
		cin >> num[i];
		if (num[i] == k) targetIndex = i;
	}
	int root = 0;
	cout << dfs(targetIndex, 0);
	return 0;
}