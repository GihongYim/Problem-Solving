#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int w1, h1, w2, h2;

	cin >> w1 >> h1 >> w2 >> h2;

	cout << 4 + 2 * max(w1, w2)  + 2 * (h1 + h2);

	return 0;
}