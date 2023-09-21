#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double d1, d2, d3;
	double abc;
	double a, b, c;
	cin >> d1 >> d2 >> d3;
	abc = (d1 + d2 + d3) / 2;
	a = abc - d3;
	b = abc - d2;
	c = abc - d1;

	if (a <= 0 || b <= 0 || c <= 0) {
		cout << -1 << '\n';
	} else {
		cout << 1 << '\n';
		cout << fixed;
		cout << setprecision(1);
		cout << a << ' ' << b << ' ' << c << '\n';
	}
	return 0;
}