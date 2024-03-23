#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL); 

	int x, l, r;
	int diff1, diff2;

	cin >> x >> l >> r;

	diff1 = abs(x - l);
	diff2 = abs(l - r);

	if (x < l) {
		cout << l << '\n';
	} else if (x > r) {
		cout << r << '\n';
	} else {
		cout << x << '\n';
	}
	return 0;
}