#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int map[1001][1001];
int dist[1001][1001];
int dx[4] = {-1, 1, 0 ,0};
int dy[4] = {0, 0, -1, 1};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	pair<int, int> startPoint;

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 2)
				startPoint = pair<int, int>(i, j);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			dist[i][j] = -1;
		}
	}
	queue<pair<int, int> > q;

	dist[startPoint.first][startPoint.second] = 0;
	pair<int, int> curr;
	int nx, ny;

	q.push(startPoint);
	while (!q.empty())
	{
		curr = q.front();
		q.pop();
		for (int d = 0; d < 4; d++)
		{
			nx = curr.first + dx[d];
			ny = curr.second + dy[d];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue ;
			if (dist[nx][ny] != -1)
				continue;
			if (map[nx][ny] == 0)
				continue;
			dist[nx][ny] = dist[curr.first][curr.second] + 1;
			q.push(pair<int, int>(nx, ny));
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (map[i][j] == 0) cout << 0 << ' ';
			else cout << dist[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}