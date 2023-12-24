#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a[3];

	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	sort(a, a + 3);

	cout << max(a[2] - a[1], a[1] - a[0]) - 1 << '\n';
	return 0;
}