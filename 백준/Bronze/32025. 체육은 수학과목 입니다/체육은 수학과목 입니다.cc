#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int h, w;

	cin >> h >> w;
	cout << min(h, w) * 100 / 2 << '\n';

	return 0;
}