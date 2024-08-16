#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	int cnt = 0;

	cin >> n;
	while (n >= 10) {
		int nextN = 1;

		while (n > 0) {
			nextN *= (n % 10);
			n /= 10;
		}
		n = nextN;
		cnt++;
	}
	cout << cnt << '\n';
	return 0;
}