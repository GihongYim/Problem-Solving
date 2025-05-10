#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	int m;
	int op;
	int l, r;
	int intervalSum;
	vector<int> a;

	cin >> n;
	a.resize(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	cin >> m;
	for (int i = 0; i < m; i++) {

		cin >> op >> l >> r;
		if (op == 1) {
			for (int j = l; j <= r; j++) {
				a[j] = (a[j] * a[j]) % 2010;
			}
		}
		else if (op == 2) {
			intervalSum = 0;
			for (int j = l; j <= r; j++) {
				intervalSum += a[j];
			}
			cout << intervalSum << '\n';
		}
	}


	return 0;
}