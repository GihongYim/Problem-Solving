#include <bits/stdc++.h>
using namespace std;

const int MAX = 500;

int N;
int student[MAX][MAX];
vector<int> peer[MAX];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int scoreBoard[5] = {0, 1, 10, 100, 1000};

int getNumOfFriend(int n, int x, int y) {
	int nx, ny;
	int cnt = 0;
	for (int d = 0; d < 4; d++) {
		nx = x + dx[d];
		ny = y + dy[d];
		if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
		if (student[nx][ny] == 0) continue;
		for (auto nxt : peer[n]) {
			if (nxt == student[nx][ny]) {
				cnt++;
				break;
			}
		}
	}
	return cnt;
}

int numOfVacant(int x, int y) {
	int nx, ny;
	int cnt = 0;

	for (int d = 0; d < 4; d++) {
		nx = x + dx[d];
		ny = y + dy[d];
		if (nx < 0 || nx >= N || ny < 0 || ny >= N)  continue;
		if (student[nx][ny] == 0) cnt++;
 	}
	return cnt;
}


void makePos(int n) {
	int x = -1;
	int y = -1;
	int numOfFriend = -1;
	int vacant = -1;
	int nbh;
	int nbVacant;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (student[i][j] > 0) continue;
			nbh = getNumOfFriend(n, i, j);
			if (nbh > numOfFriend) {
				numOfFriend = nbh;
				x = i;
				y = j;
				vacant = numOfVacant(i, j);
			} else if (nbh == numOfFriend) {
				nbVacant = numOfVacant(i, j);
				if (nbVacant > vacant) {
					vacant = nbVacant;
					x = i;
					y = j;
				}
			}
		}
	}
	// cout << x << ' ' << y << '\n';
	student[x][y] = n;
}

int calcScore(int x, int y) {
	int n = student[x][y];
	int cnt = 0;
	int score = 0;
	int nx, ny;

	for (int d = 0; d < 4; d++) {
		nx = x + dx[d];
		ny = y + dy[d];
		if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
		if (student[nx][ny] == 0) continue;
		for (auto nxt : peer[n]) {
			if (nxt == student[nx][ny]) {
				cnt++;
				break;
			}
		}
	}
	return scoreBoard[cnt];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	int a, b;
	
	for (int i = 0; i < N; i++) {
		fill(student[i], student[i] + N, 0);
	}

	for (int i = 0; i < N * N; i++) {
		cin >> a;

		for (int j = 0; j < 4; j++) {
			cin >> b;
			peer[a].push_back(b);
		}
		makePos(a);
	}
	int totalScore = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (student[i][j] == 0) continue;
			totalScore += calcScore(i, j);
			// cout << student[i][j] << ' ';
		}
		// cout << '\n';
	}
	cout << totalScore << '\n';

	return 0;
}