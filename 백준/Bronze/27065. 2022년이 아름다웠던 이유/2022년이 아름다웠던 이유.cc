#include <bits/stdc++.h>
using namespace std;

int sumOfDivisors(int n)
{
	int sum = 1;

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			sum += i;
			if (i != n / i) {
				sum += n / i;
			}
		}
	}
	return sum;
}

bool isAbundant(int n)
{
	return sumOfDivisors(n) > n;
}

bool isDeficiant(int n)
{
	return sumOfDivisors(n) < n;
}

bool isPerfect(int n)
{
	return sumOfDivisors(n) == n;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	int n;

	cin >> T;

	for (int t = 1; t <= T; t++) {
		cin >> n;
		if (!isAbundant(n)) {
			cout << "BOJ 2022\n";
			continue;
		} 
		bool valid = true;
		for (int i = 1; i * i <= n; i++) {
			if (n % i == 0) {
				if (i != n && !isDeficiant(i) && !isPerfect(i)) {
					valid = false;
					break;
				}
				if (i != 1 && i != n / i && !isDeficiant(n / i) && !isPerfect(n / i)) {
					valid = false;
					break;
				}
			}
		}
		if (valid) {
			cout << "Good Bye\n";
		} else {
			cout << "BOJ 2022\n";
		}
	}

	return 0;
}