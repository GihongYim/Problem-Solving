#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n = 1;
	int Cn;

	cin >> Cn;

	while (Cn != 1) {
		if (Cn % 2 == 0) {
			Cn /= 2;
		} else {
			Cn = 3 * Cn + 1;
		}
		n++;
	}
	cout << n << '\n';

	return 0;
}