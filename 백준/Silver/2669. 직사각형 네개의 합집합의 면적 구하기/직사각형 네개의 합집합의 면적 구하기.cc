#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int sx,sy,ex,ey;
	bool map[101][101];
	for (int i = 0; i < 101; i++) {
		fill(map[i], map[i] + 101, false);
	}
	for (int i = 0; i < 4; i++) {
		cin >> sx >> sy >> ex >> ey;
		for (int x = sx; x < ex; x++) {
			for (int y = sy; y < ey; y++) {
				map[x][y] = true;
			}
		}
	}
	int answer = 0;
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (map[i][j])
				answer++;
		}
	}
	cout << answer << '\n';
	return 0;
}