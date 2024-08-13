#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;

	cin >> n;
	

	int cTotal = 100;
	int sTotal = 100;

	for (int i = 0; i < n; i++) {
		int c, s;
		cin >> c >> s;

		if (c > s) {
			sTotal -= c;
		} else if (c < s) {
			cTotal -= s;
		}
	}
	cout << cTotal << '\n';
	cout << sTotal << '\n';
	return 0;
}