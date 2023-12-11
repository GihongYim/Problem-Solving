#include <bits/stdc++.h>
using namespace std;

int num;
int pos[26];
bool visited[5][5];

int checkBingo(int x, int y) {
	bool bingo = true;
	int count = 0;

	for (int i = 0; i < 5; i++) {
		bingo = true;
		for (int j = 0; j < 5; j++){
			if (!visited[i][j]) {
				bingo = false;
				break;
			}
		}
		if (bingo) count++;
	}

	for (int i = 0; i < 5; i++) {
		bingo = true;
		for (int j = 0; j < 5; j++){
			if (!visited[j][i]) {
				bingo = false;
				break;
			}
		}
		if (bingo) count++;
	}
	

	bingo = true;
	for (int i = 0; i < 5; i++) {
		if (!visited[i][i]) {
			bingo = false;
			break;
		}
	}
	if (bingo) count++;

	bingo = true;
	for (int i = 0; i < 5; i++) {
		if (!visited[i][4 - i]) {
			bingo = false;
			break;
		}
	}
	if (bingo) count++;
	return count;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	for (int i = 0; i < 5; i++) {
		fill(visited[i], visited[i] + 5, false);
	}

	for (int i = 0; i < 25; i++) {
		cin >> num;
		pos[num] = i;
	}
	int x, y;
	int bingo = 0;
	for (int i = 1; i <= 25; i++) {
		cin >> num;
		x = pos[num] / 5;
		y = pos[num] % 5;
		visited[x][y] = true;
		bingo = checkBingo(x, y);
		if (bingo >= 3) {
			cout << i << '\n';
			break;
		}
			
	}
	return 0;
}