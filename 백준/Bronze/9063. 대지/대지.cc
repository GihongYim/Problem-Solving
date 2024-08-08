#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	int minX, maxX, minY, maxY;
	minX = 10005;
	maxX = -10005;
	minY = 10005;
	maxY = -10005;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;

		minX = min(x, minX);
		minY = min(y, minY);
		maxX = max(x, maxX);
		maxY = max(y, maxY);
	}

	cout << (maxX - minX) * (maxY - minY) << '\n';
	return 0;
}