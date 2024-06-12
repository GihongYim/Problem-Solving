#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int x, N;

	cin >> x >> N;
	for (int i = 1; i <= N; i++) {
		if (x % 2 == 0) {
			x = (x / 2) ^ 6;
		} else {
			x = (2 * x) ^ 6;
		}
	}
	cout << x << '\n';
	return 0;
}