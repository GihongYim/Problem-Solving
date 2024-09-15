#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long long n, b;
	
	cin >> n >> b;

	if (n == 1) {
		cout << "EZPZ\n";
		return 0;
	}

	long long sumX = 0;
	long long sumY = 0;
	long long x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		sumX += x;
		sumY += y;
	}

	long long p = sumY - n * b;
	long long q = sumX;

	if (q < 0) {
		q = -q;
		p = -p;
	}


	if (q == 0) {
		cout << "EZPZ\n";
		return 0;
	} else if (p % q == 0) {
		cout << p << '\n';
	} else {
		cout << p / gcd(p, q) << '/' << q / gcd(p, q) << '\n';
	}


	return 0;
}