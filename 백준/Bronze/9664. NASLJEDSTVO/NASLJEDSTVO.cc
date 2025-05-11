#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, o;
	int sister;
	cin >> n >> o;

	sister = o / (n - 1);
	if (o % (n - 1) == 0) {
		cout << o + sister - 1 << ' ' << o + sister << '\n';
	} else {
		cout << o + sister << ' ' << o + sister << '\n';
	}

	return 0;
}