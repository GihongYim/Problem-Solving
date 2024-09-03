#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int s, n, m;

	cin >> s >> n >> m;
	int total = 0;
	for (int i = 0; i < n + m; i++) {
		int num;

		cin >> num;
		if (num == 1) {
			if (total == s) {
				s *= 2;
			}
			total++;
		} else {
			total--;
		}
	}
	cout << s << '\n';
	return 0;
}