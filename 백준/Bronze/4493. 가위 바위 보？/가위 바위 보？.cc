#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t, n;
	string p1,p2;
	int result;
	cin >> t;

	for (int test = 1; test <= t; test++) {
		cin >> n;
		result = 0;
		for (int i = 0; i < n; i++) {
			cin >> p1 >> p2;
			if (p1 == "R") {
				if (p2 == "P") {
					result++;
				} else if (p2 == "S") {
					result--;
				}
			} else if (p1 == "P") {
				if (p2 == "R") {
					result--;
				} else if (p2 == "S") {
					result++;
				}
			} else {
				if (p2 == "R") {
					result++;
				} else if (p2 == "P") {
					result--;
				}
			}
		}
		if (result < 0)
			cout << "Player 1\n";
		else if (result > 0)
			cout << "Player 2\n";
		else
			cout << "TIE\n";
	}
	return 0;
}