#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int N, K;
int D[1002];
int W;
int parent[1002];
int dist[1002];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	int a, b;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		cin >> N >> K;
		vector<int> adj[1002];
		for (int i = 1; i <= N; i++) {
			cin >> D[i];
		}
		fill(dist, dist + 1001, 0);
		fill(parent, parent + 1001, 0);
		for (int i = 0; i < K; i++) {
			cin >> a >> b;
			adj[a].push_back(b);
			parent[b]++;
		}
		cin >> W;
		queue<int> q;
		for (int i = 1; i <= N; i++) {
			if (parent[i] == 0) {
				q.push(i);
			}
		}
		while (!q.empty()) {
			if (parent[W] == 0)
				break;
			int curr = q.front();
			q.pop();
			for (int next: adj[curr]) {
				dist[next] = max(dist[next], dist[curr] + D[curr]);
				if (--parent[next] == 0) q.push(next);
			}
		}
		cout << dist[W] + D[W] << '\n';
	}
	return 0;
}