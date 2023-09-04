#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int p, n;
	double d, a, b, f;
	double time;
	double dist;
	cin >> p;
	for (int test = 1; test <= p; test++) {
		cin >> n >> d >> a >> b >> f;

		cout << test << fixed << setprecision(6) << ' ' << d / (a + b) * f << '\n';
	}
	return 0;
}