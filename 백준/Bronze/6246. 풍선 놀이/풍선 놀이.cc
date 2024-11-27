#include <bits/stdc++.h>
using namespace std;

bool visited[10001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, Q;

	int a, d;

	cin >> N >> Q;
	fill(visited, visited + 10001, false);

	for (int i = 0; i < Q; i++) {
		cin >> a >> d;

		for (int cur = a; cur <= N; cur+=d) {
			visited[cur] = true;
		}
	}
	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (!visited[i]) cnt++;
	}
	
	cout << cnt << '\n';

	return 0;
}