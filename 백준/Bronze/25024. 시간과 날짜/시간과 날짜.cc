#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	int x,y;

	int day[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	cin >> T;

	for (int t = 1; t <= T; t++) {
		cin >> x >> y;
		if (x >= 0 && x <= 23 && y >= 0 && y <= 59)
			cout << "Yes ";
		else
			cout << "No ";
		if (x >= 1 && x <= 12 && y >= 1 && y <= day[x])
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}