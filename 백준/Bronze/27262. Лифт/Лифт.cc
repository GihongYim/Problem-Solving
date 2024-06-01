#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, k, a, b;

	cin >> n >> k >> a >> b;

	int ev = (k + n - 2) * b;
	int st = (n - 1) * a;
	cout << ev << ' ' << st << '\n';

	return 0;
}