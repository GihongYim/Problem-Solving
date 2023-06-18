#include <iostream>
#include <queue>
#include <string>
#include <utility>
using namespace std;



int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	string map[600];
	bool visited[600][600];
	int dx[] = {-1, 1, 0, 0};
	int dy[] = {0, 0, -1, 1};
	int x, y, nx, ny;
	int answer = 0;
	pair<int, int> I(-1, -1);
	cin >> N >> M;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			visited[i][j] = false;
		}
	}
	for (int i = 0; i < N; i++){
		cin >> map[i];
		if (I.first == -1){
			for (int j = 0; j < map[i].length(); j++){
				if (map[i][j] == 'I'){
					I.first = i;
					I.second = j;
				}
			}
		}
	}
	queue<pair<int, int> > q;

	visited[I.first][I.second] = true;
	q.push(make_pair(I.first, I.second));
	while (!q.empty()){
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int d = 0; d < 4; d++){
			nx = x + dx[d];
			ny = y + dy[d];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M)
				continue;
			if (!visited[nx][ny] && map[nx][ny] != 'X'){
				if (map[nx][ny] == 'P')
					answer++;
				q.push(make_pair(nx, ny));
				visited[nx][ny] = true;
			}
			
		}
	}
	if (answer == 0)
		cout << "TT\n";
	else
		cout << answer << '\n';
	return 0;
}