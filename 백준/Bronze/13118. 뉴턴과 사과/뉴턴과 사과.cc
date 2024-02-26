#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int p[4];
	int x, y, r;
	vector<int> collision;

	for (int i = 0; i < 4; i++) {
		cin >> p[i];
	}
	cin >> x >> y >> r;

	for (int i = 0; i < 4; i++) {
		if (p[i] == x)
			collision.push_back(i + 1);
	}

	if (collision.empty()) {
		cout << 0 << '\n';
	} else {
		for (int i = 0; i < collision.size(); i++) {
			cout << collision[i] << ' ';
		}
		cout << '\n';
	}

	return 0;
}