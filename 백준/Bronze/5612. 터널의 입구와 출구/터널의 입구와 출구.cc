#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	int m;
	cin >> n >> m;

	int sj = m;

	for (int i = 0; i < n; i++) {
		int inCar;
		int outCar;

		cin >> inCar >> outCar;
		if (sj == 0) continue;
		m += inCar;
		m -= (outCar);
		if (m < 0) {
			sj = 0;
		} else {
			sj = max(sj, m);
		}

	}
	cout << sj << '\n';

	return 0;
}