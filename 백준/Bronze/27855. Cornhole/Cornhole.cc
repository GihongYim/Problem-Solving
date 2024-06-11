#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int h1, b1;
	int h2, b2;

	cin >> h1 >> b1;
	cin >> h2 >> b2;

	int diff = (3 * h1 + b1) - (3 * h2 + b2);

	if (diff > 0) {
		cout << 1 << ' ' << diff << '\n';
	} else if (diff < 0) {
		cout << 2 << ' ' << -diff << '\n';
	} else {
		cout << "NO SCORE\n";
	}


	return 0;
}