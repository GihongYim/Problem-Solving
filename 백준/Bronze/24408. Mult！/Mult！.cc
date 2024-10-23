#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	int fact;
	int multi;

	cin >> n;

	cin >> fact;

	bool mod = false;
	for (int i = 1; i < n; i++) {
		cin >> multi;

		if (mod) {
			fact = multi;
			mod = false;
			continue;
		}
		if (multi % fact == 0) {
			cout << multi << '\n';
			mod = true;
		}
	}

	return 0;
}