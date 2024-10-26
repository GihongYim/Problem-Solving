#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T, N, NN;

	int sudoku[37][37];

	bool row[37][37];
	bool col[37][37];
	bool box[7][7][37];
	cin >> T;

	for (int t = 1; t <= T; t++) {
		cin >> N;

		NN = N * N;
		for (int i = 0; i <= NN; i++) {
			fill(row[i], row[i] + NN + 1, false);
		}

		for (int i = 0; i <= NN; i++) {
			fill(col[i], col[i] + NN + 1, false);
		}

		for (int i = 0; i <= N; i++) {
			for (int j = 0; j <= N; j++) {
				fill(box[i][j], box[i][j] + NN + 1, false);
			}
		}

		for (int i = 0; i < NN; i++) {
			for (int j = 0; j < NN; j++) {
				cin >> sudoku[i][j];
			}
		}

		bool valid = true;
		int num;
		for (int i = 0; i < NN; i++) {
			for (int j = 0; j < NN; j++) {
				num = sudoku[i][j];
				if (num > NN) {
					valid = false;
					break;
				} 
				if (row[i][num] || col[j][num] || box[i / N][j / N][num]) {
					// cout << row[i][num] << col[j][num] << box[i / N][j / N][num] << '\n';
					// cout << i << ' ' << j << '\n';
					valid = false;
					break;
				}
				row[i][num] = true;
				col[j][num] = true;
				box[i / N][j / N][num] = true;
			}
			if (!valid)
				break;
		}
		if (valid) {
			cout <<"Case #" << t << ": Yes\n";
		} else {
			cout <<"Case #" << t << ": No\n";
		}
	}


	return 0;
}