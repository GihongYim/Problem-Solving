#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		int N;
		cin >> N;
		vector<int> m(N);

		for (int i = 0; i < N; i++) {
			cin >> m[i];
		}

		int y = 0;
		for (int i = 1; i < N; i++) {
			if (m[i] < m[i - 1]) {
				y += m[i - 1] - m[i];
			}
		}

		int rate = 0;
		for (int i = 1; i < N; i++) {
			if (m[i - 1] - m[i] > rate) {
				rate = m[i - 1] - m[i];
			}
		}

		int z = 0;
		for (int i = 0; i < N - 1; i++) {
			z += min(m[i], rate);
		}

		cout << "Case #" << t << ": " << y << " " << z << '\n';
	}

	return 0;
}
