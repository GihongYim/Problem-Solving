#include <bits/stdc++.h>
using namespace std;

long long youjin(string n) {
	long long result = 1;
	for (int i = 0; i < n.length(); i++) {
		result *= (n[i] - '0');
	}
	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string n, m;

	cin >> n;
	for (int i = 1; i < n.length(); i++) {
		// cout << youjin(n.substr(0, i)) << ' ' <<  youjin(n.substr(i)) << '\n';
		if (youjin(n.substr(0, i)) == youjin(n.substr(i))) {
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";

	return 0;
}