#include <bits/stdc++.h>
using namespace std;

bool game_end(int map[][4]) {
	for (int i = 1; i <= 3; i++) {
		if (map[i][1] != 0 && map[i][1] == map[i][2] && map[i][1] == map[i][3])
			return true;
		if (map[1][i] != 0 && map[1][i] == map[2][i] && map[1][i] == map[3][i])
			return true;
	}
	if (map[1][1] != 0 && map[1][1] == map[2][2] && map[1][1] == map[3][3])
		return true;
	if (map[1][3] != 0 && map[1][3] == map[2][2] && map[1][3] == map[3][1])
		return true;
	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int map[4][4];
	for (int i = 0; i < 4; i++)
		fill(map[i], map[i] + 4, 0);
	int x, y;
	int player;

	cin >> player;
	for (int i = 0; i < 9; i++) {
		cin >> x >> y;
		map[x][y] = player;
		if (game_end(map)) {
			cout << player << '\n';
			return 0;
		}
		player = 3 - player;
	}
	cout << 0 << '\n';
	return 0;
}