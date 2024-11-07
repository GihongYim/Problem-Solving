#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;

	cin >> T;
	for (int t = 1; t <= T; t++) {
		int n, a, d;

		cin >> n >> a >> d;

		cout << n * (2 * a + (n - 1) * d) / 2 << '\n';
	}
	return 0;
}