#include <bits/stdc++.h>
using namespace std;

#define MAX 100005

int N, M, R;
int depth[MAX];
vector<int> adj[MAX];

void dfs(int r, int d)
{
	depth[r] = d;

	for (auto nxt : adj[r])
	{
		if (depth[nxt] != -1) continue;
		dfs(nxt, d + 1);
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M >> R;

	fill(depth, depth + N + 1, -1);
	for (int i = 0; i < M; i++) 
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 1; i <= N; i++) {
		sort(adj[i].rbegin(), adj[i].rend());
	}
	dfs(R, 0);

	for (int i = 1; i <= N; i++)
	{
		cout << depth[i] << '\n';
	}

	return 0;
}