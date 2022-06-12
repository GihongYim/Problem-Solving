#include <iostream>
#include <algorithm>
using namespace std;

int N;
int  map[6][20][20];

int  answer = -1;

bool isvalid(int x, int y) {
	if (x < 0 || x >= N || y < 0 || y >= N)
		return false;
	else
		return true;
}


void search(int n)
{
	/*
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << map[n][i][j] << ' ';
		}
		cout << '\n';
	}
	cout << '\n';
	*/
	if (n >= 5) {
	

		int ret = 0; 
		for (int i = 0; i < N; i++) { 
			for (int j = 0; j < N; j++) {
				answer = max(answer, map[n][i][j]);
			}
		}
		return;
	}
	bool merged[20][20] = { false, };

	// 왼쪽
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			map[n + 1][i][j] = map[n][i][j];
			merged[i][j] = false;
		}
	}

	int nx, ny;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[n + 1][i][j] != 0) {
				nx = i, ny = j;
				while (isvalid(nx, ny - 1) && map[n + 1][nx][ny - 1] == 0) {
					ny--;
				}
				if (ny == 0) {
					int temp = map[n + 1][i][j];
					map[n + 1][i][j] = 0;
					map[n + 1][nx][ny] = temp;
				}
				else {
					if (map[n + 1][nx][ny - 1] == map[n + 1][i][j]) {
						if (!merged[nx][ny - 1]) {
							map[n + 1][nx][ny - 1] *= 2;
							map[n + 1][i][j] = 0;
							merged[nx][ny - 1] = true;
						}
						else {
							int temp = map[n + 1][i][j];
							map[n + 1][i][j] = 0;
							map[n + 1][nx][ny] = temp;
						}
					}
					else {
						int temp = map[n + 1][i][j];
						map[n + 1][i][j] = 0;
						map[n + 1][nx][ny] = temp;
					}
				}

			}
		}
	}
	search(n + 1);

	// 오른쪽
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			map[n + 1][i][j] = map[n][i][j];
			merged[i][j] = false;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = N - 1; j >= 0; j--) {
			if (map[n + 1][i][j] != 0) {
				nx = i, ny = j;
				while (isvalid(nx, ny + 1) && map[n + 1][nx][ny + 1] == 0) {
					ny++;
				}
				if (ny == N - 1) {
					int temp = map[n + 1][i][j];
					map[n + 1][i][j] = 0;
					map[n + 1][nx][ny] = temp;
				}
				else {
					if (map[n + 1][nx][ny + 1] == map[n + 1][i][j]) {
						if (!merged[nx][ny + 1]) {
							map[n + 1][nx][ny + 1] *= 2;
							map[n + 1][i][j] = 0;
							merged[nx][ny + 1] = true;
						}
						else {
							int temp = map[n + 1][i][j];
							map[n + 1][i][j] = 0;
							map[n + 1][nx][ny] = temp;
						}
					}
					else {
						int temp = map[n + 1][i][j];
						map[n + 1][i][j] = 0;
						map[n + 1][nx][ny] = temp;
					}
				}

			}
		}
	}
	search(n + 1);
	// 위
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			map[n + 1][i][j] = map[n][i][j];
			merged[i][j] = false;
		}
	}
	for (int j = 0; j < N; j++) {
		for (int i = 0; i < N; i++) {
			if (map[n + 1][i][j] != 0) {
				nx = i, ny = j;
				while (isvalid(nx - 1, ny) && map[n + 1][nx - 1][ny] == 0) {
					nx--;
				}
				if (nx == 0) {
					int temp = map[n + 1][i][j];
					map[n + 1][i][j] = 0;
					map[n + 1][nx][ny] = temp;
					
				}
				else {
					if (map[n + 1][nx - 1][ny] == map[n + 1][i][j]) {
						if (!merged[nx - 1][ny]) {
							map[n + 1][nx - 1][ny] *= 2;
							map[n + 1][i][j] = 0;
							merged[nx - 1][ny] = true;
						}
						else {
							int temp = map[n + 1][i][j];
							map[n + 1][i][j] = 0;
							map[n + 1][nx][ny] = temp;
						}
					}
					else {
						int temp = map[n + 1][i][j];
						map[n + 1][i][j] = 0;
						map[n + 1][nx][ny] = temp;
					}
				}

			}
		}
	}
	search(n + 1);
	// 아래
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			map[n + 1][i][j] = map[n][i][j];
			merged[i][j] = false;
		}
	}
	for (int j = 0; j < N; j++) {
		for (int i = N - 1; i >= 0; i--) {
			if (map[n + 1][i][j] != 0) {
				nx = i, ny = j;
				while (isvalid(nx + 1, ny) && map[n + 1][nx + 1][ny] == 0) {
					nx++;
				}
				if (nx == N - 1) {
					int temp = map[n + 1][i][j];
					map[n + 1][i][j] = 0;
					map[n + 1][nx][ny] = temp;
				}
				else {
					if (map[n + 1][nx + 1][ny] == map[n + 1][i][j]) {
						if (!merged[nx + 1][ny]) {
							map[n + 1][nx + 1][ny] *= 2;
							map[n + 1][i][j] = 0;
							merged[nx + 1][ny] = true;
						}
						else {
							int temp = map[n + 1][i][j];
							map[n + 1][i][j] = 0;
							map[n + 1][nx][ny] = temp;
						}
					}
					else {
						int temp = map[n + 1][i][j];
						map[n + 1][i][j] = 0;
						map[n + 1][nx][ny] = temp;
					}
				}

			}
		}
	}
	search(n + 1);
}






int main()
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[0][i][j];
		}
	}
	search(0);
	cout << answer << '\n';

	return 0;
}