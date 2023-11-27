#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int main(void)
{
	// freopen("input.txt", "r", stdin);

	int start;
	int N;
	int from, to;
	for (int test_case = 1; test_case <= 10; test_case++) {
		vector<int> adj[101];
		int dist[101];
		for (int i = 0; i < 101; i++) {
			fill(dist, dist + 101, -1);
		}
		cin >> N >> start;
		for (int i = 0; i < N; i+= 2) {
			cin >> from >> to;
			adj[from].push_back(to);
		}
		queue<int> q;
		q.push(start);
		dist[start] = 0;
		while (!q.empty()) {
			int curr = q.front();
			q.pop();

			for (int i = 0; i < adj[curr].size(); i++) {
				int next = adj[curr][i];
				if (dist[next] == -1 || dist[curr] + 1 < dist[next]) {
					dist[next] = dist[curr] + 1;
					q.push(next);
				}
			}
		}
		int maxdist = 0;
		int maxnode = 1;
		for (int i = 1; i <= 100; i++) {
			if (dist[i] != -1 && dist[i] >= maxdist) {
				maxdist = dist[i];
				maxnode = i;
			}
		}
		cout << '#' << test_case << ' ' << maxnode << '\n';
	}
	return 0;
}
