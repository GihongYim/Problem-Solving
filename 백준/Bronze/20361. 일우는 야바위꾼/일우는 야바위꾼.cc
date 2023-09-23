#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x, k;
	int a, b;
	cin >> n >> x >> k;
	for (int i = 0; i < k; i++) {
		cin >> a >> b;
		if (a == x) {
			x = b;
		} else if (b == x) {
			x = a;
		}
	}
	cout << x << '\n';
	return 0;
}