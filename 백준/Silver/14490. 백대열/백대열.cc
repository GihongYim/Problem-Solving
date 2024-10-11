#include <bits/stdc++.h>
using namespace std;

int calcGcd(int n, int m)
{
	if (m == 0)
		return n;
	return calcGcd(m, n % m);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	string str;

	cin >> str;

	int pos = str.find(':');
	
	n = stoi(str.substr(0, pos));
	m = stoi(str.substr(pos + 1));

	int gcd = calcGcd(n, m);

	cout << n / gcd << ':' << m / gcd << '\n';

	return 0;
}