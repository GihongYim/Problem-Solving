#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int m;

	cin >> m;

	vector<int> count(m);

	double a;
	while (cin >> a) {
		a += 1e-9;
		count[m * int(a * 1000000LL) / 1000000LL]++;
	}

	for (int i = 0; i < m; i++) {
		cout << count[i] << ' ';
	}


	return 0;
}