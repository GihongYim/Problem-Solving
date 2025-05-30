#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	int n;
	int hamming = 0;
	vector<int> v, u;

	cin >> T;

	for (int t = 1; t <= T; t++) {
		hamming = 0;
		cin >> n;

		v.resize(n);
		u.resize(n);

		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}

		for (int i = 0; i < n; i++) {
			cin >> u[i];

		}

		for (int i = 0; i < n; i++) {
			if (v[i] != u[i]) {
				hamming++;
			}
		}
		cout << hamming << '\n';
	}
	return 0;
}