#include <iostream>
using namespace std;

int N;
int map[2][10][5];
int answer = 0;
int removed_cnt = 0;

bool line_empty(int target, int x) {
	for (int i = 0; i < 4; i++) {
		if (map[target][x][i] != 0)
			return false;
	}
	return true;
}

bool line_check(int target, int x) {
	for (int i = 0; i < 4; i++) {
		if (map[target][x][i] == 0)
			return false;
	}
	return true;
}

void remove_line(int target, int x)
{
	for (int i = x; i >= 4; i--) {
		for (int j = 0; j < 4; j++) {
			map[target][i][j] = map[target][i - 1][j];
		}
	}
	for (int j = 0; j < 4; j++) {
		map[target][4][j] = 0;
	}
}


void down_block(int target) {
	for (int i = 8; i >= 4; i--) {
		for (int j = 0; j < 4; j++) {
			if (map[target][i][j] == 0)continue;
			if (j > 0 && map[target][i][j - 1] == map[target][i][j])continue;
			if (map[target][i][j] == map[target][i + 1][j])continue;

			if (map[target][i][j] == map[target][i][j + 1]) {
				int nx = i;
				int ny = j;
				int num = map[target][i][j];
				map[target][nx][ny] = map[target][nx][ny + 1] = 0;
				while (nx + 1 < 10 && map[target][nx + 1][ny] == 0 && map[target][nx + 1][ny + 1] == 0) {
					nx++;
				}
				map[target][nx][ny] = map[target][nx][ny + 1] = num;
			}
			else if (map[target][i - 1][j] == map[target][i][j]) {
				int nx = i;
				int ny = j;
				int num = map[target][i][j];
				map[target][nx][ny] = map[target][nx - 1][ny] = 0;
				while (nx + 1 < 10 && map[target][nx + 1][ny] == 0) {
					nx++;
				}
				map[target][nx][ny] = map[target][nx - 1][ny] = num;
			}
			else {
				int nx = i;
				int ny = j;
				int num = map[target][i][j];
				map[target][nx][ny] = 0;
				while (nx + 1 < 10 && map[target][nx + 1][ny] == 0) {
					nx++;
				}
				map[target][nx][ny] = num;
			}
		}
	}
}

void total_check(int target) {
	bool changed = false;
	while (1) {
		changed = false;
		down_block(target);
		for (int i = 9; i >= 4; i--) {
			if (line_check(target, i)) {
				changed = true;
				removed_cnt++;
				remove_line(target, i);
			}
		}
		if (!changed)break;
	}
}


void drop(int t, int x, int y,int n) {
	int nx, ny;
	if (t == 1) {
		nx = x;
		ny = y;
		while (nx + 1 < 10 && map[0][nx + 1][ny] == 0) {
			nx++;
		}
		map[0][nx][ny] = n;
		
		if (line_check(0, nx)) {
			removed_cnt++;
			remove_line(0, nx);
		}
		total_check(0);
		nx = y;
		ny = x;
		while (nx + 1 < 10 && map[1][nx + 1][ny] == 0) {
			nx++;
		}
		map[1][nx][ny] = n;
		if (line_check(1, nx)) {
			removed_cnt++;
			remove_line(1, nx);
		}
		total_check(1);
	}
	else if (t == 2) {
		nx = x;
		ny = y;
		while (nx + 1 < 10 && map[0][nx + 1][ny] == 0 && map[0][nx + 1][ny + 1] == 0) {
			nx++;
		}
		map[0][nx][ny] = map[0][nx][ny + 1] = n;

		if (line_check(0, nx)) {
			removed_cnt++;
			remove_line(0, nx);
		}
		total_check(0);
		nx = y + 1;
		ny = x;
		while (nx + 1 < 10 && map[1][nx + 1][ny] == 0) {
			nx++;
		}
		map[1][nx][ny] = map[1][nx - 1][ny] = n;

		if (line_check(1, nx)) {
			removed_cnt++;
			remove_line(1, nx);
		}
		if (line_check(1, nx)) {
			removed_cnt++;
			remove_line(1, nx);
		}
		total_check(1);
	}
	else if (t == 3) {
		nx = x + 1;
		ny = y;
		while (nx + 1 < 10 && map[0][nx + 1][ny] == 0) {
			nx++;
		}
		map[0][nx][ny] = map[0][nx - 1][ny] = n;


		if (line_check(0, nx)) {
			removed_cnt++;
			remove_line(0, nx);
		}
		if (line_check(0, nx)) {
			removed_cnt++;
			remove_line(0, nx);
		}
		total_check(0);

		nx = y;
		ny = x;
		while (nx + 1 < 10 && map[1][nx + 1][ny] == 0 && map[1][nx + 1][ny + 1] == 0) {
			nx++;
		}
		map[1][nx][ny] = map[1][nx][ny + 1] = n;


		if (line_check(1, nx)) {
			removed_cnt++;
			remove_line(1, nx);
		}
		total_check(1);
	}

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 1; i <= N; i++) {
		int t, x, y;
		cin >> t >> x >> y;
		drop(t, x, y, i);
		while (!line_empty(0, 5)) {
			remove_line(0, 9);
		}
		while (!line_empty(1, 5)) {
			remove_line(1, 9);
		}
		/*
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 4; j++) {
				cout << map[1][i][j] << ' ';
			}
			cout << '\n';
		}
		cout << '\n';
		*/
	}
	for (int u = 0; u < 2; u++) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 4; j++) {
				if (map[u][i][j] != 0)
					answer++;
			}
		}
	}
	cout << removed_cnt << '\n';
	cout << answer << '\n';


	return 0;
}