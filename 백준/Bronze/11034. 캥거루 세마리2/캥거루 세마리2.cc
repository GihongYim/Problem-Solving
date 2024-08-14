#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a, b, c;

	while (cin >> a >> b >> c) {
		int cnt = 0;
		while (1) {
			if (a + 2 == c)
				break;
			if (b - a > c - b) {
				int mid = b - 1;
				c = b;
				b = mid;
			} else {
				int mid = b + 1;
				a = b;
				b = mid;
			}
			cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}