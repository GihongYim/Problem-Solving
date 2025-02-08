#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	int n;
	int temp;
	int odd = 0;
	int even = 0;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		odd = 0;
		even = 0;
		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> temp;

			if (temp % 2 == 1) {
				odd += temp;
			} else {
				even += temp;
			}
		}
		if (odd > even) {
			cout << "ODD\n";
		} else if (odd < even) {
			cout << "EVEN\n";
		} else {
			cout << "TIE\n";
		}
	}

	return 0;
}