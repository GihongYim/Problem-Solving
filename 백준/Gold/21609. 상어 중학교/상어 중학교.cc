#include <bits/stdc++.h>
using namespace std;

#define vectorpii vector<pair<int, int> > 
#define pii pair<int, int>
int N, M;
int lat[20][20];
bool visited[20][20];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

vectorpii getGroup(int x, int y) {
	int color = lat[x][y];
	vectorpii group;
	
	queue<pii> q;
	visited[x][y] = true;
	q.push(make_pair(x, y));
	group.push_back(make_pair(x, y));

	while (!q.empty()) {
		int cx = q.front().first;
		int cy = q.front().second;
		q.pop();

		for (int d = 0; d < 4; d++) {
			int nx = cx + dx[d];
			int ny = cy + dy[d];

			if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
			if (visited[nx][ny]) continue;
			if (lat[nx][ny] != color && lat[nx][ny] != 0) continue;
			visited[nx][ny] = true;
			group.push_back(make_pair(nx, ny));
			q.push(make_pair(nx, ny));
		}
	}
	for (auto pos : group) {
		if (lat[pos.first][pos.second] == 0) {
			visited[pos.first][pos.second] = false;
		}
	}
	return group;
}

int getRainbow(vectorpii& group) {
	int cnt = 0;
	for (auto pos: group) {
		if (lat[pos.first][pos.second] == 0)
			cnt++;
	}
	return cnt;
}

pii getStandardBlock(vectorpii& v) {
	pii standard;
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		if (lat[v[i].first][v[i].second] != 0) {
			standard = v[i];
			break;
		}
	}
	return standard;
}
vectorpii& compGroup(vectorpii& a, vectorpii& b) {
	if (a.size() > b.size()) { 
		return a;
	} else if (a.size() < b.size()) {
		return b;
	} else {
		int rainbowA = getRainbow(a);
		int rainbowB = getRainbow(b);
		if (rainbowA > rainbowB) {
			return a;
		} else if (rainbowA < rainbowB) {
			return b;
		} else {
			pii aStandard = getStandardBlock(a);
			pii bStandard = getStandardBlock(b);
			if (aStandard.first > bStandard.first) {
				return a;
			} else if (aStandard.first < bStandard.first) {
				return b;
			} else {
				if (aStandard.second > bStandard.second) {
					return a;
				} else {
					return b;
				}
			}
		}
	}
}

void deleteGroup(vectorpii group) {
	for (auto pos : group) {
		lat[pos.first][pos.second] = -2;
	}
}


int autoPlay() {
	int score = 0;
	vectorpii largestGroup(0);
	vectorpii group;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (lat[i][j] <= 0 || visited[i][j]) continue;
			group = getGroup(i, j);
			if (group.size() <= 1) continue;
			largestGroup = compGroup(largestGroup, group);
		}
	}
	if (largestGroup.size() >= 2) {
		score = (largestGroup.size()) * (largestGroup.size());
	} else {
		score = 0;
	}
	deleteGroup(largestGroup);
	return score;
}

void gravity() {
	int xx;
	for (int y = 0; y < N; y++) {
		for (int x = N - 1; x >= 0; x--) {
			if (lat[x][y] < 0) continue;
			xx = x;
			while (xx < N - 1 && lat[xx + 1][y] == -2) {
				xx++;
			}
			if (x != xx) {
				lat[xx][y] = lat[x][y];
				lat[x][y] = -2;
			}
		}
	}
}

void rotate()  {
	int rotated[20][20];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			rotated[N - 1 - j][i] = lat[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			lat[i][j] = rotated[i][j];
		}
	}
}

int play() {
	int score = 0;
	int tmp;
	while (1) {
		for (int i = 0; i < N; i++) {
			fill(visited[i], visited[i] + N, false);
		}
		tmp = autoPlay();
		if (tmp == 0)
			break;
		score += tmp;
		gravity();
		rotate();
		gravity();
	}
	return score;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int score = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> lat[i][j];
		}
	}
	score = play();
	cout << score << '\n';

	return 0;
} 