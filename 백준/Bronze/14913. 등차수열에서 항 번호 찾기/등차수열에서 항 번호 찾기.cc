#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, d, k;

	cin >> a >> d >> k;

	int diff = k - a;
	if (diff % d != 0 || diff / d < 0) {
		cout << "X\n";
	} else {
		cout << diff / d + 1 << '\n';
	}

	return 0;
}