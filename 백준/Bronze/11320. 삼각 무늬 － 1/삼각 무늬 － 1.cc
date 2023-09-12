#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	int B, A;
	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> A >> B;
		cout << A / B * (2 + (A / B - 1) * 2) / 2 << '\n';
	}
	return 0;
}