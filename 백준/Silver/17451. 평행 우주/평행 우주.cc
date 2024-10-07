#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;

	cin >> n;

	vector<long long> v(n + 1);

	v[0] = 0;
	ll maxV = 0;
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}

	ll curr = v[n];

	for (int i = n - 1; i >= 1; i--) {
		if (v[i] > curr) {
			curr = v[i];
		} else {
			if (curr % v[i]) {
				curr = (curr / v[i] + 1) * v[i];
			}
		}
	}
	cout << curr << '\n';
	
	return 0;
}