#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string n;

	cin >> n;
	long long a, b;

	a = stol(n.substr(0, n.length() / 2));
	b = stol(n.substr(n.length() / 2, n.length() / 2));
	cout << a << ' ' << b << '\n';


	return 0;
}