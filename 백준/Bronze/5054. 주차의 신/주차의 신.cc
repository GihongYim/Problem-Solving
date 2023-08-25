#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int test, n;
	int left, right;
	int pos;
	
	cin >> test;
	for (int t = 1; t <= test; t++) {
		cin >> n;
		left = 200;
		right = -1;
		for (int i = 0; i < n; i++) {
			cin >> pos;
			left = min(left, pos);
			right = max(right, pos);
		}
		cout << 2 * (right - left) << '\n';
	}
	return 0;
}