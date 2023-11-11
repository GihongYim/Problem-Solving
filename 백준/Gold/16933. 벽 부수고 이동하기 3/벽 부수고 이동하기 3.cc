#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;


typedef struct s_status
{
	int x;
	int y;
	int k;
	int day;
	int len;
} status;

int N, M, K;
string map[1001];
int dist[1001][1001][11];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int nx, ny;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M >> K;
	for (int i = 0; i < N; i++) {
		cin >> map[i];
		for (int j = 0; j < M; j++) {
			fill(dist[i][j], dist[i][j] + 11, -1);	
		}
	}
	queue<status> q;
	int answer = -1;
	q.push({0, 0, 0, 1, 1});
	dist[0][0][0] = 1;
	while (!q.empty()) {
		int x = q.front().x;
		int y = q.front().y;
		int k = q.front().k;
		int day = q.front().day;
		int len = q.front().len;
		q.pop();
		if (x == N - 1 && y == M - 1) {
			answer = len;
			break;
		}
		for (int d = 0; d < 4; d++) {
			nx = x + dx[d];
			ny = y + dy[d];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (map[nx][ny] == '0' && dist[nx][ny][k] == -1) {
				dist[nx][ny][k] = len + 1;
				q.push({nx, ny, k, 1 - day, len + 1});
			}
			if (map[nx][ny] == '1' && k < K && dist[nx][ny][k + 1] == -1) {
				if (day == 1) {
					dist[nx][ny][k + 1] = len + 1;
					q.push({nx, ny, k + 1, 1 - day, len + 1});
				}
				else if (day == 0) {
					q.push({x, y, k, 1 - day, len + 1});
				}
			}
		}
	}
	cout << answer << '\n';
	return 0;
}