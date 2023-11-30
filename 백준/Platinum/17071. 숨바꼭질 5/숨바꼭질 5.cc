#include <iostream>
#include <queue>
using namespace std;

constexpr int MAX = 500001;
int N, K, visited[2][MAX];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> N >> K;
	if (N == K) {
		cout << 0;
		return 0;
	}

	queue<int> q;
	q.push(N);
	visited[0][N] = 1;

	int t = 1;
	bool meet = false;

	while (!q.empty()) {
		K += t;
		if (K >= MAX) break;
		if (visited[t & 1][K]) { meet = true; break;}

		int qsize = q.size();
		for (int i = 0; i < qsize; i++) {
			int curr = q.front(); q.pop();
			for (int next : {curr * 2, curr + 1, curr - 1}) {
				if (next < 0 || next >= MAX || visited[t & 1][next]) continue;
				if (next == K) { meet = true; break;}
				visited[t & 1][next] = visited[(t + 1) & 1][curr] + 1;
				q.push(next);
			}
			if (meet) break;
		}
		if (meet) break;
		t++;
	}
	meet ? cout << t : cout << -1;
	return 0;
}
