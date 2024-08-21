#include <bits/stdc++.h>
using namespace std;

double price[1001][3];;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;

	cin >> T;
	for (int t = 1; t <= T; t++) {
		int N;
		cin >> N;
		long long a, b, c;
		long long answer = 0;
		for (int i = 0; i < N; i++) {
			cin >> a >> b >> c;

			int maxNum = max(a, max(b, c));
			if (maxNum <= 0) continue;
			answer += maxNum;
		}
		cout << answer << '\n';

	}

	return 0;
}