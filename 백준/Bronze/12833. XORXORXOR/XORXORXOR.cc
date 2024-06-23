#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a, b, c;

	cin >> a >> b >> c;
	for (int i = 0; i < c % 2; i++) {
		a = a ^ b;
	}
	cout << a << '\n';

	return 0;
}