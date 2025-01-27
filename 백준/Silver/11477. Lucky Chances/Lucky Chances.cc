#include <bits/stdc++.h>
using namespace std;

#define MAX_L 101

int r, c;
int answer = 0;
int numbers[MAX_L][MAX_L];

int numOfWin(int x, int y)
{
	int cnt = 0;

	bool win = true;
	
	for (int i = 0; i < x; i++) {
		if (numbers[i][y] >= numbers[x][y]) {
			win = false;
			break;
		}
	}
	if (win)
		cnt++;
	
	win = true;
	
	for (int i = x + 1; i < r; i++) {
		if (numbers[i][y] >= numbers[x][y]) {
			win = false;
			break;
		}
	}

	if (win)
		cnt++;

	win = true;

	for (int j = 0; j < y; j++) {
		if (numbers[x][j] >= numbers[x][y]) {
			win = false;
			break;
		}
	}
	if (win)
		cnt++;
	
	win = true;
	
	for (int j = y + 1; j < c; j++) {
		if (numbers[x][j] >= numbers[x][y]) {
			win = false;
			break;
		}
	}

	if (win)
		cnt++;
	// cout << x << ' ' << y << ' ' << cnt << '\n';
	return cnt;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> r >> c;
	
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> numbers[i][j];
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			answer += numOfWin(i, j);
		}
	}

	cout << answer << '\n';
	 
	return 0;
}