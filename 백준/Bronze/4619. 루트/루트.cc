#include <bits/stdc++.h>
using namespace std;

long long power(long long a, long long n)
{

	if (n == 1)
		return a;
	long long p = power(a, n / 2);
	if (n % 2 == 1) {
 		return a * p * p;
	} else {
		return p * p;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long long b, n;

	while (1) {
		cin >> b >> n;
		if (b == 0 && n == 0)
			break;
		long long minA = -1;
		long long minDiff = 3000000;
		for (long long a = 1; power(a, n) <= 2000000; a++) {
			long long diff = abs(pow(a, n) - b);
			if (diff < minDiff) {
				minA = a;
				minDiff = diff;
			}
		}
		cout << minA << '\n';
		
	}

	return 0;
}