#include <bits/stdc++.h>
using namespace std;

int pmtn[1001];
bool visited[1001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;

	cin >> T;
	for (int t = 1; t <= T; t++) {
		int N;
		
		cin >> N;

		fill(visited, visited + N + 1, false);

		for (int i = 1; i <= N; i++) {
			cin >> pmtn[i];
		}

		int pmtnCnt = 0;

		for (int i = 1; i <= N; i++) {
			if (visited[i]) continue;

			int curr = i;
			while (!visited[curr]) {
				visited[curr] = true;
				curr = pmtn[curr];
			}
			pmtnCnt++;
		}
		cout << pmtnCnt << '\n';
	}

	return 0;
}