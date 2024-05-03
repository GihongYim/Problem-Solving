#include <iostream>
#include <algorithm>
using namespace std;

int T, N, S[100000];
int cnt;
bool visited[100000], finished[100000];



void dfs(int curr)
{
	visited[curr] = true;
	int next = S[curr];
	if (visited[next]) {
		if (!finished[next]) {
			for (int temp = next; temp != curr; temp = S[temp])cnt++;
			cnt++;
		}
	}
	else {
		dfs(next);
	}
	finished[curr] = true;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> S[i];
			S[i]--;
		}
		fill(visited, visited + N, false);
		fill(finished, finished + N, false);
		cnt = 0;
		for (int i = 0; i < N; i++) {
			if (!visited[i])
				dfs(i);
		}
        cout << N - cnt << '\n';
	}

	return 0;
}