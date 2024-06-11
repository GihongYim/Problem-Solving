#include <bits/stdc++.h>
using namespace std;


#define pii pair<int, int>
#define LOWER_TEMP first.first
#define UPPER_TEMP first.second
#define CLOTH_SCORE second
const int MAX = 201;
const int INF = 0x3f3f3f3f;

int D, N;
int dp[MAX][MAX];
int T[MAX];
pair<pii, int> cloth[MAX];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> D >> N;
	for (int i = 0; i < D; i++) {
		cin >> T[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> cloth[i].LOWER_TEMP >> cloth[i].UPPER_TEMP >> cloth[i].CLOTH_SCORE;
	}

	for (int i = 0; i < D; i++) {
		fill(dp[i], dp[i] + N, 0);
	}

	for (int day = 0; day < D - 1; day++) {
		for (int cl = 0; cl < N; cl++) {
			if (cloth[cl].LOWER_TEMP > T[day] || cloth[cl].UPPER_TEMP < T[day]) continue;

			for (int ncl = 0; ncl < N; ncl++) {
				if (cloth[ncl].LOWER_TEMP > T[day + 1] || cloth[ncl].UPPER_TEMP < T[day + 1]) continue;
				int diff = abs(cloth[cl].CLOTH_SCORE - cloth[ncl].CLOTH_SCORE);

				if (dp[day][cl] + diff > dp[day + 1][ncl]) {
					dp[day + 1][ncl] = dp[day][cl] + diff;
				}
			}
		}
	}

	int answer = 0;
	for (int i = 0; i < D; i++) {
		for (int j = 0; j < N; j++) {
			answer = max(answer, dp[i][j]);
		}
	}
	cout << answer << '\n';
	return 0;
}