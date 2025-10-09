#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int x, y, r;

	cin >> x >> y >> r;

	cout << x - r << " " << y + r << '\n';
	cout << x + r << " " << y + r << '\n';
	cout << x + r << " " << y - r << '\n';
	cout << x - r << " " << y - r << '\n';

	return 0;
}