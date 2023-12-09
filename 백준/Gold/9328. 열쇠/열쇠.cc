#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
char maps[102][102];
bool visited[102][102] = {false,};
unordered_set<char> key;

int h, w;
int ans = 0;

void search(int sx, int sy) {
	queue<pair<int, int>> q;
	queue<pair<int, int>> door[27];
	visited[sx][sy] = true;
	q.push({sx, sy});

	while (!q.empty()) {
		int x = q.front().X;
		int y = q.front().Y;
		q.pop();

		if (maps[x][y] == '$') ans++;

		for (int d = 0; d < 4; d++) {
			int nx = x + dx[d];
			int ny = y + dy[d];
			char ch = maps[nx][ny];

			if (nx < 0 || ny < 0 || nx > h + 1 || ny > w + 1) continue;
			if (visited[nx][ny] || ch == '*') continue;
			visited[nx][ny] = true;

			if ('A' <= ch && ch <= 'Z') {
				if (key.count(ch + 32 ) == 0) door[ch - 'A'].push(make_pair(nx, ny));
				else q.push(make_pair(nx, ny));
			}
			else if ('a' <= ch && ch <= 'z') {
				key.insert(ch);
				int idx = ch - 'a';

				while (!door[idx].empty()) {
					q.push(door[idx].front());
					door[idx].pop();
				}
				q.push(make_pair(nx, ny));
			}
		
			else q.push(make_pair(nx, ny));
		}
		
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		ans = 0;
		fill(&maps[0][0], &maps[100][101], ' ');
		fill(&visited[0][0], &visited[100][101], false);
		key.clear();

		vector<pair<int, int>> start;

		cin >> h >> w;

		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				cin >> maps[i][j];
				if (((i == 1 || i == h) && (1 <= j && j <= w))
				|| ((1 <= i && i <= h) && (j == 1 || j == w)))
				{
					if ('a' <= maps[i][j] && maps[i][j] <= 'z') {
						key.insert(maps[i][j]);
						start.push_back({i, j});
					}
					if (maps[i][j] == '.' || maps[i][j] == '$') start.push_back({i, j});
				}
			}
		}
		string has;
		cin >> has;

		for (auto it : has) key.insert(it);

		search(0, 0);
		cout << ans << '\n';
	}
	return 0;
}