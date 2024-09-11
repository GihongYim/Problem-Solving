#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int y[2];
	int curr = 0;

	cin >> y[0] >> y[1];
	while (1) {
		y[1 - curr] += y[curr];
		curr = 1- curr;
		if (y[curr] >= 5) break;
	}
	if (curr == 0) {
		cout << "yj\n";
	} else {
		cout << "yt\n";
	}
	return 0;
}