#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a[21][21];
	int b[21][21];
	int c[21][21];
	int numOfCase = 1;

	while (1) {
		int m, n, p, q;
		
		cin >> m >> n >> p >> q;
		
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> a[i][j];
			}
		}

		for (int i = 1; i <= p; i++) {
			for (int j = 1; j <= q; j++) {
				cin >> b[i][j];
			}
		}
		if (m == 0 && n == 0 && p == 0 && q == 0) break;
			cout << "Case #" << numOfCase << ":\n";
		if (n != p) {
			cout << "undefined\n";
			numOfCase++;
			continue;
		}
		for (int i = 1; i <= m; i++) {
			cout << "| ";
			for (int j = 1; j <= q; j++) {
				c[i][j] = 0;
				for (int k = 1; k <= n; k++) {
					c[i][j] += a[i][k] * b[k][j];
				}
				cout << c[i][j] << ' ';
			}
			cout << "|\n";
		}
		numOfCase++;
	}

	return 0;
}