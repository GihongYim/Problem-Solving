#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int fire[1005][1005];
int dist[1005][1005];
int dx[] = {-1, 1, 0, 0};
int dy[] = { 0, 0,-1, 1};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string map[1001];
	int R,C;
	int JR, JC;
	int currR, currC;
	int nextR, nextC;
	queue<pair<int, int> >q;

	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		fill(fire[i], fire[i] + C, -1);
		fill(dist[i], dist[i] + C, -1);
	}
	for (int i = 0; i < R; i++) {
		cin >> map[i];
		for (int j = 0; j < C; j++) {
			if (map[i][j] == 'F') {
				q.push({i, j});
				fire[i][j] = 0;
			}
			if (map[i][j] == 'J') {
				JR = i;
				JC = j;
			}
		}
	}
	while (!q.empty()) {
		currR = q.front().first;
		currC = q.front().second;
		q.pop();

		for (int d = 0; d < 4; d++) {
			nextR = currR + dx[d];
			nextC = currC + dy[d];
			if (nextR < 0 || nextR >= R || nextC < 0 || nextC >= C) continue;
			if (fire[nextR][nextC] != -1) continue;
			if (map[nextR][nextC] == '#') continue;
			fire[nextR][nextC] = fire[currR][currC] + 1;
			q.push({nextR, nextC});
		}
	}
	while (!q.empty())
		q.pop();
	q.push({JR, JC});
	dist[JR][JC] = 0;

	while (!q.empty()) {
		currR = q.front().first;
		currC = q.front().second;
		q.pop();
		for (int d = 0; d < 4; d++) {
			nextR = currR + dx[d];
			nextC = currC + dy[d];
			if (nextR < 0 || nextR >= R || nextC < 0 || nextC >= C) {
				cout << dist[currR][currC] + 1;
				return 0;
			}
			if (dist[nextR][nextC] == -1 && 
				map[nextR][nextC] != '#' && 
				(fire[nextR][nextC] == -1 || dist[currR][currC] + 1 < fire[nextR][nextC])) {
					dist[nextR][nextC] = dist[currR][currC] + 1;
					q.push({nextR, nextC});
			}
		}
	}
	cout << "IMPOSSIBLE";
	return 0;
}