#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	int maxScore = 0;
	int a, b, x;
	int trick[5];

	for (int i = 0; i < n; i++){
		cin >> a >> b;

		for (int j = 0; j < 5; j++) {
			cin >> trick[j];
		}

		int first = 0, second = 0;
		for (int j = 0; j < 5; j++) {
			if (trick[j] > first) {
				second = first;
				first = trick[j];
			} else if (trick[j] > second) {
				second = trick[j];
			}
		}

		int score = max(a, b) + first + second;
		if (score > maxScore) maxScore = score;
	}

	cout << maxScore << '\n';
	return 0;
}