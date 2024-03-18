#include <bits/stdc++.h>
using namespace std;

string field[12];
bool visited[12][6];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool bombCheck(int row, int col) {
	char block = field[row][col];
	queue<pair<int, int>> q;
	vector<pair<int, int>> history;
	int cnt;

	q.push(make_pair(row, col));
	history.push_back(make_pair(row, col));
	visited[row][col] = true;
	while (!q.empty()) {
		auto curr = q.front(); q.pop();
		for (int d = 0; d < 4; d++) {
			int nx = curr.first + dx[d];
			int ny = curr.second + dy[d];
			if (nx < 0 || nx >= 12 || ny < 0 || ny >= 6) continue;
			if (visited[nx][ny]) continue;
			if (field[nx][ny] == block) {
				visited[nx][ny] = true;
				q.push(make_pair(nx, ny));
				history.push_back(make_pair(nx, ny));
			}
		}
	}
	if (history.size() >= 4) {
		for (auto b : history) {
			field[b.first][b.second] = '.';
		}
		// cout << "bomb!\n";
		return true;
	}
	return false;
}

bool moveBlock() {
	bool moved = false;
	vector<char> col[6];
	
	for (int i = 0; i < 6; i++) {
		for (int j = 11; j >= 0; j--) {
			if (field[j][i] != '.') {
				col[i].push_back(field[j][i]);
			}
		}
		while (col[i].size() < 12) {
			col[i].push_back('.');
		}
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 12; j++) {
			if (field[11 - j][i] != col[i][j]) moved = true;
			field[11 - j][i] = col[i][j];
		}
	}
	return moved;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int phase = 0;
	bool bomb;
	for (int i = 0; i < 12; i++) {
		cin >> field[i];
	}
	while (1) {
		bomb = false;
		for (int i = 0; i < 12; i++) {
			fill(visited[i], visited[i] + 6, false);
		}
		for (int row = 0; row < 12; row++) {
			for (int col = 0; col < 6; col++) {
				if (visited[row][col]) continue;
				if (field[row][col] != '.' && bombCheck(row, col)) {
					bomb = true;
				}
			}
		}
		moveBlock();
		if (!bomb)
			break;
		phase++;
		// if (phase >= 10) break;
		// // cout << bomb << '\n';
		// // for (int i = 0; i < 12; i++) {
		// // 	cout << field[i] << '\n';
		// // }
	}
	cout << phase << '\n';
	return 0;
}