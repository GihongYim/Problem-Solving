#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
	if (b == 0) {
		return a;
	} else {
		return gcd(b, a % b);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll x, y;

	cin >> x >> y;
	cout << "2\n";
	cout << x * y - x << '\n';
	cout << y - x * y << '\n';

	return 0;
}