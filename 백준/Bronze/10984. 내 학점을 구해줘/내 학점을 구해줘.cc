#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int test_case, n;
	float c, g, totalC, totalG;

	cin >> test_case;
	for (int t = 0; t < test_case; t++) {
		cin >> n;
		totalC = 0;
		totalG = 0;
		for (int i = 0; i < n; i++) {
			cin >> c >> g;
			totalC += c;
			totalG += (c * g);
		}
		cout << setprecision(1) << fixed;
		cout << (int)totalC << ' ' << totalG / totalC << '\n';
	}
	return 0;
}