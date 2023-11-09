#include <iostream>
#include <queue>
using namespace std;

typedef struct s_Point
{
	int x;
	int y;
	int k;
} Point;

int K;
int W, H;
int map[205][205];
int dist[205][205][31];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int hx[] = {-1, -2, -2, -1, 1, 2, 2, 1};
int hy[] = {-2, -1, 1, 2, 2, 1, -1, -2};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> K;
	cin >> W >> H;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> map[i][j];
			fill(dist[i][j], dist[i][j] + K + 1, -1);
		}
	}
	queue<Point> q;
	Point tmp;
	int x, y, k, nx, ny, nk;
	x = 0;
	y = 0;
	k = K;
	tmp.x = x;
	tmp.y = y;
	tmp.k = K;
	q.push(tmp);
	dist[x][y][k] = 0;

	while (!q.empty()) {
		Point curr;
		curr = q.front();
		q.pop();
		for (int d = 0; d < 4; d++) {
			Point next;
			nx = curr.x + dx[d];
			ny = curr.y + dy[d];
			nk = curr.k;
			if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
			if (map[nx][ny] == 1 || dist[nx][ny][nk] != -1) continue;
			dist[nx][ny][nk] = dist[curr.x][curr.y][curr.k] + 1;
			next.x = nx;
			next.y = ny;
			next.k = nk;
			if (nx == H && ny == W) continue;
			q.push(next);
		}
		if (curr.k <= 0) continue;
		for (int d = 0; d < 8; d++) {
			Point next;
			nx = curr.x + hx[d];
			ny = curr.y + hy[d];
			nk = curr.k - 1;
			if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
			if (map[nx][ny] == 1 || dist[nx][ny][nk] != -1) continue;
			dist[nx][ny][nk] = dist[curr.x][curr.y][curr.k] + 1;
			next.x = nx;
			next.y = ny;
			next.k = nk;
			if (nx == H && ny == W) continue;
			q.push(next);
		}
	}
	int answer = 0x4f4f4f4f;
	for (int i = 0; i <= K; i++) {
		if (dist[H - 1][W - 1][i] == -1) continue;
		answer = min(answer, dist[H - 1][W - 1][i]);
	}
	if (answer != 0x4f4f4f4f)
		cout << answer << '\n';
	else
		cout << -1 << '\n';
	return 0;
}