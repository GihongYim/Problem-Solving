#include <bits/stdc++.h>
using namespace std;

int T;
int R, C;
string grid[101];
string q;

bool visited[101][101];
int N;

int dx[4] = {-1, 1, 0 ,0};
int dy[4] = {0, 0, -1, 1};

void dfs(int x, int y)
{
	visited[x][y] = true;
	int nx, ny;
	for (int d = 0; d < 4; d++) {
		nx = x + dx[d];
		ny = y + dy[d];
		if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
		if (visited[nx][ny]) continue;
		if (grid[nx][ny] == '0') continue;
		dfs(nx, ny);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);


	cin >> T;

	for (int test = 1; test <= T; test++) {
		cin >> R >> C;

		for (int i = 0; i < R; i++) {
			cin >> grid[i];
		}

		cout << "Case #" << test << ":\n";

		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> q;

			if (q == "Q") {
				for (int j = 0; j < R; j++)
					fill(visited[j], visited[j] + C, false);

				int cnt = 0;
				for (int x = 0; x < R; x++) {
					for (int y = 0; y < C; y++) {
						if (grid[x][y] == '0') continue;
						if (visited[x][y]) continue;
						dfs(x, y);
						cnt++;
					}
				}
				cout << cnt << '\n';
			} else if (q == "M") {
				int r, c;
				string mark;

				cin >> r >> c >> mark;
				grid[r][c] = mark[0];				
			}
		}
	}


	return 0;
}