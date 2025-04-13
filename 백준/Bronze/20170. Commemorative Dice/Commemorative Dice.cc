#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<int> dice[2];

	for (int i = 0; i < 2; i++) {
		dice[i].resize(6);
		for (int j = 0; j < 6; j++) {
			cin >> dice[i][j];
		}
	}

	int win = 0;
	int total = 36;

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (dice[0][i] > dice[1][j]) {
				win++;
			}
		}
	}

	int gcd = __gcd(win, total);
	cout << win / gcd << "/" << total / gcd << "\n";

	return 0;
}