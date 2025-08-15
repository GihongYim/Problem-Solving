#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	int a;
	int b;
	int maxA = 0;
	int maxB = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		maxA = max(maxA, a);
	}
	for (int i = 0; i < m; i++) {
		cin >> b;
		maxB = max(maxB, b);
	}

	cout << maxA + maxB << '\n';

	return 0;
}