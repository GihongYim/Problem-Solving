#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k;

	cin >> n;

	for (int t = 0; t < n; t++) {
		cin >> k;
		int a1, a2, a3;
		bool fib = true;
		cin >> a1 >> a2;
		for (int i = 0; i < k - 2; i++) {
			cin >> a3;
			if (a3 != a2 + a1) fib = false;
			a1 = a2;
			a2 = a3;
		}
		if (fib) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}