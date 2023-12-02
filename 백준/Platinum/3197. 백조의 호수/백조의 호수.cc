#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;


#define MAX 0x3f3f3f3f
int r,c;
string map[1505];
int pass[1500][1500];
int visited[1500][1500];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1 ,1};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	
	cin >> r >> c;
	for (int i = 0; i < r; i++)
		fill(pass[i], pass[i] + c, MAX);
	queue<pair<int, int>> q;
	for (int i = 0; i < r; i++) {
		cin >> map[i];
		for (int j = 0; j < c; j++) {
			if (map[i][j] == '.' || map[i][j] == 'L') {
				q.push(make_pair(i, j));
				pass[i][j] = 0;
			}
		}
	}
	while (!q.empty()) {
		int cx = q.front().first;
		int cy = q.front().second;
		q.pop();
		for (int d = 0; d < 4; d++) {	
			int nx = cx + dx[d];
			int ny = cy + dy[d];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
			if (map[nx][ny] == 'X' && pass[nx][ny] == MAX) {
				pass[nx][ny] = pass[cx][cy] + 1;
				q.push(make_pair(nx, ny));
			} else if (map[nx][ny] == '.' && pass[nx][ny] == MAX) {
				pass[nx][ny] = pass[cx][cy];
				q.push(make_pair(nx, ny));
			}
		}
	}
	vector<pair<int, int>> v;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (map[i][j] == 'L') {
				v.push_back(make_pair(i, j));
			}
		}
	}
	for (int i = 0; i < r; i++) 
		fill(visited[i], visited[i] + c, MAX);
	q.push(make_pair(v[0].first, v[0].second));
	visited[v[0].first][v[0].second] = 0;

	while (!q.empty()) {
		int cx = q.front().first;
		int cy = q.front().second;
		q.pop();
		for (int d = 0; d < 4; d++) {
			int nx = cx + dx[d];
			int ny = cy + dy[d];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
			if (map[nx][ny] == '.') {
				if (visited[cx][cy] < visited[nx][ny]) {
					visited[nx][ny] = visited[cx][cy];
					q.push(make_pair(nx, ny));
				}
			} else if (map[nx][ny] == 'X' || map[nx][ny] == 'L') {
				if (visited[cx][cy] < pass[nx][ny]) {
					if (visited[nx][ny] == MAX) {
						visited[nx][ny] = pass[nx][ny];
						q.push(make_pair(nx, ny));
					}
				} else {
					if (visited[cx][cy] < visited[nx][ny]) {
						visited[nx][ny] = visited[cx][cy];
						q.push(make_pair(nx, ny));
					}
				}
			}			
		}
	}
	cout << visited[v[1].first][v[1].second] << '\n';
	return 0;
}