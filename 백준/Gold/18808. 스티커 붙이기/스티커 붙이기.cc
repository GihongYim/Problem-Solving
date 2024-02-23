#include <bits/stdc++.h>
using namespace std;

typedef struct s_sticker {
	int r;
	int c;
	int yellow[11][11];
} t_sticker;

int N, M, K;
int Map[101][101];
t_sticker sticker[101];

bool checkMap(int index, int start_r, int start_c) {
	int r = sticker[index].r;
	int c = sticker[index].c;

	if (start_r + r > N || start_c + c > M)
		return false;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (sticker[index].yellow[i][j] != 0) {
				if (Map[start_r + i][start_c + j] != 0) {
					return false;
				}
			}
		}
	}
	return true;
}

void writeMap(int index, int start_r, int start_c) {
	int r = sticker[index].r;
	int c = sticker[index].c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (sticker[index].yellow[i][j] == 1) {
				Map[start_r + i][start_c + j] = 1;
			}
		}
	}
	return;
}

void rotate(int index) {
	int r = sticker[index].r;
	int c = sticker[index].c;
	int prev[101][101];


	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			prev[i][j] = sticker[index].yellow[i][j];
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			sticker[index].yellow[j][r - 1 - i] = prev[i][j];
		}
	}
	sticker[index].r = c;
	sticker[index].c = r;
}


void paste(int index) {
	for (int d = 0; d < 4; d++){
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (checkMap(index, i, j)) {
					writeMap(index, i, j);
					return;
				}
			}
		}
		rotate(index);
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	
	int r, c;
	int s_index = 0;
	int result = 0;

	cin >> N >> M >> K;
	for (int i = 0; i < 101; i++) {
		fill(Map[i], Map[i] + 101, 0);
	}
	for (int k = 0; k < K; k++) {
		cin >> r >> c;
		sticker[k].r = r;
		sticker[k].c = c;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> sticker[k].yellow[i][j];
			}
		}
	}
	for (int s = 0; s < K; s++) {
		paste(s);		
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			result += Map[i][j];
		}
	}
	cout << result << '\n';

	return 0;
}