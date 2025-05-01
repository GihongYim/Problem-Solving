#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		long long x;
		cin >> x;

		cout << 2 * (x - 1) + 1 << "\n";
	}

	return 0;
}