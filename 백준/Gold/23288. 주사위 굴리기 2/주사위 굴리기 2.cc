#include <bits/stdc++.h>
using namespace std;


const int MAX = 25;

int N, M, K;
long long board[MAX][MAX];
long long dice[4][3];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
bool visited[MAX][MAX];
bool pathVisited[MAX][MAX];
long long maxLength;

void east() {
	int tmp = dice[1][2];
	dice[1][2] = dice[1][1];
	dice[1][1] = dice[1][0];
	dice[1][0] = dice[3][1];
	dice[3][1] = tmp;
}

void west() {
	int tmp = dice[1][0];
	dice[1][0] = dice[1][1];
	dice[1][1] = dice[1][2];
	dice[1][2] = dice[3][1];
	dice[3][1] = tmp;
}

void north() {
	int tmp = dice[0][1];
	dice[0][1] = dice[1][1];
	dice[1][1] = dice[2][1];
	dice[2][1] = dice[3][1];
	dice[3][1] = tmp;
}

void south() {
	int tmp = dice[3][1];
	dice[3][1] = dice[2][1];
	dice[2][1] = dice[1][1];
	dice[1][1] = dice[0][1];
	dice[0][1] = tmp;
}



void moveDice(int &x, int &y, int &dir) {
	
	int nx, ny;
	nx = x + dx[dir];
	ny = y + dy[dir];
	if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
		dir += 2;
		dir %= 4;
		nx = x + dx[dir];
		ny = y + dy[dir];
	}
	x = nx;
	y = ny;
	if (dir == 0)
		east();
	else if (dir == 2)
		west();
	else if (dir == 1)
		south();
	else if (dir == 3)
		north();
}

int	findNbr(int x, int y) {
	int nx, ny;
	int cnt = 1;
	for (int i = 0; i < N; i++) {
		fill(visited[i], visited[i] + M, false);
	}

	queue<pair<int, int> > q;
	visited[x][y] = true;
	q.push(make_pair(x, y));
	while (!q.empty()) {
		auto cur = q.front(); q.pop();

		for (int d = 0; d < 4; d++) {
			nx = cur.first + dx[d];
			ny = cur.second + dy[d];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (visited[nx][ny]) continue;
			if (board[nx][ny] != board[x][y]) continue;
			visited[nx][ny] = true;
			q.push(make_pair(nx, ny));
			cnt++;
		}
	}
	return cnt;
}

long long getScore(int x, int y) {
	maxLength = findNbr(x, y);
	vector<pair<int, int>> candi;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (visited[i][j]) candi.push_back(make_pair(i, j));
		}
	}
	return board[x][y] * maxLength;
}

void changeDir(int x, int y, int& dir) {
	if (dice[3][1] > board[x][y]) {
		dir++;
		dir %= 4;
	} else if (dice[3][1] < board[x][y]) {
		dir += 3;
		dir %= 4;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int dir = 0;
	long long score = 0;

	cin >> N >> M >> K;

	dice[0][1] = 2;
	dice[1][0] = 4;
	dice[1][1] = 1;
	dice[1][2] = 3;
	dice[2][1] = 5;
	dice[3][1] = 6;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
		}
	}
	int x, y;
	dir = 0;
	x = 0, y = 0;
	
	for (int move = 0; move < K; move++) {
		moveDice(x, y, dir);
		score += getScore(x, y);
		changeDir(x, y, dir);
	}
	cout << score << '\n';
	return 0;
}