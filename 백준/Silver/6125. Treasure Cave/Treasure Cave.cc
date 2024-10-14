#include <bits/stdc++.h>
using namespace std;

int P, NS, T;
vector<int> adj[5001];
int pre[5001];
int dist[5001];

#define MAX 0x3f3f3f3f
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> P >> NS >> T;

	fill(pre, pre + P + 1, -1);
	fill(dist, dist + P + 1, MAX);
	for (int i = 0; i < NS; i++) {
		int n, b1, b2;

		cin >> n >> b1 >> b2;
		adj[n].push_back(b1);
		adj[n].push_back(b2);
	}

	queue<int> q;

	q.push(1);
	dist[1] = 1;
	while (!q.empty()) {
		int curr = q.front();
		q.pop();

		for (auto nxt : adj[curr]) {
			if (dist[curr] + 1 < dist[nxt]) {
				pre[nxt] = curr;
				dist[nxt] = dist[curr] + 1;
				q.push(nxt);
			}
		}
	}
	vector<int> path;

	int cur = T;
	while (cur != 1)
	{
		path.push_back(cur);
		cur = pre[cur];
	}

	cout << dist[T] << '\n';

	path.push_back(1);

	while (!path.empty()) {
		
		cout << path.back() << '\n';
		path.pop_back();
	}

	return 0;
}