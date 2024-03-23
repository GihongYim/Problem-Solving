#include <bits/stdc++.h>
using namespace std;

int N;
int board[2][10][4];
int score = 0;

void draw (int n, vector<pair<int, int> >& block, int color) {
	for (int i = 0; i < block.size(); i++) {
		board[n][block[i].first][block[i].second] = color;
	}
}

bool moved(int n, vector<pair<int, int> >& block)  {
	int nx, ny;
	bool nxt = true;
	for (int i = 0; i < block.size(); i++) {
		nx = block[i].first + 1;
		ny = block[i].second;
		if (nx > 9) {
			nxt = false;
			break;
		}
		if (board[n][nx][ny] != 0) {
			nxt = false;
			break;
		}
	}
	if (nxt) {
		for (int i = 0; i < block.size(); i++) {
			block[i].first += 1;
		}
	}
	return nxt;
}

void removeLine(int n) {
	bool line;
	for (int x = 9; x >= 1; x--) {
		line = true;
		for (int y = 0; y < 4; y++) {
			if (board[n][x][y] == 0) {
				line = false;
				break;
			}
		}
		if (line) {
			score++;
			for (int yy = 0; yy < 4; yy++) {
				for (int xx = x; xx >= 1; xx--) {
					board[n][xx][yy] = board[n][xx - 1][yy];
				}
				board[n][0][yy] = 0;
			}
			x++;
		}
	}
	while (1) {
		line = false;
		for (int y = 0; y < 4; y++) {
			if (board[n][5][y] == 1) {
				line = true;
			}
		}
		if (!line)
			break;
		int x = 9;
		// score++;
		for (int yy = 0; yy < 4; yy++) {
			for (int xx = x; xx >= 1; xx--) {
				board[n][xx][yy] = board[n][xx - 1][yy];
			}
			board[n][0][yy] = 0;
		}
	}
}


void dropBlock(int t, int x, int y) {
	vector<pair<int, int>> block[2];
	block[0].push_back(make_pair(x, y));
	block[1].push_back(make_pair(y, x));
	if (t == 2) {
		block[0].push_back(make_pair(x, y + 1));
		block[1].push_back(make_pair(y + 1, x));
	} else if (t == 3) {
		block[0].push_back(make_pair(x + 1, y));
		block[1].push_back(make_pair(y, x + 1));
	}
	for (int i = 0; i < 2; i++) {
		while (1) {
			if (!moved(i, block[i])) {
				break;
			}
		}
		draw(i, block[i], 1);
		removeLine(i);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t, x, y;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 10; j++) {
			fill(board[i][j], board[i][j] + 4, 0);
		}
	}

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> t >> x >> y;
		dropBlock(t, x, y);
	}
	int tile = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 4; k++) {
				tile += board[i][j][k];
				// cout << board[i][j][k] << ' ';
			}
			// cout << '\n';
		}
		// cout << "\n\n";
	}
	cout << score << '\n';
	cout << tile << '\n';
	return 0;
}