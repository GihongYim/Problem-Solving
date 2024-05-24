#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int N, M;
int map[8][8];
int visited[8][8] = { 0, };
vector<pair<int, int>> v;
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
int ret = 0x3f3f3f3f;

bool isvalid(int x, int y)
{
	if (x < 0 || x >= N || y < 0 || y >= M)
		return false;
	else
		return true;
}




void line(int x, int y, int dir,int c) {
	int nx = x + dx[dir];
	int ny = y + dy[dir];
	while (isvalid(nx, ny) && map[nx][ny] != 6) {
		visited[nx][ny] += c;
		nx += dx[dir];
		ny += dy[dir];
	}
}


void search(int n) {
	if (n == v.size()) {
		int temp = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (visited[i][j] <= 0 && map[i][j] == 0) {
					temp++;
				}
			}
		}
		ret = min(ret, temp);
		return;
	}
	else {
		int x = v[n].first;
		int y = v[n].second;
		if (map[x][y] == 1) {
			for (int d = 0; d < 4; d++) {
				line(x, y, d, 1);
				search(n + 1);
				line(x, y, d, -1);
			}
		}
		else if (map[x][y] == 2) {
			for (int d = 0; d < 2; d++) {
				line(x, y, d, 1);
				line(x, y, d + 2, 1);
				search(n + 1);
				line(x, y, d, -1);
				line(x, y, d + 2, -1);
			}
		}
		else if (map[x][y] == 3) {
			for (int d = 0; d < 4; d++) {
				line(x, y, d, 1);
				line(x, y, (d + 1) % 4, 1);
				search(n + 1);
				line(x, y, d, -1);
				line(x, y, (d + 1) % 4, -1);
			}
		}
		else if (map[x][y] == 4) {
			for (int d = 0; d < 4; d++) {
				line(x, y, d, 1);
				line(x, y, (d + 1) % 4, 1);
				line(x, y, (d + 2) % 4, 1);
				search(n + 1);
				line(x, y, d, -1);
				line(x, y, (d + 1) % 4, -1);
				line(x, y, (d + 2) % 4, -1);
			}
		}
		else if (map[x][y] == 5) {
			for (int d = 0; d < 4; d++) {
				line(x, y, d, 1);
			}
			search(n + 1);
			for (int d = 0; d < 4; d++) {
				line(x, y, d, -1);
			}
		}
	}
}




int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
			if (map[i][j] >= 1 && map[i][j] <= 5)
				v.push_back({ i,j });
		}
	}
	search(0);
	
	cout << ret << '\n';

	return 0;
}