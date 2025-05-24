#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int p, q, s;
	int iGcd, iLcm;

	cin >> p >> q >> s;

	iGcd = gcd(p, q);
	iLcm = p * q / iGcd;

	if (iLcm <= s) {
		cout << "yes\n";
	}
	else {
		cout << "no\n";
	}


	return 0;
}