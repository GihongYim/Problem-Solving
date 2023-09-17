#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int l, r, a;

	cin >> l >> r >> a;
	if (l > r)
	{
		int temp;
		temp = l;
		l = r;
		r = temp;
	}
	if (r - l >= a)
	{
		cout << (l + a) * 2 << '\n';
	}
	else
	{
		cout << 2 * r + (a - (r - l)) / 2 * 2 << '\n';
	}
	return 0;
}