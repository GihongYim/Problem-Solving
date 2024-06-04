#include <bits/stdc++.h>
using namespace std;

const int MAX = 1001;

int N, M;
int Map[MAX][MAX];
string line;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1 ,1};
int visited[MAX][MAX];
int ans = 0;

void dfs(int x, int y) {
	int nx, ny;

	visited[x][y] = 1;
	nx = x + dx[Map[x][y]];
	ny = y + dy[Map[x][y]];

	if (visited[nx][ny] == 1) ans++;
	if (visited[nx][ny] == 0) dfs(nx, ny);
	visited[x][y] = 2;

}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++)  {
		fill(visited[i], visited[i] + M, 0);

	}
	for (int i = 0; i < N; i++) {
		cin >> line;
		for (int j = 0; j < M; j++) {
			if (line[j] == 'U') Map[i][j] = 0;
			else if (line[j] == 'D') Map[i][j] = 1;
			else if (line[j] == 'L') Map[i][j] = 2;
			else Map[i][j] = 3;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (visited[i][j] == 0) dfs(i, j);
		}
	}
	cout << ans << '\n';

	return 0;
}
