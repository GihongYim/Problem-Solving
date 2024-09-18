#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, w, v;

	cin >> a;
	cin >> w >> v;
	if (a * v <= w) {
		cout << 1 << '\n';
	} else {
		cout << 0 << '\n';
	}
	return 0;
}