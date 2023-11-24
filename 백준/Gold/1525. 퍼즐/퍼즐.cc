#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;
int dice[3][3] = { {1,2,3},{4,5,6},{7,8,0} };
int target[3][3];
int curr[3][3];
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
unordered_set<int> s;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int last = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> target[i][j];
			last *= 10;
			last += target[i][j];
		}
	}
	if (last == 123456780) {
		cout << 0 << '\n';
		return 0;
	}
	queue<int> q;
	s.insert(123456780);
	q.push(123456780);
	int ret = 0;
	bool ok = false;
	while (!q.empty()) {
		int qsize = q.size();
		ret++;
		for (int u = 0; u < qsize; u++) {
			int temp = q.front();
//			cout << temp << '\n';
			q.pop();
			int x, y;
			for (int i = 2; i >= 0; i--) {
				for (int j = 2; j >= 0; j--) {
					curr[i][j] = temp % 10;
					temp /= 10;
					if (curr[i][j] == 0) {
						x = i;
						y = j;
					}
				}
			}
			for (int d = 0; d < 4; d++) {
				int next[3][3];
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						next[i][j] = curr[i][j];
					}
				}
				int nx = x + dx[d];
				int ny = y + dy[d];
				if (nx < 0 || nx > 2 || ny < 0 || ny > 2) {
					continue;
				}
				int aa = next[nx][ny];
				next[nx][ny] = next[x][y];
				next[x][y] = aa;
				int block = 0;
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						block *= 10;
						block += next[i][j];
					}
				}
				if (block == last) {
					ok = true;
					break;
				}
				if (s.find(block) == s.end()) {
					q.push(block);
					s.insert(block);
				}
			}
		}
		if (ok)break;
	}
	if (ok) {
		cout << ret << '\n';
	}
	else {
		cout << -1 << '\n';
	}
	return 0;
}