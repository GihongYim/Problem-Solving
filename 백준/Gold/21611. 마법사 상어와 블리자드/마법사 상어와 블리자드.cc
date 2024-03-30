#include <bits/stdc++.h>
using namespace std;

const int MAX = 55;

int N, M;
long long ball[MAX][MAX];
bool visited[MAX][MAX];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int bx[4] = {-1, 1, 0, 0};
int by[4] = {0, 0, -1, 1};
long long totalScore = 0;

vector<pair<int, int>> magic;

void bomb(int d, int s) {
	int x = (N + 1) / 2 - 1;
 	int y = (N + 1) / 2 - 1;


	for (int i = 0; i < s; i++) {
		x += bx[d];
		y += by[d];
		ball[x][y] = 0;
	}
}

void removeDup(vector<long long>& v) {
	if (v.empty()) return;

	vector<long long> unique;
	vector<long long> tmp;
	bool moved = true;
	while (!v.empty() && moved) {
		unique.clear();
		tmp.clear();
		moved = false;
		tmp.push_back(v[0]);
		for (int i = 1; i < v.size(); i++) {
			if (v[i] != v[i - 1]) {
				if (tmp.size() < 4) {
					for (int j = 0; j < tmp.size(); j++) {
						unique.push_back(tmp[j]);
					}
				} else {
					totalScore += (tmp[0] * tmp.size());
					moved = true;
				}
				tmp.clear();
			}
			tmp.push_back(v[i]);
		}
		if (tmp.size() < 4) {
			for (int i = 0; i < tmp.size(); i++) {
				unique.push_back(tmp[i]);
			}
		} else {
			totalScore += (tmp[0] * tmp.size());
			moved = true;
		}
		v = unique;
	}
}

void ballOrder(vector<long long>& v) {
	int x, y, nx, ny;
	int d = 0;

	for (int i = 0; i < N; i++) 
		fill(visited[i], visited[i] + N, false);
	visited[N / 2][N / 2] = true;

	x = (N + 1) / 2 - 1;
	y = (N + 1) / 2 - 2;

	visited[x][y] = true;
	if (ball[x][y] > 0) 
		v.push_back(ball[x][y]);
	while (1) {
		nx = x + dx[(d + 1) % 4];
		ny = y + dy[(d + 1) % 4];
		if (!visited[nx][ny]) {
			d = (d + 1) % 4;
		}
		nx = x + dx[d];
		ny = y + dy[d];
		if (nx < 0 || nx >= N || ny < 0 || ny >= N) break;
		x = nx;
		y = ny;
		if (ball[x][y] > 0)
			v.push_back(ball[x][y]);
		visited[x][y] = true;
	}
}

void drawMap(vector<long long> &v) {
	int x, y, nx, ny;
	int d = 0;
	for (int i = 0; i < N; i++)  {
		fill(visited[i], visited[i] + N, false);
		fill(ball[i], ball[i] + N, 0);
	}
	if (v.empty()) return;
	visited[N / 2][N / 2] = true;
	x = (N + 1) / 2 - 1;
	y = (N + 1) / 2 - 2;
	visited[x][y] = true;
	ball[x][y] = v[0];
	for (int i = 1; i < v.size(); i++) {
		nx = x + dx[(d + 1) % 4];
		ny = y + dy[(d + 1) % 4];
		if (!visited[nx][ny]) {
			d = (d + 1) % 4;
		}
		nx = x + dx[d];
		ny = y + dy[d];
		if (nx < 0 || nx >= N || ny < 0 || ny >= N) break;
		x = nx;
		y = ny;
		visited[x][y] = true;
		ball[x][y] = v[i];
	}
}

void move() {
	int x, y, nx, ny;
	int d = 0;
	vector<long long> v;

	ballOrder(v);
	removeDup(v);
	drawMap(v);
}

void genBall() {
	int x, y, nx, ny;
	int d = 0;
	vector<long long> v;

	vector<long long> res;
	vector<long long> tmp;

	ballOrder(v);
	if (v.empty()) return;
	tmp.push_back(v[0]);
	for (int i = 1; i < v.size(); i++) {
		if (v[i - 1] != v[i]) {
			res.push_back(tmp.size());
			res.push_back(tmp[0]);
			tmp.clear();
		}
		tmp.push_back(v[i]);
	}
	res.push_back(tmp.size());
	res.push_back(tmp[0]);
	drawMap(res);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> ball[i][j];
		}
	}
	int d, s;
	for (int i = 0; i < M; i++) {
		cin >> d >> s;
		magic.push_back(make_pair(d - 1, s));
	}
	for (int i = 0; i < M; i++) {
		bomb(magic[i].first, magic[i].second);
		move();
		genBall();

	}
	cout << totalScore << '\n';
	return 0;
}