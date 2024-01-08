#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	int cnt = 0;
	string line;
	string prefix;
	cin >> n;
	getline(cin, line);
	for (int i = 0; i < n; i++) {
		getline(cin, line);
		prefix = line.substr(0, 11);
		if (prefix == "Simon says ")
			cout << line.substr(10) << '\n';
	}

	return 0;
}