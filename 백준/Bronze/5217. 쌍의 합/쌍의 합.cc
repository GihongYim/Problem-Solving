#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	int n;
	int lower;
	int upper;
	bool first;

	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> n;
		cout << "Pairs for " << n << ":";
		lower = 1;
		upper = 12;
		first = true;
		while (lower < upper) {
			if (lower + upper == n) {
				if (first) {
					cout << ' ' << lower << ' ' << upper;
					first = false;
				} else {
					cout << ", " << lower << ' ' << upper;
				}
				lower++;
				upper--;
			}
			else if (lower + upper < n)
				lower++;
			else if (lower + upper > n)
				upper--;
		}
		cout << '\n';
	}
	return 0;
}