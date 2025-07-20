#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long a, b;
	long long added;
	long long total = 0;
	cin >> a >> b;

	// added = 1;
	// for (int i = 0; i <= b; i++) {
	// 	total += added;
	// 	added += (a - 2);
	// }

	total = (b + 1) + (a - 2) * (b * (b + 1)) / 2;
	cout << total << '\n';
	return 0;
}