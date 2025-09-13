#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k;
	int want;
	int apple = 0;

	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		cin >> want;
		if (abs(n - want)  < abs(1 - want)) {
			cout << n << ' ';
		} else {
			cout << 1 << ' ';
		}
	}

	cout << '\n';



	return 0;
}