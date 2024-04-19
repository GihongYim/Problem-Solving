#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	string tmp;

	cin >> n;
	vector<long long> v(n);

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		reverse(tmp.begin(), tmp.end());
		// cout << tmp << '\n';
		v[i] = stol(tmp);
	}
	// cout << '\n';
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}


	return 0;
}