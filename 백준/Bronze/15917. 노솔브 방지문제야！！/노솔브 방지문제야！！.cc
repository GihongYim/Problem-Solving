#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int q;

	cin >> q;

	for (int i = 0; i < q; i++) {
		int a;

		cin >> a;

		while (a % 2 == 0) {
			a /= 2;
		}
		if (a == 1) {
			cout << "1\n";
		} else {
			cout << "0\n";
		}
	}


	return 0;
}