#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	float x, y;

	while (1) {
		cin >> x >> y;
		
		
		if (x > 0) {
			if (y > 0) {
				cout << "Q1\n";
			} else if (y < 0) {
				cout << "Q4\n";
			} else {
				cout << "AXIS\n";
			}
		} else if (x < 0) {
			if (y > 0) {
				cout << "Q2\n";
			} else if (y < 0) {
				cout << "Q3\n";
			} else {
				cout << "AXIS\n";
			}
		} else {
			cout << "AXIS\n";
		}
		if (x == 0.0 && y == 0.0)
			break;
	}
	return 0;
}