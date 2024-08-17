#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long h, m, s;

	cin >> h >> m >> s;

	long long sec = h * 3600 + m * 60 + s;

	long long q;

	const long long MOD = 24 * 3600;

	cin >> q;
	long long t, c;
	for (int i = 0; i < q; i++) {
		cin >> t;

		if (t == 1) {
			cin >> c;
			sec = (sec + c) % MOD;
		} else if (t == 2) {
			cin >> c;
			sec = (sec - c) % MOD;
			if (sec < 0) sec += MOD;
		} else if (t == 3) {
			h = (sec / 3600) % 24;
			m = (sec / 60) % 60;
			s = sec % 60;
			cout << h << ' ' << m << ' ' << s << '\n';
		}
	}
	return 0;
}