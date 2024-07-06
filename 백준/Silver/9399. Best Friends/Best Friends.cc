#include <bits/stdc++.h>
using namespace std;

#define MAX 10001
#define LIMIT 150
#define INF 0x3f3f3f3f


int petey, patty;
int board[LIMIT][LIMIT];
int dist[LIMIT][LIMIT];
int dx[] = {-1, 1, 0, 0, -1, 1};
int dy[] = {0, 0, -1, 1, -1, 1};

void bfs(int startX, int startY, int endX, int endY) {

	int cx = startX;
	int cy = startY;

	queue<pair<int, int> > q;
	dist[startX][startY] = 0;

	q.push(make_pair(startX, startY));

	while (!q.empty()) {
		auto curr = q.front(); q.pop();

		for (int d = 0; d < 6; d++) {
			int nx = curr.first + dx[d];
			int ny = curr.second + dy[d];

			if (nx < 0 || nx >= LIMIT || ny < 0 || ny >= LIMIT) continue;
			if (board[nx][ny] == -1) continue;
			if (dist[nx][ny] != INF) continue;
			dist[nx][ny] = dist[curr.first][curr.second] + 1;
			q.push(make_pair(nx, ny));
		}
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);


	for (int i = 0; i < LIMIT; i++)
		fill(board[i], board[i] + LIMIT, -1);

	int pos = 1;
	for (int i = 1; i < LIMIT; i++) {
		for (int j = 1; j <= i; j++) {
			board[i][j] = pos++;
			// cout << board[i][j] << ' ';
		}
		// cout << '\n';
	}

	while (1) {
		cin >> petey >> patty;
		if (petey == 0 && patty == 0)
			break;

		int sx, sy, ex, ey;
		sx = -1;
		sy = -1;
		ex = -1;
		ey = -1;
		for (int i = 1; i <= LIMIT; i++) {
			for (int j = 1; j <= i; j++) {
				if (board[i][j] == petey) {
					sx = i;
					sy = j;
				}
				if (board[i][j] == patty) {
					ex = i;
					ey = j;
				}
			}
			if (sx != -1 && ex != -1)
				break;
		}
		for (int i = 0; i < LIMIT; i++) {
			fill(dist[i], dist[i] + LIMIT, INF);
		}
		bfs(sx, sy, ex, ey);
		cout << dist[ex][ey] << '\n';
	}



	return 0;
}
