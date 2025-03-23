#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	int x, y;
	string dir;
	map<char, pair<int, int>> d;

	d.insert(make_pair('N', make_pair(1, 0)));
	d.insert(make_pair('S', make_pair(-1, 0)));
	d.insert(make_pair('E', make_pair(0, 1)));
	d.insert(make_pair('W', make_pair(0, -1)));
	cin >> n;
	cin >> dir;

	x = 0; y = 0;

	for (int i = 0; i < n; i++) {
		x += d[dir[i]].first;
		y += d[dir[i]].second;
	}

	cout << abs(x) + abs(y) << '\n';

	return 0;
}