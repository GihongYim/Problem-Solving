#include <cstdio>
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
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d", S + i);
			S[i]--;
		}
		fill(visited, visited + N, false);
		fill(finished, finished + N, false);
		cnt = 0;
		for (int i = 0; i < N; i++) {
			if (!visited[i])
				dfs(i);
		}
		printf("%d\n", N - cnt);
	}

	return 0;
}