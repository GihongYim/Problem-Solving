#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a, b;

	cin >> a >> b;

	a = ((a - 1) + b) % 12 + 1;
	cout << a << '\n';

	return 0;
}