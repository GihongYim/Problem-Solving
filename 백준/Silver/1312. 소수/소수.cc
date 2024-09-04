#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, n;

	cin >> a >> b >> n;

	if (a % b == 0) {
		cout << 0 << '\n';
		return 0;
	}

	a = a % b;

	int answer = 0;
	for (int i = 0; i < n; i++) {
		a *= 10;
		answer = (int)(a / b);
		a = a % b;
	}
	cout << answer << '\n';
	return 0;
}